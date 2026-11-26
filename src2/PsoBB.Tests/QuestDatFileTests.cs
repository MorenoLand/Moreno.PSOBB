using System.Buffers.Binary;
using PsoBB.Quests;

namespace PsoBB.Tests;

/// <summary>
/// Checks the quest spawn-data chunk stream against synthetic files.
/// </summary>
public sealed class QuestDatFileTests
{
	private static byte[] BuildChunk(uint type, uint floor, byte[] data, int padding = 0)
	{
		byte[] chunk = new byte[QuestDatChunk.HeaderLength + data.Length + padding];
		BinaryPrimitives.WriteUInt32LittleEndian(chunk, type);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(4), (uint)chunk.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(8), floor);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(12), (uint)data.Length);
		data.CopyTo(chunk, QuestDatChunk.HeaderLength);
		return chunk;
	}

	private static byte[] BuildFile(params byte[][] parts) => [.. parts.SelectMany(part => part)];

	/// <summary>
	/// A stream containing only the end marker has no chunks and round-trips unchanged.
	/// </summary>
	[Fact]
	public void TerminatorOnlyFileHasNoChunks()
	{
		byte[] source = new byte[QuestDatChunk.HeaderLength];
		QuestDatFile file = QuestDatFile.Parse(source);
		Assert.Equal(0, file.Chunks.Length);
		Assert.Equal(QuestDatChunk.HeaderLength, file.EndMarker.Length);
		Assert.Equal(0, file.TrailingBytes.Length);
		Assert.Equal(source, file.ToArray());
	}

	/// <summary>
	/// The documented object, enemy and event types expose their floor, payload and record counts.
	/// </summary>
	[Fact]
	public void ParsesObjectEnemyAndEventChunks()
	{
		byte[] objectData = new byte[QuestDatChunk.ObjectRecordLength * 2];
		objectData[0] = 0x11;
		objectData[QuestDatChunk.ObjectRecordLength] = 0x22;
		byte[] enemyData = new byte[QuestDatChunk.EnemyRecordLength * 3];
		byte[] eventData = [0xAA, 0xBB, 0xCC, 0xDD, 0xEE];
		byte[] source = BuildFile(
			BuildChunk((uint)QuestChunkType.Objects, 2, objectData),
			BuildChunk((uint)QuestChunkType.Enemies, 3, enemyData),
			BuildChunk((uint)QuestChunkType.Events, 2, eventData),
			new byte[QuestDatChunk.HeaderLength]);
		QuestDatFile file = QuestDatFile.Parse(source);
		Assert.Equal(3, file.Chunks.Length);
		QuestDatChunk objects = file.Chunks[0];
		Assert.True(objects.KnownType == QuestChunkType.Objects);
		Assert.Equal(2u, objects.Floor);
		Assert.Equal(QuestDatChunk.ObjectRecordLength, objects.RecordLength);
		Assert.Equal(2, objects.RecordCount);
		Assert.Equal(0x11, objects.GetRecord(0)[0]);
		Assert.Equal(0x22, objects.GetRecord(1)[0]);
		QuestDatChunk enemies = file.Chunks[1];
		Assert.True(enemies.KnownType == QuestChunkType.Enemies);
		Assert.Equal(3, enemies.RecordCount);
		QuestDatChunk events = file.Chunks[2];
		Assert.True(events.KnownType == QuestChunkType.Events);
		Assert.Equal(0, events.RecordLength);
		Assert.Equal(0, events.RecordCount);
		Assert.Equal(eventData, events.Data.ToArray());
	}

	/// <summary>
	/// A type the client does not know is kept with its payload instead of being rejected.
	/// </summary>
	[Fact]
	public void UnknownChunkTypeIsPreserved()
	{
		byte[] source = BuildFile(BuildChunk(0x12345678, 0, [1, 2, 3]), new byte[QuestDatChunk.HeaderLength]);
		QuestDatFile file = QuestDatFile.Parse(source);
		QuestDatChunk chunk = Assert.Single(file.Chunks.ToArray());
		Assert.Equal(0x12345678u, chunk.Type);
		Assert.Null(chunk.KnownType);
		Assert.Equal([1, 2, 3], chunk.Data.ToArray());
		Assert.Equal(source, file.ToArray());
	}

	/// <summary>
	/// Bytes between the payload and the declared chunk size are padding and survive a round trip.
	/// </summary>
	[Fact]
	public void ChunkPaddingIsPreserved()
	{
		byte[] source = BuildFile(BuildChunk((uint)QuestChunkType.Events, 1, [0x5A], 0x0B), new byte[QuestDatChunk.HeaderLength]);
		QuestDatFile file = QuestDatFile.Parse(source);
		QuestDatChunk chunk = Assert.Single(file.Chunks.ToArray());
		Assert.Equal(0x0B, chunk.Padding.Length);
		Assert.Equal(source, file.ToArray());
	}

	/// <summary>
	/// The original loader stops at a type-zero header without consuming the size field, so later bytes are trailing data.
	/// </summary>
	[Fact]
	public void EndMarkerDeclaredSizeIsIgnored()
	{
		byte[] endMarker = new byte[QuestDatChunk.HeaderLength];
		BinaryPrimitives.WriteUInt32LittleEndian(endMarker.AsSpan(4), 0x40);
		byte[] source = BuildFile(endMarker, [0xDE, 0xAD, 0xBE, 0xEF]);
		QuestDatFile file = QuestDatFile.Parse(source);
		Assert.Equal(0, file.Chunks.Length);
		Assert.Equal([0xDE, 0xAD, 0xBE, 0xEF], file.TrailingBytes.ToArray());
		Assert.Equal(source, file.ToArray());
	}

	/// <summary>
	/// An empty file cannot contain the first chunk header.
	/// </summary>
	[Fact]
	public void EmptyFileIsRejected() => Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse([]));

	/// <summary>
	/// A file shorter than one chunk header is rejected at its end.
	/// </summary>
	[Fact]
	public void ShortChunkHeaderIsRejected()
	{
		QuestFormatException error = Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse(new byte[QuestDatChunk.HeaderLength - 1]));
		Assert.Equal(0, error.Offset);
	}

	/// <summary>
	/// A chunk size smaller than the header cannot make progress.
	/// </summary>
	[Fact]
	public void ChunkSmallerThanHeaderIsRejected()
	{
		byte[] source = new byte[QuestDatChunk.HeaderLength];
		BinaryPrimitives.WriteUInt32LittleEndian(source, (uint)QuestChunkType.Objects);
		Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse(source));
	}

	/// <summary>
	/// A chunk that claims more bytes than the file holds is rejected.
	/// </summary>
	[Fact]
	public void ChunkBeyondEndIsRejected()
	{
		byte[] source = new byte[0x14];
		BinaryPrimitives.WriteUInt32LittleEndian(source, (uint)QuestChunkType.Objects);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(4), 0x20);
		Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse(source));
	}

	/// <summary>
	/// A data size larger than the space after the header is rejected.
	/// </summary>
	[Fact]
	public void DataSizeBeyondChunkIsRejected()
	{
		byte[] source = new byte[QuestDatChunk.HeaderLength];
		BinaryPrimitives.WriteUInt32LittleEndian(source, (uint)QuestChunkType.Objects);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(4), QuestDatChunk.HeaderLength);
		BinaryPrimitives.WriteUInt32LittleEndian(source.AsSpan(12), 1);
		Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse(source));
	}

	/// <summary>
	/// A complete chunk without the type-zero end marker is rejected.
	/// </summary>
	[Fact]
	public void MissingEndMarkerIsRejected()
	{
		byte[] source = BuildChunk((uint)QuestChunkType.Objects, 0, [1]);
		Assert.Throws<QuestFormatException>(() => QuestDatFile.Parse(source));
	}

	/// <summary>
	/// A destination smaller than the serialized stream is rejected before any byte is written.
	/// </summary>
	[Fact]
	public void WriteToRejectsSmallDestination()
	{
		QuestDatFile file = QuestDatFile.Parse(new byte[QuestDatChunk.HeaderLength]);
		Assert.Throws<ArgumentException>(() => file.WriteTo(new byte[file.SerializedLength - 1]));
	}

	/// <summary>
	/// Record access is limited to complete records.
	/// </summary>
	[Fact]
	public void GetRecordRejectsOutOfRange()
	{
		byte[] source = BuildFile(BuildChunk((uint)QuestChunkType.Objects, 0, new byte[QuestDatChunk.ObjectRecordLength]), new byte[QuestDatChunk.HeaderLength]);
		QuestDatChunk chunk = QuestDatFile.Parse(source).Chunks[0];
		Assert.Throws<ArgumentOutOfRangeException>(() => chunk.GetRecord(1).ToArray());
	}

	/// <summary>
	/// Writing and reading again preserves each chunk's header fields, payload, padding and trailing bytes.
	/// </summary>
	[Fact]
	public void RoundTripPreservesChunkMetadata()
	{
		byte[] source = BuildFile(
			BuildChunk((uint)QuestChunkType.Objects, 1, [0x10, 0x20], 2),
			BuildChunk(0x80000000, 0x12, [0x30]),
			new byte[QuestDatChunk.HeaderLength],
			[0x99, 0x88]);
		QuestDatFile first = QuestDatFile.Parse(source);
		QuestDatFile second = QuestDatFile.Parse(first.ToArray());
		Assert.Equal(first.Chunks.Length, second.Chunks.Length);
		for (int index = 0; index < first.Chunks.Length; index++)
		{
			QuestDatChunk before = first.Chunks[index];
			QuestDatChunk after = second.Chunks[index];
			Assert.Equal(before.Type, after.Type);
			Assert.Equal(before.TotalSize, after.TotalSize);
			Assert.Equal(before.Floor, after.Floor);
			Assert.Equal(before.Data.ToArray(), after.Data.ToArray());
			Assert.Equal(before.Padding.ToArray(), after.Padding.ToArray());
		}
		Assert.Equal(first.EndMarker.ToArray(), second.EndMarker.ToArray());
		Assert.Equal(first.TrailingBytes.ToArray(), second.TrailingBytes.ToArray());
		Assert.Equal(source, first.ToArray());
	}
}
