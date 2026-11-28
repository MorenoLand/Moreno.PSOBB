using System.Buffers.Binary;
using System.Text;
using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks the model BML archive: descriptors, model chunks, motion chunks and embedded textures.
/// </summary>
public sealed class ModelBmlArchiveTests
{
	/// <summary>
	/// One model entry exposes its model, texture list, motion and decoded texture.
	/// </summary>
	[Fact]
	public void ModelAndMotionAreParsed()
	{
		BmlArchive archive = BmlArchive.Parse(ModelTestData.Bml());
		Assert.True(archive.HasTextures);
		BmlFile file = Assert.Single(archive.Files);
		Assert.Equal("model.bml", file.Name);
		Assert.NotNull(file.Model);
		Assert.Equal(2, file.Model.Nodes.Count);
		Assert.NotNull(file.TextureList);
		Assert.Equal(new[] { "tex0" }, file.TextureList.Names);
		Assert.Same(file.TextureList, file.Model.Textures);
		Assert.NotNull(file.Motion);
		Assert.Single(file.Motions);
		Assert.Equal(10u, file.Motion.FrameCount);
		Assert.Equal(2, file.Motion.Bones.Count);
		Assert.Equal(3, file.Motion.Bones[0].Tracks.Count);
		PsoBB.Imaging.XvmTexture texture = Assert.Single(file.Textures);
		Assert.Equal(0x1234u, texture.GlobalIndex);
	}

	/// <summary>
	/// An animation-only entry uses the model entry's node count for its bone records.
	/// </summary>
	[Fact]
	public void SplitAnimationEntryUsesTheModelBoneCount()
	{
		BmlArchive archive = BmlArchive.Parse(ModelTestData.BmlSplit());
		Assert.Equal(2, archive.Files.Count);
		Assert.NotNull(archive.Files[0].Model);
		NinjaMotion motion = Assert.IsType<NinjaMotion>(archive.Files[1].Motion);
		Assert.Equal(2, motion.Bones.Count);
	}

	/// <summary>
	/// An archive without embedded textures keeps entries on 0x800 boundaries even when the header
	/// texture flag is set.
	/// </summary>
	[Fact]
	public void EntriesWithoutTexturesUseSectorAlignment()
	{
		byte[] chunks = ModelTestData.Chunk("NJCM", ModelTestData.ModelCore());
		int second = 0x1000;
		byte[] archive = new byte[second + chunks.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(4), 2);
		archive[8] = 0;
		archive[9] = 1;
		Encoding.ASCII.GetBytes("first.bml").CopyTo(archive, 0x40);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(0x40 + 0x20), (uint)chunks.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(0x40 + 0x28), (uint)chunks.Length);
		Encoding.ASCII.GetBytes("second.bml").CopyTo(archive, 0x80);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(0x80 + 0x20), (uint)chunks.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(0x80 + 0x28), (uint)chunks.Length);
		chunks.CopyTo(archive, 0x800);
		chunks.CopyTo(archive, second);
		BmlArchive parsed = BmlArchive.Parse(archive);
		Assert.Equal(2, parsed.Files.Count);
		Assert.Equal("first.bml", parsed.Files[0].Name);
		Assert.Equal("second.bml", parsed.Files[1].Name);
		Assert.NotNull(parsed.Files[0].Model);
		Assert.NotNull(parsed.Files[1].Model);
	}

	/// <summary>
	/// A truncated header, a descriptor count outside the archive and an unknown compression marker
	/// are rejected.
	/// </summary>
	[Fact]
	public void InvalidHeadersAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => BmlArchive.Parse(new byte[0x3F]));
		byte[] archive = ModelTestData.Bml();
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(4), 0x1000);
		Assert.Throws<ModelFormatException>(() => BmlArchive.Parse(archive));
		byte[] marker = ModelTestData.Bml();
		marker[8] = 1;
		Assert.Throws<ModelFormatException>(() => BmlArchive.Parse(marker));
	}

	/// <summary>
	/// An entry whose stored size exceeds the archive is rejected.
	/// </summary>
	[Fact]
	public void InvalidEntrySizeIsRejected()
	{
		byte[] archive = ModelTestData.Bml();
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(0x40 + 0x20), 0x100000);
		Assert.Throws<ModelFormatException>(() => BmlArchive.Parse(archive));
	}
}
