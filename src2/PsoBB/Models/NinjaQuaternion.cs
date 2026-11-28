using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// A quaternion rotation stored by an NJCM node whose evaluation flags select quaternion angles.
/// </summary>
/// <param name="X">The first vector component.</param>
/// <param name="Y">The second vector component.</param>
/// <param name="Z">The third vector component.</param>
/// <param name="W">The scalar component.</param>
public readonly record struct NinjaQuaternion(float X, float Y, float Z, float W)
{
	/// <summary>
	/// Converts three 16-bit Euler turn angles using the primary Ninja axis sign convention.
	/// </summary>
	/// <param name="xAngle">Rotation around X in 16-bit turn units.</param>
	/// <param name="yAngle">Rotation around Y in 16-bit turn units.</param>
	/// <param name="zAngle">Rotation around Z in 16-bit turn units.</param>
	/// <returns>The constructed quaternion.</returns>
	[Original(0x00846FAC)]
	public static NinjaQuaternion FromEuler(int xAngle, int yAngle, int zAngle) =>
		FromEulerCore(xAngle, yAngle, zAngle, alternateSign: false);

	/// <summary>
	/// Converts three 16-bit Euler turn angles using the alternate Ninja axis sign convention.
	/// </summary>
	/// <param name="xAngle">Rotation around X in 16-bit turn units.</param>
	/// <param name="yAngle">Rotation around Y in 16-bit turn units.</param>
	/// <param name="zAngle">Rotation around Z in 16-bit turn units.</param>
	/// <returns>The constructed quaternion.</returns>
	[Original(0x00847074)]
	public static NinjaQuaternion FromEulerAlternate(int xAngle, int yAngle, int zAngle) =>
		FromEulerCore(xAngle, yAngle, zAngle, alternateSign: true);

	private static NinjaQuaternion FromEulerCore(int xAngle, int yAngle, int zAngle, bool alternateSign)
	{
		(float sxF, float cxF) = FixedPointTrigonometry.SineCosine(xAngle >> 1);
		(float syF, float cyF) = FixedPointTrigonometry.SineCosine(yAngle >> 1);
		(float szF, float czF) = FixedPointTrigonometry.SineCosine(zAngle >> 1);
		double sx = sxF;
		double cx = cxF;
		double sy = syF;
		double cy = cyF;
		double sz = szF;
		double cz = czF;

		float w = (float)(cx * cy * cz + sx * sy * sz);
		float x = alternateSign
			? (float)(cx * sy * sz + sx * cy * cz)
			: (float)(-cx * sy * sz + sx * cy * cz);
		float y = alternateSign
			? (float)(-cy * sz * sx + sy * cz * cx)
			: (float)(cy * sz * sx + sy * cz * cx);
		float z = (float)(-cz * sx * sy + sz * cx * cy);
		return new NinjaQuaternion(x, y, z, w);
	}
}
