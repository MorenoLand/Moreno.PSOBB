using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// A relocated REL asset image: a flat buffer whose trailing table turns file-relative pointer words into offsets.
/// </summary>
/// <remarks>
/// The last 0x20 bytes hold the fixup-table offset, the fixup count and the root-object offset. The fixup table is a run of 16-bit word counts; each count advances to the next pointer word, and the original adds the image base to that word. The port keeps a zero-based image, so relocation is an identity and the pass validates and counts the pointer words. This is the container used by every map <c>.rel</c> file, so the parsers read a normal buffer whose pointer fields already address it.
/// </remarks>
public sealed class RelContainer
{
	private readonly byte[] _data;

	private RelContainer(byte[] data, int rootOffset, int fixupCount)
	{
		_data = data;
		RootOffset = rootOffset;
		FixupCount = fixupCount;
	}

	/// <summary>Gets the relocated image bytes.</summary>
	public ReadOnlyMemory<byte> Data => _data;

	/// <summary>Gets the offset of the asset root that <c>load_rel_asset2</c> returns.</summary>
	public int RootOffset { get; }

	/// <summary>Gets the number of pointer words the trailer fixed up.</summary>
	public int FixupCount { get; }

	/// <summary>
	/// Reads the trailer, applies the pointer fixups and returns the asset image.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <returns>The relocated image and its root offset.</returns>
	/// <exception cref="SceneFormatException">The trailer, fixup table, pointer slot or root offset is outside the file.</exception>
	[Original(0x005B9BF4, "load_rel_asset2")]
	public static RelContainer Parse(ReadOnlySpan<byte> data)
	{
		const int TrailerSize = 0x20;
		if (data.Length < TrailerSize)
			throw new SceneFormatException("The REL file is shorter than its final 0x20-byte trailer.", data.Length);
		uint fixupCount = BinaryPrimitives.ReadUInt32LittleEndian(data[(data.Length - 0x1C)..]);
		int fixupTableOffset = fixupCount == 0 ? 0 : ReadOffset(data, data.Length - TrailerSize, "fixup table");
		int rootOffset = ReadOffset(data, data.Length - 0x10, "root");
		if (rootOffset > data.Length)
			throw new SceneFormatException($"The REL root offset 0x{rootOffset:X} is outside a {data.Length}-byte file.", data.Length - 0x10);
		if (fixupCount > int.MaxValue / 2)
			throw new SceneFormatException($"The REL fixup count {fixupCount} exceeds the readable table range.", data.Length - 0x1C);
		int tableLength = (int)fixupCount * 2;
		if (fixupCount != 0 && (fixupTableOffset < 0 || tableLength > data.Length - TrailerSize - fixupTableOffset))
			throw new SceneFormatException($"The REL fixup table at 0x{fixupTableOffset:X} with {fixupCount} entries does not fit before the trailer.", data.Length - 0x20);
		byte[] image = data.ToArray();
		int wordOffset = 0;
		for (int index = 0; index < (int)fixupCount; index++)
		{
			wordOffset += BinaryPrimitives.ReadUInt16LittleEndian(image.AsSpan(fixupTableOffset + index * 2));
			long pointerOffset = (long)wordOffset * 4;
			if (pointerOffset < 0 || pointerOffset > image.Length - 4)
				throw new SceneFormatException($"REL fixup {index} resolves to pointer slot 0x{pointerOffset:X}, outside a {image.Length}-byte file.", fixupTableOffset + index * 2);
			uint value = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan((int)pointerOffset));
			if (value > image.Length)
				throw new SceneFormatException($"REL fixup {index} stores 0x{value:X8}, outside a {image.Length}-byte file.", (int)pointerOffset);
			BinaryPrimitives.WriteUInt32LittleEndian(image.AsSpan((int)pointerOffset), value);
		}
		return new RelContainer(image, rootOffset, (int)fixupCount);
	}

	/// <summary>
	/// Reads a trailer offset and rejects one that lies past the file.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <param name="fieldOffset">Offset of the 32-bit field.</param>
	/// <param name="name">Field name used in the error message.</param>
	/// <returns>The stored offset.</returns>
	/// <exception cref="SceneFormatException">The offset is larger than the file.</exception>
	private static int ReadOffset(ReadOnlySpan<byte> data, int fieldOffset, string name)
	{
		uint value = BinaryPrimitives.ReadUInt32LittleEndian(data[fieldOffset..]);
		if (value > int.MaxValue)
			throw new SceneFormatException($"The REL {name} offset 0x{value:X8} exceeds the readable range.", fieldOffset);
		return (int)value;
	}
}
