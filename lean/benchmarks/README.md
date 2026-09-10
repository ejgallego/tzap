# Lean runtime benchmarks

Use Python 3.11 or later on a POSIX system. Run from the repository root after
building with `(cd lean && lake build)`:

```sh
python3 lean/scripts/bench-runtime.py --out-dir experiments/runtime-baseline
```

The fixed surface uses unmodified circuits from the repository:

| Case | Circuit | Purpose |
| --- | --- | --- |
| `gf16` | `feynman/gf2^16_mult.qasm` | Small arithmetic and startup costs |
| `gf32` | `feynman/gf2^32_mult.qasm` | Medium arithmetic |
| `gf64` | `feynman/gf2^64_mult.qasm` | Wider arithmetic; scaling of per-wire state |
| `hwb8` | `feynman/hwb8.qasm` | Reversible logic |
| `chebyshev` | `cobble-t/chebyshev.qasm` | Block encoding with synthesized rotations |
| `qft20` | `qft/qft_q020_d32421.qasm` | Large QFT, dominated by single-qubit gates |

The default is `-O1`, one warmup and three measured runs per circuit, with a
60-second limit per invocation. All six cases complete on the profiling machine
after the Hadamard-sweep improvement. A timeout is retained as a scalability
result, and any failed case makes the runner exit nonzero. A failed case is
attempted once; the other cases still run. Select a smaller surface or allow
a longer deadline with `--case` and `--timeout`:

```sh
python3 lean/scripts/bench-runtime.py --case gf32 --case gf64 \
  --out-dir experiments/runtime-arithmetic
python3 lean/scripts/bench-runtime.py --case gf16 --level O3 --timeout 180 \
  --out-dir experiments/runtime-default-pipeline
```

For `-O2` and `-O3`, populate the synthesis-table cache before measuring a warm
run. The first invocation builds it under `~/.tzap-lean/superopt-tables`. Record
that cold run separately; table construction and warm optimization are different
workloads. The runner does not change or remove the cache.

The timing boundary is the native CLI process, from launch through optimization,
checked QASM serialization, file writing and exit. It excludes Lake planning and
compilation. Normal CLI result reporting is enabled; `--verbose` and profilers
are disabled. Randomized phase folding uses fresh OS entropy with 128-bit tags;
the CLI's `--seed` option does not make runs deterministic.

Each new output directory contains executable/input/toolchain hashes, checkout
identity and the tracked Lean diff, exact command arrays, raw elapsed times,
exit statuses, stdout/stderr, emitted QASM and its hash, and median summaries.
Warmups are explicitly marked and excluded from medians. Timeouts kill the
process group; failed or incomplete runs are never treated as successful samples.
Artifacts and the tracked source state are checked again after the run. The
checkout identity describes the measurement checkout; preserve build provenance
separately when supplying an older executable via `--binary`.

To keep a baseline before rebuilding:

```sh
mkdir -p experiments/runtime-binaries
cp lean/.lake/build/bin/tzap-lean experiments/runtime-binaries/baseline
python3 lean/scripts/bench-runtime.py \
  --binary experiments/runtime-binaries/baseline \
  --out-dir experiments/runtime-old
```

Separate suite sweeps are useful for choosing workloads, but are not sufficient
to accept small speedups. Acceptance comparisons should alternate baseline and
candidate in AB/BA order, use equal warmups and several pairs, and retain the raw
distribution. The lean-profile-skill's `compare_commands.py` supports that
comparison without modifying the binaries. Use the same input, options, output
path and cache state for both commands, and inspect emitted QASM and correctness
checks as well as elapsed time.

On machines with different CPU core types, pin both binaries to the same core
for acceptance measurements (for example, `taskset -c 2` on Linux). The suite
records its inherited CPU affinity when the operating system exposes it.

See the [packed-entropy experiment](2026-09-10-packed-entropy.md) for the latest
measurements and ownership audit. The
[Hadamard-sweep experiment](2026-09-10-hadamard-sweeps.md) records the resolved QFT timeout. The
[tag-state and sample-packing experiment](2026-09-10-tag-state.md) records the
initial improvements. The [Rust comparison](2026-09-10-rust-comparison.md)
measures both native CLIs before the Hadamard-sweep change and checks their
output quality.
