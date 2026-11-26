using System.Buffers.Binary;

namespace PsoBB.Quests;

/// <summary>
/// The container of a decompressed quest <c>.bin</c> script: header, text section, label table and entry points.
/// </summary>
/// <remarks>
/// The header gives the file offsets of the text section and label table plus the total size. Each label-table entry is a 32-bit offset from the start of the text section; label zero is the quest's first entry point. Script bytecode and opcode execution are not interpreted here.
/// </remarks>
public sealed class QuestScriptFile
{
	/// <summary>The size of the readable header that precedes the text section.</summary>
	public const int HeaderLength = 0x398;

	private const int NameOffset = 0x18;
	private const int NameLength = 0x20;
	private const int ShortDescriptionOffset = 0x58;
	private const int ShortDescriptionLength = 0x80;
	private const int LongDescriptionOffset = 0x158;
	private const int LongDescriptionLength = 0x120;

	private readonly byte[] _fileBytes;
	private readonly byte[] _text;
	private readonly byte[] _labelTable;
	private readonly uint[] _entryPoints;
	private readonly byte[] _name;
	private readonly byte[] _shortDescription;
	private readonly byte[] _longDescription;

	private QuestScriptFile(byte[] fileBytes, uint textOffset, uint labelTableOffset, uint totalSize, ushort questNumber, byte episode, byte maxPlayers, bool joinable, byte[] text, byte[] labelTable, uint[] entryPoints, byte[] name, byte[] shortDescription, byte[] longDescription)
	{
		_fileBytes = fileBytes;
		TextOffset = textOffset;
		LabelTableOffset = labelTableOffset;
		TotalSize = totalSize;
		QuestNumber = questNumber;
		Episode = episode;
		MaxPlayers = maxPlayers;
		Joinable = joinable;
		_text = text;
		_labelTable = labelTable;
		_entryPoints = entryPoints;
		_name = name;
		_shortDescription = shortDescription;
		_longDescription = longDescription;
	}

	/// <summary>Gets the file offset where the text and inline data section starts.</summary>
	public uint TextOffset { get; }

	/// <summary>Gets the file offset where the label table starts.</summary>
	public uint LabelTableOffset { get; }

	/// <summary>Gets the total size declared by the header; bytes after it are alignment padding.</summary>
	public uint TotalSize { get; }

	/// <summary>Gets the quest number from the header.</summary>
	public ushort QuestNumber { get; }

	/// <summary>Gets the episode number: 0 for Episode 1, 1 for Episode 2 and 2 for Episode 4.</summary>
	public byte Episode { get; }

	/// <summary>Gets the maximum player count, where zero means the client applies its own four-player limit.</summary>
	public byte MaxPlayers { get; }

	/// <summary>Gets a value indicating whether other players may join the quest.</summary>
	public bool Joinable { get; }

	/// <summary>Gets the bytecode and inline-data section.</summary>
	public ReadOnlyMemory<byte> Text => _text;

	/// <summary>Gets the raw label table.</summary>
	public ReadOnlyMemory<byte> LabelTable => _labelTable;

	/// <summary>Gets the label-table entries, each relative to the start of <see cref="Text"/>.</summary>
	public ReadOnlySpan<uint> EntryPoints => _entryPoints;

	/// <summary>Gets the fixed UTF-16LE quest-name field.</summary>
	public ReadOnlyMemory<byte> Name => _name;

	/// <summary>Gets the fixed UTF-16LE short-description field.</summary>
	public ReadOnlyMemory<byte> ShortDescription => _shortDescription;

	/// <summary>Gets the fixed UTF-16LE long-description field.</summary>
	public ReadOnlyMemory<byte> LongDescription => _longDescription;

	/// <summary>
	/// Reads the header and resolves the text and label-table sections.
	/// </summary>
	/// <param name="data">The complete decompressed <c>.bin</c> file.</param>
	/// <returns>The parsed container.</returns>
	/// <exception cref="QuestFormatException">The header is short, a section lies outside the file or an entry point misses the text section.</exception>
	[Original(0x006B9980)]
	public static QuestScriptFile Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < HeaderLength)
			throw new QuestFormatException("The quest script is too short for its header.", data.Length);
		uint textOffset = BinaryPrimitives.ReadUInt32LittleEndian(data);
		uint labelTableOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		uint totalSize = BinaryPrimitives.ReadUInt32LittleEndian(data[8..]);
		if (totalSize < HeaderLength)
			throw new QuestFormatException("The quest script size is smaller than its header.", 8);
		if (totalSize > (uint)data.Length)
			throw new QuestFormatException("The quest script size extends beyond the end of the file.", 8);
		if (textOffset < HeaderLength || textOffset >= totalSize)
			throw new QuestFormatException("The text section starts outside the quest script.", 0);
		if (labelTableOffset < HeaderLength || labelTableOffset >= totalSize)
			throw new QuestFormatException("The label table starts outside the quest script.", 4);
		if (textOffset == labelTableOffset)
			throw new QuestFormatException("The text section and label table overlap completely.", 4);
		uint textEnd = textOffset < labelTableOffset ? labelTableOffset : totalSize;
		uint labelTableEnd = textOffset < labelTableOffset ? totalSize : textOffset;
		int labelTableLength = (int)(labelTableEnd - labelTableOffset);
		if ((labelTableLength & 3) != 0)
			throw new QuestFormatException("The label table does not contain whole 32-bit entries.", (int)labelTableOffset);
		int labelCount = labelTableLength / 4;
		if (labelCount == 0)
			throw new QuestFormatException("The quest script has no entry points.", (int)labelTableOffset);
		byte[] text = data[(int)textOffset..(int)textEnd].ToArray();
		byte[] labelTable = data[(int)labelTableOffset..(int)labelTableEnd].ToArray();
		uint[] entryPoints = new uint[labelCount];
		for (int index = 0; index < labelCount; index++)
		{
			uint entryPoint = BinaryPrimitives.ReadUInt32LittleEndian(labelTable.AsSpan(index * 4));
			if (entryPoint >= (uint)text.Length)
				throw new QuestFormatException("An entry point lies outside the text section.", (int)labelTableOffset + index * 4);
			entryPoints[index] = entryPoint;
		}
		ushort questNumber = BinaryPrimitives.ReadUInt16LittleEndian(data[0x10..]);
		byte episode = data[0x14];
		byte maxPlayers = data[0x15];
		bool joinable = data[0x16] != 0;
		return new QuestScriptFile(
			data.ToArray(), textOffset, labelTableOffset, totalSize, questNumber, episode, maxPlayers, joinable, text, labelTable, entryPoints,
			data.Slice(NameOffset, NameLength).ToArray(),
			data.Slice(ShortDescriptionOffset, ShortDescriptionLength).ToArray(),
			data.Slice(LongDescriptionOffset, LongDescriptionLength).ToArray());
	}

	/// <summary>
	/// Returns the offset of one entry point from the start of the text section.
	/// </summary>
	/// <param name="index">Zero-based label-table index.</param>
	/// <returns>The text-relative offset.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the label table.</exception>
	public uint GetEntryPointOffset(int index)
	{
		if ((uint)index >= (uint)_entryPoints.Length)
			throw new ArgumentOutOfRangeException(nameof(index));
		return _entryPoints[index];
	}

	/// <summary>
	/// Returns the complete file exactly as it was read, including bytes after the declared size.
	/// </summary>
	/// <returns>A new byte array holding the file.</returns>
	public byte[] ToArray() => _fileBytes.ToArray();
}
