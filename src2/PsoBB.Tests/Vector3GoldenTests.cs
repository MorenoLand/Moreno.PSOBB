using System.Text.Json;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the vector helpers against vectors produced by the original machine code.
/// </summary>
public sealed class Vector3GoldenTests
{
	public static IEnumerable<object[]> AddVectors() => GoldenVectors.Load("007A8C04.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> SubtractVectors() => GoldenVectors.Load("007A8C4C.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> DistanceSquaredVectors() => GoldenVectors.Load("007A8C28.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> PlanarDistanceSquaredVectors() => GoldenVectors.Load("007A9180.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> LengthSquaredVectors() => GoldenVectors.Load("0082DEF4.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("value")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> NormalizeVectors() => GoldenVectors.Load("0082DF08.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("value")),
			GoldenVectors.ReadDouble(vector.GetProperty("length")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> TryNormalizeVectors() => GoldenVectors.Load("007A9158.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("value")),
			vector.GetProperty("result").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("vector")),
		});

	public static IEnumerable<object[]> NonFiniteVectors() => GoldenVectors.Load("007A8BA0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("value")),
			vector.GetProperty("result").GetInt32() != 0,
		});

	public static IEnumerable<object[]> ZeroToleranceVectors() => GoldenVectors.Load("007A96DC.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadDouble(vector.GetProperty("value")),
			vector.GetProperty("result").GetInt32() != 0,
		});

	public static IEnumerable<object[]> TriangleNormalVectors() => GoldenVectors.Load("007A9618.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("points"), 0),
			GoldenVectors.ReadVector(vector.GetProperty("points"), 3),
			GoldenVectors.ReadVector(vector.GetProperty("points"), 6),
			vector.GetProperty("result").GetInt32() != 0,
			GoldenVectors.ReadVector(vector.GetProperty("normal")),
		});

	public static IEnumerable<object[]> MoveTowardsVectors() => GoldenVectors.Load("007A8F28.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("origin")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			GoldenVectors.ReadFloat(vector.GetProperty("distance")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
			GoldenVectors.ReadVector(vector.GetProperty("moved")),
		});

	public static IEnumerable<object[]> DotVectors() => GoldenVectors.Load("0082F9E0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> CrossVectors() => GoldenVectors.Load("0083A1F0.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
			GoldenVectors.ReadVector(vector.GetProperty("cross")),
		});

	public static IEnumerable<object[]> DistanceVectors() => GoldenVectors.Load("00836208.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("first")),
			GoldenVectors.ReadVector(vector.GetProperty("second")),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	[Theory]
	[MemberData(nameof(AddVectors))]
	public void AddMatchesTheMachineCode(Vector3 first, Vector3 second, Vector3 expected) =>
		GoldenVectors.AssertVector(expected, Vector3.Add(first, second));

	[Theory]
	[MemberData(nameof(SubtractVectors))]
	public void SubtractMatchesTheMachineCode(Vector3 first, Vector3 second, Vector3 expected) =>
		GoldenVectors.AssertVector(expected, Vector3.Subtract(second, first));

	[Theory]
	[MemberData(nameof(DistanceSquaredVectors))]
	public void DistanceSquaredMatchesTheMachineCode(Vector3 first, Vector3 second, double expected) =>
		GoldenVectors.AssertDouble(expected, first.DistanceSquared(second));

	[Theory]
	[MemberData(nameof(PlanarDistanceSquaredVectors))]
	public void PlanarDistanceSquaredMatchesTheMachineCode(Vector3 first, Vector3 second, double expected) =>
		GoldenVectors.AssertDouble(expected, first.PlanarDistanceSquared(second));

	[Theory]
	[MemberData(nameof(LengthSquaredVectors))]
	public void LengthSquaredMatchesTheMachineCode(Vector3 value, double expected) =>
		GoldenVectors.AssertDouble(expected, value.LengthSquared());

	[Theory]
	[MemberData(nameof(NormalizeVectors))]
	public void NormalizeMatchesTheMachineCode(Vector3 value, double expectedLength, Vector3 expected)
	{
		double length = Vector3.Normalize(ref value);
		GoldenVectors.AssertDouble(expectedLength, length);
		GoldenVectors.AssertVector(expected, value);
	}

	[Theory]
	[MemberData(nameof(TryNormalizeVectors))]
	public void TryNormalizeMatchesTheMachineCode(Vector3 value, bool expectedResult, Vector3 expected)
	{
		bool result = Vector3.TryNormalize(ref value);
		Assert.Equal(expectedResult, result);
		GoldenVectors.AssertVector(expected, value);
	}

	[Theory]
	[MemberData(nameof(NonFiniteVectors))]
	public void HasNonFiniteComponentMatchesTheMachineCode(Vector3 value, bool expected) =>
		Assert.Equal(expected, value.HasNonFiniteComponent());

	[Theory]
	[MemberData(nameof(ZeroToleranceVectors))]
	public void IsWithinZeroToleranceMatchesTheMachineCode(double value, bool expected) =>
		Assert.Equal(expected, Vector3.IsWithinZeroTolerance(value));

	[Theory]
	[MemberData(nameof(TriangleNormalVectors))]
	public void TryTriangleNormalMatchesTheMachineCode(Vector3 first, Vector3 second, Vector3 third, bool expectedResult, Vector3 expected)
	{
		Vector3 normal = new(-107374176f, -107374176f, -107374176f);
		bool result = Vector3.TryTriangleNormal(first, second, third, ref normal);
		Assert.Equal(expectedResult, result);
		GoldenVectors.AssertVector(expected, normal);
	}

	[Theory]
	[MemberData(nameof(MoveTowardsVectors))]
	public void MoveTowardsMatchesTheMachineCode(Vector3 origin, Vector3 target, float maximumDistance, double expectedDistance, Vector3 expected)
	{
		Vector3 moved = Vector3.MoveTowards(origin, target, maximumDistance, out double distance);
		GoldenVectors.AssertDouble(expectedDistance, distance);
		GoldenVectors.AssertVector(expected, moved);
	}

	[Theory]
	[MemberData(nameof(DotVectors))]
	public void DotMatchesTheMachineCode(Vector3 first, Vector3 second, double expected) =>
		GoldenVectors.AssertDouble(expected, Vector3.Dot(first, second));

	[Theory]
	[MemberData(nameof(CrossVectors))]
	public void CrossMatchesTheMachineCode(Vector3 first, Vector3 second, double expectedLength, Vector3 expected)
	{
		double length = Vector3.Cross(first, second, out Vector3 cross);
		GoldenVectors.AssertDouble(expectedLength, length);
		GoldenVectors.AssertVector(expected, cross);
	}

	[Theory]
	[MemberData(nameof(DistanceVectors))]
	public void DistanceMatchesTheMachineCode(Vector3 first, Vector3 second, double expected) =>
		GoldenVectors.AssertDouble(expected, Vector3.Distance(first, second));
}
