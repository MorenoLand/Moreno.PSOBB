namespace PsoBB.Net;

/// <summary>
/// The command 0x83 lobby-menu reply.
/// </summary>
/// <remarks>
/// The count is the packet header flag word, not a payload field. The original handler at 0x007C89EC copies 0xC8 bytes from the packet pointer, reads the count at +4 and copies 0x0C-byte records from +8 into the table at this+0x13CB8; the count is stored at this+0x12148. A client selection sends the first two record values back in command 0x84 through 0x007D4068. The original also has a fallback that copies exactly ten records when the global at 0x009F9860 is zero; that branch is not used by the shipped online path.
/// </remarks>
public sealed class LobbyMenuPacket
{
	/// <summary>The size of one menu record.</summary>
	public const int RecordLength = LobbyMenuRecord.Size;

	/// <summary>The number of records the 0xC0-byte record area can hold.</summary>
	public const int MaximumRecords = 0x10;

	private LobbyMenuPacket(LobbyMenuRecord[] records) => Records = records;

	/// <summary>Gets the menu records in wire order.</summary>
	public IReadOnlyList<LobbyMenuRecord> Records { get; }

	/// <summary>Gets the number of records.</summary>
	public int Count => Records.Count;

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header.</param>
	/// <param name="recordCount">The count from the packet header flag word.</param>
	/// <returns>The decoded menu.</returns>
	/// <exception cref="InvalidDataException">The count exceeds sixteen or the payload is too short for the declared records.</exception>
	public static LobbyMenuPacket Read(ReadOnlySpan<byte> payload, uint recordCount)
	{
		if (recordCount > MaximumRecords)
			throw new InvalidDataException($"The lobby-menu reply declares {recordCount} records but at most 0x{MaximumRecords:X} fit the 0xC0-byte record area.");
		int count = (int)recordCount;
		int length = count * RecordLength;
		if (payload.Length < length)
			throw new InvalidDataException($"The lobby-menu reply declares {count} records ({length} bytes) but only {payload.Length} payload bytes are available.");
		LobbyMenuRecord[] records = new LobbyMenuRecord[count];
		for (int index = 0; index < count; index++)
			records[index] = LobbyMenuRecord.Read(payload.Slice(index * RecordLength, RecordLength));
		return new LobbyMenuPacket(records);
	}
}
