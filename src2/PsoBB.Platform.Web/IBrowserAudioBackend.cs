namespace PsoBB.Platform.Web;

/// <summary>
/// The Web Audio operations behind a streaming output.
/// </summary>
public interface IBrowserAudioBackend
{
	/// <summary>
	/// Creates a Web Audio output.
	/// </summary>
	/// <param name="format">The PCM layout of the stream.</param>
	/// <param name="capacityBytes">The ring-buffer size in bytes.</param>
	/// <returns>The output handle, positive when creation succeeded.</returns>
	int Create(AudioFormat format, int capacityBytes);

	/// <summary>
	/// Returns the bytes that can be written before unplayed audio would be overwritten.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	/// <returns>The free byte count.</returns>
	int GetFreeBytes(int handle);

	/// <summary>
	/// Writes PCM into the output ring.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	/// <param name="pcm">The signed little-endian PCM bytes.</param>
	void Write(int handle, ReadOnlySpan<byte> pcm);

	/// <summary>
	/// Starts or resumes playback.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	void Play(int handle);

	/// <summary>
	/// Stops playback without discarding buffered audio.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	void Stop(int handle);

	/// <summary>
	/// Sets the linear output volume.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	/// <param name="volume">The volume from 0 through 1.</param>
	void SetVolume(int handle, float volume);

	/// <summary>
	/// Releases the Web Audio nodes and buffered audio.
	/// </summary>
	/// <param name="handle">The output handle.</param>
	void Dispose(int handle);
}
