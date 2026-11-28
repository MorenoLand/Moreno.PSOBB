using System.Buffers.Binary;
using PsoBB.Data;

namespace PsoBB.Save;

/// <summary>
/// The PSO_CHARACTER start and apply half of the save manager used by scene-2 state 9.
/// </summary>
/// <remarks>
/// <c>0x006C3CF8</c> starts the character load after the system pending state 16,
/// <c>0x006C3D74</c> checks the file and clears the 0x4000-byte page buffer, and <c>0x006C41B8</c>
/// waits for pending 8 to reach 9, copies the 0xBAA4-byte image and validates it. The inventory and
/// section fixups at <c>0x006BB754</c>, <c>0x006C7754</c> and <c>0x006AB1B4</c> are not part of this
/// port yet; the record copies, the time record and the status return are.
/// </remarks>
public static class CharacterSaveLoad
{
	/// <summary>The character load length copied from the async buffer.</summary>
	public const int SaveLength = 47780;

	/// <summary>The 0x4DC-byte player chunk copied into the first record buffer.</summary>
	public const int PlayerChunkLength = 0x04DC;

	/// <summary>The 0x29C8-byte system chunk copied into the second record buffer.</summary>
	public const int SystemChunkLength = 0x29C8;

	/// <summary>The offset of the player chunk inside a slot record.</summary>
	public const int PlayerChunkOffset = 4;

	/// <summary>The offset of the system chunk inside a slot record.</summary>
	public const int SystemChunkOffset = 1248;

	/// <summary>The pending state that starts the character load.</summary>
	public const int StartPending = 16;

	/// <summary>The pending state after the file is read.</summary>
	public const int ReadPending = 8;

	/// <summary>The pending state that applies the loaded image.</summary>
	public const int ApplyPending = 9;

	/// <summary>The player record buffer at <c>0x00A95DFC</c>.</summary>
	[OriginalGlobal(0x00A95DFC)]
	public static byte[]? PlayerRecord { get; set; }

	/// <summary>The system record buffer at <c>0x00A95DF8</c>.</summary>
	[OriginalGlobal(0x00A95DF8)]
	public static byte[]? SystemRecord { get; set; }

	/// <summary>The character load buffer at <c>0x00A95E44</c>.</summary>
	[OriginalGlobal(0x00A95E44)]
	public static byte[]? LoadBuffer { get; set; }

	/// <summary>The asynchronous read buffer at <c>0x00A95E2C</c>.</summary>
	[OriginalGlobal(0x00A95E2C)]
	public static byte[]? ReadBuffer { get; set; }

	/// <summary>The character page count at <c>0x00A95DD4</c>.</summary>
	[OriginalGlobal(0x00A95DD4)]
	public static int LoadPages { get; set; }

	/// <summary>The slot index at <c>0x00A95E48</c>.</summary>
	[OriginalGlobal(0x00A95E48)]
	public static int Slot { get; set; }

	/// <summary>The selected language at <c>0x00A95DDC</c>.</summary>
	[OriginalGlobal(0x00A95DDC)]
	public static int Language { get; set; }

	/// <summary>The local time record at <c>0x00A95DE4</c>.</summary>
	[OriginalGlobal(0x00A95DE4)]
	public static byte[]? TimeRecord { get; set; }

	/// <summary>The player-record version byte at <c>0x00A9CD44</c>.</summary>
	[OriginalGlobal(0x00A9CD44)]
	public static byte PlayerVersion { get; set; }

	/// <summary>The apply flag at <c>0x00A95DB4</c>.</summary>
	[OriginalGlobal(0x00A95DB4)]
	public static int ApplyFlag { get; set; }

	/// <summary>
	/// Attaches the four buffers the character initialiser would allocate.
	/// </summary>
	/// <param name="playerRecord">The 0x4DC-byte player record buffer.</param>
	/// <param name="systemRecord">The 0x29C8-byte system record buffer.</param>
	/// <param name="loadBuffer">The 0xBAA4-byte load buffer.</param>
	/// <param name="readBuffer">The asynchronous read buffer.</param>
	/// <param name="pages">The page count stored at <c>0x00A95DD4</c>.</param>
	/// <exception cref="ArgumentException">A buffer is too small.</exception>
	public static void Attach(byte[] playerRecord, byte[] systemRecord, byte[] loadBuffer, byte[] readBuffer, int pages = SystemSave.DefaultPages)
	{
		ArgumentNullException.ThrowIfNull(playerRecord);
		ArgumentNullException.ThrowIfNull(systemRecord);
		ArgumentNullException.ThrowIfNull(loadBuffer);
		ArgumentNullException.ThrowIfNull(readBuffer);
		if (playerRecord.Length < PlayerChunkLength || systemRecord.Length < SystemChunkLength || loadBuffer.Length < SaveLength || readBuffer.Length < (pages << SystemSave.PageShift))
			throw new ArgumentException("A character save buffer is smaller than the original allocation.", nameof(loadBuffer));
		PlayerRecord = playerRecord;
		SystemRecord = systemRecord;
		LoadBuffer = loadBuffer;
		ReadBuffer = readBuffer;
		LoadPages = pages;
		TimeRecord = new byte[12];
		CharacterSaveFixup.NameBuffer ??= new byte[CharacterSaveFixup.NameLength];
	}

	/// <summary>Clears the character state for a test or a new session.</summary>
	public static void Reset()
	{
		PlayerRecord = null;
		SystemRecord = null;
		LoadBuffer = null;
		ReadBuffer = null;
		LoadPages = 0;
		Slot = 0;
		Language = 0;
		TimeRecord = null;
	}

	/// <summary>
	/// Starts the character load when the system pending state is 16.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_CHARACTER.</param>
	/// <returns>Zero when pending 8 is queued, or a negative status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C3CF8)]
	public static int Start(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		Language = (sbyte)SystemSave.UserLanguage;
		int result = -1;
		if (PlayerRecord is not null && SystemRecord is not null && LoadBuffer is not null && SystemSave.Pending == StartPending && Language < 8)
		{
			result = SystemSave.BuildMode();
			if (result == 0)
			{
				result = BeginLoad(files, unchecked((uint)Language));
				if (result == 0)
				{
					SystemSave.Pending = ReadPending;
					WriteLocalTime(TimeRecord ??= new byte[12]);
				}
			}
		}
		return result;
	}

	/// <summary>
	/// Checks PSO_CHARACTER, clears the read buffer and returns the shipped build mode.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_CHARACTER.</param>
	/// <param name="language">The language byte the check uses.</param>
	/// <returns>Zero, <c>-1</c> for a language above seven, or the file status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C3D74)]
	public static int BeginLoad(IDataFiles files, uint language)
	{
		ArgumentNullException.ThrowIfNull(files);
		Language = unchecked((int)language);
		if (language >= 8)
			return -1;
		int status = SaveFileCheck.Check(files, language, SaveFileCheck.CharacterName);
		if (status != 0)
			return status;
		SystemSave.LoadActive = 1;
		byte[] buffer = ReadBuffer ?? throw new InvalidOperationException("The character read buffer is not attached.");
		buffer.AsSpan(0, LoadPages << SystemSave.PageShift).Clear();
		return SystemSave.BuildMode();
	}

	/// <summary>
	/// Starts the load when pending 16 is set, drains 8 and 9, copies the image and returns whether
	/// the checksum is not 7.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_CHARACTER.</param>
	/// <returns>One when the image is absent or invalid, otherwise zero.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C41B8)]
	public static int Apply(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		Language = (sbyte)SystemSave.UserLanguage;
		int result = -1;
		if (PlayerRecord is not null && SystemRecord is not null && LoadBuffer is not null && SystemSave.Pending == StartPending && Language < 8)
		{
			result = SystemSave.BuildMode();
			if (result == 0)
			{
				result = BeginLoad(files, unchecked((uint)Language));
				if (result == 0)
				{
					SystemSave.Pending = ReadPending;
					WriteLocalTime(TimeRecord ??= new byte[12]);
				}
			}
		}
		if (result != 0)
		{
			SystemSave.Busy = 0;
			return 0;
		}
		SystemSave.Busy = 1;
		while (SystemSave.Pending != 0)
		{
			if (SystemSave.Pending == ReadPending)
				SystemSave.Pending = ApplyPending;
			else if (SystemSave.Pending == ApplyPending)
				ApplyCharacter(files);
		}
		SystemSave.Busy = 0;
		byte[] image = LoadBuffer ?? throw new InvalidOperationException("The character load buffer is not attached.");
		return CharacterSaveCodec.Validate(image.AsSpan(0, SaveLength)) == CharacterSaveStatus.Valid ? 0 : 1;
	}

	/// <summary>
	/// Writes the twelve-byte local time record at <c>0x0083ACE8</c>.
	/// </summary>
	/// <param name="record">The destination, at least twelve bytes.</param>
	/// <exception cref="ArgumentException">The destination is too small.</exception>
	[Original(0x0083ACE8)]
	public static void WriteLocalTime(Span<byte> record)
	{
		if (record.Length < 12)
			throw new ArgumentException("A time record needs twelve bytes.", nameof(record));
		DateTime now = SystemSave.Clock();
		BinaryPrimitives.WriteUInt16LittleEndian(record, (ushort)now.Year);
		record[2] = (byte)now.Month;
		record[3] = (byte)now.Day;
		record[4] = (byte)now.Hour;
		record[5] = (byte)now.Minute;
		record[6] = (byte)now.Second;
		BinaryPrimitives.WriteUInt16LittleEndian(record[7..], (byte)now.DayOfWeek);
	}

	private static void ApplyCharacter(IDataFiles files)
	{
		byte[] buffer = ReadBuffer ?? throw new InvalidOperationException("The character read buffer is not attached.");
		byte[] image = LoadBuffer ?? throw new InvalidOperationException("The character load buffer is not attached.");
		if (files.TryRead(SaveFileCheck.CharacterName, out ReadOnlyMemory<byte> data))
			data.Span[..Math.Min(data.Length, SaveLength)].CopyTo(buffer);
		buffer.AsSpan(0, SaveLength).CopyTo(image);
		if (CharacterSaveCodec.Validate(image.AsSpan(0, SaveLength)) == CharacterSaveStatus.Valid)
		{
			int record = CharacterSave.SlotLength * Slot;
			image.AsSpan(record + PlayerChunkOffset, PlayerChunkLength).CopyTo(PlayerRecord);
			image.AsSpan(record + SystemChunkOffset, SystemChunkLength).CopyTo(SystemRecord);
			CharacterSaveFixup.CopySystemName();
			PlayerRecord![3] = PlayerVersion;
			ApplyFlag = 0;
		}
		SystemSave.Pending = 0;
		SystemSave.LoadActive = 0;
	}
}
