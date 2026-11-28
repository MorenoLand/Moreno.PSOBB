namespace PsoBB.Net;

/// <summary>
/// The phase reached from the join, unblock and disconnect commands handled by <see cref="LobbyWorld"/>.
/// </summary>
public enum LobbyWorldState
{
	/// <summary>No world is attached to a server.</summary>
	Disconnected,
	/// <summary>The last join command described a lobby list.</summary>
	Lobby,
	/// <summary>A game join or add-player command arrived but the unblock command has not.</summary>
	GameLoading,
	/// <summary>The game-join unblock command arrived and the world accepts player state.</summary>
	Game,
}
