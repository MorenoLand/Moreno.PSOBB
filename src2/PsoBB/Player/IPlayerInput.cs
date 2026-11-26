namespace PsoBB.Player;

/// <summary>
/// Supplies one frame of player movement input.
/// </summary>
public interface IPlayerInput
{
	/// <summary>
	/// Reads the movement input for the current frame.
	/// </summary>
	/// <returns>The movement input.</returns>
	PlayerMovementIntent ReadIntent();
}
