namespace PsoBB.Data;

/// <summary>
/// Named data files available to the client.
/// </summary>
/// <remarks>
/// A named read checks a loose file under the data root first and then each archive in registration order, which is the order of the original stream loader. Names compare without case, and the first matching archive entry wins when a directory repeats a name.
/// </remarks>
public interface IDataFiles
{
	/// <summary>
	/// Returns whether a loose file or archive entry exists at <paramref name="name"/>.
	/// </summary>
	/// <param name="name">The logical file name.</param>
	/// <returns><see langword="true"/> when the name resolves to data.</returns>
	bool Exists(string name);

	/// <summary>
	/// Returns the length of a loose file or archive entry in bytes.
	/// </summary>
	/// <param name="name">The logical file name.</param>
	/// <returns>The stored length for a loose file, or the decoded length for an archive entry.</returns>
	/// <exception cref="FileNotFoundException">No loose file or archive entry has this name.</exception>
	int GetLength(string name);

	/// <summary>
	/// Reads a loose file or archive entry.
	/// </summary>
	/// <param name="name">The logical file name.</param>
	/// <returns>The file or decoded entry data.</returns>
	/// <exception cref="FileNotFoundException">No loose file or archive entry has this name.</exception>
	ReadOnlyMemory<byte> Read(string name);

	/// <summary>
	/// Attempts to read a loose file or archive entry.
	/// </summary>
	/// <param name="name">The logical file name.</param>
	/// <param name="data">The file or decoded entry data, or empty when the name is missing.</param>
	/// <returns><see langword="true"/> when the name resolved to data.</returns>
	bool TryRead(string name, out ReadOnlyMemory<byte> data);
}
