# Gate-wrapper ownership experiment: rejected

Releasing the old circuit before transforming its gate list removed a real
retained owner, but did not improve representative runtime or peak memory.
Chebyshev was slower in 9 of 10 confirmation pairs, with a 2.4% higher median.
The production wrappers are restored; the candidate patch and evidence remain
available for further investigation.

## Ownership mechanism

After the [composition cleanup](2026-09-10-pass-ownership.md), the normal gate
wrappers still have this shape:

```lean
c.withGates (transform c.numQubits c.gates)
```

Generated C increments the gate list's reference count, calls `transform`, and
only then consumes `c` in `withGates`. The old circuit therefore owns another
reference to the input gate list throughout the transformation.

The candidate added an inline `RawCircuit.mapGates` helper. It extracts the
register sizes and gate list, releases the old circuit, invokes the gate-list
transformation, and rebuilds the result with `ofGates`. Cancellation, phase
folding, CNOT minimization, and superoptimization all used it. A reflexivity
proof establishes equality with the old wrapper, including the cached flags.
All existing semantic and structural proofs continue to compile unchanged.

Generated C confirms the intended behavior in all four normal wrappers:
`lean_dec_ref(c)` precedes the gate transformation, and inlining removes the
callback allocation and indirect call. Thus the candidate removes
this owner. Other internal fallbacks and fixpoint iteration can still retain
inputs; exclusive ownership at one boundary does not guarantee reuse
throughout the algorithm, or an overall runtime improvement.

## Measurements

The baseline is clean commit `fe4fd34`, with packed entropy and direct pass
composition. Both executables use Lean 4.33.1 and Lake's release defaults on
logical CPU 2 of the AMD Ryzen AI 9 HX 370. The endpoint includes the whole
native CLI through checked serialization, file writing, and exit. Normal
reporting is enabled, profiling and extra diagnostics are disabled, random
tags are fresh, and the O3 synthesis cache is warm. The first comparison uses
one warmup per binary and six measured AB/BA pairs per case.

| Case | Baseline median | Candidate median |
| --- | ---: | ---: |
| `gf16` | 0.087 s | 0.087 s |
| `gf32` | 0.319 s | 0.323 s |
| `gf64` | 2.533 s | 2.525 s |
| `hwb8` | 0.171 s | 0.174 s |
| `chebyshev` | 1.234 s | 1.273 s |
| `gf32-o3` | 0.922 s | 0.893 s |
| `qft20` | 2.512 s | 2.595 s |

Chebyshev and QFT were slower in all six initial pairs, prompting a ten-pair
confirmation with a new warmup per binary:

| Case | Baseline median | Candidate median | Candidate slower pairs |
| --- | ---: | ---: | ---: |
| `chebyshev` | 1.313 s | 1.345 s | 9 / 10 |
| `qft20` | 2.635 s | 2.640 s | 4 / 10 |

The initial QFT slowdown is not confirmed; its later difference is within
noise. Chebyshev's regression persists. These are shared-machine measurements,
so the retained distributions and pairing matter more than absolute times.

A separate peak-RSS check uses `/usr/bin/time`, CPU 2, the same O1 commands,
and three AB/BA pairs after the warmed timing suite. These instrumented runs
are excluded from the runtime medians.

| Case | Baseline median KiB | Candidate median KiB |
| --- | ---: | ---: |
| `gf64` | 99,176 | 98,612 |
| `qft20` | 169,148 | 169,268 |

The ranges overlap and there is no material peak-memory improvement. Whole-CLI
peak RSS can mask changes in optimizer-only allocation; it is not a count of
allocations or copied list nodes.

The fresh complete QFT self profile uses `cycles:u`, 997 Hz, resolved native
symbols, no call chains, and no lost samples. Allocation remains prominent:
`malloc` is 6.07%, `lean_dec_ref_cold` 5.11%, `mi_free` 5.05%, and
`mi_malloc_small` 5.02% of self samples. Metadata rebuilding now appears under
`RawCircuit.ofGates` at 3.13%; changing that symbol from `withGates` does not
mean the metadata scans disappeared. The profile does not establish the cause
of the small Chebyshev slowdown. Native text grows by 556 bytes and the
executable by 704 bytes.

All 142 timing invocations and 12 RSS invocations succeed. Metrics agree within
each timing case, retained QASM pairs are identical, and QFT still matches
Rust. Identities remain stable during the comparisons. The candidate passes
`lake clean tzap-lean` followed by `lake build`; after reverting its source,
the affected modules and importers are rebuilt again.

## Decision and remaining targets

Reject this wrapper change: the ownership change is verified in generated C,
but it has no measured runtime or memory benefit and retains a small regression
on Chebyshev. The packed-entropy improvement and direct composition remain.

The next independent driver target is `fixpointShrink`: it retains a whole
input circuit to compare gate counts and constructs a pass chain for the full
fuel budget before running. A direct loop could retain only the old count and
construct subsequent iterations on demand. It needs its own equivalence proof
and O3 comparison. Repeated metadata scans and internal list fallbacks are
other visible costs to attribute before changing representations.

## Evidence

| Executable | SHA-256 |
| --- | --- |
| Baseline / retained production code | `e9bc0f62f257ecc9507b14710c098a47fa124b866ff3f9aa0fba3700cf53d5c7` |
| Rejected candidate | `2bd99eb6fa906e593b58d65fbadc4dd2ede4d2fbb3d2c0cf0eb5cdde9db78a39` |

Local ignored evidence is in `experiments/lean-gate-ownership-20260910/`:
`candidate.patch`, both binaries, and `baseline-*.c` / `candidate-*.c` preserve
the implementation and ownership paths. `compare.py`, `confirm.py`,
`final-summary.json`, `confirm-summary.json`, and their case directories
preserve exact commands, raw timings, identities, source diffs, and logs.
`validation.json`, `confirm-validation.json`, `rss.py`, `rss-runs.json`,
`profile.json`, `candidate-qft.perf.data`, `candidate-qft-self.csv`, and
`sizes.json` record the additional checks. `clean-build.log`,
`restored-build.log`, and `decision.json` record validation and rejection.
