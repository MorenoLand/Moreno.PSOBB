namespace PsoBB.Save;

/// <summary>
/// The twelve 140-byte class-stat records behind the pointer table at <c>0x009CC4BC</c>.
/// </summary>
/// <remarks>
/// <c>0x0068C45C</c> clamps a class byte at twelve, <c>0x006AC938</c> returns the record pointer and
/// <c>0x006AB1B4</c> stores the count five and copies the five 28-byte entries to offset four.
/// The table is the shipped data image; it is stored here because the records are not present in
/// any retail archive. An out-of-range class reads entry zero, matching the clamp.
/// </remarks>
public static class CharacterClassStats
{
	/// <summary>The number of class records.</summary>
	public const int ClassCount = 12;

	/// <summary>The copied length of one class record.</summary>
	public const int RecordLength = 140;

	/// <summary>The entry count <c>0x006AB1B4</c> stores at offset zero.</summary>
	public const byte EntryCount = 5;

	private const string Encoded =
		"AQAAAAgAAAAAAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAQEAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAIABQD0AQAAAAAAAP////8SAAAoAQAAAAAAAAADAAAAAAQAAAAAAAD/////AAAAAAEAAAAAAAAAAwEAAAAEAAAAAAAA/////wAAAAABAAAACAAAAAABAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAABAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAgAFAPQBAAAAAAAA/////xIAACgBAAAAAAAAAAMAAAAABAAAAAAAAP////8AAAAAAQAAAAAAAAADAQAAAAQAAAAAAAD/////AAAAAAEAAAAIAAAAAAEAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAEBAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAACAAUA9AEAAAAAAAD/////EgAAKAEAAAAAAAAAAwAAAAAEAAAAAAAA/////wAAAAABAAAAAAAAAAMBAAAABAAAAAAAAP////8AAAAAAQAAAAgAAAAABgAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAQEAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAIABQD0AQAAAAAAAP////8SAAAoAQAAAAAAAAADAAAAAAQAAAAAAAD/////AAAAAAEAAAAAAAAAAwEAAAAEAAAAAAAA/////wAAAAABAAAACAAAAAAGAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAABAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAgAFAPQBAAAAAAAA/////xIAACgBAAAAAAAAAAMAAAAABAAAAAAAAP////8AAAAAAQAAAAAAAAADAQAAAAQAAAAAAAD/////AAAAAAEAAAAIAAAAAAYAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAEBAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAACAAUA9AEAAAAAAAD/////EgAAKAEAAAAAAAAAAwAAAAAEAAAAAAAA/////wAAAAABAAAAAAAAAAMBAAAABAAAAAAAAP////8AAAAAAQAAAAgAAAAACgAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAQEAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAIABQD0AQAAAAAAAP////8SAAAoAQAAAAAAAAADAAAAAAQAAAAAAAD/////AAAAAAEAAAAAAAAAAwEAAAAEAAAAAAAA/////wAAAAABAAAACAAAAAAKAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAABAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAgAFAPQBAAAAAAAA/////xIAACgBAAAAAAAAAAMAAAAABAAAAAAAAP////8AAAAAAQAAAAAAAAADAQAAAAQAAAAAAAD/////AAAAAAEAAAAIAAAAAAoAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAEBAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAACAAUA9AEAAAAAAAD/////EgAAKAEAAAAAAAAAAwAAAAAEAAAAAAAA/////wAAAAABAAAAAAAAAAMBAAAABAAAAAAAAP////8AAAAAAQAAAAgAAAAAAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAQEAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAIABQD0AQAAAAAAAP////8SAAAoAQAAAAAAAAADAAAAAAQAAAAAAAD/////AAAAAAEAAAAAAAAAAwEAAAAEAAAAAAAA/////wAAAAABAAAACAAAAAAKAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAABAQAAAAAAAAAAAAD/////AAAAAAEAAAAIAAAAAgAFAPQBAAAAAAAA/////xIAACgBAAAAAAAAAAMAAAAABAAAAAAAAP////8AAAAAAQAAAAAAAAADAQAAAAQAAAAAAAD/////AAAAAAEAAAAIAAAAAAYAAAAAAAAAAAAA/////wAAAAABAAAACAAAAAEBAAAAAAAAAAAAAP////8AAAAAAQAAAAgAAAACAAUA9AEAAAAAAAD/////EgAAKAEAAAAAAAAAAwAAAAAEAAAAAAAA/////wAAAAABAAAAAAAAAAMBAAAABAAAAAAAAP////8AAAAA";

	private static readonly byte[] Table = Convert.FromBase64String(Encoded);

	/// <summary>
	/// Clamps a class byte to zero when it is twelve or above.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <returns>The clamped index.</returns>
	[Original(0x0068C45C)]
	public static int ClampClass(int classByte) => (uint)classByte >= ClassCount ? 0 : classByte;

	/// <summary>
	/// Returns the 140-byte class record.
	/// </summary>
	/// <param name="classByte">The class byte read at offset 929.</param>
	/// <returns>The record for the clamped class.</returns>
	[Original(0x006AC938)]
	public static ReadOnlySpan<byte> GetRecord(int classByte) => Table.AsSpan(ClampClass(classByte) * RecordLength, RecordLength);

	/// <summary>The highest character level.</summary>
	public const int MaxLevelValue = 199;

	/// <summary>The length of one growth-cap record.</summary>
	public const int GrowthRecordLength = 36;

	/// <summary>The length of one fallback level record.</summary>
	public const int LevelRecordLength = 12;

	/// <summary>The number of level bytes per class.</summary>
	public const int ClassLevelLength = 200;

	/// <summary>Returns the highest character level.</summary>
	/// <returns>199.</returns>
	[Original(0x006931F8)]
	public static int MaxLevel() => MaxLevelValue;

	/// <summary>
	/// Returns the seven base stat words at <c>0x00969188</c>.
	/// </summary>
	/// <returns>The 16-byte shim base record.</returns>
	[Original(0x006AC950)]
	public static ReadOnlySpan<byte> BaseStats() => CharacterStatTables.Base;

	/// <summary>
	/// Returns the 36-byte growth-cap record for the clamped class.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <returns>The record.</returns>
	[Original(0x006AC470)]
	public static ReadOnlySpan<byte> GrowthRecord(int classByte) => CharacterStatTables.Growth.Slice(ClampClass(classByte) * GrowthRecordLength, GrowthRecordLength);

	/// <summary>
	/// Returns the 12-byte fallback level record.
	/// </summary>
	/// <param name="classByte">The class byte; the fallback table is shared by every class.</param>
	/// <param name="level">The zero-based level.</param>
	/// <returns>The record.</returns>
	[Original(0x006AC579)]
	public static ReadOnlySpan<byte> LevelRecord(int classByte, int level)
	{
		int clamped = level < 0 ? 0 : level > MaxLevelValue ? MaxLevelValue : level;
		return CharacterStatTables.Levels.Slice(clamped * LevelRecordLength, LevelRecordLength);
	}

	/// <summary>
	/// Returns the dword at offset eight of the level record.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <param name="level">The zero-based level.</param>
	/// <returns>The stored value.</returns>
	[Original(0x006AC5CC)]
	public static int LevelValue(int classByte, int level) => System.Buffers.Binary.BinaryPrimitives.ReadInt32LittleEndian(LevelRecord(classByte, level)[8..]);

	/// <summary>
	/// Adds the level records one through <paramref name="level"/> to the first six stats with the
	/// growth caps and the signed 16-bit clamp at <c>0x00695730</c>.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <param name="level">The zero-based level.</param>
	/// <param name="stats">The seven stat words that receive the result.</param>
	/// <exception cref="ArgumentException">The span is smaller than seven words.</exception>
	[Original(0x00695730)]
	public static void ApplyLevel(int classByte, int level, Span<ushort> stats)
	{
		if (stats.Length < 7)
			throw new ArgumentException("Seven stat words are required.", nameof(stats));
		int clamped = level < 0 ? 0 : level > MaxLevelValue ? MaxLevelValue : level;
		ReadOnlySpan<byte> baseStats = BaseStats();
		for (int index = 0; index < 7; index++)
			stats[index] = System.Buffers.Binary.BinaryPrimitives.ReadUInt16LittleEndian(baseStats[(index * 2)..]);
		ReadOnlySpan<byte> caps = GrowthRecord(classByte);
		for (int current = 1; current <= clamped; current++)
		{
			ReadOnlySpan<byte> record = LevelRecord(classByte, current);
			for (int index = 0; index < 6; index++)
			{
				ushort cap = System.Buffers.Binary.BinaryPrimitives.ReadUInt16LittleEndian(caps[(index * 2)..]);
				short sum = unchecked((short)(stats[index] + record[index]));
				if (sum < 0)
					stats[index] = 0;
				else if (unchecked((short)(sum - cap)) <= 0)
					stats[index] = (ushort)sum;
				else
					stats[index] = cap;
			}
		}
	}

	/// <summary>
	/// Returns the class level byte at <c>0x006AD126</c>.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <param name="index">The byte index within the 200-byte class record.</param>
	/// <returns>The stored byte.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the record.</exception>
	[Original(0x006AD126)]
	public static byte LevelByte(int classByte, int index)
	{
		if ((uint)index >= ClassLevelLength)
			throw new ArgumentOutOfRangeException(nameof(index));
		return CharacterStatTables.Classes[ClampClass(classByte) * ClassLevelLength + index];
	}

	/// <summary>
	/// Returns whether the value is 255 or no greater than the class level byte at
	/// <c>0x006AD0E4</c>.
	/// </summary>
	/// <param name="classByte">The class byte.</param>
	/// <param name="index">The byte index within the class record.</param>
	/// <param name="value">The value to compare.</param>
	/// <returns><see langword="true"/> when the value is allowed.</returns>
	[Original(0x006AD0E4)]
	public static bool IsLevelAllowed(int classByte, int index, int value) => value == 255 || value <= LevelByte(classByte, index);

	/// <summary>
	/// Stores the five-entry count and copies the class record to offset four.
	/// </summary>
	/// <param name="record">The 144-byte destination record.</param>
	/// <param name="classByte">The class byte read at offset 929.</param>
	/// <exception cref="ArgumentException">The destination is too small.</exception>
	[Original(0x006AB1B4)]
	public static void Apply(Span<byte> record, int classByte)
	{
		if (record.Length < 4 + RecordLength)
			throw new ArgumentException("A class record needs 144 bytes.", nameof(record));
		record[0] = EntryCount;
		GetRecord(classByte).CopyTo(record[4..]);
	}
}
