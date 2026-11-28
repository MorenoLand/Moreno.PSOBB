using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Holds the scripted or event-driven camera override parameters read by override camera modes and cleared once inactive.
/// </summary>
public sealed class FieldCameraOverrideRequest
{
	/// <summary>
	/// Gets or sets the smoothing speed requested for the override transition.
	/// </summary>
	public float Smoothing { get; set; }

	/// <summary>
	/// Gets or sets the requested field-of-view angle in degrees.
	/// </summary>
	public int FieldOfViewDegrees { get; set; }

	/// <summary>
	/// Gets or sets the requested override eye position.
	/// </summary>
	public Vector3 Eye { get; set; }

	/// <summary>
	/// Gets or sets the requested override target position.
	/// </summary>
	public Vector3 Target { get; set; }

	/// <summary>
	/// Resets all override request fields to zero.
	/// </summary>
	public void Clear()
	{
		Smoothing = 0.0f;
		FieldOfViewDegrees = 0;
		Eye = default;
		Target = default;
	}
}
