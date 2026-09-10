# Execute fixpoint rounds on demand

The optimizer now runs shrinking fixpoints in a tail-recursive loop, instead of
constructing a named pass chain for the entire fuel budget before starting.
The accepted version preserves the input retention used by the existing length
comparison. A separate count-only version released that owner but was slower
on the larger O3 case, so it was rejected.

## Implementation and correctness

`ExecutableRandPass.runFixpointShrink` invokes the pass only while fuel remains
and the previous round shortened the gate list. Zero fuel returns immediately;
the first non-shrinking result is returned even if its contents changed.
`runFixpointShrink_eq` proves equality of the resulting IO action with the
original `fixpointShrink` specification for every pass, input and fuel value.
All three fixpoint call sites in `runConfiguredChecked` use the direct runner.
The named-pass API and specification remain available unchanged.

Generated C confirms a `goto _start` back edge and no recursive pass-chain
construction on these optimizer paths. The input circuit is incremented before
the pass call and released after its gate list is extracted for comparison,
preserving the former ownership pattern. The old constructor recursively built
the remaining pass before composing it with the current one. With uncapped
fuel equal to the initial gate count plus one, that eagerly allocated closures
and pass names even when the optimizer would stop after very few rounds.

Tests cover zero fuel, fuel exhaustion, convergence at an empty gate list,
a changed output of equal length, and an IO error after a successful shrinking
round. They check both results and effect counts. The count-only candidate
passed `lake clean tzap-lean` followed by `lake build`; the final direct runner
then passed a normal batch `lake build`, rebuilding the changed modules,
importers and tests. Beam was used for speculative proof checks, without saving
module checkpoints into these builds.

## Accepted loop measurements

The local baseline is `1d14587`, including all earlier accepted improvements.
This is distinct from the original pre-profiling baseline used in the cumulative
comparison. Both executables use Lean 4.33.1, the pinned mathlib dependency and
Lake release defaults. Each O3 case has one warmup per executable and ten
measured pairs alternating AB/BA order, pinned to logical CPU 2 on the AMD Ryzen
AI 9 HX 370. The synthesis cache is warm. Timings cover the native CLI through
checked serialization, file writing and exit, with normal reporting, fresh
128-bit random tags and no profiler or verbose diagnostics.

| Case | Before | Direct loop | Faster pairs |
| --- | ---: | ---: | ---: |
| `gf32-o3` | 0.8001 s | 0.8022 s | 4 / 10 |
| `gf64-o3` | 3.8876 s | 3.7829 s | 6 / 10 |

The smaller case is flat. The larger case has a 2.7% lower median, but its mean
only moves from 3.9933 s to 3.9720 s and the distributions overlap substantially.
This is a modest, noisy result on a shared machine, not evidence of a large
speedup. The concrete benefit is eliminating unnecessary work proportional to
the fuel budget and the constructor's recursive stack. All 44 invocations
succeed with identical four-field metrics and identical retained QASM pairs;
artifact identities remain stable. Native text shrinks by 924 bytes and the
executable by 1,512 bytes.

Separate complete `gf32-o3` self profiles use `cycles:u` at 997 Hz, no call
chains and resolved symbols. Baseline and accepted loop have 798 and 827
samples, respectively, with zero lost samples. In the accepted profile,
`lean_dec_ref_cold` accounts for 14.67%, `mi_free` 8.23%, and `mi_malloc_small`
6.85%. Array copying/expansion is 0.32%. Allocation and table loading remain
visible; these short profiles do not explain a two-percent timing difference
or establish a reduction in allocation count.

## Rejected ownership variant

Simply binding the old gate count before `p.run` did not release the old input:
the compiler deferred the pure length computation until after the IO call.
A separate helper with an explicit count argument forced the intended order.
That version computed the initial count once, carried the new count between
rounds, and released the old circuit before invoking the pass. Its IO equality
proof and generated C confirmed the source and ownership changes.

The initial six-pair, eight-case comparison was mostly flat on O1, but the
`gf64-o3` median increased from 3.739 s to 3.891 s. A ten-pair confirmation
measured 3.910 s versus 4.133 s, with the candidate slower in 8 of 10 pairs.
Noise was substantial, but there was no positive evidence supporting this
ownership change. Separate three-pair peak-RSS measurements also showed no
material saving: `gf32-o3` medians were 166,144 versus 168,732 KiB and
`gf64-o3` 193,984 versus 193,672 KiB. These instrumented runs are excluded from
the runtime medians. The count-only variant is not in production.

## Evidence

| Executable | SHA-256 |
| --- | --- |
| Local baseline | `e9bc0f62f257ecc9507b14710c098a47fa124b866ff3f9aa0fba3700cf53d5c7` |
| Accepted direct loop | `2be0ae05dc6574dd8912934c8a8ccf99772c11cb88a33417e62d306d27f6a469` |
| Rejected count-only loop | `3533d0b1d225a6a2fccd2b5f58e61862500b33bc4a919af6670fbc2d260a9fc6` |

Local ignored evidence is in `experiments/lean-fixpoint-20260910/`.
`baseline`, `candidate-lazy`, `lazy-*.c`, `compare-lazy.py`, `lazy-summary.json`,
`lazy-validation.json`, `lazy-sizes.json` and `lazy-gf*-o3/` preserve the accepted
comparison, commands, raw distributions, identities, logs and source patches.
The baseline/lazy perf data and self CSVs retain the separate profiles.
`candidate`, `owned-count.lean`, `owned-count.patch`, `candidate-*.c`,
`final-summary.json`, `confirm-summary.json`, `rss-runs.json` and their scripts
preserve the rejected variant. `naive-loop.lean` and its generated C preserve
the earlier deferred-count finding. Build logs and `decision.json` record the
validation and selection.
