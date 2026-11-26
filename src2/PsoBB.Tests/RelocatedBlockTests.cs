using System.Buffers.Binary;
using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks the trailing pointer table and payload offset used by REL and PAE sections.
/// </summary>
public sealed class RelocatedBlockTests
{
	/// <summary>
	/// The relocation table is read, applied with the requested base and exposes the payload.
	/// </summary>
	[Fact]
	public void PointerTableIsAppliedAndPayloadIsExposed()
	{
		byte[] data = ModelTestData.WithRelocationTable(ModelTestData.ModelCore());
		RelocatedBlock block = RelocatedBlock.Parse(data, 0x1000);
		Assert.Equal(ModelTestData.ModelPointerOffsets.Length, block.PointerCount);
		Assert.Equal(0, block.BodyOffset);
		Assert.Equal(data.Length, block.Payload.Length);
		Assert.Equal(0x1068u, BinaryPrimitives.ReadUInt32LittleEndian(block.Data.Span[4..]));
	}

	/// <summary>
	/// Payload pointers are rebased from the block start to the payload start.
	/// </summary>
	[Fact]
	public void PayloadPointersAreRebased()
	{
		byte[] data = ModelTestData.WithRelocationTable(ModelTestData.ModelCore(), ModelTestData.ModelPointerOffsets, 4);
		RelocatedBlock block = RelocatedBlock.Parse(data);
		Assert.Equal(4, block.BodyOffset);
		Assert.Equal(0x68u, BinaryPrimitives.ReadUInt32LittleEndian(block.Payload.Span[4..]));
		RelAsset asset = RelAsset.Parse(data);
		Assert.Equal(2, asset.ReadModel().Nodes.Count);
	}

	/// <summary>
	/// A pointer value or table delta outside the block is rejected.
	/// </summary>
	[Fact]
	public void InvalidPointersAreRejected()
	{
		byte[] data = ModelTestData.WithRelocationTable(ModelTestData.ModelCore());
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 0xFFFF);
		Assert.Throws<ModelFormatException>(() => RelocatedBlock.Parse(data));
		byte[] badTable = ModelTestData.WithRelocationTable(ModelTestData.ModelCore());
		int tableOffset = (int)BinaryPrimitives.ReadUInt32LittleEndian(badTable.AsSpan(badTable.Length - 0x20));
		BinaryPrimitives.WriteUInt16LittleEndian(badTable.AsSpan(tableOffset), 0xFFFF);
		Assert.Throws<ModelFormatException>(() => RelocatedBlock.Parse(badTable));
	}

	/// <summary>
	/// A missing trailer or an out-of-range payload offset is rejected.
	/// </summary>
	[Fact]
	public void TruncatedBlocksAreRejected()
	{
		Assert.Throws<ModelFormatException>(() => RelocatedBlock.Parse(new byte[0x1F]));
		byte[] data = ModelTestData.WithRelocationTable(ModelTestData.ModelCore());
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(data.Length - 0x10), 0x10000);
		Assert.Throws<ModelFormatException>(() => RelocatedBlock.Parse(data));
	}
}
