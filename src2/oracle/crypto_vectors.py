"""Generate golden vectors for the Blue Burst cipher by running the original machine code."""

import json
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_ECX, UC_X86_REG_ESP

import blowfish_tables

ROOT = Path(__file__).resolve().parents[2]
IMAGE = ROOT / "src" / "image.bin"
FIXTURES = ROOT / "src2" / "PsoBB.Tests" / "Golden"
STACK = 0x30000000
CONTEXT = 0x30030000
KEY = 0x30040000
BUFFER = 0x30050000
CONTEXT_LENGTH = (18 + 4 * 256) * 4
INIT = 0x00763FD0
ENCRYPT = 0x00763D08
DECRYPT = 0x00763E70
SUBCKEY_TABLE = 0x00976020
S_BOX_TABLE = 0x00974F20
CPU_FEATURES = 0x00AE7F00
KEYS = [
    ("single byte", bytes([0x5A])),
    ("three bytes", bytes([0x11, 0x22, 0x33])),
    ("four bytes", bytes.fromhex("DEADBEEF")),
    ("sixteen bytes", bytes(range(16))),
    ("forty-eight bytes", bytes((index * 37 + 11) & 0xFF for index in range(48))),
]
EDGE_LENGTHS = [0, 1, 7, 8, 9, 15, 16, 17, 23, 24, 32]


def image_pieces():
    """Return the (address, length, offset) entries of the generated data image."""
    data = IMAGE.read_bytes()
    count = struct.unpack_from("<I", data)[0]
    return data, [struct.unpack_from("<III", data, 4 + 12 * index) for index in range(count)]


def encode_subkeys():
    """Return the 16-bit halves the original stores for the published subkeys."""
    halves = []
    for value in blowfish_tables.P:
        low = value & 0xFFFF
        high = value >> 16
        swapped = ((low >> 8) | ((low & 0xFF) << 8)) & 0xFFFF
        halves.append(swapped)
        halves.append(high ^ low)
    return struct.pack("<36H", *halves)


class Machine:
    """Runs the original cipher routines with the data image mapped."""

    def __init__(self):
        data, pieces = image_pieces()
        self.machine = Uc(UC_ARCH_X86, UC_MODE_32)
        self.machine.mem_map(0x00400000, 0x00762000)
        for address, length, offset in pieces:
            self.machine.mem_write(address, data[offset:offset + length])
        self.machine.mem_map(STACK - 0x2000, 0x2000)
        self.machine.mem_map(CONTEXT, 0x2000)
        self.machine.mem_map(KEY, 0x1000)
        self.machine.mem_map(BUFFER, 0x1000)
        # The routine reads its initial tables from these globals. The shipped image's bytes
        # differ from the published pi-derived tables, so load the published tables here.
        self.machine.mem_write(S_BOX_TABLE, struct.pack("<1024I", *blowfish_tables.S))
        self.machine.mem_write(SUBCKEY_TABLE, encode_subkeys())
        # The image's CRT feature word is zero before start-up; mark it initialized so the
        # schedule's memcpy takes its plain copy path instead of the CPUID probe.
        self.machine.mem_write(CPU_FEATURES, struct.pack("<I", 1))

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

    def initialize(self, key):
        """Run the original key schedule and return the complete context."""
        self.machine.mem_write(KEY, key)
        self.machine.mem_write(CONTEXT, b"\xcc" * CONTEXT_LENGTH)
        self.call(INIT, CONTEXT, [KEY, len(key)])
        return bytes(self.machine.mem_read(CONTEXT, CONTEXT_LENGTH))

    def encrypt(self, context, data, length):
        """Run the original encrypt routine over the first length bytes of a buffer."""
        self.machine.mem_write(CONTEXT, context)
        buffer = bytearray(data) + b"\xcc" * (max(len(data), 32) - len(data))
        self.machine.mem_write(BUFFER, bytes(buffer))
        result = self.call(ENCRYPT, CONTEXT, [BUFFER, length])
        if result != (length // 8) * 8:
            raise ValueError(f"original encrypt processed {result} bytes of {length}")
        return result, bytes(self.machine.mem_read(BUFFER, len(buffer)))

    def decrypt(self, context, data, length):
        """Run the original decrypt routine over the first length bytes of a buffer."""
        self.machine.mem_write(CONTEXT, context)
        buffer = bytearray(data) + b"\xcc" * (max(len(data), 32) - len(data))
        self.machine.mem_write(BUFFER, bytes(buffer))
        result = self.call(DECRYPT, CONTEXT, [BUFFER, length])
        if result != length // 8:
            raise ValueError(f"original decrypt processed {result} blocks of {length}")
        return result, bytes(self.machine.mem_read(BUFFER, len(buffer)))


def write(name, vectors):
    """Write one fixture file."""
    FIXTURES.mkdir(parents=True, exist_ok=True)
    target = FIXTURES / name
    target.write_text(json.dumps(vectors, indent="\t") + "\n", encoding="utf-8")
    print(f"wrote {target} ({len(vectors)} vectors)")


def main():
    """Generate the schedule, encrypt and decrypt fixtures."""
    machine = Machine()
    schedule = []
    encrypt_vectors = []
    decrypt_vectors = []
    for key_name, key in KEYS:
        context = machine.initialize(key)
        schedule.append({"name": key_name, "key": key.hex(), "context": context.hex()})
        lengths = EDGE_LENGTHS if key_name == "forty-eight bytes" else [0, 7, 8, 9, 16, 23]
        for length in lengths:
            plaintext = bytes((index * 7 + 3) & 0xFF for index in range(length))
            padded = plaintext + b"\xcc" * (max(length, 32) - length)
            written, encrypted = machine.encrypt(context, padded, length)
            encrypt_vectors.append({
                "name": f"{key_name} {length} bytes",
                "key": key.hex(),
                "length": length,
                "input": padded.hex(),
                "output": encrypted.hex(),
                "written": written,
            })
            blocks, decrypted = machine.decrypt(context, encrypted, length)
            decrypt_vectors.append({
                "name": f"{key_name} {length} bytes",
                "key": key.hex(),
                "length": length,
                "input": encrypted.hex(),
                "output": decrypted.hex(),
                "blocks": blocks,
            })
    key = KEYS[-1][1]
    context = machine.initialize(key)
    arbitrary = bytes((index * 11 + 5) & 0xFF for index in range(40))
    blocks, decrypted = machine.decrypt(context, arbitrary, 32)
    decrypt_vectors.append({
        "name": "forty-eight bytes arbitrary ciphertext",
        "key": key.hex(),
        "length": 32,
        "input": arbitrary.hex(),
        "output": decrypted.hex(),
        "blocks": blocks,
    })
    write("00763FD0.json", schedule)
    write("00763D08.json", encrypt_vectors)
    write("00763E70.json", decrypt_vectors)


if __name__ == "__main__":
    main()
