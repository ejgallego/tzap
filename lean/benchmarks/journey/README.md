# tzap performance journey

Open [the generated report](report/index.html). It includes the fresh
original/current/Rust comparison, eleven selected comparisons from the earlier
experiments, three searchable native self profiles, and the rejected designs.
The report is generated from retained observations; no new benchmark runs were
needed. Its current optimizer identity is `ba401fb`, as measured in the final
campaign at `5d5f169`.

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
QFT warmup was killed at 60 seconds; it is a censored observation, not a median.
Current Lean and Rust complete all eight workloads.

The earlier experiments compare each candidate with its own control. Their
medians must not be combined into a cumulative speedup curve. The two initial
tag/sample commits were accepted together and share a final controlled
comparison. Rejected candidates have valid measured distributions: the CSV
`accepted` field means inclusion in statistics, not approval of the change.

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

The adapter uses Python 3.10 or newer. It needs the installed
`lean-profile-skill` report builder; optional plots need Matplotlib. Choose a
fresh output directory. From the repository root:

```sh
python3 lean/scripts/profile-journey.py \
  --skill-dir /path/to/lean-profile-skill \
  --out /tmp/tzap-review-new
```

For all standalone SVG/PNG distribution plots and the three-way overview:

```sh
UV_CACHE_DIR=/tmp/tzap-review-uv-cache MPLCONFIGDIR=/tmp/tzap-review-mpl \
  uv run --no-project --with matplotlib python lean/scripts/profile-journey.py \
  --skill-dir /path/to/lean-profile-skill \
  --out /tmp/tzap-review-new --plots
```

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

The CSV projection retains every original column, with arrays and objects JSON
encoded. It derives pair IDs from the original round/pass plus phase, never from
row order. The report builder copies the exact CSV bytes it used, and writes
the numerical model and figure hashes to `review-data.json`. `generator.json`
records the adapter and installed builder hashes. Plot bytes can depend on
Matplotlib and fonts; the archived observations and numerical model provide the
reproducible results.

The small bundled `matplotlibrc` reduces dense x-axis tick-label size in the
skill's two-panel plots. Its hash and the Matplotlib version are recorded in
`generator.json`; no installed skill source is modified.

## Validation

The independent checker compares CSV cells back to their original JSONL lines,
recomputes medians and matched differences, and checks archive hashes, censored
timeouts and inclusion of valid rejected trials:

```sh
python3 lean/scripts/check-profile-review.py --numerical-only
```

With the local server running, the browser check uses a fresh headless Chrome
instance and exercises filters, profile toggles, symbol search, local HTTP
links, and 1280/768/390-pixel viewports:

```sh
UV_CACHE_DIR=/tmp/tzap-review-uv-cache uv run --no-project --with playwright \
  python lean/scripts/check-profile-review.py --url http://localhost:8767/report/
```

Browser screenshots are written under `/tmp/tzap-review-browser` by default.
The completed [verification record](verification.json) includes numerical,
artifact-hash, negative-input and browser checks. A separate
[relocated rebuild check](rebuild-verification.json) confirms that copying only
the bundled evidence and scripts reproduces the statistics and CSV hashes.

See [skill-feedback.md](skill-feedback.md) for suggestions based on this report.
