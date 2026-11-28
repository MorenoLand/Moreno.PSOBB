using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Rendering;

/// <summary>
/// Player-centered orbital camera mode controlled directly by pad inputs and snapped behind the player on activation.
/// </summary>
public sealed class FieldCameraPadOrbitMode : FieldCameraMode
{
	private const float DefaultDistance = 25.0f;
	private const float MinimumDistance = 15.0f;
	private const float MaximumDistance = 1000.0f;
	private const float ZoomStep = 2.0f;
	private const float TargetHeightOffset = 10.0f;
	private const uint EnableMask = 0x2u;
	private const uint ZoomOutMask = 0x20u;
	private const uint ZoomInMask = 0x80u;

	/// <summary>
	/// Initializes the pad orbit camera mode and runs its initial activation placement.
	/// </summary>
	[Original(0x004D1DB8)]
	public FieldCameraPadOrbitMode()
	{
		Flags = 0;
		OnActivated();
	}

	/// <summary>
	/// Gets or sets the radial distance from the player-centered target point.
	/// </summary>
	public float Distance { get; set; }

	/// <summary>
	/// Resets angles and distance, centers on local player zero, and snaps behind their heading.
	/// </summary>
	[Original(0x004D1ED0)]
	public override void OnActivated()
	{
		PitchAngle = 0;
		Distance = DefaultDistance;
		Timer = 0;
		CenterOnLocalPlayer();
		SnapBehindLocalPlayer();
	}

	/// <summary>
	/// Re-centers the target on local player zero and refreshes the orbital eye coordinates.
	/// </summary>
	[Original(0x004D1C3C)]
	public override void OnUpdate()
	{
		CenterOnLocalPlayer();
		UpdateOrbit(0u, 0, 0);
	}

	/// <summary>
	/// Moves the camera target to local player zero's position elevated by ten units.
	/// </summary>
	[Original(0x004D1C50)]
	public void CenterOnLocalPlayer()
	{
		PlayerCharacter? player = PlayerCharacter.GetSlot(0);
		if (player is null)
			return;
		Target = new Vector3(
			player.Position.X,
			(float)(TargetHeightOffset + player.Position.Y),
			player.Position.Z);
	}

	/// <summary>
	/// Aligns the camera directly behind local player zero's current heading at <see cref="Distance"/>.
	/// </summary>
	[Original(0x004D1E50)]
	public void SnapBehindLocalPlayer()
	{
		PlayerCharacter? player = PlayerCharacter.GetSlot(0);
		if (player is null)
			return;
		YawAngle = player.Heading;
		Vector3 offset = Matrix4x4.Identity.RotateY(YawAngle).TransformDirection(new Vector3(0.0f, 0.0f, Distance));
		Eye = new Vector3(
			(float)((double)offset.X + Target.X),
			(float)((double)offset.Y + Target.Y),
			(float)((double)offset.Z + Target.Z));
	}

	/// <summary>
	/// Updates zoom distance and spherical angles when active pad controls are held, then recomputes the eye position.
	/// </summary>
	/// <param name="buttons">Held pad button bitmask.</param>
	/// <param name="deltaYaw">Horizontal analog stick delta.</param>
	/// <param name="deltaPitch">Vertical analog stick delta.</param>
	[Original(0x004D1C7C)]
	public void UpdateOrbit(uint buttons, short deltaYaw, short deltaPitch)
	{
		double distance = Distance;
		if ((buttons & EnableMask) != 0)
		{
			if ((buttons & ZoomOutMask) != 0)
			{
				distance += ZoomStep;
				if (MaximumDistance < distance)
					distance = MaximumDistance;
				Distance = (float)distance;
			}
			else if ((buttons & ZoomInMask) != 0)
			{
				distance -= ZoomStep;
				if (MinimumDistance > distance)
					distance = MinimumDistance;
				Distance = (float)distance;
			}
			YawAngle = unchecked(YawAngle + 3 * deltaYaw);
			PitchAngle = unchecked(PitchAngle + 3 * deltaPitch);
		}

		float horizontalRadius = (float)(FixedPointTrigonometry.Cosine(PitchAngle) * Distance);
		Eye = new Vector3(
			(float)(FixedPointTrigonometry.Sine(YawAngle) * horizontalRadius + Target.X),
			(float)(-FixedPointTrigonometry.Sine(PitchAngle) * Distance + Target.Y),
			(float)(FixedPointTrigonometry.Cosine(YawAngle) * horizontalRadius + Target.Z));
	}
}
