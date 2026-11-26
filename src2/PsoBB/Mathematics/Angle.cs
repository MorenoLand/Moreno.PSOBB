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
}
