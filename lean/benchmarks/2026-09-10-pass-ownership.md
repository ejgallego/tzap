# Consume inputs during unconditional pass composition

`ExecutableRandPass.comp` now binds the two IO actions directly. Previously it
called `compWhen` with a condition that always returned true. Generated C kept
the input circuit alive across the first pass so that it could later supply
that input to the condition. Direct composition removes that retained owner
and the condition callback. `comp_eq_compWhen` proves the definitions equal,
including names, output circuits, effect order, and error propagation.

The CLI computes baseline metrics before consuming its circuit. Its driver
then transfers the circuit to the composed pass without retaining another
copy. The new composition closure captures only the two pass runners and
passes its circuit argument directly to the first runner, without the old
`lean_inc_ref(c)`. On success it transfers the returned circuit to the second
runner; on error it releases the unused second runner and returns the error.

This is an ownership cleanup, not a demonstrated large runtime win. The gate
transformations themselves still retain their input circuits across
`withGates`, keeping the old gate lists shared even after this outer owner is
removed. Fixpoint iteration has a separate retained input for its length test.

## Measurements and validation

The baseline is clean commit `7628452`, including packed entropy. The same
whole-CLI endpoint, Lean 4.33.1 release build, CPU 2, fresh random tags, and warm
O3 cache are used as in the [packed-entropy experiment](2026-09-10-packed-entropy.md).
Each case has one warmup per binary and six measured AB/BA pairs.

| Case | Baseline median | Candidate median |
| --- | ---: | ---: |
| `gf16` | 0.089 s | 0.087 s |
| `gf32` | 0.383 s | 0.370 s |
| `gf64` | 2.645 s | 2.601 s |
| `hwb8` | 0.171 s | 0.172 s |
| `chebyshev` | 1.252 s | 1.235 s |
| `gf32-o3` | 0.885 s | 0.912 s |
| `qft20` | 2.631 s | 2.604 s |

Differences are small and mixed on this shared machine; O3's median is 3.1%
higher. No broad speedup is claimed. All 98 invocations succeed with identical
reported metrics within each case, and all retained QASM pairs are identical.
QFT still matches Rust. Measurement identities remain stable. `lake build`
passes, including the equivalence theorem and existing behavioral tests.

A fresh complete QFT self profile (`cycles:u`, 997 Hz, no call chains, no lost
samples) still shows allocation and `withGates` as material costs; the latter
accounts for 4.45% of self samples. There is no evidence of a large allocation
reduction from composition alone. Native text and executable size each grow
by 960 bytes, as both direct and conditional composition remain available.

| Executable | SHA-256 |
| --- | --- |
| Baseline | `6c11e592be8c386613b9636d96291878c3e2e72d4fae518be8eebebeedde6569` |
| Candidate | `e9bc0f62f257ecc9507b14710c098a47fa124b866ff3f9aa0fba3700cf53d5c7` |

Local ignored evidence is in `experiments/lean-pass-ownership-20260910/`:
`context.json`, `compare.py`, `final-summary.json`, and `final-<case>/` preserve
commands, raw runs, identities, and source diffs; `validation.json` and
`sizes.json` record checks; both binaries and generated `ExecutableRandPass.c`
files are retained. `final-qft.perf.data`, `final-qft-self.csv`, and
`profile-qft.stderr` preserve the fresh profile and successful endpoint.
