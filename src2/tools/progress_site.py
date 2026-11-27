"""Write the PSOBB progress website into a folder: index.html, data.js and data.json, history.js and history.json.

usage: python src2/tools/progress_site.py --site <folder>

The page reads data.json and history.json every few seconds, so a served folder follows the tracker as it changes.
The numbers come from the same sources as coverage.py: recomp/data/functions.tsv, the attributes in src2/PsoBB and
src2/absorbed.tsv, and the golden fixtures in src2/PsoBB.Tests/Golden.
"""

import argparse
import datetime
import json
import re
import shutil
import sys
from pathlib import Path

import coverage as cv

ROOT = Path(__file__).resolve().parents[2]
FUNCTIONS = ROOT / "recomp" / "data" / "functions.tsv"
SOURCE = ROOT / "src"
MISC = SOURCE / "misc"
GOLDEN = ROOT / "src2" / "PsoBB.Tests" / "Golden"
TEMPLATE = Path(__file__).resolve().parent / "site"
EXCLUDED = {"WinMain_16_1.c", "WinMain_16_2.c", "cfltcvt.c", "nullsub.c", "unknown.c"}
FN_ENTER = re.compile(r"FN_ENTER\(0x([0-9A-Fa-f]{6,8})\)")
SMALL = 64
EASY_LIMIT = 200
LARGEST_LIMIT = 30


def read_table():
    """Return address to the functions.tsv row: name, category, size, caller and callee counts."""
    rows = {}
    for line in FUNCTIONS.read_text(encoding="utf-8").splitlines():
        parts = line.split("\t")
        if len(parts) < 4:
            continue
        try:
            address = int(parts[0], 16)
            size = int(parts[2])
        except ValueError:
            continue
        callees = [c for c in (parts[5] if len(parts) > 5 else "").split(",") if c]
        rows[address] = {
            "name": parts[1],
            "size": size,
            "category": parts[3],
            "callers": int(parts[4]) if len(parts) > 4 and parts[4].isdigit() else 0,
            "callees": len(callees),
        }
    return rows


def read_homes():
    """Return address to the lifted source file that defines it, and the file names of src/misc."""
    homes = {}
    misc_files = set()
    for path in SOURCE.rglob("*.c"):
        text = path.read_text(encoding="utf-8", errors="replace")
        for match in FN_ENTER.finditer(text):
            homes.setdefault(int(match.group(1), 16), path.name)
        if path.parent == MISC:
            misc_files.add(path.name)
    return homes, misc_files


def group_of(row, home):
    """Name the part of the program a function belongs to, for the area table."""
    if home in EXCLUDED:
        return "Excluded by goal"
    if home.startswith("mangled_"):
        return "D3DX and libjpeg"
    if row["category"] == "lib:crt":
        return "C runtime label"
    return "Game code"


def in_scope_addresses(rows, homes, misc_files):
    """Functions of src/misc that the goal covers: every file there except the five excluded ones."""
    scope = set()
    for address in rows:
        home = homes.get(address, "")
        if home in misc_files and home not in EXCLUDED:
            scope.add(address)
    return scope


def build(rows, ported, absorbed, homes, misc_files):
    """Compute the totals, the groups, the largest and the easiest missing game functions."""
    kinds = {"ported": [0, 0], "absorbed": [0, 0], "missing": [0, 0]}
    groups = {}
    for address, row in rows.items():
        home = homes.get(address, "-")
        name = group_of(row, home)
        if address in ported:
            state = "ported"
        elif address in absorbed:
            state = "absorbed"
        else:
            state = "missing"
        kinds[state][0] += 1
        kinds[state][1] += row["size"]
        group = groups.setdefault(name, {"functions": 0, "bytes": 0, "ported": [0, 0], "absorbed": [0, 0], "missing": [0, 0]})
        group["functions"] += 1
        group["bytes"] += row["size"]
        group[state][0] += 1
        group[state][1] += row["size"]

    total_bytes = sum(row["size"] for row in rows.values())
    scope = in_scope_addresses(rows, homes, misc_files)
    scope_open = [a for a in scope if a not in ported and a not in absorbed]

    game_missing = [(a, row) for a, row in rows.items()
                    if a not in ported and a not in absorbed and group_of(row, homes.get(a, "-")) == "Game code"]
    largest = sorted(game_missing, key=lambda item: -item[1]["size"])[:LARGEST_LIMIT]
    easy = sorted((item for item in game_missing if item[1]["size"] <= SMALL), key=lambda item: -item[1]["callers"])[:EASY_LIMIT]
    done_bytes = kinds["ported"][1] + kinds["absorbed"][1]
    return {
        "generated": datetime.datetime.now().strftime("%Y-%m-%d %H:%M"),
        "total": {"functions": len(rows), "bytes": total_bytes},
        "done": {"bytes": done_bytes, "share": round(100.0 * done_bytes / total_bytes, 3) if total_bytes else 0.0},
        "kinds": {k: {"functions": v[0], "bytes": v[1]} for k, v in kinds.items()},
        "scope": {"functions": len(scope), "open": len(scope_open)},
        "golden": len(list(GOLDEN.glob("*.json"))) if GOLDEN.exists() else 0,
        "groups": [{"name": name, "functions": g["functions"], "bytes": g["bytes"],
                    "ported": {"functions": g["ported"][0], "bytes": g["ported"][1]},
                    "absorbed": {"functions": g["absorbed"][0], "bytes": g["absorbed"][1]},
                    "missing": {"functions": g["missing"][0], "bytes": g["missing"][1]}}
                   for name, g in sorted(groups.items(), key=lambda kv: -kv[1]["bytes"])],
        "largest": [{"address": "%08X" % a, "name": row["name"], "bytes": row["size"], "callers": row["callers"]} for a, row in largest],
        "easy": [{"address": "%08X" % a, "name": row["name"], "bytes": row["size"], "callers": row["callers"], "callees": row["callees"]} for a, row in easy],
    }


def history_point(data):
    return {
        "t": data["generated"],
        "done": data["done"]["share"],
        "ported_bytes": data["kinds"]["ported"]["bytes"],
        "absorbed_bytes": data["kinds"]["absorbed"]["bytes"],
        "missing_bytes": data["kinds"]["missing"]["bytes"],
        "ported_functions": data["kinds"]["ported"]["functions"],
        "absorbed_functions": data["kinds"]["absorbed"]["functions"],
        "scope_open": data["scope"]["open"],
    }


def read_history(target):
    path = target / "history.json"
    if not path.exists():
        return []
    try:
        return json.loads(path.read_text(encoding="utf-8"))
    except ValueError:
        return []


def write(target, data, history):
    target.mkdir(parents=True, exist_ok=True)
    for asset in TEMPLATE.iterdir():
        shutil.copyfile(asset, target / asset.name)
    (target / "data.js").write_text("window.PROGRESS = " + json.dumps(data) + ";\n", encoding="utf-8")
    (target / "data.json").write_text(json.dumps(data), encoding="utf-8")
    (target / "history.js").write_text("window.HISTORY = " + json.dumps(history) + ";\n", encoding="utf-8")
    (target / "history.json").write_text(json.dumps(history), encoding="utf-8")


def main(argv=None):
    parser = argparse.ArgumentParser(description="Write the PSOBB progress website into a folder.")
    parser.add_argument("--site", required=True, type=Path, help="folder that receives index.html and the data files")
    args = parser.parse_args(argv)

    rows = read_table()
    ported, _ = cv.read_ported()
    absorbed = cv.read_absorbed()
    homes, misc_files = read_homes()
    data = build(rows, ported, absorbed, homes, misc_files)

    target = args.site
    history = read_history(target)
    point = history_point(data)
    previous = history[-1] if history else None
    if previous is None or any(previous.get(k) != point[k] for k in point if k != "t"):
        history.append(point)
    write(target, data, history)
    print("website written to " + str(target))
    return 0


if __name__ == "__main__":
    sys.exit(main())
