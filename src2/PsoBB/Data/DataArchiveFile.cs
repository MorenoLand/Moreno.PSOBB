using PsoBB.Archives;
using PsoBB.Platform;

namespace PsoBB.Data;

/// <summary>
/// One opened archive owned by a <see cref="DataFileRegistry"/>.
/// </summary>
public sealed class DataArchiveFile
{
	private readonly IArchive _archive;

	internal DataArchiveFile(GamePath path, DataArchiveFormat format, IArchive archive)
	{
		Path = path;
		Format = format;
		_archive = archive;
	}

	/// <summary>
	/// Gets the archive path relative to the data root.
	/// </summary>
	public GamePath Path { get; }

	/// <summary>
	/// Gets the archive container format.
	/// </summary>
	public DataArchiveFormat Format { get; }

	/// <summary>
	/// Gets the number of entries, or AFS sections, in the archive.
	/// </summary>
	public int Count => _archive.Entries.Count;

	/// <summary>
	/// Reads an entry by its directory index, decompressing it when the archive marks it compressed.
	/// </summary>
	/// <param name="index">Zero-based position in the archive directory.</param>
	/// <returns>The entry's data.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The archive has no entry at this index.</exception>
	/// <exception cref="ArchiveFormatException">The entry points outside the archive or its data is invalid.</exception>
	public ReadOnlyMemory<byte> ReadEntry(int index) => _archive.Read(_archive.GetEntry(index));

	internal ArchiveEntry? Find(string name) => Format == DataArchiveFormat.Gsl ? _archive.Find(name) : null;

	internal ReadOnlyMemory<byte> Read(ArchiveEntry entry) => _archive.Read(entry);
}
