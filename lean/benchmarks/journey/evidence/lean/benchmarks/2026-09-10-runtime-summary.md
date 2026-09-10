# Original Lean baseline, current Lean and Rust

Current Lean is 1.7–10.4× faster than the original baseline on cases where both
finish. QFT now completes in 2.14 seconds; the original binary reaches the
60-second limit. Rust remains substantially faster: current Lean takes 16–121×
as long on this whole-CLI surface. Completed outputs are identical.

## Fresh cumulative comparison

“Baseline” is the original pre-profiling Lean revision `2c29be4`. “Current” is
`ba401fb`, including the accepted lazy fixpoint runner. Rust is the preserved
release build from `2c29be4`; its optimizer sources have not changed. These
three binaries were measured together in a fresh comparison, rather than
combining times from earlier experiments.

All times below are medians in seconds. The O3 caches are warm.

| Case | Level | Baseline Lean | Current Lean | Rust | Baseline / current | Current / Rust |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `gf16` | O1 | 0.1575 | 0.0897 | 0.00422 | 1.76× | 21.2× |
| `gf32` | O1 | 0.9401 | 0.3607 | 0.00684 | 2.61× | 52.7× |
| `gf64` | O1 | 9.4173 | 2.1457 | 0.01771 | 4.39× | 121.1× |
| `hwb8` | O1 | 0.4710 | 0.1783 | 0.00848 | 2.64× | 21.0× |
| `chebyshev` | O1 | 11.2886 | 1.0804 | 0.03067 | 10.45× | 35.2× |
| `qft20` | O1 | >60, timeout | 2.1391 | 0.07336 | — | 29.2× |
| `gf32-o3` | O3 | 1.3553 | 0.8131 | 0.05166 | 1.67× | 15.7× |
| `gf64-o3` | O3 | 10.1696 | 3.7189 | 0.16313 | 2.73× | 22.8× |

QFT's baseline entry is a single timed-out warmup, killed after 60.0047 seconds;
it is not a completed median. Current Lean and Rust each have six measured QFT
runs. No baseline QFT output is available for comparison.

## Measurement method and validation

Each case receives one excluded warmup per implementation followed by six
measured rounds. The three-way rounds use all six permutations of the binaries,
balancing their position and relative execution order. After the QFT baseline
timeout, current Lean and Rust alternate AB/BA over six rounds. Failed variants
are not retried within that case; current/Rust failures make the runner fail.
A baseline timeout is preserved as a censored result.

The machine is an AMD Ryzen AI 9 HX 370 running Linux. All processes are pinned
to logical CPU 2. Lean uses 4.33.1, mathlib revision
`0df444a360eaa60ab8c11dca51a86af692955474`, and Lake release defaults. Rust uses
rustc/Cargo 1.89.0 and `cargo build --release --bin tzap`. Rust receives
`--no-parallel`. Both implementations use their existing, separately populated
synthesis-table caches. Lean receives fresh OS entropy for its 128-bit tags;
no deterministic-seed claim is made.

The timing boundary is process launch through parsing, optimization, normal
result reporting, QASM serialization, writing and exit. Lean also checks that
its serialized output parses back to the circuit. Builds, cache construction,
profilers and verbose diagnostics are excluded. Thus this compares the actual
applications, including their implementation and validation differences; it
does not isolate a language-level overhead or pure optimizer time.

This is a shared machine with dynamic clocks. For example, current `gf64-o3`
runs span 3.590–4.572 seconds, whereas Rust spans 0.160–0.178 seconds. Current
QFT spans 2.080–2.219 seconds and Rust 0.0714–0.0741 seconds. The broad gaps are
clear; small differences and exact ratios are not stable constants. Every
completed Rust run is faster than every current Lean run within its case.

The suite exits successfully: 162 invocations comprise 161 successful runs and
the single expected baseline QFT timeout. Every retained successful QASM file
is byte-for-byte identical within its case, across implementations and repeated
runs. All four reported metrics agree, and an independent Python scan of each
distinct output reproduces gate count, two-qubit count, T-count and depth.
Binary, input, source, harness, provenance and cache hashes remain unchanged
during measurement.

| Case | Output gates | Two-qubit gates | T/Tdg | Depth |
| --- | ---: | ---: | ---: | ---: |
| `gf16` | 2,703 | 1,581 | 1,040 | 491 |
| `gf32`, `gf32-o3` | 10,562 | 6,268 | 4,128 | 1,003 |
| `gf64`, `gf64-o3` | 41,547 | 24,765 | 16,448 | 2,027 |
| `hwb8` | 13,009 | 7,073 | 3,597 | 8,134 |
| `chebyshev` | 96,343 | 20,431 | 31,868 | 42,193 |
| `qft20` (current Lean and Rust) | 259,189 | 380 | 122,695 | 49,442 |

The final Lean batch build, equivalence proof and fixpoint effect/error tests
pass. The new comparison harness also passed a separate 21-invocation `gf16`
smoke run; those times are excluded from the table. The full comparison checks
both its successful-run path and the actual baseline timeout path.

## What changed

The cumulative result includes these separate implementation commits:

- `447d06f`: array-indexed phase-fold wire tags.
- `88eb89f`: cached packed samples with a proved rewrite.
- `32fbf9e`: verified Hadamard sweeps, resolving the QFT bottleneck.
- `7628452`: direct packed entropy, eliminating the word/bit/word conversion.
- `fe4fd34`: unconditional pass composition that consumes its input directly.
- `ba401fb`: fixpoint rounds executed on demand, with an IO equality proof.

The latest [fixpoint experiment](2026-09-10-lazy-fixpoint.md) measures a small,
noisy incremental benefit: `gf32-o3` stays flat and `gf64-o3` has a 2.7% lower
median in its ten-pair comparison against the preceding accepted code. Its
concrete benefit is avoiding an eagerly constructed fuel-sized pass chain.
The cumulative table above should not be attributed to that final change alone.

Releasing the old gate-wrapper owner and retaining only gate counts in the
fixpoint runner were both tested and rejected after unhelpful runtime results.
The accepted code preserves those ownership patterns. Current profiles still
show substantial allocation and list-processing costs; array-copy helpers alone
account for only a small fraction of self samples. A further pass should
attribute repeated list scans and O3 table loading before making broader
representation changes. The [earlier Rust comparison](2026-09-10-rust-comparison.md)
records relevant algorithm differences, including indexed cancellation and
hash-map phase grouping in Rust.

## Reproduction and evidence

From the repository root, with these preserved binaries and populated caches:

```sh
python3 lean/scripts/compare-runtime.py \
  --baseline experiments/lean-summary-20260910/baseline \
  --current experiments/lean-summary-20260910/current \
  --rust experiments/lean-summary-20260910/rust \
  --rust-cache experiments/lean-rust-20260910/rust-cache \
  --provenance experiments/lean-summary-20260910/provenance.json \
  --out-dir experiments/lean-summary-repeat
```

Use a fresh output directory. `--case`, `--cpu` and `--timeout` permit bounded
reruns. The provenance JSON describes each executable's source and build;
checkout identity alone cannot identify an older supplied binary.

| Executable | SHA-256 |
| --- | --- |
| Baseline Lean | `068b605840482da0c5586495ca562339872af50d1344d144b6d9062cdc2a8029` |
| Current Lean | `2be0ae05dc6574dd8912934c8a8ccf99772c11cb88a33417e62d306d27f6a469` |
| Rust | `1062b8e9ce33edf3cc885d43cbae7ca09c0e4d5b609a19b72bf8610d05fad40b` |

Ignored local evidence is in `experiments/lean-summary-20260910/`: the three
binaries, `provenance.json`, `validation.json`, `validate.py`, and `runs/`.
That directory retains the manifest, full command arrays, raw times and statuses
in `runs.jsonl`, all stdout/stderr and QASM files, the empty source patch,
`summary.json` and the successful `identity-check.json`. `smoke/` and its
separate provenance retain the earlier harness check. The harness itself is
tracked at [compare-runtime.py](../scripts/compare-runtime.py).
