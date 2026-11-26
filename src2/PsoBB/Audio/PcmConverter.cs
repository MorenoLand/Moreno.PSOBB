using System.Buffers.Binary;
using PsoBB.Platform;

namespace PsoBB.Audio;

/// <summary>
/// Converts signed little-endian PCM between the sample widths and channel layouts the client uses.
/// </summary>
/// <remarks>
/// Samples are normalised so that the most negative integer is -1 and the most positive is just below 1. Conversion between sample rates is not performed; the streaming output uses the source rate, as the original did with its 44.1 kHz buffer.
/// </remarks>
public static class PcmConverter
{
	/// <summary>
	/// Decodes integer PCM into interleaved normalised samples.
	/// </summary>
	/// <param name="pcm">The source bytes, a whole number of frames.</param>
	/// <param name="format">The source layout.</param>
	/// <param name="samples">The destination, at least <c>frames * channels</c> long.</param>
	/// <exception cref="ArgumentException">The byte count is not a whole number of frames.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The destination is too small.</exception>
	public static void ToSamples(ReadOnlySpan<byte> pcm, AudioFormat format, Span<float> samples)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (pcm.Length % format.BlockAlign != 0)
			throw new ArgumentException("The PCM byte count is not a whole number of frames.", nameof(pcm));
		int sampleCount = pcm.Length / format.BytesPerSample;
		if (samples.Length < sampleCount)
			throw new ArgumentOutOfRangeException(nameof(samples), samples.Length, $"The destination must hold {sampleCount} samples.");
		for (int index = 0; index < sampleCount; index++)
			samples[index] = ReadSample(pcm.Slice(index * format.BytesPerSample, format.BytesPerSample), format.BitsPerSample);
	}

	/// <summary>
	/// Encodes interleaved normalised samples as integer PCM, clipping values outside -1 through 1.
	/// </summary>
	/// <param name="samples">The interleaved samples, a whole number of frames.</param>
	/// <param name="format">The destination layout.</param>
	/// <param name="pcm">The destination, at least <c>frames * block align</c> long.</param>
	/// <exception cref="ArgumentException">The sample count is not a whole number of frames.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The destination is too small.</exception>
	public static void FromSamples(ReadOnlySpan<float> samples, AudioFormat format, Span<byte> pcm)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (samples.Length % format.Channels != 0)
			throw new ArgumentException("The sample count is not a whole number of frames.", nameof(samples));
		int byteCount = samples.Length / format.Channels * format.BlockAlign;
		if (pcm.Length < byteCount)
			throw new ArgumentOutOfRangeException(nameof(pcm), pcm.Length, $"The destination must hold {byteCount} bytes.");
		for (int index = 0; index < samples.Length; index++)
			WriteSample(pcm.Slice(index * format.BytesPerSample, format.BytesPerSample), format.BitsPerSample, samples[index]);
	}

	/// <summary>
	/// Converts PCM between two layouts that share a sample rate, remapping channels as needed.
	/// </summary>
	/// <param name="source">The source bytes, a whole number of frames.</param>
	/// <param name="sourceFormat">The source layout.</param>
	/// <param name="destination">The destination, at least <c>frames * destination block align</c> long.</param>
	/// <param name="destinationFormat">The destination layout.</param>
	/// <exception cref="ArgumentException">The sample rates differ or a buffer is not frame-aligned.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The destination is too small.</exception>
	public static void Convert(ReadOnlySpan<byte> source, AudioFormat sourceFormat, Span<byte> destination, AudioFormat destinationFormat)
	{
		ArgumentNullException.ThrowIfNull(sourceFormat);
		ArgumentNullException.ThrowIfNull(destinationFormat);
		if (sourceFormat.SampleRate != destinationFormat.SampleRate)
			throw new ArgumentException("PCM conversion does not change the sample rate.", nameof(destinationFormat));
		if (source.Length % sourceFormat.BlockAlign != 0)
			throw new ArgumentException("The source byte count is not a whole number of frames.", nameof(source));
		int frames = source.Length / sourceFormat.BlockAlign;
		if (destination.Length < frames * destinationFormat.BlockAlign)
			throw new ArgumentOutOfRangeException(nameof(destination), destination.Length, "The destination is too small for the converted frames.");
		if (sourceFormat.Equals(destinationFormat))
		{
			source.CopyTo(destination);
			return;
		}
		for (int frame = 0; frame < frames; frame++)
		{
			int sourceFrame = frame * sourceFormat.BlockAlign;
			int destinationFrame = frame * destinationFormat.BlockAlign;
			if (sourceFormat.Channels == 1)
			{
				float sample = ReadSample(source.Slice(sourceFrame, sourceFormat.BytesPerSample), sourceFormat.BitsPerSample);
				for (int channel = 0; channel < destinationFormat.Channels; channel++)
					WriteSample(destination.Slice(destinationFrame + channel * destinationFormat.BytesPerSample, destinationFormat.BytesPerSample), destinationFormat.BitsPerSample, sample);
				continue;
			}
			if (destinationFormat.Channels == 1)
			{
				float sum = 0f;
				for (int channel = 0; channel < sourceFormat.Channels; channel++)
					sum += ReadSample(source.Slice(sourceFrame + channel * sourceFormat.BytesPerSample, sourceFormat.BytesPerSample), sourceFormat.BitsPerSample);
				WriteSample(destination.Slice(destinationFrame, destinationFormat.BytesPerSample), destinationFormat.BitsPerSample, sum / sourceFormat.Channels);
				continue;
			}
			for (int channel = 0; channel < destinationFormat.Channels; channel++)
			{
				int sourceChannel = channel % sourceFormat.Channels;
				float sample = ReadSample(source.Slice(sourceFrame + sourceChannel * sourceFormat.BytesPerSample, sourceFormat.BytesPerSample), sourceFormat.BitsPerSample);
				WriteSample(destination.Slice(destinationFrame + channel * destinationFormat.BytesPerSample, destinationFormat.BytesPerSample), destinationFormat.BitsPerSample, sample);
			}
		}
	}

	/// <summary>
	/// Remaps interleaved normalised samples between channel counts.
	/// </summary>
	/// <param name="source">The interleaved source, a whole number of frames.</param>
	/// <param name="sourceChannels">The source channel count.</param>
	/// <param name="destination">The destination, at least <c>frames * destinationChannels</c> long.</param>
	/// <param name="destinationChannels">The destination channel count.</param>
	/// <exception cref="ArgumentOutOfRangeException">A channel count is outside 1 through 8.</exception>
	/// <exception cref="ArgumentException">The sample count is not a whole number of frames.</exception>
	public static void MapChannels(ReadOnlySpan<float> source, int sourceChannels, Span<float> destination, int destinationChannels)
	{
		if (sourceChannels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(sourceChannels), sourceChannels, "The channel count is between 1 and 8.");
		if (destinationChannels is < 1 or > 8)
			throw new ArgumentOutOfRangeException(nameof(destinationChannels), destinationChannels, "The channel count is between 1 and 8.");
		if (source.Length % sourceChannels != 0)
			throw new ArgumentException("The sample count is not a whole number of frames.", nameof(source));
		int frames = source.Length / sourceChannels;
		if (destination.Length < frames * destinationChannels)
			throw new ArgumentOutOfRangeException(nameof(destination), destination.Length, "The destination is too small for the mapped frames.");
		for (int frame = 0; frame < frames; frame++)
		{
			int sourceFrame = frame * sourceChannels;
			int destinationFrame = frame * destinationChannels;
			if (sourceChannels == 1)
			{
				for (int channel = 0; channel < destinationChannels; channel++)
					destination[destinationFrame + channel] = source[sourceFrame];
				continue;
			}
			if (destinationChannels == 1)
			{
				float sum = 0f;
				for (int channel = 0; channel < sourceChannels; channel++)
					sum += source[sourceFrame + channel];
				destination[destinationFrame] = sum / sourceChannels;
				continue;
			}
			for (int channel = 0; channel < destinationChannels; channel++)
				destination[destinationFrame + channel] = source[sourceFrame + channel % sourceChannels];
		}
	}

	private static float ReadSample(ReadOnlySpan<byte> sample, int bitsPerSample) => bitsPerSample switch
	{
		8 => (sbyte)sample[0] / 128f,
		16 => BinaryPrimitives.ReadInt16LittleEndian(sample) / 32768f,
		24 => ReadInt24(sample) / 8388608f,
		32 => BinaryPrimitives.ReadInt32LittleEndian(sample) / 2147483648f,
		_ => throw new ArgumentOutOfRangeException(nameof(bitsPerSample), bitsPerSample, "A PCM sample is 8, 16, 24 or 32 bits."),
	};

	private static void WriteSample(Span<byte> destination, int bitsPerSample, float value)
	{
		double normalized = double.IsNaN(value) ? 0d : Math.Clamp(value, -1f, 1f);
		switch (bitsPerSample)
		{
			case 8:
				destination[0] = (byte)(sbyte)Math.Clamp((int)(normalized * 128d), sbyte.MinValue, sbyte.MaxValue);
				break;
			case 16:
				BinaryPrimitives.WriteInt16LittleEndian(destination, (short)Math.Clamp((int)(normalized * 32768d), short.MinValue, short.MaxValue));
				break;
			case 24:
				WriteInt24(destination, (int)Math.Clamp(normalized * 8388608d, -8388608d, 8388607d));
				break;
			case 32:
				BinaryPrimitives.WriteInt32LittleEndian(destination, (int)Math.Clamp(normalized * 2147483648d, int.MinValue, int.MaxValue));
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(bitsPerSample), bitsPerSample, "A PCM sample is 8, 16, 24 or 32 bits.");
		}
	}

	private static int ReadInt24(ReadOnlySpan<byte> source)
	{
		int value = source[0] | source[1] << 8 | source[2] << 16;
		return (value & 0x00800000) == 0 ? value : value | unchecked((int)0xFF000000);
	}

	private static void WriteInt24(Span<byte> destination, int value)
	{
		destination[0] = (byte)value;
		destination[1] = (byte)(value >> 8);
		destination[2] = (byte)(value >> 16);
	}
}
