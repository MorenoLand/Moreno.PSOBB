using PsoBB.Game;
using PsoBB.Mathematics;

namespace PsoBB.Player;

/// <summary>
/// The portable movement integration for a player character.
/// </summary>
/// <remarks>
/// Input is reduced to the original movement threshold and run threshold, the heading is measured
/// from the camera heading, and the movement step advances by one original frame. The original
/// wall and entity collision service is not ported; <see cref="Advance"/> asks
/// <see cref="IGroundCollision"/> for a contact on the proposed segment and rejects the step when
/// one is found.
/// </remarks>
public static class PlayerMovement
{
	/// <summary>
	/// Applies one frame of input to the movement state, heading and speed.
	/// </summary>
	/// <param name="player">The player to update.</param>
	/// <param name="intent">The movement input for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="player"/> is null.</exception>
	[Original(0x0069BBD0, "unknown_handle_gamepad_input_move_start")]
	public static void ApplyInput(PlayerCharacter player, PlayerMovementIntent intent)
	{
		ArgumentNullException.ThrowIfNull(player);
		double x = intent.Move.X;
		double y = intent.Move.Y;
		double length = Math.Sqrt(x * x + y * y);
		if (length > 1.0)
		{
			x /= length;
			y /= length;
			length = 1.0;
		}
		float magnitude = (float)length;
		if (!(magnitude > PlayerMovementSettings.InputThreshold))
		{
			player.Stop();
			return;
		}
		double angle = Math.Atan2(x, y);
		int direction = FloatingPointMath.TruncateToInt32(angle * PlayerMovementSettings.TurnUnits / PlayerMovementSettings.TurnRadians);
		player.SetTargetHeading(unchecked((ushort)(intent.CameraHeading + direction)));
		float speed = (intent.Walk ? PlayerMovementSettings.WalkSpeed : PlayerMovementSettings.RunSpeed) * magnitude;
		float normalized = speed * speed / PlayerMovementSettings.SpeedNormalization;
		bool running = normalized > PlayerMovementSettings.RunThreshold;
		player.SetMoving(running ? PlayerMovementState.Running : PlayerMovementState.Walking, speed);
		if (!running)
			player.ClearStuckCounter();
	}

	/// <summary>
	/// Advances the heading, velocity and position by one frame and rejects the step on a contact.
	/// </summary>
	/// <param name="player">The player to advance.</param>
	/// <param name="ground">The ground query used for the proposed segment.</param>
	/// <exception cref="ArgumentNullException"><paramref name="player"/> or <paramref name="ground"/> is null.</exception>
	[Original(0x0069C438, "UpdatePlayerMovementPhysics_0069c438")]
	public static void Advance(PlayerCharacter player, IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(player);
		ArgumentNullException.ThrowIfNull(ground);
		player.CapturePreviousPosition();
		if (!(player.Speed > 0.0f))
		{
			player.ResetVelocity();
			return;
		}
		player.SetHeading(InterpolateHeading(player.Heading, player.TargetHeading));
		double sine = FixedPointTrigonometry.Sine(player.Heading);
		double cosine = FixedPointTrigonometry.Cosine(player.Heading);
		Vector3 velocity = new((float)(sine * player.Speed), 0.0f, (float)(cosine * player.Speed));
		player.SetVelocity(velocity);
		Vector3 proposed = new(player.Position.X + velocity.X, player.Position.Y, player.Position.Z + velocity.Z);
		GroundContact? contact = ground.Sweep(player.Position, proposed, GameObject.GroundQueryMask);
		if (contact is not null)
		{
			player.RejectMovement();
			return;
		}
		player.MoveTo(proposed);
		player.ClearCollision();
	}

	/// <summary>
	/// Moves a heading toward a target by one frame of the original interpolation.
	/// </summary>
	/// <param name="heading">The current heading in 16-bit turn units.</param>
	/// <param name="target">The target heading in 16-bit turn units.</param>
	/// <returns>The interpolated heading.</returns>
	[Original(0x0069C4AC, "InterpolateHeading_0069c4ac")]
	public static ushort InterpolateHeading(ushort heading, int target)
	{
		int difference = unchecked((short)(target - heading));
		int step = difference >> 4;
		if (difference > -PlayerMovementSettings.SmallHeadingDifference && difference < PlayerMovementSettings.SmallHeadingDifference)
			step -= difference >> 5;
		return unchecked((ushort)(heading + step));
	}
}
