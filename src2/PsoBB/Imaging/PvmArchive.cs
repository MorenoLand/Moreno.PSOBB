using System.Buffers.Binary;
using PsoBB.Core;

namespace PsoBB.Imaging;

/// <summary>
/// A PowerVR texture archive with its entry table and decoded textures.
/// </summary>
public sealed class PvmArchive
{
	private readonly PvmTexture[] _textures;

	private PvmArchive(PvmArchiveFlags flags, int headerSize, PvmTexture[] textures)
	{
		Flags = flags;
		HeaderSize = headerSize;
		_textures = textures;
	}

	/// <summary>Gets the magic that starts a PVM archive.</summary>
	public const uint Magic = 0x484D5650;

	/// <summary>Gets the optional entry fields present in the archive.</summary>
	public PvmArchiveFlags Flags { get; }

	/// <summary>Gets the header size in bytes after the first eight bytes.</summary>
	public int HeaderSize { get; }

	/// <summary>Gets the textures in archive order.</summary>
	public IReadOnlyList<PvmTexture> Textures => _textures;

	/// <summary>
	/// Parses a complete PVM archive and decodes every texture.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <param name="palette">The external palette for indexed textures, when the archive needs one.</param>
	/// <returns>The parsed archive.</returns>
	/// <exception cref="TextureFormatException">The header, entry table, chunk or pixel data is invalid.</exception>
	public static PvmArchive Parse(ReadOnlySpan<byte> data, PvpPalette? palette = null)
	{
		if (data.Length < 0x0C)
			throw new TextureFormatException("The PVM header is truncated.", data.Length);
		if (BinaryPrimitives.ReadUInt32LittleEndian(data) != Magic)
			throw new TextureFormatException("The archive magic is not PVMH.", 0);
		int headerSize = BinaryPrimitives.ReadInt32LittleEndian(data[4..]);
		if (headerSize < 4)
			throw new TextureFormatException("The PVM header size is invalid.", 4);
		long dataStartLong = 8L + headerSize;
		if (dataStartLong > data.Length)
			throw new TextureFormatException("The PVM header extends past the archive.", 4);
		int dataStart = (int)dataStartLong;
		PvmArchiveFlags flags = (PvmArchiveFlags)BinaryPrimitives.ReadUInt16LittleEndian(data[8..]);
		int count = BinaryPrimitives.ReadUInt16LittleEndian(data[0x0A..]);
		if (count > (dataStart - 0x0C) / 2)
			throw new TextureFormatException("The PVM entry count exceeds the header.", 0x0A);
		List<PvmEntry> entries = ReadEntries(data, flags, count, dataStart);
		PvmTexture[] textures = new PvmTexture[entries.Count];
		int offset = dataStart;
		for (int index = 0; index < entries.Count; index++)
		{
			offset = (offset + 15) & ~15;
			if (offset > data.Length - 0x10)
				throw new TextureFormatException("The PVM texture block is truncated.", offset);
			int chunkOffset = offset;
			if (BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]) == GbixMagic)
			{
				long gbixEnd = offset + 8L + BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
				if (gbixEnd > data.Length)
					throw new TextureFormatException("The GBIX block is truncated.", offset);
				offset = (int)gbixEnd;
				chunkOffset = offset;
				if (offset > data.Length - 0x10)
					throw new TextureFormatException("The PVM texture block is truncated.", offset);
			}
			if (BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]) != PvrTexture.Magic)
				throw new TextureFormatException("The texture magic is not PVRT.", offset);
			long chunkEnd = offset + 8L + BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
			if (chunkEnd > data.Length)
				throw new TextureFormatException("The PVRT chunk is truncated.", offset);
			PvrTexture texture = PvrTexture.Parse(data[offset..(int)chunkEnd]);
			PvmEntry entry = entries[index];
			textures[index] = new PvmTexture(
				entry.Index,
				entry.Name,
				entry.EntryFormat,
				entry.DeclaredWidth,
				entry.DeclaredHeight,
				entry.GlobalIndex,
				chunkOffset,
				texture,
				texture.Decode(palette));
			offset = (int)chunkEnd;
		}
		return new PvmArchive(flags, headerSize, textures);
	}

	/// <summary>
	/// Reads the variable-length entry table.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <param name="flags">The fields present in each entry.</param>
	/// <param name="count">The number of entries.</param>
	/// <param name="dataStart">The first byte after the header.</param>
	/// <returns>The parsed entries.</returns>
	private static List<PvmEntry> ReadEntries(ReadOnlySpan<byte> data, PvmArchiveFlags flags, int count, int dataStart)
	{
		List<PvmEntry> entries = new(count);
		int offset = 0x0C;
		for (int index = 0; index < count; index++)
		{
			RequireEntry(data, offset, 2, dataStart);
			int entryIndex = BinaryPrimitives.ReadUInt16LittleEndian(data[offset..]);
			offset += 2;
			ByteString name = ByteString.Empty;
			if ((flags & PvmArchiveFlags.Filenames) != 0)
			{
				RequireEntry(data, offset, 0x1C, dataStart);
				name = ByteString.FromBytes(data.Slice(offset, 0x1C));
				offset += 0x1C;
			}
			ushort entryFormat = 0;
			if ((flags & PvmArchiveFlags.Formats) != 0)
			{
				RequireEntry(data, offset, 2, dataStart);
				entryFormat = BinaryPrimitives.ReadUInt16LittleEndian(data[offset..]);
				offset += 2;
			}
			int declaredWidth = 0;
			int declaredHeight = 0;
			if ((flags & PvmArchiveFlags.Dimensions) != 0)
			{
				RequireEntry(data, offset, 2, dataStart);
				ushort dimensions = BinaryPrimitives.ReadUInt16LittleEndian(data[offset..]);
				declaredWidth = 1 << ((dimensions & 0x0F) + 2);
				declaredHeight = 1 << (((dimensions >> 4) & 0x0F) + 2);
				offset += 2;
			}
			uint globalIndex = 0;
			if ((flags & PvmArchiveFlags.GlobalIndices) != 0)
			{
				RequireEntry(data, offset, 4, dataStart);
				globalIndex = BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]);
				offset += 4;
			}
			entries.Add(new PvmEntry(entryIndex, name, entryFormat, declaredWidth, declaredHeight, globalIndex));
		}
		if (offset > dataStart)
			throw new TextureFormatException("The PVM entry table overlaps the texture data.", offset);
		return entries;
	}

	/// <summary>
	/// Ensures an entry field lies inside the header.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <param name="offset">Start of the entry field.</param>
	/// <param name="length">Length of the entry field.</param>
	/// <param name="dataStart">The first byte after the header.</param>
	private static void RequireEntry(ReadOnlySpan<byte> data, int offset, int length, int dataStart)
	{
		if (offset < 0 || length < 0 || offset > dataStart - length || dataStart > data.Length)
			throw new TextureFormatException("The PVM entry table is truncated.", offset);
	}

	private const uint GbixMagic = 0x58494247;

	private sealed record PvmEntry(
		int Index,
		ByteString Name,
		ushort EntryFormat,
		int DeclaredWidth,
		int DeclaredHeight,
		uint GlobalIndex);
}
