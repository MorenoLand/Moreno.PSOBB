using System.IO.Compression;
using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks the managed OGG Vorbis seam with a generated tone and stream ownership.
/// </summary>
public sealed class NVorbisOggDecoderTests
{
	[Fact]
	public void ReportsGeneratedToneProperties()
	{
		byte[] ogg = Convert.FromBase64String(SyntheticOggTone.Samples);
		using MemoryStream stream = new(ogg);
		using NVorbisOggDecoder decoder = new(stream);
		Assert.Equal(8000, decoder.SampleRate);
		Assert.Equal(1, decoder.Channels);
		Assert.InRange(decoder.TotalFrames, 1, 4000);
		Assert.Equal(0, decoder.Position);
	}

	[Fact]
	public void DecodesAGeneratedTone()
	{
		byte[] ogg = Convert.FromBase64String(SyntheticOggTone.Samples);
		using MemoryStream stream = new(ogg);
		using NVorbisOggDecoder decoder = new(stream);
		float[] samples = new float[4096];
		int read = decoder.Read(samples);
		Assert.True(read > 0);
		Assert.Equal(0, read % decoder.Channels);
		Assert.Contains(samples.AsSpan(0, read).ToArray(), sample => Math.Abs(sample) > 0.05f);
		Assert.Equal((long)(read / decoder.Channels), decoder.Position);
	}

	[Fact]
	public void SeeksAGeneratedTone()
	{
		byte[] ogg = Convert.FromBase64String(SyntheticOggTone.Samples);
		using MemoryStream stream = new(ogg);
		using NVorbisOggDecoder decoder = new(stream);
		decoder.Seek(100);
		Assert.Equal(100, decoder.Position);
		float[] samples = new float[256];
		int read = decoder.Read(samples);
		Assert.True(read > 0);
		Assert.Contains(samples.AsSpan(0, read).ToArray(), sample => Math.Abs(sample) > 0.05f);
	}

	[Fact]
	public void DisposeIsIdempotentAndRejectsReads()
	{
		byte[] ogg = Convert.FromBase64String(SyntheticOggTone.Samples);
		NVorbisOggDecoder decoder = new(new MemoryStream(ogg));
		decoder.Dispose();
		decoder.Dispose();
		Assert.Throws<ObjectDisposedException>(() => decoder.Read(new float[1]));
		Assert.Throws<ObjectDisposedException>(() => decoder.Seek(0));
	}

	[Fact]
	public void LeaveOpenControlsStreamOwnership()
	{
		byte[] ogg = Convert.FromBase64String(SyntheticOggTone.Samples);
		MemoryStream owned = new(ogg);
		new NVorbisOggDecoder(owned).Dispose();
		Assert.False(owned.CanRead);
		MemoryStream borrowed = new(ogg);
		new NVorbisOggDecoder(borrowed, true).Dispose();
		Assert.True(borrowed.CanRead);
		borrowed.Dispose();
	}

	[Fact]
	public void RejectsNullAndUnusableStreams()
	{
		Assert.Throws<ArgumentNullException>(() => new NVorbisOggDecoder(null!));
		using DeflateStream writeOnly = new(Stream.Null, CompressionMode.Compress);
		Assert.Throws<ArgumentException>(() => new NVorbisOggDecoder(writeOnly));
		using DeflateStream nonSeekable = new(new MemoryStream(new byte[8]), CompressionMode.Decompress);
		Assert.Throws<ArgumentException>(() => new NVorbisOggDecoder(nonSeekable));
	}
}
