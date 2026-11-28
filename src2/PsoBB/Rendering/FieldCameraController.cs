using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// The field camera controller the original keeps in a single global: the eye and target the camera currently looks from and at,
/// the pair the active camera mode asks for, and the eye recorded when the camera snaps to the request.
/// </summary>
public sealed class FieldCameraController
{
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
}
