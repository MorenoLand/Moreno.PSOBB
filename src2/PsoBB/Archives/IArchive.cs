namespace PsoBB.Archives;

/// <summary>
/// A read-only archive whose entries are addressed by index and, when the format carries names, by name.
/// </summary>
/// <remarks>
/// The whole archive is held in memory, so the platform file system supplies its bytes and no operating-system file handle reaches the container readers.
/// </remarks>
public interface IArchive
{
	/// <summary>
	/// Gets the directory entries in archive order.
	/// </summary>
	IReadOnlyList<ArchiveEntry> Entries { get; }

	/// <summary>
	/// Gets the entry at <paramref name="index"/>.
	/// </summary>
	/// <param name="index">Zero-based position in the directory.</param>
	/// <returns>The directory entry.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The archive has no entry at this index.</exception>
	ArchiveEntry GetEntry(int index);

	/// <summary>
	/// Finds an entry by name.
	/// </summary>
	/// <param name="name">The name to search for.</param>
	/// <returns>The matching entry, or <see langword="null"/> when the format has no names or the name is absent.</returns>
	ArchiveEntry? Find(string name);

	/// <summary>
	/// Reads the stored data of an entry, decompressing it when the directory marks it compressed.
	/// </summary>
	/// <param name="entry">An entry returned by this archive.</param>
	/// <returns>The entry's data.</returns>
	/// <exception cref="ArgumentException"><paramref name="entry"/> belongs to a different archive.</exception>
	/// <exception cref="ArchiveFormatException">The entry points outside the archive or its data is invalid.</exception>
	ReadOnlyMemory<byte> Read(ArchiveEntry entry);
}
