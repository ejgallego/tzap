# Feedback from the tzap performance journey

The updated builder is useful: it separates baselines, directly measured totals,
individual decisions and attribution; shares a validated model between tables
and plots; preserves exact CSV snapshots; and does not infer optimization
acceptance from positive savings. These choices fit a proof-oriented runtime
investigation with both successful and rejected experiments.

## 1. Accept JSONL observations alongside CSV

tzap has two retained JSONL formats: the skill's own `compare_commands.py` output
and a repository-specific three-way comparison. Both contain structured command
arrays, statuses, run order, timestamps, artifact paths and validation evidence.
Converting them to CSV requires nested values to be serialized back into JSON
strings. Keeping all original columns avoids information loss, but adds work
and makes the raw data less pleasant to inspect.

Use JSON for report/campaign metadata and JSONL for append-only observations.
Keep CSV as a supported flat interchange and plotting export. Both readers
should produce the same validated observation model. A first-party adapter for
the skill's own comparison helper would remove a common source of schema drift.

A proposed observation shape is:

```json
{
  "schema": "lean-profile-observation-v1",
  "id": "final/gf64/round-3/current",
  "campaign": "tzap-final-20260910",
  "workload": "gf64-o1",
  "configuration": "current",
  "block": "round-3",
  "slot": 1,
  "phase": "measured",
  "wall_ns": 2145728189,
  "status": {"kind": "exit", "code": 0},
  "argv": ["taskset", "-c", "2", "current", "input.qasm", "-O1"],
  "validation": {
    "result": "passed",
    "scope": "reported-metrics-and-retained-qasm",
    "artifact": "validation.json",
    "record": "/cases/gf64"
  },
  "inclusion": {"include": true, "reason": "validated complete run"}
}
```

This is a schema sketch, not a new measured observation. Integer nanoseconds
preserve the source clock values. Validation references should include artifact
hashes and record selectors, with explicit scope. Missing evidence must fail;
exit zero alone must not imply output validation.

## 2. Support multiple configurations and explicit contrasts

The final campaign has three configurations and uses all six execution-order
permutations. Today it becomes separate baseline/current and current/Rust CSVs,
duplicating the current observations and metadata. A shared multi-configuration
dataset plus explicit contrast definitions would preserve the full experimental
block while supporting paired differences. The report could show one compact
three-way table and overview, then selected contrasts.

Retain stable observation IDs, block IDs and execution slots. Do not pair by row
position or assume that membership in one campaign makes arbitrary series
comparable. Validation should check membership, missing members, duplicate IDs,
boundary and cohort. The investigator still owns the comparability judgment.

## 3. Treat timeouts as censored outcomes

The original QFT binary was killed at 60 seconds. It has no successful baseline
distribution. The current format requires a nonempty valid distribution, so we
keep the censored record separately and annotate the overview manually.

Support a timeout outcome with a bound and clock units. Render it as a bound,
never as a completed duration, median, zero, or silently missing case. A campaign
containing only timeouts for one configuration should still have a visible
baseline row. Mixed complete/censored series need explicit interpretation;
ordinary medians of only the survivors can mislead.

## 4. Separate statistical inclusion from optimization decisions

`accepted=true` currently means that a row belongs in a valid distribution.
The gate-owner and count-only candidates were rejected but their observations
are valid, so that name invites mistakes. Prefer `included` or
`inclusion.include` in a future schema. Keep experiment decisions structured and
separate: accepted, rejected or inconclusive, with an investigator explanation.

The report already preserves our decision text. Structured decisions would also
make filtering accepted changes and rejected hypotheses more reliable than
searching free text.

## 5. Provide a portable evidence bundle option

The builder copies observations but links other files at their existing paths.
That is appropriate for huge perf captures, but a generated report alone is not
portable. We added an explicit archive containing selected manifests,
validation, stderr/stdout, generated C, proof sources, patches and profile
exports, with a hash inventory. Large binaries and captures remain external.

An optional bundle policy could copy selected evidence, rewrite local links,
hash general links as well as profiles, reject path collisions, and list omitted
large files with hashes. Preserve the original manifest byte-for-byte and write
a separate relocatable manifest, so original provenance and usable local paths
are both available. An HTTP link audit would catch missing artifacts early.

## 6. Improve units and command presentation

Fixed three-decimal seconds obscure 4–8 ms Rust runs: an IQR can display as
`0.000`. Use adaptive display units or significant digits while preserving exact
values in the model. Mark descriptive IQR/range clearly; neither is a confidence
interval. The optional all-observation plots are especially useful here.

Command metadata is a required plain string. This adapter renders exact argv
arrays as shell-quoted commands; long absolute paths and output names dominate
small screens. Separate a concise workload label from expandable exact argv and
environment records. A full command is necessary evidence, but need not occupy
the main reading flow of every comparison.

The actual browser review also exposed overlapping tick labels on the gf32 O3
paired-saving axis. The report uses a small local Matplotlib style to reduce
x-axis label size; a better reusable fix is an adaptive locator with fewer major
ticks (for example `MaxNLocator(nbins=5)`), together with sensible units. This is
a presentation issue: the underlying observations and numerical statistics are
unchanged.

## 7. Add a native self-profile view

tzap's self instruction pointers are reliable while early DWARF callers were
not. We attached small searchable tables preserving the original symbols,
process labels, self percentages and source hashes. A native self-profile kind
could make this common case first-class without implying a flamegraph or
inventing chronology. Require capture identity, sampling event, coverage,
lost-sample information, and a clear distinction between full-command and
timeout-prefix captures.

The workflow also benefits from generated-C excerpts beside the ownership
explanation. These can be explicit investigator-selected line ranges with a
source hash; the builder should not infer callers or ownership from symbol names.
