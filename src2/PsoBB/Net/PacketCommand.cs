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

	/// <summary>Client menu selection with a menu identifier and an item identifier.</summary>
	MenuSelection = 0x0010,

	/// <summary>Server menu list; the header flag is the entry count minus one.</summary>
	Menu = 0x0007,


	/// <summary>Keepalive request and response; both carry no payload.</summary>
	Ping = 0x001D,
	/// <summary>Broadcast wrapper for one or more 0x60 subcommand records.</summary>
	Broadcast = 0x0060,

	/// <summary>Directed wrapper for one or more 0x60 subcommand records.</summary>
	Directed = 0x0062,

	/// <summary>Server game-join snapshot with four player lobby records.</summary>
	GameJoin = 0x0064,

	/// <summary>Server notice that one player joined the current game.</summary>
	AddPlayerToGame = 0x0065,

	/// <summary>Server notice that one player left the current game.</summary>
	RemovePlayerFromGame = 0x0066,

	/// <summary>Server lobby-join snapshot with up to twelve player entries.</summary>
	JoinLobby = 0x0067,

	/// <summary>Server notice that one player joined the current lobby.</summary>
	AddPlayerToLobby = 0x0068,

	/// <summary>Server notice that one player left the current lobby.</summary>
	RemovePlayerFromLobby = 0x0069,

	/// <summary>Large broadcast wrapper for one or more subcommand records.</summary>
	LargeBroadcast = 0x006C,

	/// <summary>Large directed wrapper for one or more subcommand records.</summary>
	LargeTargeted = 0x006D,

	/// <summary>Server simple-mail entry with sender, date and message text.</summary>
	SimpleMail = 0x0081,

	/// <summary>Server lobby-menu list with menu, item and player-count values.</summary>
	LobbyMenu = 0x0083,

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

	/// <summary>Server preview of an existing character.</summary>
	PlayerPreview = 0x00E5,
	/// <summary>Server initialization of the guild card number and client configuration.</summary>
	ClientInit = 0x00E6,

	/// <summary>Server save-file sync with the character, system and team records.</summary>
	SyncSaveFiles = 0x00E7,

	/// <summary>Server wall-clock time with three flag bytes.</summary>
	ServerTime = 0x00B1,

	/// <summary>Server player challenge and battle record list.</summary>
	PlayerRecords = 0x00C5,
}
