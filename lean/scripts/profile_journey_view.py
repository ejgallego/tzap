"""Compact benchmark descriptions and plots over the skill's unchanged model."""

import argparse
import hashlib
import html
import json
from pathlib import Path
import shlex
import shutil

E = html.escape
DESCRIPTIONS = {
    'gf16': 'gf16 · 16-bit field multiplication',
    'gf32': 'gf32 · 32-bit field multiplication',
    'gf64': 'gf64 · 64-bit field multiplication',
    'hwb8': 'hwb8 circuit',
    'chebyshev': 'Chebyshev circuit',
    'qft20': 'QFT · 20 qubits',
    'gf32-o3': 'gf32 · 32-bit field multiplication · O3',
    'gf64-o3': 'gf64 · 64-bit field multiplication · O3',
}


def duration(value):
    if value is None:
        return '—'
    for scale, unit in [(1, 's'), (1e3, 'ms'), (1e6, 'µs'), (1e9, 'ns')]:
        if abs(value * scale) >= 1 or scale == 1e9:
            return f'{value * scale:.4g} {unit}'


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def relative(statistics):
    if not statistics['paired_saving_s']:
        return 'Not estimated'
    before, after = statistics['control']['median'], statistics['candidate']['median']
    if before == after:
        return '<strong>Same median</strong><small>0% change</small>'
    faster = before > after
    ratio = before / after if faster else after / before
    factor = f'{ratio:.3f}' if ratio < 1.01 else f'{ratio:.3g}'
    percent = abs(100 * (after / before - 1))
    return (f'<strong>{factor}× {"faster" if faster else "slower"}</strong>'
            f'<small>{percent:.3g}% {"less" if faster else "more"} time</small>')


def render(root, report):
    model = json.loads((report / 'review-data.json').read_text())
    catalog = json.loads((root / 'catalog.json').read_text())
    tests = catalog['tests']
    records = {b['id']: b for b in model['baselines'] + model['comparisons']}
    selected = [bid for test in tests for bid in test['benchmarks']]
    if len(selected) != len(set(selected)) or set(selected) != set(records):
        raise ValueError('Tests must partition every baseline and comparison exactly once')
    if len({t['id'] for t in tests}) != len(tests):
        raise ValueError('Duplicate test ID')
    # Resolve attachments using original relative paths, including after relocation.
    manifest = json.loads((report / 'source-manifest.json').read_text())
    source_profiles = {p['id']: p for p in manifest['profiles']}
    import os
    def link(path):
        from urllib.parse import quote
        return E(quote(os.path.relpath(root / path, report), safe='/'), quote=True)

    def profile(p):
        url = link(source_profiles[p['id']]['path'])
        body = f'<a href="{url}">Open / download artifact</a>'
        if p['kind'] == 'viewer':
            frame = 'frame-' + p['id']
            body += (f' · <button data-viewer="{frame}" aria-controls="{frame}" aria-expanded="false">Show interactive profile</button>'
                     f'<iframe id="{frame}" title="{E(p["title"], quote=True)}" data-source="{url}" hidden></iframe>')
        elif p['kind'] == 'image':
            body += f'<img loading="lazy" src="{url}" alt="{E(p["title"], quote=True)}">'
        elif p['kind'] != 'raw':
            raise ValueError('Unsupported journey profile: ' + p['kind'])
        return (f'<article class="profile" id="{p["id"]}"><h3>{E(p["title"])}</h3>'
                f'<p>{E(p["note"])}</p><p>{E(p["boundary"])} · {E(p["identity"])}</p>{body}</article>')

    sections = []
    for test in tests:
        rows, plots, attachments = [], [], []
        baseline = all('configuration' in records[bid] for bid in test['benchmarks'])
        if not baseline and any('configuration' in records[bid] for bid in test['benchmarks']):
            raise ValueError('A test must group baselines or comparisons, not mix them')
        labels = ('Current Lean', 'Rust') if test['id'] == 'test-rust' else (
            ('Original Lean', 'Current Lean') if test['id'] == 'test-combined' else ('Baseline', 'Candidate'))
        statuses = {records[bid].get('decision_status') for bid in test['benchmarks']}
        decision = next(iter(statuses)) if len(statuses) == 1 else None
        decision = decision or 'reference'
        for bid in test['benchmarks']:
            b = records[bid]
            if 'configuration' in b:
                sides = [(b['configuration'], b['series'])]
            else:
                sides = [(b[key], b['statistics']['series'][key]) for key in ['control', 'candidate']]
            first = sides[0][1]['outcomes'][0]
            case = first['case']
            commands, timings = [], []
            for side_index, (configuration, series) in enumerate(sides):
                observation = (series['observations'] or series['outcomes'])[0]
                command = shlex.join(observation['argv'])
                stats = series['statistics'].get('wall_s')
                timing = duration(stats['median']) if stats else 'No completed baseline'
                if not stats and observation['outcome'] == 'timeout':
                    timing = f'Timeout {duration(observation["timeout_s"])}<small>Warmup; no median</small>'
                label = labels[side_index]
                commands.append(f'<div class="full-command"><small>{label}</small><code>{E(command)}</code></div>')
                iqr = duration(stats['iqr']) if stats else '—'
                if baseline:
                    timings.append(f'<td class="timing" data-label="Median"><span class="median">{timing}</span></td>'
                                   f'<td class="timing" data-label="IQR"><span class="iqr">{iqr}</span></td>')
                else:
                    timings.append(f'<td class="timing" data-label="{label}"><span class="median">{timing}</span>'
                                   f'<small>IQR <span class="iqr">{iqr}</span></small></td>')
            change = '' if baseline else f'<td class="relative" data-label="Relative">{relative(b["statistics"])}</td>'
            rows.append(f'<tbody class="benchmark" id="{bid}"><tr class="run">'
                        f'<td class="command"><details><summary>{E(DESCRIPTIONS[case])}</summary>{"".join(commands)}</details></td>'
                        + ''.join(timings) + change + '</tr></tbody>')
            chart = report / 'figures' / (bid + '.svg')
            if chart.exists():
                plots.append(f'<figure><figcaption>{E(case)}</figcaption><a href="figures/{bid}.svg"><img loading="lazy" src="figures/{bid}.svg" alt="{E(b["title"], quote=True)}"></a></figure>')
            attachments.extend(profile(p) for p in model['profiles'] if p.get('comparison') == bid)
        if test['id'] == 'test-baseline' and (report / 'figures/baselines.svg').exists():
            plots.insert(0, '<figure class="wide"><a href="figures/baselines.svg"><img loading="lazy" src="figures/baselines.svg" alt="Baseline distributions"></a></figure>')
        if test['id'] == 'test-combined':
            for p in model['profiles']:
                if 'comparison' not in p:
                    (plots if p['kind'] == 'image' else attachments).append(profile(p))
        headers = ('<th class="metric">Median</th><th class="metric">IQR</th>' if baseline else
                   f'<th class="metric">{labels[0]}</th><th class="metric">{labels[1]}</th><th class="relative">Relative</th>')
        table = '<div class="table-wrap"><table><thead><tr><th>Benchmark</th>' + headers + '</tr></thead>' + ''.join(rows) + '</table></div>'
        charts = '<div class="plots">' + ''.join(plots) + '</div>' if plots else ''
        details = ('<details class="attachments"><summary>Profiles and code</summary>' + ''.join(attachments) + '</details>') if attachments else ''
        badge = f'<span class="decision">{decision}</span>' if decision == 'rejected' else ''
        sections.append(f'<section class="test" id="{test["id"]}" data-decision="{decision}"><h2>{E(test["title"])}{badge}</h2>'
                        + (f'<p class="test-note">{E(test["note"])}</p>' if test.get('note') else '') + table + charts + details + '</section>')
    nav = ' · '.join(f'<a href="#{t["id"]}">{E(t["short_title"])}</a>' for t in tests)
    links = ' · '.join(f'<a href="{link(p["path"])}">{E(p["title"])}</a>' for p in manifest['links'])
    datasets = '<details><summary>Captured benchmark runs</summary><ul>' + ''.join(
        f'<li><a href="{d["copied_samples"]}">{E(d["title"])}</a></li>' for d in model['datasets']) + '</ul></details>'
    page = ('<!doctype html><html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">'
            f'<title>{E(model["title"])}</title><link rel="stylesheet" href="review.css"><main>'
            f'<h1>{E(model["title"])}</h1><nav>{nav}</nav>'
            '<div class="filters"><label>Find a test <input id="filter" type="search"></label> '
            '<div class="decision-filter"><label for="decision-filter">Decision</label><select id="decision-filter"><option value="all">All</option><option value="accepted">Accepted</option>'
            '<option value="rejected">Rejected</option><option value="reference">Reference</option></select></div>'
            '<div class="decision-filter"><label for="plot-size">Plots</label><select id="plot-size"><option value="compact">Compact</option><option value="large">Large</option></select></div>'
            '<span id="count" aria-live="polite"></span></div>'
            + ''.join(sections) + '<section id="evidence"><h2>Evidence</h2><p>' + links + '</p>'
            '<p><a href="review-data.json">Measurements and provenance</a> · <a href="source-manifest.json">Capture manifest</a> · <a href="presentation.json">Test groups</a></p>'
            '<p>Timings are medians; relative performance compares the two group medians. For example, 5× faster means 80% less time. These are descriptive comparisons, not significance claims. Open a benchmark description for both captured commands. Plots show IQR, median and range; click a plot for its full-size SVG. Full run order, validation and environment records remain in the captured datasets.</p>' + datasets + '</section></main><script src="review.js"></script></html>')
    (report / 'index.html').write_text(page)
    shutil.copyfile(Path(__file__).with_name('profile-journey.css'), report / 'review.css')
    (report / 'review.js').write_text(JS)
    (report / 'presentation.json').write_text(json.dumps(dict(schema='tzap-profile-tests-v1', tests=tests), indent=2)+'\n')
    generator_path = report / 'generator.json'
    generator = json.loads(generator_path.read_text())
    generator['presentation'] = {'renderer_sha256': digest(Path(__file__)),
        'css_sha256': digest(Path(__file__).with_name('profile-journey.css')),
        'catalog_sha256': digest(root/'catalog.json'), 'tests':len(tests),
        'files_sha256': {name:digest(report/name) for name in ['index.html','review.css','review.js','presentation.json']}}
    generator_path.write_text(json.dumps(generator, indent=2)+'\n')


JS = '''const tests = [...document.querySelectorAll('section.test')];
const search = document.querySelector('#filter'), decision = document.querySelector('#decision-filter');
function filter() {
 const query = search.value.toLowerCase();
 for (const test of tests) test.hidden = !test.textContent.toLowerCase().includes(query) || (decision.value !== 'all' && test.dataset.decision !== decision.value);
 document.querySelector('#count').textContent = `${tests.filter(t => !t.hidden).length} tests`;
}
search.addEventListener('input', filter); decision.addEventListener('change', filter); filter();
document.querySelector('#plot-size').addEventListener('change', event => {
 document.documentElement.dataset.plotSize = event.target.value;
});
for (const button of document.querySelectorAll('[data-viewer]')) button.addEventListener('click', () => {
 const frame = document.getElementById(button.dataset.viewer);
 frame.hidden = !frame.hidden;
 if (!frame.hidden && !frame.src) frame.src = frame.dataset.source;
 button.setAttribute('aria-expanded', String(!frame.hidden));
 button.textContent = frame.hidden ? 'Show interactive profile' : 'Hide interactive profile';
});
for (const link of document.querySelectorAll('nav a')) link.addEventListener('click', () => {
 search.value = ''; decision.value = 'all'; filter();
});
'''


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--root', type=Path, default=Path(__file__).resolve().parents[1]/'benchmarks/journey')
    parser.add_argument('--report', type=Path)
    args = parser.parse_args()
    render(args.root, args.report or args.root/'report')
