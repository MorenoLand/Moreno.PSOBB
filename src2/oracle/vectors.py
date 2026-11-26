"""Generate golden vectors by running the original machine code in Unicorn."""

import json
import random
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX
from unicorn.x86_const import UC_X86_REG_EBP, UC_X86_REG_EDI, UC_X86_REG_ESI, UC_X86_REG_ESP

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


def run(read, address, size, stack=(), registers=None):
    """Run one function with stack arguments and return eax and edx."""
    code = read(address, size)
    machine = Uc(UC_ARCH_X86, UC_MODE_32)
    machine.mem_map(address & ~0xFFF, 0x1000)
    machine.mem_write(address, code)
    machine.mem_map(STACK - 0x1000, 0x2000)
    esp = STACK - 0x40
    machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
    for index, value in enumerate(stack):
        machine.mem_write(esp + 4 + 4 * index, struct.pack("<I", value & 0xFFFFFFFF))
    for name, register in (("eax", UC_X86_REG_EAX), ("ebx", UC_X86_REG_EBX), ("ecx", UC_X86_REG_ECX),
                           ("edx", UC_X86_REG_EDX), ("ebp", UC_X86_REG_EBP), ("esi", UC_X86_REG_ESI), ("edi", UC_X86_REG_EDI)):
        machine.reg_write(register, (registers or {}).get(name, 0))
    machine.reg_write(UC_X86_REG_ESP, esp)
    machine.emu_start(address, address + size - 1)
    return machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF, machine.reg_read(UC_X86_REG_EDX) & 0xFFFFFFFF


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
        eax, _ = run(read, 0x0051F8D8, 15, [value])
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
        eax, _ = run(read, 0x007A9608, 15, [addend, factor, multiplier])
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
            eax, edx = run(read, 0x008A8CE1, 16, [total, divisor])
        except Exception:
            continue
        vectors.append({"total": total, "divisor": divisor, "quotient": eax, "remainder": edx})
    write("008A8CE1.json", vectors)


def main():
    """Write every fixture used by the tests."""
    read = image_reader()
    below_page_vectors(read)
    multiply_add_vectors(read)
    divide_vectors(read)


if __name__ == "__main__":
    main()
