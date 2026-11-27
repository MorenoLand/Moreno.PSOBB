using System.Buffers.Binary;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the class stat tables, the level apply, the record flags and the 0x006C7754 reset chain.
/// </summary>
[Collection("Game state")]
public sealed class CharacterRecordResetTests : IDisposable
{
	public CharacterRecordResetTests()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
		CharacterSaveFixup.Reset();
	}

	public void Dispose()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
		CharacterSaveFixup.Reset();
	}

	[Fact]
	public void TheBaseTableHoldsSevenOneWords()
	{
		ReadOnlySpan<byte> table = CharacterClassStats.BaseStats();
		for (int index = 0; index < 7; index++)
			Assert.Equal(1, BinaryPrimitives.ReadUInt16LittleEndian(table[(index * 2)..]));
		Assert.Equal(199, CharacterClassStats.MaxLevel());
	}

	[Fact]
	public void LevelZeroKeepsTheBaseStatsAndTheSeventhWordIsNotLevelled()
	{
		Span<ushort> stats = stackalloc ushort[7];
		CharacterClassStats.ApplyLevel(0, 0, stats);
		for (int index = 0; index < 7; index++)
			Assert.Equal(1, stats[index]);

		CharacterClassStats.ApplyLevel(0, 199, stats);
		Assert.Equal(1, stats[6]);
		for (int index = 0; index < 6; index++)
		{
			ushort cap = BinaryPrimitives.ReadUInt16LittleEndian(CharacterClassStats.GrowthRecord(0)[(index * 2)..]);
			Assert.InRange(stats[index], 0, cap);
		}
	}

	[Fact]
	public void TheClassLevelByteMatchesTheShippedTable()
	{
		Assert.Equal(14, CharacterClassStats.LevelByte(0, 0));
		Assert.True(CharacterClassStats.IsLevelAllowed(0, 0, 14));
		Assert.False(CharacterClassStats.IsLevelAllowed(0, 0, 15));
		Assert.True(CharacterClassStats.IsLevelAllowed(0, 0, 255));
		Assert.Throws<ArgumentOutOfRangeException>(() => CharacterClassStats.LevelByte(0, 200));
	}

	[Fact]
	public void ApplyStatsWritesTheLevelScaleAndClassFields()
	{
		byte[] record = new byte[CharacterRecordReset.PlayerRecordLength];
		Array.Fill(record, (byte)0xAA);

		CharacterRecordReset.ApplyStats(record, 0, 0);

		for (int index = 0; index < 7; index++)
			Assert.Equal(1, BinaryPrimitives.ReadUInt16LittleEndian(record.AsSpan(844 + index * 2)));
		Assert.Equal(40, BinaryPrimitives.ReadUInt16LittleEndian(record.AsSpan(858)));
		Assert.Equal(1092616192, BinaryPrimitives.ReadInt32LittleEndian(record.AsSpan(864)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(record.AsSpan(CharacterRecordReset.LevelOffset)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(record.AsSpan(872)));
		Assert.Equal(300, BinaryPrimitives.ReadInt32LittleEndian(record.AsSpan(876)));
		Assert.Equal(0, record[1]);
		Assert.Equal(0, record[2]);
		foreach (int offset in new[] { 231, 259, 287, 315, 343 })
			Assert.Equal(0, record[offset]);
	}

	[Fact]
	public void ResetFlagsUsesTheHighFlagBitAndClearsTheInventoryFlags()
	{
		byte[] record = new byte[CharacterRecordReset.PlayerRecordLength];
		Array.Fill(record, (byte)0xAA);
		BinaryPrimitives.WriteInt32LittleEndian(record.AsSpan(932), 0x80);

		CharacterRecordReset.ResetFlags(record);

		Assert.Equal(0, record[CharacterRecordReset.ClassFlagOffset]);
		Assert.All(record.AsSpan(CharacterRecordReset.ClassFlagOffset + 1, CharacterRecordReset.ClassFlagCount - 1).ToArray(), value => Assert.Equal(0xFF, value));
		for (int index = 0; index < CharacterRecordReset.InventoryBlockCount; index++)
		{
			Assert.Equal(0, record[6 + index * CharacterRecordReset.InventoryBlockLength]);
			Assert.Equal(0xAA, record[7 + index * CharacterRecordReset.InventoryBlockLength]);
		}
	}

	[Fact]
	public void ResetCharacterWipesTheInventoryClassAndSystemRecord()
	{
		CharacterSaveLoad.Attach(
			new byte[CharacterSaveLoad.PlayerChunkLength],
			new byte[CharacterSaveLoad.SystemChunkLength],
			new byte[CharacterSaveLoad.SaveLength],
			new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		byte[] image = CharacterSaveLoad.LoadBuffer!;
		byte[] player = CharacterSaveLoad.PlayerRecord!;
		byte[] system = CharacterSaveLoad.SystemRecord!;
		Array.Fill(image, (byte)0xFF);
		Array.Fill(player, (byte)0xAA);
		Array.Fill(system, (byte)0xFF);
		CharacterSaveLoad.Slot = 0;
		CharacterSaveLoad.PlayerVersion = 0;

		CharacterRecordReset.ResetCharacter();

		Assert.Equal(0, image[8]);
		Assert.Equal(0xFF, image[9]);
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(image.AsSpan(12)));
		Assert.All(image.AsSpan(16, 12).ToArray(), value => Assert.Equal(0, value));
		Assert.Equal(-1, BinaryPrimitives.ReadInt32LittleEndian(image.AsSpan(28)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(image.AsSpan(32)));
		Assert.Equal(CharacterClassStats.EntryCount, player[0]);
		Assert.Equal(1, BinaryPrimitives.ReadUInt16LittleEndian(player.AsSpan(844)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(player.AsSpan(876)));
		Assert.All(system.AsSpan(540, 8).ToArray(), value => Assert.Equal(0, value));
		Assert.All(system.AsSpan(10204, 320).ToArray(), value => Assert.Equal(0, value));
	}

	[Fact]
	public void ResetCharacterRequiresTheBuffers()
	{
		Assert.Throws<InvalidOperationException>(CharacterRecordReset.ResetCharacter);
	}
}
