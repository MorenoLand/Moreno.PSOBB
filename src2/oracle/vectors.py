"""Generate golden vectors by running the original machine code in Unicorn."""

import ctypes
import json
import math
import random
import struct
from pathlib import Path

from unicorn import UC_ARCH_X86, UC_MODE_32, Uc, UcError
from unicorn import UC_HOOK_MEM_FETCH_UNMAPPED, UC_HOOK_MEM_READ_UNMAPPED, UC_HOOK_MEM_WRITE_UNMAPPED
from unicorn.x86_const import UC_X86_REG_EAX, UC_X86_REG_EBX, UC_X86_REG_ECX, UC_X86_REG_EDX
from unicorn.x86_const import UC_X86_REG_EBP, UC_X86_REG_EDI, UC_X86_REG_EIP, UC_X86_REG_ESI, UC_X86_REG_ESP
from unicorn.x86_const import UC_X86_REG_ST0, UC_X86_REG_XMM0

ROOT = Path(__file__).resolve().parents[2]
IMAGE = ROOT / "src" / "image.bin"
FIXTURES = ROOT / "src2" / "PsoBB.Tests" / "Golden"
STACK = 0x30000000
PIECES = []


def image_reader():
    """Return a reader for virtual addresses backed by the generated data image."""
    global PIECES
    data = IMAGE.read_bytes()
    count = struct.unpack_from("<I", data)[0]
    pieces = [struct.unpack_from("<III", data, 4 + 12 * index) for index in range(count)]
    PIECES = pieces

    def read(address, size):
        for base, length, offset in pieces:
            if base <= address and address + size <= base + length:
                start = offset + address - base
                return data[start : start + size]
        raise ValueError(f"address {address:08x} is not in the data image")

    return read


def read_extended(raw):
    """Decode a ten-byte x87 extended value into a Python float."""
    bits = int.from_bytes(raw[:10], "little")
    sign = bits >> 79
    exponent = (bits >> 64) & 0x7FFF
    mantissa = bits & 0xFFFFFFFFFFFFFFFF
    if exponent == 0:
        if mantissa == 0:
            return -0.0 if sign else 0.0
        value = math.ldexp(mantissa, -16382 - 63)
    elif exponent == 0x7FFF:
        if mantissa & 0x7FFFFFFFFFFFFFFF:
            return math.nan
        return -math.inf if sign else math.inf
    else:
        value = math.ldexp(mantissa, exponent - 16383 - 63)
    return -value if sign else value


def extension_read(machine, register):
    """Read an x87 register as its ten-byte extended value."""
    buffer = ctypes.create_string_buffer(16)
    status = machine._do_reg_read(register, buffer)
    if status != 0:
        raise UcError(status, register)
    return buffer.raw[:10]


def extension_write(machine, register, raw):
    """Write a ten-byte x87 extended value into a register."""
    buffer = ctypes.create_string_buffer(raw + bytes(6))
    status = machine._do_reg_write(register, buffer)
    if status != 0:
        raise UcError(status, register)


def float32(value):
    """Round a value to single precision through its stored bytes."""
    return struct.unpack("<f", struct.pack("<f", value))[0]


def float_bits(value):
    """Return the 32-bit pattern of a single-precision value."""
    return struct.unpack("<I", struct.pack("<f", value))[0]


def double_hex(value):
    """Return the 64-bit pattern of a double as sixteen hexadecimal digits."""
    return struct.pack(">d", value).hex()


def extended_from_double(value):
    """Encode a Python float as a ten-byte x87 extended value."""
    bits = struct.unpack("<Q", struct.pack("<d", value))[0]
    sign = bits >> 63
    exponent = (bits >> 52) & 0x7FF
    fraction = bits & 0xFFFFFFFFFFFFF
    if exponent == 0:
        mantissa = fraction << 11
        encoded = 0
    elif exponent == 0x7FF:
        mantissa = (1 << 63) | (fraction << 11)
        encoded = 0x7FFF
    else:
        mantissa = (1 << 63) | (fraction << 11)
        encoded = exponent - 1023 + 16383
    return mantissa.to_bytes(8, "little") + ((sign << 15) | encoded).to_bytes(2, "little")


def execute(read, pieces, address, size, stack=(), registers=None, memory=(), capture=()):
    """Run one function with stack and memory inputs and return the machine."""
    machine = Uc(UC_ARCH_X86, UC_MODE_32)
    mapped = set()

    def map_page(target):
        base = target & ~0xFFF
        if base not in mapped:
            machine.mem_map(base, 0x1000)
            mapped.add(base)

    def map_range(start, length):
        first = start & ~0xFFF
        last = (start + length + 0xFFF) & ~0xFFF
        for target in range(first, last, 0x1000):
            if target in mapped:
                continue
            map_page(target)
            try:
                machine.mem_write(target, read(target, 0x1000))
            except ValueError:
                pass

    def map_fault(machine, access, target, size, value, context):
        page = target & ~0xFFF
        try:
            data = read(page, 0x1000)
        except ValueError:
            return False
        map_page(page)
        machine.mem_write(page, data)
        return True

    machine.hook_add(UC_HOOK_MEM_FETCH_UNMAPPED | UC_HOOK_MEM_READ_UNMAPPED | UC_HOOK_MEM_WRITE_UNMAPPED, map_fault)
    map_range(address, size)
    machine.mem_write(address, read(address, size))
    map_range(STACK - 0x10000, 0x10000)
    esp = STACK - 0x40
    machine.mem_write(esp, struct.pack("<I", 0xFFFFFFFF))
    for index, value in enumerate(stack):
        machine.mem_write(esp + 4 + 4 * index, struct.pack("<I", value & 0xFFFFFFFF))
    for target, data in memory:
        map_range(target, len(data))
        machine.mem_write(target, data)
    for target, length in capture:
        map_range(target, length)
    for name, register in (("eax", UC_X86_REG_EAX), ("ebx", UC_X86_REG_EBX), ("ecx", UC_X86_REG_ECX),
                           ("edx", UC_X86_REG_EDX), ("ebp", UC_X86_REG_EBP), ("esi", UC_X86_REG_ESI), ("edi", UC_X86_REG_EDI)):
        machine.reg_write(register, (registers or {}).get(name, 0))
    machine.reg_write(UC_X86_REG_ESP, esp)
    extended = (registers or {}).get("st0")
    if extended is not None:
        extension_write(machine, UC_X86_REG_ST0, extended)
    try:
        machine.emu_start(address, 0xFFFFFFFF, count=1000000)
    except UcError:
        if machine.reg_read(UC_X86_REG_EIP) != 0xFFFFFFFF:
            raise
    captured = {}
    for target, length in capture:
        captured[target] = machine.mem_read(target, length)
    return machine, captured


def run(read, address, size, stack=(), registers=None, memory=(), capture=()):
    """Run one function with stack and memory inputs and return eax, edx and captured memory."""
    machine, captured = execute(read, PIECES, address, size, stack, registers, memory, capture)
    eax = machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF
    edx = machine.reg_read(UC_X86_REG_EDX) & 0xFFFFFFFF
    return eax, edx, captured


def run_extended(read, address, size, stack=(), registers=None, memory=(), capture=()):
    """Run one function and return its x87 result, eax, edx and captured memory."""
    machine, captured = execute(read, PIECES, address, size, stack, registers, memory, capture)
    eax = machine.reg_read(UC_X86_REG_EAX) & 0xFFFFFFFF
    edx = machine.reg_read(UC_X86_REG_EDX) & 0xFFFFFFFF
    value = read_extended(extension_read(machine, UC_X86_REG_ST0))
    return value, eax, edx, captured


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


def angle_vectors(read):
    """0x007A9018: absolute difference of two 16-bit turn values."""
    generator = random.Random(0x7A9018)
    pairs = [(0, 0), (1, 0), (0, 1), (0xFFFF, 0), (0, 0xFFFF), (0x8000, 0), (0x7FFF, 0x8000)]
    pairs += [(generator.randrange(0x10000), generator.randrange(0x10000)) for _ in range(24)]
    vectors = []
    for left, right in pairs:
        eax, _, _ = run(read, 0x007A9018, 20, [left, right])
        vectors.append({"left": left, "right": right, "result": eax})
    write("007A9018.json", vectors)


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


def vector3_bits(raw):
    """Return three single-precision bit patterns from twelve bytes."""
    return list(struct.unpack("<3I", raw))


def matrix_bits(raw):
    """Return sixteen single-precision bit patterns from sixty-four bytes."""
    return list(struct.unpack("<16I", raw))


def matrix_cases(generator, count=12):
    """Return a list of finite 4x4 float matrices."""
    cases = [
        [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1],
        [0] * 16,
        [2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 6, 7, 1],
    ]
    cases += [[generator.uniform(-10, 10) for _ in range(16)] for _ in range(count)]
    return cases


def vector_cases(generator, count=16):
    """Return a list of interesting three-component float vectors."""
    cases = [
        (0, 0, 0), (1, 0, 0), (0, 1, 0), (0, 0, 1), (3, 4, 12), (-0.0, -0.0, -0.0),
        (1e-30, 1e-30, 1e-30), (1e30, 1e30, 1e30), (float("inf"), 0, 0),
        (float("nan"), 1, 2), (1, -2, 3), (-4, 5, -6),
    ]
    cases += [(generator.uniform(-100, 100), generator.uniform(-100, 100), generator.uniform(-100, 100))
              for _ in range(count)]
    return cases


def vector_add_vectors(read):
    """0x007A8C04: adds the second vector into the first."""
    generator = random.Random(0x7A8C04)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        _, _, captured = run(read, 0x007A8C04, 35, [0x50000000, 0x50001000], memory=memory, capture=[(0x50000000, 12)])
        vectors.append({"first": [float_bits(value) for value in first],
                        "second": [float_bits(value) for value in second],
                        "result": vector3_bits(captured[0x50000000])})
    write("007A8C04.json", vectors)


def vector_subtract_vectors(read):
    """0x007A8C4C: writes the difference of the first from the second."""
    generator = random.Random(0x7A8C4C)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        _, _, captured = run(read, 0x007A8C4C, 37, [0x50000000, 0x50001000, 0x50002000],
                             memory=memory, capture=[(0x50002000, 12)])
        vectors.append({"first": [float_bits(value) for value in first],
                        "second": [float_bits(value) for value in second],
                        "result": vector3_bits(captured[0x50002000])})
    write("007A8C4C.json", vectors)


def vector_distance_squared_vectors(read):
    """0x007A8C28: squared distance between two vectors."""
    generator = random.Random(0x7A8C28)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        value, _, _, _ = run_extended(read, 0x007A8C28, 35, [0x50000000, 0x50001000], memory=memory)
        vectors.append({"first": [float_bits(value) for value in first],
                        "second": [float_bits(value) for value in second],
                        "result": double_hex(value)})
    write("007A8C28.json", vectors)


def vector_planar_distance_squared_vectors(read):
    """0x007A9180: squared distance in the horizontal plane."""
    generator = random.Random(0x7A9180)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        value, _, _, _ = run_extended(read, 0x007A9180, 25, [0x50000000, 0x50001000], memory=memory)
        vectors.append({"first": [float_bits(value) for value in first],
                        "second": [float_bits(value) for value in second],
                        "result": double_hex(value)})
    write("007A9180.json", vectors)


def vector_length_squared_vectors(read):
    """0x0082DEF4: squared vector length."""
    generator = random.Random(0x82DEF4)
    vectors = []
    for value in vector_cases(generator):
        memory = [(0x50000000, struct.pack("<3f", *value))]
        length, _, _, _ = run_extended(read, 0x0082DEF4, 20, [], registers={"ecx": 0x50000000}, memory=memory)
        vectors.append({"value": [float_bits(component) for component in value], "result": double_hex(length)})
    write("0082DEF4.json", vectors)


def vector_normalize_vectors(read):
    """0x0082DF08: normalizes a vector and returns its length."""
    generator = random.Random(0x82DF08)
    vectors = []
    for value in vector_cases(generator):
        memory = [(0x50000000, struct.pack("<3f", *value))]
        length, _, _, captured = run_extended(read, 0x0082DF08, 81, [], registers={"ecx": 0x50000000},
                                              memory=memory, capture=[(0x50000000, 12)])
        vectors.append({"value": [float_bits(component) for component in value],
                        "length": double_hex(length),
                        "result": vector3_bits(captured[0x50000000])})
    write("0082DF08.json", vectors)


def vector_try_normalize_vectors(read):
    """0x007A9158: normalizes only when the squared length is large enough."""
    generator = random.Random(0x7A9158)
    vectors = []
    for value in vector_cases(generator):
        memory = [(0x50000000, struct.pack("<3f", *value))]
        eax, _, captured = run(read, 0x007A9158, 40, [0x50000000], memory=memory, capture=[(0x50000000, 12)])
        vectors.append({"value": [float_bits(component) for component in value], "result": eax,
                        "vector": vector3_bits(captured[0x50000000])})
    write("007A9158.json", vectors)


def vector_non_finite_vectors(read):
    """0x007A8BA0: whether any component has an all-ones exponent."""
    generator = random.Random(0x7A8BA0)
    vectors = []
    for value in vector_cases(generator):
        memory = [(0x50000000, struct.pack("<3f", *value))]
        eax, _, _ = run(read, 0x007A8BA0, 99, [0x50000000], memory=memory)
        vectors.append({"value": [float_bits(component) for component in value], "result": eax})
    write("007A8BA0.json", vectors)


def vector_zero_tolerance_vectors(read):
    """0x007A96DC: whether a squared length is inside the zero tolerance."""
    values = [0.0, 1e-6, -1e-6, 1e-5, -1e-5, 1e-4, -1e-4, float("nan"), float("inf"), float("-inf"), -0.0]
    generator = random.Random(0x7A96DC)
    values += [generator.uniform(-1e-4, 1e-4) for _ in range(40)]
    vectors = []
    for value in values:
        eax, _, _ = run(read, 0x007A96DC, 35, [], registers={"st0": extended_from_double(value)})
        vectors.append({"value": double_hex(value), "result": eax})
    write("007A96DC.json", vectors)


def vector_triangle_normal_vectors(read):
    """0x007A9618: triangle normal from three points."""
    generator = random.Random(0x7A9618)
    cases = [
        ((0, 0, 0), (1, 0, 0), (0, 1, 0)),
        ((0, 0, 0), (0, 0, 0), (0, 0, 0)),
        ((0, 0, 0), (1, 0, 0), (2, 0, 0)),
        ((0, 0, 0), (float("nan"), 0, 0), (0, 1, 0)),
        ((1, 2, 3), (4, 6, 3), (2, 8, 5)),
        ((0, 0, 0), (1e-3, 0, 0), (0, 1e-3, 0)),
        ((0, 0, 0), (1e-2, 0, 0), (0, 1e-2, 0)),
    ]
    cases += [((generator.uniform(-10, 10), generator.uniform(-10, 10), generator.uniform(-10, 10)),
               (generator.uniform(-10, 10), generator.uniform(-10, 10), generator.uniform(-10, 10)),
               (generator.uniform(-10, 10), generator.uniform(-10, 10), generator.uniform(-10, 10)))
              for _ in range(16)]
    vectors = []
    for first, second, third in cases:
        points = struct.pack("<9f", *first, *second, *third)
        memory = [(0x50000000, points), (0x50002000, b"\xcc" * 12)]
        eax, _, captured = run(read, 0x007A9618, 191, [0x50000000, 0x50002000], memory=memory,
                               capture=[(0x50002000, 12)])
        vectors.append({"points": [float_bits(component) for component in (*first, *second, *third)],
                        "result": eax, "normal": vector3_bits(captured[0x50002000])})
    write("007A9618.json", vectors)


def vector_move_towards_vectors(read):
    """0x007A8F28: moves from an origin toward a target by at most a distance."""
    generator = random.Random(0x7A8F28)
    cases = [
        ((0, 0, 0), (10, 0, 0), 5.0), ((0, 0, 0), (10, 0, 0), 20.0),
        ((0, 0, 0), (0, 0, 0), 5.0), ((0, 0, 0), (3, 4, 0), 1.0),
        ((0, 0, 0), (3, 4, 0), 10.0), ((1, 2, 3), (1, 2, 3), 1.0),
    ]
    cases += [((generator.uniform(-20, 20), generator.uniform(-20, 20), generator.uniform(-20, 20)),
               (generator.uniform(-20, 20), generator.uniform(-20, 20), generator.uniform(-20, 20)),
               generator.uniform(0, 30)) for _ in range(16)]
    vectors = []
    for origin, target, distance in cases:
        memory = [(0x50000000, struct.pack("<3f", *origin)), (0x50001000, struct.pack("<3f", *target)),
                  (0x50002000, b"\xcc" * 12)]
        value, _, _, captured = run_extended(read, 0x007A8F28, 226,
                                             [0x50000000, 0x50001000, float_bits(distance), 0x50002000],
                                             memory=memory, capture=[(0x50002000, 12)])
        vectors.append({"origin": [float_bits(component) for component in origin],
                        "target": [float_bits(component) for component in target],
                        "distance": float_bits(distance), "result": double_hex(value),
                        "moved": vector3_bits(captured[0x50002000])})
    write("007A8F28.json", vectors)


def vector_dot_vectors(read):
    """0x0082F9E0: dot product."""
    generator = random.Random(0x82F9E0)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        value, _, _, _ = run_extended(read, 0x0082F9E0, 21, [], registers={"ecx": 0x50000000, "edx": 0x50001000},
                                      memory=memory)
        vectors.append({"first": [float_bits(component) for component in first],
                        "second": [float_bits(component) for component in second], "result": double_hex(value)})
    write("0082F9E0.json", vectors)


def vector_cross_vectors(read):
    """0x0083A1F0: cross product and its length."""
    generator = random.Random(0x83A1F0)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second)),
                  (0x50002000, b"\xcc" * 12)]
        value, _, _, captured = run_extended(read, 0x0083A1F0, 88, [0x50002000],
                                             registers={"ecx": 0x50000000, "edx": 0x50001000},
                                             memory=memory, capture=[(0x50002000, 12)])
        vectors.append({"first": [float_bits(component) for component in first],
                        "second": [float_bits(component) for component in second],
                        "result": double_hex(value), "cross": vector3_bits(captured[0x50002000])})
    write("0083A1F0.json", vectors)


def vector_distance_vectors(read):
    """0x00836208: distance between two vectors with the original minimum."""
    generator = random.Random(0x836208)
    vectors = []
    for first, second in zip(vector_cases(generator), reversed(vector_cases(generator))):
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        value, _, _, _ = run_extended(read, 0x00836208, 64, [0x50000000, 0x50001000], memory=memory)
        vectors.append({"first": [float_bits(component) for component in first],
                        "second": [float_bits(component) for component in second], "result": double_hex(value)})
    write("00836208.json", vectors)


def angle_step_vectors(read):
    """0x007A8C74: moves a turn value toward a target by a maximum step."""
    generator = random.Random(0x7A8C74)
    cases = [(0, 0, 0), (0, 100, 10), (0, 100, 200), (100, 0, 10), (0, 32768, 100),
             (32768, 0, 100), (65535, 0, 1), (0, 65535, 1), (0, 12288, 12288), (0, 12288, 12287)]
    cases += [(generator.randrange(0x10000), generator.randrange(0x10000), generator.randrange(0, 0x10000))
              for _ in range(40)]
    vectors = []
    for current, target, step in cases:
        eax, _, _ = run(read, 0x007A8C74, 65, [current, target, step])
        vectors.append({"current": current, "target": target, "step": step, "result": eax & 0xFFFF})
    write("007A8C74.json", vectors)


def angle_midpoint_vectors(read):
    """0x007A8CB8: midpoint of two turn values."""
    generator = random.Random(0x7A8CB8)
    cases = [(0, 0), (0, 100), (100, 0), (0xFFFF, 1), (1, 0xFFFF), (0x8000, 0), (0x4000, 0xC000)]
    cases += [(generator.randrange(0x10000), generator.randrange(0x10000)) for _ in range(32)]
    vectors = []
    for first, second in cases:
        eax, _, _ = run(read, 0x007A8CB8, 22, [first, second])
        vectors.append({"first": first, "second": second, "result": eax & 0xFFFF})
    write("007A8CB8.json", vectors)


def angle_smoothed_midpoint_vectors(read):
    """0x007A8CD0: smoothed midpoint of two turn values."""
    generator = random.Random(0x7A8CD0)
    cases = [(0, 0), (0, 100), (0, 10000), (0, 12287), (0, 12288), (0, 53248), (0, 53247), (0xFFFF, 0)]
    cases += [(generator.randrange(0x10000), generator.randrange(0x10000)) for _ in range(32)]
    vectors = []
    for first, second in cases:
        eax, _, _ = run(read, 0x007A8CD0, 51, [first, second])
        vectors.append({"first": first, "second": second, "result": eax & 0xFFFF})
    write("007A8CD0.json", vectors)


def angle_heading_vectors(read):
    """0x007A90A8: heading from one point toward another in turn units."""
    generator = random.Random(0x7A90A8)
    cases = [((0, 0, 0), (0, 0, 10)), ((0, 0, 0), (10, 0, 0)), ((0, 0, 0), (0, 0, -10)),
             ((0, 0, 0), (0, 0, 0)), ((1, 2, 3), (4, 6, 3)), ((float("nan"), 0, 0), (1, 1, 1))]
    cases += [((generator.uniform(-20, 20), generator.uniform(-20, 20), generator.uniform(-20, 20)),
               (generator.uniform(-20, 20), generator.uniform(-20, 20), generator.uniform(-20, 20)))
              for _ in range(32)]
    vectors = []
    for first, second in cases:
        memory = [(0x50000000, struct.pack("<3f", *first)), (0x50001000, struct.pack("<3f", *second))]
        eax, _, _ = run(read, 0x007A90A8, 70, [0x50000000, 0x50001000], memory=memory)
        vectors.append({"origin": [float_bits(component) for component in first],
                        "target": [float_bits(component) for component in second], "result": eax})
    write("007A90A8.json", vectors)


def trigonometry_sine_vectors(read):
    """0x0082DCBC: fixed-point sine."""
    generator = random.Random(0x82DCBC)
    angles = [0, 1, 2, 0xF, 0x10, 0x3FF, 0x400, 0x7FF, 0x800, 0xBFF, 0xC00, 0xFFF,
              0x1000, 0x1234, 0x4000, 0x7FFF, 0x8000, 0xC000, 0xFFFF, -1, -0x10, 0x10000, 0x12345678]
    angles += [generator.randrange(0x10000) for _ in range(48)]
    vectors = []
    for angle in angles:
        value, _, _, _ = run_extended(read, 0x0082DCBC, 282, [], registers={"ecx": angle})
        vectors.append({"angle": angle & 0xFFFFFFFF, "result": double_hex(value)})
    write("0082DCBC.json", vectors)


def trigonometry_cosine_vectors(read):
    """0x0082DDD8: fixed-point cosine."""
    generator = random.Random(0x82DDD8)
    angles = [0, 1, 2, 0xF, 0x10, 0x3FF, 0x400, 0x7FF, 0x800, 0xBFF, 0xC00, 0xFFF,
              0x1000, 0x1234, 0x4000, 0x7FFF, 0x8000, 0xC000, 0xFFFF, -1, -0x10, 0x10000, 0x12345678]
    angles += [generator.randrange(0x10000) for _ in range(48)]
    vectors = []
    for angle in angles:
        value, _, _, _ = run_extended(read, 0x0082DDD8, 282, [], registers={"ecx": angle})
        vectors.append({"angle": angle & 0xFFFFFFFF, "result": double_hex(value)})
    write("0082DDD8.json", vectors)


def trigonometry_offset_vectors(read):
    """0x007A90F0: offsets a point around the vertical axis."""
    generator = random.Random(0x7A90F0)
    cases = [(0, 5.0, (10, 20, 30)), (0x4000, 5.0, (10, 20, 30)), (0x8000, 5.0, (10, 20, 30)),
             (0xC000, 5.0, (10, 20, 30)), (0x1234, 2.5, (-1, 2, -3)), (0xFFFF, 0.0, (0, 0, 0))]
    cases += [(generator.randrange(0x10000), generator.uniform(-10, 10),
               (generator.uniform(-100, 100), generator.uniform(-100, 100), generator.uniform(-100, 100)))
              for _ in range(24)]
    vectors = []
    for angle, radius, center in cases:
        memory = [(0x50000000, struct.pack("<3f", *center)), (0x50002000, b"\xcc" * 12)]
        _, _, captured = run(read, 0x007A90F0, 56,
                             [angle, float_bits(radius), 0x50000000, 0x50002000],
                             memory=memory, capture=[(0x50002000, 12)])
        vectors.append({"angle": angle & 0xFFFFFFFF, "radius": float_bits(radius),
                        "center": [float_bits(component) for component in center],
                        "result": vector3_bits(captured[0x50002000])})
    write("007A90F0.json", vectors)


def trigonometry_circle_vectors(read):
    """0x007A9128: point on a circle in the horizontal plane."""
    generator = random.Random(0x7A9128)
    cases = [(0, 5.0), (0x4000, 5.0), (0x8000, 5.0), (0xC000, 5.0), (0x1234, 2.5), (0xFFFF, 0.0)]
    cases += [(generator.randrange(0x10000), generator.uniform(-10, 10)) for _ in range(24)]
    vectors = []
    for angle, radius in cases:
        memory = [(0x50002000, b"\xcc" * 12)]
        _, _, captured = run(read, 0x007A9128, 46, [angle, float_bits(radius), 0x50002000],
                             memory=memory, capture=[(0x50002000, 12)])
        vectors.append({"angle": angle & 0xFFFFFFFF, "radius": float_bits(radius),
                        "result": vector3_bits(captured[0x50002000])})
    write("007A9128.json", vectors)


def matrix_multiply_vectors(read):
    """0x00831308: multiplies two row-major matrices."""
    generator = random.Random(0x831308)
    vectors = []
    for left, right in zip(matrix_cases(generator), reversed(matrix_cases(generator))):
        memory = [(0x50001000, struct.pack("<16f", *left)), (0x50000000, struct.pack("<16f", *right))]
        _, _, captured = run(read, 0x00831308, 840, [], registers={"ecx": 0x50000000, "edx": 0x50001000},
                             memory=memory, capture=[(0x50000000, 64)])
        vectors.append({"left": [float_bits(value) for value in left],
                        "right": [float_bits(value) for value in right],
                        "result": matrix_bits(captured[0x50000000])})
    write("00831308.json", vectors)


def matrix_translate_vectors(read):
    """0x008316B4: adds a rotated translation to a matrix."""
    generator = random.Random(0x8316B4)
    vectors = []
    for matrix, translation in zip(matrix_cases(generator), vector_cases(generator)):
        memory = [(0x50000000, struct.pack("<16f", *matrix)), (0x50001000, struct.pack("<3f", *translation))]
        _, _, captured = run(read, 0x008316B4, 136, [], registers={"ecx": 0x50000000, "edx": 0x50001000},
                             memory=memory, capture=[(0x50000000, 64)])
        vectors.append({"matrix": [float_bits(value) for value in matrix],
                        "translation": [float_bits(value) for value in translation],
                        "result": matrix_bits(captured[0x50000000])})
    write("008316B4.json", vectors)


def matrix_transform_positions_vectors(read):
    """0x0082F940: transforms an array of positions."""
    generator = random.Random(0x82F940)
    vectors = []
    for matrix in matrix_cases(generator):
        points = vector_cases(generator)[:4]
        count = len(points)
        packed = struct.pack("<12f", *[component for point in points for component in point])
        memory = [(0x50000000, struct.pack("<16f", *matrix)), (0x50001000, packed),
                  (0x50002000, b"\xcc" * 48)]
        _, _, captured = run(read, 0x0082F940, 130, [0x50002000, count],
                             registers={"ecx": 0x50000000, "edx": 0x50001000},
                             memory=memory, capture=[(0x50002000, 12 * count)])
        vectors.append({"matrix": [float_bits(value) for value in matrix],
                        "points": [float_bits(component) for component in [c for p in points for c in p]],
                        "result": [vector3_bits(captured[0x50002000][12 * index : 12 * index + 12])
                                   for index in range(count)]})
    write("0082F940.json", vectors)


def matrix_scale_rows_vectors(read):
    """0x0082FA0C: scales the first three matrix rows."""
    generator = random.Random(0x82FA0C)
    vectors = []
    for matrix in matrix_cases(generator):
        factors = (generator.uniform(-5, 5), generator.uniform(-5, 5), generator.uniform(-5, 5))
        memory = [(0x50000000, struct.pack("<16f", *matrix))]
        _, _, captured = run(read, 0x0082FA0C, 141,
                             [float_bits(factors[0]), float_bits(factors[1]), float_bits(factors[2])],
                             registers={"ecx": 0x50000000}, memory=memory, capture=[(0x50000000, 64)])
        vectors.append({"matrix": [float_bits(value) for value in matrix],
                        "factors": [float_bits(value) for value in factors],
                        "result": matrix_bits(captured[0x50000000])})
    write("0082FA0C.json", vectors)


def ftol_vectors(read):
    """0x008CB1E8 (__ftol): truncates st(0) to a 64-bit integer returned in edx:eax."""
    values = [0.0, -0.0, 0.5, -0.5, 1.0, -1.0, 1.9, -1.9, 2.5, -2.5, 1234.75, -1234.75,
              2147483647.0, 2147483648.0, -2147483648.0, -2147483649.0, 4294967295.0, 4294967296.0,
              9223372036854775807.0, -9223372036854775808.0, 9223372036854775808.0, -9223372036854775809.0,
              1e30, -1e30, float("inf"), float("-inf"), float("nan")]
    vectors = []
    for value in values:
        eax, edx, _ = run(read, 0x008CB1E8, 39, registers={"st0": extended_from_double(value)})
        vectors.append({"value": double_hex(value), "result": f"{(edx << 32) | eax:016x}"})
    write("008CB1E8.json", vectors)


def allmul_vectors(read):
    """0x0085ADA0 (__allmul): returns the low 64 bits of two 64-bit operands, pushed as four words."""
    pairs = [(0, 0), (1, 1), (2, 3), (0xFFFFFFFF, 2), (0x100000000, 0x100000000), (0x7FFFFFFFFFFFFFFF, 2),
             (0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF), (0x123456789ABCDEF0, 0x0FEDCBA987654321),
             (0x8000000000000000, 0xFFFFFFFFFFFFFFFF), (3, 0x8000000000000000), (0x00000001FFFFFFFF, 0x00000001FFFFFFFF)]
    vectors = []
    for left, right in pairs:
        stack = [left & 0xFFFFFFFF, left >> 32, right & 0xFFFFFFFF, right >> 32]
        eax, edx, _ = run(read, 0x0085ADA0, 52, stack=stack)
        vectors.append({"left": f"{left:016x}", "right": f"{right:016x}", "result": f"{(edx << 32) | eax:016x}"})
    write("0085ADA0.json", vectors)


def shift_right_vectors(read, address, size, name, values):
    """A 64-bit right shift by the count in cl: the count is read from cl and every count from zero to 255 is tried."""
    counts = [0, 1, 31, 32, 33, 63, 64, 65, 127, 255]
    vectors = []
    for value in values:
        for count in counts:
            eax, edx, _ = run(read, address, size, registers={"eax": value & 0xFFFFFFFF, "edx": value >> 32, "ecx": count})
            vectors.append({"value": f"{value:016x}", "count": count, "result": f"{(edx << 32) | eax:016x}"})
    write(name, vectors)


def allshr_vectors(read):
    """0x008CAC90 (__allshr): signed 64-bit shift right; counts of 64 or more fill with the sign bit."""
    values = [0, 1, 0x7FFFFFFFFFFFFFFF, 0x8000000000000000, 0xFFFFFFFFFFFFFFFF, 0x123456789ABCDEF0, 0x00000001FFFFFFFF]
    shift_right_vectors(read, 0x008CAC90, 33, "008CAC90.json", values)


def aullshr_vectors(read):
    """0x008CB210 (__aullshr): unsigned 64-bit shift right; counts of 64 or more give zero."""
    values = [0, 1, 0x7FFFFFFFFFFFFFFF, 0x8000000000000000, 0xFFFFFFFFFFFFFFFF, 0x123456789ABCDEF0, 0x00000001FFFFFFFF]
    shift_right_vectors(read, 0x008CB210, 31, "008CB210.json", values)


def aulldiv_vectors(read):
    """0x00863510 (__aulldiv): unsigned 64-bit quotient of two operands pushed as four words; divisors are nonzero."""
    pairs = [(0, 1), (1, 1), (0xFFFFFFFFFFFFFFFF, 1), (0xFFFFFFFFFFFFFFFF, 0xFFFFFFFFFFFFFFFF), (0x8000000000000000, 2),
             (0x123456789ABCDEF0, 0x10), (0x7FFFFFFF, 0x80000000), (0x100000000, 0x100000000),
             (0xFFFFFFFFFFFFFFFF, 0x100000000), (12345678901234567890, 987654321), (0x00000001FFFFFFFF, 3),
             (0xFFFFFFFF00000000, 0xFFFFFFFF), (1000000007, 0x7FFFFFFFFFFFFFFF)]
    vectors = []
    for dividend, divisor in pairs:
        stack = [dividend & 0xFFFFFFFF, dividend >> 32, divisor & 0xFFFFFFFF, divisor >> 32]
        eax, edx, _ = run(read, 0x00863510, 104, stack=stack)
        vectors.append({"dividend": f"{dividend:016x}", "divisor": f"{divisor:016x}", "result": f"{(edx << 32) | eax:016x}"})
    write("00863510.json", vectors)


def alldiv_vectors(read):
    """0x0085ADE0 (__alldiv): signed 64-bit quotient truncated toward zero; divisors are nonzero and MIN / -1 faults."""
    pairs = [(0, 1), (0xffffffffffffffff, 1), (0xFFFFFFFFFFFFFFF9, 2), (7, 0xFFFFFFFFFFFFFFFE), (0xFFFFFFFFFFFFFFF9, 0xFFFFFFFFFFFFFFFE),
             (0x8000000000000000, 1), (0x8000000000000000, 2), (0x8000000000000000, 0xFFFFFFFFFFFFFFFE), (0x7fffffffffffffff, 0xffffffffffffffff), (0x7fffffffffffffff, 0x7fffffffffffffff),
             (0xffffffffffffffff, 0x8000000000000000), (0x8000000000000000 + 1, 0xffffffffffffffff), (123456789012345678, 0xFFFFFFFFFFFFFC18),
             (0xF0F0F0F0F0F0F0F0, 0x10), (1000000007, 0xFFFFFFFFFFFFFFFD)]
    vectors = []
    for dividend, divisor in pairs:
        stack = [dividend & 0xFFFFFFFF, dividend >> 32, divisor & 0xFFFFFFFF, divisor >> 32]
        eax, edx, _ = run(read, 0x0085ADE0, 170, stack=stack)
        vectors.append({"dividend": f"{dividend:016x}", "divisor": f"{divisor:016x}", "result": f"{(edx << 32) | eax:016x}"})
    write("0085ADE0.json", vectors)


def shift_96_vectors(read, address, size, name):
    """Shifts a 96-bit value, three dwords least significant first, by one bit in place at the pointer on the stack."""
    base = 0x20000000
    values = [(0, 0, 0), (1, 0, 0), (0x80000000, 0, 0), (0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF),
              (0x80000000, 0x80000000, 0x80000000), (0x12345678, 0x9ABCDEF0, 0x0FEDCBA9), (0, 0, 0x80000000),
              (0xDEADBEEF, 0, 1), (0x7FFFFFFF, 0x80000000, 0x00000001), (0x00000001, 0xFFFFFFFF, 0x80000000)]
    vectors = []
    for before in values:
        _, _, captured = run(read, address, size, stack=[base], memory=[(base, struct.pack("<III", *before))],
                             capture=[(base, 12)])
        after = struct.unpack("<III", captured[base])
        vectors.append({"before": list(before), "after": list(after)})
    write(name, vectors)


def shl12_vectors(read):
    """0x00869982 (__shl_12): a 96-bit shift left by one bit."""
    shift_96_vectors(read, 0x00869982, 64, "00869982.json")


def shr12_vectors(read):
    """0x008699B0 (__shr_12): a 96-bit shift right by one bit."""
    shift_96_vectors(read, 0x008699B0, 64, "008699B0.json")


def addl_vectors(read):
    """0x00869903 (___addl): adds two 32-bit values, stores the sum through the third argument, returns 1 on carry."""
    base = 0x20000000
    pairs = [(0, 0), (1, 1), (0xFFFFFFFF, 1), (0xFFFFFFFF, 0xFFFFFFFF), (0x80000000, 0x80000000), (0x7FFFFFFF, 1),
             (0x12345678, 0x9ABCDEF0), (0xFFFFFFFE, 1), (0, 0xFFFFFFFF), (0xDEADBEEF, 0x01234567)]
    vectors = []
    for left, right in pairs:
        eax, _, captured = run(read, 0x00869903, 40, stack=[left, right, base],
                               memory=[(base, b"\x00" * 4)], capture=[(base, 4)])
        vectors.append({"left": f"{left:08x}", "right": f"{right:08x}", "carry": eax & 0xFFFFFFFF,
                        "sum": f"{struct.unpack('<I', captured[base])[0]:08x}"})
    write("00869903.json", vectors)


def add12_vectors(read):
    """0x00869924 (___add_12): adds the second 96-bit value into the first, carrying across the three dwords."""
    base_a, base_b = 0x20000000, 0x20001000
    cases = [((0, 0, 0), (0, 0, 0)), ((1, 0, 0), (1, 0, 0)), ((0xFFFFFFFF, 0, 0), (1, 0, 0)),
             ((0xFFFFFFFF, 0xFFFFFFFF, 0), (1, 0, 0)), ((0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF), (1, 0, 0)),
             ((0xFFFFFFFF, 0xFFFFFFFF, 0), (0xFFFFFFFF, 0xFFFFFFFF, 0)),
             ((0x80000000, 0x80000000, 0x80000000), (0x80000000, 0x80000000, 0x80000000)),
             ((0x12345678, 0x9ABCDEF0, 0x0FEDCBA9), (0xDEADBEEF, 0x01234567, 0xFFFFFFFF)),
             ((0xFFFFFFFF, 0, 0xFFFFFFFF), (0xFFFFFFFF, 0xFFFFFFFF, 1)), ((0xFFFFFFFE, 0xFFFFFFFF, 0x7FFFFFFF), (2, 1, 0x80000000))]
    vectors = []
    for left, right in cases:
        _, _, captured = run(read, 0x00869924, 40, stack=[base_a, base_b],
                             memory=[(base_a, struct.pack("<III", *left)), (base_b, struct.pack("<III", *right))],
                             capture=[(base_a, 12)])
        vectors.append({"left": list(left), "right": list(right), "result": list(struct.unpack("<III", captured[base_a]))})
    write("00869924.json", vectors)


def ip6_v4_vectors(read):
    """0x008A8C52 (_IP6_GET_V4_ADDR@4): returns the dword at offset 12 of the address structure pointed to by its argument."""
    base = 0x20000000
    values = [bytes(range(16)), bytes([0xFF] * 16), bytes([0x00] * 12) + bytes([0x7F, 0x00, 0x00, 0x01]),
              bytes([0x12, 0x34, 0x56, 0x78, 0x9A, 0xBC, 0xDE, 0xF0, 0x11, 0x22, 0x33, 0x44, 0xC0, 0xA8, 0x01, 0x64])]
    vectors = []
    for data in values:
        eax, _, _ = run(read, 0x008A8C52, 16, stack=[base], memory=[(base, data)])
        vectors.append({"address": data.hex(), "result": f"{eax:08x}"})
    write("008A8C52.json", vectors)


def ascii_strnicmp_vectors(read):
    """0x00863DE0 (___ascii_strnicmp): compares at most n bytes of two zero-terminated strings, folding only A to Z; returns -1, 0 or 1."""
    base_a, base_b = 0x20000000, 0x20001000
    nul = bytes([0])
    cases = [
        (b"abc" + nul, b"abc" + nul, 4), (b"ABC" + nul, b"abc" + nul, 4), (b"abc" + nul, b"abd" + nul, 4),
        (b"abd" + nul, b"abc" + nul, 4), (b"ab" + nul, b"abc" + nul, 4), (b"abc" + nul, b"ab" + nul, 4),
        (b"abc" + nul, b"abc" + nul, 0), (b"abcd" + nul, b"abce" + nul, 3), (b"@" + nul, b"`" + nul, 2),
        (b"[" + nul, b"{" + nul, 2), (b"Z" + nul, b"z" + nul, 2), (bytes([0xC1, 0]), bytes([0xE1, 0]), 2),
        (b"Hello World" + nul, b"hello world" + nul, 20), (nul, b"a" + nul, 2), (b"a" + nul, nul, 2),
        (bytes([0x80, 0x41, 0]), bytes([0x80, 0x61, 0]), 3),
    ]
    vectors = []
    for a, b, n in cases:
        eax, _, _ = run(read, 0x00863DE0, 80, stack=[base_a, base_b, n],
                        memory=[(base_a, a), (base_b, b)])
        signed = eax - (1 << 32) if eax >= 0x80000000 else eax
        vectors.append({"a": a.hex(), "b": b.hex(), "n": n, "result": signed})
    write("00863DE0.json", vectors)


def tolower_c_vectors(read):
    """0x008598F9 (___tolower_mt) on the C-locale path: a zero locale field at +0x14 selects the ASCII fold of A to Z."""
    base = 0x20000000
    vectors = []
    for c in list(range(-1, 256)):
        eax, _, _ = run(read, 0x008598F9, 200, stack=[base, c & 0xFFFFFFFF], memory=[(base, bytes(256))])
        signed = eax - (1 << 32) if eax >= 0x80000000 else eax
        vectors.append({"c": c, "result": signed})
    write("008598F9.json", vectors)


def toupper_c_vectors(read):
    """0x00858A24 (___toupper_mt) on the C-locale path: a zero locale field at +0x14 selects the ASCII fold of a to z."""
    base = 0x20000000
    vectors = []
    for c in list(range(-1, 256)):
        eax, _, _ = run(read, 0x00858A24, 200, stack=[base, c & 0xFFFFFFFF], memory=[(base, bytes(256))])
        signed = eax - (1 << 32) if eax >= 0x80000000 else eax
        vectors.append({"c": c, "result": signed})
    write("00858A24.json", vectors)


PTD = 0x20002000
SEED_SLOT = PTD + 0x14


def patched_reader(read, call_at, replacement):
    """Return a reader whose bytes at call_at hold the replacement instead of the original call."""
    def reader(start, size):
        data = bytearray(read(start, size))
        for offset, value in enumerate(replacement):
            position = call_at + offset
            if start <= position < start + size:
                data[position - start] = value
        return bytes(data)
    return reader


def rand_vectors(read):
    """0x00858798 (_srand) and 0x008587A5 (_rand): the seed lives in the per-thread block; the __getptd call is replaced by the address of a test block."""
    seeds = [0, 1, 2, 42, 0x1234, 0x7FFF, 0x8000, 0x7FFFFFFF, 0x80000000, 0xFFFFFFFF]
    generator = random.Random(0x3A7C11)
    seeds += [generator.randrange(0x100000000) for _ in range(24)]
    replacement = bytes([0xB8]) + struct.pack("<I", PTD)
    rand_reader = patched_reader(read, 0x008587A5, replacement)
    seed_reader = patched_reader(read, 0x00858798, replacement)
    block = bytes(0x14) + bytes(4) + bytes(0x20)
    srand_vectors, rand_vectors_out = [], []
    for seed in seeds:
        state = bytearray(block)
        state[0x14:0x18] = struct.pack("<I", seed)
        _, _, captured = run(seed_reader, 0x00858798, 13, stack=[seed], memory=[(PTD, bytes(state))], capture=[(SEED_SLOT, 4)])
        srand_vectors.append({"seed": seed, "state": struct.unpack("<I", captured[SEED_SLOT])[0]})
        eax, _, captured = run(rand_reader, 0x008587A5, 34, memory=[(PTD, bytes(state))], capture=[(SEED_SLOT, 4)])
        rand_vectors_out.append({"seed": seed, "result": eax, "state": struct.unpack("<I", captured[SEED_SLOT])[0]})
    write("00858798.json", srand_vectors)
    write("008587A5.json", rand_vectors_out)


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
    angle_vectors(read)
    prs_vectors(read)
    vector_add_vectors(read)
    vector_subtract_vectors(read)
    vector_distance_squared_vectors(read)
    vector_planar_distance_squared_vectors(read)
    vector_length_squared_vectors(read)
    vector_normalize_vectors(read)
    vector_try_normalize_vectors(read)
    vector_non_finite_vectors(read)
    vector_zero_tolerance_vectors(read)
    vector_triangle_normal_vectors(read)
    vector_move_towards_vectors(read)
    vector_dot_vectors(read)
    vector_cross_vectors(read)
    vector_distance_vectors(read)
    angle_step_vectors(read)
    angle_midpoint_vectors(read)
    angle_smoothed_midpoint_vectors(read)
    angle_heading_vectors(read)
    trigonometry_sine_vectors(read)
    trigonometry_cosine_vectors(read)
    trigonometry_offset_vectors(read)
    trigonometry_circle_vectors(read)
    matrix_multiply_vectors(read)
    matrix_translate_vectors(read)
    matrix_transform_positions_vectors(read)
    matrix_scale_rows_vectors(read)
    rand_vectors(read)
    ftol_vectors(read)
    allmul_vectors(read)
    allshr_vectors(read)
    aullshr_vectors(read)
    aulldiv_vectors(read)
    alldiv_vectors(read)
    shl12_vectors(read)
    shr12_vectors(read)
    addl_vectors(read)
    add12_vectors(read)
    ip6_v4_vectors(read)
    ascii_strnicmp_vectors(read)
    tolower_c_vectors(read)
    toupper_c_vectors(read)



if __name__ == "__main__":
    main()
