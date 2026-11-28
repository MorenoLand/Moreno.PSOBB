namespace PsoBB.Mathematics;

/// <summary>
/// Sine and cosine of the client's 16-bit turn angles, read from the original sampled table and
/// interpolated between neighbouring entries.
/// </summary>
public static class FixedPointTrigonometry
{
	/// <summary>
	/// Returns the sine of a turn angle, interpolating the low four fraction bits between table
	/// entries.
	/// </summary>
	/// <param name="angle">The angle in 16-bit turn units.</param>
	/// <returns>The sine.</returns>
	[Original(0x0082DCBC)]
	public static double Sine(int angle) => Evaluate(angle, false);

	/// <summary>
	/// Returns the cosine of a turn angle, interpolating the low four fraction bits between table
	/// entries.
	/// </summary>
	/// <param name="angle">The angle in 16-bit turn units.</param>
	/// <returns>The cosine.</returns>
	[Original(0x0082DDD8)]
	public static double Cosine(int angle) => Evaluate(angle, true);

	/// <summary>
	/// Returns both the sine and cosine of a turn angle rounded to single precision.
	/// </summary>
	/// <param name="angle">The angle in 16-bit turn units.</param>
	/// <returns>The single-precision sine and cosine.</returns>
	[Original(0x008451F8)]
	public static (float Sine, float Cosine) SineCosine(int angle) =>
		((float)Evaluate(angle, false), (float)Evaluate(angle, true));

	/// <summary>
	/// Returns the point at a radius and turn angle around the vertical axis, offset from a center.
	/// </summary>
	/// <param name="angle">The angle in 16-bit turn units.</param>
	/// <param name="radius">The distance from the center.</param>
	/// <param name="center">The point the offset starts from.</param>
	/// <returns>The offset point, with the center's height unchanged.</returns>
	[Original(0x007A90F0)]
	public static Vector3 OffsetAroundY(int angle, float radius, Vector3 center) =>
		new((float)(Sine(angle) * radius + center.X), center.Y, (float)(Cosine(angle) * radius + center.Z));

	/// <summary>
	/// Returns the point at a radius and turn angle in the horizontal plane, with zero height.
	/// </summary>
	/// <param name="angle">The angle in 16-bit turn units.</param>
	/// <param name="radius">The distance from the origin.</param>
	/// <returns>The point on the circle.</returns>
	[Original(0x007A9128)]
	public static Vector3 CirclePoint(int angle, float radius) =>
		new((float)(Sine(angle) * radius), 0.0f, (float)(Cosine(angle) * radius));

	private static double Evaluate(int angle, bool cosine)
	{
		int fraction = angle & 0xF;
		int index = (angle >> 4) & 0xFFF;
		if (fraction != 0)
		{
			(double first, double second) = Lookup(index, index + 1, cosine);
			return first + (second - first) * (fraction * 0.0625);
		}
		return Lookup(index, index, cosine).First;
	}

	private static (double First, double Second) Lookup(int index, int next, bool cosine)
	{
		ReadOnlySpan<float> table = SineTable.Values;
		int quadrant = index & 0xC00;
		if (!cosine)
		{
			if (quadrant == 0)
				return (table[index], table[next]);
			if (quadrant == 1024)
				return (table[2048 - index], table[2048 - next]);
			if (quadrant == 2048)
				return (-table[index - 2048], -table[next - 2048]);
			if (quadrant == 3072)
				return (-table[4096 - index], -table[4096 - next]);
			return (0.0, 0.0);
		}
		if (quadrant == 0)
			return (table[1024 - index], table[1024 - next]);
		if (quadrant == 1024)
			return (-table[index - 1024], -table[next - 1024]);
		if (quadrant == 2048)
			return (-table[3072 - index], -table[3072 - next]);
		if (quadrant == 3072)
			return (table[index - 3072], table[next - 3072]);
		return (0.0, 0.0);
	}
}
