using PsoBB.Platform;

namespace PsoBB.Audio;

/// <summary>
/// A sound bank: the sample headers and PCM data referenced by the client's fixed bank table.
/// </summary>
/// <remarks>
/// The bank has no directory of its own. Each sample's header offset, sound-effect identifier and loop points come from the fixed table that ships with the client, so this reader validates those entries against the stored bytes and never scans for a terminator.
/// </remarks>
public sealed class PacSoundBank
{
	private readonly PacSoundSample[] _samples;
	private readonly Dictionary<int, PacSoundSample> _bySoundEffectId;

	private PacSoundBank(PacSoundSample[] samples)
	{
		_samples = samples;
		_bySoundEffectId = [];
		foreach (PacSoundSample sample in samples)
			_bySoundEffectId[sample.SoundEffectId] = sample;
	}

	/// <summary>
	/// Gets the samples in table order.
	/// </summary>
	public IReadOnlyList<PacSoundSample> Samples => _samples;

	/// <summary>
	/// Reads every sample named by a bank table entry.
	/// </summary>
	/// <param name="data">The complete bank file.</param>
	/// <param name="sampleIds">The sound-effect identifier for each metadata entry.</param>
	/// <param name="metadata">The fixed table entries in bank order.</param>
	/// <returns>The parsed bank; an empty table yields an empty bank.</returns>
	/// <exception cref="ArgumentNullException">An argument is null.</exception>
	/// <exception cref="ArgumentException">The identifier and metadata counts differ.</exception>
	/// <exception cref="AudioFormatException">A header, format or stored range is invalid.</exception>
	[Original(0x00828D40)]
	public static PacSoundBank Open(ReadOnlyMemory<byte> data, IReadOnlyList<int> sampleIds, IReadOnlyList<PacSoundMetadata> metadata)
	{
		ArgumentNullException.ThrowIfNull(sampleIds);
		ArgumentNullException.ThrowIfNull(metadata);
		if (sampleIds.Count != metadata.Count)
			throw new ArgumentException($"The bank has {sampleIds.Count} identifiers but {metadata.Count} metadata entries.", nameof(metadata));
		if (sampleIds.Count == 0)
			return new PacSoundBank([]);
		ReadOnlySpan<byte> bytes = data.Span;
		PacSoundSample[] samples = new PacSoundSample[sampleIds.Count];
		for (int index = 0; index < samples.Length; index++)
		{
			int soundEffectId = sampleIds[index];
			if (soundEffectId < 0)
				throw new ArgumentOutOfRangeException(nameof(sampleIds), soundEffectId, "A sound-effect identifier cannot be negative.");
			PacSoundMetadata entry = metadata[index];
			int offset = entry.FileOffset;
			if (offset < 0 || offset > bytes.Length - PacSoundHeader.SizeInBytes)
				throw new AudioFormatException($"Sample {index} starts at byte {offset} of a {bytes.Length}-byte bank and has no complete header.");
			PacSoundHeader header = PacSoundHeader.Read(bytes.Slice(offset, PacSoundHeader.SizeInBytes));
			AudioFormat format = ValidateFormat(index, header);
			long audioStart = (long)offset + PacSoundHeader.SizeInBytes;
			long audioEnd = audioStart + header.AudioDataSize;
			if (header.AudioDataSize > int.MaxValue || audioEnd > bytes.Length)
				throw new AudioFormatException($"Sample {index} stores {header.AudioDataSize} bytes at {audioStart} but the bank has {bytes.Length} bytes.");
			if (header.AudioDataSize % format.BlockAlign != 0)
				throw new AudioFormatException($"Sample {index} stores {header.AudioDataSize} bytes, which is not a whole number of {format.BlockAlign}-byte frames.");
			samples[index] = new PacSoundSample(soundEffectId, entry, header, data.Slice((int)audioStart, (int)header.AudioDataSize), format);
		}
		return new PacSoundBank(samples);
	}

	/// <summary>
	/// Finds the sample for a sound-effect identifier.
	/// </summary>
	/// <param name="soundEffectId">The identifier.</param>
	/// <returns>The sample, or <see langword="null"/> when the bank has none for that identifier.</returns>
	public PacSoundSample? Find(int soundEffectId) => _bySoundEffectId.GetValueOrDefault(soundEffectId);

	/// <summary>
	/// Tries to find the sample for a sound-effect identifier.
	/// </summary>
	/// <param name="soundEffectId">The identifier.</param>
	/// <param name="sample">The sample, or <see langword="null"/> when absent.</param>
	/// <returns><see langword="true"/> when the bank has the identifier.</returns>
	public bool TryGet(int soundEffectId, out PacSoundSample? sample)
	{
		if (_bySoundEffectId.TryGetValue(soundEffectId, out PacSoundSample? found))
		{
			sample = found;
			return true;
		}
		sample = null;
		return false;
	}

	private static AudioFormat ValidateFormat(int index, PacSoundHeader header)
	{
		if (header.FormatTag != 1)
			throw new AudioFormatException($"Sample {index} uses wave format {header.FormatTag}; only integer PCM is supported.");
		if (header.Channels is < 1 or > 8)
			throw new AudioFormatException($"Sample {index} declares {header.Channels} channels.");
		if (header.BitsPerSample is not (8 or 16 or 24 or 32))
			throw new AudioFormatException($"Sample {index} declares {header.BitsPerSample} bits per sample.");
		int blockAlign = header.Channels * (header.BitsPerSample / 8);
		if (header.BlockAlign != blockAlign)
			throw new AudioFormatException($"Sample {index} declares a {header.BlockAlign}-byte frame but its channels and sample width need {blockAlign} bytes.");
		if (header.SampleRate == 0 || header.SampleRate > int.MaxValue)
			throw new AudioFormatException($"Sample {index} declares a sample rate of {header.SampleRate}.");
		return new AudioFormat((int)header.SampleRate, header.Channels, header.BitsPerSample);
	}
}
