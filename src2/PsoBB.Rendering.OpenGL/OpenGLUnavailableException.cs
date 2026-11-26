namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// Reports that the host cannot provide an OpenGL 3.3 context.
/// </summary>
public sealed class OpenGLUnavailableException : Exception
{
	/// <summary>
	/// Creates the exception with the failure the graphics runtime reported.
	/// </summary>
	/// <param name="message">The context-creation failure.</param>
	public OpenGLUnavailableException(string message) : base(message)
	{
	}
}
