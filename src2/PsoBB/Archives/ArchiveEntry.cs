namespace PsoBB.Archives;

/// <summary>
/// One entry of an archive directory.
/// </summary>
public sealed class ArchiveEntry
{
	internal ArchiveEntry(int index, string name, int offset, int size, int uncompressedSize)
	{
		Index = index;
		Name = name;
		Offset = offset;
		Size = size;
		UncompressedSize = uncompressedSize;
	}

	/// <summary>
	/// Gets the zero-based position of the entry in the directory.
	/// </summary>
	public int Index { get; }

	/// <summary>
	/// Gets the entry name, or the empty string when the format has no names.
	/// </summary>
	public string Name { get; }

	/// <summary>
	/// Gets the byte offset of the stored data within the archive.
	/// </summary>
	public int Offset { get; }

	/// <summary>
	/// Gets the number of stored bytes.
	/// </summary>
	public int Size { get; }

	/// <summary>
	/// Gets the decompressed size when the entry is compressed, or zero when it is stored as-is.
	/// </summary>
	public int UncompressedSize { get; }

	/// <summary>
	/// Gets a value indicating whether the entry is compressed.
	/// </summary>
	public bool IsCompressed => UncompressedSize != 0;
}
