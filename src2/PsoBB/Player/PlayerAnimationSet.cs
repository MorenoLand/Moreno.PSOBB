namespace PsoBB.Player;

/// <summary>
/// The idle, walking and running clips selected for a player.
/// </summary>
/// <remarks>
/// The original reads these clips from the player's weapon animation table and model animation
/// object. That table is not ported, so the host supplies the parsed motions here.
/// </remarks>
public sealed class PlayerAnimationSet
{
	/// <summary>
	/// Gets a set with no clips.
	/// </summary>
	public static PlayerAnimationSet Empty { get; } = new();

	/// <summary>Gets or initialises the standing clip.</summary>
	public PlayerAnimationClip? Standing { get; init; }

	/// <summary>Gets or initialises the walking clip.</summary>
	public PlayerAnimationClip? Walking { get; init; }

	/// <summary>Gets or initialises the running clip.</summary>
	public PlayerAnimationClip? Running { get; init; }

	/// <summary>
	/// Returns the clip for a movement state, or <see langword="null"/> when the set has no clip.
	/// </summary>
	/// <param name="state">The movement state.</param>
	/// <returns>The clip, or null.</returns>
	public PlayerAnimationClip? Get(PlayerMovementState state) => state switch
	{
		PlayerMovementState.Standing => Standing,
		PlayerMovementState.Walking => Walking,
		PlayerMovementState.Running => Running,
		_ => null,
	};
}
