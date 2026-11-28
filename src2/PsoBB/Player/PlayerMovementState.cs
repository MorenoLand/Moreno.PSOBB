namespace PsoBB.Player;

/// <summary>
/// The portable idle, walking and running state selected from the movement input.
/// </summary>
/// <remarks>
/// The original keeps these three names in the wider movement-state word alongside attack, cast,
/// hit and death bits. Only the locomotion bits belong to this layer.
/// </remarks>
public enum PlayerMovementState
{
	/// <summary>The player is standing still.</summary>
	Standing,
	/// <summary>The player is moving below the run threshold.</summary>
	Walking,
	/// <summary>The player is moving at or above the run threshold.</summary>
	Running,
}
