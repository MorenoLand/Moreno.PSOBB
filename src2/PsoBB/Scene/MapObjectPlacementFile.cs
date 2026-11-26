using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// A map object table: 0x44-byte preset placement records in floor order.
/// </summary>
/// <remarks>
/// The table is the file behind <c>map_*o.dat</c>. Each record carries the object type, the room section, a position, three rotations and six constructor parameters. The client overwrites the two entity index words at load time, so the stored values describe the source layout rather than the final runtime indices.
/// </remarks>
public sealed class MapObjectPlacementFile
{
	/// <summary>The fixed width of one placement record.</summary>
	public const int EntrySize = 0x44;

	private readonly MapObjectPlacement[] _objects;
	private readonly byte[] _trailingBytes;

	private MapObjectPlacementFile(MapObjectPlacement[] objects, byte[] trailingBytes)
	{
		_objects = objects;
		_trailingBytes = trailingBytes;
	}

	/// <summary>Gets the placements in file order.</summary>
	public IReadOnlyList<MapObjectPlacement> Objects => _objects;

	/// <summary>Gets bytes after the last whole record, which the original loader ignores.</summary>
	public ReadOnlyMemory<byte> TrailingBytes => _trailingBytes;

	/// <summary>
	/// Parses whole placement records and preserves a partial tail.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <returns>The placements and any trailing bytes.</returns>
	/// <exception cref="SceneFormatException">The first record cannot be read.</exception>
	[Original(0x0080FAB8, "load_preset_entities")]
	public static MapObjectPlacementFile Parse(ReadOnlySpan<byte> data)
	{
		int count = data.Length / EntrySize;
		MapObjectPlacement[] objects = new MapObjectPlacement[count];
		for (int index = 0; index < count; index++)
			objects[index] = ParseRecord(data, index * EntrySize, index);
		byte[] trailingBytes = data[(count * EntrySize)..].ToArray();
		return new MapObjectPlacementFile(objects, trailingBytes);
	}

	/// <summary>
	/// Parses one placement record.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <param name="offset">Record offset.</param>
	/// <param name="index">Record index used in error messages.</param>
	/// <returns>The parsed placement.</returns>
	/// <exception cref="SceneFormatException">The record is truncated.</exception>
	private static MapObjectPlacement ParseRecord(ReadOnlySpan<byte> data, int offset, int index)
	{
		if (offset < 0 || offset > data.Length - EntrySize)
			throw new SceneFormatException($"Object placement {index} is truncated.", offset);
		ReadOnlySpan<byte> record = data[offset..];
		return new MapObjectPlacement(
			BinaryPrimitives.ReadUInt16LittleEndian(record),
			BinaryPrimitives.ReadUInt16LittleEndian(record[2..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[4..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[6..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[8..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[0x0A..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[0x0C..]),
			BinaryPrimitives.ReadUInt16LittleEndian(record[0x0E..]),
			new Vector3(
				BinaryPrimitives.ReadSingleLittleEndian(record[0x10..]),
				BinaryPrimitives.ReadSingleLittleEndian(record[0x14..]),
				BinaryPrimitives.ReadSingleLittleEndian(record[0x18..])),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x1C..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x20..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x24..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x28..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x2C..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x30..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x34..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x38..]),
			BinaryPrimitives.ReadInt32LittleEndian(record[0x3C..]));
	}
}
