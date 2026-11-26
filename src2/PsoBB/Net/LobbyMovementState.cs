namespace PsoBB.Net;

/// <summary>
/// The locomotion state a lobby player reports through the movement subcommands.
/// </summary>
public enum LobbyMovementState
{
	/// <summary>No movement subcommand has arrived for this player.</summary>
	Unknown,
	/// <summary>The player stopped at a position.</summary>
	Stopped,
	/// <summary>The player is walking toward a position.</summary>
	Walking,
	/// <summary>The player is running toward a position.</summary>
	Running,
	/// <summary>The player root object is playing its despawn transition.</summary>
	Leaving,
}
