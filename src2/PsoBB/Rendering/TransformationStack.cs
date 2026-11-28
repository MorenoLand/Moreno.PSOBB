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
	/// Rotates the matrix at the current stack depth in place around an arbitrary 3D axis.
	/// </summary>
	/// <param name="axis">The rotation axis vector.</param>
	/// <param name="angle">The rotation angle in 16-bit turn units.</param>
	[Original(0x0083CDB0)]
	public void RotateAxis(Vector3 axis, int angle) => RotateAxis(ref _matrices[_depth], axis, angle);

	/// <summary>
	/// Rotates <paramref name="matrix"/> in place around <paramref name="axis"/> matching the
	/// client's decomposed basis transformation order.
	/// </summary>
	/// <param name="matrix">The matrix updated in place.</param>
	/// <param name="axis">The rotation axis vector.</param>
	/// <param name="angle">The rotation angle in 16-bit turn units.</param>
	public static void RotateAxis(ref Matrix4x4 matrix, Vector3 axis, int angle)
	{
		float sx = axis.X;
		float sy = axis.Y;
		float cz = axis.Z;
		float yzLengthSquared = (float)((double)sy * sy + (double)cz * cz);
		double yzLength = yzLengthSquared >= 0.0f
			? Math.Sqrt(yzLengthSquared)
			: -Math.Sqrt(-yzLengthSquared);
		float cy = 0.0f;

		if (cz == 0.0f && sy != 0.0f)
		{
			sy = sy <= 0.0f ? -1.0f : 1.0f;
			cz = 0.0f;
		}
		else if (sy == 0.0f)
		{
			sy = 0.0f;
			cz = cz <= 0.0f ? -1.0f : 1.0f;
		}
		else
		{
			double invYz = 1.0f / yzLength;
			sy = (float)(sy * invYz);
			cz = (float)(invYz * cz);
		}

		if (cy == yzLength && sx != cy)
		{
			sx = sx <= cy ? -1.0f : 1.0f;
		}
		else if (sx == cy)
		{
			sx = 0.0f;
			cy = yzLength <= cy ? -1.0f : 1.0f;
		}
		else
		{
			cy = (float)yzLength;
		}

		float negSy = -sy;
		float m10F = (float)((double)matrix.M21 * sy + (double)matrix.M31 * cz);
		double m10 = (double)matrix.M21 * sy + (double)matrix.M31 * cz;
		double m11 = (double)matrix.M32 * cz + (double)sy * matrix.M22;
		float m11F = (float)m11;
		double m12 = (double)matrix.M33 * cz + (double)matrix.M23 * sy;
		float m12F = (float)m12;
		double m13 = (double)cz * matrix.M34 + (double)matrix.M24 * sy;

		float r10 = (float)((double)matrix.M31 * negSy + (double)cz * matrix.M21);
		float r11 = (float)((double)matrix.M32 * negSy + (double)matrix.M22 * cz);
		float r12 = (float)((double)matrix.M33 * negSy + (double)cz * matrix.M23);
		float r13 = (float)((double)negSy * matrix.M34 + (double)cz * matrix.M24);

		float r00In = matrix.M11;
		float r01In = matrix.M12;
		float r02In = matrix.M13;
		float r03In = matrix.M14;
		float negSx = -sx;
		double cyD = cy;

		float r00 = (float)(m10 * negSx + cyD * r00In);
		float r01 = (float)(m11 * negSx + cyD * r01In);
		float r02 = (float)(m12 * negSx + cyD * r02In);
		float r03 = (float)(negSx * m13 + cyD * r03In);
		float r20 = (float)((double)m10F * cyD + (double)r00In * sx);
		float r21 = (float)((double)m11F * cyD + (double)r01In * sx);
		float r22 = (float)((double)r02In * sx + cyD * m12F);
		float r23 = (float)(m13 * cyD + (double)r03In * sx);

		(float sinAngle, float cosAngle) = FixedPointTrigonometry.SineCosine(angle);

		double c00 = (double)sinAngle * r10 + (double)cosAngle * r00;
		double c01 = (double)sinAngle * r11 + (double)cosAngle * r01;
		float c01F = (float)c01;
		double c02 = (double)sinAngle * r12 + (double)cosAngle * r02;
		float c02F = (float)c02;
		double c03 = (double)sinAngle * r13 + (double)cosAngle * r03;
		float c03F = (float)c03;

		float b10 = (float)((double)r00 * -sinAngle + (double)r10 * cosAngle);
		float b11 = (float)((double)r11 * cosAngle + (double)r01 * -sinAngle);
		float b12 = (float)((double)r12 * cosAngle + (double)r02 * -sinAngle);
		float b13 = (float)((double)r13 * cosAngle + (double)r03 * -sinAngle);

		float out00 = (float)((double)sx * r20 + (double)cy * c00);
		float out01 = (float)((double)sx * r21 + c01 * cy);
		float out02 = (float)((double)sx * r22 + (double)cy * c02F);
		float out03 = (float)((double)sx * r23 + (double)cy * c03F);

		double t10 = (double)r20 * cy + c00 * negSx;
		float t10F = (float)t10;
		double t11 = (double)r21 * cy + (double)c01F * negSx;
		float t11F = (float)t11;
		double t12 = (double)r22 * cy + (double)c02F * negSx;
		float t12F = (float)t12;
		double t13 = (double)r23 * cy + (double)c03F * negSx;

		matrix = new Matrix4x4(
			out00, out01, out02, out03,
			(float)(t10 * sy + (double)cz * b10),
			(float)(t11 * sy + (double)cz * b11),
			(float)((double)sy * t12 + (double)cz * b12),
			(float)((double)sy * t13 + (double)cz * b13),
			(float)((double)t10F * cz + (double)b10 * negSy),
			(float)((double)t11F * cz + (double)b11 * negSy),
			(float)((double)b12 * negSy + (double)cz * t12F),
			(float)(t13 * cz + (double)b13 * negSy),
			matrix.M41,
			matrix.M42,
			matrix.M43,
			matrix.M44);
	}

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
	/// Replaces the matrix at the current stack depth with the identity matrix.
	/// </summary>
	[Original(0x00830CD8)]
	public void LoadIdentity() => _matrices[_depth] = Matrix4x4.Identity;

	/// <summary>
	/// Replaces <paramref name="matrix"/> with the identity matrix.
	/// </summary>
	/// <param name="matrix">The matrix to reset to identity.</param>
	public static void LoadIdentity(ref Matrix4x4 matrix) => matrix = Matrix4x4.Identity;

	/// <summary>
	/// Applies a translation before the current transform, adding it through the three basis rows.
	/// </summary>
	/// <param name="translation">The translation to apply.</param>
	[Original(0x0082D838, "matrix_translation")]
	public void Translate(Vector3 translation) => _matrices[_depth] = _matrices[_depth].Translate(translation);

	/// <summary>
	/// Applies a scalar component translation before the current stack matrix.
	/// </summary>
	/// <param name="x">The X translation offset.</param>
	/// <param name="y">The Y translation offset.</param>
	/// <param name="z">The Z translation offset.</param>
	[Original(0x00830B74)]
	public void Translate(float x, float y, float z) =>
		_matrices[_depth] = _matrices[_depth].Translate(new Vector3(x, y, z));

	/// <summary>
	/// Applies a scalar component translation to <paramref name="matrix"/> in place.
	/// </summary>
	/// <param name="matrix">The matrix updated in place.</param>
	/// <param name="x">The X translation offset.</param>
	/// <param name="y">The Y translation offset.</param>
	/// <param name="z">The Z translation offset.</param>
	public static void Translate(ref Matrix4x4 matrix, float x, float y, float z) =>
		matrix = matrix.Translate(new Vector3(x, y, z));

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
