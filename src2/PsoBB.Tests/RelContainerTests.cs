using System.Buffers.Binary;
using PsoBB.Scene;

namespace PsoBB.Tests;

/// <summary>
/// Checks the REL trailer, pointer-table bounds and root offset.
/// </summary>
public sealed class RelContainerTests
{
	/// <summary>
	/// A valid trailer exposes its root and pointer count and leaves zero-based pointer words unchanged.
	/// </summary>
	[Fact]
	public void ReadsRootAndPointerCount()
	{
		byte[] body = new byte[16];
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(8), 4);
		byte[] file = SceneSamples.Rel(body, 4, 8);
		RelContainer container = RelContainer.Parse(file);
		Assert.Equal(4, container.RootOffset);
		Assert.Equal(1, container.FixupCount);
		Assert.Equal(4u, BinaryPrimitives.ReadUInt32LittleEndian(container.Data.Span[8..]));
	}

	/// <summary>
	/// A file shorter than the final 0x20 bytes has no trailer.
	/// </summary>
	[Fact]
	public void RejectsATruncatedTrailer()
	{
		Assert.Throws<SceneFormatException>(() => RelContainer.Parse(new byte[0x1F]));
	}

	/// <summary>
	/// A fixup table outside the file is rejected.
	/// </summary>
	[Fact]
	public void RejectsAFixupTableOutsideTheFile()
	{
		byte[] file = SceneSamples.Rel(new byte[16], 0, 8);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(file.Length - 0x20), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => RelContainer.Parse(file));
	}

	/// <summary>
	/// A fixup delta that resolves past the file is rejected.
	/// </summary>
	[Fact]
	public void RejectsAPointerSlotOutsideTheFile()
	{
		byte[] file = SceneSamples.Rel(new byte[16], 0, 8);
		BinaryPrimitives.WriteUInt16LittleEndian(file.AsSpan(16), 0xFFFF);
		Assert.Throws<SceneFormatException>(() => RelContainer.Parse(file));
	}

	/// <summary>
	/// A pointer value larger than the image is rejected.
	/// </summary>
	[Fact]
	public void RejectsAPointerValueOutsideTheFile()
	{
		byte[] body = new byte[16];
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(8), 0xFFFF_FFFF);
		byte[] file = SceneSamples.Rel(body, 0, 8);
		Assert.Throws<SceneFormatException>(() => RelContainer.Parse(file));
	}

	/// <summary>
	/// A root offset past the image is rejected.
	/// </summary>
	[Fact]
	public void RejectsARootOutsideTheFile()
	{
		byte[] file = SceneSamples.Rel(new byte[16], 0, 8);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(file.Length - 0x10), 0x10000);
		Assert.Throws<SceneFormatException>(() => RelContainer.Parse(file));
	}
}
