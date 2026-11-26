namespace PsoBB.Audio;

/// <summary>
/// A seekable source of interleaved normalised audio samples, such as an OGG Vorbis decoder.
/// </summary>
/// <remarks>
/// This is the decoder seam. <see cref="Read"/> may return fewer samples than requested and returns zero at the end; <see cref="Position"/> and <see cref="Seek"/> are measured in frames rather than samples.
/// </remarks>
public interface IAudioSampleSource : IDisposable
{
	/// <summary>
	/// Gets the samples per second.
	/// </summary>
	int SampleRate { get; }

	/// <summary>
	/// Gets the interleaved channel count.
	/// </summary>
	int Channels { get; }

	/// <summary>
	/// Gets the total frames in the source, or -1 when the length is unknown.
	/// </summary>
	long TotalFrames { get; }

	/// <summary>
	/// Gets the frame position of the next sample to be read.
	/// </summary>
	long Position { get; }

	/// <summary>
	/// Reads interleaved samples and advances the position.
	/// </summary>
	/// <param name="samples">The destination for complete frames.</param>
	/// <returns>The number of samples written, zero at the end of the source.</returns>
	int Read(Span<float> samples);

	/// <summary>
	/// Moves the next read to an absolute frame.
	/// </summary>
	/// <param name="frame">The frame position.</param>
	void Seek(long frame);
}
