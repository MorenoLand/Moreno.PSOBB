using Silk.NET.OpenAL;

namespace PsoBB.Platform.Linux;

/// <summary>
/// A streaming OpenAL source that accepts PCM into queued buffers.
/// </summary>
/// <remarks>
/// The capacity is a logical ring size: queued buffers count against it until OpenAL reports them processed, and a write that would pass the capacity is refused rather than overwriting unplayed audio. Stopping keeps the queue so a later play resumes it.
/// </remarks>
internal sealed class OpenAlAudioOutput : IAudioOutput
{
	private readonly OpenAlAudioDevice _device;
	private readonly uint _source;
	private readonly BufferFormat _bufferFormat;
	private readonly int _chunkBytes;
	private readonly Queue<QueuedBuffer> _queued = new();
	private long _queuedBytes;
	private bool _playing;
	private float _volume = 1f;
	private bool _disposed;

	internal OpenAlAudioOutput(OpenAlAudioDevice device, AudioFormat format, int capacityBytes, uint source, BufferFormat bufferFormat)
	{
		_device = device;
		Format = format;
		Capacity = capacityBytes;
		_source = source;
		_bufferFormat = bufferFormat;
		int chunk = Math.Max(format.BlockAlign, format.AverageBytesPerSecond / 50);
		chunk -= chunk % format.BlockAlign;
		_chunkBytes = Math.Min(chunk, capacityBytes);
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
			lock (_device.Gate)
			{
				ThrowIfDisposed();
				_device.MakeCurrent();
				ReclaimProcessed();
				return Capacity - (int)_queuedBytes;
			}
		}
	}

	/// <inheritdoc/>
	public bool IsPlaying
	{
		get
		{
			lock (_device.Gate)
			{
				ThrowIfDisposed();
				_device.MakeCurrent();
				ReclaimProcessed();
				if (!_playing || _queued.Count == 0)
					return false;
				_device.Api.GetSourceProperty(_source, GetSourceInteger.SourceState, out int state);
				_device.CheckError("reading the output state");
				return (SourceState)state == SourceState.Playing;
			}
		}
	}

	/// <summary>
	/// Gets the last volume set on the output.
	/// </summary>
	internal float Volume => _volume;

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> pcm)
	{
		lock (_device.Gate)
		{
			ThrowIfDisposed();
			_device.MakeCurrent();
			if (pcm.IsEmpty)
				return;
			if (pcm.Length % Format.BlockAlign != 0)
				throw new ArgumentException("A write must contain whole sample frames.", nameof(pcm));
			ReclaimProcessed();
			if (pcm.Length > Capacity - _queuedBytes)
				throw new InvalidOperationException($"A {pcm.Length}-byte write does not fit in the {Capacity}-byte buffer with {Capacity - _queuedBytes} bytes free.");
			int offset = 0;
			while (offset < pcm.Length)
			{
				int length = Math.Min(_chunkBytes, pcm.Length - offset);
				QueueChunk(pcm.Slice(offset, length));
				offset += length;
			}
			if (_playing)
			{
				_device.Api.GetSourceProperty(_source, GetSourceInteger.SourceState, out int state);
				_device.CheckError("reading the output state");
				if ((SourceState)state != SourceState.Playing)
				{
					_device.Api.SourcePlay(_source);
					_device.CheckError("resuming the output");
				}
			}
		}
	}

	/// <inheritdoc/>
	public void Play()
	{
		lock (_device.Gate)
		{
			ThrowIfDisposed();
			_device.MakeCurrent();
			ReclaimProcessed();
			_device.Api.SourcePlay(_source);
			_device.CheckError("starting the output");
			_playing = true;
		}
	}

	/// <inheritdoc/>
	public void Stop()
	{
		lock (_device.Gate)
		{
			ThrowIfDisposed();
			_device.MakeCurrent();
			_device.Api.SourceStop(_source);
			_device.CheckError("stopping the output");
			_playing = false;
		}
	}

	/// <inheritdoc/>
	public void SetVolume(float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		lock (_device.Gate)
		{
			ThrowIfDisposed();
			_device.MakeCurrent();
			_device.Api.SetSourceProperty(_source, SourceFloat.Gain, volume);
			_device.CheckError("setting the output volume");
			_volume = volume;
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		lock (_device.Gate)
		{
			if (_disposed)
				return;
			_disposed = true;
			_device.MakeCurrent();
			_device.Api.SourceStop(_source);
			_device.Api.DeleteSources([_source]);
			if (_queued.Count > 0)
			{
				uint[] buffers = [.. _queued.Select(entry => entry.Buffer)];
				_device.Api.DeleteBuffers(buffers);
				_queued.Clear();
				_queuedBytes = 0;
			}
		}
	}

	private void QueueChunk(ReadOnlySpan<byte> pcm)
	{
		uint[] buffers = _device.Api.GenBuffers(1);
		_device.CheckError("creating a stream buffer");
		if (buffers.Length != 1 || buffers[0] == 0)
			throw new InvalidOperationException("OpenAL did not create a stream buffer.");
		byte[] data = pcm.ToArray();
		try
		{
			_device.Api.BufferData(buffers[0], _bufferFormat, data, Format.SampleRate);
			_device.CheckError("filling a stream buffer");
			_device.Api.SourceQueueBuffers(_source, buffers);
			_device.CheckError("queueing a stream buffer");
		}
		catch
		{
			_device.Api.DeleteBuffers(buffers);
			throw;
		}
		_queued.Enqueue(new QueuedBuffer(buffers[0], pcm.Length));
		_queuedBytes += pcm.Length;
	}

	private void ReclaimProcessed()
	{
		if (_queued.Count == 0)
			return;
		_device.Api.GetSourceProperty(_source, GetSourceInteger.BuffersProcessed, out int processed);
		_device.CheckError("counting processed buffers");
		if (processed <= 0)
			return;
		if (processed > _queued.Count)
			throw new InvalidOperationException($"OpenAL reported {processed} processed buffers while only {_queued.Count} were queued.");
		uint[] released = new uint[processed];
		_device.Api.SourceUnqueueBuffers(_source, released);
		_device.CheckError("reclaiming processed buffers");
		for (int index = 0; index < released.Length; index++)
		{
			QueuedBuffer entry = _queued.Dequeue();
			if (entry.Buffer != released[index])
				throw new InvalidOperationException("OpenAL returned a processed buffer that was not queued.");
			_queuedBytes -= entry.Length;
		}
		_device.Api.DeleteBuffers(released);
		_device.CheckError("releasing processed buffers");
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	private readonly record struct QueuedBuffer(uint Buffer, int Length);
}
