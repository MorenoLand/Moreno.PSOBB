namespace PsoBB.Quests;

/// <summary>
/// One typed chunk of the spawn data stream: a 16-byte header followed by record bytes and optional padding.
/// </summary>
/// <remarks>
/// Each chunk starts with its type, total size, floor and data size as little-endian 32-bit values. The total size includes the header and any padding, so a reader advances by that field rather than by the data size.
/// </remarks>
public sealed class QuestDatChunk
{
	/// <summary>The width of the chunk header.</summary>
	public const int HeaderLength = 0x10;

	/// <summary>The size of one map-object record in an <see cref="QuestChunkType.Objects"/> chunk.</summary>
	public const int ObjectRecordLength = 0x44;

	/// <summary>The size of one enemy record in a <see cref="QuestChunkType.Enemies"/> chunk.</summary>
	public const int EnemyRecordLength = 0x48;

	private readonly byte[] _data;
	private readonly byte[] _padding;

	internal QuestDatChunk(uint type, uint totalSize, uint floor, byte[] data, byte[] padding)
	{
		Type = type;
		TotalSize = totalSize;
		Floor = floor;
		_data = data;
		_padding = padding;
	}

	/// <summary>Gets the raw chunk type; values outside the documented range belong to unknown chunk kinds.</summary>
	public uint Type { get; }

	/// <summary>Gets the total size of the chunk including its header and padding.</summary>
	public uint TotalSize { get; }

	/// <summary>Gets the floor the chunk applies to.</summary>
	public uint Floor { get; }

	/// <summary>Gets the number of payload bytes before any padding.</summary>
	public uint DataSize => (uint)_data.Length;

	/// <summary>Gets the documented chunk type, or <see langword="null"/> for an unknown type.</summary>
	public QuestChunkType? KnownType => Type <= (uint)QuestChunkType.Events ? (QuestChunkType)Type : null;

	/// <summary>Gets the record payload without padding.</summary>
	public ReadOnlyMemory<byte> Data => _data;

	/// <summary>Gets the bytes between the payload and the end of the chunk.</summary>
	public ReadOnlyMemory<byte> Padding => _padding;

	/// <summary>Gets the record width for a known record chunk, or zero for event and unknown chunks.</summary>
	public int RecordLength => KnownType switch
	{
		QuestChunkType.Objects => ObjectRecordLength,
		QuestChunkType.Enemies => EnemyRecordLength,
		_ => 0,
	};

	/// <summary>Gets the number of complete records; a partial final record is ignored as the original loader does.</summary>
	public int RecordCount => RecordLength == 0 ? 0 : _data.Length / RecordLength;

	/// <summary>
	/// Returns one complete record from a map-object or enemy chunk.
	/// </summary>
	/// <param name="index">Zero-based record index.</param>
	/// <returns>The record bytes.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the complete records.</exception>
	public ReadOnlySpan<byte> GetRecord(int index)
	{
		if ((uint)index >= (uint)RecordCount)
			throw new ArgumentOutOfRangeException(nameof(index));
		return _data.AsSpan(index * RecordLength, RecordLength);
	}
}
