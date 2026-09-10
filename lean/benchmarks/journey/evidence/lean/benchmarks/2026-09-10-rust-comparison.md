# Optimized Lean versus Rust

Rust remains substantially faster on this representative surface. The optimized
Lean executable and Rust emit byte-for-byte identical QASM on all six completed
workloads. The large QFT circuit completes in about 84 ms in Rust and exceeds
60 seconds in Lean.

## Whole CLI runtime

These are fresh measurements of both implementations, using native release
builds on the same machine and logical CPU 2. Each completed row has one warmup
per executable and six measured pairs in alternating AB/BA order. Times include
process startup, parsing, optimization, normal result reporting, writing the
output QASM, and exit. Compilation and profilers are excluded. Rust is explicitly
sequential (`--no-parallel`); both O3 synthesis-table caches are already populated.

| Circuit | Level | Rust median | Optimized Lean median | Lean / Rust |
| --- | --- | ---: | ---: | ---: |
| `gf2^16_mult` | O1 | 3.88 ms | 82.22 ms | 21.2× |
| `gf2^32_mult` | O1 | 6.67 ms | 321.72 ms | 48.2× |
| `gf2^64_mult` | O1 | 18.00 ms | 2,405.75 ms | 133.6× |
| `hwb8` | O1 | 8.50 ms | 232.39 ms | 27.3× |
| `chebyshev` | O1 | 42.93 ms | 2,956.27 ms | 68.9× |
| `gf2^32_mult` | O3 | 66.92 ms | 1,159.05 ms | 17.3× |

Every Rust run was faster than every Lean run within its workload. All Rust
medians are below 100 ms, so startup and timer noise matter, particularly on the
smallest inputs. The shared machine has dynamic CPU frequencies, and these fresh
Lean timings differ from the earlier Lean before/after experiment. The large
gap is clear; the exact ratios should not be treated as stable constants.

The raw minimum–maximum ranges, in milliseconds, were:

| Circuit | Level | Rust range | Lean range |
| --- | --- | ---: | ---: |
| `gf2^16_mult` | O1 | 3.01–4.50 | 80.89–102.34 |
| `gf2^32_mult` | O1 | 6.16–8.35 | 304.11–342.92 |
| `gf2^64_mult` | O1 | 17.08–30.04 | 2,269.18–2,483.78 |
| `hwb8` | O1 | 7.97–9.25 | 226.42–242.89 |
| `chebyshev` | O1 | 32.61–60.71 | 2,695.26–4,865.24 |
| `gf2^32_mult` | O3 | 61.68–71.44 | 1,061.83–1,899.30 |

QFT is a separate, censored comparison: Rust has one warmup and six successful
measured runs, with an 84.49 ms median. A fresh Lean invocation on the same CPU
was killed at 60.004 seconds without an output file. There is no completed Lean
QFT time or output-quality comparison. Rust emits 259,189 gates, including
122,695 T/Tdg gates, from the 309,835-gate input.

## Output quality and interpretation

All 84 paired-comparison invocations succeeded. Gate count, two-qubit count,
T-count, and depth agree across every invocation within each workload. Each
retained Rust/Lean output pair is byte-for-byte identical, and independently
counting the emitted gates reproduces the reported metrics.

| Circuit | Level | Output gates | Two-qubit gates | T/Tdg | Depth |
| --- | --- | ---: | ---: | ---: | ---: |
| `gf2^16_mult` | O1 | 2,703 | 1,581 | 1,040 | 491 |
| `gf2^32_mult` | O1 | 10,562 | 6,268 | 4,128 | 1,003 |
| `gf2^64_mult` | O1 | 41,547 | 24,765 | 16,448 | 2,027 |
| `hwb8` | O1 | 13,009 | 7,073 | 3,597 | 8,134 |
| `chebyshev` | O1 | 96,343 | 20,431 | 31,868 | 42,193 |
| `gf2^32_mult` | O3 | 10,562 | 6,268 | 4,128 | 1,003 |

The selected circuits contain only supported Clifford+T gates. Rust's extra
decomposition support does not affect these runs. The current drivers have the
same pass order: `CancelGates, PhaseFoldRand` at O1 and
`CnotMin, CancelGates, SuperOpt, PhaseFoldRand` to a fixpoint at O3. Both resolve
the O3 bounds to 3 wires, 25-gate windows, and 200,000 table entries per width.
Their table formats and implementations differ. Some Lean module comments
still describe an additional Rust Clifford-resynthesis pass; the current Rust
driver has no such pass.

This measures the two current applications. Source inspection identifies
substantial implementation differences:

- [Rust cancellation](../../src/cancel.rs) uses per-wire position indexes,
  stacks, deletion stamps, and reusable buffers. [Lean cancellation](../TzapLean/Cancel.lean)
  still scans and reconstructs lists.
- [Rust phase folding](../../src/phase_fold_rand.rs) groups rotations through
  a hash map and uses `u128` tags and small modular integers for Clifford+T
  angles. [Lean phase folding](../TzapLean/PhaseFold.lean) skips known failed
  searches but still scans forward for merges, with `Nat` tags and rational
  angles.
- Lean's CLI reparses its serialized output and checks that it reconstructs
  the circuit before writing it. Rust serializes and writes directly.

These observations do not apportion the measured gap between individual costs.
The [earlier Lean sampling evidence](2026-09-10-tag-state.md) does identify
Hadamard cancellation as the remaining QFT bottleneck. Porting indexed
cancellation with a correctness proof is the next measured target; hash-map
phase grouping is another concrete design to investigate.

## Reproduction and evidence

Machine: AMD Ryzen AI 9 HX 370, both processes pinned to logical CPU 2.
Source: commit `2c29be4` plus the Lean array-state and sample-cache changes from
the preceding experiment. Rust source is unchanged. Builds:

```sh
cargo build --release --bin tzap
(cd lean && lake build)
```

Rust uses rustc 1.89.0 and Cargo 1.89.0, with the repository's standard release
profile. Lean uses `leanprover/lean4:v4.33.1` and Lake's standard release profile.
The resolved Cargo lockfile is preserved because the repository ignores it.

| Artifact | SHA-256 |
| --- | --- |
| Rust executable | `1062b8e9ce33edf3cc885d43cbae7ca09c0e4d5b609a19b72bf8610d05fad40b` |
| Optimized Lean executable | `ea8e0ac5bf524c800c47637f6c033c920d256afe71b8801484a05546d62c42fc` |
| Cargo lockfile | `7f185886bd563bd6122d2297775d4eaccdbcfaf654aa18a53785886a266980a5` |

Local, git-ignored evidence is in `experiments/lean-rust-20260910/`:

- [Timing summaries](../../experiments/lean-rust-20260910/summary.json)
- [Validation](../../experiments/lean-rust-20260910/validation.json)
- [Build and machine context](../../experiments/lean-rust-20260910/context.json)
- `compare.py` invokes the lean-profile-skill comparison helper with exact
  command arrays, warmups, repetitions, artifact hashes, and cache identities.
- Each case directory retains its manifest, raw runs, stdout/stderr, source
  diff, and successful final identity check. Preserved binaries and emitted
  circuits are alongside them.
- `qft.py`, `qft-rust/`, and `qft-lean/` preserve the separate QFT procedure,
  completed Rust runs, and Lean timeout.

No optimizer source was changed for this comparison.
