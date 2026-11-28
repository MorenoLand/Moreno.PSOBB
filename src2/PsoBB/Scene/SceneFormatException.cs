namespace PsoBB.Scene;

/// <summary>
/// Reports a map scene file whose header, table or payload does not fit its bytes.
/// </summary>
public sealed class SceneFormatException : Exception
{
	/// <summary>
	/// Creates a format error with the offending byte offset.
	/// </summary>
	/// <param name="message">What is wrong with the file.</param>
	/// <param name="offset">The byte offset the error was detected at.</param>
	public SceneFormatException(string message, int offset)
		: base($"{message} (at 0x{offset:X})")
	{
		Offset = offset;
	}

	/// <summary>
	/// Gets the byte offset the error was detected at.
	/// </summary>
	public int Offset { get; }
}
