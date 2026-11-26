namespace PsoBB.Mathematics;

/// <summary>
/// A three-component vector of 32-bit floats.
/// </summary>
/// <param name="X">The first component.</param>
/// <param name="Y">The second component.</param>
/// <param name="Z">The third component.</param>
public readonly record struct Vector3(float X, float Y, float Z)
{
	/// <summary>
	/// Returns the Euclidean length, rounding the sum of squares to a float before the square
	/// root, as the original does.
	/// </summary>
	/// <returns>The vector length.</returns>
	[Original(0x0083173C)]
	public float Length() => (float)Length64();

	/// <summary>
	/// Returns the squared length, keeping the sum in the wider intermediate precision.
	/// </summary>
	/// <returns>The sum of the squared components.</returns>
	[Original(0x0082DEF4)]
	public double LengthSquared() => ExactSum((double)X * X, (double)Y * Y, (double)Z * Z);

	/// <summary>
	/// Returns the squared distance from this vector to another, keeping the sum in the wider
	/// intermediate precision.
	/// </summary>
	/// <param name="other">The vector to measure to.</param>
	/// <returns>The squared distance.</returns>
	[Original(0x007A8C28)]
	public double DistanceSquared(Vector3 other)
	{
		double y = (double)other.Y - Y;
		double x = (double)other.X - X;
		double z = (double)other.Z - Z;
		return y * y + x * x + z * z;
	}

	/// <summary>
	/// Returns the squared distance from this vector to another in the horizontal plane.
	/// </summary>
	/// <param name="other">The vector to measure to.</param>
	/// <returns>The squared horizontal distance.</returns>
	[Original(0x007A9180)]
	public double PlanarDistanceSquared(Vector3 other)
	{
		double x = (double)other.X - X;
		double z = (double)other.Z - Z;
		return x * x + z * z;
	}

	/// <summary>
	/// Returns the sum of two vectors.
	/// </summary>
	/// <param name="left">The first vector.</param>
	/// <param name="right">The second vector.</param>
	/// <returns>The component-wise sum.</returns>
	[Original(0x007A8C04)]
	public static Vector3 Add(Vector3 left, Vector3 right) =>
		new(left.X + right.X, left.Y + right.Y, left.Z + right.Z);

	/// <summary>
	/// Returns the difference from an origin to a value.
	/// </summary>
	/// <param name="value">The vector to subtract the origin from.</param>
	/// <param name="origin">The vector to subtract.</param>
	/// <returns>The component-wise difference.</returns>
	[Original(0x007A8C4C)]
	public static Vector3 Subtract(Vector3 value, Vector3 origin) =>
		new(value.X - origin.X, value.Y - origin.Y, value.Z - origin.Z);

	/// <summary>
	/// Normalizes a vector in place when its length is positive and returns that length.
	/// </summary>
	/// <param name="value">The vector to normalize.</param>
	/// <returns>The original length.</returns>
	[Original(0x0082DF08)]
	public static double Normalize(ref Vector3 value)
	{
		double length = value.Length64();
		if (length > 0.0)
		{
			double scale = 1.0 / length;
			value = new Vector3((float)(value.X * scale), (float)(value.Y * scale), (float)(value.Z * scale));
		}
		return length;
	}

	/// <summary>
	/// Normalizes a vector in place when its squared length is at least one ten-billionth, the
	/// threshold below which the original leaves it unchanged.
	/// </summary>
	/// <param name="value">The vector to normalize.</param>
	/// <returns><see langword="true"/> when the vector was normalized.</returns>
	[Original(0x007A9158)]
	public static bool TryNormalize(ref Vector3 value)
	{
		const float MinimumSquaredLength = 9.999999439624929e-11f;
		if (!(value.LengthSquared() >= MinimumSquaredLength))
			return false;
		Normalize(ref value);
		return true;
	}

	/// <summary>
	/// Returns whether any component is an infinity or a NaN, recognized by its all-ones exponent.
	/// </summary>
	/// <returns><see langword="true"/> when a component is not finite.</returns>
	[Original(0x007A8BA0)]
	public bool HasNonFiniteComponent()
	{
		const uint ExponentMask = 0x7F800000u;
		const uint InfiniteExponent = 0x7F800000u;
		return (BitConverter.SingleToUInt32Bits(X) & ExponentMask) == InfiniteExponent
			|| (BitConverter.SingleToUInt32Bits(Y) & ExponentMask) == InfiniteExponent
			|| (BitConverter.SingleToUInt32Bits(Z) & ExponentMask) == InfiniteExponent;
	}

	/// <summary>
	/// Returns whether a squared length lies strictly inside the original zero tolerance of one
	/// hundred-thousandth in either direction; NaN is outside it.
	/// </summary>
	/// <param name="squaredLength">The squared length to test.</param>
	/// <returns><see langword="true"/> when the value is within the tolerance.</returns>
	[Original(0x007A96DC)]
	public static bool IsWithinZeroTolerance(double squaredLength) =>
		squaredLength > -1e-5f && squaredLength < 1e-5f;

	/// <summary>
	/// Builds the unit normal of a triangle, returning false and leaving the normal unchanged when
	/// the triangle is degenerate.
	/// </summary>
	/// <param name="first">The first triangle corner.</param>
	/// <param name="second">The second triangle corner.</param>
	/// <param name="third">The third triangle corner.</param>
	/// <param name="normal">The unit normal, written only on success.</param>
	/// <returns><see langword="true"/> when a normal was built.</returns>
	[Original(0x007A9618)]
	public static bool TryTriangleNormal(Vector3 first, Vector3 second, Vector3 third, ref Vector3 normal)
	{
		double edge1X = (double)second.X - first.X;
		double edge1Y = (double)second.Y - first.Y;
		double edge1Z = (double)second.Z - first.Z;
		double edge2X = (double)third.X - first.X;
		double edge2Y = (double)third.Y - first.Y;
		double edge2Z = (double)third.Z - first.Z;
		double x = edge1Y * edge2Z - edge1Z * edge2Y;
		double y = edge1Z * edge2X - edge1X * edge2Z;
		double z = edge1X * edge2Y - edge1Y * edge2X;
		Vector3 cross = new((float)x, (float)y, (float)z);
		double squared = x * x + y * y + z * z;
		if (IsWithinZeroTolerance(squared))
			return false;
		double length = Math.Sqrt((float)squared);
		normal = new Vector3((float)(cross.X / length), (float)(cross.Y / length), (float)(cross.Z / length));
		return true;
	}

	/// <summary>
	/// Moves from an origin toward a target by at most the given distance and reports the full
	/// distance when the move stops short of the target.
	/// </summary>
	/// <param name="origin">The point the move starts from.</param>
	/// <param name="target">The point to move toward.</param>
	/// <param name="maximumDistance">The largest distance to travel.</param>
	/// <param name="distance">The full distance to the target, or zero when the target was reached.</param>
	/// <returns>The moved point.</returns>
	[Original(0x007A8F28)]
	public static Vector3 MoveTowards(Vector3 origin, Vector3 target, float maximumDistance, out double distance)
	{
		Vector3 offset = Subtract(target, origin);
		float length = offset.Length();
		if (!(length > maximumDistance))
		{
			distance = 0.0;
			return target;
		}
		if (length == 0.0f)
		{
			distance = 0.0;
			return target;
		}
		Normalize(ref offset);
		distance = length;
		return new Vector3(
			(float)((double)origin.X + (double)offset.X * maximumDistance),
			(float)((double)origin.Y + (double)offset.Y * maximumDistance),
			(float)((double)origin.Z + (double)offset.Z * maximumDistance));
	}

	/// <summary>
	/// Returns the dot product, keeping the sum in the wider intermediate precision.
	/// </summary>
	/// <param name="left">The first vector.</param>
	/// <param name="right">The second vector.</param>
	/// <returns>The dot product.</returns>
	[Original(0x0082F9E0)]
	public static double Dot(Vector3 left, Vector3 right) =>
		(double)left.X * right.X + (double)left.Y * right.Y + (double)left.Z * right.Z;

	/// <summary>
	/// Writes the cross product and returns its length.
	/// </summary>
	/// <param name="left">The first vector.</param>
	/// <param name="right">The second vector.</param>
	/// <param name="cross">The cross product, stored at single precision.</param>
	/// <returns>The length of the cross product.</returns>
	[Original(0x0083A1F0)]
	public static double Cross(Vector3 left, Vector3 right, out Vector3 cross)
	{
		double x = (double)left.Y * right.Z - (double)left.Z * right.Y;
		double y = (double)left.Z * right.X - (double)left.X * right.Z;
		double z = (double)left.X * right.Y - (double)left.Y * right.X;
		cross = new Vector3((float)x, (float)y, (float)z);
		double squared = z * z + x * x + y * y;
		return Math.Sqrt((float)squared);
	}

	/// <summary>
	/// Returns the distance between two vectors, reporting zero when the squared distance is below
	/// the original cutoff of one fortieth.
	/// </summary>
	/// <param name="first">The first vector.</param>
	/// <param name="second">The second vector.</param>
	/// <returns>The distance, or zero below the cutoff.</returns>
	[Original(0x00836208)]
	public static double Distance(Vector3 first, Vector3 second)
	{
		double x = (double)first.X - second.X;
		double y = (double)first.Y - second.Y;
		double z = (double)first.Z - second.Z;
		double squared = x * x + y * y + z * z;
		if (!(squared >= 0.025f))
			return 0.0;
		return Math.Sqrt((float)squared);
	}

	private double Length64()
	{
		double squared = ExactSum((double)X * X, (double)Y * Y, (double)Z * Z);
		return Math.Sqrt((float)squared);
	}

	private static double ExactSum(double first, double second, double third)
	{
		if (!double.IsFinite(first) || !double.IsFinite(second) || !double.IsFinite(third))
			return first + second + third;
		double sum = first + second;
		double virtualSecond = sum - first;
		double error = (first - (sum - virtualSecond)) + (second - virtualSecond);
		double total = sum + third;
		double virtualThird = total - sum;
		double error3 = (sum - (total - virtualThird)) + (third - virtualThird);
		return total + (error + error3);
	}
}
