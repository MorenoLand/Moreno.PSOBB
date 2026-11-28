using System.Text.Json;
using PsoBB.Mathematics;
using Xunit;

namespace PsoBB.Tests;

public class BoundingVolumeGoldenTests
{
	public static IEnumerable<object[]> HexahedronBoundsVectors() => GoldenVectors.Load("0084A90C.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("corners").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			GoldenVectors.ReadVector(vector.GetProperty("min")),
			GoldenVectors.ReadVector(vector.GetProperty("max")),
		});

	public static IEnumerable<object[]> SphereBoundsVectors() => GoldenVectors.Load("0084A9DC.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("center")),
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			GoldenVectors.ReadVector(vector.GetProperty("min")),
			GoldenVectors.ReadVector(vector.GetProperty("max")),
		});

	public static IEnumerable<object[]> BoundsIntersectVectors() => GoldenVectors.Load("0084AA18.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("minA")),
			GoldenVectors.ReadVector(vector.GetProperty("maxA")),
			GoldenVectors.ReadVector(vector.GetProperty("minB")),
			GoldenVectors.ReadVector(vector.GetProperty("maxB")),
			vector.GetProperty("intersects").GetBoolean(),
		});

	public static IEnumerable<object[]> HexahedronSphereVectors() => GoldenVectors.Load("0083D2FC.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("corners").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			GoldenVectors.ReadVector(vector.GetProperty("center")),
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			vector.GetProperty("intersects").GetBoolean(),
		});

	public static IEnumerable<object[]> TriangleArea2DVectors() => GoldenVectors.Load("0084C118.json")
		.Select(vector => new object[]
		{
			ReadPoint2D(vector.GetProperty("a")),
			ReadPoint2D(vector.GetProperty("b")),
			ReadPoint2D(vector.GetProperty("c")),
			GoldenVectors.ReadFloat(vector.GetProperty("area")),
		});

	public static IEnumerable<object[]> QuadsOverlap2DVectors() => GoldenVectors.Load("0084BCD0.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("quadA").EnumerateArray().Select(ReadPoint2D).ToArray(),
			vector.GetProperty("quadB").EnumerateArray().Select(ReadPoint2D).ToArray(),
			vector.GetProperty("overlaps").GetBoolean(),
		});

	public static IEnumerable<object[]> QuadsOverlapMask3DVectors() => GoldenVectors.Load("0084C1F4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("quadA").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("quadB").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("mask").GetInt32(),
		});

	public static IEnumerable<object[]> QuadsIntersect3DVectors() => GoldenVectors.Load("0084AFF4.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("quadA").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("quadB").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("intersects").GetBoolean(),
		});

	public static IEnumerable<object[]> HexahedraIntersectVectors() => GoldenVectors.Load("00844540.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("hexA").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("hexB").EnumerateArray().Select(corner => GoldenVectors.ReadVector(corner)).ToArray(),
			vector.GetProperty("intersects").GetBoolean(),
		});

	[Theory]
	[MemberData(nameof(HexahedronBoundsVectors))]
	public void ComputeHexahedronBoundsMatchesTheMachineCode(Vector3[] corners, Vector3 expectedMin, Vector3 expectedMax)
	{
		BoundingVolume.ComputeHexahedronBounds(corners, out Vector3 min, out Vector3 max);
		GoldenVectors.AssertVector(expectedMin, min);
		GoldenVectors.AssertVector(expectedMax, max);
	}

	[Theory]
	[MemberData(nameof(SphereBoundsVectors))]
	public void ComputeSphereBoundsMatchesTheMachineCode(Vector3 center, float radius, Vector3 expectedMin, Vector3 expectedMax)
	{
		BoundingVolume.ComputeSphereBounds(center, radius, out Vector3 min, out Vector3 max);
		GoldenVectors.AssertVector(expectedMin, min);
		GoldenVectors.AssertVector(expectedMax, max);
	}

	[Theory]
	[MemberData(nameof(BoundsIntersectVectors))]
	public void BoundsIntersectMatchesTheMachineCode(Vector3 minA, Vector3 maxA, Vector3 minB, Vector3 maxB, bool expected)
	{
		Assert.Equal(expected, BoundingVolume.BoundsIntersect(minA, maxA, minB, maxB));
	}

	[Theory]
	[MemberData(nameof(HexahedronSphereVectors))]
	public void HexahedronIntersectsSphereMatchesTheMachineCode(Vector3[] corners, Vector3 center, float radius, bool expected)
	{
		Assert.Equal(expected, BoundingVolume.HexahedronIntersectsSphere(corners, center, radius));
	}

	[Theory]
	[MemberData(nameof(TriangleArea2DVectors))]
	public void ComputeTriangleArea2DMatchesTheMachineCode(
		(float X, float Y) a,
		(float X, float Y) b,
		(float X, float Y) c,
		float expectedArea)
	{
		GoldenVectors.AssertFloat(expectedArea, BoundingVolume.ComputeTriangleArea2D(a.X, a.Y, b.X, b.Y, c.X, c.Y));
	}

	[Theory]
	[MemberData(nameof(QuadsOverlap2DVectors))]
	public void QuadsOverlap2DMatchesTheMachineCode((float X, float Y)[] quadA, (float X, float Y)[] quadB, bool expected)
	{
		Assert.Equal(expected, BoundingVolume.QuadsOverlap2D(quadA, quadB));
	}

	[Theory]
	[MemberData(nameof(QuadsOverlapMask3DVectors))]
	public void QuadsOverlapMask3DMatchesTheMachineCode(Vector3[] quadA, Vector3[] quadB, int expectedMask)
	{
		Assert.Equal(expectedMask, BoundingVolume.QuadsOverlapMask3D(quadA, quadB));
	}

	[Theory]
	[MemberData(nameof(QuadsIntersect3DVectors))]
	public void QuadsIntersect3DMatchesTheMachineCode(Vector3[] quadA, Vector3[] quadB, bool expected)
	{
		Assert.Equal(expected, BoundingVolume.QuadsIntersect3D(quadA, quadB));
	}

	[Theory]
	[MemberData(nameof(HexahedraIntersectVectors))]
	public void HexahedraIntersectMatchesTheMachineCode(Vector3[] hexA, Vector3[] hexB, bool expected)
	{
		Assert.Equal(expected, BoundingVolume.HexahedraIntersect(hexA, hexB));
	}

	private static (float X, float Y) ReadPoint2D(JsonElement value) =>
		(GoldenVectors.ReadFloat(value[0]), GoldenVectors.ReadFloat(value[1]));
}
