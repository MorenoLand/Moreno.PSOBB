using System.Buffers.Binary;

namespace PsoBB.Save;

/// <summary>
/// The character-record stat, flag and inventory reset used by the new-character path.
/// </summary>
/// <remarks>
/// <c>0x006AAE88</c> writes the seven level stats, the ten-unit scale at offset 864, the level at
/// 868, the TP value at 872 and the 300 at 876. <c>0x006AAFE0</c> writes the twenty-four 0xFF
/// class bytes, clears the first when bit 0x80 is set, and calls <c>0x006AB260</c>.
/// <c>0x006C7754</c> chains the 30-slot inventory wipe, the class record, the stat apply and the
/// system-record clears.
/// </remarks>
public static class CharacterRecordReset
{
	/// <summary>The length of the player record copied from a slot.</summary>
	public const int PlayerRecordLength = CharacterSaveLoad.PlayerChunkLength;

	/// <summary>The number of inventory blocks <c>0x006C7754</c> wipes.</summary>
	public const int InventoryBlockCount = 30;

	/// <summary>The length of one inventory block.</summary>
	public const int InventoryBlockLength = 28;

	/// <summary>The offset of the level in the player record.</summary>
	public const int LevelOffset = 868;

	/// <summary>The offset of the first class flag byte.</summary>
	public const int ClassFlagOffset = 1224;

	/// <summary>The number of class flag bytes.</summary>
	public const int ClassFlagCount = 20;

	/// <summary>
	/// Applies the base stats and the level record to the player record.
	/// </summary>
	/// <param name="record">The player record.</param>
	/// <param name="classByte">The class byte at offset 929.</param>
	/// <param name="level">The character level.</param>
	/// <exception cref="ArgumentException">The record is too small.</exception>
	[Original(0x006AAE88)]
	public static void ApplyStats(Span<byte> record, int classByte, int level)
	{
		if (record.Length < 880)
			throw new ArgumentException("A player record needs 880 bytes.", nameof(record));
		int clamped = level < 0 ? 0 : level > CharacterClassStats.MaxLevelValue ? CharacterClassStats.MaxLevelValue : level;
		Span<ushort> stats = stackalloc ushort[7];
		CharacterClassStats.ApplyLevel(classByte, clamped, stats);
		BinaryPrimitives.WriteInt32LittleEndian(record[864..], 1092616192);
		for (int index = 0; index < 7; index++)
			BinaryPrimitives.WriteUInt16LittleEndian(record[(844 + index * 2)..], stats[index]);
		BinaryPrimitives.WriteUInt16LittleEndian(record[858..], 40);
		BinaryPrimitives.WriteInt32LittleEndian(record[LevelOffset..], clamped);
		BinaryPrimitives.WriteInt32LittleEndian(record[876..], 300);
		BinaryPrimitives.WriteInt32LittleEndian(record[872..], CharacterClassStats.LevelValue(classByte, clamped));
		record[1] = 0;
		record[2] = 0;
		foreach (int offset in new[] { 231, 259, 287, 315, 343 })
			record[offset] = 0;
	}

	/// <summary>
	/// Writes the twenty-four 0xFF class bytes, clears the first when the 0x80 flag is set, and
	/// clears the thirty inventory flag bytes.
	/// </summary>
	/// <param name="record">The player record.</param>
	/// <exception cref="ArgumentException">The record is too small.</exception>
	[Original(0x006AAFE0)]
	public static void ResetFlags(Span<byte> record)
	{
		if (record.Length < ClassFlagOffset + ClassFlagCount)
			throw new ArgumentException("The player record is too small for the class flags.", nameof(record));
		int flags = BinaryPrimitives.ReadInt32LittleEndian(record[932..]);
		record.Slice(ClassFlagOffset, ClassFlagCount).Fill(0xFF);
		if ((flags & 0x80) != 0)
			record[ClassFlagOffset] = 0;
		ClearInventoryFlags(record);
	}

	/// <summary>
	/// Clears the byte at offset six of each 28-byte inventory block.
	/// </summary>
	/// <param name="record">The player record.</param>
	/// <exception cref="ArgumentException">The record is too small.</exception>
	[Original(0x006AB260)]
	public static void ClearInventoryFlags(Span<byte> record)
	{
		if (record.Length < 6 + (InventoryBlockCount - 1) * InventoryBlockLength + 1)
			throw new ArgumentException("The player record is too small for the inventory flags.", nameof(record));
		for (int index = 0; index < InventoryBlockCount; index++)
			record[6 + index * InventoryBlockLength] = 0;
	}

	/// <summary>
	/// Wipes the selected inventory, resets the class record and stats, and clears the system record.
	/// </summary>
	/// <exception cref="InvalidOperationException">The character buffers are not attached.</exception>
	[Original(0x006C7754)]
	public static void ResetCharacter()
	{
		byte[] image = CharacterSaveLoad.LoadBuffer ?? throw new InvalidOperationException("The character load buffer is not attached.");
		byte[] player = CharacterSaveLoad.PlayerRecord ?? throw new InvalidOperationException("The player record is not attached.");
		int start = CharacterSave.SlotLength * CharacterSaveLoad.Slot + 8;
		for (int index = 0; index < InventoryBlockCount; index++)
		{
			int block = start + index * InventoryBlockLength;
			image[block + 1] = 0xFF;
			image[block] = 0;
			BinaryPrimitives.WriteInt32LittleEndian(image.AsSpan(block + 4), 0);
			CharacterSaveFixup.ClearItem(image.AsSpan(block + 8, 20));
		}
		player[0] = 0;
		CharacterClassStats.Apply(player, player[929]);
		ApplyStats(player, player[929], BinaryPrimitives.ReadInt32LittleEndian(player[LevelOffset..]));
		ResetFlags(player);
		BinaryPrimitives.WriteInt32LittleEndian(player.AsSpan(876), 0);
		if (CharacterSaveLoad.SystemRecord is byte[] system)
		{
			CharacterSaveFixup.ClearItemBlock(system.AsSpan(540));
			system.AsSpan(10204, 320).Clear();
		}
	}
}
