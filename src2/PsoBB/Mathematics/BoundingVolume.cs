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

	private static readonly int[,] HexahedronBoxFaces =
	{
		{ 0, 1, 2, 3 },
		{ 4, 5, 6, 7 },
		{ 0, 3, 7, 4 },
		{ 2, 1, 5, 6 },
		{ 0, 4, 5, 1 },
		{ 3, 2, 6, 7 },
	};

	private static bool OverlapsAxis(float minA, float maxA, float minB, float maxB)
	{
		double minUnion = minB <= minA ? minB : minA;
		double maxUnion = maxB >= maxA ? maxB : maxA;
		double widthSum = (double)maxA - minA - minB + maxB;
		return widthSum > maxUnion - minUnion;
	}

	/// <summary>
	/// Computes the area of a 2D triangle defined by base segment (<paramref name="ax"/>, <paramref name="ay"/>) to
	/// (<paramref name="bx"/>, <paramref name="by"/>) and third vertex (<paramref name="cx"/>, <paramref name="cy"/>).
	/// </summary>
	[Original(0x0084C118)]
	public static float ComputeTriangleArea2D(float ax, float ay, float bx, float by, float cx, float cy) =>
		(float)ComputeTriangleArea2DDouble(ax, ay, bx, by, cx, cy);

	/// <summary>
	/// Tests whether any vertex of the smaller-area 2D quad lies inside the larger-area 2D quad.
	/// </summary>
	/// <param name="quadA">The four vertices of the first 2D quad.</param>
	/// <param name="quadB">The four vertices of the second 2D quad.</param>
	/// <returns><see langword="true"/> if vertex-in-quad containment holds; otherwise <see langword="false"/>.</returns>
	[Original(0x0084BCD0)]
	public static bool QuadsOverlap2D(ReadOnlySpan<(float X, float Y)> quadA, ReadOnlySpan<(float X, float Y)> quadB)
	{
		if (quadA.Length < 4 || quadB.Length < 4)
			throw new ArgumentException("Each quad must have four vertices.");

		float areaA0 = (float)ComputeTriangleArea2DDouble(quadA[0].X, quadA[0].Y, quadA[1].X, quadA[1].Y, quadA[2].X, quadA[2].Y);
		float areaA = (float)(ComputeTriangleArea2DDouble(quadA[0].X, quadA[0].Y, quadA[2].X, quadA[2].Y, quadA[3].X, quadA[3].Y) + areaA0);
		float areaB0 = (float)ComputeTriangleArea2DDouble(quadB[0].X, quadB[0].Y, quadB[1].X, quadB[1].Y, quadB[2].X, quadB[2].Y);
		float areaB = (float)(ComputeTriangleArea2DDouble(quadB[0].X, quadB[0].Y, quadB[2].X, quadB[2].Y, quadB[3].X, quadB[3].Y) + areaB0);

		ReadOnlySpan<(float X, float Y)> small;
		ReadOnlySpan<(float X, float Y)> large;
		float largeArea;
		if (areaA >= areaB)
		{
			largeArea = areaA;
			small = quadB;
			large = quadA;
		}
		else
		{
			largeArea = areaB;
			small = quadA;
			large = quadB;
		}

		const float AreaToleranceScale = 1.024999976158142f;
		double threshold = largeArea * (double)AreaToleranceScale;
		for (int i = 0; i < 4; i++)
		{
			float vx = small[i].X;
			float vy = small[i].Y;
			float a0 = (float)ComputeTriangleArea2DDouble(large[0].X, large[0].Y, large[1].X, large[1].Y, vx, vy);
			float a1 = (float)ComputeTriangleArea2DDouble(large[1].X, large[1].Y, large[2].X, large[2].Y, vx, vy);
			float a2 = (float)ComputeTriangleArea2DDouble(large[2].X, large[2].Y, large[3].X, large[3].Y, vx, vy);
			double a3 = ComputeTriangleArea2DDouble(large[3].X, large[3].Y, large[0].X, large[0].Y, vx, vy);
			if (threshold > a3 + a0 + a1 + a2)
				return true;
		}

		return false;
	}

	/// <summary>
	/// Computes the orthographic quad containment bitmask across XY (bit 2), XZ (bit 1), and YZ (bit 0).
	/// </summary>
	/// <param name="quadA">The four 3D vertices of the first quad.</param>
	/// <param name="quadB">The four 3D vertices of the second quad.</param>
	/// <returns>A bitmask combining <c>4</c> (XY), <c>2</c> (XZ), and <c>1</c> (YZ) when contained.</returns>
	[Original(0x0084C1F4)]
	public static int QuadsOverlapMask3D(ReadOnlySpan<Vector3> quadA, ReadOnlySpan<Vector3> quadB)
	{
		if (quadA.Length < 4 || quadB.Length < 4)
			throw new ArgumentException("Each quad must have four vertices.");

		Span<(float X, float Y)> projA = stackalloc (float X, float Y)[4];
		Span<(float X, float Y)> projB = stackalloc (float X, float Y)[4];
		int mask = 0;

		ProjectQuad(quadA, projA, 0, 1);
		ProjectQuad(quadB, projB, 0, 1);
		if (QuadsOverlap2D(projA, projB))
			mask = 4;

		ProjectQuad(quadA, projA, 0, 2);
		ProjectQuad(quadB, projB, 0, 2);
		if (QuadsOverlap2D(projA, projB))
			mask |= 2;

		ProjectQuad(quadA, projA, 1, 2);
		ProjectQuad(quadB, projB, 1, 2);
		if (QuadsOverlap2D(projA, projB))
			mask |= 1;

		return mask;
	}

	/// <summary>
	/// Tests whether two 3D quads intersect across orthographic edge-segment and containment projections.
	/// </summary>
	/// <param name="quadA">The four 3D vertices of the first quad.</param>
	/// <param name="quadB">The four 3D vertices of the second quad.</param>
	/// <returns><see langword="true"/> if the quads overlap in XY, XZ, and YZ projections; otherwise <see langword="false"/>.</returns>
	[Original(0x0084AFF4)]
	public static bool QuadsIntersect3D(ReadOnlySpan<Vector3> quadA, ReadOnlySpan<Vector3> quadB)
	{
		if (quadA.Length < 4 || quadB.Length < 4)
			throw new ArgumentException("Each quad must have four vertices.");

		bool edgeXY = QuadEdgesIntersect2D(quadA, quadB, 0, 1);
		bool edgeXZ = QuadEdgesIntersect2D(quadA, quadB, 0, 2);
		bool edgeYZ = QuadEdgesIntersect2D(quadA, quadB, 1, 2);

		Span<(float X, float Y)> projA = stackalloc (float X, float Y)[4];
		Span<(float X, float Y)> projB = stackalloc (float X, float Y)[4];

		ProjectQuad(quadA, projA, 0, 1);
		ProjectQuad(quadB, projB, 0, 1);
		bool containXY = QuadsOverlap2D(projA, projB);

		ProjectQuad(quadA, projA, 0, 2);
		ProjectQuad(quadB, projB, 0, 2);
		bool containXZ = QuadsOverlap2D(projA, projB);

		ProjectQuad(quadA, projA, 1, 2);
		ProjectQuad(quadB, projB, 1, 2);
		bool containYZ = QuadsOverlap2D(projA, projB);

		return (containXY || edgeXY) && (containXZ || edgeXZ) && (containYZ || edgeYZ);
	}

	/// <summary>
	/// Tests whether two eight-corner hexahedra intersect or enclose one another.
	/// </summary>
	/// <param name="cornersA">The eight corners of the first hexahedron.</param>
	/// <param name="cornersB">The eight corners of the second hexahedron.</param>
	/// <returns><see langword="true"/> if the hexahedra intersect or overlap in all three planes; otherwise <see langword="false"/>.</returns>
	[Original(0x00844540)]
	public static bool HexahedraIntersect(ReadOnlySpan<Vector3> cornersA, ReadOnlySpan<Vector3> cornersB)
	{
		ComputeHexahedronBounds(cornersA, out Vector3 minA, out Vector3 maxA);
		ComputeHexahedronBounds(cornersB, out Vector3 minB, out Vector3 maxB);
		if (!BoundsIntersect(minA, maxA, minB, maxB))
			return false;

		Span<Vector3> quadA = stackalloc Vector3[4];
		Span<Vector3> quadB = stackalloc Vector3[4];
		int overlapMask = 0;

		for (int faceA = 0; faceA < 6; faceA++)
		{
			FillQuad(cornersA, HexahedronBoxFaces, faceA, quadA);
			for (int faceB = 0; faceB < 6; faceB++)
			{
				FillQuad(cornersB, HexahedronBoxFaces, faceB, quadB);
				if (QuadsIntersect3D(quadA, quadB))
					return true;

				overlapMask |= QuadsOverlapMask3D(quadA, quadB);
				if (overlapMask == 7)
					return true;
			}
		}

		return false;
	}

	private static double ComputeTriangleArea2DDouble(float ax, float ay, float bx, float by, float cx, float cy)
	{
		float ny;
		float nx;
		double d;
		if (FloatingPointMath.Absolute(ax - bx) < AlignmentTolerance)
		{
			ny = 1.0f;
			nx = 0.0f;
			d = -(double)ax;
		}
		else
		{
			double ayD = ay;
			double dy = (double)by - ayD;
			ny = (float)dy;
			double dx = (double)bx - ax;
			nx = (float)-dx;
			d = dy * -(double)ax + -dx * -ayD;
		}

		float signedDistance = (float)(d + (double)ny * cx + (double)nx * cy);
		float absDistance = FloatingPointMath.Absolute(signedDistance);
		float normalLenSq = (float)((double)ny * ny + (double)nx * nx);
		double normalLen = SignedSquareRootDouble(normalLenSq);
		double edgeDx = (double)ax - bx;
		double edgeDxSq = edgeDx * edgeDx;
		double edgeDy = (double)ay - by;
		float height = (float)(absDistance / normalLen);
		float edgeLenSq = (float)(edgeDy * edgeDy + edgeDxSq);
		return SignedSquareRootDouble(edgeLenSq) * height * 0.5f;
	}

	private static bool QuadEdgesIntersect2D(ReadOnlySpan<Vector3> quadA, ReadOnlySpan<Vector3> quadB, int axisU, int axisV)
	{
		const float NegTolerance = -0.02500000037252903f;
		float aPrevU = GetComponent(quadA[3], axisU);
		float aPrevV = GetComponent(quadA[3], axisV);

		for (int i = 0; i < 4; i++)
		{
			float aCurrU = GetComponent(quadA[i], axisU);
			float aCurrV = GetComponent(quadA[i], axisV);
			bool aVertical;
			float slopeA = 0.0f;
			float interceptA = 0.0f;
			float verticalUA = 0.0f;

			if (AlignmentTolerance + (double)aCurrU < aPrevU || (double)aCurrU - AlignmentTolerance > aPrevU)
			{
				double m = ((double)aCurrV - aPrevV) / ((double)aCurrU - aPrevU);
				slopeA = (float)m;
				interceptA = (float)(m * -(double)aPrevU + aPrevV);
				aVertical = false;
			}
			else
			{
				verticalUA = aPrevU;
				aVertical = true;
			}

			float bPrevU = GetComponent(quadB[3], axisU);
			float bPrevV = GetComponent(quadB[3], axisV);
			float diffAV = aPrevV - aCurrV;

			for (int j = 0; j < 4; j++)
			{
				float bCurrU = GetComponent(quadB[j], axisU);
				float bCurrV = GetComponent(quadB[j], axisV);

				double hitU;
				double hitV;
				bool hasHit = true;

				if (AlignmentTolerance + (double)bCurrU < bPrevU || (double)bCurrU - AlignmentTolerance > bPrevU)
				{
					double mB = ((double)bCurrV - bPrevV) / ((double)bCurrU - bPrevU);
					double cB = (double)bPrevV + -(double)bPrevU * mB;
					if (aVertical)
					{
						hitU = verticalUA;
						hitV = mB * verticalUA + cB;
					}
					else if (slopeA < mB - AlignmentTolerance || slopeA > mB + AlignmentTolerance)
					{
						double x = (cB - interceptA) / ((double)slopeA - mB);
						hitU = x;
						hitV = (double)slopeA * x + interceptA;
					}
					else
					{
						hasHit = false;
						hitU = 0.0;
						hitV = 0.0;
					}
				}
				else if (!aVertical)
				{
					hitU = bPrevU;
					hitV = (double)slopeA * bPrevU + interceptA;
				}
				else
				{
					hasHit = false;
					hitU = 0.0;
					hitV = 0.0;
				}

				if (hasHit)
				{
					float dA0 = (float)SignedSquareRootDouble((float)(((double)aPrevV - hitV) * ((double)aPrevV - hitV) + ((double)aPrevU - hitU) * ((double)aPrevU - hitU)));
					float dA1 = (float)SignedSquareRootDouble((float)(((double)aCurrV - hitV) * ((double)aCurrV - hitV) + ((double)aCurrU - hitU) * ((double)aCurrU - hitU)));
					float diffAU = aPrevU - aCurrU;
					bool onSegA = (double)dA0 + NegTolerance + dA1 <= SignedSquareRootDouble((float)((double)diffAU * diffAU + (double)diffAV * diffAV)) + AlignmentTolerance;

					float dB0 = (float)SignedSquareRootDouble((float)(((double)bPrevV - hitV) * ((double)bPrevV - hitV) + ((double)bPrevU - hitU) * ((double)bPrevU - hitU)));
					float dB1 = (float)SignedSquareRootDouble((float)(((double)bCurrV - hitV) * ((double)bCurrV - hitV) + ((double)bCurrU - hitU) * ((double)bCurrU - hitU)));
					bool onSegB = (double)dB0 + NegTolerance + dB1 <= SignedSquareRootDouble((float)(((double)bPrevV - bCurrV) * ((double)bPrevV - bCurrV) + ((double)bPrevU - bCurrU) * ((double)bPrevU - bCurrU))) + AlignmentTolerance;

					if (onSegA && onSegB)
						return true;
				}

				bPrevU = bCurrU;
				bPrevV = bCurrV;
			}

			aPrevU = aCurrU;
			aPrevV = aCurrV;
		}

		return false;
	}

	private static double SignedSquareRootDouble(float value) =>
		value >= 0.0f ? Math.Sqrt(value) : -Math.Sqrt(-value);

	private static float GetComponent(Vector3 vector, int axis) => axis switch
	{
		0 => vector.X,
		1 => vector.Y,
		_ => vector.Z,
	};

	private static void ProjectQuad(ReadOnlySpan<Vector3> quad3D, Span<(float X, float Y)> quad2D, int axisU, int axisV)
	{
		for (int i = 0; i < 4; i++)
			quad2D[i] = (GetComponent(quad3D[i], axisU), GetComponent(quad3D[i], axisV));
	}

	private static void FillQuad(ReadOnlySpan<Vector3> corners, int[,] faces, int face, Span<Vector3> destination)
	{
		for (int i = 0; i < 4; i++)
			destination[i] = corners[faces[face, i]];
	}
}
