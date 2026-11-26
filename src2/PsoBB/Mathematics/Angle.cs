namespace PsoBB.Mathematics;

/// <summary>
/// Operations on the client's 16-bit turn values.
/// </summary>
public static class Angle
{
	/// <summary>
	/// Returns the absolute difference between two turn values, wrapping the subtraction to
	/// 16 bits.
	/// </summary>
	/// <param name="left">The first turn value.</param>
	/// <param name="right">The second turn value.</param>
	/// <returns>The absolute difference in the same unsigned 16-bit turn unit.</returns>
	[Original(0x007A9018)]
	public static ushort Difference(ushort left, ushort right)
	{
		int difference = unchecked((short)(right - left));
		int magnitude = difference < 0 ? -difference : difference;
		return unchecked((ushort)magnitude);
	}

	/// <summary>
	/// Moves a turn value toward a target by at most the given step, returning the target when it
	/// lies inside the step.
	/// </summary>
	/// <param name="current">The turn value to move.</param>
	/// <param name="target">The turn value to approach.</param>
	/// <param name="maximumStep">The largest change to apply.</param>
	/// <returns>The moved turn value.</returns>
	[Original(0x007A8C74)]
	public static ushort StepTowards(ushort current, ushort target, int maximumStep)
	{
		int difference = unchecked((short)(target - current));
		if (maximumStep >= difference && difference >= -maximumStep)
			return target;
		return difference < 0 ? unchecked((ushort)(current - maximumStep)) : unchecked((ushort)(current + maximumStep));
	}

	/// <summary>
	/// Returns the turn value halfway from the first to the second, wrapping the subtraction to
	/// 16 bits and truncating the half step toward negative infinity.
	/// </summary>
	/// <param name="first">The starting turn value.</param>
	/// <param name="second">The ending turn value.</param>
	/// <returns>The midpoint turn value.</returns>
	[Original(0x007A8CB8)]
	public static ushort Midpoint(ushort first, ushort second)
	{
		int half = unchecked((short)(second - first)) >> 1;
		return unchecked((ushort)(first + half));
	}

	/// <summary>
	/// Returns a smoothed midpoint that moves a quarter of a small difference and half of a large
	/// difference, where differences of at least one eighth turn count as large.
	/// </summary>
	/// <param name="first">The starting turn value.</param>
	/// <param name="second">The ending turn value.</param>
	/// <returns>The smoothed turn value.</returns>
	[Original(0x007A8CD0)]
	public static ushort SmoothedMidpoint(ushort first, ushort second)
	{
		int difference = unchecked((short)(second - first));
		int step = difference <= -12288 || difference >= 12288 ? difference >> 1 : (difference >> 1) - (difference >> 2);
		return unchecked((ushort)(first + step));
	}

	/// <summary>
	/// Returns the heading from an origin toward a target as a turn value, measuring the angle from
	/// the positive depth axis toward the positive lateral axis.
	/// </summary>
	/// <param name="origin">The point the heading starts from.</param>
	/// <param name="target">The point the heading points at.</param>
	/// <returns>The heading in 16-bit turn units.</returns>
	[Original(0x007A90A8)]
	public static int HeadingBetween(Vector3 origin, Vector3 target)
	{
		double angle = Math.Atan2((double)target.X - origin.X, (double)target.Z - origin.Z);
		return FloatingPointMath.TruncateToInt32(angle * 65536.0 / 6.283184051513672);
	}
}
