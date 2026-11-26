namespace PsoBB.Scenes;

/// <summary>
/// The phases the save-after-credits screen reaches before it leaves the save state machine.
/// </summary>
public enum SaveGameSceneState
{
	/// <summary>The save menu object is being created.</summary>
	CreatingMenu,
	/// <summary>The Save and Exit without Saving rows are shown.</summary>
	Menu,
	/// <summary>The player chose Save; the file save state machine is not ported.</summary>
	SaveRequested,
	/// <summary>The player chose Exit without Saving and the root scene was requested.</summary>
	ExitRequested,
	/// <summary>The player cancelled and a scene restart was requested.</summary>
	Canceled,
	/// <summary>The scene was released.</summary>
	Released,
}
