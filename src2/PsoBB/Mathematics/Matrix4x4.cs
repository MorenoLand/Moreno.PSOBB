namespace PsoBB.Mathematics;

/// <summary>
/// A 4x4 single-precision matrix stored in row-major order and applied to row vectors, so a point
/// is transformed as <c>point * matrix</c> and the translation occupies the fourth row.
/// </summary>
/// <param name="M11">Row one, column one.</param>
/// <param name="M12">Row one, column two.</param>
/// <param name="M13">Row one, column three.</param>
/// <param name="M14">Row one, column four.</param>
/// <param name="M21">Row two, column one.</param>
/// <param name="M22">Row two, column two.</param>
/// <param name="M23">Row two, column three.</param>
/// <param name="M24">Row two, column four.</param>
/// <param name="M31">Row three, column one.</param>
/// <param name="M32">Row three, column two.</param>
/// <param name="M33">Row three, column three.</param>
/// <param name="M34">Row three, column four.</param>
/// <param name="M41">Row four, column one.</param>
/// <param name="M42">Row four, column two.</param>
/// <param name="M43">Row four, column three.</param>
/// <param name="M44">Row four, column four.</param>
public readonly record struct Matrix4x4(
	float M11, float M12, float M13, float M14,
	float M21, float M22, float M23, float M24,
	float M31, float M32, float M33, float M34,
	float M41, float M42, float M43, float M44)
{
	/// <summary>
	/// Gets the identity transform, which leaves every row vector unchanged.
	/// </summary>
	public static Matrix4x4 Identity => new(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);

	/// <summary>
	/// Returns the product of two matrices, applying the left operand before the right.
	/// </summary>
	/// <param name="left">The matrix applied first.</param>
	/// <param name="right">The matrix applied second.</param>
	/// <returns>The combined matrix.</returns>
	[Original(0x00831308)]
	public static Matrix4x4 Multiply(Matrix4x4 left, Matrix4x4 right) => new(
		(float)((double)left.M11 * right.M11 + (double)left.M12 * right.M21 + (double)left.M13 * right.M31 + (double)left.M14 * right.M41),
		(float)((double)left.M11 * right.M12 + (double)left.M12 * right.M22 + (double)left.M13 * right.M32 + (double)left.M14 * right.M42),
		(float)((double)left.M11 * right.M13 + (double)left.M12 * right.M23 + (double)left.M13 * right.M33 + (double)left.M14 * right.M43),
		(float)((double)left.M11 * right.M14 + (double)left.M12 * right.M24 + (double)left.M13 * right.M34 + (double)left.M14 * right.M44),
		(float)((double)left.M21 * right.M11 + (double)left.M22 * right.M21 + (double)left.M23 * right.M31 + (double)left.M24 * right.M41),
		(float)((double)left.M21 * right.M12 + (double)left.M22 * right.M22 + (double)left.M23 * right.M32 + (double)left.M24 * right.M42),
		(float)((double)left.M21 * right.M13 + (double)left.M22 * right.M23 + (double)left.M23 * right.M33 + (double)left.M24 * right.M43),
		(float)((double)left.M21 * right.M14 + (double)left.M22 * right.M24 + (double)left.M23 * right.M34 + (double)left.M24 * right.M44),
		(float)((double)left.M31 * right.M11 + (double)left.M32 * right.M21 + (double)left.M33 * right.M31 + (double)left.M34 * right.M41),
		(float)((double)left.M31 * right.M12 + (double)left.M32 * right.M22 + (double)left.M33 * right.M32 + (double)left.M34 * right.M42),
		(float)((double)left.M31 * right.M13 + (double)left.M32 * right.M23 + (double)left.M33 * right.M33 + (double)left.M34 * right.M43),
		(float)((double)left.M31 * right.M14 + (double)left.M32 * right.M24 + (double)left.M33 * right.M34 + (double)left.M34 * right.M44),
		(float)((double)left.M41 * right.M11 + (double)left.M42 * right.M21 + (double)left.M43 * right.M31 + (double)left.M44 * right.M41),
		(float)((double)left.M41 * right.M12 + (double)left.M42 * right.M22 + (double)left.M43 * right.M32 + (double)left.M44 * right.M42),
		(float)((double)left.M41 * right.M13 + (double)left.M42 * right.M23 + (double)left.M43 * right.M33 + (double)left.M44 * right.M43),
		(float)((double)left.M41 * right.M14 + (double)left.M42 * right.M24 + (double)left.M43 * right.M34 + (double)left.M44 * right.M44));

	/// <summary>
	/// Returns the matrix with a translation applied before its existing transform, which adds the
	/// translation through the three basis rows to the fourth row.
	/// </summary>
	/// <param name="translation">The translation to apply.</param>
	/// <returns>The translated matrix.</returns>
	[Original(0x008316B4)]
	public Matrix4x4 Translate(Vector3 translation)
	{
		double x = translation.X;
		double y = translation.Y;
		double z = translation.Z;
		return this with
		{
			M41 = (float)((double)M11 * x + M41 + (double)M21 * y + (double)M31 * z),
			M42 = (float)((double)M32 * z + ((double)M12 * x + M42) + (double)M22 * y),
			M43 = (float)(((double)M13 * x + M43) + (double)M23 * y + (double)M33 * z),
			M44 = (float)((double)M14 * x + M44 + (double)M24 * y + (double)M34 * z),
		};
	}

	/// <summary>
	/// Transforms a sequence of points into another sequence, writing three components per point.
	/// </summary>
	/// <param name="source">The points to transform.</param>
	/// <param name="destination">The transformed points; it may be the same span as the source.</param>
	[Original(0x0082F940)]
	public void TransformPositions(ReadOnlySpan<Vector3> source, Span<Vector3> destination)
	{
		for (int index = 0; index < source.Length; index++)
		{
			Vector3 point = source[index];
			destination[index] = new Vector3(
				(float)((double)M11 * point.X + M41 + (double)M21 * point.Y + (double)M31 * point.Z),
				(float)((double)M12 * point.X + M42 + (double)M22 * point.Y + (double)M32 * point.Z),
				(float)((double)M33 * point.Z + (double)M23 * point.Y + (double)M13 * point.X + M43));
		}
	}

	/// <summary>
	/// Returns the matrix with its first three rows scaled by the three factors, leaving the
	/// translation row unchanged.
	/// </summary>
	/// <param name="first">The factor for the first row.</param>
	/// <param name="second">The factor for the second row.</param>
	/// <param name="third">The factor for the third row.</param>
	/// <returns>The scaled matrix.</returns>
	[Original(0x0082FA0C)]
	public Matrix4x4 ScaleRows(float first, float second, float third) => this with
	{
		M11 = (float)((double)M11 * first), M12 = (float)((double)M12 * first), M13 = (float)((double)M13 * first), M14 = (float)((double)M14 * first),
		M21 = (float)((double)M21 * second), M22 = (float)((double)M22 * second), M23 = (float)((double)M23 * second), M24 = (float)((double)M24 * second),
		M31 = (float)((double)M31 * third), M32 = (float)((double)M32 * third), M33 = (float)((double)M33 * third), M34 = (float)((double)M34 * third),
	};

	/// <summary>
	/// Transforms a direction vector by the upper three basis rows, ignoring translation.
	/// </summary>
	/// <param name="direction">The direction vector to transform.</param>
	/// <returns>The transformed direction vector.</returns>
	[Original(0x0083A610)]
	public Vector3 TransformDirection(Vector3 direction) => new(
		(float)((double)M11 * direction.X + (double)M21 * direction.Y + (double)M31 * direction.Z),
		(float)((double)M12 * direction.X + (double)M22 * direction.Y + (double)M32 * direction.Z),
		(float)(((double)M13 * direction.X + (double)M23 * direction.Y) + (double)M33 * direction.Z));

	/// <summary>
	/// Applies a rotation around the vertical axis before the current matrix.
	/// </summary>
	/// <param name="angle">The rotation in 16-bit turn units.</param>
	/// <returns>The rotated matrix.</returns>
	[Original(0x0082D8BC)]
	public Matrix4x4 RotateY(int angle)
	{
		(float sine, float cosine) = FixedPointTrigonometry.SineCosine(angle);
		return this with
		{
			M11 = (float)((double)cosine * M11 + -(double)sine * M31),
			M12 = (float)((double)cosine * M12 + -(double)sine * M32),
			M13 = (float)((double)cosine * M13 + -(double)sine * M33),
			M14 = (float)((double)cosine * M14 + -(double)sine * M34),
			M31 = (float)((double)M11 * sine + (double)M31 * cosine),
			M32 = (float)((double)M12 * sine + (double)M32 * cosine),
			M33 = (float)((double)M33 * cosine + (double)M13 * sine),
			M34 = (float)((double)M14 * sine + (double)M34 * cosine),
		};
	}

	/// <summary>
	/// Applies a rotation around the horizontal axis before the current matrix.
	/// </summary>
	/// <param name="angle">The rotation in 16-bit turn units.</param>
	/// <returns>The rotated matrix.</returns>
	[Original(0x0082E9E4)]
	public Matrix4x4 RotateX(int angle)
	{
		(float sine, float cosine) = FixedPointTrigonometry.SineCosine(angle);
		return this with
		{
			M21 = (float)((double)cosine * M21 + (double)sine * M31),
			M22 = (float)((double)cosine * M22 + (double)sine * M32),
			M23 = (float)((double)cosine * M23 + (double)sine * M33),
			M24 = (float)((double)cosine * M24 + (double)sine * M34),
			M31 = (float)((double)M31 * cosine + -(double)sine * M21),
			M32 = (float)((double)M32 * cosine + -(double)sine * M22),
			M33 = (float)((double)M33 * cosine + -(double)sine * M23),
			M34 = (float)((double)M34 * cosine + -(double)sine * M24),
		};
	}
}
