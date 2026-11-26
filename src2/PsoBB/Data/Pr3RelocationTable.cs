using System.Buffers.Binary;

namespace PsoBB.Data;

/// <summary>
/// Reads the relocation table that accompanies a PR2 payload and resolves its inline relative pointers.
/// </summary>
/// <remarks>
/// The table starts with a 0x20-byte header. The pointer count is at offset 4 and the root field's byte offset is at 0x10. From 0x20 onward each little-endian 16-bit value is a distance in 32-bit words from the previous pointer field; the first distance starts at the payload base. The original adds the loaded payload's address to every field; this port exposes the same field-to-target association as payload offsets, because managed consumers index the payload instead of adding a process address.
/// </remarks>
public sealed class Pr3RelocationTable
{
	/// <summary>Size of the relocation header.</summary>
	public const int HeaderSize = 0x20;

	/// <summary>A resolved inline pointer field and the payload offset it refers to.</summary>
	/// <param name="FieldOffset">Byte offset of the 32-bit pointer field in the payload.</param>
	/// <param name="TargetOffset">Byte offset inside the payload that the field refers to.</param>
	public readonly record struct Pointer(int FieldOffset, int TargetOffset);

	private readonly int[] _fieldOffsets;
	private readonly int _rootFieldOffset;

	private Pr3RelocationTable(int[] fieldOffsets, int rootFieldOffset)
	{
		_fieldOffsets = fieldOffsets;
		_rootFieldOffset = rootFieldOffset;
	}

	/// <summary>Gets the number of inline pointer fields.</summary>
	public int Count => _fieldOffsets.Length;

	/// <summary>Gets the byte offset of the payload's root field.</summary>
	public int RootFieldOffset => _rootFieldOffset;

	/// <summary>
	/// Reads a PR3 relocation table.
	/// </summary>
	/// <param name="table">The complete decompressed PR3 payload.</param>
	/// <returns>The parsed relocation table.</returns>
	/// <exception cref="Pr2FormatException">The table is shorter than its header or its distances.</exception>
	public static Pr3RelocationTable Open(ReadOnlySpan<byte> table)
	{
		if (table.Length < HeaderSize)
			throw new Pr2FormatException($"A PR3 table needs a {HeaderSize}-byte header but only {table.Length} bytes are present.");
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(table[4..]);
		uint rootFieldOffset = BinaryPrimitives.ReadUInt32LittleEndian(table[0x10..]);
		if (count > (uint)((table.Length - HeaderSize) / sizeof(ushort)))
			throw new Pr2FormatException($"The PR3 header declares {count} pointer fields but only {table.Length - HeaderSize} bytes of distances are present.");
		if (rootFieldOffset > int.MaxValue)
			throw new Pr2FormatException($"The PR3 root field offset {rootFieldOffset} exceeds the readable range.");
		int[] fields = new int[count];
		long offset = 0;
		for (int index = 0; index < fields.Length; index++)
		{
			offset += BinaryPrimitives.ReadUInt16LittleEndian(table[(HeaderSize + index * sizeof(ushort))..]) * 4L;
			if (offset > int.MaxValue)
				throw new Pr2FormatException($"PR3 pointer field {index} lies beyond the readable range.");
			fields[index] = (int)offset;
		}
		return new Pr3RelocationTable(fields, (int)rootFieldOffset);
	}

	/// <summary>
	/// Resolves every inline pointer field and the root field against a PR2 payload.
	/// </summary>
	/// <param name="payload">The decompressed PR2 payload.</param>
	/// <returns>The field offsets and the payload offsets they refer to.</returns>
	/// <exception cref="Pr2FormatException">A field or target lies outside the payload.</exception>
	[Original(0x005B99B4, "RewriteRelAssetPointers")]
	public IReadOnlyList<Pointer> ResolvePointers(ReadOnlySpan<byte> payload)
	{
		ValidateField(payload, _rootFieldOffset, "root");
		Pointer[] pointers = new Pointer[_fieldOffsets.Length];
		for (int index = 0; index < pointers.Length; index++)
		{
			int fieldOffset = _fieldOffsets[index];
			ValidateField(payload, fieldOffset, $"pointer {index}");
			uint target = BinaryPrimitives.ReadUInt32LittleEndian(payload[fieldOffset..]);
			if (target > int.MaxValue || target >= payload.Length)
				throw new Pr2FormatException($"PR3 pointer {index} at byte {fieldOffset} refers to {target}, outside the {payload.Length}-byte payload.");
			pointers[index] = new Pointer(fieldOffset, (int)target);
		}
		return pointers;
	}

	/// <summary>
	/// Reads the payload offset stored in the root field.
	/// </summary>
	/// <param name="payload">The decompressed PR2 payload.</param>
	/// <returns>The byte offset the root field refers to.</returns>
	/// <exception cref="Pr2FormatException">The root field or its target lies outside the payload.</exception>
	public int GetRootTarget(ReadOnlySpan<byte> payload)
	{
		ValidateField(payload, _rootFieldOffset, "root");
		uint target = BinaryPrimitives.ReadUInt32LittleEndian(payload[_rootFieldOffset..]);
		if (target > int.MaxValue || target >= payload.Length)
			throw new Pr2FormatException($"The PR3 root field at byte {_rootFieldOffset} refers to {target}, outside the {payload.Length}-byte payload.");
		return (int)target;
	}

	private static void ValidateField(ReadOnlySpan<byte> payload, int fieldOffset, string name)
	{
		if (fieldOffset < 0 || fieldOffset > payload.Length - sizeof(uint))
			throw new Pr2FormatException($"The PR3 {name} field at byte {fieldOffset} lies outside the {payload.Length}-byte payload.");
	}
}
