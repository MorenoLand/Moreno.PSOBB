using PsoBB.Data;

namespace PsoBB.Save;

/// <summary>
/// The character-file checks the scene-2 state-9 screen runs before it builds its rows.
/// </summary>
/// <remarks>
/// <c>0x0082C198</c> returns zero when the named file exists and <c>-251</c> when it does not;
/// <c>0x0082C16C</c> returns the file length. Both reject a handle above one with <c>-255</c>.
/// The shared status word at <c>0x00ACBA30</c> carries the last result of the existence check.
/// </remarks>
public static class SaveFileCheck
{
	/// <summary>The file name returned by <c>0x006C44AC</c>.</summary>
	public const string CharacterName = "PSO_CHARACTER";

	/// <summary>The file name returned by <c>0x006C44B4</c>.</summary>
	public const string GuildCardName = "PSO_GUILDCARD";

	/// <summary>The file name returned by <c>0x006C44BC</c>.</summary>
	public const string SystemName = "PSO_SYSTEM";

	/// <summary>The status the existence check stores when the file is absent.</summary>
	public const int MissingStatus = -251;

	/// <summary>The status the handle check returns for a handle above one.</summary>
	public const int InvalidHandleStatus = -255;

	/// <summary>Gets or sets the shared status word at <c>0x00ACBA30</c>.</summary>
	[OriginalGlobal(0x00ACBA30)]
	public static int LastStatus { get; set; }

	/// <summary>Returns the character save name.</summary>
	[Original(0x006C44AC)]
	public static string GetCharacterName() => CharacterName;

	/// <summary>Returns the guild-card save name.</summary>
	[Original(0x006C44B4)]
	public static string GetGuildCardName() => GuildCardName;

	/// <summary>Returns the system save name.</summary>
	[Original(0x006C44BC)]
	public static string GetSystemName() => SystemName;

	/// <summary>
	/// Returns whether the handle is one of the two the checks accept.
	/// </summary>
	/// <param name="handle">The handle the caller passes.</param>
	/// <returns><see langword="true"/> for handle zero or one.</returns>
	[Original(0x0082C204)]
	public static bool IsHandleSupported(uint handle) => TestHandle(handle);

	/// <summary>
	/// Stores the last handle result at <c>0x00ACBA30</c> and returns zero, or returns <c>-255</c>.
	/// </summary>
	/// <param name="handle">The handle the caller passes.</param>
	/// <returns>The stored status.</returns>
	[Original(0x0082C1E0)]
	public static int ValidateHandleFromStack(uint handle) => ValidateHandleCore(handle);

	/// <summary>
	/// Stores the last handle result at <c>0x00ACBA30</c> and returns zero, or returns <c>-255</c>.
	/// </summary>
	/// <param name="handle">The handle the caller passes.</param>
	/// <returns>The stored status.</returns>
	[Original(0x0082C1E4)]
	public static int ValidateHandle(uint handle) => ValidateHandleCore(handle);

	/// <summary>
	/// Checks whether <paramref name="name"/> resolves to a file.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="handle">The handle the caller passes.</param>
	/// <param name="name">The logical file name.</param>
	/// <returns>Zero when the file exists, <c>-251</c> when it is absent or <c>-255</c> for a bad handle.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	[Original(0x0082C198)]
	public static int Check(IDataFiles files, uint handle, string name)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(name);
		int status = ValidateHandleCore(handle);
		if (status != 0)
			return status;
		if (!FileExists(files, name))
		{
			LastStatus = MissingStatus;
			return MissingStatus;
		}
		LastStatus = 0;
		return 0;
	}

	/// <summary>
	/// Returns the stored length of <paramref name="name"/>, or the check status when the handle or file is invalid.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="handle">The handle the caller passes.</param>
	/// <param name="name">The logical file name.</param>
	/// <returns>The file length or a negative status.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	[Original(0x0082C16C)]
	public static int Length(IDataFiles files, uint handle, string name)
	{
		int status = Check(files, handle, name);
		return status != 0 ? status : unchecked((int)FileSize(files, name));
	}

	/// <summary>Clears the shared status word and returns zero.</summary>
	/// <returns>Zero.</returns>
	[Original(0x0082C21C)]
	public static int ClearStatus()
	{
		LastStatus = 0;
		return 0;
	}

	/// <summary>Returns the shared status word.</summary>
	/// <returns>The value of <see cref="LastStatus"/>.</returns>
	[Original(0x0082C3A8)]
	public static int Status() => LastStatus;

	/// <summary>
	/// Returns whether the file opens for reading.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="name">The logical file name.</param>
	/// <returns><see langword="true"/> when the name resolves to data.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	[Original(0x00844D40)]
	public static bool FileExists(IDataFiles files, string name)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(name);
		return files.Exists(name);
	}

	/// <summary>
	/// Returns the low 32-bit length of the file, or zero when it does not open.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="name">The logical file name.</param>
	/// <returns>The stored length in bytes, or zero.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	[Original(0x00844BB8)]
	public static uint FileSize(IDataFiles files, string name)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(name);
		return files.Exists(name) ? (uint)files.GetLength(name) : 0;
	}

	[Original(0x0082C208)]
	private static bool TestHandle(uint handle) => handle < 2;

	private static int ValidateHandleCore(uint handle) => TestHandle(handle) ? ClearStatus() : InvalidHandleStatus;
}
