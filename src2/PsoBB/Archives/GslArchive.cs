using System.Buffers.Binary;
using System.Text;
using PsoBB.Compression;

namespace PsoBB.Archives;

/// <summary>
/// Reads a GSL archive: a fixed directory of named, sector-addressed files that may be PRS-compressed.
/// </summary>
/// <remarks>
/// The directory begins at offset zero; the format has no separate header. Each 0x30-byte entry holds a 32-byte null-padded name, the data sector, the stored size, the decompressed size and four reserved bytes. A nonzero decompressed size marks the stored bytes as a PRS stream. The directory ends at the first entry whose name is empty, and the client scans at most 0x7FF slots.
/// </remarks>
public sealed class GslArchive : IArchive
{
	/// <summary>
	/// Size of one directory entry.
	/// </summary>
	public const int EntrySize = 0x30;

	/// <summary>
	/// Number of bytes available for an entry name, including its null padding.
	/// </summary>
	public const int NameLength = 0x20;

	/// <summary>
	/// Number of directory slots the client scans before giving up.
	/// </summary>
	public const int MaximumEntries = 0x7FF;

	/// <summary>
	/// Number of 2048-byte sectors the client reads for the directory.
	/// </summary>
	public const int DirectorySectorCount = 0x30;

	/// <summary>
	/// Size of the sectors that address GSL entry data.
	/// </summary>
	public const int SectorSize = 0x800;

	private static readonly Encoding NameEncoding = Encoding.Latin1;
	private readonly ReadOnlyMemory<byte> _data;
	private readonly ArchiveEntry[] _entries;

	private GslArchive(ReadOnlyMemory<byte> data, ArchiveEntry[] entries)
	{
		_data = data;
		_entries = entries;
	}

	/// <inheritdoc/>
	public IReadOnlyList<ArchiveEntry> Entries => _entries;

	/// <summary>
	/// Reads the name and data directory of a GSL archive.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <returns>The parsed archive.</returns>
	/// <exception cref="ArchiveFormatException">The archive is shorter than one entry or a directory slot is truncated.</exception>
	/// <remarks>
	/// The original reads the directory into a zero-filled buffer, so bytes past the end of a short archive read as an empty entry. A directory with no empty slot inside the first <see cref="MaximumEntries"/> positions yields no entries, matching the client's count scan.
	/// </remarks>
	[Original(0x005BBF1C)]
	public static GslArchive Open(ReadOnlyMemory<byte> data)
	{
		if (data.Length < EntrySize)
			throw new ArchiveFormatException($"The GSL directory needs at least one {EntrySize}-byte slot but the archive has {data.Length} bytes.");
		ReadOnlySpan<byte> bytes = data.Span;
		int directoryLength = Math.Min(bytes.Length, DirectorySectorCount * SectorSize);
		List<ArchiveEntry> entries = [];
		bool terminated = false;
		for (int index = 0; index < MaximumEntries; index++)
		{
			int record = index * EntrySize;
			if (record >= directoryLength)
			{
				terminated = true;
				break;
			}
			if (record + EntrySize > directoryLength)
			{
				if (bytes[record] == 0)
				{
					terminated = true;
					break;
				}
				throw new ArchiveFormatException($"The GSL directory ends inside entry {index}.");
			}
			ReadOnlySpan<byte> entry = bytes.Slice(record, EntrySize);
			if (entry[0] == 0)
			{
				terminated = true;
				break;
			}
			string name = ReadName(entry);
			uint sector = BinaryPrimitives.ReadUInt32LittleEndian(entry[0x20..]);
			uint size = BinaryPrimitives.ReadUInt32LittleEndian(entry[0x24..]);
			uint uncompressedSize = BinaryPrimitives.ReadUInt32LittleEndian(entry[0x28..]);
			if (sector > int.MaxValue / SectorSize || size > int.MaxValue || uncompressedSize > int.MaxValue)
				throw new ArchiveFormatException($"GSL entry {index} has sector {sector}, size {size} and decompressed size {uncompressedSize}, which exceed the readable range.");
			entries.Add(new ArchiveEntry(index, name, (int)sector * SectorSize, (int)size, (int)uncompressedSize));
		}
		if (!terminated)
			entries.Clear();
		return new GslArchive(data, [.. entries]);
	}

	/// <inheritdoc/>
	public ArchiveEntry GetEntry(int index)
	{
		if ((uint)index >= (uint)_entries.Length)
			throw new ArgumentOutOfRangeException(nameof(index), index, "The archive has no entry at this index.");
		return _entries[index];
	}

	/// <summary>
	/// Finds an entry by name using the client's lookup rules.
	/// </summary>
	/// <param name="name">The name to search for.</param>
	/// <returns>The matching entry, or <see langword="null"/> when no entry has that name.</returns>
	/// <remarks>
	/// The client lowercases only the requested name and then compares the bytes with an ordinal comparison, so a directory name that contains uppercase letters does not match.
	/// </remarks>
	[Original(0x005BB224)]
	public ArchiveEntry? Find(string name)
	{
		ArgumentNullException.ThrowIfNull(name);
		string normalized = LowercaseAscii(name);
		foreach (ArchiveEntry entry in _entries)
		{
			if (string.Equals(entry.Name, normalized, StringComparison.Ordinal))
				return entry;
		}
		return null;
	}

	/// <inheritdoc/>
	/// <remarks>
	/// A compressed entry is decoded with <see cref="PrsDecompressor"/> into a buffer of its declared decompressed size.
	/// </remarks>
	[Original(0x005BB53C)]
	public ReadOnlyMemory<byte> Read(ArchiveEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		if ((uint)entry.Index >= (uint)_entries.Length || !ReferenceEquals(_entries[entry.Index], entry))
			throw new ArgumentException("The entry belongs to a different archive.", nameof(entry));
		long end = (long)entry.Offset + entry.Size;
		if (entry.Offset < 0 || entry.Size < 0 || end > _data.Length)
			throw new ArchiveFormatException($"GSL entry '{entry.Name}' covers bytes {entry.Offset} to {end} of a {_data.Length}-byte archive.");
		ReadOnlyMemory<byte> stored = _data.Slice(entry.Offset, entry.Size);
		if (!entry.IsCompressed)
			return stored;
		byte[] decompressed = new byte[entry.UncompressedSize];
		int written;
		try
		{
			written = PrsDecompressor.Decompress(stored.Span, decompressed);
		}
		catch (PrsFormatException exception)
		{
			throw new ArchiveFormatException($"The compressed data of GSL entry '{entry.Name}' is invalid.", exception);
		}
		catch (ArgumentException exception)
		{
			throw new ArchiveFormatException($"The compressed data of GSL entry '{entry.Name}' is larger than its declared decompressed size.", exception);
		}
		if (written != decompressed.Length)
			throw new ArchiveFormatException($"GSL entry '{entry.Name}' declares {decompressed.Length} decompressed bytes but its stream produced {written}.");
		return decompressed;
	}

	/// <summary>
	/// Reads the null-terminated name from a directory entry.
	/// </summary>
	/// <param name="entry">The complete 0x30-byte entry.</param>
	/// <returns>The name without its null padding.</returns>
	private static string ReadName(ReadOnlySpan<byte> entry)
	{
		ReadOnlySpan<byte> field = entry[..NameLength];
		int length = field.IndexOf((byte)0);
		return NameEncoding.GetString(length < 0 ? field : field[..length]);
	}

	/// <summary>
	/// Lowers ASCII uppercase letters and leaves every other character unchanged.
	/// </summary>
	/// <param name="name">The name to normalise.</param>
	/// <returns>The normalised name.</returns>
	private static string LowercaseAscii(string name)
	{
		char[] characters = name.ToCharArray();
		for (int index = 0; index < characters.Length; index++)
		{
			if (characters[index] is >= 'A' and <= 'Z')
				characters[index] = (char)(characters[index] + ('a' - 'A'));
		}
		return new string(characters);
	}
}
