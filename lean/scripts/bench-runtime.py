#!/usr/bin/env python3
"""Run a fixed, representative tzap Lean CLI surface and preserve raw evidence."""

import argparse
import hashlib
import json
import os
from pathlib import Path
import platform
import signal
import statistics
import subprocess
import threading
import time


ROOT = Path(__file__).resolve().parents[2]
CASES = {
    "gf16": "feynman/gf2^16_mult.qasm",
    "gf32": "feynman/gf2^32_mult.qasm",
    "gf64": "feynman/gf2^64_mult.qasm",
    "hwb8": "feynman/hwb8.qasm",
    "chebyshev": "cobble-t/chebyshev.qasm",
    "qft20": "qft/qft_q020_d32421.qasm",
}


def sha256(path):
    with Path(path).open("rb") as source:
        return hashlib.file_digest(source, "sha256").hexdigest()


def git(*args):
    return subprocess.check_output(["git", *args], cwd=ROOT, text=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--binary", type=Path, default=ROOT / "lean/.lake/build/bin/tzap-lean")
    parser.add_argument("--out-dir", type=Path, required=True)
    parser.add_argument("--case", choices=CASES, action="append", dest="cases")
    parser.add_argument("--level", choices=["O1", "O2", "O3"], default="O1")
    parser.add_argument("--repeats", type=int, default=3)
    parser.add_argument("--warmups", type=int, default=1)
    parser.add_argument("--timeout", type=float, default=60)
    args = parser.parse_args()
    if args.repeats < 1 or args.warmups < 0 or args.timeout <= 0:
        parser.error("repeats and timeout must be positive; warmups must be nonnegative")
    binary = args.binary.resolve(strict=True)
    selected = list(dict.fromkeys(args.cases or CASES))
    out = args.out_dir.resolve()
    out.mkdir(parents=True, exist_ok=False)
    inputs = {name: ROOT / "benchmarks" / CASES[name] for name in selected}
    artifacts = [binary, Path(__file__).resolve(), ROOT / "lean/lean-toolchain",
                 ROOT / "lean/lakefile.lean", ROOT / "lean/lake-manifest.json", *inputs.values()]
    identities = {str(p): sha256(p) for p in artifacts}
    revision = git("rev-parse", "HEAD").strip()
    patch = git("diff", "HEAD", "--", "lean")
    (out / "source.patch").write_text(patch)
    metadata = {
        "schema": 1, "commit": revision, "git_status": git("status", "--short"),
        "platform": platform.platform(), "artifacts": identities,
        "cpu_affinity": sorted(os.sched_getaffinity(0)) if hasattr(os, "sched_getaffinity") else None,
        "source_patch_sha256": sha256(out / "source.patch"),
        "level": args.level, "cases": selected, "repeats": args.repeats,
        "warmups": args.warmups, "timeout_seconds": args.timeout,
        "boundary": "native CLI startup through checked serialization, output write and exit",
        "randomness": "fresh OS entropy, 128-bit tags; --seed does not fix it",
        "diagnostics": "off (normal CLI result banner remains enabled)",
    }
    (out / "metadata.json").write_text(json.dumps(metadata, indent=2) + "\n")
    rows = []
    with (out / "runs.jsonl").open("w") as ledger:
        for case, source in inputs.items():
            for index in range(args.warmups + args.repeats):
                warmup = index < args.warmups
                label = f"{case}-{index:02d}"
                output = out / f"{label}.qasm"
                command = [str(binary), str(source), f"-{args.level}", "-o", str(output)]
                with (out / f"{label}.stdout").open("wb") as stdout, \
                        (out / f"{label}.stderr").open("wb") as stderr:
                    start = time.perf_counter_ns()
                    process = subprocess.Popen(command, cwd=ROOT, stdout=stdout, stderr=stderr,
                                               start_new_session=True)
                    expired = threading.Event()

                    def kill_group():
                        try:
                            os.killpg(process.pid, signal.SIGKILL)
                        except ProcessLookupError:
                            pass

                    def timeout():
                        if process.poll() is None:
                            expired.set()
                            kill_group()

                    timer = threading.Timer(args.timeout, timeout)
                    timer.start()
                    status = "exit"
                    try:
                        # A blocking wait avoids the up-to-50ms polling delay of wait(timeout=...).
                        process.wait()
                        if expired.is_set():
                            status = "timeout"
                    except KeyboardInterrupt:
                        status = "interrupted"
                        kill_group()
                        process.wait()
                    finally:
                        elapsed = time.perf_counter_ns() - start
                        timer.cancel()
                        timer.join()
                row = {
                    "case": case, "index": index, "warmup": warmup, "argv": command,
                    "status": status, "exit_code": process.returncode, "elapsed_ns": elapsed,
                    "stdout": f"{label}.stdout", "stderr": f"{label}.stderr",
                    "output_sha256": sha256(output) if output.exists() else None,
                }
                if status == "exit" and process.returncode == 0 and not output.exists():
                    row["status"] = "missing-output"
                rows.append(row)
                ledger.write(json.dumps(row) + "\n")
                ledger.flush()
                print(f"{label}: {elapsed / 1e9:.3f}s {row['status']} "
                      f"exit={process.returncode}{' (warmup)' if warmup else ''}", flush=True)
                if status == "interrupted":
                    return 130
                if row["status"] != "exit" or process.returncode != 0:
                    break  # Keep a failed case visible without repeating its timeout.
    drift = [path for path, digest in identities.items() if sha256(path) != digest]
    if git("rev-parse", "HEAD").strip() != revision or git("diff", "HEAD", "--", "lean") != patch:
        drift.append("source revision or tracked diff")
    summary = {"identity_drift": drift, "cases": {}}
    failed = bool(drift)
    for case in selected:
        samples = [r for r in rows if r["case"] == case and not r["warmup"]
                   and r["status"] == "exit" and r["exit_code"] == 0]
        errors = [r for r in rows if r["case"] == case
                  and (r["status"] != "exit" or r["exit_code"] != 0)]
        times = [r["elapsed_ns"] / 1e9 for r in samples]
        summary["cases"][case] = {
            "successful_samples": len(times), "failures": len(errors),
            "median_seconds": statistics.median(times) if times else None,
            "seconds": times, "output_hashes": sorted({r["output_sha256"] for r in samples}),
        }
        failed |= bool(errors) or len(times) != args.repeats
    (out / "summary.json").write_text(json.dumps(summary, indent=2) + "\n")
    return 1 if failed else 0


if __name__ == "__main__":
    raise SystemExit(main())
