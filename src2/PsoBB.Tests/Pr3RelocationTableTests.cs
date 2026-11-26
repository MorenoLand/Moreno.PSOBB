using System.Buffers.Binary;
using PsoBB.Data;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PR3 relocation header, distances and payload bounds.
/// </summary>
public sealed class Pr3RelocationTableTests
{
	/// <summary>
	/// Pointer fields and the root field resolve to their payload offsets.
	/// </summary>
	[Fact]
	public void ResolvesPointersAndRoot()
	{
		byte[] payload = new byte[0x100];
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x40), 0x20);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x50), 0x30);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x60), 0x10);
		Pr3RelocationTable table = Pr3RelocationTable.Open(TextSamples.Pr3(0x60, 0x40, 0x50));
		Assert.Equal(2, table.Count);
		Assert.Equal(0x60, table.RootFieldOffset);
		Assert.Equal(new Pr3RelocationTable.Pointer(0x40, 0x20), table.ResolvePointers(payload)[0]);
		Assert.Equal(new Pr3RelocationTable.Pointer(0x50, 0x30), table.ResolvePointers(payload)[1]);
		Assert.Equal(0x10, table.GetRootTarget(payload));
	}

	/// <summary>
	/// A zero target is the payload base and is accepted.
	/// </summary>
	[Fact]
	public void AcceptsAZeroTarget()
	{
		byte[] payload = new byte[0x80];
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x40), 0);
		Pr3RelocationTable table = Pr3RelocationTable.Open(TextSamples.Pr3(0x40, 0x40));
		Assert.Equal(new Pr3RelocationTable.Pointer(0x40, 0), table.ResolvePointers(payload)[0]);
	}

	/// <summary>
	/// A header shorter than 0x20 bytes is rejected.
	/// </summary>
	[Fact]
	public void RejectsATruncatedHeader() => Assert.Throws<Pr2FormatException>(() => Pr3RelocationTable.Open(new byte[0x1F]));

	/// <summary>
	/// A declared pointer count larger than the distance array is rejected.
	/// </summary>
	[Fact]
	public void RejectsTruncatedDistances()
	{
		byte[] table = TextSamples.Pr3(0x40, 0x40, 0x44, 0x48);
		Assert.Throws<Pr2FormatException>(() => Pr3RelocationTable.Open(table.AsSpan(0, table.Length - 2)));
	}

	/// <summary>
	/// A pointer field outside the payload is rejected.
	/// </summary>
	[Fact]
	public void RejectsAFieldOutsideThePayload()
	{
		Pr3RelocationTable table = Pr3RelocationTable.Open(TextSamples.Pr3(0, 0x100));
		Assert.Throws<Pr2FormatException>(() => table.ResolvePointers(new byte[0x100]));
	}

	/// <summary>
	/// A target outside the payload is rejected.
	/// </summary>
	[Fact]
	public void RejectsATargetOutsideThePayload()
	{
		byte[] payload = new byte[0x100];
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x40), 0x200);
		Pr3RelocationTable table = Pr3RelocationTable.Open(TextSamples.Pr3(0x40, 0x40));
		Assert.Throws<Pr2FormatException>(() => table.ResolvePointers(payload));
	}

	/// <summary>
	/// A root field outside the payload is rejected.
	/// </summary>
	[Fact]
	public void RejectsARootOutsideThePayload()
	{
		Pr3RelocationTable table = Pr3RelocationTable.Open(TextSamples.Pr3(0x100));
		Assert.Throws<Pr2FormatException>(() => table.GetRootTarget(new byte[0x100]));
	}
}
