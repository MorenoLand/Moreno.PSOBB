using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Camera mode that snaps to fixed override eye and target coordinates while smoothly interpolating eye movement.
/// </summary>
public sealed class FieldCameraOverrideMode : FieldCameraMode
{
	private const float DegreesToTurns = 65536.0f / 360.0f;

	/// <summary>
	/// Initializes the scripted override camera mode with smooth eye and target following enabled.
	/// </summary>
	[Original(0x004D5A84)]
	public FieldCameraOverrideMode() => Flags = 4;

	/// <summary>
	/// Copies eye, target, field-of-view degrees, and smoothing speed from the controller's active override request.
	/// </summary>
	/// <param name="restoring"><see langword="true"/> when restoring from an override; otherwise <see langword="false"/>.</param>
	[Original(0x004D59A0)]
	public override void OnOverride(bool restoring)
	{
		if (FieldCameraController.Current is not FieldCameraController controller)
			return;
		FieldCameraOverrideRequest request = controller.GetOverrideRequest();
		Target = request.Target;
		Eye = request.Eye;
		FieldOfView = FloatingPointMath.TruncateToInt32((double)request.FieldOfViewDegrees * 65536.0f / 360.0f);
		EyeSmoothing = request.Smoothing;
	}
}
