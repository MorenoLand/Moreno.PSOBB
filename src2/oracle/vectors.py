"""Generate golden vectors by running the original machine code in Unicorn."""

import json
import random
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ESP

ROOT = Path(__file__).resolve().parents[2]
IMAGE = ROOT / "src" / "image.bin"
FIXTURES = ROOT / "src2" / "PsoBB.Tests" / "Golden"


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


def run(read, address, size, value):
    """Run one function with a single 16-bit argument and return eax."""
    code = read(address, size)
    page = address & ~0xFFF
    machine = Uc(UC_ARCH_X86, UC_MODE_32)
    machine.mem_map(page, 0x1000)
    machine.mem_write(address, code)
    stack = 0x30000000
    machine.mem_map(stack - 0x1000, 0x2000)
    esp = stack - 0x10
    machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
    machine.mem_write(esp + 4, struct.pack("<H", value))
    machine.reg_write(UC_X86_REG_ESP, esp)
    machine.emu_start(address, address + size - 1)
    return machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF


def main():
    """Write the fixture for the first ported predicate."""
    read = image_reader()
    values = [0x0000, 0x0001, 0x0002, 0x0FFE, 0x0FFF, 0x1000, 0x1001, 0x1FFF, 0x7FFF, 0x8000, 0xFFFE, 0xFFFF]
    generator = random.Random(0x51F8D8)
    values += [generator.randrange(0x10000) for _ in range(52)]
    vectors = [{"value": value, "result": run(read, 0x0051F8D8, 15, value)} for value in values]
    FIXTURES.mkdir(parents=True, exist_ok=True)
    target = FIXTURES / "0051F8D8.json"
    target.write_text(json.dumps(vectors, indent="\t") + "\n", encoding="utf-8")
    print(f"wrote {target} ({len(vectors)} vectors)")


if __name__ == "__main__":
    main()
