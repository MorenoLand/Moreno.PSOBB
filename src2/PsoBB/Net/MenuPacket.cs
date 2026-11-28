using System.Buffers.Binary;
using System.Text;

namespace PsoBB.Net;

/// <summary>One 0x2C-byte command 0x07 menu record.</summary>
/// <param name="MenuId">The menu identifier sent back in command 0x10.</param>
/// <param name="ItemId">The item identifier sent back in command 0x10.</param>
/// <param name="Name">The UTF-16 item name.</param>
public readonly record struct MenuItemRecord(uint MenuId, uint ItemId, string Name)
{
	/// <summary>The record size.</summary>
	public const int Size = 0x2C;

	/// <summary>The name field width.</summary>
	public const int NameLength = 0x20;

	/// <summary>
	/// Reads one record.
	/// </summary>
	/// <param name="data">The 0x2C record bytes.</param>
	/// <returns>The decoded record.</returns>
	/// <exception cref="InvalidDataException">The record is shorter than 0x2C bytes.</exception>
	public static MenuItemRecord Read(ReadOnlySpan<byte> data)
	{
		if (data.Length < Size)
			throw new InvalidDataException($"A menu record requires 0x{Size:X} bytes but only 0x{data.Length:X} are available.");
		int end = 0x0A;
		while (end + 1 < 0x0A + NameLength && (data[end] | data[end + 1]) != 0)
			end += 2;
		string name = Encoding.Unicode.GetString(data[0x0A..end]);
		return new MenuItemRecord(
			BinaryPrimitives.ReadUInt32LittleEndian(data),
			BinaryPrimitives.ReadUInt32LittleEndian(data[4..]),
			name.Length != 0 && name[0] == '\uFEFF' ? name[1..] : name);
	}
}

/// <summary>
/// The command 0x07 menu list. The header flag is the entry count minus one and the payload carries every entry.
/// </summary>
public sealed class MenuPacket
{
	/// <summary>The first record is omitted from the header count.</summary>
	public const int OmittedRecords = 1;

	private MenuPacket(MenuItemRecord[] records) => Records = records;

	/// <summary>Gets the menu records in wire order.</summary>
	public IReadOnlyList<MenuItemRecord> Records { get; }

	/// <summary>Gets the number of records.</summary>
	public int Count => Records.Count;

	/// <summary>
	/// Reads the menu payload.
	/// </summary>
	/// <param name="payload">The payload bytes after the header.</param>
	/// <param name="declaredCount">The header flag, which is the entry count minus one.</param>
	/// <returns>The decoded menu.</returns>
	/// <exception cref="InvalidDataException">The payload is too short for the declared records.</exception>
	public static MenuPacket Read(ReadOnlySpan<byte> payload, uint declaredCount)
	{
		int count = checked((int)declaredCount + OmittedRecords);
		int length = count * MenuItemRecord.Size;
		if (payload.Length < length)
			throw new InvalidDataException($"The menu declares {count} records ({length} bytes) but only {payload.Length} payload bytes are available.");
		MenuItemRecord[] records = new MenuItemRecord[count];
		for (int index = 0; index < count; index++)
			records[index] = MenuItemRecord.Read(payload.Slice(index * MenuItemRecord.Size, MenuItemRecord.Size));
		return new MenuPacket(records);
	}
}
