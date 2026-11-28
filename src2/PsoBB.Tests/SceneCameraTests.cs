using PsoBB.Mathematics;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported camera, projection and model transform math against the original constants and operation order.
/// </summary>
public sealed class SceneCameraTests
{
	/// <summary>
	/// The game camera uses the original field-of-view angle, tangent divisor and clip distances.
	/// </summary>
	[Fact]
	public void DefaultCameraUsesTheGameConstants()
	{
		SceneCamera camera = SceneCamera.Default;
		Assert.Equal(0x3555, camera.FieldOfViewAngle);
		Assert.Equal(1.1333334f, camera.FieldOfViewAspect);
		Assert.Equal(1.0f, camera.NearPlane);
		Assert.Equal(21000.0f, camera.FarPlane);
	}

	/// <summary>
	/// The default field-of-view conversion lands on the original rounded vertical field of view.
	/// </summary>
	[Fact]
	public void FieldOfViewConversionMatchesTheOriginalDefault()
	{
		Assert.Equal(1.0037985f, SceneCamera.Default.VerticalFieldOfView, 6);
	}

	/// <summary>
	/// A smaller field-of-view angle uses the original small-angle arc-tangent polynomial.
	/// </summary>
	[Fact]
	public void SmallFieldOfViewUsesTheSmallAngleConversion()
	{
		Assert.Equal(0.6214538f, CameraProjection.CalculateVerticalFieldOfView(0x2000, 1.1333334f), 6);
	}

	/// <summary>
	/// The default projection keeps the original reciprocal scale, near and far layout.
	/// </summary>
	[Fact]
	public void DefaultProjectionHasTheOriginalLayout()
	{
		Matrix4x4 projection = SceneCamera.Default.CreateProjection();
		Assert.Equal(1.3666899f, projection.M11, 5);
		Assert.Equal(1.8222533f, projection.M22, 5);
		Assert.Equal(-1.0000476f, projection.M33, 5);
		Assert.Equal(-1.0f, projection.M34);
		Assert.Equal(-1.0000476f, projection.M43, 5);
		Assert.Equal(0.0f, projection.M44);
		Assert.Equal(0.0f, projection.M12);
		Assert.Equal(0.0f, projection.M21);
		Assert.Equal(0.0f, projection.M41);
	}

	/// <summary>
	/// The camera's near and far planes reach the projection's depth coefficients.
	/// </summary>
	[Fact]
	public void ProjectionUsesTheCameraClipDistances()
	{
		SceneCamera camera = new(new Vector3(0, 0, 0), new Vector3(1, 0, 0), new Vector3(0, 1, 0), 0x3555, 1.1333334f, 2.0f, 10000.0f);
		Matrix4x4 projection = camera.CreateProjection();
		float depth = 10000.0f / (2.0f - 10000.0f);
		Assert.Equal(depth, projection.M33, 5);
		Assert.Equal(depth * 2.0f, projection.M43, 5);
		Assert.Equal(-1.0f, projection.M34);
	}

	/// <summary>
	/// A camera above the origin looking down the negative depth axis produces the original row-vector view.
	/// </summary>
	[Fact]
	public void LookAtBuildsTheOriginalRowVectorView()
	{
		Matrix4x4 view = CameraView.CreateLookAt(new Vector3(0, 0, 1), new Vector3(0, 0, 0), new Vector3(0, 1, 0));
		Assert.Equal(new Matrix4x4(
			-1, 0, 0, 0,
			0, -1, 0, 0,
			0, 0, 1, 0,
			-0, -0, -1, 1), view);
	}

	/// <summary>
	/// The transformation stack scales a point, rotates it and then translates it, in the original node order.
	/// </summary>
	[Fact]
	public void TransformationStackAppliesScaleThenRotationThenTranslation()
	{
		TransformationStack stack = new();
		stack.Translate(new Vector3(1, 2, 3));
		stack.RotateEuler(0, 0x4000, 0, false);
		stack.Scale(new Vector3(2, 3, 4));
		Vector3 transformed = Transform(stack.Current, new Vector3(1, 1, 1));
		Assert.Equal(5.0f, transformed.X);
		Assert.Equal(5.0f, transformed.Y);
		Assert.Equal(1.0f, transformed.Z);
	}

	/// <summary>
	/// Pushing a copied matrix and popping it restores the parent transform exactly.
	/// </summary>
	[Fact]
	public void TransformationStackPushCopyAndPopRestoreTheParent()
	{
		TransformationStack stack = new();
		stack.Translate(new Vector3(1, 0, 0));
		Matrix4x4 parent = stack.Current;
		stack.PushCopy();
		stack.Translate(new Vector3(0, 1, 0));
		Assert.NotEqual(parent, stack.Current);
		stack.Pop();
		Assert.Equal(parent, stack.Current);
		Assert.Equal(0, stack.Depth);
	}

	/// <summary>
	/// The alternate node flag rotates Y, then X, then Z instead of the default Z, then Y, then X.
	/// </summary>
	[Fact]
	public void TransformationStackAlternateOrderChangesTheResult()
	{
		TransformationStack first = new();
		first.RotateEuler(0x2000, 0x2000, 0x2000, false);
		TransformationStack second = new();
		second.RotateEuler(0x2000, 0x2000, 0x2000, true);
		Assert.NotEqual(first.Current, second.Current);
	}

	[Fact]
	public void TransformationStackCaptureInverseInvertsCopyWithoutChangingDepth()
	{
		TransformationStack stack = new();
		stack.Translate(new Vector3(4, -5, 6));
		stack.RotateEuler(0, 0x4000, 0, false);
		Matrix4x4 original = stack.Current;
		int depthBefore = stack.Depth;

		Matrix4x4 inverse = stack.CaptureInverseCurrent();

		Assert.Equal(depthBefore, stack.Depth);
		Assert.Equal(original, stack.Current);
		Matrix4x4 product = Matrix4x4.Multiply(original, inverse);
		Assert.Equal(1.0f, product.M11, 5);
		Assert.Equal(1.0f, product.M22, 5);
		Assert.Equal(1.0f, product.M33, 5);
		Assert.Equal(1.0f, product.M44, 5);
		Assert.Equal(0.0f, product.M41, 5);
		Assert.Equal(0.0f, product.M42, 5);
		Assert.Equal(0.0f, product.M43, 5);
	}

	[Fact]
	public void CreateFieldProjectionMatchesVerticalScaleAndViewportMatrix()
	{
		float scale = CameraProjection.CreateFieldProjection(
			SceneCamera.DefaultFieldOfViewAngle,
			SceneCamera.DefaultFieldOfViewAspect,
			SceneCamera.DefaultNearPlane,
			SceneCamera.DefaultFarPlane,
			480,
			out Matrix4x4 projection,
			out Matrix4x4 viewportProjection);

		Matrix4x4 expected = SceneCamera.Default.CreateProjection();
		Assert.Equal(expected, projection);
		Assert.Equal(480 * expected.M22 * 0.5f, scale, 5);
		Assert.Equal(expected.M11 * 0.5f, viewportProjection.M11, 5);
		Assert.Equal(expected.M22 * -0.5f, viewportProjection.M22, 5);
	}

	private static Vector3 Transform(Matrix4x4 matrix, Vector3 point) => new(
		point.X * matrix.M11 + point.Y * matrix.M21 + point.Z * matrix.M31 + matrix.M41,
		point.X * matrix.M12 + point.Y * matrix.M22 + point.Z * matrix.M32 + matrix.M42,
		point.X * matrix.M13 + point.Y * matrix.M23 + point.Z * matrix.M33 + matrix.M43);
}
