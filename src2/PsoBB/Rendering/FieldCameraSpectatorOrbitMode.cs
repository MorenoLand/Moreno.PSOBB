using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Clamped spherical orbit camera mode with interactive field-of-view and distance controls.
/// </summary>
public sealed class FieldCameraSpectatorOrbitMode : FieldCameraMode
{
	private const float MinimumDistance = 20.0f;
	private const float MaximumDistance = 400.0f;
	private const float ZoomInDelta = 2.0f;
	private const float ZoomOutDelta = -2.0f;
	private const int MinimumPitchAngle = -14336;
	private const int MaximumPitchAngle = 14336;
	private const int FieldOfViewStep = 182;

	/// <summary>
	/// Initializes the spectator orbit mode with a twenty-unit orbit radius.
	/// </summary>
	[Original(0x004D7234)]
	public FieldCameraSpectatorOrbitMode()
	{
		Distance = MinimumDistance;
		Flags = 0;
	}

	/// <summary>
	/// Gets or sets the radial distance from the focused target point.
	/// </summary>
	public float Distance { get; set; }

	/// <summary>
	/// Advances the spectator camera using neutral input around the origin.
	/// </summary>
	public override void OnUpdate() => UpdateSpectator(null, 0, 0, false, false, false, false, false, false);

	/// <summary>
	/// Updates target position, field of view, clamped pitch/yaw angles, distance, and eye coordinates from spectator controls.
	/// </summary>
	/// <param name="focusPosition">The followed target position, or <see langword="null"/> when none is selected.</param>
	/// <param name="deltaYaw">Horizontal stick delta.</param>
	/// <param name="deltaPitch">Vertical stick delta.</param>
	/// <param name="allowFovAdjust">Whether the field-of-view modifier trigger is held.</param>
	/// <param name="fovWiden">Whether the widen-FOV button is pressed.</param>
	/// <param name="fovNarrow">Whether the narrow-FOV button is pressed.</param>
	/// <param name="allowDistanceAdjust">Whether the zoom modifier is held.</param>
	/// <param name="zoomOut">Whether the zoom-out button is held.</param>
	/// <param name="zoomIn">Whether the zoom-in button is held.</param>
	/// <param name="allowRotate">Whether camera rotation input is held.</param>
	[Original(0x004D6FA8)]
	public void UpdateSpectator(
		Vector3? focusPosition,
		short deltaYaw,
		short deltaPitch,
		bool allowFovAdjust,
		bool fovWiden,
		bool fovNarrow,
		bool allowDistanceAdjust,
		bool zoomOut,
		bool zoomIn,
		bool allowRotate = true)
	{
		if (allowFovAdjust)
		{
			if (fovWiden)
				FieldOfView = unchecked(FieldOfView + FieldOfViewStep);
			if (fovNarrow)
				FieldOfView = unchecked(FieldOfView - FieldOfViewStep);
		}

		Target = focusPosition ?? default;

		if (allowDistanceAdjust)
		{
			if (zoomIn)
				Distance = (float)(ZoomOutDelta + (double)Distance);
			double distance = zoomOut ? ZoomInDelta + (double)Distance : Distance;
			if (MinimumDistance >= distance)
				distance = MinimumDistance;
			if (MaximumDistance <= distance)
				distance = MaximumDistance;
			Distance = (float)distance;
		}

		int pitch = allowRotate ? unchecked(PitchAngle + 3 * deltaPitch) : PitchAngle;
		if (allowRotate)
			YawAngle = unchecked(YawAngle + 3 * deltaYaw);
		if (pitch >= MaximumPitchAngle)
			pitch = MaximumPitchAngle;
		if (pitch <= MinimumPitchAngle)
			pitch = MinimumPitchAngle;
		PitchAngle = pitch;

		float horizontalRadius = (float)(FixedPointTrigonometry.Cosine(PitchAngle) * Distance);
		Eye = new Vector3(
			(float)(FixedPointTrigonometry.Sine(YawAngle) * horizontalRadius + Target.X),
			(float)(-FixedPointTrigonometry.Sine(PitchAngle) * Distance + Target.Y),
			(float)(FixedPointTrigonometry.Cosine(YawAngle) * horizontalRadius + Target.Z));
	}
}
