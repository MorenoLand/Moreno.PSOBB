namespace PsoBB.Net;

/// <summary>
/// The game server role identified by the welcome packet that completed the handshake.
/// </summary>
public enum GameServerRole
{
	/// <summary>No welcome has completed the handshake.</summary>
	None,
	/// <summary>The game, ship or block server that sends the command 0x03 welcome.</summary>
	GameServer,
	/// <summary>The character server that sends the command 0x9B welcome.</summary>
	CharacterServer,
}
