namespace PsoBB.Audio;

/// <summary>
/// Reads the music stream and wraps at the configured loop points.
/// </summary>
/// <remarks>
/// The original streamer seeked the decoder back to the loop start when a track ended. This type keeps that state and handles a loop boundary that falls inside one read, so a short read never leaves a gap.
/// </remarks>
public sealed class MusicStream
{
	private readonly object _gate = new();
	private readonly IAudioSampleSource _source;
	private bool _looping;
	private long _loopStart;
	private long _loopEnd;
	private bool _finished;

	/// <summary>
	/// Wraps a sample source with loop and seek state.
	/// </summary>
	/// <param name="source">The decoder or other seekable sample source.</param>
	/// <exception cref="ArgumentNullException">The source is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The source reports an invalid rate or channel count.</exception>
	public MusicStream(IAudioSampleSource source)
	{
		ArgumentNullException.ThrowIfNull(source);
		if (source.SampleRate <= 0)
			throw new ArgumentOutOfRangeException(nameof(source), source.SampleRate, "The source sample rate must be positive.");
		if (source.Channels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(source), source.Channels, "The source channel count is between 1 and 8.");
		_source = source;
		_loopEnd = source.TotalFrames >= 0 ? source.TotalFrames : 0;
	}

	/// <summary>
	/// Gets the wrapped source.
	/// </summary>
	public IAudioSampleSource Source => _source;

	/// <summary>
	/// Gets the samples per second.
	/// </summary>
	public int SampleRate => _source.SampleRate;

	/// <summary>
	/// Gets the interleaved channel count.
	/// </summary>
	public int Channels => _source.Channels;

	/// <summary>
	/// Gets the total frames in the source, or -1 when unknown.
	/// </summary>
	public long TotalFrames => _source.TotalFrames;

	/// <summary>
	/// Gets the frame position of the next sample to be read.
	/// </summary>
	public long Position
	{
		get
		{
			lock (_gate)
				return _source.Position;
		}
	}

	/// <summary>
	/// Gets or sets a value indicating whether playback loops at the loop points.
	/// </summary>
	public bool IsLooping
	{
		get
		{
			lock (_gate)
				return _looping;
		}
		set
		{
			lock (_gate)
			{
				if (value && !_looping)
				{
					ValidateLoop(_loopStart, _loopEnd == 0 ? _source.TotalFrames : _loopEnd);
					_finished = false;
				}
				_looping = value;
			}
		}
	}

	/// <summary>
	/// Gets the frame where the next loop starts.
	/// </summary>
	public long LoopStart
	{
		get
		{
			lock (_gate)
				return _loopStart;
		}
	}

	/// <summary>
	/// Gets the exclusive frame where the loop ends.
	/// </summary>
	public long LoopEnd
	{
		get
		{
			lock (_gate)
				return _loopEnd;
		}
	}

	/// <summary>
	/// Gets a value indicating whether the non-looping source has reached its end.
	/// </summary>
	public bool IsFinished
	{
		get
		{
			lock (_gate)
				return _finished;
		}
	}

	/// <summary>
	/// Sets the loop points and enables looping.
	/// </summary>
	/// <param name="startFrame">The first frame to replay.</param>
	/// <param name="endFrame">The exclusive frame where the wrap occurs.</param>
	/// <exception cref="ArgumentOutOfRangeException">The points are negative, empty or past a known end.</exception>
	public void SetLoop(long startFrame, long endFrame)
	{
		lock (_gate)
		{
			ValidateLoop(startFrame, endFrame);
			_loopStart = startFrame;
			_loopEnd = endFrame;
			_looping = true;
			_finished = false;
		}
	}

	/// <summary>
	/// Disables looping; playback continues to the end of the source.
	/// </summary>
	public void ClearLoop()
	{
		lock (_gate)
			_looping = false;
	}

	/// <summary>
	/// Moves the decoder to an absolute frame and clears the end state.
	/// </summary>
	/// <param name="frame">The frame position.</param>
	/// <exception cref="ArgumentOutOfRangeException">The frame is negative or past a known end.</exception>
	public void Seek(long frame)
	{
		lock (_gate)
		{
			if (frame < 0 || (_source.TotalFrames >= 0 && frame > _source.TotalFrames))
				throw new ArgumentOutOfRangeException(nameof(frame), frame, "The frame is outside the source.");
			_source.Seek(frame);
			_finished = false;
		}
	}

	/// <summary>
	/// Reads interleaved samples, wrapping at the loop end when looping is enabled.
	/// </summary>
	/// <param name="destination">The destination for complete frames.</param>
	/// <returns>The number of samples written, zero when a non-looping source is finished.</returns>
	public int Read(Span<float> destination)
	{
		lock (_gate)
		{
			if (destination.Length < _source.Channels)
				return 0;
			int framesRequested = destination.Length / _source.Channels;
			int samplesWritten = 0;
			while (samplesWritten / _source.Channels < framesRequested)
			{
				if (_finished)
					break;
				if (_source.TotalFrames >= 0 && _source.Position >= _source.TotalFrames && !_looping)
				{
					_finished = true;
					break;
				}
				int framesRemaining = framesRequested - samplesWritten / _source.Channels;
				if (_looping)
				{
					long position = _source.Position;
					if (position >= _loopEnd)
					{
						_source.Seek(_loopStart);
						if (_source.Position >= _loopEnd)
							throw new InvalidOperationException("The sample source did not move to the loop start.");
						continue;
					}
					framesRemaining = (int)Math.Min(framesRemaining, _loopEnd - position);
				}
				int read = _source.Read(destination.Slice(samplesWritten, framesRemaining * _source.Channels));
				if (read < 0 || read > framesRemaining * _source.Channels || read % _source.Channels != 0)
					throw new InvalidOperationException("The sample source returned an invalid sample count.");
				if (read == 0)
				{
					if (_looping)
					{
						long previous = _source.Position;
						_source.Seek(_loopStart);
						if (_source.Position == previous)
						{
							_finished = true;
							break;
						}
						continue;
					}
					_finished = true;
					break;
				}
				samplesWritten += read;
				if (_looping && _source.Position >= _loopEnd)
				{
					_source.Seek(_loopStart);
					continue;
				}
				if (!_looping && _source.TotalFrames >= 0 && _source.Position >= _source.TotalFrames)
				{
					_finished = true;
					break;
				}
			}
			return samplesWritten;
		}
	}

	private void ValidateLoop(long startFrame, long endFrame)
	{
		if (startFrame < 0)
			throw new ArgumentOutOfRangeException(nameof(startFrame), startFrame, "The loop start cannot be negative.");
		if (endFrame <= startFrame)
			throw new ArgumentOutOfRangeException(nameof(endFrame), endFrame, "The loop end must be after the loop start.");
		if (_source.TotalFrames >= 0 && endFrame > _source.TotalFrames)
			throw new ArgumentOutOfRangeException(nameof(endFrame), endFrame, "The loop end is past the source.");
	}
}
