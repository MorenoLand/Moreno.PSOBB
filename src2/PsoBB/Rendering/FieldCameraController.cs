using PsoBB.Game;
using PsoBB.Mathematics;
using PsoBB.Player;
using PsoBB.Scenes;

namespace PsoBB.Rendering;

/// <summary>
/// The field camera controller the original keeps in a single global: the eye and target the camera currently looks from and at,
/// the pair the active camera mode asks for, and the eye recorded when the camera snaps to the request.
/// </summary>
public sealed class FieldCameraController
{
	/// <summary>
	/// The number of per-viewport eye and target slots kept inside the controller.
	/// </summary>
	public const int SlotCount = 4;

	/// <summary>
	/// Gets or sets the active global field camera controller instance.
	/// </summary>
	[OriginalGlobal(0x00A48A54)]
	public static FieldCameraController? Current { get; set; }

	/// <summary>
	/// Gets or sets the global camera controller state flags.
	/// </summary>
	[OriginalGlobal(0x00A489FC)]
	public static uint Flags { get; set; }

	/// <summary>
	/// Gets or sets whether the next follow step should snap directly to the desired eye and target.
	/// </summary>
	[OriginalGlobal(0x00A48A44)]
	public static uint SnapRequested { get; set; }

	/// <summary>
	/// Gets or sets the horizontal right basis vector derived from the camera yaw angle.
	/// </summary>
	[OriginalGlobal(0x00A489E8)]
	public static Vector3 RightAxis { get; set; }

	/// <summary>
	/// Gets or sets the vertical up basis vector derived from the camera pitch angle.
	/// </summary>
	[OriginalGlobal(0x00A489DC)]
	public static Vector3 UpAxis { get; set; }

	/// <summary>
	/// Gets or sets the active camera mode index.
	/// </summary>
	[OriginalGlobal(0x00A489F4)]
	public static byte ActiveModeIndex { get; set; }

	/// <summary>
	/// Gets or sets the previous camera mode index before a temporary switch.
	/// </summary>
	[OriginalGlobal(0x00A489F5)]
	public static byte PreviousModeIndex { get; set; }

	/// <summary>
	/// Gets the thirteen camera mode instances indexed by mode number.
	/// </summary>
	[OriginalGlobal(0x00A48A00)]
	public static FieldCameraMode?[] Modes { get; } = new FieldCameraMode?[FieldCamera.ModeCount];

	/// <summary>
	/// Gets the embedded scripted override request cleared when override flags become inactive.
	/// </summary>
	public FieldCameraOverrideRequest OverrideRequest { get; } = new();

	/// <summary>
	/// Gets or sets the target entity tracked by the controller.
	/// </summary>
	public PlayerCharacter? TargetEntity { get; set; }

	/// <summary>
	/// Gets or sets the yaw angle recorded after the previous mode update.
	/// </summary>
	public int AppliedYawAngle { get; set; }

	/// <summary>
	/// Gets the per-slot eye positions maintained for immediate mode updates.
	/// </summary>
	public Vector3[] SlotEyes { get; } = new Vector3[SlotCount];

	/// <summary>
	/// Gets the per-slot target positions maintained for immediate mode updates.
	/// </summary>
	public Vector3[] SlotTargets { get; } = new Vector3[SlotCount];

	/// <summary>
	/// Gets or sets whether the camera eye sweep struck map geometry on the last collision pass.
	/// </summary>
	public bool HasCollisionHit { get; set; }

	/// <summary>
	/// Gets or sets the active vertical field-of-view angle in 16-bit turn units.
	/// </summary>
	public int FieldOfView { get; set; } = 0x3555;

	/// <summary>
	/// Gets or sets the eye position the active camera mode asks for.
	/// </summary>
	public Vector3 DesiredEye { get; set; }

	/// <summary>
	/// Gets or sets the target position the active camera mode asks for.
	/// </summary>
	public Vector3 DesiredTarget { get; set; }

	/// <summary>
	/// Gets or sets the eye position the camera currently looks from.
	/// </summary>
	public Vector3 Eye { get; set; }

	/// <summary>
	/// Gets or sets the target position the camera currently looks at.
	/// </summary>
	public Vector3 Target { get; set; }

	/// <summary>
	/// Gets or sets the camera pitch angle in 16-bit turn units.
	/// </summary>
	public int PitchAngle { get; set; }

	/// <summary>
	/// Gets or sets the camera yaw angle in 16-bit turn units.
	/// </summary>
	public int YawAngle { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied when moving the current eye toward the desired eye.
	/// </summary>
	public float EyeSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied when moving the current target toward the desired target.
	/// </summary>
	public float TargetSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the eye recorded when the camera last snapped to its requested position.
	/// </summary>
	public Vector3 SnappedEye { get; set; }

	/// <summary>
	/// Gets or sets the per-frame target offset applied when stepping a camera shake.
	/// </summary>
	public Vector3 Offset { get; set; }

	/// <summary>
	/// Gets or sets the remaining frames for the vertical camera offset oscillation.
	/// </summary>
	public uint OffsetCountdown { get; set; }

	/// <summary>
	/// Gets or sets the vertical amplitude per remaining frame of the offset oscillation.
	/// </summary>
	public float OffsetAmplitude { get; set; }

	/// <summary>
	/// Restores every camera controller global to its data-image initial value for test isolation.
	/// </summary>
	public static void ResetGlobals()
	{
		Current = null;
		Flags = 0;
		SnapRequested = 0;
		RightAxis = default;
		UpAxis = default;
		ActiveModeIndex = 0;
		PreviousModeIndex = 0;
		Array.Clear(Modes);
	}

	/// <summary>
	/// Moves a point toward a desired point by a distance proportional to the remaining gap, capping large steps at twelve units.
	/// </summary>
	/// <param name="current">The point to advance in place when stepping.</param>
	/// <param name="desired">The destination point, overwritten with the current point when the step reaches or exceeds the gap.</param>
	/// <param name="speed">The smoothing speed multiplier.</param>
	/// <returns><see langword="true"/> when the step reached or exceeded the gap.</returns>
	[Original(0x004D63B0)]
	public static bool StepTowards(ref Vector3 current, ref Vector3 desired, float speed)
	{
		float distance = Vector3.Subtract(current, desired).Length();
		double step = 0.16f * (double)distance * speed;
		if (!(distance > step))
		{
			desired = current;
			return true;
		}
		if (!(step < 5.0))
			step = 12.0f;
		current = Vector3.MoveTowards(current, desired, (float)step, out _);
		return false;
	}

	/// <summary>
	/// Snaps the eye and target immediately when requested, or steps each smoothly toward its desired position.
	/// </summary>
	[Original(0x004D3D14)]
	public void SmoothFollowDesired()
	{
		if ((SnapRequested & 1u) != 0)
		{
			SnapToDesired();
			SnapRequested = 0;
			return;
		}
		Vector3 eye = Eye;
		Vector3 desiredEye = DesiredEye;
		StepTowards(ref eye, ref desiredEye, EyeSmoothing);
		Eye = eye;
		DesiredEye = desiredEye;
		Vector3 target = Target;
		Vector3 desiredTarget = DesiredTarget;
		StepTowards(ref target, ref desiredTarget, TargetSmoothing);
		Target = target;
		DesiredTarget = desiredTarget;
	}

	/// <summary>
	/// Snaps the eye directly to the desired position and steps the target smoothly toward its desired position.
	/// </summary>
	[Original(0x004D3C98)]
	public void SnapEyeAndSmoothTarget()
	{
		Eye = DesiredEye;
		SnappedEye = DesiredEye;
		FieldCameraMode? mode = Modes[ActiveModeIndex];
		if (mode is not null && (mode.Flags & 0x10u) == 0)
			Target = Target with { Y = DesiredTarget.Y };
		Vector3 target = Target;
		Vector3 desiredTarget = DesiredTarget;
		StepTowards(ref target, ref desiredTarget, TargetSmoothing);
		Target = target;
		DesiredTarget = desiredTarget;
	}

	/// <summary>
	/// Advances the camera override flags for the next frame and clears the override request once no override flags remain active.
	/// </summary>
	[Original(0x004D3EF4)]
	public static void AdvanceFlagsAndClearOverride()
	{
		uint flags = Flags & ~0x8A0u;
		if ((flags & 2u) != 0)
		{
			flags &= ~2u;
			flags |= 0x100u;
		}
		else if ((flags & 0x100u) != 0)
		{
			flags |= 0x80u;
			flags &= ~0x100u;
		}
		flags &= ~0x40u;
		Flags = flags;
		if ((flags & 0x180u) == 0 && Current is FieldCameraController current)
			current.OverrideRequest.Clear();
	}

	/// <summary>
	/// Recomputes the horizontal right and vertical up basis vectors from the camera's yaw and pitch angles.
	/// </summary>
	[Original(0x004D3FB0)]
	public void UpdateOrientationAxes()
	{
		RightAxis = Matrix4x4.Identity.RotateY(YawAngle).TransformDirection(new Vector3(1.0f, 0.0f, 0.0f));
		UpAxis = Matrix4x4.Identity.RotateX(PitchAngle).TransformDirection(new Vector3(0.0f, 1.0f, 0.0f));
	}

	/// <summary>
	/// Advances the vertical camera offset countdown by one frame and updates the active offset.
	/// </summary>
	[Original(0x004D3DF4)]
	public void StepOffsetCountdown()
	{
		if (OffsetCountdown == 0)
			return;

		uint remaining = OffsetCountdown - 1;
		OffsetCountdown = remaining;
		int scaled = unchecked((int)(remaining * 40u));
		int angle = FloatingPointMath.TruncateToInt32((scaled * 65536.0) / 360.0);
		float amplitude = (float)(remaining * (double)OffsetAmplitude);
		float vertical = (float)(FixedPointTrigonometry.Sine(angle) * amplitude);
		Offset = new Vector3(0.0f, vertical, 0.0f);
	}

	/// <summary>
	/// Moves the camera straight to the requested eye and target, without smoothing, and records the eye.
	/// </summary>
	[Original(0x004D3E90)]
	public void SnapToDesired()
	{
		Eye = DesiredEye;
		Target = DesiredTarget;
		SnappedEye = DesiredEye;
	}

	/// <summary>
	/// Selects the active camera mode by index and runs its activation handler.
	/// </summary>
	/// <param name="modeIndex">The zero-based camera mode index.</param>
	[Original(0x004D3AA0)]
	public static void SelectMode(byte modeIndex)
	{
		ActiveModeIndex = modeIndex;
		if (modeIndex < Modes.Length)
			Modes[modeIndex]?.OnActivated();
	}

	/// <summary>
	/// Evaluates camera mode transitions and target re-attachment for the current frame.
	/// </summary>
	[Original(0x004D3974)]
	public void UpdateModeSelection()
	{
		uint flags = Flags;
		if ((flags & 0xCu) != 0 && (flags & 0x20u) == 0 && (flags & 0x80u) == 0 && (flags & 0x800u) == 0)
			return;

		if ((flags & 2u) != 0)
		{
			SelectMode(unchecked((byte)(OverrideRequest.ModeOffset + 9)));
			return;
		}

		if ((flags & 0xA0u) == 0)
			return;

		SelectMode(PreviousModeIndex);
		PlayerCharacter? player = PlayerCharacter.GetSlot(Scene2TransitionOverlay.GetDisplayId());
		if (player is null)
			return;

		if (Modes[ActiveModeIndex] is FieldCameraMode activeMode)
		{
			if (Current is FieldCameraController current)
				current.TargetEntity = player;
			activeMode.AttachTarget(player);
			Flags |= 0x800u;
		}

		FieldCameraMode? defaultMode = Modes[0];
		if (defaultMode is not null)
			defaultMode.AttachTarget(player);

		if (Current is FieldCameraController controller && defaultMode is not null)
		{
			controller.SlotEyes[0] = defaultMode.Eye;
			controller.SlotTargets[0] = defaultMode.Target;
		}
	}

	/// <summary>
	/// Sweeps from the snapped eye toward the desired eye against world collision geometry.
	/// </summary>
	/// <param name="ground">The collision query used for the sweep.</param>
	[Original(0x004D3BA8)]
	public void ResolveSnappedCollision(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		GroundContact? contact = ground.Sweep(SnappedEye, DesiredEye, 0x901);
		if (contact is GroundContact hit)
		{
			Vector3 delta = Vector3.Subtract(DesiredEye, SnappedEye);
			if (delta.Length() != 0.0f)
				Vector3.Normalize(ref delta);
			SnappedEye = Vector3.Subtract(hit.Position, delta);
			HasCollisionHit = true;
		}
		else
		{
			SnappedEye = Eye;
			HasCollisionHit = false;
		}
	}

	/// <summary>
	/// Refines the camera eye and snapped eye after a primary collision hit by sweeping from target to eye.
	/// </summary>
	/// <param name="ground">The collision query used for the sweep.</param>
	[Original(0x004D3D6C)]
	public void ResolveTargetCollision(IGroundCollision ground)
	{
		ArgumentNullException.ThrowIfNull(ground);
		_ = Scene2TransitionOverlay.GetDisplayId();
		if (!HasCollisionHit)
			return;
		GroundContact? contact = ground.Sweep(Target, Eye, 0x901);
		if (contact is GroundContact hit)
		{
			Eye = hit.Position;
			SnappedEye = new Vector3(
				(float)((double)hit.Position.X + hit.Normal.X),
				(float)((double)hit.Position.Y + hit.Normal.Y),
				(float)((double)hit.Position.Z + hit.Normal.Z));
		}
	}
}
