using NVorbis;

namespace PsoBB.Audio;

/// <summary>
/// Decodes an OGG Vorbis stream through the managed NVorbis library.
/// </summary>
/// <remarks>
/// NVorbis returns interleaved floats in the source's native channel count and rate. The decoder requires a seekable stream because OGG page lookup and seeking need random access.
/// </remarks>
public sealed class NVorbisOggDecoder : IAudioSampleSource
{
	private readonly VorbisReader _reader;
	private bool _disposed;

	/// <summary>
	/// Opens an OGG Vorbis stream.
	/// </summary>
	/// <param name="stream">The seekable source stream.</param>
	/// <param name="leaveOpen">Whether the decoder leaves the stream open when disposed.</param>
	/// <exception cref="ArgumentNullException">The stream is null.</exception>
	/// <exception cref="ArgumentException">The stream cannot be read or sought.</exception>
	public NVorbisOggDecoder(Stream stream, bool leaveOpen = false)
	{
		ArgumentNullException.ThrowIfNull(stream);
		if (!stream.CanRead)
			throw new ArgumentException("The OGG stream must be readable.", nameof(stream));
		if (!stream.CanSeek)
			throw new ArgumentException("The OGG stream must be seekable.", nameof(stream));
		_reader = new VorbisReader(stream, !leaveOpen);
	}

	/// <inheritdoc/>
	public int SampleRate => _reader.SampleRate;

	/// <inheritdoc/>
	public int Channels => _reader.Channels;

	/// <inheritdoc/>
	public long TotalFrames => _reader.TotalSamples;

	/// <inheritdoc/>
	public long Position => _reader.SamplePosition;

	/// <inheritdoc/>
	public int Read(Span<float> samples)
	{
		ThrowIfDisposed();
		return _reader.ReadSamples(samples);
	}

	/// <inheritdoc/>
	public void Seek(long frame)
	{
		ThrowIfDisposed();
		if (frame < 0 || frame > _reader.TotalSamples)
			throw new ArgumentOutOfRangeException(nameof(frame), frame, "The frame is outside the OGG stream.");
		_reader.SeekTo(frame, SeekOrigin.Begin);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_reader.Dispose();
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
