using System.Buffers.Binary;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the BML descriptor table, stream offsets, PRS streams and Ninja chunk reader.
/// </summary>
public sealed class BmlArchiveTests
{
	/// <summary>
	/// An uncompressed archive exposes the entry and its single NJCM chunk.
	/// </summary>
	[Fact]
	public void ParsesAnUncompressedEntry()
	{
		BmlArchive archive = BmlArchive.Parse(SceneSamples.ModelArchive());
		Assert.False(archive.IsCompressed);
		Assert.False(archive.HasTextures);
		BmlEntry entry = Assert.Single(archive.Entries);
		Assert.Equal("model.xj", entry.Name);
		Assert.Equal(0x10, entry.CompressedSize);
		Assert.Equal(0x10, entry.UncompressedSize);
		Assert.False(entry.HasTextures);
		Assert.Throws<InvalidOperationException>(() => archive.ReadTextures(entry));
		NinjaChunk chunk = Assert.Single(archive.ReadChunks(entry));
		Assert.Equal(NinjaChunkType.Njcm, chunk.Type);
		Assert.Equal([1, 2, 3, 4, 5, 6, 7, 8], chunk.Data.ToArray());
	}

	/// <summary>
	/// A compressed archive decompresses the entry before reading its chunk.
	/// </summary>
	[Fact]
	public void ParsesACompressedEntry()
	{
		BmlArchive archive = BmlArchive.Parse(SceneSamples.CompressedModelArchive());
		Assert.True(archive.IsCompressed);
		BmlEntry entry = Assert.Single(archive.Entries);
		NinjaChunk chunk = Assert.Single(archive.ReadChunks(entry));
		Assert.Equal(NinjaChunkType.Njcm, chunk.Type);
		Assert.Equal([1, 2, 3, 4, 5, 6, 7, 8], chunk.Data.ToArray());
	}

	/// <summary>
	/// A texture stream is aligned after the geometry stream and returned separately.
	/// </summary>
	[Fact]
	public void ReadsATextureStream()
	{
		BmlArchive archive = BmlArchive.Parse(SceneSamples.TexturedModelArchive());
		Assert.True(archive.HasTextures);
		BmlEntry entry = Assert.Single(archive.Entries);
		Assert.True(entry.HasTextures);
		Assert.Equal([9, 8, 7, 6, 5], archive.ReadTextures(entry).ToArray());
		Assert.Equal([1, 2, 3, 4, 5, 6, 7, 8], archive.ReadChunks(entry)[0].Data.ToArray());
	}

	/// <summary>
	/// A descriptor table larger than the archive is rejected.
	/// </summary>
	[Fact]
	public void RejectsATruncatedDescriptorTable()
	{
		byte[] data = SceneSamples.ModelArchive();
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 2);
		Assert.Throws<SceneFormatException>(() => BmlArchive.Parse(data));
	}

	/// <summary>
	/// A geometry stream past the archive end is rejected.
	/// </summary>
	[Fact]
	public void RejectsAGeometryStreamOutsideTheArchive()
	{
		byte[] data = SceneSamples.ModelArchive();
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x60), 0x1000);
		Assert.Throws<SceneFormatException>(() => BmlArchive.Parse(data));
	}

	/// <summary>
	/// An unknown Ninja chunk type is rejected.
	/// </summary>
	[Fact]
	public void RejectsAnUnknownChunkType()
	{
		byte[] data = SceneSamples.ModelArchive();
		BinaryPrimitives.WriteUInt32BigEndian(data.AsSpan(0x800), 0x58585858);
		BmlArchive archive = BmlArchive.Parse(data);
		Assert.Throws<SceneFormatException>(() => archive.ReadChunks(archive.Entries[0]));
	}

	/// <summary>
	/// A POF0 pointer-fixup chunk is skipped between Ninja chunks.
	/// </summary>
	[Fact]
	public void SkipsPof0Chunks()
	{
		byte[] stream = new byte[0x20];
		BinaryPrimitives.WriteUInt32BigEndian(stream, 0x4E4A434D);
		BinaryPrimitives.WriteUInt32LittleEndian(stream.AsSpan(4), 4);
		stream[8] = 1;
		BinaryPrimitives.WriteUInt32BigEndian(stream.AsSpan(0x0C), 0x504F4630);
		BinaryPrimitives.WriteUInt32LittleEndian(stream.AsSpan(0x10), 4);
		BinaryPrimitives.WriteUInt32BigEndian(stream.AsSpan(0x18), 0x4E4A544C);
		BinaryPrimitives.WriteUInt32LittleEndian(stream.AsSpan(0x1C), 0);
		NinjaChunk[] chunks = BmlChunkReader.Read(stream);
		Assert.Equal(2, chunks.Length);
		Assert.Equal(NinjaChunkType.Njcm, chunks[0].Type);
		Assert.Equal(NinjaChunkType.Njtl, chunks[1].Type);
		Assert.True(chunks[1].Data.IsEmpty);
	}
}
