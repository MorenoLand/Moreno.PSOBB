namespace PsoBB.Net;

/// <summary>
/// The Blue Burst command numbers used by the login and data-server handshake.
/// </summary>
/// <remarks>
/// The packet header stores the command as a 16-bit value: the low byte is the command number and the high byte is a subcommand for the extended families.
/// </remarks>
public enum PacketCommand : ushort
{
	/// <summary>Server welcome carrying the copyright text and the two encryption keys.</summary>
	ServerInit = 0x0003,

	/// <summary>Redirect to another server address and port.</summary>
	Reconnect = 0x0019,

	/// <summary>Keepalive request and response; both carry no payload.</summary>
	Ping = 0x001D,

	/// <summary>Broadcast wrapper for a 0x60 subcommand frame.</summary>
	Broadcast = 0x0060,

	/// <summary>Client login with account, character slot and connection phase.</summary>
	ClientLogin = 0x0093,

	/// <summary>Character server welcome carrying its copyright text and the two encryption keys.</summary>
	CharacterServerInit = 0x009B,

	/// <summary>Client request for the account system file.</summary>
	SystemFileRequest = 0x00E0,

	/// <summary>Server notification that a default system file was created.</summary>
	SystemFileCreated = 0x00E1,

	/// <summary>Server push of the system file and team membership records.</summary>
	SyncSystemFile = 0x00E2,

	/// <summary>Client request for the preview of a character slot.</summary>
	PlayerPreviewRequest = 0x00E3,

	/// <summary>Server approval of a character choice, or the empty-slot error.</summary>
	PlayerChoice = 0x00E4,

	/// <summary>Server initialization of the guild card number and client configuration.</summary>
	ClientInit = 0x00E6,
}
