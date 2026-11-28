namespace PsoBB.Platform;

/// <summary>
/// A silent output that accepts PCM immediately and keeps playback and volume state.
/// </summary>
/// <remarks>
/// Because nothing is played, the whole capacity is always free and the accepted byte count is available for tests.
/// </remarks>
public sealed class SilentAudioOutput : IAudioOutput
{
	private readonly object _gate = new();
	private bool _disposed;
	private bool _playing;
	private float _volume = 1f;
	private long _bytesWritten;

	internal SilentAudioOutput(AudioFormat format, int capacityBytes)
	{
		Format = format;
		Capacity = capacityBytes;
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
			lock (_gate)
			{
				ThrowIfDisposed();
				return Capacity;
			}
		}
	}

	/// <inheritdoc/>
	public bool IsPlaying
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				return _playing;
			}
		}
	}

	/// <summary>
	/// Gets the number of PCM bytes accepted since the output was created.
	/// </summary>
	public long BytesWritten
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				return _bytesWritten;
			}
		}
	}

	/// <summary>
	/// Gets the last volume set on the output.
	/// </summary>
	public float Volume
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				return _volume;
			}
		}
	}

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> pcm)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			if (pcm.Length > Capacity)
				throw new InvalidOperationException($"A {pcm.Length}-byte write exceeds the {Capacity}-byte buffer.");
			_bytesWritten += pcm.Length;
		}
	}

	/// <inheritdoc/>
	public void Play()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_playing = true;
		}
	}

	/// <inheritdoc/>
	public void Stop()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_playing = false;
		}
	}

	/// <inheritdoc/>
	public void SetVolume(float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		lock (_gate)
		{
			ThrowIfDisposed();
			_volume = volume;
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		lock (_gate)
			_disposed = true;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
