using System.Buffers.Binary;
using PsoBB.Mathematics;

namespace PsoBB.Scene;

/// <summary>
/// The <c>lightentry.bin</c> table: one 0x44-byte light entry per map identifier.
/// </summary>
/// <remarks>
/// The scene loader uses the entry whose index is the current map id. Each record stores two direction vectors, specular, diffuse and ambient intensities, and the diffuse and ambient colour channels used by the map sunlight.
/// </remarks>
public sealed class MapLightTable
{
	/// <summary>The fixed width of one light entry.</summary>
	public const int EntrySize = 0x44;

	private readonly MapLightEntry[] _entries;

	private MapLightTable(MapLightEntry[] entries)
	{
		_entries = entries;
	}

	/// <summary>Gets the number of map light entries.</summary>
	public int Count => _entries.Length;

	/// <summary>Gets all entries in map-identifier order.</summary>
	public IReadOnlyList<MapLightEntry> Entries => _entries;

	/// <summary>
	/// Parses the complete light table.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <returns>The parsed table.</returns>
	/// <exception cref="SceneFormatException">The file is not a whole number of light entries.</exception>
	public static MapLightTable Parse(ReadOnlySpan<byte> data)
	{
		if ((data.Length % EntrySize) != 0)
			throw new SceneFormatException($"The light table has {data.Length % EntrySize} bytes after its last entry.", data.Length - data.Length % EntrySize);
		MapLightEntry[] entries = new MapLightEntry[data.Length / EntrySize];
		for (int index = 0; index < entries.Length; index++)
			entries[index] = ParseEntry(data, index * EntrySize);
		return new MapLightTable(entries);
	}

	/// <summary>
	/// Gets the light entry for a map identifier.
	/// </summary>
	/// <param name="mapId">The map identifier.</param>
	/// <returns>The light entry.</returns>
	/// <exception cref="ArgumentOutOfRangeException">No entry exists for the map identifier.</exception>
	public MapLightEntry GetEntry(int mapId)
	{
		if ((uint)mapId >= (uint)_entries.Length)
			throw new ArgumentOutOfRangeException(nameof(mapId), mapId, "The light table has no entry for this map.");
		return _entries[mapId];
	}

	/// <summary>
	/// Parses one light entry.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <param name="offset">Record offset.</param>
	/// <returns>The parsed entry.</returns>
	private static MapLightEntry ParseEntry(ReadOnlySpan<byte> data, int offset) => new(
		new Vector3(
			BinaryPrimitives.ReadSingleLittleEndian(data[offset..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 4)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 8)..])),
		new Vector3(
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x0C)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x10)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x14)..])),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x18)..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x1C)..]),
		BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x20)..]),
		new Vector3(
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x28)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x2C)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x30)..])),
		new Vector3(
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x38)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x3C)..]),
			BinaryPrimitives.ReadSingleLittleEndian(data[(offset + 0x40)..])));
}
