using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// The world-space camera of a 3D scene: eye point, look-at target, up vector and the original field-of-view and clip distances.
/// </summary>
/// <param name="Position">The eye point.</param>
/// <param name="Target">The absolute point the camera looks at.</param>
/// <param name="Up">The up vector.</param>
/// <param name="FieldOfViewAngle">The field-of-view angle in 16-bit turn units.</param>
/// <param name="FieldOfViewAspect">The original tangent divisor, 1.1333334 for the game camera.</param>
/// <param name="NearPlane">The near clip distance.</param>
/// <param name="FarPlane">The far clip distance.</param>
public readonly record struct SceneCamera(
	Vector3 Position,
	Vector3 Target,
	Vector3 Up,
	int FieldOfViewAngle,
	float FieldOfViewAspect,
	float NearPlane,
	float FarPlane)
{
	/// <summary>The field-of-view angle the game camera passes to the original projection setup.</summary>
	public const int DefaultFieldOfViewAngle = 0x3555;

	/// <summary>The tangent divisor the game camera passes to the original projection setup.</summary>
	public const float DefaultFieldOfViewAspect = 1.1333334f;

	/// <summary>The near clip distance the game camera uses.</summary>
	public const float DefaultNearPlane = 1.0f;

	/// <summary>The far clip distance the game camera uses.</summary>
	public const float DefaultFarPlane = 21000.0f;

	/// <summary>
	/// Gets the game camera's default setup: origin at zero, looking down the positive depth axis, with the original field of view and clip distances.
	/// </summary>
	public static SceneCamera Default => new(new Vector3(0, 0, 0), new Vector3(1, 0, 0), new Vector3(0, 1, 0), DefaultFieldOfViewAngle, DefaultFieldOfViewAspect, DefaultNearPlane, DefaultFarPlane);

	/// <summary>Gets the vertical field of view in radians.</summary>
	public float VerticalFieldOfView => CameraProjection.CalculateVerticalFieldOfView(FieldOfViewAngle, FieldOfViewAspect);

	/// <summary>Builds the row-vector view transform for this camera.</summary>
	/// <returns>The view transform.</returns>
	public Matrix4x4 CreateView() => CameraView.CreateLookAt(Position, Target, Up);

	/// <summary>Builds the row-vector perspective projection for this camera.</summary>
	/// <returns>The projection transform.</returns>
	public Matrix4x4 CreateProjection() => CameraProjection.CreateFromAngle(FieldOfViewAngle, FieldOfViewAspect, NearPlane, FarPlane);
}
