namespace PsoBB.Imaging;

/// <summary>
/// Reports a texture archive or pixel stream that is malformed, truncated or unsupported.
/// </summary>
public sealed class TextureFormatException : Exception
{
	/// <summary>
	/// Creates the exception for the invalid data at the given source offset.
	/// </summary>
	/// <param name="message">Description of the invalid part of the data.</param>
	/// <param name="offset">Offset in the source where parsing stopped.</param>
	public TextureFormatException(string message, int offset)
		: base($"{message} (source offset {offset}).")
	{
		Offset = offset;
	}

	/// <summary>
	/// Gets the source offset where parsing stopped.
	/// </summary>
	public int Offset { get; }
}
