namespace PsoBB.Audio;

/// <summary>
/// Reports a sound bank whose header, format or sample data is invalid.
/// </summary>
public sealed class AudioFormatException : Exception
{
	/// <summary>
	/// Creates the exception for an invalid sound bank.
	/// </summary>
	/// <param name="message">Description of the invalid part of the bank.</param>
	public AudioFormatException(string message)
		: base(message)
	{
	}

	/// <summary>
	/// Creates the exception for an invalid sound bank with its cause.
	/// </summary>
	/// <param name="message">Description of the invalid part of the bank.</param>
	/// <param name="innerException">The failure that made the bank unreadable.</param>
	public AudioFormatException(string message, Exception innerException)
		: base(message, innerException)
	{
	}
}
