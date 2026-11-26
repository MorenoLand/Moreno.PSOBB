namespace PsoBB.Audio;

/// <summary>
/// The client's fixed bank catalog: which bank serves each map, which file each bank reads, and the samples inside it.
/// </summary>
/// <remarks>
/// The map table is indexed by the client's map identifier and stores a bank number. Every bank number names one entry in the file-name table; bank seven is the common bank that stays loaded while a map bank is active.
/// </remarks>
public sealed class SoundBankCatalog
{
	/// <summary>
	/// The bank number of the common sound bank.
	/// </summary>
	public const int CommonBankIndex = 7;

	private readonly string[] _fileNames;
	private readonly int[] _mapFileIndex;
	private readonly SoundBankDefinition[] _banks;

	/// <summary>
	/// Creates a bank catalog.
	/// </summary>
	/// <param name="fileNames">The bank file names indexed by bank number.</param>
	/// <param name="mapFileIndex">The bank number indexed by map identifier.</param>
	/// <param name="banks">The bank definitions indexed by bank number.</param>
	/// <param name="commonBankIndex">The bank number that stays loaded with every map.</param>
	/// <exception cref="ArgumentNullException">An argument is null.</exception>
	/// <exception cref="ArgumentException">A table is empty or a map names a missing bank.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The common bank or a map index is outside its range.</exception>
	public SoundBankCatalog(IReadOnlyList<string> fileNames, IReadOnlyList<int> mapFileIndex, IReadOnlyList<SoundBankDefinition> banks, int commonBankIndex = CommonBankIndex)
	{
		ArgumentNullException.ThrowIfNull(fileNames);
		ArgumentNullException.ThrowIfNull(mapFileIndex);
		ArgumentNullException.ThrowIfNull(banks);
		if (banks.Count == 0)
			throw new ArgumentException("A catalog needs at least one bank.", nameof(banks));
		if (fileNames.Count <= commonBankIndex)
			throw new ArgumentOutOfRangeException(nameof(commonBankIndex), commonBankIndex, "The common bank has no file name.");
		if (commonBankIndex < 0 || commonBankIndex >= banks.Count)
			throw new ArgumentOutOfRangeException(nameof(commonBankIndex), commonBankIndex, "The common bank is outside the bank table.");
		_fileNames = [.. fileNames];
		_mapFileIndex = [.. mapFileIndex];
		_banks = [.. banks];
		for (int index = 0; index < _fileNames.Length; index++)
			if (_fileNames[index].Length == 0)
				throw new ArgumentException($"Bank file name {index} is empty.", nameof(fileNames));
		for (int index = 0; index < _mapFileIndex.Length; index++)
			if (_mapFileIndex[index] < 0 || _mapFileIndex[index] >= _banks.Length)
				throw new ArgumentOutOfRangeException(nameof(mapFileIndex), _mapFileIndex[index], $"Map {index} names a bank outside the bank table.");
		CommonBank = commonBankIndex;
	}

	/// <summary>
	/// Gets the client's fixed catalog.
	/// </summary>
	public static SoundBankCatalog Default { get; } = new(SoundBankTables.FileNames, SoundBankTables.MapFileIndex, SoundBankTables.Banks);

	/// <summary>
	/// Gets the bank file names indexed by bank number.
	/// </summary>
	public IReadOnlyList<string> FileNames => _fileNames;

	/// <summary>
	/// Gets the bank number indexed by map identifier.
	/// </summary>
	public IReadOnlyList<int> MapFileIndex => _mapFileIndex;

	/// <summary>
	/// Gets the bank definitions indexed by bank number.
	/// </summary>
	public IReadOnlyList<SoundBankDefinition> Banks => _banks;

	/// <summary>
	/// Gets the bank number that stays loaded with every map.
	/// </summary>
	public int CommonBank { get; }

	/// <summary>
	/// Returns the bank number that serves a map.
	/// </summary>
	/// <param name="map">The map identifier.</param>
	/// <returns>The bank number.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The map has no table row.</exception>
	public int GetBankIndexForMap(int map)
	{
		if ((uint)map >= (uint)_mapFileIndex.Length)
			throw new ArgumentOutOfRangeException(nameof(map), map, "The map has no sound-bank row.");
		return _mapFileIndex[map];
	}

	/// <summary>
	/// Returns a bank definition.
	/// </summary>
	/// <param name="index">The bank number.</param>
	/// <returns>The bank definition.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The bank number is outside the bank table.</exception>
	public SoundBankDefinition GetBank(int index)
	{
		if ((uint)index >= (uint)_banks.Length)
			throw new ArgumentOutOfRangeException(nameof(index), index, "The bank number is outside the bank table.");
		return _banks[index];
	}
}
