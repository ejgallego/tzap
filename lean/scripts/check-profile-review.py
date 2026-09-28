#!/usr/bin/env python3
"""Check the archived report's numerical provenance and its actual browser UI."""

import argparse
import hashlib
import importlib.util
import json
from pathlib import Path
import statistics
import shlex
import re
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
    generator = json.loads((report / 'generator.json').read_text())
    for name, expected in generator.get('presentation', {}).get('files_sha256', {}).items():
        require(digest(report / name) == expected, 'Presentation asset changed: '+name)
    manifest = json.loads((report / 'source-manifest.json').read_text())
    require(digest(report / 'source-manifest.json') == model['manifest_sha256'], 'Changed manifest')
    for kind in ['profiles', 'links']:
        for item in model[kind]:
            source = next(p for p in manifest[kind] if
                          (p['id'] == item['id'] if kind == 'profiles' else p['title'] == item['title']))
            require(digest(root / source['path']) == item['sha256'], 'Linked artifact changed: '+item['title'])
    for figure in model.get('figures', []):
        require(digest(report / figure['path']) == figure['sha256'], 'Figure changed: '+figure['path'])
    inventory = json.loads((root / 'evidence/archive.json').read_text())
    for entry in inventory['files']:
        require(digest(root / 'evidence' / entry['path']) == entry['sha256'], entry['path'])
    original_cache = {}
    seen_sources = set()
    def check_projection(item):
        path = report / item['copied_samples']
        require(digest(path) == item['samples_sha256'], str(path))
        require(path.read_bytes() == (root / item['samples']).read_bytes(), 'Dataset snapshot differs')
        rows = [json.loads(line) for line in path.read_text().splitlines()]
        for row in rows:
            path = root / 'evidence' / row['source_file']
            if path not in original_cache:
                original_cache[path] = [json.loads(line) for line in path.read_text().splitlines()]
            original = original_cache[path][int(row['source_line']) - 1]
            source_id = (row['source_file'], row['source_line'])
            require(source_id not in seen_sources, 'Duplicated source observation')
            seen_sources.add(source_id)
            for key, value in original.items():
                retained = row['source_slot'] if key == 'slot' and 'source_slot' in row else row[key]
                require(retained == value and type(retained) is type(value), 'Changed original field: '+key)
            require(row['block'] == row['phase'] + '-' + str(original.get('round', original.get('pass'))), 'Changed block identity')
            require(row['configuration'] == original['label'], 'Changed configuration')
            require(digest(root / 'evidence' / row['validation_record']) == row['validation_sha256'], 'Changed validation record')
            if 'source_slot' in row:
                require(row['slot'] == original['slot'] + 1, 'Changed execution order')
        return rows

    def check_statistics(values, actual):
        if not values:
            require(actual is None, 'Invented completion statistics')
            return
        quartiles = statistics.quantiles(values, n=4, method='inclusive') if len(values)>1 else [values[0]]*3
        expected = dict(n=len(values), median=statistics.median(values), q1=quartiles[0],
                        q3=quartiles[2], iqr=quartiles[2]-quartiles[0], min=min(values), max=max(values))
        for key, value in expected.items():
            require(abs(actual[key] - value) <= 1e-12 * max(1, abs(value)), 'Statistic mismatch: '+key)

    datasets = {}
    for item in model['datasets']:
        rows = check_projection(item)
        datasets[item['id']] = rows
        for name, series in item['series'].items():
            selected = [r for r in rows if r['configuration'] == name and r['included']]
            require(series['observation_ids'] == [r['id'] for r in selected], 'Changed included IDs')
            require(len(series['outcomes']) == sum(r['configuration'] == name for r in rows), 'Dropped outcome')
            check_statistics([r['elapsed_ns']/1e9 for r in selected], series['statistics'].get('wall_s'))
    audit = json.loads((root / 'audit.json').read_text())
    expected_sources = {(c['directory']+'/runs.jsonl', line) for c in audit['campaigns']
                        for line in c.get('source_lines', range(1, c['rows'] + 1))}
    require(seen_sources == expected_sources and len(seen_sources) == audit['observations'],
            'Incomplete original observation coverage')
    for item in model['baselines']:
        rows = [r for r in datasets[item['dataset']] if r['configuration'] == item['configuration'] and r['included']]
        check_statistics([r['elapsed_ns']/1e9 for r in rows], item['series']['statistics'].get('wall_s'))
    for item in model['comparisons']:
        rows = [r for r in datasets[item['dataset']] if r['included']]
        sides = {side:{r['block']:r['elapsed_ns']/1e9 for r in rows if r['configuration'] == item[side]} for side in ['control','candidate']}
        require(sides['control'].keys() == sides['candidate'].keys(), 'Incomplete matched pairs')
        for side, values in sides.items():
            check_statistics(list(values.values()), item['statistics'][side])
        saving = [value - sides['candidate'][pair] for pair,value in sides['control'].items()]
        check_statistics(saving, item['statistics']['paired_saving_s'])
        require(item['statistics']['candidate_faster'] == sum(s>0 for s in saving), 'Changed paired wins')
    censored = [r for rows in datasets.values() for r in rows if r['outcome'] == 'timeout']
    require(len(censored) == 1 and censored[0]['case'] == 'qft20' and not censored[0]['included'], 'Missing QFT timeout')
    require(censored[0]['phase'] == 'warmup' and censored[0]['timeout_s'] == 60 and not censored[0]['validated'], 'Timeout treated as measured completion')
    qft = next(b for b in model['baselines'] if b['id'] == 'original-qft20')['series']
    require(not qft['statistics'] and not qft['censored'], 'Invented measured QFT baseline')
    rejected = [c for c in model['comparisons'] if c['decision_status'] == 'rejected']
    require(len(rejected) == 2 and all(c['statistics']['candidate']['n'] == 10 for c in rejected), 'Rejected valid observations dropped')
    return model


def compare_previous(model, previous):
    old = json.loads((previous / 'report/review-data.json').read_text())
    refreshed = {f'{kind}-{case}' for kind in ['total', 'rust']
                 for case in ['gf16', 'gf32', 'gf64', 'hwb8', 'chebyshev', 'qft20']}
    for item in old['comparisons']:
        if item['id'] in refreshed:
            continue
        current = next(c for c in model['comparisons'] if c['id'] == item['id'])
        for key in ['control', 'candidate', 'paired_saving_s', 'candidate_faster', 'pair_ids', 'savings', 'median_reduction_pct']:
            require(current['statistics'][key] == item['statistics'][key], 'Changed retained comparison: '+item['id']+'/'+key)
    for item in old['baselines']:
        if item['id'].removeprefix('original-') in ['gf16', 'gf32', 'gf64', 'hwb8', 'chebyshev', 'qft20']:
            continue
        current = next(b for b in model['baselines'] if b['id'] == item['id'])
        require(current['series']['statistics'] == item['series']['statistics'], 'Changed retained baseline')
    return dict(retained_comparisons=len(old['comparisons']) - len(refreshed),
                refreshed_comparisons=len(refreshed), baseline_entries=len(old['baselines']),
                completed_baselines=sum(bool(b['series']['statistics'].get('wall_s')) for b in old['baselines']),
                statistics_exact=True, previous_model_sha256=digest(previous / 'report/review-data.json'))


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
        require(page.locator('section.test').count() == 11, 'Missing grouped tests')
        require(page.locator('h1').inner_text().startswith('tzap:'), 'Wrong report')
        require(page.locator('#test-baseline tbody.benchmark').count() == 8, 'Baseline is not one group of eight benchmarks')
        require('Warmup; no median' in page.locator('#original-qft20').inner_text(), 'Timeout lost its scope')
        model = json.loads((root/'report/review-data.json').read_text())
        tests = json.loads((root/'report/presentation.json').read_text())['tests']
        for test in tests:
            actual = page.locator('#'+test['id']+' tbody.benchmark').evaluate_all('els => els.map(e => e.id)')
            require(actual == test['benchmarks'], 'Benchmark grouping changed')
        for record in model['baselines'] + model['comparisons']:
            sides = ([record['series']] if 'configuration' in record else
                     [record['statistics']['series'][side] for side in ['control','candidate']])
            row = page.locator('#'+record['id']+' tr.run')
            require(row.count() == 1, 'Baseline and candidate must share one benchmark row')
            description = row.locator('.command summary')
            require(description.is_visible() and len(description.inner_text()) < 65, 'Missing compact benchmark description')
            codes = row.locator('.command code')
            require(codes.count() == len(sides), 'Missing captured command')
            require(not codes.first.is_visible(), 'Long command still shown by default')
            description.click()
            for index, series in enumerate(sides):
                source = (series['observations'] or series['outcomes'])[0]
                code = codes.nth(index)
                require(code.is_visible() and code.inner_text() == shlex.join(source['argv']), 'Exact command unavailable or altered')
                if series['statistics'].get('wall_s'):
                    for metric in ['median','iqr']:
                        value = row.locator('.'+metric).nth(index).inner_text()
                        match = re.fullmatch(r'([\d.]+) (s|ms|µs|ns)', value)
                        require(match is not None, 'Unreadable timing: '+value)
                        seconds = float(match[1]) * {'s':1,'ms':1e-3,'µs':1e-6,'ns':1e-9}[match[2]]
                        expected = series['statistics']['wall_s'][metric]
                        require(abs(seconds-expected) <= max(abs(expected)*.0005,1e-12), 'Displayed timing differs from evidence')
            description.click()
            if 'statistics' in record:
                stats = record['statistics']
                before, after = stats['control']['median'], stats['candidate']['median']
                factor = row.locator('.relative strong').inner_text()
                match = re.fullmatch(r'([\d.]+)× (faster|slower)', factor)
                require(match is not None, 'Missing relative performance: '+factor)
                faster = before > after
                require(match[2] == ('faster' if faster else 'slower'), 'Relative direction reversed')
                expected = max(before,after) / min(before,after)
                require(abs(float(match[1])-expected) <= expected*.005, 'Incorrect speedup factor')
                percent = row.locator('.relative small').inner_text()
                match = re.fullmatch(r'([\d.]+)% (less|more) time', percent)
                require(match is not None and match[2] == ('less' if faster else 'more'), 'Ambiguous percent change')
                expected = abs(100*(after/before-1))
                require(abs(float(match[1])-expected) <= max(expected*.005,1e-12), 'Incorrect percentage change')
        visible_text = page.locator('body').inner_text()
        for removed in ['synthesis tables unused', 'measured: 6 completed', 'One warmup per binary']:
            require(removed not in visible_text, 'Repeated metadata still visible: '+removed)
        plots = page.locator('section.test .plots img')
        require(plots.count() == len(model['comparisons']) + 2,
                'Missing distribution or overview plot')
        require(plots.evaluate_all('els => els.every(e => !e.closest("details"))'), 'Plots are still collapsed')
        for plot in plots.all():
            require(plot.is_visible(), 'Plot not displayed by default')
        plot = page.locator('#test-tags .plots figure').first
        compact_width = plot.bounding_box()['width']
        page.get_by_label('Plots', exact=True).select_option('large')
        require(plot.bounding_box()['width'] > compact_width*1.4, 'Plot size control has no effect')
        page.locator('#test-tags').scroll_into_view_if_needed()
        page.screenshot(path=str(screenshots / 'plots-large.png'))
        page.get_by_label('Plots', exact=True).select_option('compact')
        page.locator('#test-tags').scroll_into_view_if_needed()
        page.screenshot(path=str(screenshots / 'paired.png'))
        page.evaluate('window.scrollTo(0,0)')
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
        search = page.get_by_label('Find a test')
        search.fill('rejected')
        require(page.locator('section.test:visible').count() == 2, 'Test filter failed')
        search.fill('there-is-no-such-experiment')
        require(page.locator('section.test:visible').count() == 0, 'Empty filter failed')
        search.fill('')
        require(page.locator('section.test:visible').count() == 11, 'Filter reset failed')
        decision = page.get_by_label('Decision', exact=True)
        decision.select_option('rejected')
        require(page.locator('section.test:visible').count() == 2, 'Decision filter failed')
        search.fill('Chebyshev')
        require(page.locator('section.test:visible').count() == 1, 'Combined filters failed')
        search.fill('')
        decision.select_option('accepted')
        require(page.locator('section.test:visible').count() == 7, 'Accepted filter failed')
        decision.select_option('reference')
        require(page.locator('section.test:visible').count() == 2, 'Reference filter failed')
        decision.select_option('all')
        page.locator('#test-gate-owner').scroll_into_view_if_needed()
        page.screenshot(path=str(screenshots / 'rejected.png'))
        page.locator('#test-lazy > details > summary').click()
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
            'test_and_decision_filters':True,'self_profile_toggle_and_filter':True,
            'grouped_benchmarks_and_warmup_timeout':True, 'compact_descriptions_and_exact_command_toggles':True,
            'plots_visible_by_default':True, 'displayed_timings_match_evidence':True, 'paired_benchmark_rows':True,
            'relative_performance_verified':True, 'plot_size_control':True}


def main():
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root',type=Path,default=Path(__file__).resolve().parents[1]/'benchmarks/journey')
    parser.add_argument('--url',default='http://localhost:8769/report/')
    parser.add_argument('--screenshots',type=Path,default=Path('/tmp/tzap-review-browser'))
    parser.add_argument('--numerical-only',action='store_true')
    parser.add_argument('--previous',type=Path,help='Prior journey bundle; compare every retained statistic exactly')
    parser.add_argument('--output',type=Path,help='Write the completed verification record as JSON')
    args=parser.parse_args()
    model=numerical_check(args.root)
    negative_checks()
    observation_count=json.loads((args.root/'audit.json').read_text())['observations']
    result={'numerical_comparisons':len(model['comparisons']),'baselines':len(model['baselines']),
            'datasets':len(model['datasets']),'original_observations':observation_count,
            'source_projection_exact':True,'timeout_censored':True,'rejected_observations_included':True,
            'profile_and_figure_hashes_valid':True,'negative_validation_and_corruption_checks':True,
            'checker_sha256':digest(Path(__file__)),
            'report_html_sha256':digest(args.root / 'report/index.html'),
            'model_sha256':digest(args.root / 'report/review-data.json')}
    if args.previous:
        result['previous_report']=compare_previous(model,args.previous)
    if not args.numerical_only:
        result['browser']=browser_check(args.root,args.url,args.screenshots)
    print(json.dumps(result,indent=2))
    if args.output:
        args.output.write_text(json.dumps(result,indent=2)+'\n')


if __name__ == '__main__':
    main()
