#!/usr/bin/env python3
"""Check the archived report's numerical provenance and its actual browser UI."""

import argparse
import csv
import hashlib
import importlib.util
import json
from pathlib import Path
import statistics
import tempfile
from urllib.parse import urljoin, urlparse
from urllib.request import Request, urlopen


def require(condition, message):
    if not condition:
        raise ValueError(message)


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def numerical_check(root):
    report = root / 'report'
    model = json.loads((report / 'review-data.json').read_text())
    for profile in model['profiles']:
        require(digest(root / profile['path']) == profile['sha256'], 'Profile/viewer changed: '+profile['id'])
    for figure in model.get('figures', []):
        require(digest(report / figure['path']) == figure['sha256'], 'Figure changed: '+figure['path'])
    inventory = json.loads((root / 'evidence/archive.json').read_text())
    for entry in inventory['files']:
        require(digest(root / 'evidence' / entry['path']) == entry['sha256'], entry['path'])
    original_cache = {}
    def check_projection(item):
        path = report / item['copied_samples']
        require(digest(path) == item['samples_sha256'], str(path))
        with path.open(newline='') as stream:
            rows = list(csv.DictReader(stream))
        for row in rows:
            path = root / 'evidence' / row['source_file']
            if path not in original_cache:
                original_cache[path] = [json.loads(line) for line in path.read_text().splitlines()]
            original = original_cache[path][int(row['source_line']) - 1]
            require(float(row['wall_s']) == original['elapsed_ns'] / 1e9, 'Changed original elapsed time')
            require(json.loads(row['argv']) == original['argv'], 'Changed original command')
            require(row['pair'] == row['phase'] + '-' + str(original.get('round', original.get('pass'))), 'Changed pair identity')
            require(row['configuration'] == original['label'], 'Changed configuration')
        return [r for r in rows if r['phase'] == 'measured' and r['accepted'] == 'true']
    for item in model['baselines']:
        rows = check_projection(item)
        require(statistics.median(float(r['wall_s']) for r in rows) == item['series']['statistics']['wall_s']['median'], 'Baseline median mismatch')
    for item in model['comparisons']:
        rows = check_projection(item)
        sides = {side:{r['pair']:float(r['wall_s']) for r in rows if r['configuration'] == item[side]} for side in ['control','candidate']}
        require(sides['control'].keys() == sides['candidate'].keys(), 'Incomplete matched pairs')
        for side, values in sides.items():
            require(statistics.median(values.values()) == item['statistics'][side]['median'], 'Comparison median mismatch')
        saving = [value - sides['candidate'][pair] for pair,value in sides['control'].items()]
        require(statistics.median(saving) == item['statistics']['paired_saving_s']['median'], 'Paired median mismatch')
    censored = json.loads((root / 'inputs/censored.json').read_text())
    require(len(censored) == 1 and censored[0]['case'] == 'qft20' and censored[0]['accepted'] == 'false', 'Missing QFT censoring')
    require(censored[0]['wall_s'] >= 60 and censored[0]['validated'] == 'false', 'Timeout treated as validated completion')
    rejected = [c for c in model['comparisons'] if c['id'].startswith('rejected-')]
    require(len(rejected) == 2 and all(c['statistics']['candidate']['n'] == 10 for c in rejected), 'Rejected valid observations dropped')
    return model


def negative_checks():
    path = Path(__file__).with_name('profile-journey.py')
    spec = importlib.util.spec_from_file_location('journey_adapter', path)
    adapter = importlib.util.module_from_spec(spec)
    spec.loader.exec_module(adapter)
    with tempfile.TemporaryDirectory(prefix='tzap-review-negative-') as temp:
        root = Path(temp)
        validation = root / 'validation.json'
        validation.write_text(json.dumps({'gf64':{'metrics_identical':False}}))
        try:
            adapter.validation_node(root, {'validation':'validation.json','validation_kind':'modern'}, 'gf64')
        except ValueError:
            pass
        else:
            raise ValueError('Missing output validation was accepted')
        validation.write_text('original')
        (root / 'archive.json').write_text(json.dumps({'files':[{'path':'validation.json','sha256':digest(validation)}]}))
        validation.write_text('modified')
        try:
            adapter.verify_archive(root)
        except ValueError:
            pass
        else:
            raise ValueError('Modified evidence was accepted')


def browser_check(root, url, screenshots):
    from playwright.sync_api import sync_playwright
    screenshots.mkdir(parents=True, exist_ok=True)
    http_paths = set()
    with sync_playwright() as p:
        browser = p.chromium.launch(executable_path='/usr/bin/google-chrome', headless=True, args=['--no-sandbox'])
        context = browser.new_context(viewport={'width':1280,'height':1000}, reduced_motion='reduce')
        page = context.new_page()
        errors = []
        page.on('pageerror', lambda error: errors.append(str(error)))
        page.goto(url, wait_until='networkidle')
        require(page.locator('article.comparison').count() == 26, 'Missing comparison cards')
        require(page.locator('h1').inner_text().startswith('tzap:'), 'Wrong report')
        page.screenshot(path=str(screenshots / 'desktop.png'))
        # Evidence and source/profile links must resolve from a standalone bundle.
        for relative in ['report/index.html','evidence/index.html','views/original-self.html','views/packed-self.html','views/lazy-self.html']:
            target = urljoin(url, '../' + relative)
            page.goto(target, wait_until='networkidle')
            for link in page.locator('a[href],img[src],script[src],link[href],iframe[data-source]').evaluate_all(
                    'els => els.map(e => e.getAttribute("href") || e.getAttribute("src") || e.getAttribute("data-source"))'):
                if link.startswith('#'):
                    require(page.locator('[id="'+link[1:]+'"]').count() == 1, 'Broken local anchor: '+link)
                    continue
                absolute = urljoin(target,link)
                require(urlparse(absolute).netloc == urlparse(url).netloc, 'Unexpected remote dependency: '+absolute)
                http_paths.add(absolute)
        for target in sorted(http_paths):
            with urlopen(Request(target,method='HEAD')) as response:
                require(response.status == 200, 'Missing HTTP evidence: '+target)
        page.goto(url, wait_until='networkidle')
        search = page.get_by_label('Find an experiment')
        search.fill('Rejected:')
        require(page.locator('article.comparison:visible').count() == 2, 'Experiment filter failed')
        search.fill('there-is-no-such-experiment')
        require(page.locator('article.comparison:visible').count() == 0, 'Empty filter failed')
        search.fill('')
        require(page.locator('article.comparison:visible').count() == 26, 'Filter reset failed')
        page.locator('#rejected-gate-owner').scroll_into_view_if_needed()
        page.screenshot(path=str(screenshots / 'rejected.png'))
        page.locator('#lazy-gf32-o3').scroll_into_view_if_needed()
        profile = page.locator('#lazy-self')
        button = profile.locator('button[data-viewer]')
        button.click()
        iframe = profile.locator('iframe')
        require(iframe.is_visible(), 'Self-profile iframe did not open')
        frame = page.frame_locator('#frame-lazy-self')
        frame.get_by_label('Find a symbol').fill('lean_copy_expand_array')
        require(frame.locator('tbody tr:visible').count() == 1, 'Symbol filter failed')
        page.screenshot(path=str(screenshots / 'self-profile.png'))
        button.click()
        require(not iframe.is_visible(), 'Self-profile iframe did not close')
        for width in [390, 768]:
            page.set_viewport_size({'width':width,'height':900})
            page.goto(url,wait_until='networkidle')
            require(page.evaluate('document.documentElement.scrollWidth <= innerWidth'), 'Report overflows viewport')
            page.screenshot(path=str(screenshots / f'mobile-{width}.png'))
            page.goto(urljoin(url,'../views/lazy-self.html'),wait_until='networkidle')
            require(page.evaluate('document.documentElement.scrollWidth <= innerWidth'), 'Self-profile overflows viewport')
        require(not errors, 'Browser errors: '+str(errors))
        browser.close()
    return {'http_artifacts_checked':len(http_paths),'viewports':[1280,768,390],'browser_errors':errors,
            'experiment_filter':True,'self_profile_toggle_and_filter':True}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1]/'benchmarks/journey')
    parser.add_argument('--url',default='http://localhost:8769/report/')
    parser.add_argument('--screenshots',type=Path,default=Path('/tmp/tzap-review-browser'))
    parser.add_argument('--numerical-only',action='store_true')
    parser.add_argument('--output',type=Path,help='Write the completed verification record as JSON')
    args=parser.parse_args()
    model=numerical_check(args.root)
    negative_checks()
    result={'numerical_comparisons':len(model['comparisons']),'baselines':len(model['baselines']),
            'source_projection_exact':True,'timeout_censored':True,'rejected_observations_included':True,
            'profile_and_figure_hashes_valid':True,'negative_validation_and_corruption_checks':True,
            'checker_sha256':digest(Path(__file__)),
            'report_html_sha256':digest(args.root / 'report/index.html'),
            'model_sha256':digest(args.root / 'report/review-data.json')}
    if not args.numerical_only:
        result['browser']=browser_check(args.root,args.url,args.screenshots)
    print(json.dumps(result,indent=2))
    if args.output:
        args.output.write_text(json.dumps(result,indent=2)+'\n')


if __name__ == '__main__':
    main()
