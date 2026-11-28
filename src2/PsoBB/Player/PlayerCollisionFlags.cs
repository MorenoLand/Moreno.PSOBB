namespace PsoBB.Player;

/// <summary>
/// The collision bits the movement step owns.
/// </summary>
[Flags]
public enum PlayerCollisionFlags
{
	/// <summary>No collision bit.</summary>
	None = 0,
	/// <summary>The last movement step was rejected by a collision.</summary>
	Blocked = 4,
}
