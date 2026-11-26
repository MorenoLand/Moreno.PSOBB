using System.Buffers.Binary;
using PsoBB.Audio;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks PCM decoding, encoding, clipping and channel conversion with synthetic samples.
/// </summary>
public sealed class PcmConverterTests
{
	[Fact]
	public void DecodesSixteenBitStereo()
	{
		byte[] pcm = [0x00, 0x80, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x40];
		float[] samples = new float[4];
		PcmConverter.ToSamples(pcm, AudioFormat.Pcm16Stereo(44100), samples);
		Assert.Equal(-1f, samples[0]);
		Assert.Equal(32767f / 32768f, samples[1], 6);
		Assert.Equal(0f, samples[2]);
		Assert.Equal(0.5f, samples[3]);
	}

	[Fact]
	public void EncodesAndClipsSixteenBitSamples()
	{
		float[] samples = [-1f, 1f, 0.5f, -0.5f, 2f, -2f, float.NaN];
		byte[] pcm = new byte[samples.Length * 2];
		PcmConverter.FromSamples(samples, new AudioFormat(44100, 1, 16), pcm);
		Assert.Equal(short.MinValue, BinaryPrimitives.ReadInt16LittleEndian(pcm));
		Assert.Equal(short.MaxValue, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(2)));
		Assert.Equal(16384, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(4)));
		Assert.Equal(-16384, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(6)));
		Assert.Equal(short.MaxValue, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(8)));
		Assert.Equal(short.MinValue, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(10)));
		Assert.Equal(0, BinaryPrimitives.ReadInt16LittleEndian(pcm.AsSpan(12)));
	}

	[Theory]
	[InlineData(8)]
	[InlineData(16)]
	[InlineData(24)]
	[InlineData(32)]
	public void RoundTripsEverySampleWidth(int bitsPerSample)
	{
		AudioFormat format = new(44100, 1, bitsPerSample);
		float[] source = [-0.75f, -0.5f, -0.25f, 0f, 0.25f, 0.5f, 0.75f];
		byte[] pcm = new byte[source.Length * format.BytesPerSample];
		PcmConverter.FromSamples(source, format, pcm);
		float[] decoded = new float[source.Length];
		PcmConverter.ToSamples(pcm, format, decoded);
		float tolerance = 1f / MathF.Pow(2f, bitsPerSample - 1);
		for (int index = 0; index < source.Length; index++)
			Assert.InRange(decoded[index], source[index] - tolerance, source[index] + tolerance);
	}

	[Fact]
	public void DecodesTwentyFourBitSignExtension()
	{
		byte[] pcm = [0x00, 0x00, 0x80, 0xFF, 0xFF, 0x7F, 0x01, 0x00, 0x00];
		float[] samples = new float[3];
		PcmConverter.ToSamples(pcm, new AudioFormat(8000, 1, 24), samples);
		Assert.Equal(-1f, samples[0]);
		Assert.Equal(8388607f / 8388608f, samples[1]);
		Assert.Equal(1f / 8388608f, samples[2]);
	}

	[Fact]
	public void ConvertsMonoToStereo()
	{
		byte[] source = new byte[4];
		BinaryPrimitives.WriteInt16LittleEndian(source, short.MinValue);
		BinaryPrimitives.WriteInt16LittleEndian(source.AsSpan(2), 16384);
		byte[] destination = new byte[8];
		PcmConverter.Convert(source, new AudioFormat(44100, 1, 16), destination, AudioFormat.Pcm16Stereo(44100));
		Assert.Equal(short.MinValue, BinaryPrimitives.ReadInt16LittleEndian(destination));
		Assert.Equal(short.MinValue, BinaryPrimitives.ReadInt16LittleEndian(destination.AsSpan(2)));
		Assert.Equal(16384, BinaryPrimitives.ReadInt16LittleEndian(destination.AsSpan(4)));
		Assert.Equal(16384, BinaryPrimitives.ReadInt16LittleEndian(destination.AsSpan(6)));
	}

	[Fact]
	public void ConvertsStereoToMonoByAveraging()
	{
		byte[] source = new byte[8];
		BinaryPrimitives.WriteInt16LittleEndian(source, short.MinValue);
		BinaryPrimitives.WriteInt16LittleEndian(source.AsSpan(2), 0);
		BinaryPrimitives.WriteInt16LittleEndian(source.AsSpan(4), 16384);
		BinaryPrimitives.WriteInt16LittleEndian(source.AsSpan(6), 16384);
		byte[] destination = new byte[4];
		PcmConverter.Convert(source, AudioFormat.Pcm16Stereo(44100), destination, new AudioFormat(44100, 1, 16));
		Assert.Equal(-16384, BinaryPrimitives.ReadInt16LittleEndian(destination));
		Assert.Equal(16384, BinaryPrimitives.ReadInt16LittleEndian(destination.AsSpan(2)));
	}

	[Fact]
	public void ConvertsBetweenSampleWidths()
	{
		byte[] source = [0x00, 0x40, 0x00, 0xC0];
		byte[] destination = new byte[8];
		PcmConverter.Convert(source, new AudioFormat(44100, 1, 16), destination, new AudioFormat(44100, 1, 32));
		Assert.Equal(0x40000000, BinaryPrimitives.ReadInt32LittleEndian(destination));
		Assert.Equal(unchecked((int)0xC0000000), BinaryPrimitives.ReadInt32LittleEndian(destination.AsSpan(4)));
	}

	[Fact]
	public void ConvertSameFormatCopiesExactly()
	{
		AudioFormat format = new(44100, 1, 32);
		byte[] source = [0x01, 0x02, 0x03, 0x04, 0xFE, 0xFF, 0xFF, 0x7F];
		byte[] destination = new byte[source.Length];
		PcmConverter.Convert(source, format, destination, format);
		Assert.Equal(source, destination);
	}

	[Fact]
	public void ConvertRejectsDifferentRates()
	{
		byte[] source = new byte[2];
		Assert.Throws<ArgumentException>(() => PcmConverter.Convert(source, new AudioFormat(44100, 1, 16), new byte[2], new AudioFormat(48000, 1, 16)));
	}

	[Fact]
	public void ConvertRejectsUnalignedBuffers()
	{
		byte[] source = new byte[3];
		Assert.Throws<ArgumentException>(() => PcmConverter.Convert(source, AudioFormat.Pcm16Stereo(44100), new byte[12], AudioFormat.Pcm16Stereo(44100)));
		Assert.Throws<ArgumentOutOfRangeException>(() => PcmConverter.Convert(new byte[4], AudioFormat.Pcm16Stereo(44100), new byte[3], AudioFormat.Pcm16Stereo(44100)));
	}

	[Fact]
	public void ToSamplesRejectsShortDestination()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => PcmConverter.ToSamples(new byte[4], AudioFormat.Pcm16Stereo(44100), new float[1]));
	}

	[Fact]
	public void FromSamplesRejectsPartialFrames()
	{
		Assert.Throws<ArgumentException>(() => PcmConverter.FromSamples(new float[3], AudioFormat.Pcm16Stereo(44100), new byte[12]));
	}

	[Fact]
	public void MapChannelsUpmixesMono()
	{
		float[] destination = new float[4];
		PcmConverter.MapChannels([0.5f, -0.5f], 1, destination, 2);
		Assert.Equal([0.5f, 0.5f, -0.5f, -0.5f], destination);
	}

	[Fact]
	public void MapChannelsDownmixesStereo()
	{
		float[] destination = new float[2];
		PcmConverter.MapChannels([1f, -1f, 0.5f, 0.5f], 2, destination, 1);
		Assert.Equal([0f, 0.5f], destination);
	}

	[Fact]
	public void MapChannelsRejectsInvalidCounts()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => PcmConverter.MapChannels([0f], 0, new float[1], 1));
		Assert.Throws<ArgumentOutOfRangeException>(() => PcmConverter.MapChannels([0f], 1, new float[1], 9));
	}
}
