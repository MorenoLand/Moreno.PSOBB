namespace PsoBB.Net;

/// <summary>
/// The phase of the game-server connection that follows the login redirect.
/// </summary>
public enum GameServerFlowState
{
	/// <summary>No redirected connection is open.</summary>
	Disconnected,
	/// <summary>The redirected transport is opening or waiting for its welcome.</summary>
	Connecting,
	/// <summary>The welcome completed and the client login packet was sent.</summary>
	Authenticating,
	/// <summary>The server sent a game-join snapshot or a game-player update.</summary>
	Game,
	/// <summary>The server sent a lobby-join snapshot or a lobby-player update.</summary>
	Lobby,
	/// <summary>The redirected connection, welcome or a game-server packet failed.</summary>
	Failed,
	/// <summary>The server sent a command whose layout is not present in the lift.</summary>
	Unsupported,
}
