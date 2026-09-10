#!/usr/bin/env python3
"""Compare baseline Lean, current Lean, and Rust native CLIs on repository circuits.

Six measured rounds use all permutations of the three implementations. One warmup
per implementation precedes each case. A baseline timeout is recorded as censored
and is not retried; current/Rust failures still make the command fail. Python 3.11+,
POSIX, and taskset are required. All outputs, times, and identities are retained.
"""

import argparse
import hashlib
import itertools
import json
import os
from pathlib import Path
import platform
import re
import signal
import statistics
import subprocess
import threading
import time
from datetime import datetime, timezone

ROOT = Path(__file__).resolve().parents[2]
CASES = {
    "gf16": ("feynman/gf2^16_mult.qasm", "O1"),
    "gf32": ("feynman/gf2^32_mult.qasm", "O1"),
    "gf64": ("feynman/gf2^64_mult.qasm", "O1"),
    "hwb8": ("feynman/hwb8.qasm", "O1"),
    "chebyshev": ("cobble-t/chebyshev.qasm", "O1"),
    "qft20": ("qft/qft_q020_d32421.qasm", "O1"),
    "gf32-o3": ("feynman/gf2^32_mult.qasm", "O3"),
    "gf64-o3": ("feynman/gf2^64_mult.qasm", "O3"),
}


def digest(path):
    with path.open("rb") as stream:
        return hashlib.file_digest(stream, "sha256").hexdigest()


def git(*args):
    return subprocess.check_output(["git", *args], cwd=ROOT, text=True)


def run(command, stem, out, timeout):
    started = datetime.now(timezone.utc).isoformat()
    with (out / (stem + ".stdout")).open("wb") as stdout, \
            (out / (stem + ".stderr")).open("wb") as stderr:
        start = time.perf_counter_ns()
        proc = subprocess.Popen(command, cwd=ROOT, stdout=stdout, stderr=stderr,
                                start_new_session=True)
        expired = threading.Event()

        def kill_group():
            try:
                os.killpg(proc.pid, signal.SIGKILL)
            except ProcessLookupError:
                pass

        def deadline():
            if proc.poll() is None:
                expired.set()
                kill_group()

        timer = threading.Timer(timeout, deadline)
        timer.start()
        status = "exit"
        try:
            # Timed polling can add tens of milliseconds to short Rust runs.
            proc.wait()
            if expired.is_set():
                status = "timeout"
        except KeyboardInterrupt:
            status = "interrupted"
            kill_group()
            proc.wait()
        finally:
            elapsed = time.perf_counter_ns() - start
            timer.cancel()
            timer.join()
    output = out / (stem + ".qasm")
    metrics = re.findall(r"(Gates|2q gates|T/Tdg|Depth).*?([\d,]+)\s*→\s*([\d,]+)",
                         (out / (stem + ".stderr")).read_text())
    if status == "exit" and proc.returncode == 0:
        if not output.exists() or len(metrics) != 4:
            status = "incomplete-output"
    return {
        "argv": command, "started_at_utc": started, "elapsed_ns": elapsed,
        "status": status, "exit_code": proc.returncode,
        "stdout": stem + ".stdout", "stderr": stem + ".stderr",
        "output": stem + ".qasm", "output_sha256": digest(output) if output.exists() else None,
        "metrics": metrics,
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--baseline", type=Path, required=True)
    parser.add_argument("--current", type=Path, default=ROOT / "lean/.lake/build/bin/tzap-lean")
    parser.add_argument("--rust", type=Path, required=True)
    parser.add_argument("--rust-cache", type=Path, required=True)
    parser.add_argument("--provenance", type=Path, required=True,
                        help="JSON describing each binary's source revision and build")
    parser.add_argument("--out-dir", type=Path, required=True)
    parser.add_argument("--cpu", type=int, default=2)
    parser.add_argument("--timeout", type=float, default=60)
    parser.add_argument("--case", choices=CASES, action="append", dest="cases")
    args = parser.parse_args()
    if args.timeout <= 0 or args.cpu not in os.sched_getaffinity(0):
        parser.error("timeout must be positive and CPU must be available")
    binaries = {label: getattr(args, label).resolve(strict=True)
                for label in ["baseline", "current", "rust"]}
    cache = args.rust_cache.resolve(strict=True)
    out = args.out_dir.resolve()
    out.mkdir(parents=True, exist_ok=False)
    selected = list(dict.fromkeys(args.cases or CASES))
    inputs = {case: ROOT / "benchmarks" / CASES[case][0] for case in selected}
    artifacts = [*binaries.values(), *inputs.values(), Path(__file__).resolve(),
                 args.provenance.resolve(strict=True), ROOT / "Cargo.toml", ROOT / "Cargo.lock",
                 ROOT / "lean/lean-toolchain", ROOT / "lean/lakefile.lean",
                 ROOT / "lean/lake-manifest.json"]
    artifacts += sorted((ROOT / "src").rglob("*.rs"))
    artifacts += sorted((ROOT / "lean/TzapLean").rglob("*.lean"))
    artifacts += [ROOT / "lean/TzapLean.lean", ROOT / "lean/Main.lean"]
    if any(CASES[c][1] == "O3" for c in selected):
        artifacts += sorted(cache.rglob("*.bin"))
        artifacts += [Path.home() / ".tzap-lean/superopt-tables/q3_g24_e200000.v1.bin"]
    identities = {str(p): digest(p) for p in artifacts}
    revision, patch = git("rev-parse", "HEAD").strip(), git("diff", "HEAD")
    (out / "source.patch").write_text(patch)
    metadata = {
        "revision": revision, "status": git("status", "--short"), "artifacts": identities,
        "provenance": json.loads(args.provenance.read_text()), "platform": platform.platform(),
        "cpu": args.cpu, "cases": selected, "timeout_seconds": args.timeout,
        "boundary": "whole native CLI through serialization, output write, and exit",
        "diagnostics": "normal CLI reporting; no verbose output or profiler",
        "randomness": "fresh OS entropy; Lean uses 128-bit tags",
        "cache": "warm separate implementation caches; Rust --no-parallel",
        "policy": "one warmup, six order-balanced rounds; stop retrying failed variants per case",
    }
    (out / "manifest.json").write_text(json.dumps(metadata, indent=2) + "\n")
    rows, summaries, failed = [], {}, False
    with (out / "runs.jsonl").open("w") as ledger:
        for case in selected:
            disabled = set()

            def invoke(label, warmup, round_index, slot):
                nonlocal failed
                stem = f"{case}-{'warmup' if warmup else 'run'}-{round_index}-{label}"
                command = ["taskset", "-c", str(args.cpu), str(binaries[label]),
                           str(inputs[case]), "-" + CASES[case][1], "-o", str(out / (stem + ".qasm"))]
                if label == "rust":
                    command += ["--no-parallel", "--cache-dir", str(cache)]
                row = run(command, stem, out, args.timeout)
                row.update(case=case, label=label, warmup=warmup, round=round_index, slot=slot)
                rows.append(row)
                ledger.write(json.dumps(row) + "\n")
                ledger.flush()
                if row["status"] != "exit" or row["exit_code"] != 0:
                    disabled.add(label)
                    failed |= not (label == "baseline" and row["status"] == "timeout")
                if row["status"] == "interrupted":
                    raise KeyboardInterrupt

            print("Comparing " + case, flush=True)
            for slot, label in enumerate(binaries):
                invoke(label, True, 0, slot)
            active = [label for label in binaries if label not in disabled]
            orders = list(itertools.permutations(active)) if active else [()]
            for i in range(6):
                for slot, label in enumerate(orders[i % len(orders)]):
                    if label not in disabled:
                        invoke(label, False, i + 1, slot)
            good = [r for r in rows if r["case"] == case and r["status"] == "exit" and r["exit_code"] == 0]
            entry = {"outputs_identical": len({r["output_sha256"] for r in good}) == 1,
                     "metrics_identical": all(r["metrics"] == good[0]["metrics"] for r in good) if good else False}
            failed |= not entry["outputs_identical"] or not entry["metrics_identical"]
            for label in binaries:
                samples = [r["elapsed_ns"] / 1e9 for r in good if r["label"] == label and not r["warmup"]]
                errors = [r for r in rows if r["case"] == case and r["label"] == label
                          and (r["status"] != "exit" or r["exit_code"] != 0)]
                entry[label] = {"median_seconds": statistics.median(samples) if samples and not errors else None,
                                "seconds": samples, "errors": errors}
            summaries[case] = entry
            print(case, {k: v["median_seconds"] for k, v in entry.items() if isinstance(v, dict)},
                  "identical", entry["outputs_identical"], flush=True)
            (out / "summary.json").write_text(json.dumps(summaries, indent=2) + "\n")
    drift = [path for path, value in identities.items() if digest(Path(path)) != value]
    if revision != git("rev-parse", "HEAD").strip() or patch != git("diff", "HEAD"):
        drift.append("source revision or tracked diff")
    (out / "identity-check.json").write_text(json.dumps({"drift": drift}, indent=2) + "\n")
    return int(failed or bool(drift))


if __name__ == "__main__":
    raise SystemExit(main())
