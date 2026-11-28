namespace PsoBB.Save;

/// <summary>
/// Reports a PSO_CHARACTER image that is shorter than the fixed 0xBAA4-byte record set.
/// </summary>
public sealed class CharacterSaveFormatException : Exception
{
	/// <summary>
	/// Creates a format error with the offending byte offset.
	/// </summary>
	/// <param name="message">What is wrong with the image.</param>
	/// <param name="offset">The byte offset the error was detected at.</param>
	public CharacterSaveFormatException(string message, int offset)
		: base($"{message} (at 0x{offset:X})")
	{
		Offset = offset;
	}

	/// <summary>
	/// Gets the byte offset the error was detected at.
	/// </summary>
	public int Offset { get; }
}
