namespace PsoBB.Platform;

/// <summary>
/// An audio device that accepts and discards PCM, for tests and hosts without an output device.
/// </summary>
/// <remarks>
/// The stream keeps the same capacity and free-space contract as a real output, so streaming code does not need a special path.
/// </remarks>
public sealed class SilentAudioDevice : IAudioDevice
{
	/// <inheritdoc/>
	public IAudioOutput OpenOutput(AudioFormat format, int capacityBytes)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The buffer must hold a positive whole number of sample frames.");
		return new SilentAudioOutput(format, capacityBytes);
	}
}
