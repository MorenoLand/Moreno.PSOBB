namespace PsoBB.Text;

/// <summary>
/// The title and account-panel strings stored in list 41 of every unitxt table.
/// </summary>
/// <remarks>The original English table has 22 strings in this list. Index 21 repeats the return-to-title prompt and has no separate name here; it remains available through <see cref="UnitxtTable.GetString"/>.</remarks>
public enum LoginScreenText
{
	/// <summary>Cancel.</summary>
	Cancel = 0,
	/// <summary>Confirm.</summary>
	Confirm = 1,
	/// <summary>Login.</summary>
	Login = 2,
	/// <summary>Start Game.</summary>
	StartGame = 3,
	/// <summary>Exit Game.</summary>
	ExitGame = 4,
	/// <summary>Patch Download.</summary>
	PatchDownload = 5,
	/// <summary>Register UserID.</summary>
	RegisterUserId = 6,
	/// <summary>Empty.</summary>
	Empty = 7,
	/// <summary>Input UserID.</summary>
	InputUserId = 8,
	/// <summary>UserID.</summary>
	UserId = 9,
	/// <summary>Password.</summary>
	Password = 10,
	/// <summary>Save UserID and Password?</summary>
	SaveUserIdAndPassword = 11,
	/// <summary>Really OK?</summary>
	ReallyOk = 12,
	/// <summary>Current Status.</summary>
	CurrentStatus = 13,
	/// <summary>All Status.</summary>
	AllStatus = 14,
	/// <summary>Please press Enter-Key.</summary>
	PressEnterKey = 15,
	/// <summary>Patch download done.</summary>
	PatchDownloadDone = 16,
	/// <summary>If you press Enter-Key then exit game.</summary>
	PressEnterKeyToExitGame = 17,
	/// <summary>Patch download failed.</summary>
	PatchDownloadFailed = 18,
	/// <summary>If you press Enter-Key then return to title.</summary>
	PressEnterKeyToReturnToTitle = 19,
	/// <summary>There was no updated file.</summary>
	NoUpdatedFile = 20,
}
