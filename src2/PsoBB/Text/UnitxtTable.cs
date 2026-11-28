using System.Buffers.Binary;
using PsoBB.Compression;

namespace PsoBB.Text;

/// <summary>
/// Reads the indexed UTF-16 text lists that ship in the <c>unitxt_*.prs</c> bundles.
/// </summary>
/// <remarks>
/// The decompressed bundle begins with a list count and one size per list, followed by one 32-bit byte offset per string and finally the strings. Offsets are relative to the bundle base and every string ends at the first zero UTF-16 code unit; padding after that terminator is ignored. The original parser keeps the list sizes and converts each offset into a pointer; this port keeps the sizes and offsets and decodes a string only when it is requested.
/// </remarks>
public sealed class UnitxtTable
{
	/// <summary>Size of the temporary buffer the original decompresses a unitxt bundle into.</summary>
	private const int TemporaryBufferSize = 0x90000;

	private readonly byte[] _data;
	private readonly int[] _listLengths;
	private readonly int[][] _stringOffsets;

	private UnitxtTable(byte[] data, int[] listLengths, int[][] stringOffsets)
	{
		_data = data;
		_listLengths = listLengths;
		_stringOffsets = stringOffsets;
	}

	/// <summary>Gets the number of lists in the table.</summary>
	[Original(0x0070B080, "GetEndingStringDataStringID")]
	public int ListCount => _listLengths.Length;

	/// <summary>
	/// Decompresses and parses a complete unitxt bundle.
	/// </summary>
	/// <param name="source">The PRS-compressed bundle.</param>
	/// <returns>The parsed table.</returns>
	/// <exception cref="UnitxtFormatException">The stream or the table it contains is invalid.</exception>
	[Original(0x0070AFC0, "unknown_load_local_files")]
	public static UnitxtTable OpenCompressed(ReadOnlySpan<byte> source)
	{
		byte[] buffer = new byte[TemporaryBufferSize];
		int written;
		try
		{
			written = PrsDecompressor.Decompress(source, buffer);
		}
		catch (PrsFormatException exception)
		{
			throw new UnitxtFormatException("The unitxt bundle is not a complete PRS stream.", exception);
		}
		catch (ArgumentException exception)
		{
			throw new UnitxtFormatException($"The unitxt bundle expands beyond the original {TemporaryBufferSize}-byte temporary buffer.", exception);
		}
		return Open(buffer.AsSpan(0, written));
	}

	/// <summary>
	/// Parses a decompressed unitxt bundle.
	/// </summary>
	/// <param name="decompressed">The decompressed bundle bytes.</param>
	/// <returns>The parsed table.</returns>
	/// <exception cref="UnitxtFormatException">The header, offset table or a string terminator is invalid.</exception>
	[Original(0x0070B084, "ParseUnitxtFileList")]
	public static UnitxtTable Open(ReadOnlySpan<byte> decompressed)
	{
		if (decompressed.Length < sizeof(uint))
			throw new UnitxtFormatException($"A unitxt bundle needs a list count but only {decompressed.Length} bytes are present.");
		int listCount = BinaryPrimitives.ReadInt32LittleEndian(decompressed);
		if (listCount < 1)
			throw new UnitxtFormatException($"The unitxt bundle declares {listCount} lists; the original treats a non-positive count as an unloaded table.");
		long offsetTableStart = sizeof(uint) + (long)listCount * sizeof(uint);
		if (offsetTableStart > decompressed.Length)
			throw new UnitxtFormatException($"The unitxt header declares {listCount} lists but only {decompressed.Length} bytes are present.");
		int[] listLengths = new int[listCount];
		long totalStrings = 0;
		for (int list = 0; list < listCount; list++)
		{
			uint length = BinaryPrimitives.ReadUInt32LittleEndian(decompressed[(sizeof(uint) + list * sizeof(uint))..]);
			if (length > int.MaxValue)
				throw new UnitxtFormatException($"Unitxt list {list} declares {length} strings, which exceeds the readable range.");
			listLengths[list] = (int)length;
			totalStrings += length;
		}
		long offsetTableEnd = offsetTableStart + totalStrings * sizeof(uint);
		if (offsetTableEnd > decompressed.Length)
			throw new UnitxtFormatException($"The unitxt table needs {offsetTableEnd} bytes for its offsets but only {decompressed.Length} are present.");
		int[][] stringOffsets = new int[listCount][];
		int position = (int)offsetTableStart;
		for (int list = 0; list < listCount; list++)
		{
			int[] offsets = new int[listLengths[list]];
			for (int index = 0; index < offsets.Length; index++)
			{
				uint offset = BinaryPrimitives.ReadUInt32LittleEndian(decompressed[position..]);
				position += sizeof(uint);
				if (offset > int.MaxValue)
					throw new UnitxtFormatException($"Unitxt list {list} string {index} has offset {offset}, which exceeds the readable range.");
				ValidateTerminator(decompressed, (int)offset, list, index);
				offsets[index] = (int)offset;
			}
			stringOffsets[list] = offsets;
		}
		return new UnitxtTable(decompressed.ToArray(), listLengths, stringOffsets);
	}

	/// <summary>
	/// Gets the number of strings in one list.
	/// </summary>
	/// <param name="list">The zero-based list index.</param>
	/// <returns>The number of strings in the list.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The list does not exist.</exception>
	public int GetListLength(int list)
	{
		ValidateList(list);
		return _listLengths[list];
	}

	/// <summary>
	/// Gets one original UTF-16 string.
	/// </summary>
	/// <param name="list">The zero-based list index.</param>
	/// <param name="index">The zero-based string index inside the list.</param>
	/// <returns>The string without its terminator.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The list or string does not exist.</exception>
	[Original(0x00792FE8, "unitxt_get_string")]
	public string GetString(int list, int index)
	{
		ValidateList(list);
		int[] offsets = _stringOffsets[list];
		if ((uint)index >= (uint)offsets.Length)
			throw new ArgumentOutOfRangeException(nameof(index), index, $"Unitxt list {list} has {offsets.Length} strings.");
		int start = offsets[index];
		int end = start;
		while (BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(end)) != 0)
			end += sizeof(ushort);
		int units = (end - start) / sizeof(ushort);
		char[] characters = new char[units];
		for (int unit = 0; unit < units; unit++)
			characters[unit] = (char)BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(start + unit * sizeof(ushort)));
		return new string(characters);
	}

	/// <summary>Gets an item name from list 1.</summary>
	/// <param name="item">The item's text index.</param>
	/// <returns>The item name.</returns>
	[Original(0x00793050, "unitxt_get_item_name")]
	public string GetItemName(int item) => GetString(1, item);

	/// <summary>Gets a monster name, choosing the Ultimate list on floors 3 and later.</summary>
	/// <param name="monster">The monster's text index; values outside 0 through 108 read as 0.</param>
	/// <param name="currentFloor">The client's current floor value.</param>
	/// <returns>The monster name.</returns>
	[Original(0x00793014, "unitxt_get_monster_name")]
	public string GetMonsterName(int monster, int currentFloor)
	{
		int index = monster < 0 ? 0 : monster;
		if (index > 0x6C)
			index = 0;
		return GetString(currentFloor < 3 ? 2 : 4, index);
	}

	/// <summary>Gets an item description from list 3.</summary>
	/// <param name="item">The item's text index.</param>
	/// <returns>The item description.</returns>
	[Original(0x007930A0, "unitxt_get_item_description")]
	public string GetItemDescription(int item) => GetString(3, item);

	/// <summary>Gets a technique name from list 5.</summary>
	/// <param name="technique">The technique's text index.</param>
	/// <returns>The technique name.</returns>
	[Original(0x00793000, "unitxt_get_technique_name")]
	public string GetTechniqueName(int technique) => GetString(5, technique);

	/// <summary>Gets a technique description from list 6.</summary>
	/// <param name="technique">The technique's text index.</param>
	/// <returns>The technique description.</returns>
	[Original(0x0079308C, "unitxt_get_technique_description")]
	public string GetTechniqueDescription(int technique) => GetString(6, technique);

	/// <summary>Gets an action description from list 7.</summary>
	/// <param name="action">The action's text index.</param>
	/// <returns>The action description.</returns>
	[Original(0x007930B4, "unitxt_get_action_description")]
	public string GetActionDescription(int action) => GetString(7, action);

	/// <summary>Gets a class name from list 8.</summary>
	/// <param name="characterClass">The class's text index.</param>
	/// <returns>The class name.</returns>
	[Original(0x00793078, "unitxt_get_class_name")]
	public string GetClassName(int characterClass) => GetString(8, characterClass);

	/// <summary>Gets a photon blast name from list 9.</summary>
	/// <param name="photonBlast">The photon blast's text index.</param>
	/// <returns>The photon blast name.</returns>
	[Original(0x00793064, "unitxt_get_photon_blast_name")]
	public string GetPhotonBlastName(int photonBlast) => GetString(9, photonBlast);

	/// <summary>Gets a section ID name from list 72.</summary>
	/// <param name="sectionId">The section ID's text index.</param>
	/// <returns>The section ID name.</returns>
	[Original(0x007930C8, "unitxt_get_sectionid_name")]
	public string GetSectionIdName(int sectionId) => GetString(72, sectionId);

	/// <summary>Gets a character-creation string from list 12.</summary>
	/// <param name="index">The string's index.</param>
	/// <returns>The character-creation string.</returns>
	[Original(0x007930DC, "unitxt_get_group_12_string")]
	public string GetCharacterCreationString(int index) => GetString(12, index);

	/// <summary>Gets the Meseta label, the first string of list 12.</summary>
	/// <returns>The Meseta label.</returns>
	[Original(0x007930F0, "unitxt_get_string_meseta")]
	public string Meseta => GetString(12, 0);

	/// <summary>Gets the class-type label selected by the character-creation flags.</summary>
	/// <param name="flags">The class-type flag bits.</param>
	/// <returns>The label, or <see langword="null"/> when no class-type bit is set.</returns>
	[Original(0x007930FC, "unitxt_get_character_class_type_name")]
	public string? GetCharacterClassTypeName(uint flags)
	{
		if ((flags & 0x20) != 0)
			return GetString(12, 3);
		if ((flags & 0x40) != 0)
			return GetString(12, 4);
		return (flags & 0x80) != 0 ? GetString(12, 5) : null;
	}

	/// <summary>Gets a menu or system string from list 11.</summary>
	/// <param name="index">The string's index.</param>
	/// <returns>The menu or system string.</returns>
	[Original(0x0079317C, "unitxt_get_group_11_String")]
	public string GetMenuString(int index) => GetString(11, index);

	/// <summary>Gets a string from list 15.</summary>
	/// <param name="index">The string's index.</param>
	/// <returns>The list 15 string.</returns>
	[Original(0x00793168, "unitxt_get_group_15_string")]
	public string GetGroup15String(int index) => GetString(15, index);

	private static void ValidateTerminator(ReadOnlySpan<byte> data, int offset, int list, int index)
	{
		if (offset < 0 || offset > data.Length - sizeof(ushort))
			throw new UnitxtFormatException($"Unitxt list {list} string {index} starts at {offset}, outside the {data.Length}-byte bundle.");
		for (int position = offset; position <= data.Length - sizeof(ushort); position += sizeof(ushort))
		{
			if (BinaryPrimitives.ReadUInt16LittleEndian(data[position..]) == 0)
				return;
		}
		throw new UnitxtFormatException($"Unitxt list {list} string {index} at {offset} has no UTF-16 terminator.");
	}

	private void ValidateList(int list)
	{
		if ((uint)list >= (uint)_listLengths.Length)
			throw new ArgumentOutOfRangeException(nameof(list), list, $"The table has {_listLengths.Length} lists.");
	}
}
