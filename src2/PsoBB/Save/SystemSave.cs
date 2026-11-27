using System.Buffers.Binary;
using PsoBB.Data;

namespace PsoBB.Save;

/// <summary>
/// The PSO_SYSTEM load and validation half of the save manager used by scene-2 state 9.
/// </summary>
/// <remarks>
/// The original starts the system load at <c>0x006C3158</c>, clears the 0x4000-byte page buffer at
/// <c>0x006C31E4</c> and completes the copy and CRC at <c>0x006C3F0C</c>. The shipped code moves the
/// file through an asynchronous worker; this port reads the same bytes through <see cref="IDataFiles"/>
/// and applies them synchronously, so the pending word still reports 16 until the apply call.
/// The character handoff at <c>0x006C3CF8</c> belongs to the character half and is not invoked here.
/// </remarks>
public static class SystemSave
{
	/// <summary>The PSO_SYSTEM file length copied into the save block.</summary>
	public const int SaveLength = 0x0AF0;

	/// <summary>The page size shift the load buffer uses.</summary>
	public const int PageShift = 14;

	/// <summary>The page count <c>0x006C6B82</c> stores during initialisation.</summary>
	public const int DefaultPages = 3;

	/// <summary>The version word <c>0x006C782C</c> writes at offset four.</summary>
	public const ushort Version = 0xFFCE;

	/// <summary>The timestamp constant <c>0x0077BC78</c> returns.</summary>
	public const int Timestamp = 1728000;

	/// <summary>The offset <c>0x0083AD44</c> writes the local time to.</summary>
	public const int TimeOffset = 272;

	/// <summary>The pending operation for a system load.</summary>
	public const int SystemPending = 16;

	/// <summary>The status a null save block returns.</summary>
	public const int MissingBlockStatus = -65536;

	/// <summary>The language byte at <c>0x00A3B1F0</c>.</summary>
	[OriginalGlobal(0x00A3B1F0)]
	public static byte UserLanguage { get; set; }

	/// <summary>The save block pointer at <c>0x00A95DF0</c>.</summary>
	[OriginalGlobal(0x00A95DF0)]
	public static byte[]? SaveBlock { get; set; }

	/// <summary>The pending operation word at <c>0x00A95DE0</c>.</summary>
	[OriginalGlobal(0x00A95DE0)]
	public static int Pending { get; set; }

	/// <summary>The busy flag at <c>0x00A95DA8</c>.</summary>
	[OriginalGlobal(0x00A95DA8)]
	public static int Busy { get; set; }

	/// <summary>The system load buffer at <c>0x00A95E24</c>.</summary>
	[OriginalGlobal(0x00A95E24)]
	public static byte[]? LoadBuffer { get; set; }

	/// <summary>The load page count at <c>0x00A95DC8</c>.</summary>
	[OriginalGlobal(0x00A95DC8)]
	public static int LoadPages { get; set; }

	/// <summary>The asynchronous load flag at <c>0x00AAB3AC</c>.</summary>
	[OriginalGlobal(0x00AAB3AC)]
	public static int LoadActive { get; set; }

	/// <summary>The selected language at <c>0x00A95DCC</c>.</summary>
	[OriginalGlobal(0x00A95DCC)]
	public static int Language { get; set; }

	/// <summary>Gets or sets the local clock the recreate path reads.</summary>
	public static Func<DateTime> Clock { get; set; } = () => DateTime.Now;

	/// <summary>
	/// Attaches the save block and load buffer the initialiser at <c>0x006C6Bxx</c> would allocate.
	/// </summary>
	/// <param name="saveBlock">The block that receives the 2800-byte system image.</param>
	/// <param name="loadBuffer">The asynchronous load buffer.</param>
	/// <param name="pages">The page count stored at <c>0x00A95DC8</c>.</param>
	/// <exception cref="ArgumentException">A buffer is too small.</exception>
	public static void Attach(byte[] saveBlock, byte[] loadBuffer, int pages = DefaultPages)
	{
		ArgumentNullException.ThrowIfNull(saveBlock);
		ArgumentNullException.ThrowIfNull(loadBuffer);
		if (saveBlock.Length < SaveLength || loadBuffer.Length < pages << PageShift)
			throw new ArgumentException("The save buffers are smaller than the original allocation.", nameof(saveBlock));
		SaveBlock = saveBlock;
		LoadBuffer = loadBuffer;
		LoadPages = pages;
		Pending = 0;
		Busy = 0;
		LoadActive = 0;
	}

	/// <summary>Clears the shared state for a test or a new session.</summary>
	public static void Reset()
	{
		SaveBlock = null;
		LoadBuffer = null;
		Pending = 0;
		Busy = 0;
		LoadActive = 0;
		Language = 0;
		UserLanguage = 0;
		LoadPages = 0;
	}

	/// <summary>
	/// Returns the shipped build mode; <c>0x006DC358</c> is a constant zero in this image.
	/// </summary>
	[Original(0x006DC358)]
	public static int BuildMode() => 0;

	/// <summary>
	/// Returns the system version byte at <c>0x00793228</c>.
	/// </summary>
	[Original(0x00793228)]
	public static byte VersionByte()
	{
		int mode = BuildMode();
		if (mode == 1)
			return 5;
		return (byte)(mode != 0 ? 1 : 0);
	}

	/// <summary>
	/// Returns the constant timestamp at <c>0x0077BC78</c>.
	/// </summary>
	[Original(0x0077BC78)]
	public static int TimestampValue() => Timestamp;

	/// <summary>
	/// Starts the PSO_SYSTEM load and records whether the save manager became busy.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_SYSTEM.</param>
	/// <returns>Zero when the load started, or the file-check status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C3158)]
	public static int Start(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		int result = MissingBlockStatus;
		if (SaveBlock is not null && Pending == 0)
		{
			Language = UserLanguage;
			result = BuildMode();
			if (result == 0)
				result = StartLoad(files, (uint)Language);
		}
		Busy = result == 0 ? 1 : 0;
		return result;
	}

	/// <summary>
	/// Checks PSO_SYSTEM, clears the load buffer and queues the 16 pending state.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_SYSTEM.</param>
	/// <param name="language">The language byte the check uses.</param>
	/// <returns>Zero when the buffer is ready, <c>-1</c> for an unknown language or the file status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C31E4)]
	public static int BeginLoad(IDataFiles files, uint language)
	{
		ArgumentNullException.ThrowIfNull(files);
		Language = unchecked((int)language);
		if (language >= 8)
			return -1;
		int status = SaveFileCheck.Check(files, language, SaveFileCheck.SystemName);
		if (status != 0)
			return status;
		LoadActive = 1;
		LoadBuffer.AsSpan(0, LoadPages << PageShift).Clear();
		return BuildMode();
	}

	/// <summary>
	/// Starts the load when none is pending, copies the 2800 bytes into the save block and returns
	/// the checksum comparison at <c>0x006C3F0C</c>.
	/// </summary>
	/// <param name="files">The data files that resolve PSO_SYSTEM.</param>
	/// <returns>One when the stored checksum differs from the computed one, otherwise zero.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="files"/> is null.</exception>
	[Original(0x006C3F0C)]
	public static int Apply(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		int result = MissingBlockStatus;
		if (SaveBlock is not null && Pending == 0)
		{
			Language = UserLanguage;
			result = BuildMode();
			if (result == 0)
				result = StartLoad(files, (uint)Language);
		}
		if (result != 0)
		{
			Busy = 0;
			return 0;
		}
		Busy = 1;
		if (Pending == SystemPending)
			CompletePendingSystem();
		Busy = 0;
		return CopyAndCompare();
	}

	/// <summary>
	/// Resets the save block to a fresh version word, timestamp and local start time.
	/// </summary>
	[Original(0x006C782C)]
	public static void Recreate()
	{
		byte[] block = SaveBlock ?? throw new InvalidOperationException("The save block is not attached.");
		Array.Clear(block, 0, SaveLength);
		block[6] = 0;
		BinaryPrimitives.WriteUInt16LittleEndian(block.AsSpan(4), Version);
		block[7] = VersionByte();
		BinaryPrimitives.WriteInt32LittleEndian(block.AsSpan(8), TimestampValue());
		BinaryPrimitives.WriteUInt16LittleEndian(block.AsSpan(12), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(block.AsSpan(14), 0);
		DateTime now = Clock();
		Span<byte> record = stackalloc byte[12];
		BinaryPrimitives.WriteUInt16LittleEndian(record, (ushort)now.Year);
		record[2] = (byte)now.Month;
		record[3] = (byte)now.Day;
		record[4] = (byte)now.Hour;
		record[5] = (byte)now.Minute;
		record[6] = (byte)now.Second;
		BinaryPrimitives.WriteUInt16LittleEndian(record[7..], (byte)now.DayOfWeek);
		DateTime local = new(now.Year, now.Month, now.Day, now.Hour, now.Minute, now.Second, DateTimeKind.Local);
		BinaryPrimitives.WriteInt32LittleEndian(block.AsSpan(TimeOffset), (int)new DateTimeOffset(local).ToUnixTimeSeconds());
	}

	private static int StartLoad(IDataFiles files, uint language)
	{
		int status = SaveFileCheck.Check(files, language, SaveFileCheck.SystemName);
		if (status != 0)
			return status;
		status = BeginLoad(files, language);
		if (status != 0)
			return status;
		if (files.TryRead(SaveFileCheck.SystemName, out ReadOnlyMemory<byte> data))
			data.Span[..Math.Min(data.Length, SaveLength)].CopyTo(LoadBuffer);
		Pending = SystemPending;
		return 0;
	}

	private static void CompletePendingSystem()
	{
		byte[] block = SaveBlock ?? throw new InvalidOperationException("The save block is not attached.");
		byte[] buffer = LoadBuffer ?? throw new InvalidOperationException("The load buffer is not attached.");
		buffer.AsSpan(0, SaveLength).CopyTo(block);
		int stored = BinaryPrimitives.ReadInt32LittleEndian(block);
		BinaryPrimitives.WriteInt32LittleEndian(block, 0);
		uint checksum = SaveChecksum.Compute(block.AsSpan(0, SaveLength));
		if (~checksum != (uint)stored)
			Recreate();
		Pending = 0;
		LoadActive = 0;
	}

	private static int CopyAndCompare()
	{
		byte[] block = SaveBlock ?? throw new InvalidOperationException("The save block is not attached.");
		byte[] buffer = LoadBuffer ?? throw new InvalidOperationException("The load buffer is not attached.");
		buffer.AsSpan(0, SaveLength).CopyTo(block);
		int stored = BinaryPrimitives.ReadInt32LittleEndian(block);
		BinaryPrimitives.WriteInt32LittleEndian(block, 0);
		uint checksum = SaveChecksum.Compute(block.AsSpan(0, SaveLength));
		BinaryPrimitives.WriteInt32LittleEndian(block, stored);
		return ~checksum != (uint)stored ? 1 : 0;
	}
}
