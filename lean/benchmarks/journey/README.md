# tzap performance journey

Open [the generated report](report/index.html). It includes the fresh
original/current/Rust comparison, eleven selected comparisons from the earlier
experiments, three searchable native self profiles, and the rejected designs.
The report was regenerated on 2026-09-12 using lean-profile-skill source revision
`f14b45ad47b88d30e3706d6da8854491906ba9cc`.
It uses 348 retained observations in 19 shared JSONL datasets, with 26 explicit
comparisons and eight original-baseline entries. QFT's entry has only a timed-out
warmup. No new benchmark runs were needed. Its current optimizer identity is
`ba401fb`, as measured in the final campaign at `5d5f169`.

To browse a checkout locally:

```sh
python3 -m http.server 8767 --bind 127.0.0.1 --directory lean/benchmarks/journey
```

Open `http://localhost:8767/report/`. All report links stay inside this directory.
Copying the entire `journey` directory preserves the evidence links. The large
executables, QASM outputs and native perf captures remain in the original
ignored experiment directories; identities and selected textual evidence are
bundled here. No remote assets or uploads are needed to read this report.

## Reading the evidence

The directly measured totals use the original Lean binary at `2c29be4`, current
Lean at `ba401fb`, and unchanged Rust at `2c29be4`, all measured in one campaign.
Each complete series has six observations and one excluded warmup. The original
QFT warmup was killed at 60 seconds; it is not a measured baseline or median.
Current Lean and Rust complete all eight workloads.

The earlier experiments compare each candidate with its own control. Their
medians must not be combined into a cumulative speedup curve. The two initial
tag/sample commits were accepted together and share a final controlled
comparison. Rejected candidates have valid measured distributions: observation
`included` fields govern statistical inclusion, while `decision_status` describes
the optimization. Rust comparisons remain unclassified because they do not
propose a Lean change.

The archived validation records support each inclusion. The adapter also
rechecks all successful stderr metrics. The final campaign preserves all QASM
files and independently counted output metrics; earlier paired runners reused
their output paths and retain only the final QASM pair. These different
validation scopes remain explicit in the adapted rows.

The profile viewers show aggregated self weights, with original symbol names
and process labels. They do not invent caller stacks, phase durations or a
chronological timeline. Early invalid DWARF chains were discarded. Instrumented
profiles and RSS checks are separate from headline wall-time observations.

## Rebuild from the bundled archive

The adapter uses Python 3.10 or newer. It needs the
`lean-profile-skill` report builder with the shared-dataset
`lean-profile-review-alpha` contract; optional plots need Matplotlib. Choose a
fresh output directory under this bundle to keep HTTP links reachable. From the
repository root:

```sh
python3 lean/scripts/profile-journey.py \
  --skill-dir /path/to/lean-profile-skill \
  --out lean/benchmarks/journey/report-new
```

Use the tested source checkout for `--skill-dir`: the installed copy under
`~/.codex/skills/lean-profile-skill` still matched the previous report's version
when this review ran. We tested an isolated copy of the clean source checkout
at `/home/egallego/lean/lean-profile-skill`; the installed copy was unchanged.

For all standalone SVG/PNG distribution plots and the three-way overview:

```sh
UV_CACHE_DIR=/tmp/tzap-review-uv-cache MPLCONFIGDIR=/tmp/tzap-review-mpl \
  uv run --no-project --with matplotlib python lean/scripts/profile-journey.py \
  --skill-dir /path/to/lean-profile-skill \
  --out lean/benchmarks/journey/report-new --plots
```

These are alternative commands; the output directory must not already exist.
Open `http://localhost:8767/report-new/` after starting the server above.
`--no-project` prevents uv from trying to build tzap's unrelated Python/Rust
package just to draw plots. Normal rebuilding reads the bundled evidence, so it
does not require the original ignored experiment directories. A one-time
`--import-from /path/to/original/tzap` option imports those directories only
when `evidence/` does not yet exist.

`catalog.json` explicitly selects comparisons and supplies the interpretation.
`evidence/archive.json` hashes every archived source file. `audit.json` records
the campaign checks. The original JSONL, source manifests, stderr/stdout,
validation, code snapshots, patches and build logs remain byte-exact in
`evidence/`. Original absolute paths are preserved as capture metadata.

The JSONL normalization retains every original column, including integer
`elapsed_ns`, nested metrics and array-valued argv. It derives block IDs from the
original round/pass plus phase, never from row order. The final harness used
zero-based slots; `source_slot` preserves them while `slot` adds one for the
skill's positive-slot contract. Warmups stay visible with `included=false`.
QFT's configured timeout is distinct from the observed elapsed time.

Each workload/campaign has one dataset shared by its baselines and comparisons.
The report builder copies the exact JSONL bytes it used, and writes the numerical
model and figure hashes to `review-data.json`. `generator.json`
records the adapter and selected builder hashes. Plot bytes can depend on
Matplotlib and fonts; the archived observations and numerical model provide the
reproducible results.

The updated skill handles units and dense ticks directly, so the earlier local
`matplotlibrc` workaround was removed. No installed skill source is modified.

## Validation

The independent checker compares typed JSONL fields back to their original
lines, verifies each of the 348 source observations appears exactly once,
recomputes quartiles, medians and matched differences, and checks evidence/figure
hashes, warmup timeouts and inclusion of valid rejected trials:

```sh
python3 lean/scripts/check-profile-review.py --numerical-only
```

With the local server running, the browser check uses a fresh headless Chrome
instance and exercises text/decision filters, shared tables, timeout records,
profile toggles, symbol search, local HTTP
links, and 1280/768/390-pixel viewports:

```sh
UV_CACHE_DIR=/tmp/tzap-review-uv-cache uv run --no-project --with playwright \
  python lean/scripts/check-profile-review.py --url http://localhost:8767/report/
```

Browser screenshots are written under `/tmp/tzap-review-browser` by default.
The completed [verification record](verification.json) includes numerical,
artifact-hash, negative-input and browser checks. A separate
[relocated rebuild check](rebuild-verification.json) confirms that copying only
the bundled evidence and scripts reproduces the statistics and JSONL hashes.
The checker also accepts `--previous /path/to/prior/journey` to compare all
26 statistics records and seven completed baselines against the former report.

The [skill test record](skill-verification.json) identifies the tested skill by
source commit and file hashes. Its [78 Python tests](testing/python-tests.log)
(including plots) and [10 JavaScript tests](testing/javascript-tests.log) passed.
Tests ran from an isolated copy of the source checkout. The command
importer was also checked against all eleven retained historical captures:

```sh
python3 lean/scripts/check-profile-import.py \
  --skill-dir /path/to/lean-profile-skill --out /tmp/tzap-import-check-new
```

This integration check revalidates the archived project evidence before making
hash-bound output-validation assertions, compares imported statistics with the
journey adapter, and verifies unchecked/incorrectly bound inputs stay excluded
or fail. It also recomputes the new harness summaries from retained runs and
checks that positive savings mean faster in both the harness and report. Old
summary files remain byte-exact in the archive. It executes no benchmark
commands. The main adapter handles both this
harness and tzap's custom three-way harness and retains portable evidence paths.

See [skill-feedback.md](skill-feedback.md) for suggestions based on this report.
