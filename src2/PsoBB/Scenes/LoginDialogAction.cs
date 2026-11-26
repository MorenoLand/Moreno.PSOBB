namespace PsoBB.Scenes;

/// <summary>
/// The action a confirmed login-dialog row requests.
/// </summary>
public enum LoginDialogAction
{
	/// <summary>Closes the account panel and starts the game.</summary>
	StartGame,
	/// <summary>Exits the game.</summary>
	ExitGame,
	/// <summary>Opens the patch download screen.</summary>
	PatchDownload,
	/// <summary>Opens the user-ID registration screen.</summary>
	RegisterUserId,
}
