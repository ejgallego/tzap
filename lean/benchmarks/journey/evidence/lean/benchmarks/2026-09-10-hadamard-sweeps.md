# Batched Hadamard reduction

Hadamard reduction now applies multiple rewrites per sweep instead of restarting
from the beginning after each rewrite. The representative QFT circuit completes
in 6.37 seconds; the previous executable exceeded 60 seconds. Chebyshev improves
from 2.64 to 1.91 seconds. The semantic, well-formedness, and operand-range proofs
are preserved, and all retained comparison outputs are byte-for-byte unchanged.

## Measurements

Both native executables use Lake's normal release settings, Lean 4.33.1, and
logical CPU 2 on the same AMD Ryzen AI 9 HX 370. Times include startup, parsing,
optimization, normal result reporting, checked serialization, file writing,
and exit. Profilers and extra diagnostics are disabled. The O3 table cache is
warm and unchanged. Each completed baseline/candidate comparison uses one warmup
per binary and six pairs in alternating AB/BA order.

| Circuit | Level | Baseline median | Candidate median | Baseline / candidate |
| --- | --- | ---: | ---: | ---: |
| `gf2^16_mult` | O1 | 0.094 s | 0.090 s | 1.05× |
| `gf2^32_mult` | O1 | 0.343 s | 0.352 s | 0.97× |
| `gf2^64_mult` | O1 | 2.394 s | 2.418 s | 0.99× |
| `hwb8` | O1 | 0.210 s | 0.204 s | 1.03× |
| `chebyshev` | O1 | 2.641 s | 1.910 s | 1.38× |
| `gf2^32_mult` | O3 | 1.069 s | 1.053 s | 1.02× |
| `qft20` | O1 | >60 s, timeout | 6.368 s | — |

Chebyshev is faster in every measured pair; its median elapsed time falls by
27.7%. The other completed workloads are broadly unchanged. In particular, the
medium multiplier's median is 2.8% higher and the largest multiplier's is 1.0%
higher. These small differences should not be read as reliable speedups or
regressions on a shared machine with changing CPU frequencies. The smallest
multiplier is below 100 ms, where process startup and timing noise matter more.
Raw distributions and paired deltas are retained.

QFT has one candidate warmup and six successful measured runs, ranging from
6.115 to 6.811 seconds. Its baseline is the earlier 60.004-second timeout from
the Rust comparison, checked to have exactly the same executable hash, input
hash, CPU affinity, level, and output endpoint. It is a censored observation,
not a completed baseline median or an order-balanced QFT comparison.

## Implementation and attribution

The baseline QFT profile assigned 50.66% of self samples to `scanH`, 14.21% to
`Gate.support`, and 8.82% to `reduceStep`. Generated C showed
`reduceHadamardsFuel` invoking `reduceStep` on the whole circuit again after each
successful rewrite. A long unchanged prefix was repeatedly traversed.

`reduceSweep` folds the circuit from right to left, applying the existing
`reduceAtH` rules to each gate and its already processed suffix. A Boolean tracks
whether any rewrite occurred, including length-preserving `H·S·H` rewrites.
The driver repeats complete sweeps while that flag is true. Each successful
sweep removes at least one Hadamard, so the original gate count supplies a
finite sweep budget. Rewrite order can differ from the old implementation;
semantic preservation is proved independently of output equality.

An initial `reduceStep` retains the inexpensive path for an already irreducible
circuit. Once it finds a rewrite, the driver switches to complete sweeps. This
avoids allocating and discarding a sweep's array and rebuilt list when no work
is available.

Lean compiles `List.foldr` through its proved `foldrTR` replacement. Generated C
shows an array traversal with a loop back edge, rather than one native stack
frame per input gate. The sweep state is a Boolean/list pair; the loop reuses
an exclusive pair and retains the current suffix across a failed head rewrite.
Successful rewrites release that fallback. The outer driver retains the original
list until it knows whether a sweep changed anything.

The final QFT profile covers the complete command. `scanH` accounts for 1.20%
of self samples, `Gate.support` for 0.38%, and `reduceStep` for 0.11%. Allocation
and multiprecision operations now dominate the samples. Both profiles use
`perf 6.19.10`, `cycles:u`, and 997 Hz on CPU 2. Attribution uses sampled
instruction pointers; no conclusions depend on call chains. The baseline
profile is a 60-second prefix, so its percentages describe a different phase
mix from the completed candidate run.

Native text grows by 1,848 bytes and the executable by 2,224 bytes. Generated C
and symbol-size inventories are retained separately from noisy runtime data.

## Correctness and experiment history

`lake build` succeeds, rebuilding the changed module and its importers in batch.
The new sweep has proofs of semantic equivalence, distinct gate operands, and
operand ranges; the existing `CancelGates` correctness contract is unchanged.
Beam was used for speculative proof checks, with no server checkpoints used
as build evidence. Regression guards cover multiple length-preserving rewrites
in one sweep, the change flag, and an irreducible odd diagonal run. Existing
tests also cover measurements, resets, disjoint wires, and blocked rewrites.

All 84 invocations in the six paired comparisons exited successfully. Every
reported gate count, two-qubit count, T-count, and depth agrees within each case,
and each retained baseline/candidate QASM pair is byte-for-byte identical. All
seven candidate QFT invocations emit exactly the Rust output: 259,189 gates,
380 two-qubit gates, 122,695 T/Tdg gates, and depth 49,442. Executable, source,
input, and cache identities remained stable during measurement.

The first candidate always ran a full sweep, including on irreducible inputs.
It made QFT complete, but a ten-pair confirmation retained about a 4.9% slower
largest-multiplier median. That candidate was not accepted. The initial
single-rewrite check was then added, and the entire representative surface was
measured again. The first candidate, source patch, and measurements remain in
the evidence bundle; they must not be confused with the accepted results.

Decision: accept the batched sweep with the initial fixpoint check. It resolves
the QFT timeout and substantially improves Chebyshev while retaining the proof
contract and the observed output quality. Allocation and packed-tag construction
are the next areas suggested by the completed QFT profile.

## Evidence

Baseline source is clean commit `737667f`, after the array-state and sample-cache
improvements. The candidate is the code change accompanying this report.

| Executable | SHA-256 |
| --- | --- |
| Baseline | `ea8e0ac5bf524c800c47637f6c033c920d256afe71b8801484a05546d62c42fc` |
| Candidate | `0a9b83980c18b093662ec7543867be2017f7465e4fdf9258a2aadbf87cad6f3a` |

Local, git-ignored evidence is in `experiments/lean-hadamard-sweep-20260910/`:

- [Accepted timings](../../experiments/lean-hadamard-sweep-20260910/accepted-summary.json)
  and [QFT runs](../../experiments/lean-hadamard-sweep-20260910/accepted-qft/summary.json)
- [Validation](../../experiments/lean-hadamard-sweep-20260910/accepted-validation.json),
  [profile](../../experiments/lean-hadamard-sweep-20260910/accepted-profile.json), and
  [native sizes](../../experiments/lean-hadamard-sweep-20260910/accepted-native-size.json)
- `compare-accepted.py` and `accepted-<case>/` preserve exact commands, raw runs,
  manifests, identities, source diffs, and stdout/stderr from the profiling
  skill's comparison helper.
- `baseline-qft/` and `qft-context.json` identify the reused timeout observation.
- `baseline`, `candidate-fastfixpoint`, `fastfixpoint-Cancel.c`,
  `accepted-qft.perf.data`, and `fastfixpoint-build.log` preserve the accepted
  binaries, generated code, samples, and batch build result.
- `candidate`, `sweep-only.patch`, `compare-<case>/`, `confirm-gf64/`, and
  `final-summary.json` preserve the unaccepted sweep-only trial.
