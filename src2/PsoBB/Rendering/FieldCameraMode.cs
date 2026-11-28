using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Base behavior and shared state for each of the field camera's thirteen operating modes.
/// </summary>
public class FieldCameraMode
{
	/// <summary>
	/// Gets or sets the mode behavior flags controlling smoothing, collision and target vertical locking.
	/// </summary>
	public uint Flags { get; set; }

	/// <summary>
	/// Gets or sets the eye position computed by this mode.
	/// </summary>
	public Vector3 Eye { get; set; }

	/// <summary>
	/// Gets or sets the target position computed by this mode.
	/// </summary>
	public Vector3 Target { get; set; } = new(0.0f, 0.0f, 1.0f);

	/// <summary>
	/// Gets or sets the field-of-view angle in 16-bit turn units.
	/// </summary>
	public int FieldOfView { get; set; } = 0x36C1;

	/// <summary>
	/// Gets or sets the smoothing speed applied to the camera eye position.
	/// </summary>
	public float EyeSmoothing { get; set; }

	/// <summary>
	/// Gets or sets the smoothing speed applied to the camera target position.
	/// </summary>
	public float TargetSmoothing { get; set; } = 0.289f;
}
