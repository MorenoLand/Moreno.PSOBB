namespace PsoBB.Archives;

/// <summary>
/// Reports an archive whose header, directory or entry data is truncated or inconsistent.
/// </summary>
public sealed class ArchiveFormatException : Exception
{
	/// <summary>
	/// Creates the exception for an invalid archive.
	/// </summary>
	/// <param name="message">Description of the invalid part of the archive.</param>
	public ArchiveFormatException(string message)
		: base(message)
	{
	}

	/// <summary>
	/// Creates the exception for an invalid archive with its cause.
	/// </summary>
	/// <param name="message">Description of the invalid part of the archive.</param>
	/// <param name="innerException">The failure that made the archive unreadable.</param>
	public ArchiveFormatException(string message, Exception innerException)
		: base(message, innerException)
	{
	}
}
