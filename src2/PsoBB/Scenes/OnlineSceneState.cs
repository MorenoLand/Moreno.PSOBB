namespace PsoBB.Scenes;

/// <summary>
/// The phase of the online-mode scene.
/// </summary>
public enum OnlineSceneState
{
	/// <summary>The scene is loading its own surfaces and the shared online systems.</summary>
	Loading,
	/// <summary>The loading phase finished without a request, so the scene waits for a connection.</summary>
	Idle,
	/// <summary>The merged login flow is connecting or authenticating.</summary>
	Connecting,
	/// <summary>The server accepted the login and the flow accepts a character choice.</summary>
	CharacterSelect,
	/// <summary>The server approved the selected character.</summary>
	CharacterSelected,
	/// <summary>The server named the next connection target and the merged flow stopped.</summary>
	Redirected,
	/// <summary>The connection, login or character exchange failed.</summary>
	Failed,
	/// <summary>The scene requested the exit scene.</summary>
	Canceled,
	/// <summary>The scene requested the next scene after loading.</summary>
	Transitioned,
	/// <summary>The scene has been released.</summary>
	Released,
}
