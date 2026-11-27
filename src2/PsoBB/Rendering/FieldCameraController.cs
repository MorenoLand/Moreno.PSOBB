using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// The field camera controller the original keeps in a single global: the eye and target the camera currently looks from and at,
/// the pair the active camera mode asks for, and the eye recorded when the camera snaps to the request.
/// </summary>
public sealed class FieldCameraController
{
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
	/// Gets or sets the eye recorded when the camera last snapped to its requested position.
	/// </summary>
	public Vector3 SnappedEye { get; set; }

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
