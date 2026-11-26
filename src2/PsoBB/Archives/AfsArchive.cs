using System.Buffers.Binary;

namespace PsoBB.Archives;

/// <summary>
/// Reads an AFS archive: a section count, a reserved word and one offset/size pair per section.
/// </summary>
/// <remarks>
/// The section table is little-endian. Offsets and sizes are byte counts from the start of the archive, and sections carry no names. The original loader records each section's 2048-byte sector and derives a section's end from the next section's offset, so callers that need the client's sector-rounded view must round these declared values themselves.
/// </remarks>
public sealed class AfsArchive : IArchive
{
	/// <summary>
	/// Size of the section count and reserved word that begin the archive.
	/// </summary>
	public const int HeaderSize = 8;

	/// <summary>
	/// Size of one offset/size pair in the section table.
	/// </summary>
	public const int SectionRecordSize = 8;

	private readonly ReadOnlyMemory<byte> _data;
	private readonly ArchiveEntry[] _entries;

	private AfsArchive(ReadOnlyMemory<byte> data, ArchiveEntry[] entries)
	{
		_data = data;
		_entries = entries;
	}

	/// <inheritdoc/>
	public IReadOnlyList<ArchiveEntry> Entries => _entries;

	/// <summary>
	/// Reads the section table of an AFS archive.
	/// </summary>
	/// <param name="data">The complete archive.</param>
	/// <returns>The parsed archive.</returns>
	/// <exception cref="ArchiveFormatException">The header or section table is truncated, or a field exceeds the readable range.</exception>
	[Original(0x0086D92C)]
	public static AfsArchive Open(ReadOnlyMemory<byte> data)
	{
		ReadOnlySpan<byte> bytes = data.Span;
		if (bytes.Length < HeaderSize)
			throw new ArchiveFormatException($"The AFS header needs {HeaderSize} bytes but the archive has {bytes.Length}.");
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(bytes);
		if (count > (uint)((bytes.Length - HeaderSize) / SectionRecordSize))
			throw new ArchiveFormatException($"The AFS section table declares {count} sections but only {(bytes.Length - HeaderSize) / SectionRecordSize} records fit.");
		ArchiveEntry[] entries = new ArchiveEntry[(int)count];
		for (int index = 0; index < entries.Length; index++)
		{
			int record = HeaderSize + index * SectionRecordSize;
			uint offset = BinaryPrimitives.ReadUInt32LittleEndian(bytes[record..]);
			uint size = BinaryPrimitives.ReadUInt32LittleEndian(bytes[(record + 4)..]);
			if (offset > int.MaxValue || size > int.MaxValue)
				throw new ArchiveFormatException($"AFS section {index} has offset {offset} and size {size}, which exceed the readable range.");
			entries[index] = new ArchiveEntry(index, string.Empty, (int)offset, (int)size, 0);
		}
		return new AfsArchive(data, entries);
	}

	/// <inheritdoc/>
	public ArchiveEntry GetEntry(int index)
	{
		if ((uint)index >= (uint)_entries.Length)
			throw new ArgumentOutOfRangeException(nameof(index), index, "The archive has no entry at this index.");
		return _entries[index];
	}

	/// <inheritdoc/>
	public ArchiveEntry? Find(string name)
	{
		ArgumentNullException.ThrowIfNull(name);
		return null;
	}

	/// <inheritdoc/>
	[Original(0x0086DAB0)]
	public ReadOnlyMemory<byte> Read(ArchiveEntry entry)
	{
		ArgumentNullException.ThrowIfNull(entry);
		if ((uint)entry.Index >= (uint)_entries.Length || !ReferenceEquals(_entries[entry.Index], entry))
			throw new ArgumentException("The entry belongs to a different archive.", nameof(entry));
		long end = (long)entry.Offset + entry.Size;
		if (entry.Offset < 0 || entry.Size < 0 || end > _data.Length)
			throw new ArchiveFormatException($"AFS section {entry.Index} covers bytes {entry.Offset} to {end} of a {_data.Length}-byte archive.");
		return _data.Slice(entry.Offset, entry.Size);
	}
}
