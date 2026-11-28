namespace PsoBB.Text;

/// <summary>
/// Reports an unitxt table whose header, offset table or string terminator is invalid.
/// </summary>
public sealed class UnitxtFormatException : Exception
{
	/// <summary>
	/// Creates the exception with the given message.
	/// </summary>
	/// <param name="message">Description of the invalid table.</param>
	public UnitxtFormatException(string message)
		: base(message)
	{
	}

	/// <summary>
	/// Creates the exception with the given message and underlying failure.
	/// </summary>
	/// <param name="message">Description of the invalid table.</param>
	/// <param name="innerException">The failure that made the table invalid.</param>
	public UnitxtFormatException(string message, Exception innerException)
		: base(message, innerException)
	{
	}
}
