using System.Buffers.Binary;

namespace PsoBB.Quests;

/// <summary>
/// The typed chunk stream of a quest <c>.dat</c> file, covering map objects, enemies and events.
/// </summary>
/// <remarks>
/// The stream is a sequence of 16-byte headers followed by record bytes, ending with a type-zero chunk. Chunk types the client does not know are kept so a file can be read and written without losing data.
/// </remarks>
public sealed class QuestDatFile
{
	private readonly QuestDatChunk[] _chunks;
	private readonly byte[] _endMarker;
	private readonly byte[] _trailingBytes;

	private QuestDatFile(QuestDatChunk[] chunks, byte[] endMarker, byte[] trailingBytes)
	{
		_chunks = chunks;
		_endMarker = endMarker;
		_trailingBytes = trailingBytes;
	}

	/// <summary>Gets the chunks before the end marker.</summary>
	public ReadOnlySpan<QuestDatChunk> Chunks => _chunks;

	/// <summary>Gets the 16-byte end marker that follows the last chunk.</summary>
	public ReadOnlyMemory<byte> EndMarker => _endMarker;

	/// <summary>Gets the bytes after the end marker, which the original loader ignores.</summary>
	public ReadOnlyMemory<byte> TrailingBytes => _trailingBytes;

	/// <summary>Gets the number of bytes <see cref="WriteTo"/> produces.</summary>
	public int SerializedLength => _chunks.Sum(chunk => (int)chunk.TotalSize) + QuestDatChunk.HeaderLength + _trailingBytes.Length;

	/// <summary>
	/// Reads the chunk stream and stops at the first type-zero header.
	/// </summary>
	/// <param name="data">The complete decompressed <c>.dat</c> file.</param>
	/// <returns>The parsed chunks and end marker.</returns>
	/// <exception cref="QuestFormatException">The file is empty, truncated or declares a chunk outside its bytes.</exception>
	[Original(0x006B9D04)]
	public static QuestDatFile Parse(ReadOnlySpan<byte> data)
	{
		List<QuestDatChunk> chunks = [];
		int offset = 0;
		while (true)
		{
			if (data.Length - offset < QuestDatChunk.HeaderLength)
				throw new QuestFormatException("The spawn data ends before a chunk header.", offset);
			uint type = BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]);
			if (type == (uint)QuestChunkType.End)
			{
				byte[] endMarker = data.Slice(offset, QuestDatChunk.HeaderLength).ToArray();
				byte[] trailingBytes = data[(offset + QuestDatChunk.HeaderLength)..].ToArray();
				return new QuestDatFile([.. chunks], endMarker, trailingBytes);
			}
			uint totalSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
			uint floor = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 8)..]);
			uint dataSize = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 12)..]);
			if (totalSize < QuestDatChunk.HeaderLength)
				throw new QuestFormatException("A spawn chunk is smaller than its header.", offset);
			if (totalSize > (uint)(data.Length - offset))
				throw new QuestFormatException("A spawn chunk extends beyond the end of the file.", offset);
			if (dataSize > totalSize - QuestDatChunk.HeaderLength)
				throw new QuestFormatException("A spawn chunk declares more data than it contains.", offset);
			int payloadLength = (int)dataSize;
			int paddingLength = (int)totalSize - QuestDatChunk.HeaderLength - payloadLength;
			byte[] payload = data.Slice(offset + QuestDatChunk.HeaderLength, payloadLength).ToArray();
			byte[] padding = data.Slice(offset + QuestDatChunk.HeaderLength + payloadLength, paddingLength).ToArray();
			chunks.Add(new QuestDatChunk(type, totalSize, floor, payload, padding));
			offset += (int)totalSize;
		}
	}

	/// <summary>
	/// Writes the chunks, end marker and trailing bytes back in file order.
	/// </summary>
	/// <param name="destination">The buffer that receives the file.</param>
	/// <returns>The number of bytes written.</returns>
	/// <exception cref="ArgumentException">The destination is smaller than <see cref="SerializedLength"/>.</exception>
	public int WriteTo(Span<byte> destination)
	{
		if (destination.Length < SerializedLength)
			throw new ArgumentException("The destination is too small for the spawn data.", nameof(destination));
		int offset = 0;
		foreach (QuestDatChunk chunk in _chunks)
		{
			BinaryPrimitives.WriteUInt32LittleEndian(destination[offset..], chunk.Type);
			BinaryPrimitives.WriteUInt32LittleEndian(destination[(offset + 4)..], chunk.TotalSize);
			BinaryPrimitives.WriteUInt32LittleEndian(destination[(offset + 8)..], chunk.Floor);
			BinaryPrimitives.WriteUInt32LittleEndian(destination[(offset + 12)..], chunk.DataSize);
			chunk.Data.Span.CopyTo(destination[(offset + QuestDatChunk.HeaderLength)..]);
			chunk.Padding.Span.CopyTo(destination[(offset + QuestDatChunk.HeaderLength + chunk.Data.Length)..]);
			offset += (int)chunk.TotalSize;
		}
		_endMarker.CopyTo(destination[offset..]);
		offset += _endMarker.Length;
		_trailingBytes.CopyTo(destination[offset..]);
		return offset + _trailingBytes.Length;
	}

	/// <summary>
	/// Returns the complete file with every chunk, its padding and the end marker.
	/// </summary>
	/// <returns>A new byte array holding the serialized stream.</returns>
	public byte[] ToArray()
	{
		byte[] result = new byte[SerializedLength];
		WriteTo(result);
		return result;
	}
}
