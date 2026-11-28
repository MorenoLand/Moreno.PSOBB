namespace PsoBB.Compression;

/// <summary>
/// Reports a compressed stream that is truncated or contains an impossible back-reference.
/// </summary>
public sealed class PrsFormatException : Exception
{
	/// <summary>
	/// Creates the exception for the invalid stream at the given source position.
	/// </summary>
	/// <param name="message">Description of the invalid part of the stream.</param>
	/// <param name="position">Offset in the source where decoding stopped.</param>
	public PrsFormatException(string message, int position)
		: base($"{message} (source offset {position}).")
	{
		Position = position;
	}

	/// <summary>
	/// Gets the source offset where decoding stopped.
	/// </summary>
	public int Position { get; }
}
