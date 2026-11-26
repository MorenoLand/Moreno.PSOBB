"""Report byte-weighted coverage of the C# port against the original function table."""

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
FUNCTIONS = ROOT / "recomp" / "data" / "functions.tsv"
SOURCE = ROOT / "src2" / "PsoBB"
ABSORBED = ROOT / "src2" / "absorbed.tsv"
ORIGINAL = re.compile(r"\[Original\(0x([0-9A-Fa-f]+)\)\]")


def read_functions():
    """Return address to (name, byte size) for every original function."""
    functions = {}
    for line in FUNCTIONS.read_text(encoding="utf-8").splitlines():
        parts = line.split("\t")
        if len(parts) < 3:
            continue
        try:
            functions[int(parts[0], 16)] = (parts[1], int(parts[2]))
        except ValueError:
            continue
    return functions


def read_ported():
    """Return address to file for every member carrying an original address."""
    homes = {}
    duplicates = []
    for path in SOURCE.rglob("*.cs"):
        for match in ORIGINAL.finditer(path.read_text(encoding="utf-8")):
            address = int(match.group(1), 16)
            if address in homes:
                duplicates.append((address, homes[address], path))
            homes[address] = path
    return homes, duplicates


def read_absorbed():
    """Return address to reason for every function replaced by the runtime."""
    absorbed = {}
    if not ABSORBED.exists():
        return absorbed
    for line in ABSORBED.read_text(encoding="utf-8").splitlines():
        if not line.strip() or line.startswith("#"):
            continue
        parts = line.split("\t", 1)
        if len(parts) != 2:
            continue
        address = int(parts[0], 16)
        absorbed[address] = parts[1]
    return absorbed


def main():
    """Print the byte-weighted progress and fail on duplicate homes."""
    functions = read_functions()
    ported, duplicates = read_ported()
    absorbed = read_absorbed()
    total = sum(size for _, size in functions.values())
    ported_bytes = sum(functions[a][1] for a in ported if a in functions)
    absorbed_bytes = sum(functions[a][1] for a in absorbed if a in functions)
    missing = [a for a in functions if a not in ported and a not in absorbed]
    missing_bytes = total - ported_bytes - absorbed_bytes
    print(f"ported   {len(ported):6d} functions {ported_bytes:8d} bytes")
    print(f"absorbed {len(absorbed):6d} functions {absorbed_bytes:8d} bytes")
    print(f"missing  {len(missing):6d} functions {missing_bytes:8d} bytes")
    print(f"coverage {100.0 * (ported_bytes + absorbed_bytes) / total if total else 0:.3f}% of {total} bytes")
    for address in sorted(missing)[:10]:
        name, size = functions[address]
        print(f"  missing 0x{address:08X} {name} ({size} bytes)")
    if duplicates:
        for address, first, second in duplicates:
            print(f"duplicate 0x{address:08X}: {first} and {second}", file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
