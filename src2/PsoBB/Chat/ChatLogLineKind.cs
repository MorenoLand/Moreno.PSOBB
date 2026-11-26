namespace PsoBB.Chat;

/// <summary>
/// The origin of one message-log line.
/// </summary>
public enum ChatLogLineKind
{
	/// <summary>A system or session line.</summary>
	System,

	/// <summary>A player message, including the local player's own line.</summary>
	Player,

	/// <summary>A guild or team message.</summary>
	Guild,
}
