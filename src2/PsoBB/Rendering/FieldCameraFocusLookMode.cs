using PsoBB.Mathematics;
using PsoBB.Player;

namespace PsoBB.Rendering;

/// <summary>
/// Lock-on camera mode that positions the camera behind local player zero while looking at an external world target.
/// </summary>
public sealed class FieldCameraFocusLookMode : FieldCameraMode
{
	private const float BackOffsetDistance = 30.0f;
	private const float EyeHeightOffset = 10.0f;

	/// <summary>
	/// Initializes the focus look mode and binds local player slot zero when present.
	/// </summary>
	[Original(0x004D1720)]
	public FieldCameraFocusLookMode()
	{
		Flags = 5;
		PlayerCharacter? player = PlayerCharacter.GetSlot(0);
		TargetEntity = player;
		if (player is not null)
			TargetClientId = unchecked((ushort)player.PlayerIndex);
	}

	/// <summary>
	/// Updates the camera target and eye position using the current global focus target when available.
	/// </summary>
	public override void OnUpdate() => UpdateFocus(null);

	/// <summary>
	/// Places the camera behind the bound player along the horizontal line away from <paramref name="focusPosition"/>.
	/// </summary>
	/// <param name="focusPosition">The world point to look at, or <see langword="null"/> when unavailable.</param>
	[Original(0x004D160C)]
	public void UpdateFocus(Vector3? focusPosition)
	{
		EyeSmoothing = 1.0f;
		if (TargetEntity is not PlayerCharacter player || focusPosition is not { } focus)
			return;
		Target = focus;
		Vector3 delta = new(
			(float)((double)player.Position.X - focus.X),
			0.0f,
			(float)((double)player.Position.Z - focus.Z));
		if (delta.Length() == 0.0f)
			return;
		Vector3.Normalize(ref delta);
		Eye = new Vector3(
			(float)(delta.X * BackOffsetDistance + player.Position.X),
			(float)(EyeHeightOffset + player.Position.Y),
			(float)(BackOffsetDistance * delta.Z + player.Position.Z));
	}
}
