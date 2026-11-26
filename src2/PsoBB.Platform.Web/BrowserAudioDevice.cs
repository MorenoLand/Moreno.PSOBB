namespace PsoBB.Platform.Web;

/// <summary>
/// The browser audio device that opens Web Audio streaming outputs.
/// </summary>
public sealed class BrowserAudioDevice : IAudioDevice
{
	private readonly IBrowserAudioBackend _backend;

	/// <summary>
	/// Creates a device over the supplied Web Audio backend.
	/// </summary>
	/// <param name="backend">The Web Audio backend.</param>
	public BrowserAudioDevice(IBrowserAudioBackend backend)
	{
		ArgumentNullException.ThrowIfNull(backend);
		_backend = backend;
	}

	/// <inheritdoc/>
	public IAudioOutput OpenOutput(AudioFormat format, int capacityBytes)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The buffer must hold a positive whole number of sample frames.");
		int handle = _backend.Create(format, capacityBytes);
		return handle > 0 ? new BrowserAudioOutput(format, capacityBytes, _backend, handle) : throw new InvalidOperationException("The browser audio backend did not create an output.");
	}
}
