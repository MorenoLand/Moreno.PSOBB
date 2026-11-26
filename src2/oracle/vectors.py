"""Generate golden vectors by running the original machine code in Unicorn."""

import json
import random
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc, UcError
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX
from unicorn.x86_const import UC_X86_REG_EBP, UC_X86_REG_EDI, UC_X86_REG_EIP, UC_X86_REG_ESI, UC_X86_REG_ESP

ROOT = Path(__file__).resolve().parents[2]
IMAGE = ROOT / "src" / "image.bin"
FIXTURES = ROOT / "src2" / "PsoBB.Tests" / "Golden"
STACK = 0x30000000


def image_reader():
    """Return a reader for virtual addresses backed by the generated data image."""
    data = IMAGE.read_bytes()
    count = struct.unpack_from("<I", data)[0]
    pieces = [struct.unpack_from("<III", data, 4 + 12 * index) for index in range(count)]

    def read(address, size):
        for base, length, offset in pieces:
            if base <= address and address + size <= base + length:
                start = offset + address - base
                return data[start : start + size]
        raise ValueError(f"address {address:08x} is not in the data image")

    return read


def run(read, address, size, stack=(), registers=None, memory=(), capture=()):
    """Run one function with stack and memory inputs and return eax, edx and captured memory."""
    machine = Uc(UC_ARCH_X86, UC_MODE_32)
    mapped = set()

    def map_page(target):
        base = target & ~0xFFF
        if base not in mapped:
            machine.mem_map(base, 0x1000)
            mapped.add(base)

    map_page(address)
    try:
        machine.mem_write(address & ~0xFFF, read(address & ~0xFFF, 0x1000))
    except ValueError:
        machine.mem_write(address, read(address, size))
    map_page(STACK - 0x40)
    esp = STACK - 0x40
    machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
    for index, value in enumerate(stack):
        machine.mem_write(esp + 4 + 4 * index, struct.pack("<I", value & 0xFFFFFFFF))
    for target, data in memory:
        for offset in range(0, len(data), 0x1000):
            map_page(target + offset)
        machine.mem_write(target, data)
    for name, register in (("eax", UC_X86_REG_EAX), ("ebx", UC_X86_REG_EBX), ("ecx", UC_X86_REG_ECX),
                           ("edx", UC_X86_REG_EDX), ("ebp", UC_X86_REG_EBP), ("esi", UC_X86_REG_ESI), ("edi", UC_X86_REG_EDI)):
        machine.reg_write(register, (registers or {}).get(name, 0))
    machine.reg_write(UC_X86_REG_ESP, esp)
    try:
        machine.emu_start(address, 0xFFFFFFFF, count=1000000)
    except UcError:
        if machine.reg_read(UC_X86_REG_EIP) != 0xFFFFFFFF:
            raise
    captured = {}
    for target, length in capture:
        captured[target] = machine.mem_read(target, length)
    eax = machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF
    edx = machine.reg_read(UC_X86_REG_EDX) & 0xFFFFFFFF
    return eax, edx, captured


def write(name, vectors):
    """Write one compressed-friendly JSON fixture."""
    FIXTURES.mkdir(parents=True, exist_ok=True)
    target = FIXTURES / name
    target.write_text(json.dumps(vectors, indent="\t") + "\n", encoding="utf-8")
    print(f"wrote {target} ({len(vectors)} vectors)")


def below_page_vectors(read):
    """0x0051F8D8: value < 0x1000."""
    values = [0x0000, 0x0001, 0x0002, 0x0FFE, 0x0FFF, 0x1000, 0x1001, 0x1FFF, 0x7FFF, 0x8000, 0xFFFE, 0xFFFF]
    generator = random.Random(0x51F8D8)
    values += [generator.randrange(0x10000) for _ in range(52)]
    vectors = []
    for value in values:
        eax, _, _ = run(read, 0x0051F8D8, 15, [value])
        vectors.append({"value": value, "result": eax})
    write("0051F8D8.json", vectors)


def multiply_add_vectors(read):
    """0x007A9608: addend + factor * signed16 multiplier."""
    generator = random.Random(0x7A9608)
    vectors = []
    cases = [(0, 0, 0), (1, 1, 1), (-1, 1, 1), (0, -1, 1), (7, 3, -2), (0x7FFFFFFF, 1, 1), (-0x80000000, 1, -1)]
    cases += [(generator.randrange(-0x80000000, 0x80000000), generator.randrange(-0x80000000, 0x80000000),
               generator.randrange(-0x8000, 0x8000)) for _ in range(40)]
    for addend, factor, multiplier in cases:
        eax, _, _ = run(read, 0x007A9608, 15, [addend, factor, multiplier])
        vectors.append({"addend": addend, "factor": factor, "multiplier": multiplier, "result": eax})
    write("007A9608.json", vectors)


def divide_vectors(read):
    """0x008A8CE1: (total + divisor - 1) / divisor with 32-bit wrap and truncation toward zero."""
    generator = random.Random(0x8A8CE1)
    pairs = [(1, 1), (2, 2), (3, 2), (4, 3), (-1, 2), (1, -2), (0x7FFFFFFF, 2), (-0x80000000, 3)]
    pairs += [(generator.randrange(-0x80000000, 0x80000000), generator.choice([-1, 1, 2, 3, 4, 8, 16, 0x1000]))
              for _ in range(48)]
    vectors = []
    for total, divisor in pairs:
        try:
            eax, edx, _ = run(read, 0x008A8CE1, 16, [total, divisor])
        except Exception:
            continue
        vectors.append({"total": total, "divisor": divisor, "quotient": eax, "remainder": edx})
    write("008A8CE1.json", vectors)


def clear_pair_vectors(read):
    """0x0082E930: writes zero through two 32-bit pointers."""
    target = 0x30001000
    vectors = []
    for first, second in ((0xDEADBEEF, 0x12345678), (0, 1), (0xFFFFFFFF, 0x80000000)):
        _, _, captured = run(
            read,
            0x0082E930,
            15,
            stack=[target, target + 4],
            memory=[(target, struct.pack("<II", first, second))],
            capture=[(target, 8)],
        )
        after = struct.unpack("<II", captured[target])
        vectors.append({"first": first, "second": second, "first_after": after[0], "second_after": after[1]})
    write("0082E930.json", vectors)


def set_low_bit_vectors(read):
    """0x005CEA60: sets the low bit of the word eight bytes into the pointed object."""
    target = 0x30002000
    vectors = []
    for initial in (0x0000, 0x0001, 0x0002, 0x8000, 0xFFFE, 0xFFFF):
        _, _, captured = run(
            read,
            0x005CEA60,
            18,
            stack=[target],
            memory=[(target, b"\0" * 8 + struct.pack("<H", initial))],
            capture=[(target + 8, 2)],
        )
        after = struct.unpack("<H", captured[target + 8])[0]
        vectors.append({"initial": initial, "result": after})
    write("005CEA60.json", vectors)


def validate_index_vectors(read):
    """0x0068C45C: returns the signed byte when it is 0..11, otherwise zero."""
    vectors = []
    for value in (-128, -1, 0, 1, 11, 12, 127):
        eax, _, _ = run(read, 0x0068C45C, 18, [value & 0xFFFFFFFF])
        vectors.append({"value": value, "result": eax})
    write("0068C45C.json", vectors)


def prs_vectors(read):
    """0x00788154: decompresses synthetic streams and records the complete output buffer."""
    source_address = 0x30010000
    destination_address = 0x30020000
    cases = [
        ("empty", bytes.fromhex("020000"), b""),
        ("literals", bytes.fromhex("5f") + b"Hello" + bytes.fromhex("0000"), b"Hello"),
        ("eight literals", bytes.fromhex("ff") + b"PsoBBPRS" + bytes.fromhex("020000"), b"PsoBBPRS"),
        ("long reference", bytes.fromhex("af") + b"ABCD" + bytes.fromhex("e2ff0000"), b"ABCDABCD"),
        ("compact run", bytes.fromhex("59") + b"A" + bytes.fromhex("ff0000"), b"AAAAAA"),
        ("extended length", bytes.fromhex("15") + b"Z" + bytes.fromhex("f8ff09") + bytes.fromhex("0000"), b"Z" * 11),
        ("long copy", bytes.fromhex("af") + b"ABCD" + bytes.fromhex("e0ff0b0000"), b"ABCD" * 4),
        ("wide copy", bytes.fromhex("ff") + b"ABCDEFGH" + bytes.fromhex("0a") + bytes.fromhex("c0ff0b0000"),
         b"ABCDEFGHABCDEFGHABCD"),
        (
            "compact distance 256",
            b"".join(bytes([0xFF]) + bytes(range(index, index + 8)) for index in range(0, 256, 8)) + bytes.fromhex("20000000"),
            bytes(range(256)) + b"\x00\x01",
        ),
    ]
    vectors = []
    for name, source, expected in cases:
        destination_size = max(len(expected) + 16, 32)
        written, _, captured = run(
            read,
            0x00788154,
            358,
            stack=[source_address, destination_address],
            memory=[(source_address, source), (destination_address, b"\xcc" * destination_size)],
            capture=[(destination_address, destination_size)],
        )
        destination = captured[destination_address]
        if written != len(expected):
            raise ValueError(f"{name}: original wrote {written} bytes, expected {len(expected)}")
        if destination[:written] != expected:
            raise ValueError(f"{name}: original produced {destination[:written].hex()}, expected {expected.hex()}")
        if destination[written:] != b"\xcc" * (destination_size - written):
            raise ValueError(f"{name}: original wrote past the reported output length")
        vectors.append(
            {
                "name": name,
                "source": source.hex(),
                "destination_size": destination_size,
                "written": written,
                "output": destination[:written].hex(),
            }
        )
    write("00788154.json", vectors)


def clear_second_bit_vectors(read):
    """0x005DD34C: clears bit 1 of the 32-bit field at offset 0x64 of the pointed object."""
    target = 0x30004000
    vectors = []
    for initial in (0, 1, 2, 3, 0xFFFFFFFF):
        _, _, captured = run(
            read,
            0x005DD34C,
            18,
            stack=[target],
            memory=[(target, bytes(0x64) + struct.pack("<I", initial))],
            capture=[(target + 0x64, 4)],
        )
        after = struct.unpack("<I", captured[target + 0x64])[0]
        vectors.append({"initial": initial, "result": after})
    write("005DD34C.json", vectors)


def main():
    """Write every fixture used by the tests."""
    read = image_reader()
    below_page_vectors(read)
    multiply_add_vectors(read)
    divide_vectors(read)
    clear_pair_vectors(read)
    set_low_bit_vectors(read)
    validate_index_vectors(read)
    clear_second_bit_vectors(read)
    prs_vectors(read)


if __name__ == "__main__":
    main()
