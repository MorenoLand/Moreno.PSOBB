using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// A <c>map_*bm.bin</c> room table, stored big-endian under the <c>vr1b</c> marker or little-endian under <c>vr2b</c>.
/// </summary>
/// <remarks>
/// The table carries one record per room section: the section identifier, the number of visible-section indices and the index-array position. The visible-section list is shared by all records and holds 16-bit section identifiers. The original client byte-swaps the big-endian form in place before use and reads the little-endian form as stored.
/// </remarks>
public sealed class MapRoomGraph
{
	/// <summary>The four-byte big-endian file marker.</summary>
	public static ReadOnlySpan<byte> BigEndianMarker => "vr1b"u8;

	/// <summary>The four-byte little-endian file marker.</summary>
	public static ReadOnlySpan<byte> LittleEndianMarker => "vr2b"u8;

	private readonly MapRoomSection[] _sections;

	private MapRoomGraph(bool isLittleEndian, MapRoomSection[] sections)
	{
		IsLittleEndian = isLittleEndian;
		_sections = sections;
	}

	/// <summary>Gets whether the table stores its numbers little-endian.</summary>
	public bool IsLittleEndian { get; }

	/// <summary>Gets the room sections in file order.</summary>
	public IReadOnlyList<MapRoomSection> Sections => _sections;

	/// <summary>
	/// Parses either room-table byte order.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <returns>The parsed room sections.</returns>
	/// <exception cref="SceneFormatException">The marker, record table or visible-section indices lie outside the file.</exception>
	[Original(0x0080B52C)]
	public static MapRoomGraph Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < 8)
			throw new SceneFormatException("The room table is shorter than its marker and count.", data.Length);
		bool isLittleEndian;
		if (data[..4].SequenceEqual(BigEndianMarker))
			isLittleEndian = false;
		else if (data[..4].SequenceEqual(LittleEndianMarker))
			isLittleEndian = true;
		else
			throw new SceneFormatException("The room table does not begin with the vr1b or vr2b marker.", 0);
		uint sectionCount = isLittleEndian ? BinaryPrimitives.ReadUInt32LittleEndian(data[4..]) : BinaryPrimitives.ReadUInt32BigEndian(data[4..]);
		if (sectionCount > int.MaxValue / 12)
			throw new SceneFormatException($"The room section count {sectionCount} exceeds the readable range.", 4);
		int recordLength = (int)sectionCount * 12;
		if (recordLength > data.Length - 8)
			throw new SceneFormatException($"The room section table with {sectionCount} records does not fit the file.", 8);
		int indexBase = 8 + recordLength;
		if ((data.Length - indexBase & 1) != 0)
			throw new SceneFormatException("The room section index array has an odd byte length.", indexBase);
		int indexCount = (data.Length - indexBase) / 2;
		MapRoomSection[] sections = new MapRoomSection[(int)sectionCount];
		for (int index = 0; index < sections.Length; index++)
		{
			int recordOffset = 8 + index * 12;
			uint sectionId = isLittleEndian ? BinaryPrimitives.ReadUInt32LittleEndian(data[recordOffset..]) : BinaryPrimitives.ReadUInt32BigEndian(data[recordOffset..]);
			uint count = isLittleEndian ? BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + 4)..]) : BinaryPrimitives.ReadUInt32BigEndian(data[(recordOffset + 4)..]);
			uint offset = isLittleEndian ? BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + 8)..]) : BinaryPrimitives.ReadUInt32BigEndian(data[(recordOffset + 8)..]);
			if (offset > int.MaxValue || count > int.MaxValue || (long)offset + count > indexCount)
				throw new SceneFormatException($"Room section {index} references indices {offset} to {(long)offset + count} of {indexCount}.", recordOffset + 8);
			ushort[] visible = new ushort[(int)count];
			int elementOffset = indexBase + (int)offset * 2;
			for (int element = 0; element < visible.Length; element++)
				visible[element] = isLittleEndian ? BinaryPrimitives.ReadUInt16LittleEndian(data[(elementOffset + element * 2)..]) : BinaryPrimitives.ReadUInt16BigEndian(data[(elementOffset + element * 2)..]);
			sections[index] = new MapRoomSection(sectionId, visible);
		}
		return new MapRoomGraph(isLittleEndian, sections);
	}
}
