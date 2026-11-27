using System.Buffers.Binary;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the system name copy and the item block resets at 0x006CA370 and 0x005D6A3C.
/// </summary>
[Collection("Game state")]
public sealed class CharacterSaveFixupTests : IDisposable
{
	public CharacterSaveFixupTests()
	{
		CharacterSaveLoad.Reset();
		CharacterSaveFixup.Reset();
	}

	public void Dispose()
	{
		CharacterSaveLoad.Reset();
		CharacterSaveFixup.Reset();
	}

	[Fact]
	public void CopiesThe512ByteSystemNameFromOffset24()
	{
		byte[] system = new byte[CharacterSaveLoad.SystemChunkLength];
		for (int index = 0; index < system.Length; index++)
			system[index] = (byte)(index * 3 + 1);
		byte[] name = new byte[CharacterSaveFixup.NameLength];
		Array.Fill(name, (byte)0xAA);
		CharacterSaveLoad.SystemRecord = system;
		CharacterSaveFixup.NameBuffer = name;

		CharacterSaveFixup.CopySystemName();

		Assert.True(system.AsSpan(CharacterSaveFixup.NameOffset, CharacterSaveFixup.NameLength).SequenceEqual(name));
	}

	[Fact]
	public void RejectsAMissingSystemOrNameBuffer()
	{
		CharacterSaveFixup.NameBuffer = new byte[CharacterSaveFixup.NameLength];
		Assert.Throws<InvalidOperationException>(CharacterSaveFixup.CopySystemName);

		CharacterSaveLoad.SystemRecord = new byte[CharacterSaveLoad.SystemChunkLength];
		CharacterSaveFixup.NameBuffer = null;
		Assert.Throws<InvalidOperationException>(CharacterSaveFixup.CopySystemName);
	}

	[Fact]
	public void ClearsTheFirstEightBytesAndEveryItemBlock()
	{
		byte[] block = new byte[CharacterSaveFixup.ItemBlockSpan];
		Array.Fill(block, (byte)0xFF);

		CharacterSaveFixup.ClearItemBlock(block);

		Assert.All(block.AsSpan(0, 8).ToArray(), value => Assert.Equal(0, value));
		for (int offset = 8; offset < CharacterSaveFixup.ItemBlockSpan; offset += CharacterSaveFixup.ItemBlockLength)
		{
			ReadOnlySpan<byte> item = block.AsSpan(offset, CharacterSaveFixup.ItemBlockLength);
			Assert.All(item[..12].ToArray(), value => Assert.Equal(0, value));
			Assert.Equal(-1, BinaryPrimitives.ReadInt32LittleEndian(item[12..]));
			Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(item[16..]));
			Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(item[20..]));
			Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(item[22..]));
		}
	}

	[Fact]
	public void ClearsOneTwentyByteItem()
	{
		byte[] item = new byte[20];
		Array.Fill(item, (byte)0xFF);

		CharacterSaveFixup.ClearItem(item);

		Assert.All(item.AsSpan(0, 12).ToArray(), value => Assert.Equal(0, value));
		Assert.Equal(-1, BinaryPrimitives.ReadInt32LittleEndian(item.AsSpan(12)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(item.AsSpan(16)));
	}

	[Fact]
	public void ShortSpansAreRejected()
	{
		Assert.Throws<ArgumentException>(() => CharacterSaveFixup.ClearItemBlock(new byte[CharacterSaveFixup.ItemBlockSpan - 1]));
		Assert.Throws<ArgumentException>(() => CharacterSaveFixup.ClearItemBlockEntry(new byte[CharacterSaveFixup.ItemBlockLength - 1]));
		Assert.Throws<ArgumentException>(() => CharacterSaveFixup.ClearItem(new byte[19]));
	}
}
