using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Free spherical orbit camera mode controlled by analog stick rotation and zoom buttons.
/// </summary>
public sealed class FieldCameraOrbitMode : FieldCameraMode
{
	private const float MinimumDistance = 10.0f;
	private const float MaximumDistance = 300.0f;
	private const float ZoomStep = 2.2f;

	/// <summary>
	/// Initializes the orbit mode with its default orbit distance.
	/// </summary>
	[Original(0x004D632C)]
	public FieldCameraOrbitMode()
	{
		Distance = 10.0f;
		Flags = 0;
	}

	/// <summary>
	/// Gets or sets the radial distance from <see cref="FieldCameraMode.Target"/> to the orbit eye position.
	/// </summary>
	public float Distance { get; set; }

	/// <summary>
	/// Advances the orbit camera using neutral input.
	/// </summary>
	public override void OnUpdate() => UpdateOrbit(0, 0, false, false);

	/// <summary>
	/// Adjusts orbit distance and spherical angles from analog input and recomputes the eye position around <see cref="FieldCameraMode.Target"/>.
	/// </summary>
	/// <param name="deltaYaw">Horizontal analog stick input delta.</param>
	/// <param name="deltaPitch">Vertical analog stick input delta.</param>
	/// <param name="zoomOut">Whether the zoom-out input is held.</param>
	/// <param name="zoomIn">Whether the zoom-in input is held.</param>
	[Original(0x004D61F8)]
	public void UpdateOrbit(short deltaYaw, short deltaPitch, bool zoomOut, bool zoomIn)
	{
		double distance = Distance;
		if (zoomOut)
			distance = ZoomStep + distance;
		else if (zoomIn)
			distance = -ZoomStep + distance;
		if (MinimumDistance >= distance)
			distance = MinimumDistance;
		if (MaximumDistance <= distance)
			distance = MaximumDistance;
		Distance = (float)distance;

		YawAngle = unchecked(YawAngle + 3 * deltaYaw);
		PitchAngle = unchecked(PitchAngle + 3 * deltaPitch);

		float horizontalRadius = (float)(FixedPointTrigonometry.Cosine(PitchAngle) * Distance);
		Eye = new Vector3(
			(float)(FixedPointTrigonometry.Sine(YawAngle) * horizontalRadius + Target.X),
			(float)(-FixedPointTrigonometry.Sine(PitchAngle) * Distance + Target.Y),
			(float)(FixedPointTrigonometry.Cosine(YawAngle) * horizontalRadius + Target.Z));
	}

	/// <summary>
	/// Aligns the active orbit mode distance, pitch, and yaw to view <paramref name="target"/> from <paramref name="eye"/>.
	/// </summary>
	/// <param name="eye">The camera eye position.</param>
	/// <param name="target">The camera look-at target position.</param>
	[Original(0x004D5188)]
	public static void AlignToView(Vector3 eye, Vector3 target)
	{
		if (FieldCameraController.Modes[6] is not FieldCameraOrbitMode orbit)
			return;

		float distance = (float)Vector3.Distance(eye, target);
		orbit.Distance = distance;
		Vector3 planar = new(target.X - eye.X, 0.0f, target.Z - eye.Z);
		float horizontal = planar.Length();
		const double TwoPi = 6.283184051513672;
		int pitch = -FloatingPointMath.TruncateToInt32(Math.Acos((double)horizontal / distance) * 65536.0 / TwoPi);
		orbit.PitchAngle = pitch;
		orbit.YawAngle = Angle.HeadingBetween(target, eye);
	}
}
