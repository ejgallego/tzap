# Keep sampled entropy packed

The executable now passes packed random words directly to phase folding instead
of exposing each word as 128 bit functions and packing it again. QFT improves
from 6.883 to 3.183 seconds and Chebyshev from 2.251 to 1.395 seconds. The IO
rewrite is proved equal to the sampled specification, including entropy reads
and error propagation.

## Measurements

These are whole native CLI times, including startup, parsing, optimization,
normal result reporting, checked serialization, writing the output, and exit.
Both binaries use Lean 4.33.1 and Lake's release defaults on logical CPU 2 of
the same AMD Ryzen AI 9 HX 370. Each case has one warmup per binary and six
measured pairs in alternating AB/BA order. Profiling and extra diagnostics are
disabled. Each invocation gets fresh OS entropy; the O3 synthesis cache is warm.

| Case | Baseline median | Candidate median | Baseline / candidate |
| --- | ---: | ---: | ---: |
| `gf16` | 0.096 s | 0.092 s | 1.05× |
| `gf32` | 0.327 s | 0.323 s | 1.01× |
| `gf64` | 3.108 s | 3.146 s | 0.99× |
| `hwb8` | 0.245 s | 0.217 s | 1.13× |
| `chebyshev` | 2.251 s | 1.395 s | 1.61× |
| `gf32-o3` | 1.035 s | 1.021 s | 1.01× |
| `qft20` | 6.883 s | 3.183 s | 2.16× |

All cases use O1 except `gf32-o3`. Small differences on the multipliers should
be treated as noise; the largest multiplier's median is 1.2% higher. This is a
shared machine with varying load and clocks, so compare paired binaries within
this experiment rather than absolute times from earlier reports.

All 98 invocations exited successfully and reported identical gate counts,
two-qubit counts, T-counts, and depths within each case. Each retained
baseline/candidate QASM pair is byte-for-byte identical. QFT also matches the
previous Rust output. Source, binary, input, and cache identities remained
stable during each completed comparison.

## Mechanism and correctness

`randomWords` retains the existing little-endian byte reader, request size, and
oversized-request error. `randomSample` remains its bit-function view for the
ideal model. The executable instead consumes the owned array, reduces each word
modulo `2^k` once, and captures the resulting array for constant-time lookup.
Normalization preserves partial-byte widths and all 128 CLI tag bits.

`bitsToWord_wordToBits` proves the word/bit/word round trip equals that modulus.
`normalizeSampleWords_eq` proves stream equality, including zero padding beyond
the finite sample. The checked transformations are equal, and
`phaseFoldRandom_eq_packed` proves equality of the IO actions on both success
and error paths. Its `csimp` attribute selects the packed runner for compilation.
The ideal distribution and failure-bound theorem remain unchanged.

Generated C confirms that the IO result transfers its array to normalization;
the mapping loop uses `lean_array_uset`, with no retained sample closure owning
the original array. The lookup closure captures only the prepared array and
the finite bound. Array preparation occurs before closure construction.

This placement matters: an initial function-returning helper was eta-expanded,
moving the entire map into every lookup. It slowed the medium multiplier by
about 24% in the initial comparison. Adding `inline` still produced that shape.
The rejected trial was stopped during the largest multiplier. Returning an
array and constructing the lookup closure in the consuming function fixes the
problem; generated C verifies this before the final suite is run. Those early
artifacts are retained separately and are not acceptance results.

The fresh complete QFT profile has 2,400 samples with none lost, using
`perf 6.19.10`, `cycles:u`, 997 Hz, and CPU 2. Attribution uses resolved self
instruction pointers, without call chains. `bitsToWordAux` disappears from the
samples. GMP exponentiation falls from 3.65% to 0.13% of self samples and
`lean_apply_1` from 3.45% to 0.95%. These are noisy proportions over different
total runtimes, not exact allocation counts. Native text shrinks by 1,960 bytes
and the executable by 2,576 bytes.

`lake build` passes, rebuilding the affected modules and their importers in
batch. Regression guards cover bit 127, partial-byte masking, zero-width tags,
and the existing phase-folding behavior. Beam probes were used without saving
server checkpoints as build evidence.

## Ownership findings for subsequent work

The tag-state mutator already releases the old state before updating its array.
Speculative merge scans retain a fallback state and can share the array, but
array-copy/expansion helpers account for only 0.11% of baseline QFT and 0.37% of
the fresh baseline largest-multiplier self profiles. This does not attribute all
allocation costs or rule out copies elsewhere.

Two broader retained owners are visible in generated C: unconditional
`ExecutableRandPass.comp` calls the conditional combinator, retaining its input
for a condition that always returns true; gate-transform wrappers retain their
old circuit across `withGates`. Fixpoint iteration also retains its input only
to compare lengths and eagerly constructs its fuel-sized pass chain. These are
the next ownership boundaries to investigate independently.

## Evidence

Baseline source is clean commit `32fbf9e`. The candidate is the source change
accompanying this report.

| Executable | SHA-256 |
| --- | --- |
| Baseline | `0a9b83980c18b093662ec7543867be2017f7465e4fdf9258a2aadbf87cad6f3a` |
| Candidate | `6c11e592be8c386613b9636d96291878c3e2e72d4fae518be8eebebeedde6569` |

Local ignored evidence is in `experiments/lean-packed-samples-20260910/`:

- `final-summary.json`, `final-<case>/`, and `compare-final.py` preserve the
  accepted raw comparisons, command arrays, identities, source diffs, and logs.
- `validation.json`, `profile.json`, `final-qft.perf.data`,
  `final-qft-self.csv`, `final-gf64.perf.data`, and `sizes.json` preserve checks,
  attribution, and native sizes.
- `baseline`, `candidate-prepared`, `prepared-PhaseFoldRand.c`, and
  `prepared-array-build.log` identify the accepted executables and build.
- `candidate`, `rejected-PhaseFoldRand.lean`, `candidate-PhaseFoldRand.c`, and
  `accepted-<case>/` preserve the rejected eta-expanded trial. The separate
  `prepared-gf16/` comparison completed before its outer reporting script failed;
  it is excluded from the final suite, which reran all seven cases.
