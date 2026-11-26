using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Platform.Web;

/// <summary>
/// The Web Audio backend that owns output nodes and their PCM rings.
/// </summary>
[SupportedOSPlatform("browser")]
public sealed partial class BrowserAudioBackend : IBrowserAudioBackend
{
	/// <inheritdoc/>
	public int Create(AudioFormat format, int capacityBytes) => CreateOutput(format.SampleRate, format.Channels, format.BitsPerSample, capacityBytes);

	/// <inheritdoc/>
	public int GetFreeBytes(int handle) => ReadFreeBytes(handle);

	/// <inheritdoc/>
	public void Write(int handle, ReadOnlySpan<byte> pcm) => WriteBytes(handle, pcm.ToArray());

	/// <inheritdoc/>
	public void Play(int handle) => StartPlayback(handle);

	/// <inheritdoc/>
	public void Stop(int handle) => StopPlayback(handle);

	/// <inheritdoc/>
	public void SetVolume(int handle, float volume) => ApplyVolume(handle, volume);

	/// <inheritdoc/>
	public void Dispose(int handle) => DisposeOutput(handle);

	[JSImport("audio.create", "psobb.platform")]
	private static partial int CreateOutput(int sampleRate, int channels, int bitsPerSample, int capacityBytes);

	[JSImport("audio.freeBytes", "psobb.platform")]
	private static partial int ReadFreeBytes(int handle);

	[JSImport("audio.write", "psobb.platform")]
	private static partial void WriteBytes(int handle, [JSMarshalAs<JSType.Array<JSType.Number>>] byte[] pcm);

	[JSImport("audio.play", "psobb.platform")]
	private static partial void StartPlayback(int handle);

	[JSImport("audio.stop", "psobb.platform")]
	private static partial void StopPlayback(int handle);

	[JSImport("audio.setVolume", "psobb.platform")]
	private static partial void ApplyVolume(int handle, double volume);

	[JSImport("audio.dispose", "psobb.platform")]
	private static partial void DisposeOutput(int handle);
}
