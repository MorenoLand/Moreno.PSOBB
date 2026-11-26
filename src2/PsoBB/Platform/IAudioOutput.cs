namespace PsoBB.Platform;

/// <summary>
/// A writable PCM ring buffer that plays through the host's audio device.
/// </summary>
/// <remarks>
/// This models the lock, copy and unlock sequence of <c>IDirectSoundBuffer</c>; implementations must accept writes from the streamer while the main loop changes playback and volume.
/// </remarks>
public interface IAudioOutput : IDisposable
{
	/// <summary>
	/// Gets the PCM layout of the stream.
	/// </summary>
	AudioFormat Format { get; }

	/// <summary>
	/// Gets the ring-buffer size in bytes.
	/// </summary>
	int Capacity { get; }

	/// <summary>
	/// Gets the bytes that can be written before unplayed audio would be overwritten.
	/// </summary>
	int FreeBytes { get; }

	/// <summary>
	/// Gets a value indicating whether the output is playing.
	/// </summary>
	bool IsPlaying { get; }

	/// <summary>
	/// Writes one chunk of PCM without overwriting unplayed audio.
	/// </summary>
	/// <param name="pcm">The signed little-endian PCM bytes.</param>
	void Write(ReadOnlySpan<byte> pcm);

	/// <summary>
	/// Starts or resumes playback.
	/// </summary>
	void Play();

	/// <summary>
	/// Stops playback without discarding buffered audio.
	/// </summary>
	void Stop();

	/// <summary>
	/// Sets the output volume as a linear scale from silence to full volume.
	/// </summary>
	/// <param name="volume">The volume from 0 through 1.</param>
	void SetVolume(float volume);
}
