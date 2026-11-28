using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Rendering;

/// <summary>
/// Camera mode that locks its target above local player zero while moving to a scripted override eye position.
/// </summary>
public sealed class FieldCameraTargetOverrideMode : FieldCameraMode
{
	private const float TargetHeightOffset = 19.8f;

	/// <summary>
	/// Initializes the target-locked override camera mode with smooth following enabled.
	/// </summary>
	[Original(0x004D6EF8)]
	public FieldCameraTargetOverrideMode() => Flags = 4;

	/// <summary>
	/// Reads the override eye and smoothing speed while aiming at the primary local player's upper body.
	/// </summary>
	/// <param name="restoring"><see langword="true"/> when restoring from an override; otherwise <see langword="false"/>.</param>
	[Original(0x004D6E30)]
	public override void OnOverride(bool restoring)
	{
		if (FieldCameraController.Current is not FieldCameraController controller)
			return;
		PlayerCharacter? player = PlayerCharacter.GetSlot(0);
		if (player is null)
			return;
		FieldCameraOverrideRequest request = controller.GetOverrideRequest();
		Target = new Vector3(
			player.Position.X,
			(float)(TargetHeightOffset + (double)player.Position.Y),
			player.Position.Z);
		Eye = request.Eye;
		EyeSmoothing = request.Smoothing;
	}
}
