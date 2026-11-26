namespace PsoBB.Data;

/// <summary>
/// Reports a PR2 container whose header, key stream or compressed payload is invalid.
/// </summary>
public sealed class Pr2FormatException : Exception
{
	/// <summary>
	/// Creates the exception with the given message.
	/// </summary>
	/// <param name="message">Description of the invalid container.</param>
	public Pr2FormatException(string message)
		: base(message)
	{
	}

	/// <summary>
	/// Creates the exception with the given message and underlying failure.
	/// </summary>
	/// <param name="message">Description of the invalid container.</param>
	/// <param name="innerException">The failure that made the container invalid.</param>
	public Pr2FormatException(string message, Exception innerException)
		: base(message, innerException)
	{
	}
}
