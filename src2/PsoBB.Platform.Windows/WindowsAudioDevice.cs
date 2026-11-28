namespace PsoBB.Platform.Windows;

/// <summary>
/// Opens PCM streams on the default Windows waveform output device.
/// </summary>
/// <remarks>
/// Each stream owns a fixed pool of device chunks; the output format is passed through unchanged as a PCM <c>WAVEFORMATEX</c>.
/// </remarks>
public sealed class WindowsAudioDevice : IAudioDevice
{
	/// <inheritdoc/>
	public IAudioOutput OpenOutput(AudioFormat format, int capacityBytes)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The buffer must hold a positive whole number of sample frames.");
		return new WindowsAudioOutput(format, capacityBytes);
	}
}
