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
from unicorn.x86_const import UC_X86_REG_FPCW, UC_X86_REG_ST0, UC_X86_REG_XMM0

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
    fpcw = (registers or {}).get("fpcw")
    if fpcw is not None:
        machine.reg_write(UC_X86_REG_FPCW, fpcw)
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
STRING = 0x20003000
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


def default_locale_block(read):
    """A per-thread block whose locale pointer is the default C locale, so the original takes its table path."""
    block = bytearray(0x80)
    block[0x64:0x68] = read(0x00A23CEC, 4)
    return bytes(block)


def numeric_text_cases():
    generator = random.Random(0x5A7C3)
    cases = [b"123", b"  42", b"\t-7", b"+9", b"-", b"", b"2147483647", b"2147483648", b"-2147483648",
             b"99999999999", b"12abc", b"\n\r 5", b"   -0", b"+-5", b"0x1F", b"4294967296", b"-99999999999999",
             b"9223372036854775807", b"9223372036854775808", b"-9223372036854775808", b"18446744073709551617"]
    cases += [bytes([c]) + b"7" for c in range(256)]
    for _ in range(40):
        lead = bytes(generator.choice(b" \t\n\r\x0b\x0c+-") for _ in range(generator.randrange(3)))
        digits = bytes(generator.choice(b"0123456789") for _ in range(generator.randrange(1, 22)))
        cases.append(lead + digits + bytes([generator.choice(b"x.a \0")]))
    return [case.split(b"\0")[0] for case in cases]


def atol_vectors(read):
    """0x0085A072 (_atol): the leading-space skip reads the default C-locale table; the call to __getptd is replaced by a test block."""
    replacement = bytes([0xB8]) + struct.pack("<I", PTD)
    reader = patched_reader(read, 0x0085A074, replacement)
    block = default_locale_block(read)
    vectors = []
    for text in numeric_text_cases():
        eax, _, _ = run(reader, 0x0085A072, 136, stack=[STRING], memory=[(PTD, block), (STRING, text + bytes(1))])
        signed = eax - (1 << 32) if eax >= 0x80000000 else eax
        vectors.append({"text": text.hex(), "result": signed})
    write("0085A072.json", vectors)


def atoi64_vectors(read):
    """0x0085A0FF (__atoi64): the 64-bit accumulator of the same text walk; the call to __getptd is replaced by a test block."""
    replacement = bytes([0xB8]) + struct.pack("<I", PTD)
    reader = patched_reader(read, 0x0085A103, replacement)
    block = default_locale_block(read)
    vectors = []
    for text in numeric_text_cases():
        eax, edx, _ = run(reader, 0x0085A0FF, 167, stack=[STRING], memory=[(PTD, block), (STRING, text + bytes(1))])
        value = (edx << 32) | eax
        signed = value - (1 << 64) if value >= 1 << 63 else value
        vectors.append({"text": text.hex(), "result": signed})
    write("0085A0FF.json", vectors)


COMPARE = 0x20004000
SORT_ARRAY = 0x20005000


def int_compare_code():
    """A cdecl callback that returns the first dword of its first argument minus that of its second."""
    return bytes.fromhex("8b442404" "8b4c2408" "8b00" "8b09" "29c8" "c3")


def sort_cases():
    generator = random.Random(0x51A7E)
    cases = []
    for count in (1, 2, 3, 4, 5, 7, 8, 9, 10, 12, 16, 17, 31, 40, 64, 100):
        for width in (4, 8):
            values = [generator.randrange(-0x80000000, 0x80000000) for _ in range(count)]
            cases.append((width, values))
    for count in (9, 20, 50):
        values = [generator.randrange(-4, 4) for _ in range(count)]
        cases.append((4, values))
    cases.append((4, [5] * 12))
    cases.append((4, list(range(40, 0, -1))))
    cases.append((4, [0x7FFFFFFF, -0x80000000, 0, 1, -1, 0x40000000, -0x40000000, 2, 3, 0x7FFFFFFE, -0x7FFFFFFF]))
    return cases


def element_bytes(width, values):
    out = bytearray()
    for index, value in enumerate(values):
        out += struct.pack("<i", value) + bytes([index & 0xFF]) * (width - 4)
    return bytes(out)


def shortsort_vectors(read):
    """0x008CAD70 (_shortsort): the high bound comes in eax; the low bound, width and comparison come on the stack."""
    code = int_compare_code()
    reader = lambda start, size: read(start, size)
    vectors = []
    for width, values in sort_cases():
        if len(values) > 8:
            continue
        data = element_bytes(width, values)
        hi = (len(values) - 1) * width
        run_memory = [(COMPARE, code), (SORT_ARRAY, data)]
        _, _, captured = run(reader, 0x008CAD70, 109, stack=[SORT_ARRAY, width, COMPARE], registers={"eax": SORT_ARRAY + hi},
                             memory=run_memory, capture=[(SORT_ARRAY, len(data))])
        vectors.append({"width": width, "count": len(values), "input": data.hex(), "output": captured[SORT_ARRAY].hex()})
    write("008CAD70.json", vectors)


def qsort_vectors(read):
    """0x008CADE0 (_qsort): the comparison is a machine-code callback placed in the test image."""
    code = int_compare_code()
    vectors = []
    for width, values in sort_cases():
        data = element_bytes(width, values)
        run_memory = [(COMPARE, code), (SORT_ARRAY, data)]
        _, _, captured = run(read, 0x008CADE0, 643, stack=[SORT_ARRAY, len(values), width, COMPARE],
                             memory=run_memory, capture=[(SORT_ARRAY, len(data))])
        vectors.append({"width": width, "count": len(values), "input": data.hex(), "output": captured[SORT_ARRAY].hex()})
    write("008CADE0.json", vectors)


CAMERA = 0x20006000
CAMERA_SIZE = 0x1D4


def camera_blocks(count, seed):
    """Camera objects whose every dword is a random finite single-precision float."""
    generator = random.Random(seed)
    blocks = []
    for _ in range(count):
        values = [generator.uniform(-1000.0, 1000.0) for _ in range(CAMERA_SIZE // 4)]
        blocks.append(struct.pack("<%df" % len(values), *values))
    return blocks


def camera_offset_vectors(read):
    """0x004D3DF4: steps the vertical offset countdown and writes the sine-scaled Y offset."""
    countdowns = [0, 1, 2, 3, 4, 5, 10, 17, 20, 29, 30, 60, 100, 277, 483, 11796480, 2098545542, 0xFFFFFFFF]
    vectors = []
    for index, block in enumerate(camera_blocks(len(countdowns), 0x4D3DF4)):
        patched = bytearray(block)
        struct.pack_into("<I", patched, 0x1C0, countdowns[index])
        _, _, captured = run(
            read,
            0x004D3DF4,
            156,
            registers={"ecx": CAMERA, "fpcw": 0x027F},
            memory=[(CAMERA, bytes(patched))],
            capture=[(CAMERA, CAMERA_SIZE)],
        )
        vectors.append({"input": bytes(patched).hex(), "output": bytes(captured[CAMERA]).hex()})
    write("004D3DF4.json", vectors)


def trigonometry_sincos_vectors(read):
    """0x008451F8: single-precision sine and cosine pair."""
    generator = random.Random(0x8451F8)
    angles = [0, 1, 2, 0xF, 0x10, 0x3FF, 0x400, 0x7FF, 0x800, 0xBFF, 0xC00, 0xFFF,
              0x1000, 0x1234, 0x4000, 0x7FFF, 0x8000, 0xC000, 0xFFFF, -1, -0x10, 0x10000, 0x12345678]
    angles += [generator.randrange(0x10000) for _ in range(48)]
    vectors = []
    for angle in angles:
        memory = [(0x50000000, b"\xcc" * 4), (0x50000004, b"\xcc" * 4)]
        _, _, captured = run(
            read,
            0x008451F8,
            514,
            stack=[0x50000004],
            registers={"ecx": angle, "edx": 0x50000000},
            memory=memory,
            capture=[(0x50000000, 8)],
        )
        sin_bits, cos_bits = struct.unpack("<II", captured[0x50000000])
        vectors.append({"angle": angle & 0xFFFFFFFF, "sine": sin_bits, "cosine": cos_bits})
    write("008451F8.json", vectors)


def matrix_rotate_y_vectors(read):
    """0x0082D8BC: rotates a matrix around Y using single-precision sine and cosine."""
    generator = random.Random(0x82D8BC)
    angles = [0, 0x4000, 0x8000, 0xC000, 0x1234, -0x1234] + [generator.randrange(0x10000) for _ in range(10)]
    vectors = []
    for matrix, angle in zip(matrix_cases(generator), angles):
        memory = [(0x50000000, struct.pack("<16f", *matrix))]
        _, _, captured = run(
            read,
            0x0082D8BC,
            209,
            registers={"ecx": 0x50000000, "edx": angle & 0xFFFFFFFF},
            memory=memory,
            capture=[(0x50000000, 64)],
        )
        vectors.append({
            "matrix": [float_bits(value) for value in matrix],
            "angle": angle & 0xFFFFFFFF,
            "result": matrix_bits(captured[0x50000000]),
        })
    write("0082D8BC.json", vectors)


def matrix_rotate_x_vectors(read):
    """0x0082E9E4: rotates a matrix around X using single-precision sine and cosine."""
    generator = random.Random(0x82E9E4)
    angles = [0, 0x4000, 0x8000, 0xC000, 0x1234, -0x1234] + [generator.randrange(0x10000) for _ in range(10)]
    vectors = []
    for matrix, angle in zip(matrix_cases(generator), angles):
        memory = [(0x50000000, struct.pack("<16f", *matrix))]
        _, _, captured = run(
            read,
            0x0082E9E4,
            212,
            registers={"ecx": 0x50000000, "edx": angle & 0xFFFFFFFF},
            memory=memory,
            capture=[(0x50000000, 64)],
        )
        vectors.append({
            "matrix": [float_bits(value) for value in matrix],
            "angle": angle & 0xFFFFFFFF,
            "result": matrix_bits(captured[0x50000000]),
        })
    write("0082E9E4.json", vectors)


def matrix_transform_direction_vectors(read):
    """0x0083A610: transforms a 3D direction vector by the stack top's upper 3x3 basis."""
    generator = random.Random(0x83A610)
    vectors = []
    for matrix, direction in zip(matrix_cases(generator), vector_cases(generator)):
        memory = [
            (0x00AF0328, struct.pack("<I", 0x50000000)),
            (0x50000000, struct.pack("<16f", *matrix)),
            (0x50001000, struct.pack("<3f", *direction)),
            (0x50002000, b"\xcc" * 12),
        ]
        _, _, captured = run(
            read,
            0x0083A610,
            88,
            stack=[0x50001000, 0x50002000],
            memory=memory,
            capture=[(0x50002000, 12)],
        )
        vectors.append({
            "matrix": [float_bits(value) for value in matrix],
            "direction": [float_bits(c) for c in direction],
            "result": vector3_bits(captured[0x50002000]),
        })
    write("0083A610.json", vectors)


def camera_step_towards_vectors(read):
    """0x004D63B0: steps a vector toward a desired position using 0.16 * distance * speed clamped at 12 when >= 5."""
    generator = random.Random(0x4D63B0)
    cases = [
        ((0, 0, 0), (0, 0, 0), 1.0),
        ((0, 0, 0), (1, 0, 0), 1.0),
        ((0, 0, 0), (1, 0, 0), 10.0),
        ((0, 0, 0), (100, 0, 0), 0.5),
        ((0, 0, 0), (31.25, 0, 0), 1.0),
        ((10, -20, 30), (10, -20, 30), 2.0),
    ]
    cases += [
        (
            (generator.uniform(-200, 200), generator.uniform(-200, 200), generator.uniform(-200, 200)),
            (generator.uniform(-200, 200), generator.uniform(-200, 200), generator.uniform(-200, 200)),
            generator.uniform(0.0, 4.0),
        )
        for _ in range(18)
    ]
    vectors = []
    for current, desired, speed in cases:
        memory = [
            (0x50000000, struct.pack("<3f", *current)),
            (0x50001000, struct.pack("<3f", *desired)),
        ]
        eax, _, captured = run(
            read,
            0x004D63B0,
            149,
            stack=[0x50000000, 0x50001000, float_bits(speed)],
            registers={"fpcw": 0x027F},
            memory=memory,
            capture=[(0x50000000, 12), (0x50001000, 12)],
        )
        vectors.append({
            "current": [float_bits(c) for c in current],
            "desired": [float_bits(c) for c in desired],
            "speed": float_bits(speed),
            "reached": eax & 1,
            "resultCurrent": vector3_bits(captured[0x50000000]),
            "resultDesired": vector3_bits(captured[0x50001000]),
        })
    write("004D63B0.json", vectors)


def camera_smooth_follow_vectors(read):
    """0x004D3D14: snaps to desired when global flag bit 0 is set, or smooth-follows eye and target."""
    generator = random.Random(0x4D3D14)
    snap_cases = [0, 1, 2, 3] + [generator.choice([0, 0, 0, 1]) for _ in range(16)]
    vectors = []
    for snap, block in zip(snap_cases, camera_blocks(len(snap_cases), 0x4D3D14)):
        patched = bytearray(block)
        struct.pack_into("<ff", patched, 0x1B8, abs(generator.uniform(0.1, 3.0)), abs(generator.uniform(0.1, 3.0)))
        memory = [(0x00A48A44, struct.pack("<I", snap)), (CAMERA, bytes(patched))]
        _, _, captured = run(
            read,
            0x004D3D14,
            86,
            registers={"ecx": CAMERA, "fpcw": 0x027F},
            memory=memory,
            capture=[(0x00A48A44, 4), (CAMERA, CAMERA_SIZE)],
        )
        vectors.append({
            "snapBefore": snap,
            "snapAfter": struct.unpack("<I", captured[0x00A48A44])[0],
            "input": bytes(patched).hex(),
            "output": bytes(captured[CAMERA]).hex(),
        })
    write("004D3D14.json", vectors)


def camera_snap_eye_smooth_target_vectors(read):
    """0x004D3C98: snaps eye, optionally copies desired target Y when mode flag 0x10 is clear, and smooths target."""
    generator = random.Random(0x4D3C98)
    MODE_ADDR = 0x20007000
    cases = [
        (0, False, 0),
        (0, True, 0),
        (1, True, 0x10),
        (2, True, 0x1F),
    ] + [(generator.randrange(13), True, generator.choice([0, 0x10, 0x8, 0x18])) for _ in range(16)]
    vectors = []
    for (mode_index, has_mode, mode_flags), block in zip(cases, camera_blocks(len(cases), 0x4D3C98)):
        patched = bytearray(block)
        struct.pack_into("<f", patched, 0x1BC, abs(generator.uniform(0.1, 3.0)))
        table = bytearray(13 * 4)
        mode_bytes = bytearray(0x74)
        if has_mode:
            struct.pack_into("<I", table, mode_index * 4, MODE_ADDR)
            struct.pack_into("<I", mode_bytes, 0x38, mode_flags)
        memory = [
            (0x00A489F4, bytes([mode_index])),
            (0x00A48A00, bytes(table)),
            (MODE_ADDR, bytes(mode_bytes)),
            (CAMERA, bytes(patched)),
        ]
        _, _, captured = run(
            read,
            0x004D3C98,
            122,
            registers={"ecx": CAMERA, "fpcw": 0x027F},
            memory=memory,
            capture=[(CAMERA, CAMERA_SIZE)],
        )
        vectors.append({
            "modeIndex": mode_index,
            "hasMode": has_mode,
            "modeFlags": mode_flags,
            "input": bytes(patched).hex(),
            "output": bytes(captured[CAMERA]).hex(),
        })
    write("004D3C98.json", vectors)


def camera_advance_flags_vectors(read):
    """0x004D3EF4: transitions override flags and clears the override request when inactive."""
    flag_cases = [
        (0x000, True),
        (0x002, True),
        (0x100, True),
        (0x080, True),
        (0x040, True),
        (0x8A2, True),
        (0x942, True),
        (0x1C0, True),
        (0x8FF, True),
        (0x000, False),
        (0x002, False),
        (0xFFF, True),
    ]
    vectors = []
    for (flags, has_camera), block in zip(flag_cases, camera_blocks(len(flag_cases), 0x4D3EF4)):
        cam_ptr = CAMERA if has_camera else 0
        memory = [
            (0x00A489FC, struct.pack("<I", flags)),
            (0x00A48A54, struct.pack("<I", cam_ptr)),
            (CAMERA, block),
        ]
        _, _, captured = run(
            read,
            0x004D3EF4,
            187,
            memory=memory,
            capture=[(0x00A489FC, 4), (CAMERA, CAMERA_SIZE)],
        )
        vectors.append({
            "flagsBefore": flags,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "hasCamera": has_camera,
            "input": block.hex(),
            "output": bytes(captured[CAMERA]).hex(),
        })
    write("004D3EF4.json", vectors)


def camera_orientation_axes_vectors(read):
    """0x004D3FB0: computes horizontal right and vertical up basis vectors from yaw and pitch angles."""
    generator = random.Random(0x4D3FB0)
    STACK_BUF = 0x20008000
    angle_pairs = [
        (0, 0),
        (0x4000, 0),
        (0, 0x4000),
        (0x8000, 0xC000),
        (0x1234, 0x5678),
    ] + [(generator.randrange(-0x10000, 0x10000), generator.randrange(-0x10000, 0x10000)) for _ in range(15)]
    vectors = []
    for (yaw, pitch), block in zip(angle_pairs, camera_blocks(len(angle_pairs), 0x4D3FB0)):
        patched = bytearray(block)
        struct.pack_into("<ii", patched, 0x190, pitch, yaw)
        memory = [
            (0x00AF0328, struct.pack("<I", STACK_BUF)),
            (0x00AF0380, struct.pack("<II", 128, 0)),
            (STACK_BUF, bytes(256)),
            (0x00A489DC, bytes(24)),
            (CAMERA, bytes(patched)),
        ]
        _, _, captured = run(
            read,
            0x004D3FB0,
            149,
            registers={"ecx": CAMERA},
            memory=memory,
            capture=[(0x00A489DC, 12), (0x00A489E8, 12)],
        )
        vectors.append({
            "yaw": yaw,
            "pitch": pitch,
            "right": vector3_bits(captured[0x00A489E8]),
            "up": vector3_bits(captured[0x00A489DC]),
        })
    write("004D3FB0.json", vectors)


def camera_snap_vectors(read):
    """0x004D3E90: the camera's current eye and target are set from the desired pair, and the eye is stored again."""
    vectors = []
    for block in camera_blocks(24, 0x4D3E90):
        _, _, captured = run(read, 0x004D3E90, 97, registers={"ecx": CAMERA}, memory=[(CAMERA, block)], capture=[(CAMERA, CAMERA_SIZE)])
        vectors.append({"input": block.hex(), "output": bytes(captured[CAMERA]).hex()})
    write("004D3E90.json", vectors)


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
    trigonometry_sincos_vectors(read)
    trigonometry_offset_vectors(read)
    trigonometry_circle_vectors(read)
    matrix_multiply_vectors(read)
    matrix_translate_vectors(read)
    matrix_transform_positions_vectors(read)
    matrix_scale_rows_vectors(read)
    matrix_rotate_y_vectors(read)
    matrix_rotate_x_vectors(read)
    matrix_transform_direction_vectors(read)
    rand_vectors(read)
    atol_vectors(read)
    atoi64_vectors(read)
    shortsort_vectors(read)
    qsort_vectors(read)
    camera_step_towards_vectors(read)
    camera_smooth_follow_vectors(read)
    camera_snap_eye_smooth_target_vectors(read)
    camera_advance_flags_vectors(read)
    camera_orientation_axes_vectors(read)
    camera_offset_vectors(read)
    camera_snap_vectors(read)
    player_slot_vectors(read)
    display_id_vectors(read)
    camera_apply_mode_vectors(read)
    camera_select_mode_vectors(read)
    camera_resolve_snapped_collision_vectors(read)
    camera_resolve_target_collision_vectors(read)
    camera_update_mode_selection_vectors(read)
    matrix_determinant_vectors(read)
    matrix_invert_vectors(read)
    transform_copy_current_vectors(read)
    transform_replace_current_vectors(read)
    transform_capture_inverse_vectors(read)
    camera_viewport_projection_vectors(read)
    camera_compute_angles_vectors(read)
    camera_target_client_id_vectors(read)
    camera_request_temporary_mode_vectors(read)
    camera_release_temporary_mode_vectors(read)
    camera_restore_default_target_vectors(read)
    camera_copy_override_vectors(read)
    camera_bind_target_vectors(read)
    camera_lock_target_vectors(read)
    camera_shake_preset_vectors(read)
    camera_shake_custom_vectors(read)
    camera_override_mode_vectors(read)
    camera_target_override_mode_vectors(read)
    camera_orbit_mode_vectors(read)
    camera_focus_look_mode_vectors(read)
    camera_pad_center_vectors(read)
    camera_pad_orbit_vectors(read)
    camera_pad_snap_behind_vectors(read)
    matrix_rotate_z_vectors(read)
    camera_step_angle_vectors(read)
    camera_step_scalar_vectors(read)
    camera_smooth_scalar_vectors(read)
    camera_set_follow_preset_vectors(read)
    camera_follow_relative_offsets_vectors(read)
    camera_follow_attach_target_vectors(read)
    camera_follow_cutscene_view_vectors(read)
    camera_follow_eye_from_yaw_vectors(read)
    camera_follow_target_vertical_aim_vectors(read)
    camera_follow_look_ahead_vectors(read)
    camera_follow_lock_target_vectors(read)
    camera_close_follow_lock_target_vectors(read)
    camera_close_follow_focus_vectors(read)
    camera_cutscene_post_update_vectors(read)
    camera_preview_eye_spherical_vectors(read)
    camera_preview_intro_vectors(read)
    camera_preview_zoom_vectors(read)
    camera_preview_idle_orbit_vectors(read)
    camera_preview_menu_focus_vectors(read)
    polyline_sample_vectors(read)
    binomial_coefficient_vectors(read)
    bezier_evaluate_vectors(read)
    camera_cutscene_apply_anchor_vectors(read)
    camera_cutscene_sync_status_vectors(read)
    camera_set_orientation_axes_vectors(read)
    camera_set_global_up_axis_vectors(read)
    camera_linear_pan_init_vectors(read)
    camera_linear_pan_step_vectors(read)
    camera_path_task_init_vectors(read)
    camera_path_task_step_vectors(read)
    transform_position_vectors(read)
    transform_multiply_matrix_vectors(read)
    camera_apply_inverse_view_vectors(read)
    camera_inverse_view_transform_point_vectors(read)
    transform_matrix_point_vectors(read)
    camera_orbit_align_vectors(read)
    hexahedron_bounds_vectors(read)
    sphere_bounds_vectors(read)
    bounds_intersect_vectors(read)
    hexahedron_intersects_sphere_vectors(read)
    rotate_axis_vectors(read)
    transform_load_identity_vectors(read)
    transform_translate_xyz_vectors(read)
    camera_viewport_apply_scale_vectors(read)
    camera_viewport_apply_vectors(read)
    camera_viewport_reset_vectors(read)
    camera_point_view_margin_vectors(read)
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


def player_slot_vectors(read):
    """0x0068D5A8: looks up a player object from the twelve-entry active player table."""
    slots = [0x60001000 + i * 0x100 if i % 3 != 2 else 0 for i in range(12)]
    table = struct.pack("<12I", *slots)
    vectors = []
    for index in [0, 1, 2, 5, 11, 12, -1, 0xFFFF, 0x10000]:
        _, result, _, _ = run_extended(
            read,
            0x0068D5A8,
            31,
            [index & 0xFFFFFFFF],
            memory=[(0x00A94254, table)],
        )
        slot_index = -1
        for i, ptr in enumerate(slots):
            if ptr != 0 and ptr == result:
                slot_index = i
                break
        vectors.append({
            "index": index,
            "slots": [ptr != 0 for ptr in slots],
            "expectedSlotIndex": slot_index,
        })
    write("0068D5A8.json", vectors)


def display_id_vectors(read):
    """0x007BB6D0: reads the local display / player slot index global at 0x00A9C4F4."""
    vectors = []
    for value in [0, 1, 2, 3, 11, 0xFFFF, 0x12345678]:
        _, result, _, _ = run_extended(
            read,
            0x007BB6D0,
            6,
            [],
            memory=[(0x00A9C4F4, struct.pack("<I", value))],
        )
        vectors.append({"displayId": value, "result": result})
    write("007BB6D0.json", vectors)


def camera_apply_mode_vectors(read):
    """0x004D1FF4: applies a mode object's eye, target, smoothing, and FOV to the active controller."""
    MODE_ADDR = 0x50001000
    MODE_SIZE = 108
    vectors = []
    cases = [
        (0x00000000, 0, (1.0, 2.0, 3.0), (4.0, 5.0, 6.0), 0x36C1, 0.25, 0.5, 0x3555),
        (0x00000004, 1, (-12.5, 3.25, 48.75), (2.5, -1.5, 12.25), 0x3555, 0.125, 0.75, 0x3555),
        (0x00000008, 2, (100.25, 20.5, -30.75), (90.5, 15.25, -20.125), 0x4000, 0.4, 0.289, 0x36C1),
        (0x0000000C, 3, (0.5, 1.5, -2.5), (-0.5, 2.5, 3.5), 0x2AAA, 0.0, 1.0, 0x2AAA),
        (0x00000001, 0, (10.0, 20.0, 30.0), (11.0, 22.0, 33.0), 0x36C1, 0.33, 0.66, 0x36C1),
    ]
    for flags_before, display_id, eye, target, fov, eye_smooth, target_smooth, ctrl_fov in cases:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<3f", cam, 0x178, 9.0, 8.0, 7.0)
        struct.pack_into("<3f", cam, 0x184, 6.0, 5.0, 4.0)
        struct.pack_into("<i", cam, 0x19C, ctrl_fov)
        mode = bytearray(MODE_SIZE)
        struct.pack_into("<I", mode, 0x00, 0x00AFC4E8)
        struct.pack_into("<3f", mode, 0x3C, *eye)
        struct.pack_into("<3f", mode, 0x48, *target)
        struct.pack_into("<i", mode, 0x54, fov)
        struct.pack_into("<2f", mode, 0x58, eye_smooth, target_smooth)
        mem = [
            (CAMERA, bytes(cam)),
            (MODE_ADDR, bytes(mode)),
            (0x00A48A54, struct.pack("<I", CAMERA)),
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00A9C4F4, struct.pack("<I", display_id)),
        ]
        _, _, captured = run(
            read,
            0x004D1FF4,
            353,
            [],
            registers={"ecx": MODE_ADDR},
            memory=mem,
            capture=[(CAMERA, CAMERA_SIZE), (0x00A489FC, 4)],
        )
        vectors.append({
            "flagsBefore": flags_before,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "displayId": display_id,
            "modeInput": bytes(mode).hex(),
            "cameraInput": bytes(cam).hex(),
            "cameraOutput": captured[CAMERA].hex(),
        })
    write("004D1FF4.json", vectors)


def camera_select_mode_vectors(read):
    """0x004D3AA0: updates the active camera mode index and invokes the mode activation slot."""
    MODE_BASE = 0x50001000
    vectors = []
    ptrs = [MODE_BASE + i * 128 if i != 7 else 0 for i in range(13)]
    table = struct.pack("<13I", *ptrs)
    base_mode = bytearray(108)
    struct.pack_into("<I", base_mode, 0x00, 0x00AFC4E8)
    for initial in [0, 3]:
        for target in [0, 1, 4, 7, 12]:
            mem = [
                (0x00A489F4, struct.pack("<B", initial)),
                (0x00A48A00, table),
            ]
            for ptr in ptrs:
                if ptr != 0:
                    mem.append((ptr, bytes(base_mode)))
            _, _, captured = run(
                read,
                0x004D3AA0,
                25,
                [],
                registers={"eax": target},
                memory=mem,
                capture=[(0x00A489F4, 1)],
            )
            vectors.append({
                "initialMode": initial,
                "targetMode": target,
                "hasMode": ptrs[target] != 0,
                "activeModeAfter": captured[0x00A489F4][0],
            })
    write("004D3AA0.json", vectors)


def _collision_memory(triangle_hit, tri_v0, tri_v1, tri_v2, normal):
    verts = struct.pack("<9f", *tri_v0, *tri_v1, *tri_v2)
    tri = struct.pack("<4H3f", 0, 1, 2, 0x901, *normal) + b"\x00" * 16
    hdr = struct.pack("<4I", 0, 0x50002300, 1, 0x50002400)
    node = struct.pack("<I4fI", 0x50002200, 0.0, 0.0, 0.0, 10000.0, 0x901)
    sec = b"\x00" * 28 + struct.pack("<2I", 0x50002100 if triangle_hit else 0, 0)
    return [
        (0x50002000, sec),
        (0x50002100, node),
        (0x50002200, hdr),
        (0x50002300, verts),
        (0x50002400, tri),
        (0x50003000, b"\x00" * 64),
        (0x00AAB3F0, struct.pack("<I", 0x50002000)),
        (0x00A9BC88, struct.pack("<I", 0x50003000)),
    ]


def camera_resolve_snapped_collision_vectors(read):
    """0x004D3BA8: sweeps from snapped eye to desired eye against collision geometry."""
    norm_diag = (0.0, 0.6, 0.8)
    planes = [
        ((-100.0, -100.0, 0.0), (100.0, -100.0, 0.0), (0.0, 100.0, 0.0), (0.0, 0.0, 1.0)),
        ((-200.0, -100.0, -200.0), (200.0, -100.0, 200.0), (-200.0, 200.0, 200.0), norm_diag),
    ]
    cases = [
        (False, 0, (1.5, 2.5, 3.5), (0.0, 0.0, 10.0), (0.0, 0.0, -10.0)),
        (True, 0, (1.5, 2.5, 3.5), (0.0, 0.0, 10.0), (0.0, 0.0, -10.0)),
        (True, 0, (5.0, 6.0, 7.0), (0.0, 0.0, 10.0), (0.0, 0.0, 20.0)),
        (True, 1, (2.0, 3.0, 4.0), (10.0, 25.0, 30.0), (-5.0, -10.0, -15.0)),
        (True, 0, (-1.0, -2.0, -3.0), (0.0, 0.0, 0.0), (0.0, 0.0, 0.0)),
    ]
    vectors = []
    for has_mesh, plane_idx, eye, snapped, desired in cases:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<3f", cam, 0x178, *eye)
        struct.pack_into("<3f", cam, 0x1C8, *snapped)
        struct.pack_into("<3f", cam, 0x1A0, *desired)
        mem = [(CAMERA, bytes(cam))] + _collision_memory(has_mesh, *planes[plane_idx])
        _, _, captured = run(
            read,
            0x004D3BA8,
            240,
            [0],
            registers={"ecx": CAMERA, "fpcw": 0x027F},
            memory=mem,
            capture=[(CAMERA, CAMERA_SIZE), (0x00A9BC84, 4), (0x50003000, 24)],
        )
        hit_flag = struct.unpack("<I", captured[0x00A9BC84])[0] != 0
        hit_vals = struct.unpack("<6f", captured[0x50003000])
        vectors.append({
            "hit": hit_flag,
            "hitPosition": [float_bits(c) for c in hit_vals[0:3]],
            "hitNormal": [float_bits(c) for c in hit_vals[3:6]],
            "input": bytes(cam).hex(),
            "output": captured[CAMERA].hex(),
        })
    write("004D3BA8.json", vectors)


def camera_resolve_target_collision_vectors(read):
    """0x004D3D6C: sweeps from target to eye when a primary collision hit occurred."""
    norm_diag = (0.0, 0.6, 0.8)
    planes = [
        ((-100.0, -100.0, 0.0), (100.0, -100.0, 0.0), (0.0, 100.0, 0.0), (0.0, 0.0, 1.0)),
        ((-200.0, -100.0, -200.0), (200.0, -100.0, 200.0), (-200.0, 200.0, 200.0), norm_diag),
    ]
    cases = [
        (0, False, 0, (1.0, 2.0, 3.0), (4.0, 5.0, 10.0), (0.0, 0.0, -10.0)),
        (1, False, 0, (1.0, 2.0, 3.0), (0.0, 0.0, 10.0), (0.0, 0.0, -10.0)),
        (1, True, 0, (1.0, 2.0, 3.0), (0.0, 0.0, 10.0), (0.0, 0.0, -10.0)),
        (1, True, 1, (7.0, 8.0, 9.0), (10.0, 25.0, 30.0), (-5.0, -10.0, -15.0)),
    ]
    vectors = []
    for has_hit, has_mesh, plane_idx, snapped, target, eye in cases:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<I", cam, 0x174, has_hit)
        struct.pack_into("<3f", cam, 0x178, *eye)
        struct.pack_into("<3f", cam, 0x184, *target)
        struct.pack_into("<3f", cam, 0x1C8, *snapped)
        mem = [
            (CAMERA, bytes(cam)),
            (0x00A9C4F4, struct.pack("<I", 0)),
        ] + _collision_memory(has_mesh, *planes[plane_idx])
        _, _, captured = run(
            read,
            0x004D3D6C,
            134,
            [0],
            registers={"ecx": CAMERA, "fpcw": 0x027F},
            memory=mem,
            capture=[(CAMERA, CAMERA_SIZE), (0x00A9BC84, 4), (0x50003000, 24)],
        )
        hit_flag = struct.unpack("<I", captured[0x00A9BC84])[0] != 0
        hit_vals = struct.unpack("<6f", captured[0x50003000])
        vectors.append({
            "hit": hit_flag,
            "hitPosition": [float_bits(c) for c in hit_vals[0:3]],
            "hitNormal": [float_bits(c) for c in hit_vals[3:6]],
            "input": bytes(cam).hex(),
            "output": captured[CAMERA].hex(),
        })
    write("004D3D6C.json", vectors)


def camera_update_mode_selection_vectors(read):
    """0x004D3974: evaluates mode transitions and rebinds the local player entity."""
    MODE0_ADDR = 0x50001000
    MODE3_ADDR = 0x50001100
    PLAYER_ADDR = 0x50004000
    MODE_SIZE = 108
    vectors = []

    def make_mode(eye, target):
        m = bytearray(MODE_SIZE)
        struct.pack_into("<I", m, 0x00, 0x00AFC4E8)
        struct.pack_into("<H", m, 0x20, 0xFFFF)
        struct.pack_into("<3f", m, 0x3C, *eye)
        struct.pack_into("<3f", m, 0x48, *target)
        return bytes(m)

    player_bytes = bytearray(32)
    struct.pack_into("<H", player_bytes, 0x1C, 7)

    mode0_bytes = make_mode((1.0, 2.0, 3.0), (4.0, 5.0, 6.0))
    mode3_bytes = make_mode((10.0, 20.0, 30.0), (40.0, 50.0, 60.0))

    cases = [
        (0x00000004, 1, 3, 2, 0, True),
        (0x00000002, 1, 3, 2, 0, True),
        (0x00000024, 1, 3, 0, 0, True),
        (0x00000084, 0, 3, 0, 5, False),
        (0x00000804, 0, 3, 0, 0, True),
    ]
    for flags_before, active_before, prev_before, mode_offset, display_id, has_player in cases:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<i", cam, 0x20, mode_offset)
        modes_table = [0] * 13
        modes_table[0] = MODE0_ADDR
        modes_table[3] = MODE3_ADDR
        slots = [0] * 12
        if has_player:
            slots[display_id] = PLAYER_ADDR
        mem = [
            (CAMERA, bytes(cam)),
            (MODE0_ADDR, mode0_bytes),
            (MODE3_ADDR, mode3_bytes),
            (PLAYER_ADDR, bytes(player_bytes)),
            (0x00A48A54, struct.pack("<I", CAMERA)),
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00A489F4, struct.pack("<B", active_before)),
            (0x00A489F5, struct.pack("<B", prev_before)),
            (0x00A48A00, struct.pack("<13I", *modes_table)),
            (0x00A9C4F4, struct.pack("<I", display_id)),
            (0x00A94254, struct.pack("<12I", *slots)),
        ]
        _, _, captured = run(
            read,
            0x004D3974,
            295,
            [],
            registers={"ecx": CAMERA},
            memory=mem,
            capture=[
                (CAMERA, CAMERA_SIZE),
                (MODE0_ADDR, MODE_SIZE),
                (MODE3_ADDR, MODE_SIZE),
                (0x00A489FC, 4),
                (0x00A489F4, 1),
            ],
        )
        m0_out = captured[MODE0_ADDR]
        m3_out = captured[MODE3_ADDR]
        vectors.append({
            "flagsBefore": flags_before,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "activeBefore": active_before,
            "activeAfter": captured[0x00A489F4][0],
            "previousMode": prev_before,
            "modeOffset": mode_offset,
            "displayId": display_id,
            "hasPlayer": has_player,
            "playerIndex": 7,
            "mode0Eye": [float_bits(1.0), float_bits(2.0), float_bits(3.0)],
            "mode0Target": [float_bits(4.0), float_bits(5.0), float_bits(6.0)],
            "expectedMode0ClientId": struct.unpack_from("<H", m0_out, 0x20)[0],
            "expectedMode0Attached": struct.unpack_from("<I", m0_out, 0x1C)[0] == PLAYER_ADDR,
            "expectedMode3ClientId": struct.unpack_from("<H", m3_out, 0x20)[0],
            "expectedMode3Attached": struct.unpack_from("<I", m3_out, 0x1C)[0] == PLAYER_ADDR,
            "expectedControllerAttached": struct.unpack_from("<I", captured[CAMERA], 0x90)[0] == PLAYER_ADDR,
            "cameraOutput": captured[CAMERA].hex(),
        })
    write("004D3974.json", vectors)


def _sample_matrices():
    return [
        [1, 0, 0, 0,  0, 1, 0, 0,  0, 0, 1, 0,  0, 0, 0, 1],
        [2, 0, 0, 0,  0, 3, 0, 0,  0, 0, 4, 0,  10, -20, 30, 1],
        [0, 0, 1, 0,  0, 1, 0, 0,  -1, 0, 0, 0,  1.5, -2.25, 3.75, 1],
        [1.25, -0.5, 0.25, 0.0,  0.5, 1.5, -0.75, 0.0,  -0.25, 0.75, 2.0, 0.0,  4.0, -5.0, 6.0, 1.0],
        [1, 2, 3, 4,  2, 4, 6, 8,  1, 0, 1, 0,  0, 1, 0, 1],
        [0, 0, 0, 0,  0, 0, 0, 0,  0, 0, 0, 0,  0, 0, 0, 0],
        [0.5, 1.25, -0.75, 0.125,  -1.0, 2.5, 0.5, -0.25,  0.75, -0.5, 1.75, 0.5,  3.25, -1.5, 2.75, 1.25],
    ]


def matrix_determinant_vectors(read):
    """0x0084A778: 4x4 matrix determinant."""
    vectors = []
    for mat in _sample_matrices():
        raw = struct.pack("<16f", *mat)
        val, _, _, _ = run_extended(
            read,
            0x0084A778,
            403,
            [],
            registers={"ecx": 0x50000000, "fpcw": 0x027F},
            memory=[(0x50000000, raw)],
        )
        det32 = struct.unpack("<f", struct.pack("<f", val))[0]
        vectors.append({
            "matrix": [float_bits(v) for v in mat],
            "result": float_bits(det32),
        })
    write("0084A778.json", vectors)


def matrix_invert_vectors(read):
    """0x0083C670: in-place 4x4 matrix inverse with 3.4e38 singular fill."""
    vectors = []
    for mat in _sample_matrices():
        raw = struct.pack("<16f", *mat)
        _, eax, _, captured = run_extended(
            read,
            0x0083C670,
            1779,
            [],
            registers={"ecx": 0x50000000, "fpcw": 0x027F},
            memory=[(0x50000000, raw)],
            capture=[(0x50000000, 64)],
        )
        out = struct.unpack("<16f", captured[0x50000000])
        vectors.append({
            "input": [float_bits(v) for v in mat],
            "succeeded": eax != 0,
            "output": [float_bits(v) for v in out],
        })
    write("0083C670.json", vectors)


def transform_copy_current_vectors(read):
    """0x00831650: copies top matrix from stack pointer global 0x00AF0328."""
    vectors = []
    for mat in _sample_matrices()[:4]:
        raw = struct.pack("<16f", *mat)
        mem = [
            (0x00AF0328, struct.pack("<I", 0x50000000)),
            (0x50000000, raw),
            (0x50001000, b"\x00" * 64),
        ]
        _, _, captured = run(
            read,
            0x00831650,
            100,
            [],
            registers={"ecx": 0x50001000},
            memory=mem,
            capture=[(0x50001000, 64)],
        )
        out = struct.unpack("<16f", captured[0x50001000])
        vectors.append({"matrix": [float_bits(v) for v in mat], "result": [float_bits(v) for v in out]})
    write("00831650.json", vectors)


def transform_replace_current_vectors(read):
    """0x0083B410: replaces top matrix at 0x00AF0328."""
    vectors = []
    for mat in _sample_matrices()[:4]:
        raw = struct.pack("<16f", *mat)
        mem = [
            (0x00AF0328, struct.pack("<I", 0x50000000)),
            (0x50000000, b"\x00" * 64),
            (0x50001000, raw),
        ]
        _, _, captured = run(
            read,
            0x0083B410,
            107,
            [],
            registers={"ecx": 0, "edx": 0x50001000},
            memory=mem,
            capture=[(0x50000000, 64)],
        )
        out = struct.unpack("<16f", captured[0x50000000])
        vectors.append({"matrix": [float_bits(v) for v in mat], "result": [float_bits(v) for v in out]})
    write("0083B410.json", vectors)


def transform_capture_inverse_vectors(read):
    """0x00782984: push-copy, invert, copy out, pop on transformation stack."""
    vectors = []
    for mat in _sample_matrices():
        raw = struct.pack("<16f", *mat)
        mem = [
            (0x00AF0328, struct.pack("<I", 0x50000000)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
            (0x50000000, raw + b"\x00" * 64),
            (0x50001000, b"\x00" * 64),
        ]
        _, _, captured = run(
            read,
            0x00782984,
            27,
            [0, 0x50001000],
            registers={"fpcw": 0x027F},
            memory=mem,
            capture=[(0x50001000, 64), (0x50000000, 64), (0x00AF0384, 4)],
        )
        inv_out = struct.unpack("<16f", captured[0x50001000])
        top_out = struct.unpack("<16f", captured[0x50000000])
        vectors.append({
            "input": [float_bits(v) for v in mat],
            "inverse": [float_bits(v) for v in inv_out],
            "topAfter": [float_bits(v) for v in top_out],
            "depthAfter": struct.unpack("<I", captured[0x00AF0384])[0],
        })
    write("00782984.json", vectors)


def camera_viewport_projection_vectors(read):
    """0x00836100: multiplies fixed viewport scale/offset matrix with projection matrix at 0x00ACC040."""
    vectors = []
    for mat in _sample_matrices()[:4]:
        raw = struct.pack("<16f", *mat)
        mem = [
            (0x00ACC040, raw),
            (0x00ACCA40, b"\x00" * 128),
        ]
        _, _, captured = run(
            read,
            0x00836100,
            180,
            [],
            memory=mem,
            capture=[(0x00ACCA40, 64)],
        )
        out = struct.unpack("<16f", captured[0x00ACCA40])
        vectors.append({
            "projection": [float_bits(v) for v in mat],
            "result": [float_bits(v) for v in out],
        })
    write("00836100.json", vectors)


def camera_compute_angles_vectors(read):
    """0x004D6448: converts a forward vector to 16-bit fixed-point pitch and yaw angles."""
    vectors = []
    dirs = [
        (0.0, 0.0, -1.0),
        (0.0, 0.0, 1.0),
        (1.0, 0.0, 0.0),
        (-1.0, 0.0, 0.0),
        (0.0, 1.0, 0.0),
        (0.0, -1.0, 0.0),
        (1.0, 1.0, -1.0),
        (-2.5, 0.75, 4.25),
        (0.125, -3.5, -0.25),
    ]
    for d in dirs:
        _, _, captured = run(
            read,
            0x004D6448,
            143,
            [0x50000000, 0x50001000, 0x50001004],
            registers={"fpcw": 0x027F},
            memory=[(0x50000000, struct.pack("<3f", *d)), (0x50001000, b"\x00" * 8)],
            capture=[(0x50001000, 8)],
        )
        pitch, yaw = struct.unpack("<2i", captured[0x50001000])
        vectors.append({"direction": [float_bits(v) for v in d], "pitch": pitch, "yaw": yaw})
    write("004D6448.json", vectors)


def camera_target_client_id_vectors(read):
    """0x004D30D4: reads attached entity slot id or returns 0xFFFF."""
    vectors = []
    player = bytearray(32)
    struct.pack_into("<H", player, 0x1C, 9)
    for has_cam, has_target in [(False, False), (True, False), (True, True)]:
        cam = bytearray(CAMERA_SIZE)
        if has_target:
            struct.pack_into("<I", cam, 0x90, 0x50004000)
        mem = [
            (0x00A48A54, struct.pack("<I", CAMERA if has_cam else 0)),
            (CAMERA, bytes(cam)),
            (0x50004000, bytes(player)),
        ]
        _, eax, _, _ = run_extended(read, 0x004D30D4, 30, [], memory=mem)
        vectors.append({
            "hasCamera": has_cam,
            "hasTarget": has_target,
            "playerIndex": 9,
            "result": eax,
        })
    write("004D30D4.json", vectors)


def camera_request_temporary_mode_vectors(read):
    """0x004D3180: enters a temporary camera mode when bit 3 is clear."""
    MODE_BASE = 0x50001000
    vectors = []
    base_mode = bytearray(108)
    struct.pack_into("<I", base_mode, 0x00, 0x00AFC4E8)
    for flags_before, active_before, prev_before, requested in [
        (0x0, 0, 0, 4),
        (0x8, 2, 1, 4),
        (0x4, 5, 1, 6),
        (0x4, 9, 2, 3),
        (0x0, 4, 1, 4),
    ]:
        table = struct.pack("<13I", *([MODE_BASE + i * 128 for i in range(13)]))
        mem = [
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00A489F4, struct.pack("<B", active_before)),
            (0x00A489F5, struct.pack("<B", prev_before)),
            (0x00A48A00, table),
        ]
        for i in range(13):
            mem.append((MODE_BASE + i * 128, bytes(base_mode)))
        _, eax, _, captured = run_extended(
            read,
            0x004D3180,
            92,
            [requested],
            memory=mem,
            capture=[(0x00A489FC, 4), (0x00A489F4, 1), (0x00A489F5, 1)],
        )
        vectors.append({
            "flagsBefore": flags_before,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "activeBefore": active_before,
            "activeAfter": captured[0x00A489F4][0],
            "prevBefore": prev_before,
            "prevAfter": captured[0x00A489F5][0],
            "requested": requested,
            "result": eax != 0,
        })
    write("004D3180.json", vectors)


def camera_release_temporary_mode_vectors(read):
    """0x004D31DC: clears temporary bit 0x08 and sets restore bit 0x20."""
    vectors = []
    for flags_before in [0x0, 0x8, 0x28, 0x808, 0x4]:
        _, _, captured = run(
            read,
            0x004D31DC,
            23,
            [],
            memory=[(0x00A489FC, struct.pack("<I", flags_before))],
            capture=[(0x00A489FC, 4)],
        )
        vectors.append({
            "flagsBefore": flags_before,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
        })
    write("004D31DC.json", vectors)


def camera_restore_default_target_vectors(read):
    """0x004D3250: clears lock flag bit 2, restores mode 5 FOV, and rebinds player."""
    MODE0 = 0x50001000
    MODE5 = 0x50001100
    PLAYER = 0x50004000
    vectors = []

    def mk_mode(eye, target, fov=0x36C1):
        m = bytearray(108)
        struct.pack_into("<I", m, 0x00, 0x00AFC4E8)
        struct.pack_into("<H", m, 0x20, 0xFFFF)
        struct.pack_into("<3f", m, 0x3C, *eye)
        struct.pack_into("<3f", m, 0x48, *target)
        struct.pack_into("<i", m, 0x54, fov)
        return bytes(m)

    player = bytearray(32)
    struct.pack_into("<H", player, 0x1C, 5)
    for flags_before, active, stored_fov, has_player in [
        (0x4, 5, 0x2800, True),
        (0x4, 0, 0x2800, True),
        (0x0, 5, 0x2800, False),
    ]:
        cam = bytearray(CAMERA_SIZE)
        table = [0] * 13
        table[0] = MODE0
        table[5] = MODE5
        slots = [0] * 12
        if has_player:
            slots[0] = PLAYER
        mem = [
            (CAMERA, bytes(cam)),
            (MODE0, mk_mode((1.0, 2.0, 3.0), (4.0, 5.0, 6.0))),
            (MODE5, mk_mode((7.0, 8.0, 9.0), (1.0, 1.0, 1.0), 0x36C1)),
            (PLAYER, bytes(player)),
            (0x00A48A54, struct.pack("<I", CAMERA)),
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00A489F4, struct.pack("<B", active)),
            (0x00A48A00, struct.pack("<13I", *table)),
            (0x00A48B24, struct.pack("<i", stored_fov)),
            (0x00A9C4F4, struct.pack("<I", 0)),
            (0x00A94254, struct.pack("<12I", *slots)),
        ]
        _, _, captured = run(
            read,
            0x004D3250,
            292,
            [],
            memory=mem,
            capture=[(CAMERA, CAMERA_SIZE), (MODE0, 108), (MODE5, 108), (0x00A489FC, 4)],
        )
        m5_out = captured[MODE5]
        m0_out = captured[MODE0]
        vectors.append({
            "flagsBefore": flags_before,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "activeMode": active,
            "storedFov": stored_fov,
            "hasPlayer": has_player,
            "playerIndex": 5,
            "mode0Eye": [float_bits(1.0), float_bits(2.0), float_bits(3.0)],
            "mode0Target": [float_bits(4.0), float_bits(5.0), float_bits(6.0)],
            "mode5FovAfter": struct.unpack_from("<i", m5_out, 0x54)[0],
            "mode0ClientIdAfter": struct.unpack_from("<H", m0_out, 0x20)[0],
            "mode5ClientIdAfter": struct.unpack_from("<H", m5_out, 0x20)[0],
            "cameraOutput": captured[CAMERA].hex(),
        })
    write("004D3250.json", vectors)


def camera_copy_override_vectors(read):
    """0x004D3374: copies eye, target, and FOV from an override request into active mode."""
    MODE = 0x50001000
    REQ = 0x50002000
    vectors = []
    for flags in [0x0, 0x4, 0x8]:
        req = bytearray(68)
        struct.pack_into("<i", req, 0x14, 0x3000)
        struct.pack_into("<3f", req, 0x1C, 11.0, 22.0, 33.0)
        struct.pack_into("<3f", req, 0x28, 44.0, 55.0, 66.0)
        mode = bytearray(108)
        struct.pack_into("<I", mode, 0x00, 0x00AFC4E8)
        struct.pack_into("<3f", mode, 0x3C, 1.0, 2.0, 3.0)
        struct.pack_into("<3f", mode, 0x48, 4.0, 5.0, 6.0)
        struct.pack_into("<i", mode, 0x54, 0x36C1)
        table = struct.pack("<13I", MODE, *([0] * 12))
        _, _, captured = run(
            read,
            0x004D3374,
            74,
            [REQ],
            memory=[
                (MODE, bytes(mode)),
                (REQ, bytes(req)),
                (0x00A489FC, struct.pack("<I", flags)),
                (0x00A489F4, struct.pack("<B", 0)),
                (0x00A48A00, table),
            ],
            capture=[(MODE, 108)],
        )
        m_out = captured[MODE]
        vectors.append({
            "flags": flags,
            "modeEyeAfter": [float_bits(v) for v in struct.unpack_from("<3f", m_out, 0x3C)],
            "modeTargetAfter": [float_bits(v) for v in struct.unpack_from("<3f", m_out, 0x48)],
            "modeFovAfter": struct.unpack_from("<i", m_out, 0x54)[0],
        })
    write("004D3374.json", vectors)


def camera_bind_target_vectors(read):
    """0x004D2FB4: binds target entity to active mode and mode 0."""
    MODE0 = 0x50001000
    MODE2 = 0x50001100
    PLAYER = 0x50004000
    vectors = []
    player = bytearray(32)
    struct.pack_into("<H", player, 0x1C, 4)

    def mk_mode(eye, target):
        m = bytearray(108)
        struct.pack_into("<I", m, 0x00, 0x00AFC4E8)
        struct.pack_into("<H", m, 0x20, 0xFFFF)
        struct.pack_into("<3f", m, 0x3C, *eye)
        struct.pack_into("<3f", m, 0x48, *target)
        return bytes(m)

    for has_player in [False, True]:
        cam = bytearray(CAMERA_SIZE)
        table = [0] * 13
        table[0] = MODE0
        table[2] = MODE2
        mem = [
            (CAMERA, bytes(cam)),
            (MODE0, mk_mode((2.0, 4.0, 6.0), (8.0, 10.0, 12.0))),
            (MODE2, mk_mode((0.0, 0.0, 0.0), (0.0, 0.0, 1.0))),
            (PLAYER, bytes(player)),
            (0x00A48A54, struct.pack("<I", CAMERA)),
            (0x00A489FC, struct.pack("<I", 0x4)),
            (0x00A489F4, struct.pack("<B", 2)),
            (0x00A48A00, struct.pack("<13I", *table)),
        ]
        _, _, captured = run(
            read,
            0x004D2FB4,
            200,
            [PLAYER if has_player else 0],
            memory=mem,
            capture=[(CAMERA, CAMERA_SIZE), (MODE0, 108), (MODE2, 108), (0x00A489FC, 4)],
        )
        vectors.append({
            "hasPlayer": has_player,
            "playerIndex": 4,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "mode0ClientIdAfter": struct.unpack_from("<H", captured[MODE0], 0x20)[0],
            "mode2ClientIdAfter": struct.unpack_from("<H", captured[MODE2], 0x20)[0],
            "controllerAttached": struct.unpack_from("<I", captured[CAMERA], 0x90)[0] == PLAYER,
            "cameraOutput": captured[CAMERA].hex(),
        })
    write("004D2FB4.json", vectors)


def camera_lock_target_vectors(read):
    """0x004D307C: attaches target with extra parameter to active mode."""
    MODE2 = 0x50001100
    PLAYER = 0x50004000
    vectors = []
    player = bytearray(32)
    struct.pack_into("<H", player, 0x1C, 6)
    for has_player in [False, True]:
        mode = bytearray(108)
        struct.pack_into("<I", mode, 0x00, 0x00AFC4E8)
        struct.pack_into("<H", mode, 0x20, 0xFFFF)
        table = [0] * 13
        table[2] = MODE2
        _, _, captured = run(
            read,
            0x004D307C,
            78,
            [PLAYER if has_player else 0, 42],
            memory=[
                (CAMERA, bytes(CAMERA_SIZE)),
                (MODE2, bytes(mode)),
                (PLAYER, bytes(player)),
                (0x00A48A54, struct.pack("<I", CAMERA)),
                (0x00A489FC, struct.pack("<I", 0)),
                (0x00A489F4, struct.pack("<B", 2)),
                (0x00A48A00, struct.pack("<13I", *table)),
            ],
            capture=[(CAMERA, CAMERA_SIZE), (MODE2, 108), (0x00A489FC, 4)],
        )
        vectors.append({
            "hasPlayer": has_player,
            "playerIndex": 6,
            "flagsAfter": struct.unpack("<I", captured[0x00A489FC])[0],
            "modeClientIdAfter": struct.unpack_from("<H", captured[MODE2], 0x20)[0],
            "controllerAttached": struct.unpack_from("<I", captured[CAMERA], 0x90)[0] == PLAYER,
        })
    write("004D307C.json", vectors)


def camera_shake_preset_vectors(read):
    """0x004D4288: sets preset shake amplitude and countdown."""
    vectors = []
    for preset in [0, 1, 2, 9]:
        _, _, captured = run(
            read,
            0x004D4288,
            132,
            [preset],
            memory=[
                (CAMERA, bytes(CAMERA_SIZE)),
                (0x00A48A54, struct.pack("<I", CAMERA)),
                (0x00A96980, struct.pack("<B", 0) + b"\x00" * 511),
            ],
            capture=[(CAMERA, CAMERA_SIZE)],
        )
        out = captured[CAMERA]
        vectors.append({
            "preset": preset,
            "countdown": struct.unpack_from("<I", out, 0x1C0)[0],
            "amplitude": float_bits(struct.unpack_from("<f", out, 0x1C4)[0]),
        })
    write("004D4288.json", vectors)


def camera_shake_custom_vectors(read):
    """0x004D430C: sets custom shake amplitude and countdown."""
    vectors = []
    for amp, dur in [(0.125, 15), (0.5, 45), (0.0, 0)]:
        _, _, captured = run(
            read,
            0x004D430C,
            45,
            [float_bits(amp), dur],
            memory=[
                (CAMERA, bytes(CAMERA_SIZE)),
                (0x00A48A54, struct.pack("<I", CAMERA)),
                (0x00A96980, struct.pack("<B", 0) + b"\x00" * 511),
            ],
            capture=[(CAMERA, CAMERA_SIZE)],
        )
        out = captured[CAMERA]
        vectors.append({
            "amplitudeInput": float_bits(amp),
            "durationInput": dur,
            "countdown": struct.unpack_from("<I", out, 0x1C0)[0],
            "amplitudeOutput": float_bits(struct.unpack_from("<f", out, 0x1C4)[0]),
        })
    write("004D430C.json", vectors)


def camera_override_mode_vectors(read):
    """0x004D59A0: copies scripted override request parameters into mode 9."""
    MODE = 0x50001000
    vectors = []
    for fov_deg, smooth, eye, target in [
        (45, 0.25, (1.0, 2.0, 3.0), (4.0, 5.0, 6.0)),
        (60, 0.75, (-10.5, 20.25, 30.5), (0.5, 1.5, -2.5)),
        (90, 1.0, (100.0, 50.0, -25.0), (10.0, 2.0, 3.0)),
    ]:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<f", cam, 0x30, smooth)
        struct.pack_into("<i", cam, 0x34, fov_deg)
        struct.pack_into("<3f", cam, 0x3C, *eye)
        struct.pack_into("<3f", cam, 0x48, *target)
        mode = bytearray(108)
        struct.pack_into("<I", mode, 0x00, 0x00AFC7E8)
        _, _, captured = run(
            read,
            0x004D59A0,
            113,
            [0],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[(CAMERA, bytes(cam)), (MODE, bytes(mode)), (0x00A48A54, struct.pack("<I", CAMERA))],
            capture=[(MODE, 108)],
        )
        out = captured[MODE]
        vectors.append({
            "fovDegrees": fov_deg,
            "smoothing": float_bits(smooth),
            "eyeInput": [float_bits(v) for v in eye],
            "targetInput": [float_bits(v) for v in target],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "targetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
            "fovOutput": struct.unpack_from("<i", out, 0x54)[0],
            "eyeSmoothingOutput": float_bits(struct.unpack_from("<f", out, 0x58)[0]),
        })
    write("004D59A0.json", vectors)


def camera_target_override_mode_vectors(read):
    """0x004D6E30: aims mode 10 at local player 0 with height offset 19.8 while using override eye."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    vectors = []
    for has_player, ppos, smooth, eye in [
        (True, (10.0, 5.0, 20.0), 0.4, (1.0, 2.0, 3.0)),
        (True, (-15.5, 0.25, 42.75), 0.125, (-5.0, 30.0, 10.0)),
        (False, (0.0, 0.0, 0.0), 0.5, (1.0, 2.0, 3.0)),
    ]:
        cam = bytearray(CAMERA_SIZE)
        struct.pack_into("<f", cam, 0x30, smooth)
        struct.pack_into("<3f", cam, 0x3C, *eye)
        mode = bytearray(108)
        struct.pack_into("<I", mode, 0x00, 0x00AFC970)
        struct.pack_into("<3f", mode, 0x48, 0.0, 0.0, 1.0)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        slots = [PLAYER if has_player else 0] + [0] * 11
        _, _, captured = run(
            read,
            0x004D6E30,
            86,
            [0],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (CAMERA, bytes(cam)),
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (0x00A48A54, struct.pack("<I", CAMERA)),
                (0x00A94254, struct.pack("<12I", *slots)),
            ],
            capture=[(MODE, 108)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "playerPosition": [float_bits(v) for v in ppos],
            "smoothing": float_bits(smooth),
            "eyeInput": [float_bits(v) for v in eye],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "targetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
            "eyeSmoothingOutput": float_bits(struct.unpack_from("<f", out, 0x58)[0]),
        })
    write("004D6E30.json", vectors)


def camera_orbit_mode_vectors(read):
    """0x004D61F8: spherical orbit update for mode 4."""
    MODE = 0x50001000
    vectors = []
    for buttons, dyaw, dpitch, dist, yaw, pitch, target in [
        (0x00, 0, 0, 10.0, 0, 0, (0.0, 0.0, 0.0)),
        (0x20, 100, -50, 10.0, 0x2000, 0x1000, (5.0, 10.0, -3.0)),
        (0x80, -250, 120, 12.0, 0x4000, -0x800, (1.5, 2.5, 3.5)),
        (0x80, 0, 0, 10.5, 0, 0, (0.0, 0.0, 0.0)),
        (0x20, 0, 0, 299.0, 0x8000, 0x4000, (-2.0, 4.0, -6.0)),
    ]:
        mode = bytearray(112)
        struct.pack_into("<I", mode, 0x00, 0x00AFC880)
        struct.pack_into("<i", mode, 0x2C, pitch)
        struct.pack_into("<i", mode, 0x30, yaw)
        struct.pack_into("<3f", mode, 0x48, *target)
        struct.pack_into("<f", mode, 0x6C, dist)
        _, _, captured = run(
            read,
            0x004D61F8,
            193,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (0x00AAE7AC, struct.pack("<I", buttons)),
                (0x00AAE7C0, struct.pack("<2h", dyaw, dpitch)),
            ],
            capture=[(MODE, 112)],
        )
        out = captured[MODE]
        vectors.append({
            "zoomOut": (buttons & 0x20) != 0,
            "zoomIn": (buttons & 0x80) != 0,
            "deltaYaw": dyaw,
            "deltaPitch": dpitch,
            "distanceInput": float_bits(dist),
            "yawInput": yaw,
            "pitchInput": pitch,
            "target": [float_bits(v) for v in target],
            "distanceOutput": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "yawOutput": struct.unpack_from("<i", out, 0x30)[0],
            "pitchOutput": struct.unpack_from("<i", out, 0x2C)[0],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
        })
    write("004D61F8.json", vectors)


def camera_focus_look_mode_vectors(read):
    """0x004D160C: updates mode 11 eye behind target player looking toward focus position."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    FOCUS = 0x50004100
    vectors = []
    for has_player, has_focus, ppos, focus in [
        (True, True, (10.0, 2.0, 10.0), (10.0, 5.0, 40.0)),
        (True, True, (-5.0, 1.5, 25.0), (15.0, 8.0, 5.0)),
        (True, True, (3.0, 4.0, 5.0), (3.0, 10.0, 5.0)),
        (True, False, (3.0, 4.0, 5.0), (0.0, 0.0, 0.0)),
        (False, True, (0.0, 0.0, 0.0), (1.0, 2.0, 3.0)),
    ]:
        mode = bytearray(108)
        struct.pack_into("<I", mode, 0x00, 0x00AFC370)
        struct.pack_into("<3f", mode, 0x48, 0.0, 0.0, 1.0)
        if has_player:
            struct.pack_into("<I", mode, 0x1C, PLAYER)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        _, _, captured = run(
            read,
            0x004D160C,
            161,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (FOCUS, struct.pack("<3f", *focus)),
                (0x00A447C4, struct.pack("<I", FOCUS if has_focus else 0)),
            ],
            capture=[(MODE, 108)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "hasFocus": has_focus,
            "playerPosition": [float_bits(v) for v in ppos],
            "focusPosition": [float_bits(v) for v in focus],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "targetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
            "eyeSmoothingOutput": float_bits(struct.unpack_from("<f", out, 0x58)[0]),
        })
    write("004D160C.json", vectors)


def camera_pad_center_vectors(read):
    """0x004D1C50: centers mode 7 target above local player 0 by 10 units."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    vectors = []
    for has_player, ppos in [
        (True, (12.5, -3.25, 48.0)),
        (False, (0.0, 0.0, 0.0)),
    ]:
        mode = bytearray(116)
        struct.pack_into("<I", mode, 0x00, 0x00AFC498)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        slots = [PLAYER if has_player else 0] + [0] * 11
        _, _, captured = run(
            read,
            0x004D1C50,
            43,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (0x00A94254, struct.pack("<12I", *slots)),
            ],
            capture=[(MODE, 116)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "playerPosition": [float_bits(v) for v in ppos],
            "targetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
        })
    write("004D1C50.json", vectors)


def camera_pad_orbit_vectors(read):
    """0x004D1C7C: steps mode 7 spherical pad orbit around target."""
    MODE = 0x50001000
    PAD = 0x50004200
    vectors = []
    for buttons, dyaw, dpitch, dist, yaw, pitch, target in [
        (0x00, 100, -50, 25.0, 0x1000, 0x400, (1.0, 2.0, 3.0)),
        (0x02, 200, -80, 25.0, 0x1000, 0x400, (1.0, 2.0, 3.0)),
        (0x22, 0, 0, 999.0, 0x4000, -0x200, (0.0, 10.0, 0.0)),
        (0x82, 0, 0, 16.0, -0x2000, 0x600, (-5.0, 0.0, 5.0)),
    ]:
        mode = bytearray(116)
        struct.pack_into("<I", mode, 0x00, 0x00AFC498)
        struct.pack_into("<i", mode, 0x2C, pitch)
        struct.pack_into("<i", mode, 0x30, yaw)
        struct.pack_into("<3f", mode, 0x48, *target)
        struct.pack_into("<I", mode, 0x6C, PAD)
        struct.pack_into("<f", mode, 0x70, dist)
        pad = bytearray(80)
        struct.pack_into("<I", pad, 0x00, buttons)
        struct.pack_into("<2h", pad, 0x14, dyaw, dpitch)
        _, _, captured = run(
            read,
            0x004D1C7C,
            203,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[(MODE, bytes(mode)), (PAD, bytes(pad))],
            capture=[(MODE, 116)],
        )
        out = captured[MODE]
        vectors.append({
            "buttons": buttons,
            "deltaYaw": dyaw,
            "deltaPitch": dpitch,
            "distanceInput": float_bits(dist),
            "yawInput": yaw,
            "pitchInput": pitch,
            "target": [float_bits(v) for v in target],
            "distanceOutput": float_bits(struct.unpack_from("<f", out, 0x70)[0]),
            "yawOutput": struct.unpack_from("<i", out, 0x30)[0],
            "pitchOutput": struct.unpack_from("<i", out, 0x2C)[0],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
        })
    write("004D1C7C.json", vectors)


def camera_pad_snap_behind_vectors(read):
    """0x004D1E50: aligns mode 7 eye behind local player 0 using transform stack rotation."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    STACK = 0x50004400
    vectors = []
    for has_player, heading, dist, target in [
        (True, 0, 25.0, (1.0, 12.0, 3.0)),
        (True, 0x4000, 25.0, (10.0, 5.0, -8.0)),
        (True, 0xB300, 40.0, (-4.0, 0.0, 7.0)),
        (False, 0, 25.0, (1.0, 2.0, 3.0)),
    ]:
        mode = bytearray(116)
        struct.pack_into("<I", mode, 0x00, 0x00AFC498)
        struct.pack_into("<3f", mode, 0x48, *target)
        struct.pack_into("<f", mode, 0x70, dist)
        player = bytearray(128)
        struct.pack_into("<i", player, 0x60, heading)
        slots = [PLAYER if has_player else 0] + [0] * 11
        mem = [
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (STACK, b"\x00" * 256),
            (0x00A94254, struct.pack("<12I", *slots)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ]
        _, _, captured = run(
            read,
            0x004D1E50,
            127,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=mem,
            capture=[(MODE, 116)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "heading": heading,
            "distance": float_bits(dist),
            "target": [float_bits(v) for v in target],
            "yawOutput": struct.unpack_from("<i", out, 0x30)[0],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
        })
    write("004D1E50.json", vectors)


def matrix_rotate_z_vectors(read):
    """0x00830C04: applies a fixed-point Z rotation to a 4x4 matrix."""
    MATRIX = 0x50001000
    vectors = []
    rng = random.Random(0x830C04)
    base_matrices = [
        [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1],
        [float(i + 1) for i in range(16)],
    ]
    for _ in range(4):
        base_matrices.append([round(rng.uniform(-10.0, 10.0), 3) for _ in range(16)])
    angles = [0, 0x1000, 0x4000, 0x8000, 0xC000, -0x2345]
    for mat in base_matrices:
        for angle in angles:
            if len(vectors) >= 15:
                break
            raw = struct.pack("<16f", *mat)
            _, _, captured = run(
                read,
                0x00830C04,
                0,
                [],
                registers={"ecx": MATRIX, "edx": angle & 0xFFFFFFFF, "fpcw": 0x027F},
                memory=[(MATRIX, raw)],
                capture=[(MATRIX, 64)],
            )
            out = struct.unpack("<16f", captured[MATRIX])
            vectors.append({
                "matrix": [float_bits(v) for v in mat],
                "angle": angle & 0xFFFFFFFF,
                "result": [float_bits(v) for v in out],
            })
    write("00830C04.json", vectors)


def camera_step_angle_vectors(read):
    """0x004D6370: steps an integer yaw angle by 127 * speed unless inside threshold."""
    vectors = []
    for current, target, speed in [
        (0, 0x4000, 5),
        (0, 200, 2),
        (0x1000, 0x1080, 1),
        (0xFFFF, 0x0100, 1),
        (0x8000, 0x7E00, 2),
        (0x4000, 0x3FFF, 1),
        (-0x1000, 0x2000, 5),
        (0x1000, 0x1000 + 364 * 127, 364),
    ]:
        res, _, _ = run(read, 0x004D6370, 0, [current & 0xFFFFFFFF, target & 0xFFFFFFFF, speed])
        vectors.append({
            "current": current,
            "target": target,
            "speed": speed,
            "result": ctypes.c_int32(res).value,
        })
    write("004D6370.json", vectors)


def camera_step_scalar_vectors(read):
    """0x004D6540: moves current scalar toward target by at most max_delta."""
    vectors = []
    for current, target, max_delta in [
        (0.0, 10.0, 2.5),
        (10.0, 0.0, 2.5),
        (5.0, 5.0, 1.0),
        (5.0, 5.5, 1.0),
        (5.5, 5.0, 1.0),
        (-3.0, 0.0, 0.5),
        (0.0, -3.0, 0.672),
    ]:
        SRC = 0x50001000
        DST = 0x50001004
        OUT = 0x50001008
        m, e = math.frexp(max_delta)
        mant = round(m * (1 << 64))
        ext = mant.to_bytes(8, "little") + (16382 + e).to_bytes(2, "little")
        _, _, captured = run(
            read,
            0x004D6540,
            0,
            [],
            registers={"eax": SRC, "edx": DST, "ecx": OUT, "st0": ext, "fpcw": 0x027F},
            memory=[
                (SRC, struct.pack("<f", current)),
                (DST, struct.pack("<f", target)),
                (OUT, struct.pack("<f", 0.0)),
            ],
            capture=[(OUT, 4)],
        )
        out = struct.unpack("<f", captured[OUT])[0]
        vectors.append({
            "current": float_bits(current),
            "target": float_bits(target),
            "maxDelta": float_bits(max_delta),
            "result": float_bits(out),
        })
    write("004D6540.json", vectors)


def camera_smooth_scalar_vectors(read):
    """0x004D64D8: smoothly approaches target scalar and reports completion."""
    SRC = 0x50001000
    DST = 0x50001004
    vectors = []
    for current, target, rate in [
        (0.0, -3.0, 1.4),
        (-2.5, -3.0, 1.4),
        (-3.0, 0.0, 1.4),
        (10.0, 10.0, 1.4),
        (1.0, 2.0, 6.25),
        (-1.0, 1.0, 0.5),
    ]:
        res, _, captured = run(
            read,
            0x004D64D8,
            0,
            [SRC, DST, u32_from_float(rate)],
            registers={"fpcw": 0x027F},
            memory=[(SRC, struct.pack("<f", current)), (DST, struct.pack("<f", target))],
            capture=[(SRC, 4)],
        )
        out = struct.unpack("<f", captured[SRC])[0]
        vectors.append({
            "currentInput": float_bits(current),
            "target": float_bits(target),
            "rate": float_bits(rate),
            "reached": res != 0,
            "currentOutput": float_bits(out),
        })
    write("004D64D8.json", vectors)


def u32_from_float(value):
    return struct.unpack("<I", struct.pack("<f", value))[0]


def camera_set_follow_preset_vectors(read):
    """0x004D83CC: clamps follow preset index to 0..4 and stores it in 0x009ACEDC."""
    vectors = []
    for index in [-5, -1, 0, 1, 2, 4, 5, 99]:
        res, _, captured = run(
            read,
            0x004D83CC,
            0,
            [],
            registers={"eax": index & 0xFFFFFFFF},
            capture=[(0x009ACEDC, 4)],
        )
        vectors.append({
            "input": index,
            "result": ctypes.c_int32(res).value,
            "stored": struct.unpack("<i", captured[0x009ACEDC])[0],
        })
    write("004D83CC.json", vectors)


def camera_follow_relative_offsets_vectors(read):
    """0x004D7614: sets follow target/eye with relative offset and optional collision hit."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    OFFSET = 0x50004400
    vectors = []
    for has_player, preset_idx, ppos, offset, with_hit in [
        (True, 0, (10.0, 2.0, -5.0), (0.0, 10.0, 20.0), False),
        (True, 1, (0.0, 0.0, 0.0), (5.0, 20.0, 40.0), False),
        (True, 2, (0.0, 0.0, 0.0), (0.0, 0.0, 40.0), True),
        (False, 1, (1.0, 2.0, 3.0), (0.0, 10.0, 20.0), False),
    ]:
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x00, 0x00AFCA90)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        mem = [
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (OFFSET, struct.pack("<3f", *offset)),
            (0x009ACEDC, struct.pack("<i", preset_idx)),
        ] + _collision_memory(with_hit, (-100.0, -100.0, 15.0), (0.0, 100.0, 15.0), (100.0, -100.0, 15.0), (0.0, 0.0, -1.0))
        _, _, captured = run(
            read,
            0x004D7614,
            0,
            [PLAYER if has_player else 0, OFFSET],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=mem,
            capture=[(MODE, 272)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "presetIndex": preset_idx,
            "playerPosition": [float_bits(v) for v in ppos],
            "offset": [float_bits(v) for v in offset],
            "withHit": with_hit,
            "eye": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "target": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
        })
    write("004D7614.json", vectors)


def camera_follow_attach_target_vectors(read):
    """0x004D74D8: computes initial behind-target follow eye/target and steps away from wall hits."""
    MODE = 0x50001000
    PLAYER = 0x50004000
    STACK = 0x50004400
    vectors = []
    for has_player, preset_idx, ppos, heading, with_hit in [
        (True, 0, (10.0, 2.0, -5.0), 0, False),
        (True, 1, (-4.0, 5.0, 8.0), 0x4000, False),
        (True, 1, (0.0, 0.0, 0.0), 0, True),
        (False, 1, (0.0, 0.0, 0.0), 0, False),
    ]:
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x00, 0x00AFCA90)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        struct.pack_into("<i", player, 0x60, heading)
        mem = [
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (STACK, b"\x00" * 256),
            (0x009ACEDC, struct.pack("<i", preset_idx)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ] + _collision_memory(with_hit, (-100.0, -100.0, -20.0), (100.0, -100.0, -20.0), (0.0, 100.0, -20.0), (0.0, 0.0, 1.0))
        _, _, captured = run(
            read,
            0x004D74D8,
            0,
            [PLAYER if has_player else 0],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=mem,
            capture=[(MODE, 272)],
        )
        out = captured[MODE]
        vectors.append({
            "hasPlayer": has_player,
            "presetIndex": preset_idx,
            "playerPosition": [float_bits(v) for v in ppos],
            "heading": heading,
            "withHit": with_hit,
            "yaw": struct.unpack_from("<i", out, 0x30)[0],
            "eye": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "target": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
        })
    write("004D74D8.json", vectors)


def camera_follow_cutscene_view_vectors(read):
    """0x004D7998: applies scripted cutscene fixed or player-tracking view."""
    MODE = 0x50001000
    PLAYER = 0x50002000
    vectors = []
    for flags, eye, target, cid, ppos in [
        (0, (1.0, 2.0, 3.0), (4.0, 5.0, 6.0), 0, (0.0, 0.0, 0.0)),
        (1, (10.0, 20.0, 30.0), (-5.0, 6.0, 7.0), 0, (0.0, 0.0, 0.0)),
        (2, (10.0, 20.0, 30.0), (-5.0, 6.0, 7.0), 1, (100.0, 5.0, -25.0)),
        (2, (10.0, 20.0, 30.0), (-5.0, 6.0, 7.0), 7, (0.0, 0.0, 0.0)),
    ]:
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x38, 5)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        slots = [0] * 12
        if cid < 4:
            slots[cid] = PLAYER
        mem = [
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (0x00A94254, struct.pack("<12I", *slots)),
            (0x00A48B74, bytes([flags])),
            (0x00A48B68, struct.pack("<3f", *eye)),
            (0x00A48B5C, struct.pack("<3f", *target)),
            (0x009ACED8, struct.pack("<h", cid)),
        ]
        res, _, captured = run(read, 0x004D7998, 0, [], registers={"ecx": MODE, "fpcw": 0x027F}, memory=mem, capture=[(MODE, 272)])
        out = captured[MODE]
        vectors.append({
            "flags": flags,
            "cutsceneEye": [float_bits(v) for v in eye],
            "cutsceneTarget": [float_bits(v) for v in target],
            "clientId": cid,
            "playerPosition": [float_bits(v) for v in ppos],
            "applied": res != 0,
            "modeFlags": struct.unpack_from("<I", out, 0x38)[0],
            "eye": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "target": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
        })
    write("004D7998.json", vectors)


def camera_follow_eye_from_yaw_vectors(read):
    """0x004D7CE4: places mode eye by rotating PresetEyeOffset by YawAngle around entity."""
    MODE = 0x50001000
    PLAYER = 0x50002000
    STACK = 0x50003000
    vectors = []
    for yaw, offset, ppos in [
        (0, (0.0, 25.43, 45.42), (10.0, 2.0, -5.0)),
        (0x4000, (0.0, 18.0, 25.0), (0.0, 5.0, 10.0)),
        (0xA123, (-5.0, 26.9, 53.6), (-12.5, 3.5, 7.25)),
    ]:
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        struct.pack_into("<i", mode, 0x30, yaw)
        struct.pack_into("<3f", mode, 0xDC, *offset)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        _, _, captured = run(
            read,
            0x004D7CE4,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (STACK, b"\x00" * 256),
                (0x00AF0328, struct.pack("<I", STACK)),
                (0x00AF0380, struct.pack("<I", 128)),
                (0x00AF0384, struct.pack("<I", 0)),
            ],
            capture=[(MODE, 272)],
        )
        out = captured[MODE]
        vectors.append({
            "yaw": yaw,
            "eyeOffset": [float_bits(v) for v in offset],
            "playerPosition": [float_bits(v) for v in ppos],
            "eye": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
        })
    write("004D7CE4.json", vectors)


def camera_follow_target_vertical_aim_vectors(read):
    """0x004D7D40: computes velocity-led look target with combat aim height smoothing."""
    MODE = 0x50001000
    PLAYER = 0x50002000
    STACK = 0x50003000
    vectors = []
    for ppos, prevpos, heading, offset, first_person, aim_height in [
        ((10.0, 2.0, -5.0), (10.0, 2.0, -5.0), 0, (0.0, 19.8, -5.0), 0, 0.0),
        ((10.5, 2.0, -4.0), (10.0, 2.0, -4.5), 0x4000, (0.0, 16.4, -5.0), 1, 0.0),
        ((-5.0, 1.0, 2.0), (-5.2, 1.0, 1.8), 0xB000, (0.0, 19.8, -5.0), 0, -2.5),
    ]:
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        struct.pack_into("<3f", mode, 0xE8, *offset)
        struct.pack_into("<I", mode, 0x100, first_person)
        struct.pack_into("<f", mode, 0x108, aim_height)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        struct.pack_into("<3f", player, 0x44, *prevpos)
        struct.pack_into("<i", player, 0x60, heading)
        _, _, captured = run(
            read,
            0x004D7D40,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (STACK, b"\x00" * 256),
                (0x00AF0328, struct.pack("<I", STACK)),
                (0x00AF0380, struct.pack("<I", 128)),
                (0x00AF0384, struct.pack("<I", 0)),
                (0x00AAFC9C, struct.pack("<i", 0)),
            ],
            capture=[(MODE, 272)],
        )
        out = captured[MODE]
        vectors.append({
            "playerPosition": [float_bits(v) for v in ppos],
            "previousPosition": [float_bits(v) for v in prevpos],
            "heading": heading,
            "targetOffset": [float_bits(v) for v in offset],
            "firstPerson": first_person,
            "aimHeightInput": float_bits(aim_height),
            "target": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
            "aimHeightOutput": float_bits(struct.unpack_from("<f", out, 0x108)[0]),
        })
    write("004D7D40.json", vectors)


def camera_follow_look_ahead_vectors(read):
    """0x004D235C: sweeps look-ahead probe segment for obstructions between eye and target."""
    CTRL = 0x50000000
    MODE = 0x50001000
    PLAYER = 0x50004000
    STACK = 0x50004400
    vectors = []
    for ppos, prevpos, heading, ceye, ctgt, cyaw, with_hit in [
        ((0.0, 0.0, 0.0), (0.0, 0.0, 2.0), 0, (0.0, 25.0, 45.0), (0.0, 20.0, -5.0), 0, False),
        ((0.0, 0.0, 0.0), (0.0, 0.0, -2.0), 0, (0.0, 20.0, 45.0), (0.0, 20.0, -5.0), 0, True),
        ((0.0, 0.0, 0.0), (0.5, 0.0, 0.0), 0x4000, (0.0, 20.0, 45.0), (0.0, 20.0, -5.0), 0, True),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x178, *ceye)
        struct.pack_into("<3f", ctrl, 0x184, *ctgt)
        struct.pack_into("<i", ctrl, 0x194, cyaw)
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        struct.pack_into("<i", mode, 0x28, 10)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        struct.pack_into("<3f", player, 0x44, *prevpos)
        struct.pack_into("<i", player, 0x60, heading)
        mem = [
            (CTRL, bytes(ctrl)),
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (STACK, b"\x00" * 256),
            (0x00A48A54, struct.pack("<I", CTRL)),
            (0x00A48A38, struct.pack("<h", 2)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ] + _collision_memory(with_hit, (-100.0, -100.0, 20.0), (100.0, -100.0, 20.0), (0.0, 100.0, 20.0), (0.0, 0.0, 1.0))
        res, _, captured = run(read, 0x004D235C, 0, [], registers={"ecx": MODE, "fpcw": 0x027F}, memory=mem, capture=[(MODE, 272)])
        out = captured[MODE]
        vectors.append({
            "playerPosition": [float_bits(v) for v in ppos],
            "previousPosition": [float_bits(v) for v in prevpos],
            "heading": heading,
            "controllerEye": [float_bits(v) for v in ceye],
            "controllerTarget": [float_bits(v) for v in ctgt],
            "controllerYaw": cyaw,
            "withHit": with_hit,
            "hit": res != 0,
            "stepState": struct.unpack_from("<i", out, 0x28)[0],
            "collisionPoint": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x60)],
        })
    write("004D235C.json", vectors)


def camera_follow_lock_target_vectors(read):
    """0x004D88E8: sets smoothing and collision/distance flags and resets follow presets."""
    CTRL = 0x50000000
    MODE = 0x50001000
    PLAYER = 0x50004000
    STACK = 0x50004400
    vectors = []
    for op_mode, preset_idx, ppos, prevpos, heading, ceye, ctgt in [
        (0, 1, (0.0, 0.0, 0.0), (0.0, 0.0, 0.0), 0x1000, (0.0, 10.0, 10.0), (0.0, 10.0, 0.0)),
        (2, 3, (5.0, 1.0, -2.0), (5.0, 1.0, -2.0), 0x4000, (0.0, 30.0, 40.0), (0.0, 10.0, 0.0)),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x178, *ceye)
        struct.pack_into("<3f", ctrl, 0x184, *ctgt)
        mode = bytearray(272)
        struct.pack_into("<I", mode, 0x00, 0x00AFCA90)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        struct.pack_into("<3f", player, 0x44, *prevpos)
        struct.pack_into("<i", player, 0x60, heading)
        mem = [
            (CTRL, bytes(ctrl)),
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (STACK, b"\x00" * 256),
            (0x00A48A54, struct.pack("<I", CTRL)),
            (0x00A48A3C, struct.pack("<i", op_mode)),
            (0x009ACEDC, struct.pack("<i", preset_idx)),
            (0x00A48A38, struct.pack("<h", 2)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
            (0x00AAFC9C, struct.pack("<i", op_mode)),
            (0x009FF3D4, b"\x00"),
        ] + _collision_memory(False, (-100.0, -100.0, 0.0), (100.0, -100.0, 0.0), (0.0, 100.0, 0.0), (0.0, 0.0, 1.0))
        _, _, captured = run(read, 0x004D88E8, 0, [], registers={"ecx": MODE, "fpcw": 0x027F}, memory=mem, capture=[(MODE, 272)])
        out = captured[MODE]
        vectors.append({
            "operationMode": op_mode,
            "presetIndex": preset_idx,
            "playerPosition": [float_bits(v) for v in ppos],
            "heading": heading,
            "controllerEye": [float_bits(v) for v in ceye],
            "controllerTarget": [float_bits(v) for v in ctgt],
            "flags": struct.unpack_from("<I", out, 0x38)[0],
            "eyeSmoothing": float_bits(struct.unpack_from("<f", out, 0x58)[0]),
            "behaviorFlags": struct.unpack_from("<I", out, 0xFC)[0],
            "desiredYaw": struct.unpack_from("<i", out, 0x10C)[0],
            "presetEyeOffset": [float_bits(v) for v in struct.unpack_from("<3f", out, 0xDC)],
            "presetTargetOffset": [float_bits(v) for v in struct.unpack_from("<3f", out, 0xE8)],
        })
    write("004D88E8.json", vectors)


def camera_close_follow_lock_target_vectors(read):
    """0x004D1B00: initializes close-follow mode smoothing and fixed close offsets."""
    CTRL = 0x50000000
    MODE = 0x50001000
    PLAYER = 0x50004000
    STACK = 0x50004400
    vectors = []
    for ctgt, mtgt, ppos in [
        ((0.0, 20.0, 0.0), (0.0, 20.0, 0.0), (0.0, 0.0, 0.0)),
        ((30.0, 25.0, -40.0), (10.0, 5.0, 10.0), (1.0, 2.0, 3.0)),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x184, *ctgt)
        mode = bytearray(304)
        struct.pack_into("<I", mode, 0x00, 0x00AFC3E8)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        struct.pack_into("<3f", mode, 0x48, *mtgt)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        struct.pack_into("<3f", player, 0x44, *ppos)
        mem = [
            (CTRL, bytes(ctrl)),
            (MODE, bytes(mode)),
            (PLAYER, bytes(player)),
            (STACK, b"\x00" * 256),
            (0x00A48A54, struct.pack("<I", CTRL)),
            (0x00A48A38, struct.pack("<h", 2)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ] + _collision_memory(False, (-100.0, -100.0, 0.0), (100.0, -100.0, 0.0), (0.0, 100.0, 0.0), (0.0, 0.0, 1.0))
        _, _, captured = run(read, 0x004D1B00, 0, [], registers={"ecx": MODE, "fpcw": 0x027F}, memory=mem, capture=[(MODE, 304)])
        out = captured[MODE]
        vectors.append({
            "controllerTarget": [float_bits(v) for v in ctgt],
            "modeTarget": [float_bits(v) for v in mtgt],
            "playerPosition": [float_bits(v) for v in ppos],
            "flags": struct.unpack_from("<I", out, 0x38)[0],
            "eyeSmoothing": float_bits(struct.unpack_from("<f", out, 0x58)[0]),
            "targetSmoothing": float_bits(struct.unpack_from("<f", out, 0x5C)[0]),
            "presetEyeOffset": [float_bits(v) for v in struct.unpack_from("<3f", out, 0xDC)],
            "presetTargetOffset": [float_bits(v) for v in struct.unpack_from("<3f", out, 0xE8)],
        })
    write("004D1B00.json", vectors)


def camera_close_follow_focus_vectors(read):
    """0x004D1870: positions close-follow camera to frame a world focus point."""
    MODE = 0x50001000
    PLAYER = 0x50002000
    FOCUS = 0x50002400
    vectors = []
    for focus_state, ppos, focus, locked_tgt, locked_eye in [
        (0, (0.0, 2.0, 0.0), (120.0, 10.0, 0.0), (0.0, 0.0, 0.0), (0.0, 0.0, 0.0)),
        (0, (0.0, 0.0, 0.0), (30.0, 75.0, 40.0), (0.0, 0.0, 0.0), (0.0, 0.0, 0.0)),
        (1, (10.0, 5.0, -5.0), (20.0, 10.0, 0.0), (5.0, 4.0, 3.0), (-15.0, 15.0, -10.0)),
        (1, (0.0, 0.0, 0.0), (200.0, 0.0, 0.0), (5.0, 4.0, 3.0), (-15.0, 15.0, -10.0)),
    ]:
        mode = bytearray(304)
        struct.pack_into("<I", mode, 0x00, 0x00AFC3E8)
        struct.pack_into("<I", mode, 0x1C, PLAYER)
        struct.pack_into("<i", mode, 0x114, focus_state)
        struct.pack_into("<3f", mode, 0x118, *locked_tgt)
        struct.pack_into("<3f", mode, 0x124, *locked_eye)
        player = bytearray(128)
        struct.pack_into("<3f", player, 0x38, *ppos)
        _, _, captured = run(
            read,
            0x004D1870,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (PLAYER, bytes(player)),
                (FOCUS, struct.pack("<3f", *focus)),
                (0x00A447C4, struct.pack("<I", FOCUS)),
            ],
            capture=[(MODE, 304)],
        )
        out = captured[MODE]
        vectors.append({
            "focusStateInput": focus_state,
            "playerPosition": [float_bits(v) for v in ppos],
            "focusPosition": [float_bits(v) for v in focus],
            "lockedTargetInput": [float_bits(v) for v in locked_tgt],
            "lockedEyeInput": [float_bits(v) for v in locked_eye],
            "focusStateOutput": struct.unpack_from("<i", out, 0x114)[0],
            "eyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
            "targetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x48)],
            "lockedTargetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x118)],
            "lockedEyeOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x124)],
        })
    write("004D1870.json", vectors)


def camera_cutscene_post_update_vectors(read):
    """0x004D6BC0: builds camera look-at transform with optional view roll."""
    CTRL = 0x50000000
    MODE = 0x50001000
    STACK = 0x50004400
    DEV = 0x50006100
    VTBL = 0x50006200
    STUB = 0x50006000
    d3dx_x87 = read(0x00A34070, 0x39 * 4)
    vtbl = bytearray(256)
    struct.pack_into("<I", vtbl, 148, STUB)
    vectors = []
    for meye, mtgt, roll, ceye, ctgt in [
        ((0.0, 20.0, 40.0), (0.0, 10.0, 0.0), 0, (0.0, 20.0, 40.0), (0.0, 10.0, 0.0)),
        ((10.0, 20.0, 30.0), (-5.0, 5.0, 0.0), 0x2000, (10.0, 20.0, 30.0), (-5.0, 5.0, 0.0)),
        ((-20.0, 5.0, -10.0), (15.0, 15.0, 25.0), -0x1800, (-20.0, 5.0, -10.0), (15.0, 15.0, 25.0)),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x178, *ceye)
        struct.pack_into("<3f", ctrl, 0x184, *ctgt)
        mode = bytearray(168)
        struct.pack_into("<I", mode, 0x00, 0x00AFC8F8)
        struct.pack_into("<3f", mode, 0x3C, *meye)
        struct.pack_into("<3f", mode, 0x48, *mtgt)
        struct.pack_into("<i", mode, 0x90, roll)
        _, _, captured = run(
            read,
            0x004D6BC0,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (0x00000000, b"\x00" * 16),
                (CTRL, bytes(ctrl)),
                (MODE, bytes(mode)),
                (STACK, b"\x00" * 256),
                (DEV, struct.pack("<I", VTBL)),
                (VTBL, bytes(vtbl)),
                (STUB, b"\xC2\x0C\x00"),
                (0x00A33F88, d3dx_x87),
                (0x00A347CC, struct.pack("<I", 0xFFFF)),
                (0x008CB083, b"\xB8\x01\x00\x00\x00\xC3"),
                (0x00A48A54, struct.pack("<I", CTRL)),
                (0x00AF0328, struct.pack("<I", STACK)),
                (0x00AF0380, struct.pack("<I", 128)),
                (0x00AF0384, struct.pack("<I", 0)),
                (0x00AEB494, struct.pack("<I", 0)),
                (0x00ACD528, struct.pack("<I", DEV)),
                (0x00ACBF80, b"\x00" * 256),
                (0x00ACD3E0, b"\x00" * 256),
            ],
            capture=[(CTRL, 468), (STACK, 64), (0x00A48780, 12)],
        )
        out_ctrl = captured[CTRL]
        vectors.append({
            "modeEye": [float_bits(v) for v in meye],
            "modeTarget": [float_bits(v) for v in mtgt],
            "roll": roll,
            "controllerEye": [float_bits(v) for v in ceye],
            "controllerTarget": [float_bits(v) for v in ctgt],
            "pitchOutput": struct.unpack_from("<i", out_ctrl, 0x190)[0],
            "yawOutput": struct.unpack_from("<i", out_ctrl, 0x194)[0],
            "viewMatrix": [float_bits(v) for v in struct.unpack("<16f", captured[STACK])],
            "globalEye": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48780])],
        })
    write("004D6BC0.json", vectors)


def camera_preview_eye_spherical_vectors(read):
    """0x004EA5A8: computes preview eye position from spherical radius, pitch and yaw."""
    MODE = 0x50001000
    vectors = []
    for radius, pitch, yaw, target_y in [
        (30.0, 0, 0, 10.0),
        (25.0, 0x1000, 0x2000, 12.5),
        (45.0, -0x800, 0x6000, 15.0),
    ]:
        mode = bytearray(144)
        struct.pack_into("<f", mode, 0x4C, target_y)
        struct.pack_into("<f", mode, 0x6C, radius)
        struct.pack_into("<i", mode, 0x70, pitch)
        struct.pack_into("<i", mode, 0x74, yaw)
        _, _, captured = run(read, 0x004EA5A8, 0, [], registers={"ecx": MODE, "fpcw": 0x027F}, memory=[(MODE, bytes(mode))], capture=[(MODE, 144)])
        out = captured[MODE]
        vectors.append({
            "radius": float_bits(radius),
            "pitch": pitch,
            "yaw": yaw,
            "targetY": float_bits(target_y),
            "eye": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x3C)],
        })
    write("004EA5A8.json", vectors)


def camera_preview_intro_vectors(read):
    """0x004EB0E8: computes preview intro target height and starting radius from preview model."""
    MODE = 0x50001000
    CHAR = 0x50002000
    vectors = []
    for class_id, height_ratio in [
        (0, 0.5),
        (2, 1.0),
        (6, 0.25),
        (11, 0.0),
    ]:
        mode = bytearray(144)
        char = bytearray(128)
        char[49] = class_id
        struct.pack_into("<f", char, 76, height_ratio)
        _, _, captured = run(
            read,
            0x004EB0E8,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (CHAR, bytes(char)),
                (0x00A4D7F8, struct.pack("<I", CHAR)),
                (0x00A72238, struct.pack("<i", 1)),
            ],
            capture=[(MODE, 144), (0x00A72238, 4)],
        )
        out = captured[MODE]
        vectors.append({
            "classId": class_id,
            "heightRatio": float_bits(height_ratio),
            "targetY": float_bits(struct.unpack_from("<f", out, 0x4C)[0]),
            "radius": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "introStartRadius": float_bits(struct.unpack_from("<f", out, 0x80)[0]),
            "timer": struct.unpack_from("<i", out, 0x84)[0],
            "subState": struct.unpack("<i", captured[0x00A72238])[0],
        })
    write("004EB0E8.json", vectors)


def camera_preview_zoom_vectors(read):
    """0x004EB15C: advances 120-frame cosine intro radius curve."""
    MODE = 0x50001000
    vectors = []
    for timer_in, start_radius in [(120, 40.0), (60, 40.0), (1, 40.0), (0, 25.0)]:
        mode = bytearray(144)
        struct.pack_into("<f", mode, 0x80, start_radius)
        struct.pack_into("<i", mode, 0x84, timer_in)
        _, _, captured = run(
            read,
            0x004EB15C,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[(MODE, bytes(mode)), (0x00A72238, struct.pack("<i", 2))],
            capture=[(MODE, 144), (0x00A72238, 4)],
        )
        out = captured[MODE]
        vectors.append({
            "timerInput": timer_in,
            "startRadius": float_bits(start_radius),
            "timerOutput": struct.unpack_from("<i", out, 0x84)[0],
            "radiusOutput": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "subState": struct.unpack("<i", captured[0x00A72238])[0],
        })
    write("004EB15C.json", vectors)


def camera_preview_idle_orbit_vectors(read):
    """0x004EB1C8: updates idle auto-orbit pitch damping and oscillating yaw/radius steps."""
    MODE = 0x50001000
    vectors = []
    for has_input, timer_in, radius_in, pitch_in, yaw_in in [
        (True, 10, 25.0, 0, 0),
        (False, 0x0FF, 25.0, 500, 0),
        (False, 0x2FF, 25.0, -50, 0),
        (False, 0x4FF, 25.0, -500, 0x1000),
        (False, 0x6FF, 25.0, 50, 0),
    ]:
        mode = bytearray(144)
        struct.pack_into("<f", mode, 0x6C, radius_in)
        struct.pack_into("<i", mode, 0x70, pitch_in)
        struct.pack_into("<i", mode, 0x74, yaw_in)
        struct.pack_into("<i", mode, 0x84, timer_in)
        _, _, captured = run(
            read,
            0x004EB1C8,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=[
                (MODE, bytes(mode)),
                (0x00A72220, bytes([1])),
                (0x00A72224, struct.pack("<I", 1)),
                (0x00A72618, struct.pack("<I", 1 if has_input else 0)),
                (0x00A72238, struct.pack("<i", 3)),
            ],
            capture=[(MODE, 144), (0x00A72238, 4)],
        )
        out = captured[MODE]
        vectors.append({
            "hasInput": has_input,
            "timerInput": timer_in,
            "radiusInput": float_bits(radius_in),
            "pitchInput": pitch_in,
            "yawInput": yaw_in,
            "timerOutput": struct.unpack_from("<i", out, 0x84)[0],
            "radiusOutput": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "pitchOutput": struct.unpack_from("<i", out, 0x70)[0],
            "yawOutput": struct.unpack_from("<i", out, 0x74)[0],
            "subState": struct.unpack("<i", captured[0x00A72238])[0],
        })
    write("004EB1C8.json", vectors)


def camera_preview_menu_focus_vectors(read):
    """0x004EA854: smoothly transitions preview orbit radius and target height across character-making menus."""
    MODE = 0x50001000
    CHAR = 0x50002000
    vectors = []
    cases = [
        (0, True, 0, 0.5, 0, 0, 5.0, 5.0, 0.0, 0.0, 0, 0),
        (2, True, 2, 1.0, 0, 0, 10.7, 19.515, 0.05, 0.05, 300, -300),
        (4, True, 6, 0.25, 0, 0, 20.0, 20.0, 0.0, 0.0, 0, 0),
        (6, True, 0, 0.5, 1, 0, 25.0, 11.0, 0.05, -0.05, 400, -300),
        (8, True, 0, 0.5, 1, 0, 25.05, 11.05, -0.05, -0.05, -50, 50),
        (9, True, 11, 0.8, 2, 0, 10.0, 5.0, 0.0, 0.0, 100, -100),
        (1, True, 0, 0.5, 2, 10, 25.0, 10.0, 0.0, 0.0, 0, 0),
        (1, True, 0, 0.5, 2, 30, 25.0, 10.0, 0.0, 0.0, 0, 0),
        (-1, False, 0, 0.5, 0, 30, 30.0, 12.0, 0.0, 0.0, 0, 0),
    ]
    for menu_step, has_char, class_id, height_ratio, preset_in, timer_in, radius_in, target_y_in, r_vel_in, y_vel_in, pitch_in, yaw_in in cases:
        mode = bytearray(144)
        struct.pack_into("<f", mode, 0x4C, target_y_in)
        struct.pack_into("<f", mode, 0x6C, radius_in)
        struct.pack_into("<i", mode, 0x70, pitch_in)
        struct.pack_into("<i", mode, 0x74, yaw_in)
        struct.pack_into("<i", mode, 0x78, preset_in)
        struct.pack_into("<i", mode, 0x7C, timer_in)
        struct.pack_into("<f", mode, 0x88, r_vel_in)
        struct.pack_into("<f", mode, 0x8C, y_vel_in)
        char = bytearray(128)
        char[49] = class_id
        struct.pack_into("<f", char, 76, height_ratio)
        mem = [
            (MODE, bytes(mode)),
            (CHAR, bytes(char)),
            (0x00A7256C, struct.pack("<i", menu_step)),
            (0x00A4D7F8, struct.pack("<I", CHAR if has_char else 0)),
        ]
        _, _, captured = run(
            read,
            0x004EA854,
            0,
            [],
            registers={"ecx": MODE, "fpcw": 0x027F},
            memory=mem,
            capture=[(MODE, 144)],
        )
        out = captured[MODE]
        vectors.append({
            "menuStep": menu_step,
            "hasCharacter": has_char,
            "classId": class_id,
            "heightRatio": float_bits(height_ratio),
            "presetInput": preset_in,
            "presetTimerInput": timer_in,
            "radiusInput": float_bits(radius_in),
            "targetYInput": float_bits(target_y_in),
            "radiusVelocityInput": float_bits(r_vel_in),
            "targetYVelocityInput": float_bits(y_vel_in),
            "pitchInput": pitch_in,
            "yawInput": yaw_in,
            "presetOutput": struct.unpack_from("<i", out, 0x78)[0],
            "presetTimerOutput": struct.unpack_from("<i", out, 0x7C)[0],
            "radiusOutput": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "targetYOutput": float_bits(struct.unpack_from("<f", out, 0x4C)[0]),
            "radiusVelocityOutput": float_bits(struct.unpack_from("<f", out, 0x88)[0]),
            "targetYVelocityOutput": float_bits(struct.unpack_from("<f", out, 0x8C)[0]),
            "pitchOutput": struct.unpack_from("<i", out, 0x70)[0],
            "yawOutput": struct.unpack_from("<i", out, 0x74)[0],
        })
    write("004EA854.json", vectors)


def polyline_sample_vectors(read):
    """0x007BE414: samples a position along a polyline of 4-float nodes (x, y, z, segmentLength)."""
    NODES = 0x50001000
    OUT = 0x50002000
    tri_nodes = [
        (0.0, 0.0, 0.0, 10.0),
        (10.0, 0.0, 0.0, 20.0),
        (10.0, 20.0, 0.0, 20.0),
    ]
    zero_nodes = [
        (1.0, 2.0, 3.0, 0.0),
        (4.0, 5.0, 6.0, 0.0),
    ]
    single_node = [(1.0, 2.0, 3.0, 5.0)]
    long_nodes = [
        (0.0, 0.0, 0.0, 10.0),
        (10.0, 0.0, 0.0, 10.0),
        (10.0, 10.0, 0.0, 10.0),
        (0.0, 10.0, 0.0, 10.0),
        (0.0, 10.0, 10.0, 10.0),
        (0.0, 0.0, 10.0, 10.0),
    ]
    vectors = []
    for nodes, count, speed, frame, loop in [
        (single_node, 1, 1.0, 0, False),
        (zero_nodes, 2, 1.0, 5, False),
        (tri_nodes, 3, 2.5, 2, False),
        (tri_nodes, 3, 2.5, 6, False),
        (tri_nodes, 3, 2.5, 15, False),
        (tri_nodes, 3, 2.5, 16, True),
        (tri_nodes, 3, 2.5, 25, True),
        (long_nodes, 6, 3.5, 10, True),
    ]:
        buf = bytearray(len(nodes) * 16)
        for i, node in enumerate(nodes):
            struct.pack_into("<4f", buf, i * 16, *node)
        eax, _, captured = run(
            read,
            0x007BE414,
            0,
            [NODES, count, float_bits(speed), frame, 1 if loop else 0, OUT],
            registers={"fpcw": 0x027F},
            memory=[(NODES, bytes(buf)), (OUT, b"\x00" * 12)],
            capture=[(OUT, 12)],
        )
        out_vec = struct.unpack("<3f", captured[OUT])
        vectors.append({
            "nodes": [[float_bits(v) for v in n] for n in nodes],
            "count": count,
            "speed": float_bits(speed),
            "frame": frame,
            "loop": loop,
            "result": eax,
            "position": [float_bits(v) for v in out_vec],
        })
    write("007BE414.json", vectors)


def binomial_coefficient_vectors(read):
    """0x00844858: computes binomial coefficient C(n, k)."""
    vectors = []
    for n, k in [(0, 0), (1, 0), (1, 1), (4, 0), (4, 1), (4, 2), (4, 3), (4, 4), (7, 3), (10, 5), (12, 6)]:
        eax, _, _ = run(read, 0x00844858, 0, [], registers={"ecx": n, "edx": k})
        vectors.append({"n": n, "k": k, "result": eax})
    write("00844858.json", vectors)


def bezier_evaluate_vectors(read):
    """0x007BE6B8: evaluates open or closed Bezier curve at parameter t in [0, 1]."""
    PTS = 0x50001000
    OUT = 0x50002000
    pts4 = [
        (0.0, 0.0, 0.0, 0.0),
        (10.0, 20.0, 5.0, 0.0),
        (30.0, 15.0, -5.0, 0.0),
        (40.0, 0.0, 10.0, 0.0),
    ]
    pts2 = [
        (0.0, 0.0, 0.0, 0.0),
        (10.0, 0.0, 0.0, 0.0),
    ]
    vectors = []
    for pts, t, closed in [
        (pts2, 0.5, False),
        (pts4, 0.0, False),
        (pts4, 0.25, False),
        (pts4, 0.5, False),
        (pts4, 1.0, False),
        (pts4, 0.0, True),
        (pts4, 0.35, True),
        (pts4, 1.0, True),
    ]:
        buf = bytearray(len(pts) * 16)
        for i, pt in enumerate(pts):
            struct.pack_into("<4f", buf, i * 16, *pt)
        eax, _, captured = run(
            read,
            0x007BE6B8,
            0,
            [PTS, len(pts), float_bits(t), 1 if closed else 0, OUT],
            registers={"fpcw": 0x027F},
            memory=[(PTS, bytes(buf)), (OUT, b"\x00" * 12), (0x00AE7F00, struct.pack("<I", 0x200))],
            capture=[(OUT, 12)],
        )
        out_vec = struct.unpack("<3f", captured[OUT])
        vectors.append({
            "controlPoints": [[float_bits(v) for v in p] for p in pts],
            "t": float_bits(t),
            "closed": closed,
            "result": eax,
            "position": [float_bits(v) for v in out_vec],
        })
    write("007BE6B8.json", vectors)


def camera_cutscene_apply_anchor_vectors(read):
    """0x004D681C: copies cutscene origin, motion origin, and motion yaw angle onto mode five."""
    MODE = 0x50001000
    ORIGIN = 0x50002000
    MOTION = 0x50002020
    YAW = 0x50002040
    vectors = []
    for mode_present, origin, motion, yaw in [
        (False, (1.0, 2.0, 3.0), (4.0, 5.0, 6.0), 0x1000),
        (True, (10.5, -2.25, 30.0), (-5.0, 12.0, 8.5), -0x2000),
        (True, (0.0, 0.0, 0.0), (100.0, 50.0, -75.0), 0x4000),
    ]:
        mode = bytearray(168)
        yaw_buf = struct.pack("<ii", 0, yaw)
        mem = [
            (ORIGIN, struct.pack("<3f", *origin)),
            (MOTION, struct.pack("<3f", *motion)),
            (YAW, yaw_buf),
            (0x00A48A14, struct.pack("<I", MODE if mode_present else 0)),
        ]
        if mode_present:
            mem.append((MODE, bytes(mode)))
        _, _, captured = run(
            read,
            0x004D681C,
            0,
            [ORIGIN, MOTION, YAW],
            memory=mem,
            capture=[(MODE, 168)] if mode_present else [],
        )
        if mode_present:
            out = captured[MODE]
            out_origin = struct.unpack_from("<3f", out, 0x6C)
            out_motion = struct.unpack_from("<3f", out, 0x78)
            out_yaw = struct.unpack_from("<i", out, 0x88)[0]
        else:
            out_origin = (0.0, 0.0, 0.0)
            out_motion = (0.0, 0.0, 0.0)
            out_yaw = 0
        vectors.append({
            "modePresent": mode_present,
            "cameraOrigin": [float_bits(v) for v in origin],
            "motionOrigin": [float_bits(v) for v in motion],
            "motionYawAngle": yaw,
            "outputCameraOrigin": [float_bits(v) for v in out_origin],
            "outputMotionOrigin": [float_bits(v) for v in out_motion],
            "outputMotionYawAngle": out_yaw,
        })
    write("004D681C.json", vectors)


def camera_cutscene_sync_status_vectors(read):
    """0x004D6864: marks mode five cutscene ended when another camera mode is active."""
    MODE = 0x50001000
    vectors = []
    for mode_present, active_mode, initial_flags in [
        (False, 0, 0),
        (True, 5, 0),
        (True, 5, 2),
        (True, 0, 0),
        (True, 3, 4),
    ]:
        mode = bytearray(168)
        struct.pack_into("<H", mode, 0x9E, initial_flags)
        mem = [
            (0x00A48A14, struct.pack("<I", MODE if mode_present else 0)),
            (0x00A489F4, bytes([active_mode])),
        ]
        if mode_present:
            mem.append((MODE, bytes(mode)))
        eax, _, captured = run(
            read,
            0x004D6864,
            0,
            [],
            memory=mem,
            capture=[(MODE, 168)] if mode_present else [],
        )
        out_flags = struct.unpack_from("<H", captured[MODE], 0x9E)[0] if mode_present else 0
        vectors.append({
            "modePresent": mode_present,
            "activeMode": active_mode,
            "initialFlags": initial_flags,
            "returnedNull": eax == 0,
            "outputFlags": out_flags,
        })
    write("004D6864.json", vectors)


def camera_set_orientation_axes_vectors(read):
    """0x004D44CC: computes camera right and up basis vectors from explicit pitch and yaw angles."""
    STACK = 0x50004400
    vectors = []
    for pitch, yaw in [(0, 0), (0x1000, 0x2000), (-0x800, 0x4000), (0x2000, -0x3000)]:
        _, _, captured = run(
            read,
            0x004D44CC,
            0,
            [pitch, yaw],
            registers={"fpcw": 0x027F},
            memory=[
                (STACK, b"\x00" * 256),
                (0x00AF0328, struct.pack("<I", STACK)),
                (0x00AF0380, struct.pack("<I", 128)),
                (0x00AF0384, struct.pack("<I", 0)),
                (0x00A489E8, b"\x00" * 12),
                (0x00A489DC, b"\x00" * 12),
            ],
            capture=[(0x00A489E8, 12), (0x00A489DC, 12)],
        )
        vectors.append({
            "pitch": pitch,
            "yaw": yaw,
            "rightAxis": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A489E8])],
            "upAxis": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A489DC])],
        })
    write("004D44CC.json", vectors)


def camera_set_global_up_axis_vectors(read):
    """0x004D45A0: copies a three-float up-axis vector into the global camera up axis."""
    VEC = 0x50002000
    vectors = []
    for axis in [(0.0, 1.0, 0.0), (0.5, 0.70710677, -0.5), (-1.0, 0.0, 0.25)]:
        _, _, captured = run(
            read,
            0x004D45A0,
            0,
            [VEC],
            memory=[(VEC, struct.pack("<3f", *axis)), (0x00A489CC, b"\x00" * 12)],
            capture=[(0x00A489CC, 12)],
        )
        vectors.append({
            "axis": [float_bits(v) for v in axis],
            "outputAxis": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A489CC])],
        })
    write("004D45A0.json", vectors)


def camera_linear_pan_init_vectors(read):
    """0x004D5B98: constructs the linear cutscene camera pan task from controller eye/target and destination."""
    CTRL = 0x50000000
    TASK = 0x50001000
    DEST = 0x50002000
    vectors = []
    for ceye, ctgt, dest, move_frames, hold_frames in [
        ((0.0, 20.0, 40.0), (0.0, 10.0, 0.0), (30.0, 20.0, 10.0), 60, 30),
        ((10.0, 5.0, -20.0), (10.0, 5.0, -20.0), (10.0, 5.0, -20.0), 0, 15),
        ((-15.0, 12.0, 8.0), (5.0, 10.0, -4.0), (25.0, 30.0, 12.0), 120, 0),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x178, *ceye)
        struct.pack_into("<3f", ctrl, 0x184, *ctgt)
        _, _, captured = run(
            read,
            0x004D5B98,
            0,
            [DEST, move_frames, hold_frames, 0],
            registers={"ecx": TASK, "fpcw": 0x027F},
            memory=[
                (0x00000000, b"\x00" * 16),
                (CTRL, bytes(ctrl)),
                (TASK, b"\x00" * 64),
                (DEST, struct.pack("<3f", *dest)),
                (0x00A48A54, struct.pack("<I", CTRL)),
                (0x00A48B74, bytes([0])),
                (0x00A48B68, b"\x00" * 12),
                (0x00A48B5C, b"\x00" * 12),
            ],
            capture=[(TASK, 64), (0x00A48B74, 1), (0x00A48B68, 12), (0x00A48B5C, 12)],
        )
        out = captured[TASK]
        vectors.append({
            "controllerEye": [float_bits(v) for v in ceye],
            "controllerTarget": [float_bits(v) for v in ctgt],
            "destination": [float_bits(v) for v in dest],
            "moveFrames": move_frames,
            "holdFrames": hold_frames,
            "stepSpeed": float_bits(struct.unpack_from("<f", out, 0x1C)[0]),
            "elapsedFrames": struct.unpack_from("<H", out, 0x20)[0],
            "moveFramesOutput": struct.unpack_from("<H", out, 0x22)[0],
            "holdFramesOutput": struct.unpack_from("<H", out, 0x24)[0],
            "startTarget": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x28)],
            "endTarget": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x34)],
            "cutsceneViewFlags": captured[0x00A48B74][0],
            "cutsceneEye": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B68])],
            "cutsceneTarget": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B5C])],
        })
    write("004D5B98.json", vectors)


def camera_linear_pan_step_vectors(read):
    """0x004D5AAC: advances the linear cutscene camera pan by one frame and retires when finished."""
    CTRL = 0x50000000
    TASK = 0x50001000
    vectors = []
    for ceye, start_tgt, end_tgt, step_speed, elapsed, move_frames, hold_frames, view_flags in [
        ((0.0, 20.0, 40.0), (10.0, 10.0, 0.0), (0.0, 10.0, 0.0), 1.5, 0, 10, 5, 1),
        ((0.0, 20.0, 40.0), (10.0, 10.0, 0.0), (9.5, 10.0, 0.0), 1.5, 14, 10, 5, 1),
        ((0.0, 20.0, 40.0), (10.0, 10.0, 0.0), (0.0, 10.0, 0.0), 1.5, 2, 10, 5, 0),
        ((0.0, 20.0, 40.0), (10.0, 10.0, 0.0), (0.0, 10.0, 0.0), 1.5, 2, 10, 5, 2),
    ]:
        ctrl = bytearray(468)
        struct.pack_into("<3f", ctrl, 0x178, *ceye)
        task = bytearray(64)
        struct.pack_into("<f", task, 0x1C, step_speed)
        struct.pack_into("<HHH", task, 0x20, elapsed, move_frames, hold_frames)
        struct.pack_into("<3f", task, 0x28, *start_tgt)
        struct.pack_into("<3f", task, 0x34, *end_tgt)
        _, _, captured = run(
            read,
            0x004D5AAC,
            0,
            [],
            registers={"ecx": TASK, "fpcw": 0x027F},
            memory=[
                (0x00000000, b"\x00" * 16),
                (CTRL, bytes(ctrl)),
                (TASK, bytes(task)),
                (0x00A48A54, struct.pack("<I", CTRL)),
                (0x00A48B74, bytes([view_flags])),
                (0x00A48B68, b"\x00" * 12),
                (0x00A48B5C, b"\x00" * 12),
            ],
            capture=[(TASK, 64), (0x00A48B74, 1), (0x00A48B68, 12), (0x00A48B5C, 12)],
        )
        out = captured[TASK]
        vectors.append({
            "controllerEye": [float_bits(v) for v in ceye],
            "startTarget": [float_bits(v) for v in start_tgt],
            "endTarget": [float_bits(v) for v in end_tgt],
            "stepSpeed": float_bits(step_speed),
            "elapsed": elapsed,
            "moveFrames": move_frames,
            "holdFrames": hold_frames,
            "viewFlags": view_flags,
            "taskFlagsOutput": struct.unpack_from("<H", out, 0x08)[0],
            "elapsedOutput": struct.unpack_from("<H", out, 0x20)[0],
            "endTargetOutput": [float_bits(v) for v in struct.unpack_from("<3f", out, 0x34)],
            "cutsceneViewFlagsOutput": captured[0x00A48B74][0],
            "cutsceneEyeOutput": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B68])],
            "cutsceneTargetOutput": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B5C])],
        })
    write("004D5AAC.json", vectors)


def camera_path_task_init_vectors(read):
    """0x004D5D5C: initializes scripted spline camera task for fixed-target or player-tracking view."""
    TASK = 0x50001000
    EYE_NODES = 0x50002000
    TGT_NODES = 0x50003000
    eye_sample = (1.0, 2.0, 3.0, 10.0)
    tgt_sample = (4.0, 5.0, 6.0, 10.0)
    vectors = []
    for has_eye, has_tgt, count, speed, target_id, loop in [
        (True, True, 3, 2.5, 0xFFFF, 1),
        (True, False, 3, 1.5, 2, 0),
        (True, True, 1, 1.0, 0xFFFF, 0),
        (False, True, 3, 1.0, 0xFFFF, 0),
    ]:
        eye_ptr = EYE_NODES if has_eye else 0
        tgt_ptr = TGT_NODES if has_tgt else 0
        _, _, captured = run(
            read,
            0x004D5D5C,
            0,
            [eye_ptr, tgt_ptr, count, float_bits(speed), target_id, loop, 0],
            registers={"ecx": TASK, "fpcw": 0x027F},
            memory=[
                (0x00000000, b"\x00" * 16),
                (TASK, b"\x00" * 64),
                (EYE_NODES, struct.pack("<4f", *eye_sample)),
                (TGT_NODES, struct.pack("<4f", *tgt_sample)),
                (0x00A48B74, bytes([0])),
                (0x00A48B68, b"\x00" * 12),
                (0x00A48B5C, b"\x00" * 12),
                (0x009ACED8, struct.pack("<h", -1)),
            ],
            capture=[(TASK, 64), (0x00A48B74, 1), (0x00A48B68, 12), (0x00A48B5C, 12), (0x009ACED8, 2)],
        )
        out = captured[TASK]
        vectors.append({
            "hasEye": has_eye,
            "hasTarget": has_tgt,
            "count": count,
            "speed": float_bits(speed),
            "targetClientId": target_id,
            "loop": loop,
            "taskFlags": struct.unpack_from("<H", out, 0x08)[0],
            "cutsceneViewFlags": captured[0x00A48B74][0],
            "cutsceneEye": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B68])],
            "cutsceneTarget": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B5C])],
            "cutsceneTargetClientId": struct.unpack("<h", captured[0x009ACED8])[0],
        })
    write("004D5D5C.json", vectors)


def camera_path_task_step_vectors(read):
    """0x004D5E88: advances scripted polyline camera task and updates cutscene view globals."""
    TASK = 0x50001000
    EYE_NODES = 0x50002000
    TGT_NODES = 0x50003000
    eye_nodes = [
        (0.0, 10.0, 0.0, 10.0),
        (10.0, 10.0, 0.0, 20.0),
        (10.0, 30.0, 0.0, 20.0),
    ]
    tgt_nodes = [
        (0.0, 0.0, 0.0, 10.0),
        (0.0, 10.0, 0.0, 20.0),
        (10.0, 10.0, 0.0, 20.0),
    ]
    eye_buf = bytearray(len(eye_nodes) * 16)
    tgt_buf = bytearray(len(tgt_nodes) * 16)
    for i, node in enumerate(eye_nodes):
        struct.pack_into("<4f", eye_buf, i * 16, *node)
    for i, node in enumerate(tgt_nodes):
        struct.pack_into("<4f", tgt_buf, i * 16, *node)
    vectors = []
    for has_eye, has_tgt, frame_in, speed, target_id, loop in [
        (False, False, 0, 2.5, 0xFFFF, 0),
        (True, True, 1, 2.5, 0xFFFF, 0),
        (True, True, 5, 2.5, 0xFFFF, 1),
        (True, False, 2, 2.5, 1, 0),
    ]:
        task = bytearray(64)
        struct.pack_into("<IIfhhhh", task, 0x1C, EYE_NODES if has_eye else 0, TGT_NODES if has_tgt else 0, speed, 3, target_id if target_id < 0x8000 else target_id - 0x10000, frame_in, loop)
        _, _, captured = run(
            read,
            0x004D5E88,
            0,
            [],
            registers={"ecx": TASK, "fpcw": 0x027F},
            memory=[
                (TASK, bytes(task)),
                (EYE_NODES, bytes(eye_buf)),
                (TGT_NODES, bytes(tgt_buf)),
                (0x00A48B74, bytes([0])),
                (0x00A48B68, b"\x00" * 12),
                (0x00A48B5C, b"\x00" * 12),
                (0x009ACED8, struct.pack("<h", -1)),
            ],
            capture=[(TASK, 64), (0x00A48B74, 1), (0x00A48B68, 12), (0x00A48B5C, 12), (0x009ACED8, 2)],
        )
        out = captured[TASK]
        vectors.append({
            "hasEye": has_eye,
            "hasTarget": has_tgt,
            "frameInput": frame_in,
            "speed": float_bits(speed),
            "targetClientId": target_id,
            "loop": loop,
            "taskFlags": struct.unpack_from("<H", out, 0x08)[0],
            "frameOutput": struct.unpack_from("<h", out, 0x2C)[0],
            "cutsceneViewFlags": captured[0x00A48B74][0],
            "cutsceneEye": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B68])],
            "cutsceneTarget": [float_bits(v) for v in struct.unpack("<3f", captured[0x00A48B5C])],
            "cutsceneTargetClientId": struct.unpack("<h", captured[0x009ACED8])[0],
        })
    write("004D5E88.json", vectors)


def transform_position_vectors(read):
    """0x00835C3C: transforms a 3D point by the matrix at the top of the transformation stack."""
    STACK = 0x50004400
    SRC = 0x50002000
    DST = 0x50002020
    matrices = [
        (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 10.0, -5.0, 25.0, 1.0),
        (0.5, -0.25, 0.75, 0.0, 0.125, 1.5, -0.5, 0.0, -0.75, 0.25, 0.875, 0.0, -12.0, 8.5, 4.25, 1.0),
    ]
    points = [(0.0, 0.0, 0.0), (2.0, -4.0, 6.0), (-3.5, 7.25, 1.5)]
    vectors = []
    for mat in matrices:
        for pt in points:
            _, _, captured = run(
                read,
                0x00835C3C,
                0,
                [SRC, DST],
                registers={"fpcw": 0x027F},
                memory=[
                    (STACK, struct.pack("<16f", *mat)),
                    (0x00AF0328, struct.pack("<I", STACK)),
                    (SRC, struct.pack("<3f", *pt)),
                    (DST, b"\x00" * 12),
                ],
                capture=[(DST, 12)],
            )
            vectors.append({
                "matrix": [float_bits(v) for v in mat],
                "point": [float_bits(v) for v in pt],
                "result": [float_bits(v) for v in struct.unpack("<3f", captured[DST])],
            })
    write("00835C3C.json", vectors)


def transform_multiply_matrix_vectors(read):
    """0x0083A668: multiplies destination matrix (or current stack top) by transform matrix."""
    STACK = 0x50004400
    DST = 0x50002000
    SRC = 0x50002040
    left = (1.0, 0.2, -0.3, 0.0, -0.2, 0.9, 0.4, 0.0, 0.3, -0.4, 0.8, 0.0, 10.0, -5.0, 20.0, 1.0)
    right = (0.7, -0.5, 0.1, 0.0, 0.5, 0.8, -0.2, 0.0, -0.1, 0.2, 1.1, 0.0, -3.0, 7.0, 4.0, 1.0)
    ident = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)
    vectors = []
    for use_stack, dst_mat, src_mat in [(True, left, right), (True, right, left), (False, left, ident), (False, left, right)]:
        mem = [
            (STACK, struct.pack("<16f", *dst_mat) + b"\x00" * 192),
            (DST, struct.pack("<16f", *dst_mat)),
            (SRC, struct.pack("<16f", *src_mat)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ]
        cap = [(STACK if use_stack else DST, 64)]
        _, _, captured = run(
            read,
            0x0083A668,
            0,
            [0 if use_stack else DST, SRC],
            registers={"fpcw": 0x027F},
            memory=mem,
            capture=cap,
        )
        out = struct.unpack("<16f", captured[STACK if use_stack else DST])
        vectors.append({
            "useStack": use_stack,
            "destination": [float_bits(v) for v in dst_mat],
            "transform": [float_bits(v) for v in src_mat],
            "result": [float_bits(v) for v in out],
        })
    write("0083A668.json", vectors)


def hexahedron_bounds_vectors(read):
    """0x0084A90C: computes minimum and maximum bounds across eight corner points."""
    CORNERS = 0x50002000
    MIN_OUT = 0x50002100
    MAX_OUT = 0x50002120
    cases = [
        [
            (0.0, 0.0, 0.0), (10.0, 0.0, 0.0), (10.0, 4.0, 0.0), (0.0, 4.0, 0.0),
            (0.0, 0.0, 15.0), (10.0, 0.0, 15.0), (10.0, 4.0, 15.0), (0.0, 4.0, 15.0),
        ],
        [
            (-5.5, 2.25, -8.0), (12.0, -3.5, 1.0), (7.25, 9.75, 4.5), (-11.5, 6.0, 3.25),
            (-2.0, -7.5, 14.0), (15.5, 0.5, 19.25), (3.75, 11.25, 22.0), (-9.0, 1.0, 16.5),
        ],
        [
            (-50.0, -20.0, -100.0), (-10.0, -20.0, -100.0), (-10.0, -5.0, -100.0), (-50.0, -5.0, -100.0),
            (-50.0, -20.0, -30.0), (-10.0, -20.0, -30.0), (-10.0, -5.0, -30.0), (-50.0, -5.0, -30.0),
        ],
        [
            (4.0, -2.0, 7.5), (4.0, -2.0, 7.5), (4.0, -2.0, 7.5), (4.0, -2.0, 7.5),
            (4.0, -2.0, 7.5), (4.0, -2.0, 7.5), (4.0, -2.0, 7.5), (4.0, -2.0, 7.5),
        ],
    ]
    vectors = []
    for corners in cases:
        flat = [c for pt in corners for c in pt]
        _, _, captured = run(
            read,
            0x0084A90C,
            0,
            [MAX_OUT],
            registers={"ecx": CORNERS, "edx": MIN_OUT, "fpcw": 0x027F},
            memory=[
                (CORNERS, struct.pack("<24f", *flat)),
                (MIN_OUT, b"\x00" * 12),
                (MAX_OUT, b"\x00" * 12),
            ],
            capture=[(MIN_OUT, 12), (MAX_OUT, 12)],
        )
        min_out = struct.unpack("<3f", captured[MIN_OUT])
        max_out = struct.unpack("<3f", captured[MAX_OUT])
        vectors.append({
            "corners": [[float_bits(c) for c in pt] for pt in corners],
            "min": [float_bits(v) for v in min_out],
            "max": [float_bits(v) for v in max_out],
        })
    write("0084A90C.json", vectors)


def sphere_bounds_vectors(read):
    """0x0084A9DC: computes axis-aligned minimum and maximum bounds for a bounding sphere."""
    SPHERE = 0x50002000
    MIN_OUT = 0x50002100
    MAX_OUT = 0x50002120
    cases = [
        (0.0, 0.0, 0.0, 5.5),
        (-12.25, 34.5, -7.75, 18.125),
        (3.0, -4.0, 5.0, 0.0),
        (1.0, 2.0, 3.0, -2.5),
    ]
    vectors = []
    for sphere in cases:
        _, _, captured = run(
            read,
            0x0084A9DC,
            0,
            [MAX_OUT],
            registers={"ecx": SPHERE, "edx": MIN_OUT, "fpcw": 0x027F},
            memory=[
                (SPHERE, struct.pack("<4f", *sphere)),
                (MIN_OUT, b"\x00" * 12),
                (MAX_OUT, b"\x00" * 12),
            ],
            capture=[(MIN_OUT, 12), (MAX_OUT, 12)],
        )
        min_out = struct.unpack("<3f", captured[MIN_OUT])
        max_out = struct.unpack("<3f", captured[MAX_OUT])
        vectors.append({
            "center": [float_bits(v) for v in sphere[:3]],
            "radius": float_bits(sphere[3]),
            "min": [float_bits(v) for v in min_out],
            "max": [float_bits(v) for v in max_out],
        })
    write("0084A9DC.json", vectors)


def bounds_intersect_vectors(read):
    """0x0084AA18: tests whether two axis-aligned bounding boxes overlap."""
    MIN_A = 0x50002000
    MIN_B = 0x50002020
    MAX_A = 0x50002040
    MAX_B = 0x50002060
    cases = [
        ((0.0, 0.0, 0.0), (10.0, 10.0, 10.0), (5.0, 5.0, 5.0), (15.0, 15.0, 15.0)),
        ((0.0, 0.0, 0.0), (10.0, 10.0, 10.0), (10.5, 2.0, 2.0), (20.0, 8.0, 8.0)),
        ((10.5, 2.0, 2.0), (20.0, 8.0, 8.0), (0.0, 0.0, 0.0), (10.0, 10.0, 10.0)),
        ((0.0, 0.0, 0.0), (10.0, 10.0, 10.0), (2.0, 11.0, 2.0), (8.0, 20.0, 8.0)),
        ((2.0, 11.0, 2.0), (8.0, 20.0, 8.0), (0.0, 0.0, 0.0), (10.0, 10.0, 10.0)),
        ((0.0, 0.0, 0.0), (10.0, 10.0, 10.0), (2.0, 2.0, 11.0), (8.0, 8.0, 20.0)),
        ((2.0, 2.0, 11.0), (8.0, 8.0, 20.0), (0.0, 0.0, 0.0), (10.0, 10.0, 10.0)),
        ((0.0, 0.0, 0.0), (10.0, 10.0, 10.0), (10.0, 0.0, 0.0), (20.0, 10.0, 10.0)),
        ((-5.0, -5.0, -5.0), (5.0, 5.0, 5.0), (-2.0, -2.0, -2.0), (2.0, 2.0, 2.0)),
    ]
    vectors = []
    for min_a, max_a, min_b, max_b in cases:
        result, _, _ = run(
            read,
            0x0084AA18,
            0,
            [MIN_B, MAX_B],
            registers={"ecx": MIN_A, "edx": MAX_A, "fpcw": 0x027F},
            memory=[
                (MIN_A, struct.pack("<3f", *min_a)),
                (MAX_A, struct.pack("<3f", *max_a)),
                (MIN_B, struct.pack("<3f", *min_b)),
                (MAX_B, struct.pack("<3f", *max_b)),
            ],
        )
        vectors.append({
            "minA": [float_bits(v) for v in min_a],
            "maxA": [float_bits(v) for v in max_a],
            "minB": [float_bits(v) for v in min_b],
            "maxB": [float_bits(v) for v in max_b],
            "intersects": result != 0,
        })
    write("0084AA18.json", vectors)


def hexahedron_intersects_sphere_vectors(read):
    """0x0083D2FC: tests whether an eight-corner hexahedron intersects a bounding sphere."""
    CORNERS = 0x50002000
    SPHERE = 0x50002100

    def make_box(x0, x1, y0, y1, z0, z1):
        return [
            (x0, y0, z0), (x1, y0, z0), (x1, y1, z0), (x0, y1, z0),
            (x0, y0, z1), (x1, y0, z1), (x1, y1, z1), (x0, y1, z1),
        ]

    box = make_box(-10.0, 10.0, -5.0, 5.0, 0.0, 20.0)
    skewed = [
        (-8.0, -4.0, 0.0), (10.0, -2.0, 2.0), (12.0, 8.0, 3.0), (-6.0, 6.0, -1.0),
        (-6.0, -3.0, 18.0), (12.0, -1.0, 21.0), (14.0, 9.0, 22.0), (-4.0, 7.0, 17.0),
    ]
    cases = [
        (box, (50.0, 0.0, 10.0, 5.0)),
        (box, (0.0, 0.0, 10.0, 1.0)),
        (box, (12.0, 0.0, 10.0, 3.0)),
        (box, (15.0, 0.0, 10.0, 4.0)),
        (box, (11.5, 6.5, 10.0, 3.0)),
        (box, (12.5, 7.5, 10.0, 2.5)),
        (box, (10.0, 5.0, 20.0, 0.5)),
        (box, (12.0, 7.0, 22.0, 1.0)),
        (skewed, (2.0, 1.0, 10.0, 0.5)),
        (skewed, (13.0, 3.0, 11.0, 2.5)),
        (skewed, (16.0, 3.0, 11.0, 1.0)),
        (skewed, (12.5, 9.5, 12.0, 2.5)),
    ]
    vectors = []
    for corners, sphere in cases:
        flat = [c for pt in corners for c in pt]
        result, _, _ = run(
            read,
            0x0083D2FC,
            0,
            [CORNERS, SPHERE],
            registers={"fpcw": 0x027F},
            memory=[
                (CORNERS, struct.pack("<24f", *flat)),
                (SPHERE, struct.pack("<4f", *sphere)),
            ],
        )
        vectors.append({
            "corners": [[float_bits(c) for c in pt] for pt in corners],
            "center": [float_bits(v) for v in sphere[:3]],
            "radius": float_bits(sphere[3]),
            "intersects": result != 0,
        })
    write("0083D2FC.json", vectors)


def rotate_axis_vectors(read):
    """0x0083CDB0: rotates a target matrix or transformation stack top around an arbitrary axis."""
    STACK = 0x50004400
    DST = 0x50002000
    AXIS = 0x50002100
    ident = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)
    base = (0.8, 0.2, -0.3, 0.0, -0.1, 1.1, 0.4, 0.0, 0.3, -0.4, 0.9, 0.0, 12.0, -5.0, 7.5, 1.0)
    cases = [
        (True, base, (1.0, 0.0, 0.0), 0x1234),
        (False, ident, (-1.0, 0.0, 0.0), 0x2000),
        (True, base, (0.0, 1.0, 0.0), -0x2345),
        (False, base, (0.0, -1.0, 0.0), 0x4000),
        (True, ident, (0.0, 0.0, 1.0), 0x1555),
        (False, base, (0.0, 0.0, -1.0), 0x2AAA),
        (False, base, (0.0, 3.0, 4.0), 0x1800),
        (True, base, (1.5, -2.25, 3.75), 0x3333),
        (False, ident, (0.26726124, 0.5345225, -0.8017837), -0x1C71),
        (True, base, (0.0, 0.0, 0.0), 0x1000),
        (False, base, (1.0, 2.0, 3.0), 0),
    ]
    vectors = []
    for use_stack, mat, axis, angle in cases:
        mem = [
            (STACK, struct.pack("<16f", *mat) + b"\x00" * 192),
            (DST, struct.pack("<16f", *mat)),
            (AXIS, struct.pack("<3f", *axis)),
            (0x00AF0328, struct.pack("<I", STACK)),
        ]
        target = STACK if use_stack else DST
        _, _, captured = run(
            read,
            0x0083CDB0,
            0,
            [angle & 0xFFFFFFFF],
            registers={"ecx": 0 if use_stack else DST, "edx": AXIS, "fpcw": 0x027F},
            memory=mem,
            capture=[(target, 64)],
        )
        out = struct.unpack("<16f", captured[target])
        vectors.append({
            "useStack": use_stack,
            "matrix": [float_bits(v) for v in mat],
            "axis": [float_bits(v) for v in axis],
            "angle": angle,
            "result": [float_bits(v) for v in out],
        })
    write("0083CDB0.json", vectors)


def transform_load_identity_vectors(read):
    """0x00830CD8: loads the identity matrix into an explicit matrix or the transformation stack top."""
    STACK = 0x50004400
    DST = 0x50002000
    IDENT = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)
    non_ident = (2.0, 0.5, -1.0, 0.0, 0.25, 3.0, 0.75, 0.0, -0.5, 1.25, 0.5, 0.0, 10.0, -20.0, 30.0, 1.0)
    vectors = []
    for use_stack in [False, True]:
        target = STACK if use_stack else DST
        _, _, captured = run(
            read,
            0x00830CD8,
            0,
            [],
            registers={"ecx": 0 if use_stack else DST, "fpcw": 0x027F},
            memory=[
                (STACK, struct.pack("<16f", *non_ident)),
                (DST, struct.pack("<16f", *non_ident)),
                (0x00AF0328, struct.pack("<I", STACK)),
                (0x00A21740, struct.pack("<16f", *IDENT)),
            ],
            capture=[(target, 64)],
        )
        vectors.append({
            "useStack": use_stack,
            "initial": [float_bits(v) for v in non_ident],
            "result": [float_bits(v) for v in struct.unpack("<16f", captured[target])],
        })
    write("00830CD8.json", vectors)


def transform_translate_xyz_vectors(read):
    """0x00830B74: translates an explicit matrix or the transformation stack top by scalar (x, y, z)."""
    STACK = 0x50004400
    DST = 0x50002000
    base = (0.8, 0.2, -0.3, 0.0, -0.1, 1.1, 0.4, 0.0, 0.3, -0.4, 0.9, 0.0, 12.0, -5.0, 7.5, 1.0)
    ident = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)
    vectors = []
    for use_stack, mat, delta in [
        (True, ident, (3.5, -2.25, 8.75)),
        (False, base, (0.0, 15.0, -4.5)),
        (True, base, (-10.5, 4.25, 6.125)),
    ]:
        target = STACK if use_stack else DST
        _, _, captured = run(
            read,
            0x00830B74,
            0,
            [float_bits(d) for d in delta],
            registers={"ecx": 0 if use_stack else DST, "fpcw": 0x027F},
            memory=[
                (STACK, struct.pack("<16f", *mat)),
                (DST, struct.pack("<16f", *mat)),
                (0x00AF0328, struct.pack("<I", STACK)),
            ],
            capture=[(target, 64)],
        )
        vectors.append({
            "useStack": use_stack,
            "matrix": [float_bits(v) for v in mat],
            "translation": [float_bits(v) for v in delta],
            "result": [float_bits(v) for v in struct.unpack("<16f", captured[target])],
        })
    write("00830B74.json", vectors)


def camera_viewport_apply_scale_vectors(read):
    """0x0083A5F0: copies viewport projection half-width, half-height, and aspect field to projection globals."""
    SETTINGS = 0x50002000
    vectors = []
    for half_w, half_h, near_plane in [(320.0, 240.0, 1.0), (512.0, 384.0, 2.5), (640.0, 360.0, 0.75)]:
        buf = bytearray(72)
        struct.pack_into("<f", buf, 0x08, half_w)
        struct.pack_into("<f", buf, 0x0C, half_h)
        struct.pack_into("<f", buf, 0x18, near_plane)
        _, _, captured = run(
            read,
            0x0083A5F0,
            0,
            [SETTINGS],
            registers={"fpcw": 0x027F},
            memory=[(SETTINGS, bytes(buf))],
            capture=[(0x00AF02C8, 4), (0x00AF02CC, 4), (0x00AF02D8, 4)],
        )
        vectors.append({
            "halfWidth": float_bits(half_w),
            "halfHeight": float_bits(half_h),
            "nearPlane": float_bits(near_plane),
            "globalHalfWidth": struct.unpack("<I", captured[0x00AF02C8])[0],
            "globalHalfHeight": struct.unpack("<I", captured[0x00AF02CC])[0],
            "globalNearPlane": struct.unpack("<I", captured[0x00AF02D8])[0],
        })
    write("0083A5F0.json", vectors)


def camera_viewport_apply_vectors(read):
    """0x004D4374, 0x004D434C, 0x004D4438, 0x004D46FC: updates active viewport geometry and flags."""
    SETTINGS = 0x50002000
    apply_vectors = []
    custom_vectors = []
    reset_vectors = []
    for flags_before, scale_x, scale_y, half_w, half_h, width, height, x, y, m_x, m_y, near_s, far_s in [
        (0x00000000, 1.0, 0.75, 320.0, 240.0, 640.0, 480.0, 0, 0, 0.0, 0.0, 1.0, 0.85),
        (0x00000005, 1.25, 1.5, 400.0, 300.0, 800.0, 600.0, 16, 24, 12.0, 8.0, 0.9, 0.75),
    ]:
        buf = bytearray(72)
        struct.pack_into("<f", buf, 0x08, half_w)
        struct.pack_into("<f", buf, 0x0C, half_h)
        struct.pack_into("<f", buf, 0x28, width)
        struct.pack_into("<f", buf, 0x2C, height)
        struct.pack_into("<i", buf, 0x30, x)
        struct.pack_into("<i", buf, 0x34, y)
        struct.pack_into("<f", buf, 0x38, m_x)
        struct.pack_into("<f", buf, 0x3C, m_y)
        struct.pack_into("<f", buf, 0x40, near_s)
        struct.pack_into("<f", buf, 0x44, far_s)
        mem = [
            (SETTINGS, bytes(buf)),
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00ACC08C, struct.pack("<f", scale_x)),
            (0x00ACC090, struct.pack("<f", scale_y)),
        ]
        cap = [(0x00A48820, 72), (0x00A489FC, 4)]
        _, _, c1 = run(read, 0x004D4374, 0, [], registers={"eax": SETTINGS, "fpcw": 0x027F}, memory=mem, capture=cap)
        r2, _, c2 = run(read, 0x004D434C, 0, [SETTINGS], registers={"fpcw": 0x027F}, memory=mem, capture=cap)
        vals1 = struct.unpack("<18I", c1[0x00A48820])
        vals2 = struct.unpack("<18I", c2[0x00A48820])
        entry = {
            "flagsBefore": flags_before,
            "scaleX": float_bits(scale_x),
            "scaleY": float_bits(scale_y),
            "halfWidth": float_bits(half_w),
            "halfHeight": float_bits(half_h),
            "width": float_bits(width),
            "height": float_bits(height),
            "x": x,
            "y": y,
            "offsetX": float_bits(m_x),
            "offsetY": float_bits(m_y),
            "nearScale": float_bits(near_s),
            "farScale": float_bits(far_s),
            "flagsAfter": struct.unpack("<I", c1[0x00A489FC])[0],
            "viewport": list(vals1),
        }
        apply_vectors.append(entry)
        custom_vectors.append({
            **entry,
            "flagsAfter": struct.unpack("<I", c2[0x00A489FC])[0],
            "viewport": list(vals2),
            "result": r2,
        })

    for flags_before, dw, dh in [(0x00000405, 640, 480), (0x00000008, 1280, 720)]:
        mem = [
            (0x00A489FC, struct.pack("<I", flags_before)),
            (0x00AF0350, struct.pack("<i", dw)),
            (0x00AF0354, struct.pack("<i", dh)),
            (0x00ACC08C, struct.pack("<f", 1.0)),
            (0x00ACC090, struct.pack("<f", 1.0)),
        ]
        _, _, c3 = run(read, 0x004D4438, 0, [], registers={"fpcw": 0x027F}, memory=mem, capture=[(0x00A48820, 72), (0x00A489FC, 4)])
        reset_vectors.append({
            "flagsBefore": flags_before,
            "displayWidth": dw,
            "displayHeight": dh,
            "flagsAfter": struct.unpack("<I", c3[0x00A489FC])[0],
            "viewport": list(struct.unpack("<18I", c3[0x00A48820])),
        })

    _, _, c4 = run(read, 0x004D46FC, 0, [], registers={"fpcw": 0x027F}, memory=[], capture=[(0x00A489C0, 12)])
    aux = list(struct.unpack("<3I", c4[0x00A489C0]))

    write("004D4374.json", apply_vectors)
    write("004D434C.json", custom_vectors)
    write("004D4438.json", reset_vectors)
    write("004D46FC.json", [{"values": aux}])


def camera_viewport_reset_vectors(read):
    """0x004D471C and 0x004D4800: initializes default camera viewport, flags, and up axis."""
    vectors_471c = []
    vectors_4800 = []
    for dw, dh in [(640, 480), (1024, 768), (1280, 720)]:
        mem = [
            (0x00AF0350, struct.pack("<i", dw)),
            (0x00AF0354, struct.pack("<i", dh)),
            (0x00ACC08C, struct.pack("<f", 1.0)),
            (0x00ACC090, struct.pack("<f", 1.0)),
            (0x00A489FC, struct.pack("<I", 0xFFFFFFFF)),
            (0x00A489F4, struct.pack("<I", 0x12345678)),
            (0x00A489F8, struct.pack("<I", 99)),
            (0x00A48A44, struct.pack("<I", 7)),
            (0x00A48A34, struct.pack("<H", 1)),
            (0x00A48A40, struct.pack("<B", 0)),
        ]
        _, _, c1 = run(
            read,
            0x004D471C,
            0,
            [],
            registers={"fpcw": 0x027F},
            memory=mem,
            capture=[(0x00A48820, 72), (0x00A489CC, 16), (0x00A489F4, 12), (0x00A48A34, 24)],
        )
        vectors_471c.append({
            "displayWidth": dw,
            "displayHeight": dh,
            "viewport": list(struct.unpack("<18I", c1[0x00A48820])),
            "upAxis": list(struct.unpack("<3I", c1[0x00A489CC][:12])),
            "activeMode": c1[0x00A489F4][0],
            "flags": struct.unpack("<I", c1[0x00A489F4][8:12])[0],
            "snapRequested": struct.unpack("<I", c1[0x00A48A34][16:20])[0],
        })

        _, _, c2 = run(
            read,
            0x004D4800,
            0,
            [],
            registers={"fpcw": 0x027F},
            memory=mem + [(0x00A489FC, struct.pack("<I", 0))],
            capture=[
                (0x00A48820, 72),
                (0x009ACB68, 8),
                (0x00A489FC, 4),
                (0x00A48A58, 8),
                (0x00AF02C8, 20),
            ],
        )
        sw = struct.unpack("<h", c2[0x009ACB68][:2])[0]
        sh = struct.unpack("<h", c2[0x009ACB68][4:6])[0]
        db_min, db_max = struct.unpack("<2I", c2[0x00A48A58])
        hw = struct.unpack("<I", c2[0x00AF02C8][:4])[0]
        hh = struct.unpack("<I", c2[0x00AF02C8][4:8])[0]
        np_val = struct.unpack("<I", c2[0x00AF02C8][16:20])[0]
        vectors_4800.append({
            "displayWidth": dw,
            "displayHeight": dh,
            "screenWidth": sw,
            "screenHeight": sh,
            "flags": struct.unpack("<I", c2[0x00A489FC])[0],
            "viewport": list(struct.unpack("<18I", c2[0x00A48820])),
            "depthBiasMin": db_min,
            "depthBiasMax": db_max,
            "globalHalfWidth": hw,
            "globalHalfHeight": hh,
            "globalNearPlane": np_val,
        })
    write("004D471C.json", vectors_471c)
    write("004D4800.json", vectors_4800)


def camera_point_view_margin_vectors(read):
    """0x004D45E0: checks whether a world point lies inside the depth band and projected X margin."""
    STACK = 0x50004400
    PT = 0x50002000
    STUB = 0x50006000
    view_mat = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0)
    right_axis = (1.0, 0.0, 0.0)
    vectors = []
    # Cases: (point, minDepth, margin, projectedX, screenWidth)
    cases = [
        ((5.0, 0.0, 2.0), 100.0, 4.0, 100.0, 640),
        ((5.0, 0.0, 0.0), 100.0, 4.0, 100.0, 640),
        ((5.0, 0.0, -150.0), 100.0, 4.0, 100.0, 640),
        ((-5.0, 0.0, -50.0), 100.0, 4.0, -0.5, 640),
        ((-5.0, 0.0, -50.0), 100.0, 4.0, 0.0, 640),
        ((-5.0, 0.0, -50.0), 100.0, 4.0, 12.0, 640),
        ((5.0, 0.0, -50.0), 100.0, 4.0, 640.0, 640),
        ((5.0, 0.0, -50.0), 100.0, 4.0, 641.0, 640),
        ((0.0, 0.0, -50.0), 100.0, 4.0, 320.0, 640),
    ]
    for pt, min_depth, margin, proj_x, screen_w in cases:
        # mov eax, [esp+4]; mov dword ptr [eax], imm32; ret 0x18
        stub = b"\x8B\x44\x24\x04\xC7\x00" + struct.pack("<f", proj_x) + b"\xC2\x18\x00"
        result, _, _ = run(
            read,
            0x004D45E0,
            0,
            [PT, float_bits(min_depth), float_bits(margin)],
            registers={"fpcw": 0x027F},
            memory=[
                (STACK, struct.pack("<16f", *view_mat)),
                (0x00AF0328, struct.pack("<I", STACK)),
                (PT, struct.pack("<3f", *pt)),
                (0x00A489E8, struct.pack("<3f", *right_axis)),
                (0x009ACB68, struct.pack("<H", screen_w)),
                (0x00ACC0F0, struct.pack("<2f", 0.0, 0.0)),
                (0x00A33FC0, struct.pack("<I", STUB)),
                (STUB, stub),
            ],
        )
        vectors.append({
            "matrix": [float_bits(v) for v in view_mat],
            "rightAxis": [float_bits(v) for v in right_axis],
            "point": [float_bits(v) for v in pt],
            "minDepth": float_bits(min_depth),
            "horizontalMargin": float_bits(margin),
            "projectedX": float_bits(proj_x),
            "screenWidth": screen_w,
            "visible": result != 0,
        })
    write("004D45E0.json", vectors)


def camera_apply_inverse_view_vectors(read):
    """0x004D4564: multiplies the top of the transformation stack by the global inverse view matrix."""
    STACK = 0x50004400
    inv_view = (0.8, 0.0, -0.6, 0.0, 0.0, 1.0, 0.0, 0.0, 0.6, 0.0, 0.8, 0.0, 12.0, 4.0, -8.0, 1.0)
    top = (1.0, 0.5, 0.0, 0.0, -0.5, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 2.0, -3.0, 5.0, 1.0)
    _, _, captured = run(
        read,
        0x004D4564,
        0,
        [],
        registers={"fpcw": 0x027F},
        memory=[
            (STACK, struct.pack("<16f", *top) + b"\x00" * 192),
            (0x00A48980, struct.pack("<16f", *inv_view)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ],
        capture=[(STACK, 64)],
    )
    vectors = [{
        "stackTop": [float_bits(v) for v in top],
        "inverseView": [float_bits(v) for v in inv_view],
        "result": [float_bits(v) for v in struct.unpack("<16f", captured[STACK])],
    }]
    write("004D4564.json", vectors)


def camera_inverse_view_transform_point_vectors(read):
    """0x004D4574: pushes stack copy, applies global inverse view matrix, transforms a point, and pops."""
    STACK = 0x50004400
    SRC = 0x50002000
    DST = 0x50002020
    inv_view = (0.8, 0.0, -0.6, 0.0, 0.0, 1.0, 0.0, 0.0, 0.6, 0.0, 0.8, 0.0, 12.0, 4.0, -8.0, 1.0)
    top = (1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 2.0, -3.0, 5.0, 1.0)
    src = (3.0, -2.0, 7.0)
    _, _, captured = run(
        read,
        0x004D4574,
        0,
        [SRC, DST],
        registers={"fpcw": 0x027F},
        memory=[
            (STACK, struct.pack("<16f", *top) + b"\x00" * 256),
            (SRC, struct.pack("<3f", *src)),
            (DST, b"\x00" * 12),
            (0x00A48980, struct.pack("<16f", *inv_view)),
            (0x00AF0328, struct.pack("<I", STACK)),
            (0x00AF0380, struct.pack("<I", 128)),
            (0x00AF0384, struct.pack("<I", 0)),
        ],
        capture=[(DST, 12)],
    )
    vectors = [{
        "stackTop": [float_bits(v) for v in top],
        "inverseView": [float_bits(v) for v in inv_view],
        "point": [float_bits(v) for v in src],
        "result": [float_bits(v) for v in struct.unpack("<3f", captured[DST])],
    }]
    write("004D4574.json", vectors)


def transform_matrix_point_vectors(read):
    """0x00830AA0: transforms a 3D point by an explicit matrix or current transformation stack top."""
    STACK = 0x50004400
    MAT = 0x50001800
    SRC = 0x50002000
    DST = 0x50002020
    mat = (0.5, -0.25, 0.75, 0.0, 0.125, 1.5, -0.5, 0.0, -0.75, 0.25, 0.875, 0.0, -12.0, 8.5, 4.25, 1.0)
    pt = (2.0, -4.0, 6.0)
    vectors = []
    for use_stack in [False, True]:
        _, _, captured = run(
            read,
            0x00830AA0,
            0,
            [DST],
            registers={"ecx": 0 if use_stack else MAT, "edx": SRC, "fpcw": 0x027F},
            memory=[
                (STACK, struct.pack("<16f", *mat)),
                (MAT, struct.pack("<16f", *mat)),
                (SRC, struct.pack("<3f", *pt)),
                (DST, b"\x00" * 12),
                (0x00AF0328, struct.pack("<I", STACK)),
            ],
            capture=[(DST, 12)],
        )
        vectors.append({
            "useStack": use_stack,
            "matrix": [float_bits(v) for v in mat],
            "point": [float_bits(v) for v in pt],
            "result": [float_bits(v) for v in struct.unpack("<3f", captured[DST])],
        })
    write("00830AA0.json", vectors)


def camera_orbit_align_vectors(read):
    """0x004D5188: computes orbit distance, pitch, and yaw angles from an eye and target pair."""
    OBJ = 0x50001000
    ORBIT = 0x50001800
    EYE = 0x50002000
    TGT = 0x50002020
    vectors = []
    for eye, tgt in [
        ((0.0, 20.0, 40.0), (0.0, 10.0, 0.0)),
        ((15.0, 35.0, -25.0), (-5.0, 10.0, 5.0)),
        ((-30.0, 14.0, 12.0), (10.0, 12.0, -10.0)),
        ((-5.0, 8.0, 20.0), (5.0, 15.0, -20.0)),
    ]:
        orbit = bytearray(128)
        _, _, captured = run(
            read,
            0x004D5188,
            0,
            [EYE, TGT],
            registers={"ecx": OBJ, "fpcw": 0x027F},
            memory=[
                (OBJ, b"\x00" * 64),
                (ORBIT, bytes(orbit)),
                (EYE, struct.pack("<3f", *eye)),
                (TGT, struct.pack("<3f", *tgt)),
                (0x00A48A18, struct.pack("<I", ORBIT)),
                (0x00AE7F00, struct.pack("<I", 1)),
            ],
            capture=[(ORBIT, 128)],
        )
        out = captured[ORBIT]
        vectors.append({
            "eye": [float_bits(v) for v in eye],
            "target": [float_bits(v) for v in tgt],
            "distance": float_bits(struct.unpack_from("<f", out, 0x6C)[0]),
            "pitchAngle": struct.unpack_from("<i", out, 0x2C)[0],
            "yawAngle": struct.unpack_from("<i", out, 0x30)[0],
        })
    write("004D5188.json", vectors)


if __name__ == "__main__":
    main()
