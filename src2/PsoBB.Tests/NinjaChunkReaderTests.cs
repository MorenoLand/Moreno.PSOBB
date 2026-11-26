using System.Buffers.Binary;
using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks Ninja IFF chunk headers and POF0 pointer relocation.
/// </summary>
public sealed class NinjaChunkReaderTests
{
	/// <summary>
	/// A model chunk and its POF0 table produce one relocated model chunk.
	/// </summary>
	[Fact]
	public void ModelChunkAndPointerTableAreRead()
	{
		byte[] body = ModelTestData.ModelCore();
		byte[] stream = [.. ModelTestData.Chunk("NJCM", body), .. ModelTestData.PointerTableChunk(ModelTestData.ModelPointerOffsets)];
		NinjaChunk chunk = Assert.Single(NinjaChunkReader.ReadAll(stream));
		Assert.Equal(NinjaChunkType.Model, chunk.Type);
		Assert.Equal(body, chunk.Body.ToArray());
		Assert.Equal(8, chunk.Offset);
	}

	/// <summary>
	/// The POF0 table adds its base address to every listed pointer.
	/// </summary>
	[Fact]
	public void PointerTableAddsTheBaseAddress()
	{
		byte[] body = ModelTestData.ModelCore();
		byte[] relocated = NinjaChunkReader.ApplyPointerTable(body, [0x41], 0, 0x1000);
		Assert.Equal(0x1068u, BinaryPrimitives.ReadUInt32LittleEndian(relocated.AsSpan(4)));
	}

	/// <summary>
	/// Two-byte and four-byte POF0 deltas reach their pointer fields.
	/// </summary>
	[Fact]
	public void PointerTableDeltaWidthsAreRead()
	{
		byte[] twoByte = new byte[0x208];
		BinaryPrimitives.WriteUInt32LittleEndian(twoByte.AsSpan(0x200), 0x100);
		byte[] twoRelocated = NinjaChunkReader.ApplyPointerTable(twoByte, [0x80, 0x80], 0);
		Assert.Equal(0x100u, BinaryPrimitives.ReadUInt32LittleEndian(twoRelocated.AsSpan(0x200)));
		byte[] fourByte = new byte[0x40008];
		BinaryPrimitives.WriteUInt32LittleEndian(fourByte.AsSpan(0x40000), 0x100);
		byte[] fourRelocated = NinjaChunkReader.ApplyPointerTable(fourByte, [0xC0, 0x01, 0x00, 0x00], 0);
		Assert.Equal(0x100u, BinaryPrimitives.ReadUInt32LittleEndian(fourRelocated.AsSpan(0x40000)));
	}

	/// <summary>
	/// A chunk header, chunk body or pointer target outside the stream is rejected.
	/// </summary>
	[Fact]
	public void TruncatedChunksAndPointersAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => NinjaChunkReader.ReadAll(new byte[7]));
		byte[] header = ModelTestData.Chunk("NJCM", ModelTestData.ModelCore());
		Assert.Throws<ModelFormatException>(() => NinjaChunkReader.ReadAll(header[..^4]));
		byte[] body = ModelTestData.ModelCore();
		Assert.Throws<ModelFormatException>(() => NinjaChunkReader.ApplyPointerTable(body, [0x84, 0x00], 0));
	}

	/// <summary>
	/// A POF0 table before a chunk and an unknown four-character tag are rejected.
	/// </summary>
	[Fact]
	public void InvalidTableOrderAndTagAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => NinjaChunkReader.ReadAll(ModelTestData.PointerTableChunk([4])));
		Assert.Throws<ModelFormatException>(() => NinjaChunkReader.ReadAll(ModelTestData.Chunk("XXXX", [1, 2, 3, 4])));
	}
}
