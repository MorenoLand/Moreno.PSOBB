using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// A <c>.evt</c> map event table: a 16-byte header, 20-byte wave events and an opaque clear-event tail.
/// </summary>
/// <remarks>
/// The header records the declared table size, the header width, the event count and a marker that is zero for regular maps and <c>evt2</c> for random-spawn tables. The tail after the last wave event holds the clear-event records; this loader keeps those bytes intact because their consumer belongs to the unported quest event engine.
/// </remarks>
public sealed class MapEventFile
{
	/// <summary>The event header width.</summary>
	public const int HeaderSize = 0x10;

	/// <summary>The fixed width of one map event.</summary>
	public const int EventSize = 0x14;

	private readonly MapEvent[] _events;
	private readonly byte[] _clearEvents;
	private readonly byte[] _trailingBytes;

	private MapEventFile(uint marker, MapEvent[] events, byte[] clearEvents, byte[] trailingBytes)
	{
		Marker = marker;
		_events = events;
		_clearEvents = clearEvents;
		_trailingBytes = trailingBytes;
	}

	/// <summary>Gets the header marker, which is zero for regular tables and <c>evt2</c> for random-spawn tables.</summary>
	public uint Marker { get; }

	/// <summary>Gets the wave events in file order.</summary>
	public IReadOnlyList<MapEvent> Events => _events;

	/// <summary>Gets the opaque clear-event bytes that follow the wave events.</summary>
	public ReadOnlyMemory<byte> ClearEvents => _clearEvents;

	/// <summary>Gets the bytes after the declared table size.</summary>
	public ReadOnlyMemory<byte> TrailingBytes => _trailingBytes;

	/// <summary>
	/// Parses a map event table.
	/// </summary>
	/// <param name="data">The complete file.</param>
	/// <returns>The parsed events and clear-event tail.</returns>
	/// <exception cref="SceneFormatException">The header, event array or declared table size is invalid.</exception>
	[Original(0x0080CF78, "LoadMapEventTableByVariant_0080cf78")]
	public static MapEventFile Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < HeaderSize)
			throw new SceneFormatException("The map event header is truncated.", data.Length);
		uint byteSize = BinaryPrimitives.ReadUInt32LittleEndian(data);
		uint headerSize = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		uint eventCount = BinaryPrimitives.ReadUInt32LittleEndian(data[8..]);
		uint marker = BinaryPrimitives.ReadUInt32LittleEndian(data[0x0C..]);
		if (headerSize < HeaderSize || headerSize > data.Length)
			throw new SceneFormatException($"The map event header size {headerSize} is outside the file.", 4);
		if (byteSize < headerSize || byteSize > data.Length)
			throw new SceneFormatException($"The map event table size {byteSize} is outside the file.", 0);
		long eventBytes = (long)eventCount * EventSize;
		if (eventBytes > byteSize - headerSize)
			throw new SceneFormatException($"The map event table declares {eventCount} events that do not fit its {byteSize} bytes.", 8);
		MapEvent[] events = new MapEvent[(int)eventCount];
		for (int index = 0; index < events.Length; index++)
		{
			ReadOnlySpan<byte> eventData = data[((int)headerSize + index * EventSize)..];
			events[index] = new MapEvent(
				BinaryPrimitives.ReadUInt32LittleEndian(eventData),
				BinaryPrimitives.ReadUInt16LittleEndian(eventData[4..]),
				BinaryPrimitives.ReadUInt16LittleEndian(eventData[6..]),
				BinaryPrimitives.ReadUInt16LittleEndian(eventData[8..]),
				BinaryPrimitives.ReadUInt16LittleEndian(eventData[0x0A..]),
				BinaryPrimitives.ReadUInt32LittleEndian(eventData[0x0C..]),
				BinaryPrimitives.ReadUInt32LittleEndian(eventData[0x10..]));
		}
		int clearOffset = (int)headerSize + events.Length * EventSize;
		byte[] clearEvents = data[clearOffset..(int)byteSize].ToArray();
		byte[] trailingBytes = data[(int)byteSize..].ToArray();
		return new MapEventFile(marker, events, clearEvents, trailingBytes);
	}
}
