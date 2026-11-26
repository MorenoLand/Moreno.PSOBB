namespace PsoBB.Audio;

/// <summary>
/// The fixed table row that names one bank file and binds its samples to sound-effect identifiers.
/// </summary>
/// <remarks>
/// The client keeps these rows in its executable. They are not stored in the bank file, so a bank cannot be interpreted without its definition.
/// </remarks>
public sealed class SoundBankDefinition
{
	private readonly int[] _sampleIds;
	private readonly PacSoundMetadata[] _metadata;

	/// <summary>
	/// Creates a bank definition.
	/// </summary>
	/// <param name="fileName">The bank file name without a directory.</param>
	/// <param name="sampleIds">The sound-effect identifier for each metadata entry, in bank order.</param>
	/// <param name="metadata">The sample metadata in bank order.</param>
	/// <exception cref="ArgumentNullException">An argument is null.</exception>
	/// <exception cref="ArgumentException">The file name is empty, has a directory, or the two tables have different lengths.</exception>
	/// <exception cref="ArgumentOutOfRangeException">An identifier or loop point is outside its range.</exception>
	public SoundBankDefinition(string fileName, IReadOnlyList<int> sampleIds, IReadOnlyList<PacSoundMetadata> metadata)
	{
		ArgumentNullException.ThrowIfNull(fileName);
		ArgumentNullException.ThrowIfNull(sampleIds);
		ArgumentNullException.ThrowIfNull(metadata);
		if (fileName.Length == 0)
			throw new ArgumentException("A bank file name is required.", nameof(fileName));
		if (fileName.Contains('/') || fileName.Contains('\\'))
			throw new ArgumentException("A bank file name cannot contain a directory separator.", nameof(fileName));
		if (sampleIds.Count != metadata.Count)
			throw new ArgumentException($"The bank has {sampleIds.Count} identifiers but {metadata.Count} metadata entries.", nameof(metadata));
		_sampleIds = [.. sampleIds];
		_metadata = [.. metadata];
		for (int index = 0; index < _metadata.Length; index++)
		{
			int soundEffectId = _sampleIds[index];
			if (soundEffectId is < 0 or >= SoundEffectLibrary.SoundEffectSlots)
				throw new ArgumentOutOfRangeException(nameof(sampleIds), soundEffectId, $"A sound-effect identifier is between 0 and {SoundEffectLibrary.SoundEffectSlots - 1}.");
			PacSoundMetadata entry = _metadata[index];
			if (entry.FileOffset < 0)
				throw new ArgumentOutOfRangeException(nameof(metadata), entry.FileOffset, "A bank offset cannot be negative.");
			if (entry.StartLoop < 0 || entry.EndLoop < entry.StartLoop)
				throw new ArgumentOutOfRangeException(nameof(metadata), entry.EndLoop, "The loop region must be an ordered non-negative frame range.");
		}
		FileName = fileName;
	}

	/// <summary>
	/// Gets the bank file name without a directory.
	/// </summary>
	public string FileName { get; }

	/// <summary>
	/// Gets the sound-effect identifier for each metadata entry.
	/// </summary>
	public IReadOnlyList<int> SampleIds => _sampleIds;

	/// <summary>
	/// Gets the sample metadata in bank order.
	/// </summary>
	public IReadOnlyList<PacSoundMetadata> Metadata => _metadata;
}
