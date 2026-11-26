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
	public float Length()
	{
		double squared = (double)X * X + (double)Y * Y + (double)Z * Z;
		return FloatingPointMath.SquareRoot((float)squared);
	}
}
