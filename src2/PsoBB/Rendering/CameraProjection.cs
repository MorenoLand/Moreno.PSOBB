using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Builds the original perspective projection from a field-of-view angle in 16-bit turn units or from an already converted vertical field of view.
/// </summary>
public static class CameraProjection
{
	/// <summary>The projection aspect the original hard-codes for the perspective transform.</summary>
	public const float ProjectionAspect = 1.3333334f;

	private const double TwoPi = 6.283184051513672;
	private const double TurnScale = 65536.0;

	/// <summary>
	/// Converts a camera field-of-view angle to the vertical field of view in radians, following the original tangent, arc-tangent and 16-bit turn rounding.
	/// </summary>
	/// <param name="fieldOfViewAngle">The field-of-view angle in 16-bit turn units.</param>
	/// <param name="fieldOfViewAspect">The original tangent divisor, 1.1333334 for the game camera.</param>
	/// <returns>The vertical field of view in radians.</returns>
	[Original(0x0082EDC8, "unknown_set_d3d_proj_from_camera")]
	public static float CalculateVerticalFieldOfView(int fieldOfViewAngle, float fieldOfViewAspect)
	{
		if (!(fieldOfViewAspect > 0.0f))
			throw new ArgumentOutOfRangeException(nameof(fieldOfViewAspect), fieldOfViewAspect, "The field-of-view aspect must be positive.");
		int angle = unchecked(fieldOfViewAngle * 85) / 200;
		float sine = (float)FixedPointTrigonometry.Sine(angle);
		float cosine = (float)FixedPointTrigonometry.Cosine(angle);
		double tangent = (double)sine / cosine / fieldOfViewAspect;
		float arcTangent = FastAtan(tangent);
		int steps = (int)Math.Round(arcTangent * TurnScale / TwoPi, MidpointRounding.ToEven);
		return (float)(steps * 2) * (float)TwoPi / (float)TurnScale;
	}

	/// <summary>
	/// Builds the original perspective projection from a camera field-of-view angle.
	/// </summary>
	/// <param name="fieldOfViewAngle">The field-of-view angle in 16-bit turn units.</param>
	/// <param name="fieldOfViewAspect">The original tangent divisor, 1.1333334 for the game camera.</param>
	/// <param name="nearPlane">The near clip distance.</param>
	/// <param name="farPlane">The far clip distance.</param>
	/// <returns>The row-vector projection transform.</returns>
	[Original(0x0082EEA0, "SetupD3DProjectionMatrix_0082eea0")]
	public static Matrix4x4 CreateFromAngle(int fieldOfViewAngle, float fieldOfViewAspect, float nearPlane, float farPlane) =>
		Create(CalculateVerticalFieldOfView(fieldOfViewAngle, fieldOfViewAspect), ProjectionAspect, nearPlane, farPlane);

	/// <summary>
	/// Builds the original perspective projection from a full vertical field of view, using the half angle for the cotangent.
	/// </summary>
	/// <param name="verticalFieldOfView">The full vertical field of view in radians.</param>
	/// <param name="aspect">The horizontal-to-vertical aspect divisor.</param>
	/// <param name="nearPlane">The near clip distance.</param>
	/// <param name="farPlane">The far clip distance.</param>
	/// <returns>The row-vector projection transform.</returns>
	[Original(0x00892565, "create_d3d_projection_matrix")]
	public static Matrix4x4 Create(float verticalFieldOfView, float aspect, float nearPlane, float farPlane)
	{
		if (!(aspect > 0.0f))
			throw new ArgumentOutOfRangeException(nameof(aspect), aspect, "The aspect must be positive.");
		if (!(nearPlane > 0.0f))
			throw new ArgumentOutOfRangeException(nameof(nearPlane), nearPlane, "The near plane must be positive.");
		if (!(farPlane > nearPlane))
			throw new ArgumentOutOfRangeException(nameof(farPlane), farPlane, "The far plane must be beyond the near plane.");
		float halfAngle = verticalFieldOfView * 0.5f;
		float sine = (float)Math.Sin(halfAngle);
		float cosine = (float)Math.Cos(halfAngle);
		float cotangent = cosine / sine;
		float depth = farPlane / (nearPlane - farPlane);
		return new Matrix4x4(
			cotangent / aspect, 0, 0, 0,
			0, cotangent, 0, 0,
			0, 0, depth, -1,
			0, 0, depth * nearPlane, 0);
	}

	private static float FastAtan(double value)
	{
		double x = value;
		double absolute = Math.Abs(x);
		if (absolute < 0.1875)
			return (float)value;
		double squared = x * x;
		if (absolute < 0.5)
			return (float)((-0.33333333333333331 * squared + 0.19999999999999482) * squared * x + x);
		double fourth = squared * squared;
		if (absolute < 1.0)
		{
			double numerator = (0.11110001463378208 * fourth + 0.19999999999999482) * fourth +
				(-0.14285714243385705 * fourth - 0.33333333333333331) * squared;
			return (float)(numerator * x + x);
		}
		if (absolute <= 1.25)
		{
			double numerator = ((0.076728086549656752 * fourth + 0.11111111100272991) * fourth - 0.14285714285711806) * fourth +
				((-0.090908876807569164 * fourth + 0.20000000000000001) * fourth - 0.33333333333333331) * squared;
			return (float)(numerator * x + x);
		}
		return (float)Math.Atan(x);
	}
}
