namespace PsoBB.Net;

/// <summary>
/// The lifecycle of one connection from the transport opening to the welcome handshake completing.
/// </summary>
public enum GameSessionState
{
	/// <summary>No transport is open.</summary>
	Disconnected,
	/// <summary>The transport is open and no welcome has been accepted yet.</summary>
	Connected,
	/// <summary>A server welcome completed the handshake and encryption is active.</summary>
	Ready,
	/// <summary>The transport or handshake failed and the session must be reconnected.</summary>
	Failed,
}
