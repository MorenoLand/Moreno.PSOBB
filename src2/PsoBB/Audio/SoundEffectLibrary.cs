using PsoBB.Data;

namespace PsoBB.Audio;

/// <summary>
/// Loads the common bank and the bank that serves the current map, and resolves sound-effect identifiers to samples.
/// </summary>
/// <remarks>
/// The client keeps one 0x700-slot table of loaded samples. Loading a map clears that table and rebinds the common bank; unloading a map does the same and leaves the common bank available. The library reads files through <see cref="IDataFiles"/> and never opens them directly. It is not thread-safe, matching the single-threaded client.
/// </remarks>
public sealed class SoundEffectLibrary
{
	/// <summary>
	/// The number of sound-effect slots in the client's sample table.
	/// </summary>
	public const int SoundEffectSlots = 0x700;

	private readonly IDataFiles _files;
	private readonly SoundBankCatalog _catalog;
	private readonly PacSoundSample?[] _slots = new PacSoundSample?[SoundEffectSlots];
	private int _currentMap = -1;

	/// <summary>
	/// Creates a library over the client's data files.
	/// </summary>
	/// <param name="files">The data files that supply the bank files.</param>
	/// <param name="catalog">The fixed bank table, or the client's catalog when omitted.</param>
	/// <exception cref="ArgumentNullException">The data files are null.</exception>
	public SoundEffectLibrary(IDataFiles files, SoundBankCatalog? catalog = null)
	{
		ArgumentNullException.ThrowIfNull(files);
		_files = files;
		_catalog = catalog ?? SoundBankCatalog.Default;
	}

	/// <summary>
	/// Gets the fixed bank table.
	/// </summary>
	public SoundBankCatalog Catalog => _catalog;

	/// <summary>
	/// Gets the map whose bank is loaded, or -1 when only the common bank is bound.
	/// </summary>
	public int CurrentMap => _currentMap;

	/// <summary>
	/// Gets the loaded common bank, or <see langword="null"/> when it is absent.
	/// </summary>
	public PacSoundBank? CommonBank { get; private set; }

	/// <summary>
	/// Gets the loaded map bank, or <see langword="null"/> when it is absent.
	/// </summary>
	public PacSoundBank? MapBank { get; private set; }

	/// <summary>
	/// Gets the number of occupied sound-effect slots.
	/// </summary>
	public int LoadedSampleCount
	{
		get
		{
			int count = 0;
			foreach (PacSoundSample? sample in _slots)
				if (sample is not null)
					count++;
			return count;
		}
	}

	/// <summary>
	/// Reads the common bank and binds its samples.
	/// </summary>
	/// <returns><see langword="true"/> when the bank file was present and parsed.</returns>
	/// <exception cref="AudioFormatException">The bank header or a sample range is invalid.</exception>
	[Original(0x00828E4C)]
	public bool LoadCommonBank()
	{
		SoundBankDefinition definition = _catalog.GetBank(_catalog.CommonBank);
		CommonBank = null;
		if (!_files.TryRead(SoundAssetPaths.SoundBank(definition.FileName), out ReadOnlyMemory<byte> data))
			return false;
		CommonBank = PacSoundBank.Open(data, definition.SampleIds, definition.Metadata);
		Bind(CommonBank);
		return true;
	}

	/// <summary>
	/// Loads the bank for a map and binds its samples over the common bank.
	/// </summary>
	/// <param name="map">The map identifier.</param>
	/// <returns><see langword="true"/> after the map is selected; a missing bank leaves no map samples and is not an error, matching the client.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The map has no table row.</exception>
	/// <exception cref="AudioFormatException">The bank header or a sample range is invalid.</exception>
	[Original(0x00815584)]
	public bool LoadMapBank(int map)
	{
		if (map == _currentMap)
			return true;
		UnloadMapBank();
		SoundBankDefinition definition = _catalog.GetBank(_catalog.GetBankIndexForMap(map));
		MapBank = null;
		if (_files.TryRead(SoundAssetPaths.SoundBank(definition.FileName), out ReadOnlyMemory<byte> data))
		{
			MapBank = PacSoundBank.Open(data, definition.SampleIds, definition.Metadata);
			Bind(MapBank);
		}
		_currentMap = map;
		return true;
	}

	/// <summary>
	/// Clears the sample table, releases the map bank and rebinds the common bank.
	/// </summary>
	[Original(0x00828C38)]
	public void UnloadMapBank()
	{
		bool hadMap = _currentMap != -1;
		_currentMap = -1;
		MapBank = null;
		if (hadMap)
			Array.Clear(_slots);
		if (CommonBank is not null)
			Bind(CommonBank);
	}

	/// <summary>
	/// Finds the sample bound to a sound-effect identifier.
	/// </summary>
	/// <param name="soundEffectId">The identifier.</param>
	/// <returns>The sample, or <see langword="null"/> when no loaded bank supplies it.</returns>
	[Original(0x00829110)]
	public PacSoundSample? Find(int soundEffectId) => (uint)soundEffectId < (uint)_slots.Length ? _slots[soundEffectId] : null;

	private void Bind(PacSoundBank bank)
	{
		foreach (PacSoundSample sample in bank.Samples)
			_slots[sample.SoundEffectId] = sample;
	}
}
