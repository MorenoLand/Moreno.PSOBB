using System.Buffers.Binary;
using System.Text;

namespace PsoBB.Text;

/// <summary>
/// The two-level string container the client loads from a decompressed <c>unitxt</c> file.
/// </summary>
/// <remarks>
/// The file starts with a table count, one entry count per table, then one absolute byte offset per string. The original loader converts those offsets to pointers; this type resolves them when the container is parsed. Only the decompressed bytes are accepted, so the platform layer owns file access and PRS decompression.
/// </remarks>
public sealed class UiTextTable
{
	private const int OptionTableIndex = 0;
	private const int MessageTableIndex = 11;
	private readonly string[][] _tables;

	private UiTextTable(string[][] tables) => _tables = tables;

	/// <summary>
	/// Parses a decompressed <c>unitxt</c> container.
	/// </summary>
	/// <param name="data">The decompressed bytes, starting with the table count.</param>
	/// <returns>The parsed table.</returns>
	/// <exception cref="InvalidDataException">The table counts, offsets or UTF-16 strings are malformed.</exception>
	public static UiTextTable Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < 4)
			throw new InvalidDataException("The text table header is truncated.");
		int tableCount = BinaryPrimitives.ReadInt32LittleEndian(data);
		if (tableCount < 0 || 4L + (tableCount * 4L) > data.Length)
			throw new InvalidDataException("The text table count is outside the container.");
		int[] counts = new int[tableCount];
		long pointerOffset = 4 + (tableCount * 4);
		long stringsOffset = pointerOffset;
		for (int table = 0; table < tableCount; table++)
		{
			counts[table] = BinaryPrimitives.ReadInt32LittleEndian(data[(4 + (table * 4))..]);
			if (counts[table] < 0)
				throw new InvalidDataException("A text table entry count is negative.");
			stringsOffset += counts[table] * 4L;
		}
		if (stringsOffset > data.Length)
			throw new InvalidDataException("The text table string area is outside the container.");
		string[][] tables = new string[tableCount][];
		long cursor = pointerOffset;
		for (int table = 0; table < tableCount; table++)
		{
			string[] entries = new string[counts[table]];
			for (int index = 0; index < entries.Length; index++)
			{
				int offset = BinaryPrimitives.ReadInt32LittleEndian(data[(int)cursor..]);
				cursor += 4;
				if (offset < 0 || offset >= data.Length)
					throw new InvalidDataException("A text string offset is outside the container.");
				entries[index] = ReadString(data, offset);
			}
			tables[table] = entries;
		}
		return new UiTextTable(tables);
	}

	/// <summary>
	/// Gets an entry from a container table by table and entry index.
	/// </summary>
	/// <param name="table">The table index.</param>
	/// <param name="index">The entry index.</param>
	/// <returns>The stored text.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The table or entry index is outside the container.</exception>
	[Original(0x00792FE8)]
	public string GetTableText(int table, int index)
	{
		if ((uint)table >= (uint)_tables.Length)
			throw new ArgumentOutOfRangeException(nameof(table));
		string[] entries = _tables[table];
		if ((uint)index >= (uint)entries.Length)
			throw new ArgumentOutOfRangeException(nameof(index));
		return entries[index];
	}

	/// <summary>
	/// Gets an option label from table zero.
	/// </summary>
	/// <param name="index">The entry index.</param>
	/// <returns>The stored text.</returns>
	public string GetOptionText(int index) => GetTableText(OptionTableIndex, index);

	/// <summary>
	/// Gets a general interface message from the table the original reads at <c>0x0079317C</c>.
	/// </summary>
	/// <param name="index">The entry index.</param>
	/// <returns>The stored text.</returns>
	[Original(0x0079317C)]
	public string GetMessage(int index) => GetTableText(MessageTableIndex, index);

	private static string ReadString(ReadOnlySpan<byte> data, int offset)
	{
		int end = offset;
		while (true)
		{
			if (end + 1 >= data.Length)
				throw new InvalidDataException("A text string has no terminator.");
			if (data[end] == 0 && data[end + 1] == 0)
				break;
			end += 2;
		}
		return Encoding.Unicode.GetString(data[offset..end]);
	}
}
