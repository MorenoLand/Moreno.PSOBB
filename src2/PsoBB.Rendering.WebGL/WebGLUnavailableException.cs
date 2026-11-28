namespace PsoBB.Rendering.WebGL;

/// <summary>
/// Reports that the host cannot provide a WebGL 2 context.
/// </summary>
public sealed class WebGLUnavailableException : Exception
{
	/// <summary>
	/// Creates the exception with the failure the browser reported.
	/// </summary>
	/// <param name="message">The context-creation failure.</param>
	public WebGLUnavailableException(string message) : base(message)
	{
	}

	/// <summary>
	/// Creates the exception with the failure the browser reported and its cause.
	/// </summary>
	/// <param name="message">The context-creation failure.</param>
	/// <param name="innerException">The browser exception.</param>
	public WebGLUnavailableException(string message, Exception innerException) : base(message, innerException)
	{
	}
}
