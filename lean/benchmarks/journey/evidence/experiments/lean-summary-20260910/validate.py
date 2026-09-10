from collections import Counter
from pathlib import Path
import hashlib
import json
import re

base = Path(__file__).resolve().parent
out = base / 'runs'
rows = [json.loads(line) for line in (out / 'runs.jsonl').read_text().splitlines()]
summary = json.loads((out / 'summary.json').read_text())
errors = [r for r in rows if r['status'] != 'exit' or r['exit_code'] != 0]
assert len(rows) == 162 and len(errors) == 1
assert errors[0]['label'] == 'baseline' and errors[0]['case'] == 'qft20'
assert errors[0]['status'] == 'timeout' and errors[0]['elapsed_ns'] >= 60_000_000_000
assert json.loads((out / 'identity-check.json').read_text()) == {'drift': []}
checked = {}
for case in summary:
    good = [r for r in rows if r['case'] == case and r['status'] == 'exit' and r['exit_code'] == 0]
    reference = (out / good[0]['output']).read_bytes()
    metrics = good[0]['metrics']
    for row in good:
        content = (out / row['output']).read_bytes()
        assert content == reference
        assert hashlib.sha256(content).hexdigest() == row['output_sha256']
        assert row['metrics'] == metrics
    n_gates, two, t_gates, layers = 0, 0, 0, {}
    for line in reference.decode().splitlines():
        if line.startswith(('OPENQASM ', 'include ', 'qreg ', 'creg ')) or not line.strip():
            continue
        op = line.split()[0]
        assert op in {'h','x','z','s','sdg','t','tdg','cx','cz'}, op
        qs = [int(q) for q in re.findall(r'q\[(\d+)\]', line)]
        assert len(qs) == (2 if op in {'cx','cz'} else 1)
        n_gates += 1
        two += op in {'cx','cz'}
        t_gates += op in {'t','tdg'}
        layer = 1 + max(layers.get(q,0) for q in qs)
        for q in qs:
            layers[q] = layer
    counted = {'Gates': n_gates, '2q gates': two, 'T/Tdg': t_gates, 'Depth': max(layers.values(),default=0)}
    assert counted == {key: int(after.replace(',','')) for key, before, after in metrics}
    checked[case] = {'successful_invocations': len(good), 'variants': dict(Counter(r['label'] for r in good)),
                     'qasm_bytes_identical': True, 'metrics_identical': True, 'independently_counted_output': counted,
                     'output_sha256': hashlib.sha256(reference).hexdigest()}
report = {'invocations': len(rows), 'successes': len(rows)-len(errors), 'errors': errors, 'cases': checked}
(base / 'validation.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps({key:report[key] for key in ('invocations','successes')},indent=2))
for case, data in checked.items():
    print(case, data['independently_counted_output'])
for case, data in summary.items():
    print(case, {label: [min(data[label]['seconds']),max(data[label]['seconds'])] if data[label]['seconds'] else []
                 for label in ['baseline','current','rust']})
