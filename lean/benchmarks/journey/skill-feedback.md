# lean-profile-skill review after the 2026-09-28 update

The installed update successfully rebuilds the tzap journey. Its full suite passes: **85 Python tests** and **11 JavaScript tests**. The report integration retains 474 observations in 25 shared JSONL datasets and computes 32 explicit comparisons. [skill-verification.json](skill-verification.json) records all 44 installed skill files by SHA-256 because the installed directory is not a Git checkout.

## Improvements confirmed

Native comparison grouping now models the notion of one experiment containing several benchmark cases without pooling their observations. The new presentation tests cover shared explanations, per-workload rows, unavailable outcomes, filtering and common units. This directly addresses the main issue from the previous tzap review.

JSONL remains the right canonical input for benchmark evidence. It preserves integer nanosecond clocks, array-valued commands, nested metrics, booleans and source order. CSV is still useful for flat exports and hand inspection, but it would lose structure or require fragile encoding for this campaign.

The builder accepts the fresh three-way data, the original QFT warmup timeout, valid rejected experiments and the new six-case nonlinear Array experiment without inventing estimates. The generated numerical model reproduces all retained historical statistics exactly while allowing the intentionally refreshed O1 totals.

## Suggested next improvements

The installed skill should expose a source revision or package version in machine-readable metadata. This review again needed a complete file-hash inventory to identify the tested update. A version plus the content hashes would make report provenance easier to read without weakening it.

A generic importer for validated N-configuration command campaigns would remove project-specific adaptation for baseline/current/Rust harnesses. It should preserve execution blocks and slots, bind raw JSONL and validation bytes by hash, and let the investigator request explicit contrasts. The current two-command importer is strong, but tzap still needs a custom adapter for its three-way campaign.

A first-class native self-profile attachment would also help. The tzap adapter turns `perf report` self weights into a searchable viewer and links generated C. The skill could support this without implying call relationships or a chronological trace: retain event, frequency, sample/loss counts, binary/input identities, and a flat symbol-weight table.

The serialized numerical model is still large (about 4.9 MiB for 474 unique observations) because observations recur under datasets, series and comparisons. Storing each observation once and referring to stable IDs from included/excluded sets and contrasts would improve diffs and portability.

The tzap presentation layer remains useful for grouping the baseline and each logical optimization into top-level tests, showing all plots by default, and switching plot sizes. Native comparison groups now cover the hardest part of that design; extending the same grouping concept across baselines and comparisons could let projects retire more custom rendering code.
