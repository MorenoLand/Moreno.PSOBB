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
