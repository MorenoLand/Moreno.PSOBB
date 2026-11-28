using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Builds the row-vector camera view transform from an eye point, a look-at target and an up vector.
/// </summary>
public static class CameraView
{
	/// <summary>
	/// Builds the view transform for a camera at <paramref name="eye"/> looking at
	/// <paramref name="center"/>, with the original's three basis vectors and negated eye dot products.
	/// </summary>
	/// <param name="eye">The camera position.</param>
	/// <param name="center">The point the camera looks at.</param>
	/// <param name="up">The up vector; the original assumes it is unit length and orthogonal to the view direction.</param>
	/// <returns>The row-vector view transform.</returns>
	[Original(0x0089241D, "make_lookat_matrix")]
	public static Matrix4x4 CreateLookAt(Vector3 eye, Vector3 center, Vector3 up)
	{
		float zx = eye.X - center.X;
		float zy = eye.Y - center.Y;
		float zz = eye.Z - center.Z;
		float xx = zy * up.Z - zz * up.Y;
		float xy = zz * up.X - zx * up.Z;
		float xz = zx * up.Y - zy * up.X;
		float yx = zy * xz - zz * xy;
		float yy = zz * xx - zx * xz;
		float yz = zx * xy - zy * xx;
		return new Matrix4x4(
			xx, yx, zx, 0,
			xy, yy, zy, 0,
			xz, yz, zz, 0,
			-(xz * eye.Z + xy * eye.Y + xx * eye.X),
			-(yz * eye.Z + yy * eye.Y + yx * eye.X),
			-(zz * eye.Z + zy * eye.Y + zx * eye.X),
			1);
	}

	/// <summary>
	/// Builds the look-at view transform and stores it at the current depth of <paramref name="transformStack"/> when provided.
	/// </summary>
	/// <param name="eye">The camera position.</param>
	/// <param name="center">The point the camera looks at.</param>
	/// <param name="up">The up vector.</param>
	/// <param name="transformStack">The transformation stack to update with the view matrix, when supplied.</param>
	/// <returns>The constructed view transform.</returns>
	[Original(0x0082F108)]
	public static Matrix4x4 ApplyLookAt(Vector3 eye, Vector3 center, Vector3 up, TransformationStack? transformStack = null)
	{
		Matrix4x4 view = CreateLookAt(eye, center, up);
		transformStack?.ReplaceCurrent(view);
		return view;
	}
}
