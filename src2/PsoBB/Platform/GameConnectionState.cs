namespace PsoBB.Platform;

/// <summary>
/// The lifecycle of one byte-stream connection to a game server.
/// </summary>
public enum GameConnectionState
{
	/// <summary>The transport is closed.</summary>
	Disconnected,
	/// <summary>A connect request is in progress.</summary>
	Connecting,
	/// <summary>The transport accepts reads and writes.</summary>
	Connected,
	/// <summary>The transport failed and must be closed before it is reused.</summary>
	Failed,
}
