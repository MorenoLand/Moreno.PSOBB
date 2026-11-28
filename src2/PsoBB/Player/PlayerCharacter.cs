using PsoBB.Game;
using PsoBB.Mathematics;

namespace PsoBB.Player;

/// <summary>
/// The local player's position, heading, velocity, movement state and animation clock.
/// </summary>
/// <remarks>
/// This is the part of the original player object that the movement layer owns. Model, inventory,
/// palette, party, quest and network state stay with their own subsystems, and the animation-table
/// lookup is supplied by <see cref="PlayerAnimationSet"/>.
/// </remarks>
public sealed class PlayerCharacter
{
	private readonly PlayerAnimationSet _animations;

	/// <summary>The maximum number of active player slots tracked by the field subsystem.</summary>
	public const int MaximumSlots = 12;

	/// <summary>
	/// Gets the active player character table indexed by slot number.
	/// </summary>
	[OriginalGlobal(0x00A94254)]
	public static PlayerCharacter?[] Slots { get; } = new PlayerCharacter?[MaximumSlots];

	/// <summary>
	/// Clears all registered player slots to their startup empty state for test isolation.
	/// </summary>
	public static void ResetGlobals() => Array.Clear(Slots);

	/// <summary>
	/// Looks up an active player character by slot index.
	/// </summary>
	/// <param name="index">The player slot index.</param>
	/// <returns>The player occupying that slot, or <see langword="null"/> when empty or out of range.</returns>
	[Original(0x0068D5A8)]
	public static PlayerCharacter? GetSlot(int index) => (uint)index < MaximumSlots ? Slots[index] : null;

	private PlayerCharacter(int playerIndex, Vector3 position, ushort heading, PlayerAnimationSet animations)
	{
		PlayerIndex = playerIndex;
		_animations = animations;
		Position = position;
		PreviousPosition = position;
		Heading = heading;
		TargetHeading = heading;
		MovementState = PlayerMovementState.Standing;
		Animation = new PlayerAnimation();
	}

	/// <summary>Gets the original player slot index.</summary>
	public int PlayerIndex { get; }

	/// <summary>Gets the current position.</summary>
	public Vector3 Position { get; private set; }

	/// <summary>Gets the position before the most recent movement step.</summary>
	public Vector3 PreviousPosition { get; private set; }

	/// <summary>Gets the current velocity.</summary>
	public Vector3 Velocity { get; private set; }

	/// <summary>Gets the current heading in 16-bit turn units.</summary>
	public ushort Heading { get; private set; }

	/// <summary>Gets the heading the player is turning toward in 16-bit turn units.</summary>
	public ushort TargetHeading { get; private set; }

	/// <summary>Gets the forward speed in original per-frame units.</summary>
	public float Speed { get; private set; }

	/// <summary>Gets the current movement state.</summary>
	public PlayerMovementState MovementState { get; private set; }

	/// <summary>Gets the collision bits from the most recent movement step.</summary>
	public PlayerCollisionFlags CollisionFlags { get; private set; }

	/// <summary>Gets the number of consecutive rejected running steps.</summary>
	public int StuckCounter { get; private set; }

	/// <summary>Gets or sets the active area or map instance identifier used to detect area changes.</summary>
	public int MapId { get; set; }

	/// <summary>Gets or sets the player character's current action state index.</summary>
	public short ActionId { get; set; }

	/// <summary>Gets or sets the auxiliary entity state bitmask.</summary>
	public uint StatusFlags { get; set; }

	/// <summary>Gets or sets the squared distance to the currently locked target, when tracking an active target.</summary>
	public float? LockedTargetDistanceSquared { get; set; }

	/// <summary>Gets the selected animation and its clock.</summary>
	public PlayerAnimation Animation { get; }

	/// <summary>
	/// Creates the portable player state at a position and heading.
	/// </summary>
	/// <param name="playerIndex">The original player slot index.</param>
	/// <param name="position">The starting position.</param>
	/// <param name="heading">The starting heading in 16-bit turn units.</param>
	/// <param name="animations">The clips selected when the movement state changes.</param>
	/// <returns>The player.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="animations"/> is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="playerIndex"/> is outside the 16-bit player slot range.</exception>
	[Original(0x00686A18, "Player_ConstructFromBaseData")]
	public static PlayerCharacter Create(int playerIndex, Vector3 position, ushort heading, PlayerAnimationSet animations)
	{
		if (playerIndex < 0 || playerIndex > ushort.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(playerIndex), playerIndex, "A player index must fit the original 16-bit slot.");
		ArgumentNullException.ThrowIfNull(animations);
		PlayerCharacter player = new(playerIndex, position, heading, animations);
		player.SelectAnimation(PlayerMovementState.Standing);
		return player;
	}

	/// <summary>
	/// Applies one frame of movement input, advances the movement step and then the animation clock.
	/// </summary>
	/// <param name="intent">The movement input for this frame.</param>
	/// <param name="ground">The ground query used by the movement step.</param>
	/// <exception cref="ArgumentNullException"><paramref name="ground"/> is null.</exception>
	public void Update(PlayerMovementIntent intent, IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		PlayerMovement.ApplyInput(this, intent);
		PlayerMovement.Advance(this, ground);
		Animation.Advance();
	}

	/// <summary>
	/// Clears the blocked bit after a collision response.
	/// </summary>
	[Original(0x0069BBA8, "handle_input_state_move_start_collision")]
	public void ClearCollision()
	{
		CollisionFlags &= ~PlayerCollisionFlags.Blocked;
		StuckCounter = 0;
	}

	internal void SetMoving(PlayerMovementState state, float speed)
	{
		if (MovementState != state)
		{
			MovementState = state;
			SelectAnimation(state);
		}
		Speed = speed;
	}

	internal void Stop()
	{
		Velocity = default;
		Speed = 0.0f;
		if (MovementState == PlayerMovementState.Standing)
			return;
		MovementState = PlayerMovementState.Standing;
		SelectAnimation(PlayerMovementState.Standing);
	}

	internal void SetTargetHeading(ushort heading) => TargetHeading = heading;

	internal void SetHeading(ushort heading) => Heading = heading;

	internal void CapturePreviousPosition() => PreviousPosition = Position;

	internal void MoveTo(Vector3 position) => Position = position;

	internal void ResetVelocity() => Velocity = default;

	internal void SetVelocity(Vector3 velocity) => Velocity = velocity;

	internal void RejectMovement()
	{
		Velocity = default;
		Speed = 0.0f;
		CollisionFlags |= PlayerCollisionFlags.Blocked;
		if (MovementState == PlayerMovementState.Running)
			StuckCounter++;
	}

	internal void ClearStuckCounter() => StuckCounter = 0;

	private void SelectAnimation(PlayerMovementState state)
	{
		PlayerAnimationClip? clip = _animations.Get(state);
		if (clip is not null && !ReferenceEquals(Animation.Clip, clip))
			Animation.Play(clip);
	}
}
