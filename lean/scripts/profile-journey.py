#!/usr/bin/env python3
"""Adapt archived tzap observations for lean-profile-skill; never run benchmarks.

The original JSONL and stderr records remain authoritative. Shared JSONL datasets
preserve integer clocks, nested values and original block/order identifiers.
"""

import argparse
import hashlib
import html
import json
import os
from pathlib import Path
import re
import shlex
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
JOURNEY = ROOT / 'lean/benchmarks/journey'
BOUNDARY = 'Native CLI invocation through parsing, optimization, reporting, serialization, file write and exit, including harness bookkeeping; Lean also checks the serialization round trip'
HOST = 'Lean 4.33.1; Lake release; mathlib 0df444a; AMD Ryzen AI 9 HX 370, CPU 2; shared machine'


def require(condition, message):
    if not condition:
        raise ValueError(message)


def read_json(path):
    return json.loads(path.read_text())


def jsonl(path):
    return [json.loads(line) for line in path.read_text().splitlines()]


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def write_json(path, value):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(json.dumps(value, indent=2, ensure_ascii=False, allow_nan=False) + '\n')


def records_directory(campaign):
    return Path(campaign['directory'])


def import_evidence(source, evidence, catalog):
    require(not evidence.exists(), f'Refusing to overwrite evidence: {evidence}')
    files = set(catalog['artifacts'])
    for campaign in [catalog['final'], *catalog['experiments']]:
        directory = records_directory(campaign)
        files.add(campaign['validation'])
        for name in ['runs.jsonl', 'manifest.json', 'identity-check.json', 'summary.json']:
            files.add(str(directory / name))
        for name in ['git-tracked.patch', 'source.patch']:
            if (source / directory / name).is_file():
                files.add(str(directory / name))
        for row in jsonl(source / directory / 'runs.jsonl'):
            for field in ['stdout', 'stderr']:
                files.add(str(directory / row[field]))
    snapshots = []
    for relative in sorted(files):
        path = source / relative
        require(path.is_file(), f'Missing original evidence: {path}')
        snapshots.append((relative, path.read_bytes()))
    captures = []
    for relative in catalog['external_captures']:
        path = source / relative
        captures.append(dict(path=relative, sha256=digest(path), bytes=path.stat().st_size,
                             bundled=False, reason='Large native capture; self report is bundled'))
    evidence.mkdir(parents=True)
    inventory = []
    for relative, data in snapshots:
        path = evidence / relative
        path.parent.mkdir(parents=True, exist_ok=True)
        path.write_bytes(data)
        inventory.append(dict(path=relative, bytes=len(data), sha256=hashlib.sha256(data).hexdigest()))
    write_json(evidence / 'archive.json', dict(files=inventory, external_captures=captures,
               source_revision='5d5f16919efcec130e93c7190d69cf01fcd5a8f3'))


def verify_archive(evidence):
    inventory = read_json(evidence / 'archive.json')
    for entry in inventory['files']:
        require(digest(evidence / entry['path']) == entry['sha256'],
                f'Archived artifact changed: {entry["path"]}')
    return inventory


def validation_node(evidence, campaign, case):
    doc = read_json(evidence / campaign['validation'])
    node = doc.get('cases', doc)[case]
    kind = campaign['validation_kind']
    keys = {
        'final': ['qasm_bytes_identical', 'metrics_identical'],
        'classic': ['metrics_identical_across_all_runs', 'outputs_identical', 'identity_valid'],
        'hadamard': ['all_exit_zero', 'all_metrics_identical', 'retained_output_byte_identical', 'identity_stable'],
        'modern': ['metrics_identical'],
        'summary': ['outputs_identical'],
    }[kind]
    require(all(node.get(key) is True for key in keys), f'Missing validation: {campaign["validation"]} / {case}')
    if kind in {'modern', 'summary'}:
        hashes = node['output_sha256']
        require(len(hashes) == 2 and len(set(hashes.values())) == 1,
                f'Retained output mismatch: {case}')
        require(node['identity_check']['valid'] is True, f'Unstable validation identity: {case}')
    return node


def load_campaign(evidence, campaign, audit):
    directory = evidence / records_directory(campaign)
    capture_manifest = read_json(directory / 'manifest.json')
    identity = read_json(directory / 'identity-check.json')
    require(identity.get('valid') is True or identity == {'drift': []}, f'Invalid identity: {directory}')
    originals = jsonl(directory / 'runs.jsonl')
    cases = sorted({r['case'] for r in originals}) if campaign['validation_kind'] == 'final' else [campaign['case']]
    validated = {case: validation_node(evidence, campaign, case) for case in cases}
    metrics_by_case, result = {}, []
    for line, row in enumerate(originals, 1):
        case = row.get('case', campaign.get('case'))
        timed_out = row.get('timed_out', False) or row.get('status') == 'timeout'
        success = row['exit_code'] == 0 and not timed_out
        require(not any(row.get(key) for key in ['evidence_error', 'launch_error', 'interrupted']),
                f'Harness failure: {directory}:{line}')
        require(success or (campaign['validation_kind'] == 'final' and case == 'qft20'
                            and row['label'] == 'baseline' and timed_out),
                f'Unexpected unsuccessful observation: {directory}:{line}')
        if success:
            pairs = re.findall(r'(Gates|2q gates|T/Tdg|Depth).*?([\d,]+)\s*→\s*([\d,]+)',
                               (directory / row['stderr']).read_text())
            require(len(pairs) == 4, f'Missing reported output metrics: {directory}:{line}')
            metrics = [[key, int(before.replace(',', '')), int(after.replace(',', ''))] for key, before, after in pairs]
            expected = metrics_by_case.setdefault(case, metrics)
            require(metrics == expected, f'Per-run output metrics differ: {directory}:{line}')
            node = validated[case]
            if 'metrics' in node:
                recorded = [[key, int(before.replace(',', '')), int(after.replace(',', ''))]
                            for key, before, after in node['metrics']]
                require(metrics == recorded, f'Validation record mismatch: {directory}:{line}')
            if campaign['validation_kind'] == 'final':
                require(row['output_sha256'] == node['output_sha256'], f'QASM hash mismatch: {directory}:{line}')
                require({key: after for key, before, after in metrics} == node['independently_counted_output'],
                        f'Independent metric check mismatch: {directory}:{line}')
        warmup = row.get('warmup', row.get('phase') == 'warmup')
        phase = 'warmup' if warmup else 'measured'
        pair = row.get('round', row.get('pass'))
        require(pair is not None, f'Missing original pairing: {directory}:{line}')
        # Preserve every original column; required fields are explicitly derived.
        normalized = dict(row)
        normalized.update(id=f'{phase}-{pair}-{row["label"]}', configuration=row['label'], block=f'{phase}-{pair}',
                          exit_status=row['exit_code'], phase=phase, outcome='completed' if success else 'timeout',
                          validated=success, included=success and not warmup,
                          exclude_reason=('warmup' if warmup else '') if success else 'Original QFT warmup timed out; no measured baseline or output',
                          source_file=str(records_directory(campaign) / 'runs.jsonl'), source_line=line,
                          validation_record=campaign['validation'], case=case,
                          validation_sha256=digest(evidence / campaign['validation']),
                          validation_scope='All retained QASM and metrics' if campaign['validation_kind'] == 'final'
                          else 'Every run reported metrics; final retained QASM pair')
        if campaign['validation_kind'] == 'final':
            # The tzap three-way harness uses zero-based slots; the skill requires positive slots.
            normalized.update(source_slot=row['slot'], slot=row['slot'] + 1)
        if timed_out:
            normalized['timeout_s'] = capture_manifest['timeout_seconds']
        result.append(normalized)
    for case in cases:
        n = sum(r['case'] == case and r['validated'] for r in result)
        node = validated[case]
        recorded = next((node[key] for key in ['successful_invocations', 'runs', 'invocations'] if key in node), None)
        if recorded is not None:
            require(n == recorded, f'Validation count mismatch: {case}')
    audit.append(dict(directory=str(records_directory(campaign)), rows=len(result),
                      validated_rows=sum(r['validated'] for r in result),
                      validation=campaign['validation'], per_run_stderr_metrics_rechecked=True))
    return result


def write_jsonl(path, rows):
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(''.join(json.dumps(r, ensure_ascii=False, allow_nan=False) + '\n' for r in rows))


def metadata(rows, title, identity, cid):
    sample = next(r for r in rows if r['included'])
    level = '-O3' if '-O3' in sample['argv'] else '-O1'
    commands = []
    for label in dict.fromkeys(r['label'] for r in rows):
        variants = [r for r in rows if r['label'] == label]
        command_row = next((r for r in variants if r['phase'] == 'measured'), variants[0])
        commands.append(label + ': ' + shlex.join(command_row['argv']))
    return dict(id=cid, title=title, boundary=BOUNDARY, cohort=f'{level}; CPU 2; ' +
                ('warm synthesis tables' if level == '-O3' else 'synthesis tables unused') + '; fresh OS entropy',
                identity=identity + '; ' + HOST, command='\n'.join(commands),
                configurations=list(dict.fromkeys(r['label'] for r in rows)),
                samples=f'inputs/{cid}.jsonl')


def evidence_index(evidence, inventory):
    esc = html.escape
    lines = ['<!doctype html><html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">',
             '<title>tzap evidence archive</title><style>body{max-width:1000px;margin:2rem auto;padding:0 1rem;font:16px system-ui;line-height:1.5}li{overflow-wrap:anywhere}code{font-size:.8em}</style>',
             '<h1>tzap evidence archive</h1><p>Exact snapshots used for this review. Original absolute paths in capture metadata identify the measurement checkout; local links below identify the bundled files.</p>',
             '<p><a href="../report/index.html">Report</a> · <a href="archive.json">SHA-256 inventory</a></p><ul>']
    for entry in inventory['files']:
        lines.append(f'<li><a href="{esc(entry["path"], quote=True)}">{esc(entry["path"])}</a> ({entry["bytes"]:,} bytes)</li>')
    lines += ['</ul><h2>Large captures retained in the original checkout</h2><p>These files are not bundled. Their exported self reports are included.</p><ul>']
    for entry in inventory['external_captures']:
        lines.append(f'<li>{esc(entry["path"])}<br><code>{entry["sha256"]}</code></li>')
    (evidence / 'index.html').write_text(''.join(lines) + '</ul></html>')


def self_viewer(source, destination, title, note):
    raw = source.read_text()
    rows = []
    for line in raw.splitlines():
        match = re.match(r'\s*([\d.]+)%\s*;(.*)', line)
        if match:
            cells = [c.strip() for c in match[2].split(';')]
            rows.append((float(match[1]), cells[0], cells[1]))
        else:
            match = re.match(r'\s*([\d.]+)%\s+(\[.\].*?)\s{2,}', line)
            if match:
                rows.append((float(match[1]), 'native executable', match[2].strip()))
    require(rows, f'No self-profile rows: {source}')
    rows.sort(key=lambda r: -r[0])
    esc = html.escape
    body = ''.join(f'<tr><td>{weight:.2f}%</td><td>{esc(comm)}</td><td><code>{esc(symbol)}</code></td></tr>' for weight, comm, symbol in rows)
    destination.parent.mkdir(parents=True, exist_ok=True)
    destination.write_text('<!doctype html><html lang="en"><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">'
        f'<title>{esc(title)}</title><style>body{{font:15px system-ui;margin:1.5rem;line-height:1.5}}table{{border-collapse:collapse;width:100%}}td,th{{padding:.45rem;text-align:left;border-bottom:1px solid #ddd}}code{{overflow-wrap:anywhere}}input{{padding:.5rem;max-width:90%}}td:last-child{{word-break:break-word}}</style>'
        f'<h1>{esc(title)}</h1><p>{esc(note)}</p><p>Aggregated self weights; no caller stacks or chronological axis. Source SHA-256: <code>{digest(source)}</code></p>'
        f'<p><a href="{html.escape(os.path.relpath(source, destination.parent), quote=True)}">Original self report</a></p>'
        '<label>Find a symbol <input type="search" id="search"></label><table><thead><tr><th>Self weight</th><th>Process</th><th>Symbol</th></tr></thead><tbody>' + body +
        '</tbody></table><script>document.querySelector("#search").addEventListener("input",e=>{const q=e.target.value.toLowerCase();document.querySelectorAll("tbody tr").forEach(r=>r.hidden=!r.textContent.toLowerCase().includes(q))})</script></html>')


def build_inputs(evidence, catalog):
    audit = []
    final = load_campaign(evidence, catalog['final'], audit)
    experiments = [(c, load_campaign(evidence, c, audit)) for c in catalog['experiments']]
    manifest = dict(schema='lean-profile-review-alpha', title=catalog['title'], summary=catalog['summary'],
                    datasets=[], baselines=[], comparisons=[], profiles=[], attribution=catalog['attribution'],
                    progress=dict(note=catalog['progress_note'], selected=[], totals=[]), links=[])
    common_note = ('One warmup per binary; six measured rounds use all six permutations of the three implementations. '
                   'Round IDs preserve the original matching and execution slots. All 161 completed invocations have matching QASM and four independently checked output metrics. '
                   'Six repetitions expose the large gaps on this costly representative suite; they do not establish small effects. '
                   'Normal CLI reporting is included; no profiler or verbose diagnostics. Rust is sequential and omits Lean’s serialization round-trip check.')
    for case in catalog['cases']:
        rows = [r for r in final if r['case'] == case]
        dataset = metadata(rows, f'Original Lean, current Lean and Rust · {case}',
                           'Final campaign: original Lean 2c29be4; combined Lean ba401fb; unchanged Rust 2c29be4, rustc 1.89.0 release',
                           f'final-{case}')
        manifest['datasets'].append(dataset)
        write_jsonl(JOURNEY / dataset['samples'], rows)
        note = common_note
        if case == 'qft20':
            note += ' The original Lean warmup timed out at 60.0047 s without output; it has no measured baseline or median. Current/Rust alone alternate AB/BA over six measured rounds.'
        manifest['baselines'].append(dict(id=f'original-{case}', title=f'{case}: original Lean',
                                          note=note, dataset=dataset['id'], configuration='baseline'))
        if case != 'qft20':
            item = dict(id=f'total-{case}', title=f'Total improvement · {case}', note=note, dataset=dataset['id'],
                        control='baseline', candidate='current', decision_status='accepted',
                        decision='Measured cumulative improvement; all six implementation commits combined')
            manifest['comparisons'].append(item)
            manifest['progress']['totals'].append(item['id'])
        item = dict(id=f'rust-{case}', title=f'Rust comparison · {case}', note=note, dataset=dataset['id'],
                    control='current', candidate='rust',
                    decision='Application comparison: Rust is faster; this is not an additional Lean optimization')
        manifest['comparisons'].append(item)
    for campaign, rows in experiments:
        dataset = metadata(rows, campaign['title'], campaign['identity'], 'capture-' + campaign['id'])
        manifest['datasets'].append(dataset)
        write_jsonl(JOURNEY / dataset['samples'], rows)
        item = dict(id=campaign['id'], title=campaign['title'], note=campaign['note'], dataset=dataset['id'],
                    control='baseline', candidate='candidate', decision=campaign['decision'],
                    decision_status=campaign['decision_status'])
        manifest['comparisons'].append(item)
        if campaign.get('highlight', False):
            manifest['progress']['selected'].append(item['id'])
    for profile in catalog['profiles']:
        item = {k:v for k,v in profile.items() if k != 'source'}
        source = evidence / profile['source']
        if item['kind'] == 'viewer':
            self_viewer(source, JOURNEY / item['path'], item['title'], item['note'])
        else:
            item['path'] = str(Path('evidence') / profile['source'])
        manifest['profiles'].append(item)
    for title, path in [('Evidence archive', 'evidence/index.html'), ('Adapter audit', 'audit.json'),
                        ('Journey and reproduction', 'README.md'), ('Skill feedback', 'skill-feedback.md'),
                        ('Skill test results', 'skill-verification.json')]:
        manifest['links'].append(dict(title=title, path=path))
    write_json(JOURNEY / 'audit.json', dict(campaigns=audit, source_format='Original JSONL retained',
               jsonl_normalization='Integer elapsed_ns and nested fields preserved; block = phase plus original round/pass; final-harness slot = source_slot + 1',
               observations=sum(c['rows'] for c in audit), datasets=len(manifest['datasets']),
               output_validation='Archived campaign checks plus every successful stderr rechecked; no exit-code-only inference'))
    write_json(JOURNEY / 'review.json', manifest)
    return manifest, final


def overview(final):
    import matplotlib
    matplotlib.use('Agg')
    import matplotlib.pyplot as plt
    import statistics
    cases = list(dict.fromkeys(r['case'] for r in final))
    fig, ax = plt.subplots(figsize=(11, 7), layout='constrained')
    colors = {'baseline':'#b65a28', 'current':'#1465a1', 'rust':'#39845a'}
    names = {'baseline':'Original Lean', 'current':'Current Lean', 'rust':'Rust'}
    for i, case in enumerate(cases):
        for label, offset in [('baseline',-.22),('current',0),('rust',.22)]:
            values = [r['elapsed_ns'] / 1e9 for r in final if r['case']==case and r['label']==label and r['included']]
            y = i + offset
            if values:
                ax.hlines(y,min(values),max(values),color=colors[label],linewidth=1)
                ax.scatter(values,[y]*len(values),s=16,color=colors[label],alpha=.55,label=names[label] if i==0 else None)
                ax.scatter([statistics.median(values)],[y],marker='|',s=140,color='black',zorder=3)
            else:
                ax.scatter([60],[y],marker='>',s=65,color=colors[label])
                ax.annotate('warmup timeout: 60 s',(60,y),xytext=(-6,10),textcoords='offset points',ha='right',fontsize=9)
    ax.set_xscale('log'); ax.set_xlim(.0025,85)
    ax.set_yticks(range(len(cases)), cases); ax.invert_yaxis()
    ax.set_xlabel('Whole CLI wall time (seconds, logarithmic scale)')
    ax.set_title('tzap · original Lean, current Lean and Rust\nSix measured runs per completed series; no measured original QFT baseline',loc='left')
    ax.grid(axis='x',alpha=.2); ax.legend(loc='lower right')
    ax.spines[['top','right']].set_visible(False)
    (JOURNEY / 'views').mkdir(exist_ok=True)
    for ext in ['svg','png']:
        fig.savefig(JOURNEY / f'views/overview.{ext}',dpi=150)
    plt.close(fig)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--import-from', type=Path, help='One-time import from the original checkout, before building')
    parser.add_argument('--skill-dir', type=Path, required=True)
    parser.add_argument('--out', type=Path, required=True, help='Fresh report output directory')
    parser.add_argument('--plots', action='store_true')
    args = parser.parse_args()
    require(not args.out.exists(), f'Refusing to overwrite report: {args.out}')
    catalog = read_json(JOURNEY / 'catalog.json')
    evidence = JOURNEY / 'evidence'
    if args.import_from:
        import_evidence(args.import_from.resolve(), evidence, catalog)
    inventory = verify_archive(evidence)
    manifest, final = build_inputs(evidence, catalog)
    if args.plots:
        overview(final)
        manifest['profiles'].insert(0,dict(id='overview',title='Fresh three-way comparison',kind='image',path='views/overview.svg',
            boundary=BOUNDARY,identity='Single final campaign; baseline 2c29be4, current ba401fb, Rust 2c29be4',
            note='Six measured observations per completed series, black median ticks, full ranges. Logarithmic seconds. The > marker is the original QFT 60-second timeout, not a completed sample or median.'))
        write_json(JOURNEY / 'review.json', manifest)
    evidence_index(evidence, inventory)
    builder = args.skill_dir / 'scripts/build_review.py'
    subprocess.run([sys.executable, str(builder), str(JOURNEY / 'review.json'), '--out', str(args.out)] +
                   (['--plots'] if args.plots else []), check=True)
    tool_files = [*sorted((args.skill_dir / 'scripts').glob('review*.py')), builder,
                  *sorted((args.skill_dir / 'assets').glob('review.*'))]
    generator = dict(python=sys.version,
        builder={str(p.relative_to(args.skill_dir)):digest(p) for p in tool_files},
        adapter_sha256=digest(Path(__file__)), catalog_sha256=digest(JOURNEY / 'catalog.json'),
        archive_sha256=digest(evidence / 'archive.json'),
        note='No new measurements. Archived captures are immutable inputs; shared JSONL datasets, model and figures are derived.')
    if args.plots:
        import matplotlib
        generator.update(matplotlib=matplotlib.__version__)
    write_json(args.out / 'generator.json', generator)
    print(f'Validated {sum(c["rows"] for c in read_json(JOURNEY / "audit.json")["campaigns"])} original observations; {len(manifest["comparisons"])} comparisons.')


if __name__ == '__main__':
    main()
