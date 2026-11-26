using System.Buffers.Binary;
using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// Checks sound-bank header parsing, sample lookup, loop metadata and invalid ranges.
/// </summary>
public sealed class PacSoundBankTests
{
	[Fact]
	public void ParsesHeadersAndSamples()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("common.pac",
			new PacSoundSpec(3, 44100, 2, 16, [1000, -1000, 2000, -2000]),
			new PacSoundSpec(9, 22050, 1, 8, [64, -64]));
		PacSoundBank bank = PacSoundBank.Open(data, definition.SampleIds, definition.Metadata);
		Assert.Equal(2, bank.Samples.Count);
		PacSoundSample first = Assert.IsType<PacSoundSample>(bank.Find(3));
		Assert.Equal(44100, first.Format.SampleRate);
		Assert.Equal(2, first.Format.Channels);
		Assert.Equal(16, first.Format.BitsPerSample);
		Assert.Equal(2, first.FrameCount);
		Assert.Equal(8, first.AudioData.Length);
		Assert.Equal(1000, BinaryPrimitives.ReadInt16LittleEndian(first.AudioData.Span));
		Assert.False(first.IsLooping);
		PacSoundSample second = Assert.IsType<PacSoundSample>(bank.Find(9));
		Assert.Equal(22050, second.Format.SampleRate);
		Assert.Equal(1, second.Format.Channels);
		Assert.Equal(8, second.Format.BitsPerSample);
		Assert.Equal(2, second.FrameCount);
		Assert.Null(bank.Find(100));
		Assert.True(bank.TryGet(3, out PacSoundSample? found));
		Assert.Same(first, found);
		Assert.False(bank.TryGet(100, out _));
	}

	[Fact]
	public void ConvertsALoopingSampleToAClipWithItsRegion()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("loop.pac",
			new PacSoundSpec(4, 8000, 1, 16, [1, 2, 3, 4, 5], LoopFlags: 1, StartLoop: 1, EndLoop: 4));
		PacSoundBank bank = PacSoundBank.Open(data, definition.SampleIds, definition.Metadata);
		PacSoundSample sample = Assert.IsType<PacSoundSample>(bank.Find(4));
		Assert.True(sample.IsLooping);
		AudioClip clip = sample.ToClip();
		Assert.Equal(1, clip.LoopStart);
		Assert.Equal(4, clip.LoopEnd);
		Assert.Equal(5, clip.FrameCount);
	}

	[Fact]
	public void AcceptsAnEmptyBank()
	{
		PacSoundBank bank = PacSoundBank.Open(ReadOnlyMemory<byte>.Empty, [], []);
		Assert.Empty(bank.Samples);
		Assert.Null(bank.Find(0));
	}

	[Fact]
	public void RejectsMismatchedTables()
	{
		Assert.Throws<ArgumentException>(() => PacSoundBank.Open(new byte[0x20], [1], []));
		Assert.Throws<ArgumentNullException>(() => PacSoundBank.Open(new byte[0x20], null!, []));
		Assert.Throws<ArgumentNullException>(() => PacSoundBank.Open(new byte[0x20], [], null!));
	}

	[Fact]
	public void RejectsATruncatedHeaderAndData()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("bad.pac", new PacSoundSpec(1, 8000, 1, 16, [1, 2]));
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(data[..(SyntheticPacBank.HeaderSize - 1)], definition.SampleIds, definition.Metadata));
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(data[..^1], definition.SampleIds, definition.Metadata));
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(data, [1], [definition.Metadata[0] with { FileOffset = -1 }]));
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(data, [1], [definition.Metadata[0] with { FileOffset = data.Length }]));
	}

	[Fact]
	public void RejectsUnsupportedFormats()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("bad.pac", new PacSoundSpec(1, 8000, 1, 16, [1]));
		byte[] nonPcm = [.. data];
		BinaryPrimitives.WriteUInt16LittleEndian(nonPcm, 3);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(nonPcm, definition.SampleIds, definition.Metadata));
		byte[] badChannels = [.. data];
		BinaryPrimitives.WriteUInt16LittleEndian(badChannels.AsSpan(2), 9);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(badChannels, definition.SampleIds, definition.Metadata));
		byte[] badBits = [.. data];
		BinaryPrimitives.WriteUInt16LittleEndian(badBits.AsSpan(14), 12);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(badBits, definition.SampleIds, definition.Metadata));
		byte[] badAlign = [.. data];
		BinaryPrimitives.WriteUInt16LittleEndian(badAlign.AsSpan(12), 7);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(badAlign, definition.SampleIds, definition.Metadata));
		byte[] badRate = [.. data];
		BinaryPrimitives.WriteUInt32LittleEndian(badRate.AsSpan(4), 0);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(badRate, definition.SampleIds, definition.Metadata));
	}

	[Fact]
	public void RejectsAudioThatIsNotWholeFrames()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("bad.pac", new PacSoundSpec(1, 8000, 2, 16, [1, 2]));
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(28), 1);
		Assert.Throws<AudioFormatException>(() => PacSoundBank.Open(data, definition.SampleIds, definition.Metadata));
	}

	[Fact]
	public void RejectsNegativeIdentifiers()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("bad.pac", new PacSoundSpec(1, 8000, 1, 16, [1]));
		Assert.Throws<ArgumentOutOfRangeException>(() => PacSoundBank.Open(data, [-1], definition.Metadata));
	}

	[Fact]
	public void LastDuplicateIdentifierWins()
	{
		(byte[] data, SoundBankDefinition definition) = SyntheticPacBank.Build("dup.pac",
			new PacSoundSpec(5, 8000, 1, 16, [1]),
			new PacSoundSpec(5, 8000, 1, 16, [2]));
		PacSoundBank bank = PacSoundBank.Open(data, definition.SampleIds, definition.Metadata);
		PacSoundSample sample = Assert.IsType<PacSoundSample>(bank.Find(5));
		Assert.Equal(2, BinaryPrimitives.ReadInt16LittleEndian(sample.AudioData.Span));
	}
}
