namespace PsoBB.Mathematics;

/// <summary>
/// Axis-aligned bounds and hexahedron-versus-sphere intersection tests matching the client's
/// culling math.
/// </summary>
public static class BoundingVolume
{
	private const float AlignmentTolerance = 0.02500000037252903f;

	private static readonly int[,] HexahedronFaces =
	{
		{ 0, 1, 2, 3 },
		{ 4, 7, 6, 5 },
		{ 0, 3, 7, 4 },
		{ 2, 1, 5, 6 },
		{ 0, 4, 5, 1 },
		{ 3, 2, 6, 7 },
	};

	private static readonly int[,] AdjacentFaceIndices =
	{
		{ 4, 3, 5, 2 },
		{ 2, 5, 3, 4 },
		{ 0, 5, 1, 4 },
		{ 0, 4, 1, 5 },
		{ 2, 1, 3, 0 },
		{ 0, 3, 1, 2 },
	};

	/// <summary>
	/// Computes the axis-aligned minimum and maximum bounds enclosing eight hexahedron corners.
	/// </summary>
	/// <param name="corners">The eight corner points.</param>
	/// <param name="min">Receives the minimum coordinate along each axis.</param>
	/// <param name="max">Receives the maximum coordinate along each axis.</param>
	[Original(0x0084A90C)]
	public static void ComputeHexahedronBounds(ReadOnlySpan<Vector3> corners, out Vector3 min, out Vector3 max)
	{
		if (corners.Length < 8)
			throw new ArgumentException("Eight corner points are required.", nameof(corners));

		float minX = corners[0].X;
		float minY = corners[0].Y;
		float minZ = corners[0].Z;
		float maxX = minX;
		float maxY = minY;
		float maxZ = minZ;

		for (int i = 1; i < 8; i++)
		{
			Vector3 point = corners[i];
			if (point.X < minX)
				minX = point.X;
			if (point.Y < minY)
				minY = point.Y;
			if (point.Z < minZ)
				minZ = point.Z;
			if (point.X > maxX)
				maxX = point.X;
			if (point.Y > maxY)
				maxY = point.Y;
			if (point.Z > maxZ)
				maxZ = point.Z;
		}

		min = new Vector3(minX, minY, minZ);
		max = new Vector3(maxX, maxY, maxZ);
	}

	/// <summary>
	/// Computes the axis-aligned minimum and maximum bounds enclosing a sphere.
	/// </summary>
	/// <param name="center">The sphere center.</param>
	/// <param name="radius">The sphere radius.</param>
	/// <param name="min">Receives the minimum corner of the enclosing box.</param>
	/// <param name="max">Receives the maximum corner of the enclosing box.</param>
	[Original(0x0084A9DC)]
	public static void ComputeSphereBounds(Vector3 center, float radius, out Vector3 min, out Vector3 max)
	{
		min = new Vector3(center.X - radius, center.Y - radius, center.Z - radius);
		max = new Vector3(center.X + radius, center.Y + radius, center.Z + radius);
	}

	/// <summary>
	/// Returns whether two axis-aligned bounding boxes strictly overlap along all three axes.
	/// </summary>
	/// <param name="minA">The minimum corner of the first box.</param>
	/// <param name="maxA">The maximum corner of the first box.</param>
	/// <param name="minB">The minimum corner of the second box.</param>
	/// <param name="maxB">The maximum corner of the second box.</param>
	/// <returns><see langword="true"/> if the boxes strictly overlap along X, Y, and Z; otherwise <see langword="false"/>.</returns>
	[Original(0x0084AA18)]
	public static bool BoundsIntersect(Vector3 minA, Vector3 maxA, Vector3 minB, Vector3 maxB)
	{
		bool overlapX = OverlapsAxis(minA.X, maxA.X, minB.X, maxB.X);
		bool overlapY = OverlapsAxis(minA.Y, maxA.Y, minB.Y, maxB.Y);
		bool overlapZ = OverlapsAxis(minA.Z, maxA.Z, minB.Z, maxB.Z);
		return overlapZ && overlapY && overlapX;
	}

	/// <summary>
	/// Tests whether an eight-corner hexahedron intersects or contains a bounding sphere.
	/// </summary>
	/// <param name="corners">The eight hexahedron corner points.</param>
	/// <param name="center">The sphere center.</param>
	/// <param name="radius">The sphere radius.</param>
	/// <returns><see langword="true"/> if the hexahedron intersects or encloses the sphere; otherwise <see langword="false"/>.</returns>
	[Original(0x0083D2FC)]
	public static bool HexahedronIntersectsSphere(ReadOnlySpan<Vector3> corners, Vector3 center, float radius)
	{
		ComputeHexahedronBounds(corners, out Vector3 hexMin, out Vector3 hexMax);
		ComputeSphereBounds(center, radius, out Vector3 sphereMin, out Vector3 sphereMax);
		if (!BoundsIntersect(hexMin, hexMax, sphereMin, sphereMax))
			return false;

		Span<Vector3> faceNormals = stackalloc Vector3[6];
		for (int face = 0; face < 6; face++)
		{
			Vector3 p0 = corners[HexahedronFaces[face, 0]];
			Vector3 p1 = corners[HexahedronFaces[face, 1]];
			Vector3 p2 = corners[HexahedronFaces[face, 2]];
			double nx = -(((double)p1.Y - p0.Y) * ((double)p2.Z - p0.Z) - ((double)p1.Z - p0.Z) * ((double)p2.Y - p0.Y));
			double ny = -(((double)p1.Z - p0.Z) * ((double)p2.X - p0.X) - ((double)p1.X - p0.X) * ((double)p2.Z - p0.Z));
			double nz = -(((double)p1.X - p0.X) * ((double)p2.Y - p0.Y) - ((double)p1.Y - p0.Y) * ((double)p2.X - p0.X));
			float lengthSquared = (float)(nx * nx + ny * ny + nz * nz);
			double invLength = 1.0f / (double)FloatingPointMath.SquareRoot(lengthSquared);
			faceNormals[face] = new Vector3((float)(nx * invLength), (float)(ny * invLength), (float)(nz * invLength));
		}

		bool insideAllFaces = true;
		for (int face = 0; face < 6; face++)
		{
			Vector3 normal = faceNormals[face];
			Vector3 p0 = corners[HexahedronFaces[face, 0]];
			double t = -(normal.X * (double)center.X + normal.Y * (double)center.Y + normal.Z * (double)center.Z
				- (p0.X * (double)normal.X + p0.Y * (double)normal.Y + p0.Z * (double)normal.Z))
				/ ((double)normal.X * normal.X + (double)normal.Y * normal.Y + (double)normal.Z * normal.Z);
			float projX = (float)(normal.X * t + center.X);
			float projY = (float)(normal.Y * t + center.Y);
			float projZ = (float)(normal.Z * t + center.Z);
			float distSquared = (float)(((double)projX - center.X) * ((double)projX - center.X)
				+ ((double)projY - center.Y) * ((double)projY - center.Y)
				+ ((double)projZ - center.Z) * ((double)projZ - center.Z));
			float planeDistance = FloatingPointMath.SquareRoot(distSquared);

			bool withinFaceEdges = true;
			for (int edge = 0; edge < 4; edge++)
			{
				Vector3 e0 = corners[HexahedronFaces[face, edge]];
				Vector3 e1 = corners[HexahedronFaces[face, (edge + 1) & 3]];
				double ex = (double)e0.X - e1.X;
				double ey = (double)e0.Y - e1.Y;
				double ez = (double)e0.Z - e1.Z;
				double u = (((double)projX - e0.X) * ex + ((double)projY - e0.Y) * ey + ((double)projZ - e0.Z) * ez)
					/ (ey * ey + ex * ex + ez * ez);
				double qx = e0.X + ex * u;
				double qy = e0.Y + ey * u;
				double qz = e0.Z + ez * u;
				float qxF = (float)qx;
				float dirX = (float)(qx - projX);
				float dirY = (float)(qy - projY);
				float dirZ = (float)(qz - projZ);
				float dirLenSq = (float)((double)dirX * dirX + (double)dirY * dirY + (double)dirZ * dirZ);
				double invDirLen = 1.0f / (double)FloatingPointMath.SquareRoot(dirLenSq);
				Vector3 adjacentNormal = faceNormals[AdjacentFaceIndices[face, edge]];
				float diffX = FloatingPointMath.Absolute((float)(adjacentNormal.X - dirX * invDirLen));
				float diffY = FloatingPointMath.Absolute((float)(adjacentNormal.Y - dirY * invDirLen));
				double diffZ = FloatingPointMath.Absolute((float)(adjacentNormal.Z - dirZ * invDirLen));
				if (diffZ <= AlignmentTolerance && diffY <= AlignmentTolerance && diffX <= AlignmentTolerance && radius >= planeDistance)
					continue;

				if (planeDistance > radius)
				{
					withinFaceEdges = false;
					continue;
				}

				float qyF = (float)qy;
				float qzF = (float)qz;
				double edgeDistSq = ((double)projX - qxF) * ((double)projX - qxF)
					+ ((double)projY - qyF) * ((double)projY - qyF)
					+ ((double)projZ - qzF) * ((double)projZ - qzF);
				if (edgeDistSq > (double)radius * radius - (double)planeDistance * planeDistance)
					withinFaceEdges = false;
			}

			if (withinFaceEdges)
				return true;

			float toPlaneX = (float)((double)projX - center.X);
			float toPlaneY = (float)((double)projY - center.Y);
			float toPlaneZ = (float)((double)projZ - center.Z);
			float toPlaneLenSq = (float)((double)toPlaneX * toPlaneX + (double)toPlaneY * toPlaneY + (double)toPlaneZ * toPlaneZ);
			double invToPlaneLen = 1.0f / (double)FloatingPointMath.SquareRoot(toPlaneLenSq);
			float inDiffX = FloatingPointMath.Absolute((float)(normal.X - toPlaneX * invToPlaneLen));
			float inDiffY = FloatingPointMath.Absolute((float)(normal.Y - toPlaneY * invToPlaneLen));
			float inDiffZ = FloatingPointMath.Absolute((float)(normal.Z - toPlaneZ * invToPlaneLen));
			if (!(inDiffY <= AlignmentTolerance && inDiffX <= AlignmentTolerance && inDiffZ <= AlignmentTolerance))
				insideAllFaces = false;
		}

		return insideAllFaces;
	}

	private static bool OverlapsAxis(float minA, float maxA, float minB, float maxB)
	{
		double minUnion = minB <= minA ? minB : minA;
		double maxUnion = maxB >= maxA ? maxB : maxA;
		double widthSum = (double)maxA - minA - minB + maxB;
		return widthSum > maxUnion - minUnion;
	}
}
