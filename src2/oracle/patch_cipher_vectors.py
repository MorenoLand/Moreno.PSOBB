"""Generate golden vectors for the PC patch cipher by running the original machine code."""

import json
import os
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_EDX, UC_X86_REG_ESP

ROOT = Path(__file__).resolve().parents[2]
IMAGE = Path(os.environ.get("PSOBB_IMAGE", ROOT / "src" / "image.bin"))
FIXTURES = ROOT / "src2" / "PsoBB.Tests" / "Golden"
STACK = 0x30000000
CONTEXT = 0x30030000
BUFFER = 0x30040000
CONTEXT_LENGTH = 0xE8
INIT = 0x0084C390
XOR = 0x00763054
PERCENT = 0x0070BB1C
SEEDS = [
    ("zero", 0x00000000),
    ("one", 0x00000001),
    ("sentinel", 0xFFFFFFFF),
    ("pattern", 0x12345678),
    ("high bit", 0x80000000),
]
LENGTHS = [3, 4, 5, 7, 8, 0x10, 0x70, 0x100]


def image_pieces():
    """Return the generated data image and its (address, length, offset) entries."""
    data = IMAGE.read_bytes()
    count = struct.unpack_from("<I", data)[0]
    return data, [struct.unpack_from("<III", data, 4 + 12 * index) for index in range(count)]


class Machine:
    """Runs the original cipher routines with the data image mapped."""

    def __init__(self):
        data, pieces = image_pieces()
        self.machine = Uc(UC_ARCH_X86, UC_MODE_32)
        self.machine.mem_map(0x00400000, 0x00762000)
        for address, length, offset in pieces:
            self.machine.mem_write(address, data[offset:offset + length])
        self.machine.mem_map(STACK - 0x2000, 0x2000)
        self.machine.mem_map(CONTEXT, 0x1000)
        self.machine.mem_map(BUFFER, 0x2000)

    def call(self, address, ecx, arguments):
        """Call a thiscall routine and return its result register."""
        esp = STACK - 0x40
        self.machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
        for index, argument in enumerate(arguments):
            self.machine.mem_write(esp + 4 + 4 * index, struct.pack("<I", argument & 0xFFFFFFFF))
        self.machine.reg_write(UC_X86_REG_ECX, ecx)
        self.machine.reg_write(UC_X86_REG_ESP, esp)
        self.machine.emu_start(address, 0xFFFFFFFF, count=100000000)
        return self.machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF

    def initialize(self, seed):
        """Run the original key schedule and return the complete context."""
        self.machine.mem_write(CONTEXT, b"\xcc" * CONTEXT_LENGTH)
        self.call(INIT, CONTEXT, [seed])
        return bytes(self.machine.mem_read(CONTEXT, CONTEXT_LENGTH))

    def xor(self, context, data):
        """Run the original decrypt/encrypt routine over a buffer."""
        self.machine.mem_write(CONTEXT, context)
        self.machine.mem_write(BUFFER, data)
        self.call(XOR, CONTEXT, [BUFFER, len(data)])
        return bytes(self.machine.mem_read(BUFFER, len(data)))

    def percent(self, value, total):
        """Run the original percentage routine with its two register inputs."""
        esp = STACK - 0x40
        self.machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
        self.machine.reg_write(UC_X86_REG_ESP, esp)
        self.machine.reg_write(UC_X86_REG_EAX, value & 0xFFFFFFFF)
        self.machine.reg_write(UC_X86_REG_EDX, total & 0xFFFFFFFF)
        self.machine.emu_start(PERCENT, 0xFFFFFFFF, count=1000000)
        return self.machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF


def write(name, vectors):
    """Write one fixture file."""
    FIXTURES.mkdir(parents=True, exist_ok=True)
    target = FIXTURES / name
    target.write_text(json.dumps(vectors, indent="\t") + "\n", encoding="utf-8")
    print(f"wrote {target} ({len(vectors)} vectors)")


def main():
    """Generate the schedule and stream fixtures."""
    machine = Machine()
    schedule = []
    stream = []
    for name, seed in SEEDS:
        context = machine.initialize(seed)
        schedule.append({"name": name, "seed": seed, "context": context.hex()})
        for length in LENGTHS:
            plaintext = bytes((index * 13 + 7) & 0xFF for index in range(length))
            ciphertext = machine.xor(context, plaintext)
            stream.append({
                "name": f"{name} {length} bytes",
                "seed": seed,
                "length": length,
                "input": plaintext.hex(),
                "output": ciphertext.hex(),
            })
        chunks = [bytes((index * 3 + 1) & 0xFF for index in range(4)),
                  bytes((index * 5 + 2) & 0xFF for index in range(0x6C))]
        context = machine.initialize(seed)
        machine.machine.mem_write(CONTEXT, context)
        outputs = []
        for chunk in chunks:
            machine.machine.mem_write(BUFFER, chunk)
            machine.call(XOR, CONTEXT, [BUFFER, len(chunk)])
            outputs.append(bytes(machine.machine.mem_read(BUFFER, len(chunk))).hex())
        stream.append({"name": f"{name} split stream", "seed": seed, "chunks": [c.hex() for c in chunks], "outputs": outputs})
    write("0084C390.json", schedule)
    write("00763054.json", stream)
    percent = []
    for value, total in [(1, 3), (2, 3), (0, 3), (1, 200), (3, 200), (1, 8), (5, 7),
                         (100, 1000), (1, 1000), (1, 2), (1, 4), (1, 6), (7, 9), (99, 100)]:
        percent.append({"value": value, "total": total, "result": machine.percent(value, total)})
    write("0070BB1C.json", percent)


if __name__ == "__main__":
    main()
