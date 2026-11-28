namespace PsoBB.Platform;

/// <summary>
/// The host's audio output devices and the buffers they expose.
/// </summary>
/// <remarks>
/// This replaces <c>DirectSoundCreate</c>, the cooperative-level call and the sound-buffer creation sequence; Windows, Linux and the browser each provide their own implementation of the returned stream.
/// </remarks>
public interface IAudioDevice
{
	/// <summary>
	/// Creates a streaming output with a fixed ring-buffer capacity.
	/// </summary>
	/// <param name="format">The PCM layout of the stream.</param>
	/// <param name="capacityBytes">The buffer size in bytes, a multiple of the format's block alignment.</param>
	/// <returns>The writable output stream.</returns>
	IAudioOutput OpenOutput(AudioFormat format, int capacityBytes);
}
