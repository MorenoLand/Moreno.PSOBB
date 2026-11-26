namespace PsoBB.Net.Patch;

/// <summary>
/// The lifecycle of one patch-server connection.
/// </summary>
public enum PatchSessionState
{
	/// <summary>No connection is open.</summary>
	Disconnected,
	/// <summary>The transport is connected and the flow is waiting for the 0x02 welcome.</summary>
	AwaitingWelcome,
	/// <summary>The welcome was accepted and the flow is waiting for the 0x04 login request.</summary>
	AwaitingLogin,
	/// <summary>The login was sent and the flow is waiting for the checksum exchange.</summary>
	Authenticating,
	/// <summary>The server started a checksum list and the flow is collecting local checksums.</summary>
	Listing,
	/// <summary>The checksum list ended and the flow is waiting for the download totals.</summary>
	Comparing,
	/// <summary>Files are being received or applied.</summary>
	Downloading,
	/// <summary>The server named another endpoint; the session is reconnecting.</summary>
	Redirected,
	/// <summary>The server ended the patch session successfully.</summary>
	Completed,
	/// <summary>The handshake, a response or the transport failed.</summary>
	Failed,
}
