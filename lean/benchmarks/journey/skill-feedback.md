# lean-profile-skill: review after the 2026-09-12 update

The updated skill reproduces tzap's retained results exactly. We tested source
revision `f14b45ad47b88d30e3706d6da8854491906ba9cc` from an isolated copy of
`/home/egallego/lean/lean-profile-skill`. The installed skill still matched all
41 hashes from yesterday's review, so it could not test the intended update.
Neither the source checkout nor the installed copy was modified.
[skill-verification.json](skill-verification.json) records the tested file hashes,
environment and results. This feedback supersedes the initial suggestions at
commit `c3e8280`, which remain in git history.

## This revision

All **78 Python tests**, including optional plots, and **10 JavaScript tests**
passed. Logs are retained under `testing/`. Eleven historical captures imported
successfully, and all 26 report comparisons retain exactly the previous results.

The new harness summary uses positive savings for faster candidates, agreeing
with the report. We recomputed it from each historical capture's raw runs and
checked paired savings and percent reductions against the imported report.
Archived summaries retain their original field names and signs; no evidence was
rewritten. This resolves a useful interpretation hazard between the two tools.

The new tests also cover strict CSV quoting, physical-line diagnostics and
invalid UTF-8, as well as nonfinite timeout rejection before execution. The
observation reader now consumes records without an additional full input list.
That source change does not resolve the serialized-model duplication below;
we make no new report-generation performance claim from it.

One practical improvement would be an explicit source revision in installed
skill metadata. This review needed a 41-file hash comparison and a source
checkout search to distinguish the installed version from the intended update.

## Improvements confirmed in the previous revision and retained here

- **JSONL is now a native input.** Integer nanosecond clocks, array-valued argv,
  nested metrics and typed booleans survive without CSV flattening. JSON metadata
  plus JSONL observations is a good canonical format for these captures. CSV
  remains useful for flat input and optional spreadsheet exports.
- **Shared datasets model the three-way campaign directly.** Nineteen datasets
  replace 33 duplicated baseline/contrast CSV files. The final eight datasets
  each retain original Lean, current Lean and Rust, including execution order.
  Explicit contrasts reproduce all 26 earlier comparison statistics exactly.
- **Inclusion and decisions are separate.** Warmups have `included=false`;
  accepted/rejected/inconclusive decisions describe experiments. Both rejected
  candidates still contribute all ten valid measured pairs. The decision and
  text filters compose correctly in the browser.
- **Timeouts remain visible without invented estimates.** Original QFT appears
  as one 60-second warmup timeout with no measured baseline, median or ratio.
  The current/Rust contrast in the same dataset remains available. This is more
  useful than our former separate `censored.json` attachment.
- **The command importer works on actual historical evidence.** All eleven
  retained captures imported with exact clocks, argv, order and snapshots. We
  supplied hash-bound validation only after rechecking the existing project
  evidence. An unchecked successful capture produced no timing estimate, and a
  changed validation binding was rejected before output creation.
- **Units and presentation are clearer.** Millisecond Rust observations no
  longer lose their spread to three-decimal seconds. Exact commands collapse
  out of the reading flow. The paired gf32 O3 plot now has readable ticks without
  our local `matplotlibrc` workaround. General evidence links are also hashed.

Browser checks exercised the actual tzap
report, its shared tables, timeout record, filters and native self viewers at
1280, 768 and 390 pixels. The report needs no live Perfetto import; its profiles
are aggregated native self weights, not chronological traces.

## Remaining suggestions

### Normalize the serialized model as well as the dataset files

`review-data.json` grows from **202,516 to 3,897,406 bytes** for this report.
There are 348 unique original observations, but 1,648 serialized occurrences of
records carrying `source_file` and `source_line`: datasets, baseline series,
comparison series, outcomes and inclusion/exclusion lists repeat them.

The in-memory references are shared, but ordinary JSON serialization repeats
those objects. Consider storing observations once per dataset and referring to
observation IDs from included/excluded sets, baselines and contrasts. Keep
summary statistics local if convenient. This would make the model easier to
diff and archive while preserving every outcome. The model is a downloadable
artifact, so this size increase is not evidence of slower initial page loading.

### Make optional portability policy explicit

The documented linking model is appropriate for large perf captures. General
links are now hashed, which resolves part of our earlier concern. Small evidence
bundling and relocation still belong to our adapter: we preserve 831 source
snapshots, with selected stdout/stderr, validation, source and generated C.

A future optional bundle mode could copy selected small artifacts, rewrite links,
list omitted large captures with hashes, and emit a separate relocatable
manifest. Preserve the original input manifest byte-for-byte. Absolute paths in
`review-data.json` currently describe the build location; the HTML links and
source manifest's relative paths let our complete bundle move correctly.

### Consider a native self-profile attachment

The generic trusted HTML viewer works well. A first-class self-profile kind
could remove our small custom symbol-table generator while retaining capture
identity, sampling event, coverage and lost-sample information. It must not imply
caller relationships when only instruction pointers are reliable. Investigator-
selected generated-C excerpts would also help ownership reviews.

### Keep format changes easy to identify

Rejecting the old manifest is deliberate and documented; it is not a test
failure. A schema revision or feature/version identifier would make future alpha
changes easier for adapters to diagnose. The tested source hashes currently give
us the exact implementation identity needed to reproduce this report.
