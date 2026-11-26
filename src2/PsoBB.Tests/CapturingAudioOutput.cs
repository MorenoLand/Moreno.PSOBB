using PsoBB.Platform;

namespace PsoBB.Tests;

internal sealed class CapturingAudioOutput : IAudioOutput
{
	private readonly object _gate = new();
	private readonly List<byte> _bytes = [];
	private bool _disposed;
	private bool _playing;
	private float _volume = 1f;
	private int _queuedBytes;

	internal CapturingAudioOutput(AudioFormat format, int capacity)
	{
		Format = format;
		Capacity = capacity;
	}

	public AudioFormat Format { get; }

	public int Capacity { get; }

	public int FreeBytes
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				return Capacity - _queuedBytes;
			}
		}
	}

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

	public bool IsDisposed => _disposed;

	public byte[] Bytes
	{
		get
		{
			lock (_gate)
				return [.. _bytes];
		}
	}

	public int ByteCount
	{
		get
		{
			lock (_gate)
				return _bytes.Count;
		}
	}

	public void Write(ReadOnlySpan<byte> pcm)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			if (pcm.Length > Capacity)
				throw new InvalidOperationException("The write exceeds the output buffer.");
			if (pcm.Length > Capacity - _queuedBytes)
				throw new InvalidOperationException("The write exceeds the output free space.");
			_bytes.AddRange(pcm.ToArray());
			_queuedBytes += pcm.Length;
		}
	}

	internal void Consume(int count)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			if (count < 0 || count > _queuedBytes)
				throw new ArgumentOutOfRangeException(nameof(count), count, "The consumed byte count is outside the queued audio.");
			_queuedBytes -= count;
		}
	}

	public void Play()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_playing = true;
		}
	}

	public void Stop()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			_playing = false;
		}
	}

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

	public void Dispose()
	{
		lock (_gate)
			_disposed = true;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
