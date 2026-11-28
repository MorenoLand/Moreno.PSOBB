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
}
