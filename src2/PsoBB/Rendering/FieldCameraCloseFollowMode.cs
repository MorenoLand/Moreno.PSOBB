using PsoBB.Game;
using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Rendering;

/// <summary>
/// Close third-person follow mode (mode twelve) that tracks a focused world coordinate when available.
/// </summary>
public sealed class FieldCameraCloseFollowMode : FieldCameraFollowMode
{
	/// <summary>
	/// Initializes the close-follow camera mode with its default smoothing and collision flags.
	/// </summary>
	[Original(0x004D1AB0)]
	public FieldCameraCloseFollowMode()
	{
		FocusState = 0;
		CloseFocusActive = 0;
		Flags = 21;
		EyeSmoothing = 0.65f;
	}

	/// <summary>Gets or sets whether close focus tracking is currently engaged.</summary>
	public int CloseFocusActive { get; set; }

	/// <summary>Gets or sets the focus tracking sub-state (0 live focus, 1 cached entity-relative offset).</summary>
	public int FocusState { get; set; }

	/// <summary>Gets or sets the cached entity-relative target offset captured while inside close range.</summary>
	public Vector3 LockedTargetOffset { get; set; }

	/// <summary>Gets or sets the cached entity-relative eye offset captured while inside close range.</summary>
	public Vector3 LockedEyeOffset { get; set; }

	/// <summary>
	/// Updates eye and target smoothing rates and close-follow offsets when locking onto a target.
	/// </summary>
	/// <param name="entity">The target player entity, or <see langword="null"/>.</param>
	/// <param name="parameter">The lock-on mode parameter.</param>
	[Original(0x004D1B00)]
	public override void OnTargetLocked(PlayerCharacter? entity, int parameter)
	{
		OnTargetLockedWithGround(EmptyGroundCollision.Instance);
	}

	/// <summary>
	/// Updates close-follow smoothing rates and tests look-ahead collision against <paramref name="ground"/>.
	/// </summary>
	/// <param name="ground">The ground collision query.</param>
	public void OnTargetLockedWithGround(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		Flags = 21;
		EyeSmoothing = 1.65f;
		if (FieldCameraController.Current is FieldCameraController controller)
		{
			float distance = Vector3.Subtract(controller.Target, Target).Length();
			TargetSmoothing = (float)((double)distance * 0.699999988079071 / 100.0);
		}
		if (ResolveLookAheadCollision(ground))
			BehaviorFlags |= 1u;
		else
			BehaviorFlags &= ~1u;
		PresetTargetOffset = new Vector3(0.0f, 19.8f, -5.0f);
		PresetEyeOffset = new Vector3(0.0f, 25.43f, 45.42f);
	}

	/// <summary>
	/// Updates the close-follow camera to frame a focus target point behind the attached entity.
	/// </summary>
	/// <param name="focusPosition">The world-space focus coordinate, or <see langword="null"/> when absent.</param>
	[Original(0x004D1870)]
	public void UpdateFocusTarget(Vector3? focusPosition)
	{
		if (focusPosition is not Vector3 focus || TargetEntity is not PlayerCharacter entity)
			return;
		Vector3 direction = new((float)((double)entity.Position.X - focus.X), 0.0f, (float)((double)entity.Position.Z - focus.Z));
		float distance = direction.Length();
		if (distance == 0.0f)
			return;
		Vector3.Normalize(ref direction);
		if (FocusState == 0)
		{
			float targetY = focus.Y < 50.0f ? focus.Y : 60.0f;
			Target = new Vector3(focus.X, targetY, focus.Z);
			float eyeX = (float)(direction.X * 45.41999816894531 + entity.Position.X);
			float eyeZ = (float)(45.41999816894531 * direction.Z + entity.Position.Z);
			float eyeY = (float)(15.0 + entity.Position.Y);
			Eye = new Vector3(eyeX, eyeY, eyeZ);
			if (distance < 100.0f)
			{
				FocusState = 1;
				LockedTargetOffset = new Vector3(
					(float)((double)focus.X - entity.Position.X),
					(float)((double)targetY - entity.Position.Y),
					(float)((double)focus.Z - entity.Position.Z));
				LockedEyeOffset = new Vector3(
					(float)((double)eyeX - entity.Position.X),
					(float)((double)eyeY - entity.Position.Y),
					(float)((double)eyeZ - entity.Position.Z));
			}
		}
		else if (FocusState == 1)
		{
			if (distance > 100.0f)
				FocusState = 0;
			Target = new Vector3(
				(float)((double)LockedTargetOffset.X + entity.Position.X),
				(float)((double)LockedTargetOffset.Y + entity.Position.Y),
				(float)((double)LockedTargetOffset.Z + entity.Position.Z));
			Eye = new Vector3(
				(float)((double)LockedEyeOffset.X + entity.Position.X),
				(float)((double)LockedEyeOffset.Y + entity.Position.Y),
				(float)((double)LockedEyeOffset.Z + entity.Position.Z));
		}
	}

	/// <summary>
	/// Advances the close-follow mode using standard follow tracking or the focus-target view.
	/// </summary>
	[Original(0x004D1834)]
	public override void OnUpdate() => UpdateCloseFollow(useStandardFollow: false, focusPosition: null);

	/// <summary>
	/// Advances the close-follow mode using the caller-provided focus condition and world coordinate.
	/// </summary>
	/// <param name="useStandardFollow">Whether standard third-person follow should override close-focus tracking.</param>
	/// <param name="focusPosition">The world-space focus coordinate used when not using standard follow.</param>
	public void UpdateCloseFollow(bool useStandardFollow, Vector3? focusPosition)
	{
		Flags = 21;
		if (useStandardFollow)
			base.OnUpdate();
		else
			UpdateFocusTarget(focusPosition);
		Flags |= 0x10u;
	}
}
