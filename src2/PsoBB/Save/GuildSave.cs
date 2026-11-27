using PsoBB.Data;

namespace PsoBB.Save;

/// <summary>
/// The PSO_GUILDCARD start and wait half of the save manager.
/// </summary>
/// <remarks>
/// <c>0x006C40D4</c> checks the guild-card file, clears the page buffer at <c>0x006C4150</c> and
/// queues pending state 13; <c>0x006C4090</c> waits while the worker drains 13 through 14. The port
/// clears the same buffer through <see cref="IDataFiles"/> and completes the two pending states
/// synchronously; the UI pump at <c>0x006FFA24</c> belongs to the host loop.
/// </remarks>
public static class GuildSave
{
	/// <summary>The pending state <c>0x006C40D4</c> queues.</summary>
	public const int GuildPending = 13;

	/// <summary>The status a null guild block returns.</summary>
	public const int MissingBlockStatus = -65536;

	/// <summary>The guild save block pointer at <c>0x00A95DF4</c>.</summary>
	[OriginalGlobal(0x00A95DF4)]
	public static byte[]? SaveBlock { get; set; }

	/// <summary>The guild load buffer at <c>0x00A95E28</c>.</summary>
	[OriginalGlobal(0x00A95E28)]
	public static byte[]? LoadBuffer { get; set; }

	/// <summary>The guild page count at <c>0x00A95DD0</c>.</summary>
	[OriginalGlobal(0x00A95DD0)]
	public static int LoadPages { get; set; }

	/// <summary>The guild language at <c>0x00A95DD8</c>.</summary>
	[OriginalGlobal(0x00A95DD8)]
	public static int Language { get; set; }

	/// <summary>The flag <c>0x006C40D4</c> clears at <c>0x00A95DAC</c>.</summary>
	[OriginalGlobal(0x00A95DAC)]
	public static int Flag { get; set; }

	/// <summary>
	/// Attaches the guild block and load buffer the initialiser would allocate.
	/// </summary>
	/// <param name="saveBlock">The guild save block.</param>
	/// <param name="loadBuffer">The guild load buffer.</param>
	/// <param name="pages">The page count stored at <c>0x00A95DD0</c>.</param>
	/// <exception cref="ArgumentException">A buffer is too small.</exception>
	public static void Attach(byte[] saveBlock, byte[] loadBuffer, int pages = SystemSave.DefaultPages)
	{
		ArgumentNullException.ThrowIfNull(saveBlock);
		ArgumentNullException.ThrowIfNull(loadBuffer);
		if (loadBuffer.Length < pages << SystemSave.PageShift)
			throw new ArgumentException("The guild load buffer is smaller than the original allocation.", nameof(loadBuffer));
		SaveBlock = saveBlock;
		LoadBuffer = loadBuffer;
		LoadPages = pages;
		SystemSave.Pending = 0;
		SystemSave.Busy = 0;
		SystemSave.LoadActive = 0;
	}

	/// <summary>Clears the guild state for a test or a new session.</summary>
	public static void Reset()
	{
		SaveBlock = null;
		LoadBuffer = null;
		LoadPages = 0;
		Language = 0;
		Flag = 0;
		SystemSave.Pending = 0;
		SystemSave.Busy = 0;
		SystemSave.LoadActive = 0;
	}

	/// <summary>
	/// Starts the guild-card load.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_GUILDCARD.</param>
	/// <returns>Zero when the load started, or a negative status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C40D4)]
	public static int Start(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		Flag = 0;
		int result = MissingBlockStatus;
		if (SaveBlock is not null && SystemSave.Pending == 0)
		{
			Language = (sbyte)UserLanguage();
			result = SystemSave.BuildMode();
			if (result == 0)
			{
				result = SaveFileCheck.Check(files, unchecked((uint)Language), SaveFileCheck.GuildCardName);
				if (result == 0)
				{
					result = Load(files, unchecked((uint)Language));
					if (result == 0)
						SystemSave.Pending = GuildPending;
				}
			}
		}
		return result;
	}

	/// <summary>
	/// Starts the guild load when none is pending and waits until the worker clears it.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_GUILDCARD.</param>
	/// <returns>Zero in every path, matching <c>0x006C4090</c>.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C4090)]
	public static int Wait(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		if (Start(files) != 0)
		{
			SystemSave.Busy = 0;
			return 0;
		}
		SystemSave.Busy = 1;
		while (SystemSave.Pending != 0)
			Pump();
		SystemSave.Busy = 0;
		return 0;
	}

	/// <summary>
	/// Checks PSO_GUILDCARD, clears the guild buffer and returns the shipped build mode.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_GUILDCARD.</param>
	/// <param name="language">The language byte the check uses.</param>
	/// <returns>Zero, <c>-1</c> for a language above seven, or the file status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C4150)]
	public static int Load(IDataFiles files, uint language)
	{
		ArgumentNullException.ThrowIfNull(files);
		Language = unchecked((int)language);
		if (unchecked((int)language) < 0 || language > 7)
			return -1;
		int status = SaveFileCheck.Check(files, language, SaveFileCheck.GuildCardName);
		if (status != 0)
			return status;
		SystemSave.LoadActive = 1;
		byte[] buffer = LoadBuffer ?? throw new InvalidOperationException("The guild load buffer is not attached.");
		buffer.AsSpan(0, LoadPages << SystemSave.PageShift).Clear();
		return SystemSave.BuildMode();
	}

	private static byte UserLanguage() => SystemSave.UserLanguage;

	private static void Pump()
	{
		if (SystemSave.Pending == GuildPending)
		{
			SystemSave.Pending = 14;
			return;
		}
		if (SystemSave.Pending == 14)
		{
			SystemSave.Pending = 0;
			SystemSave.LoadActive = 0;
		}
	}
}
