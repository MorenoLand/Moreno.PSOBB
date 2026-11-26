namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// Reports that the host cannot provide a Direct3D 11 device.
/// </summary>
public sealed class Direct3D11UnavailableException : Exception
{
	/// <summary>
	/// Creates the exception with the failure the graphics runtime reported.
	/// </summary>
	/// <param name="message">The device-creation failure.</param>
	public Direct3D11UnavailableException(string message) : base(message)
	{
	}
}
