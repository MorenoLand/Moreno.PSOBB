using PsoBB.Mathematics;
using Xunit;

namespace PsoBB.Tests;

public class CurvePathGoldenTests
{
	public static IEnumerable<object[]> PolylineVectors() => GoldenVectors.Load("007BE414.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("nodes").EnumerateArray().Select(ReadNode).ToArray(),
			GoldenVectors.ReadFloat(vector.GetProperty("speed")),
			vector.GetProperty("frame").GetInt32(),
			vector.GetProperty("loop").GetBoolean(),
			vector.GetProperty("result").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("position")),
		});

	public static IEnumerable<object[]> BinomialVectors() => GoldenVectors.Load("00844858.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("n").GetInt32(),
			vector.GetProperty("k").GetInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	public static IEnumerable<object[]> BezierVectors() => GoldenVectors.Load("007BE6B8.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("controlPoints").EnumerateArray().Select(ReadNode).ToArray(),
			GoldenVectors.ReadFloat(vector.GetProperty("t")),
			vector.GetProperty("closed").GetBoolean(),
			vector.GetProperty("result").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("position")),
		});

	[Theory]
	[MemberData(nameof(PolylineVectors))]
	public void SamplePolylineMatchesTheMachineCode(
		PathNode[] nodes,
		float speed,
		int frame,
		bool loop,
		bool expectedResult,
		Vector3 expectedPosition)
	{
		bool actual = CurvePath.SamplePolyline(nodes, speed, frame, loop, out Vector3 position);
		Assert.Equal(expectedResult, actual);
		GoldenVectors.AssertVector(expectedPosition, position);
	}

	[Theory]
	[MemberData(nameof(BinomialVectors))]
	public void BinomialCoefficientMatchesTheMachineCode(int n, int k, int expected) =>
		Assert.Equal(expected, CurvePath.BinomialCoefficient(n, k));

	[Theory]
	[MemberData(nameof(BezierVectors))]
	public void EvaluateBezierMatchesTheMachineCode(
		PathNode[] controlPoints,
		float t,
		bool closed,
		bool expectedResult,
		Vector3 expectedPosition)
	{
		bool actual = CurvePath.EvaluateBezier(controlPoints, t, closed, out Vector3 position);
		Assert.Equal(expectedResult, actual);
		GoldenVectors.AssertVector(expectedPosition, position);
	}

	private static PathNode ReadNode(System.Text.Json.JsonElement element) =>
		new(
			new Vector3(
				GoldenVectors.ReadFloat(element[0]),
				GoldenVectors.ReadFloat(element[1]),
				GoldenVectors.ReadFloat(element[2])),
			GoldenVectors.ReadFloat(element[3]));
}
