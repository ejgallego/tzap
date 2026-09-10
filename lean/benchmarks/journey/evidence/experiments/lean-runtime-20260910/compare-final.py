import hashlib, json, pathlib, subprocess, sys
root = pathlib.Path(__file__).resolve().parents[2]
base = pathlib.Path(__file__).resolve().parent
helper = pathlib.Path('/home/egallego/.codex/skills/lean-profile-skill/scripts/compare_commands.py')
cases = [('gf16', 'feynman/gf2^16_mult.qasm', '-O1'), ('gf32', 'feynman/gf2^32_mult.qasm', '-O1'), ('gf64', 'feynman/gf2^64_mult.qasm', '-O1'), ('hwb8', 'feynman/hwb8.qasm', '-O1'), ('chebyshev', 'cobble-t/chebyshev.qasm', '-O1'), ('gf32-o3', 'feynman/gf2^32_mult.qasm', '-O3')]
summary = {}
for name, relative, level in cases:
    source = root / 'benchmarks' / relative
    commands = [['taskset', '-c', '2', str(base / binary), str(source), level, '-o', str(base / (name + '-' + tag + '.qasm'))] for binary, tag in [('baseline', 'a'), ('candidate', 'b')]]
    argv = [sys.executable, str(helper), '--baseline', json.dumps(commands[0]), '--candidate', json.dumps(commands[1]), '--out-dir', str(base / ('final-' + name)), '--passes', '6', '--warmups', '1', '--metadata', 'build=Lake release defaults', '--metadata', 'diagnostics=off', '--metadata', 'randomness=fresh OS 128-bit tags', '--metadata', 'boundary=native CLI through checked output and exit', '--metadata', 'cpu_affinity=2', '--metadata', 'cache=warm' if level == '-O3' else 'cache=unused']
    artifacts = [base / 'baseline', base / 'candidate', source, root / 'lean/TzapLean/PhaseFoldRand.lean', root / 'lean/TzapLean/PhaseFoldTests.lean', root / 'lean/lean-toolchain', root / 'lean/lakefile.lean', root / 'lean/lake-manifest.json', root / 'lean/TzapLean/PhaseFold.lean', root / 'lean/TzapLean/PhaseFoldProof.lean', root / 'lean/scripts/bench-runtime.py', pathlib.Path(__file__).resolve()]
    if level == '-O3': artifacts += [pathlib.Path.home() / '.tzap-lean/superopt-tables/q3_g24_e200000.v1.bin']
    for artifact in artifacts: argv += ['--artifact', str(artifact)]
    print('Comparing ' + name, flush=True)
    with (base / (name + '-final.stdout')).open('w') as log:
        subprocess.run(argv, cwd=root, stdout=log, stderr=subprocess.STDOUT, check=True)
    result = json.loads((base / ('final-' + name) / 'summary.json').read_text())
    result['outputs_identical'] = (base / (name + '-a.qasm')).read_bytes() == (base / (name + '-b.qasm')).read_bytes()
    result['output_sha256'] = {tag: hashlib.sha256((base / (name + '-' + tag + '.qasm')).read_bytes()).hexdigest() for tag in ['a','b']}
    summary[name] = result
    (base / 'final-summary.json').write_text(json.dumps(summary, indent=2) + '\n')
    print(name, result, flush=True)
    if not result['outputs_identical']: raise SystemExit('Output mismatch: ' + name)
