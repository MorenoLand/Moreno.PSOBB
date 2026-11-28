using PsoBB.Mathematics;
using PsoBB.Models;

namespace PsoBB.Rendering;

/// <summary>
/// The fixed-depth matrix stack the original uses for model nodes: a node copies the current matrix, then translates, rotates and scales its copy.
/// </summary>
public sealed class TransformationStack
{
	/// <summary>The number of matrices the original stack holds.</summary>
	public const int MaximumDepth = 128;

	private readonly Matrix4x4[] _matrices = new Matrix4x4[MaximumDepth + 1];
	private int _depth;

	/// <summary>Creates a stack with an identity matrix at depth zero.</summary>
	public TransformationStack() => _matrices[0] = Matrix4x4.Identity;

	/// <summary>Gets the matrix at the current depth.</summary>
	public Matrix4x4 Current => _matrices[_depth];

	/// <summary>Gets the current depth, zero at the initial matrix.</summary>
	public int Depth => _depth;

	/// <summary>
	/// Copies the matrix at the current stack depth into <paramref name="destination"/>.
	/// </summary>
	/// <param name="destination">Receives the current top matrix.</param>
	[Original(0x00831650)]
	public void CopyCurrentTo(out Matrix4x4 destination) => destination = _matrices[_depth];

	/// <summary>
	/// Overwrites the matrix at the current stack depth with <paramref name="transform"/>.
	/// </summary>
	/// <param name="transform">The replacement transform matrix.</param>
	[Original(0x0083B410)]
	public void ReplaceCurrent(Matrix4x4 transform) => _matrices[_depth] = transform;

	/// <summary>
	/// Pushes a copy of the current matrix, inverts it in place, reads back the result, and pops the copy.
	/// </summary>
	/// <returns>The inverted transform matrix.</returns>
	[Original(0x00782984)]
	public Matrix4x4 CaptureInverseCurrent()
	{
		PushCopy();
		Matrix4x4 matrix = Current;
		Matrix4x4.TryInvert(ref matrix);
		ReplaceCurrent(matrix);
		CopyCurrentTo(out Matrix4x4 result);
		Pop();
		return result;
	}

	/// <summary>
	/// Multiplies the matrix at the current stack depth in place by <paramref name="transform"/>.
	/// </summary>
	/// <param name="transform">The transform matrix applied after the current stack matrix.</param>
	[Original(0x0083A668)]
	public void MultiplyCurrent(Matrix4x4 transform)
	{
		CopyCurrentTo(out Matrix4x4 current);
		MultiplyInto(ref current, transform);
		ReplaceCurrent(current);
	}

	/// <summary>
	/// Multiplies <paramref name="destination"/> in place by <paramref name="transform"/> matching the original summation order.
	/// </summary>
	/// <param name="destination">The matrix updated in place.</param>
	/// <param name="transform">The right-hand matrix operand.</param>
	public static void MultiplyInto(ref Matrix4x4 destination, Matrix4x4 transform) =>
		destination = Matrix4x4.Multiply(destination, transform);

	/// <summary>
	/// Transforms <paramref name="point"/> by the matrix at the top of this stack.
	/// </summary>
	/// <param name="point">The 3D point to transform.</param>
	/// <returns>The transformed point.</returns>
	[Original(0x00835C3C)]
	public Vector3 TransformPosition(Vector3 point) => _matrices[_depth].TransformPosition(point);

	/// <summary>
	/// Copies the current matrix to the next depth, which is how a model node starts a child transform.
	/// </summary>
	[Original(0x0082D7B0, "push_transformation_matrix_copy_head")]
	public void PushCopy() => Push(Current);

	/// <summary>
	/// Pushes a supplied matrix when the stack is not full.
	/// </summary>
	/// <param name="transform">The matrix to push.</param>
	[Original(0x0082D990, "push_transformation_matrix")]
	public void Push(Matrix4x4 transform)
	{
		if (_depth >= MaximumDepth)
			return;
		_matrices[++_depth] = transform;
	}

	/// <summary>
	/// Pops the current matrix when the stack is above its initial depth.
	/// </summary>
	[Original(0x0082DA80, "pop_transformation_matrix")]
	public void Pop()
	{
		if (_depth > 0)
			_depth--;
	}

	/// <summary>
	/// Applies a translation before the current transform, adding it through the three basis rows.
	/// </summary>
	/// <param name="translation">The translation to apply.</param>
	[Original(0x0082D838, "matrix_translation")]
	public void Translate(Vector3 translation) => _matrices[_depth] = _matrices[_depth].Translate(translation);

	/// <summary>
	/// Applies the original Euler rotation around Z, then Y, then X, or Y, then X, then Z when
	/// <paramref name="alternateOrder"/> is set.
	/// </summary>
	/// <param name="x">The rotation around X in 16-bit turn units.</param>
	/// <param name="y">The rotation around Y in 16-bit turn units.</param>
	/// <param name="z">The rotation around Z in 16-bit turn units.</param>
	/// <param name="alternateOrder">Whether to use the original node flag's Y, X, Z order.</param>
	[Original(0x00830DF8, "matrix_rotation_euler3")]
	public void RotateEuler(int x, int y, int z, bool alternateOrder)
	{
		if (alternateOrder)
		{
			RotateY(y);
			RotateX(x);
			RotateZ(z);
		}
		else
		{
			RotateZ(z);
			RotateY(y);
			RotateX(x);
		}
	}

	/// <summary>
	/// Applies the original quaternion rotation matrix before the current transform.
	/// </summary>
	/// <param name="quaternion">The quaternion rotation.</param>
	[Original(0x008431A4, "matrix_rotation_quaternion")]
	public void RotateQuaternion(NinjaQuaternion quaternion)
	{
		double x = quaternion.X;
		double y = quaternion.Y;
		double z = quaternion.Z;
		double w = quaternion.W;
		double baseValue = (w + w) * w + -1.0;
		Matrix4x4 rotation = new(
			(float)((x + x) * x + baseValue),
			(float)((y * x + w * z) * 2.0),
			(float)((z * x - w * y) * 2.0),
			0.0f,
			(float)((x * y - w * z) * 2.0),
			(float)((y + y) * y + baseValue),
			(float)((z * y + w * x) * 2.0),
			0.0f,
			(float)((w * y + x * z) * 2.0),
			(float)((y * z - w * x) * 2.0),
			(float)(baseValue + z * (z + z)),
			0.0f,
			0.0f,
			0.0f,
			0.0f,
			1.0f);
		_matrices[_depth] = Matrix4x4.Multiply(rotation, _matrices[_depth]);
	}

	/// <summary>
	/// Scales the three basis rows of the current matrix, leaving its translation row unchanged.
	/// </summary>
	/// <param name="scale">The scale factors.</param>
	[Original(0x00831290, "scale_transform_stack_head")]
	public void Scale(Vector3 scale) => _matrices[_depth] = _matrices[_depth].ScaleRows(scale.X, scale.Y, scale.Z);

	private void RotateZ(int angle)
	{
		if (angle == 0)
			return;
		double sine = FixedPointTrigonometry.Sine(angle);
		double cosine = FixedPointTrigonometry.Cosine(angle);
		Matrix4x4 m = _matrices[_depth];
		_matrices[_depth] = m with
		{
			M11 = (float)(cosine * m.M11 + sine * m.M21),
			M12 = (float)(cosine * m.M12 + sine * m.M22),
			M13 = (float)(cosine * m.M13 + sine * m.M23),
			M14 = (float)(cosine * m.M14 + sine * m.M24),
			M21 = (float)(m.M21 * cosine - sine * m.M11),
			M22 = (float)(m.M22 * cosine - sine * m.M12),
			M23 = (float)(m.M23 * cosine - sine * m.M13),
			M24 = (float)(m.M24 * cosine - sine * m.M14),
		};
	}

	private void RotateY(int angle)
	{
		if (angle == 0)
			return;
		double sine = FixedPointTrigonometry.Sine(angle);
		double cosine = FixedPointTrigonometry.Cosine(angle);
		Matrix4x4 m = _matrices[_depth];
		_matrices[_depth] = m with
		{
			M11 = (float)(-sine * m.M31 + cosine * m.M11),
			M12 = (float)(cosine * m.M12 - sine * m.M32),
			M13 = (float)(cosine * m.M13 - sine * m.M33),
			M14 = (float)(cosine * m.M14 - sine * m.M34),
			M31 = (float)(m.M11 * sine + m.M31 * cosine),
			M32 = (float)(m.M12 * sine + m.M32 * cosine),
			M33 = (float)(m.M33 * cosine + m.M13 * sine),
			M34 = (float)(m.M14 * sine + m.M34 * cosine),
		};
	}

	private void RotateX(int angle)
	{
		if (angle == 0)
			return;
		double sine = FixedPointTrigonometry.Sine(angle);
		double cosine = FixedPointTrigonometry.Cosine(angle);
		Matrix4x4 m = _matrices[_depth];
		_matrices[_depth] = m with
		{
			M21 = (float)(cosine * m.M21 + sine * m.M31),
			M22 = (float)(cosine * m.M22 + sine * m.M32),
			M23 = (float)(cosine * m.M23 + sine * m.M33),
			M24 = (float)(cosine * m.M24 + sine * m.M34),
			M31 = (float)(m.M31 * cosine - sine * m.M21),
			M32 = (float)(m.M32 * cosine - sine * m.M22),
			M33 = (float)(m.M33 * cosine - sine * m.M23),
			M34 = (float)(m.M34 * cosine - sine * m.M24),
		};
	}
}
