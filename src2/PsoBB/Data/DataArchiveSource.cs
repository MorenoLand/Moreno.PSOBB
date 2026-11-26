using PsoBB.Platform;

namespace PsoBB.Data;

/// <summary>
/// An archive the registry opens from the data root at construction.
/// </summary>
public sealed record DataArchiveSource
{
	private DataArchiveSource(GamePath path, DataArchiveFormat format)
	{
		Path = path;
		Format = format;
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
	/// Creates a source for a named GSL archive such as <c>data.gsl</c>.
	/// </summary>
	/// <param name="path">The archive path relative to the data root.</param>
	/// <returns>The archive source.</returns>
	/// <exception cref="FormatException"><paramref name="path"/> is not a portable relative path.</exception>
	/// <exception cref="ArgumentException"><paramref name="path"/> is the data root.</exception>
	public static DataArchiveSource Gsl(string path) => Create(path, DataArchiveFormat.Gsl);

	/// <summary>
	/// Creates a source for an unnamed AFS archive such as <c>plJtex.afs</c>.
	/// </summary>
	/// <param name="path">The archive path relative to the data root.</param>
	/// <returns>The archive source.</returns>
	/// <exception cref="FormatException"><paramref name="path"/> is not a portable relative path.</exception>
	/// <exception cref="ArgumentException"><paramref name="path"/> is the data root.</exception>
	public static DataArchiveSource Afs(string path) => Create(path, DataArchiveFormat.Afs);

	private static DataArchiveSource Create(string path, DataArchiveFormat format)
	{
		GamePath result = GamePath.Parse(path);
		if (result.IsRoot)
			throw new ArgumentException("An archive path cannot be the data root.", nameof(path));
		return new(result, format);
	}
}
