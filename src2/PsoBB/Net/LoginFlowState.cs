namespace PsoBB.Net;

/// <summary>
/// The progress of the client login and character-selection exchange.
/// </summary>
public enum LoginFlowState
{
	/// <summary>No connection is open.</summary>
	Disconnected,
	/// <summary>The transport is connected and the flow is waiting for the server welcome.</summary>
	AwaitingWelcome,
	/// <summary>The client login packet is sent and the flow is waiting for the server client initialization.</summary>
	Authenticating,
	/// <summary>The login was accepted, the system-file request is sent and the flow is waiting for the file.</summary>
	AwaitingSystemFile,
	/// <summary>The account system file is available and the flow accepts a character choice.</summary>
	CharacterSelect,
	/// <summary>A character preview request is sent and the flow is waiting for the server answer.</summary>
	AwaitingCharacterChoice,
	/// <summary>The server approved a character.</summary>
	CharacterSelected,
	/// <summary>The server named the next connection target.</summary>
	Redirected,
	/// <summary>The login was rejected, the transport failed or a response was malformed.</summary>
	Failed,
}
