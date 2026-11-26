namespace PsoBB.Platform.Web;

/// <summary>
/// A PCM ring buffer played through a Web Audio output.
/// </summary>
public sealed class BrowserAudioOutput : IAudioOutput
{
	private readonly IBrowserAudioBackend _backend;
	private readonly int _handle;
	private bool _disposed;
	private bool _playing;
	private float _volume = 1f;

	internal BrowserAudioOutput(AudioFormat format, int capacityBytes, IBrowserAudioBackend backend, int handle)
	{
		Format = format;
		Capacity = capacityBytes;
		_backend = backend;
		_handle = handle;
	}

	/// <inheritdoc/>
	public AudioFormat Format { get; }

	/// <inheritdoc/>
	public int Capacity { get; }

	/// <inheritdoc/>
	public int FreeBytes
	{
		get
		{
			ThrowIfDisposed();
			return _backend.GetFreeBytes(_handle);
		}
	}

	/// <inheritdoc/>
	public bool IsPlaying
	{
		get
		{
			ThrowIfDisposed();
			return _playing;
		}
	}

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> pcm)
	{
		ThrowIfDisposed();
		if (pcm.IsEmpty)
			return;
		if (pcm.Length > Capacity)
			throw new InvalidOperationException($"A {pcm.Length}-byte write exceeds the {Capacity}-byte buffer.");
		if (pcm.Length > _backend.GetFreeBytes(_handle))
			throw new InvalidOperationException($"A {pcm.Length}-byte write would overwrite unplayed audio.");
		_backend.Write(_handle, pcm);
	}

	/// <inheritdoc/>
	public void Play()
	{
		ThrowIfDisposed();
		_backend.Play(_handle);
		_playing = true;
	}

	/// <inheritdoc/>
	public void Stop()
	{
		ThrowIfDisposed();
		_backend.Stop(_handle);
		_playing = false;
	}

	/// <inheritdoc/>
	public void SetVolume(float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		ThrowIfDisposed();
		_backend.SetVolume(_handle, volume);
		_volume = volume;
	}

	/// <summary>
	/// Gets the last volume set on the output.
	/// </summary>
	public float Volume
	{
		get
		{
			ThrowIfDisposed();
			return _volume;
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_backend.Dispose(_handle);
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
