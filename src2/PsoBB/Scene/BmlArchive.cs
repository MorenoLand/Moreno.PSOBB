using System.Buffers.Binary;
using System.Text;
using PsoBB.Compression;

namespace PsoBB.Scene;

/// <summary>
/// A BML model archive: a 0x800-byte header block, named entry descriptors and aligned PRS streams.
/// </summary>
/// <remarks>
/// The header stores an entry count, a compression flag of <c>P</c> and a texture-present flag. Descriptors are 0x40 bytes each. Geometry streams begin after the first 0x800-byte block; each stream is followed, when present, by its texture stream, and streams are aligned to 0x20 bytes when the archive carries textures or to 0x800 otherwise. Each geometry stream is one or more Ninja IFF chunks; the deeper NJCM model conversion is outside this loader batch.
/// </remarks>
public sealed class BmlArchive
{
	/// <summary>The size of one descriptor.</summary>
	public const int DescriptorSize = 0x40;

	/// <summary>The minimum header block the original reads.</summary>
	public const int HeaderBlockSize = 0x800;

	private readonly byte[] _data;
	private readonly BmlEntry[] _entries;

	private BmlArchive(byte[] data, bool isCompressed, bool hasTextures, BmlEntry[] entries)
	{
		_data = data;
		IsCompressed = isCompressed;
		HasTextures = hasTextures;
		_entries = entries;
	}

	/// <summary>Gets whether the geometry and texture streams are PRS-compressed.</summary>
	public bool IsCompressed { get; }

	/// <summary>Gets whether the archive contains texture streams.</summary>
	public bool HasTextures { get; }

	/// <summary>Gets the model entries in archive order.</summary>
	public IReadOnlyList<BmlEntry> Entries => _entries;

	/// <summary>
	/// Parses a BML archive and records the stream positions.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <returns>The parsed archive.</returns>
	/// <exception cref="SceneFormatException">The header, descriptor table or any stream lies outside the archive.</exception>
	[Original(0x005B869C, "LoadBmlExec_005b869c")]
	public static BmlArchive Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < DescriptorSize)
			throw new SceneFormatException("The BML header is truncated.", data.Length);
		byte[] image = data.ToArray();
		uint entryCount = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(4));
		if (entryCount > int.MaxValue / DescriptorSize)
			throw new SceneFormatException($"The BML entry count {entryCount} exceeds the readable range.", 4);
		long descriptorEnd = 0x40L + (long)entryCount * DescriptorSize;
		if (descriptorEnd > image.Length)
			throw new SceneFormatException($"The BML descriptor table with {entryCount} entries does not fit the archive.", 4);
		long headerSizeLong = (descriptorEnd + HeaderBlockSize - 1) & ~(long)(HeaderBlockSize - 1);
		if (headerSizeLong > image.Length)
			throw new SceneFormatException($"The BML header with {entryCount} descriptors does not fit the archive.", 4);
		int headerSize = (int)headerSizeLong;
		bool isCompressed = image[8] == (byte)'P';
		bool hasTextures = image[9] != 0;
		int alignment = hasTextures ? 0x20 : HeaderBlockSize;
		BmlEntry[] entries = new BmlEntry[(int)entryCount];
		int cursor = headerSize;
		for (int index = 0; index < entries.Length; index++)
		{
			int descriptorOffset = 0x40 + index * DescriptorSize;
			string name = ReadName(image.AsSpan(descriptorOffset, 0x20));
			uint compressedSize = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(descriptorOffset + 0x20));
			uint uncompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(descriptorOffset + 0x28));
			uint textureCompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(descriptorOffset + 0x2C));
			uint textureUncompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(descriptorOffset + 0x30));
			if (compressedSize > int.MaxValue || uncompressedSize > int.MaxValue || textureCompressedSize > int.MaxValue || textureUncompressedSize > int.MaxValue)
				throw new SceneFormatException($"BML entry '{name}' declares sizes beyond the readable range.", descriptorOffset + 0x20);
			int geometryOffset = cursor;
			if ((long)cursor + compressedSize > image.Length)
				throw new SceneFormatException($"BML entry '{name}' geometry stream lies outside the archive.", descriptorOffset + 0x20);
			cursor = Align(cursor + (int)compressedSize, alignment);
			int textureOffset = 0;
			if (textureCompressedSize != 0)
			{
				textureOffset = cursor;
				if ((long)cursor + textureCompressedSize > image.Length)
					throw new SceneFormatException($"BML entry '{name}' texture stream lies outside the archive.", descriptorOffset + 0x2C);
				cursor = Align(cursor + (int)textureCompressedSize, alignment);
			}
			entries[index] = new BmlEntry(name, geometryOffset, (int)compressedSize, (int)uncompressedSize, textureOffset, (int)textureCompressedSize, (int)textureUncompressedSize);
		}
		return new BmlArchive(image, isCompressed, hasTextures, entries);
	}

	/// <summary>
	/// Reads and decompresses the geometry stream of an entry.
	/// </summary>
	/// <param name="entry">An entry from this archive.</param>
	/// <returns>The decompressed geometry bytes.</returns>
	/// <exception cref="ArgumentException">The entry belongs to another archive.</exception>
	/// <exception cref="SceneFormatException">The PRS stream is invalid or does not produce the declared size.</exception>
	public ReadOnlyMemory<byte> ReadGeometry(BmlEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		if (Array.IndexOf(_entries, entry) < 0)
			throw new ArgumentException("The entry belongs to a different archive.", nameof(entry));
		return ReadStream(entry.GeometryOffset, entry.CompressedSize, entry.UncompressedSize);
	}

	/// <summary>
	/// Reads and decompresses the texture stream of an entry.
	/// </summary>
	/// <param name="entry">An entry from this archive.</param>
	/// <returns>The decompressed texture bytes.</returns>
	/// <exception cref="ArgumentException">The entry belongs to another archive.</exception>
	/// <exception cref="InvalidOperationException">The entry has no texture stream.</exception>
	/// <exception cref="SceneFormatException">The PRS stream is invalid or does not produce the declared size.</exception>
	public ReadOnlyMemory<byte> ReadTextures(BmlEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		if (Array.IndexOf(_entries, entry) < 0)
			throw new ArgumentException("The entry belongs to a different archive.", nameof(entry));
		if (!entry.HasTextures)
			throw new InvalidOperationException($"BML entry '{entry.Name}' has no texture stream.");
		return ReadStream(entry.TextureOffset, entry.TextureCompressedSize, entry.TextureUncompressedSize);
	}

	/// <summary>
	/// Reads the Ninja chunks of an entry's geometry stream.
	/// </summary>
	/// <param name="entry">An entry from this archive.</param>
	/// <returns>The chunks in stream order.</returns>
	/// <exception cref="SceneFormatException">The geometry stream contains an invalid Ninja chunk.</exception>
	public NinjaChunk[] ReadChunks(BmlEntry entry) => BmlChunkReader.Read(ReadGeometry(entry).Span);

	/// <summary>
	/// Reads one stream, decompressing it when the archive is compressed.
	/// </summary>
	/// <param name="offset">Stream offset.</param>
	/// <param name="storedSize">Stored byte count.</param>
	/// <param name="uncompressedSize">Declared byte count after decompression.</param>
	/// <returns>The stream bytes.</returns>
	/// <exception cref="SceneFormatException">The PRS stream is invalid or does not produce the declared size.</exception>
	private ReadOnlyMemory<byte> ReadStream(int offset, int storedSize, int uncompressedSize)
	{
		ReadOnlySpan<byte> stored = _data.AsSpan(offset, storedSize);
		if (!IsCompressed)
			return stored.ToArray();
		byte[] decoded = new byte[uncompressedSize];
		int written;
		try
		{
			written = PrsDecompressor.Decompress(stored, decoded);
		}
		catch (PrsFormatException exception)
		{
			throw new SceneFormatException($"A compressed BML stream at 0x{offset:X} is invalid: {exception.Message}", offset);
		}
		catch (ArgumentException exception)
		{
			throw new SceneFormatException($"A compressed BML stream at 0x{offset:X} is larger than its declared size: {exception.Message}", offset);
		}
		if (written != decoded.Length)
			throw new SceneFormatException($"A BML stream at 0x{offset:X} declares {decoded.Length} bytes but produced {written}.", offset);
		return decoded;
	}

	/// <summary>
	/// Reads the null-terminated entry name.
	/// </summary>
	/// <param name="field">The 32-byte name field.</param>
	/// <returns>The name without its null padding.</returns>
	private static string ReadName(ReadOnlySpan<byte> field)
	{
		int length = field.IndexOf((byte)0);
		return Encoding.Latin1.GetString(length < 0 ? field : field[..length]);
	}

	/// <summary>
	/// Rounds a stream position up to the archive alignment.
	/// </summary>
	/// <param name="value">The stream position.</param>
	/// <param name="alignment">The required alignment.</param>
	/// <returns>The aligned position.</returns>
	private static int Align(int value, int alignment) => (value + alignment - 1) & ~(alignment - 1);
}
