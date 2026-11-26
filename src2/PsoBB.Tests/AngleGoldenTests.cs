using System.Text.Json;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the angle difference against vectors produced by the original machine code.
/// </summary>
public sealed class AngleGoldenTests
{
	/// <summary>
	/// Loads the vectors for the angle difference.
	/// </summary>
	/// <returns>Left, right and expected difference triplets.</returns>
	public static List<object[]> DifferenceVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "007A9018.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				(ushort)vector.GetProperty("left").GetInt32(),
				(ushort)vector.GetProperty("right").GetInt32(),
				(ushort)vector.GetProperty("result").GetInt32(),
			]);
		return rows;
	}

	/// <summary>
	/// The ported difference returns the recorded value for every vector.
	/// </summary>
	/// <param name="left">The first turn value.</param>
	/// <param name="right">The second turn value.</param>
	/// <param name="expected">The expected difference.</param>
	[Theory]
	[MemberData(nameof(DifferenceVectors))]
	public void DifferenceMatchesTheMachineCode(ushort left, ushort right, ushort expected)
	{
		Assert.Equal(expected, Angle.Difference(left, right));
	}

	/// <summary>
	/// Loads the vectors for the step-toward operation.
	/// </summary>
	/// <returns>Current, target, step and expected value tuples.</returns>
	public static IEnumerable<object[]> StepVectors() => GoldenVectors.Load("007A8C74.json")
		.Select(vector => new object[]
		{
			(ushort)vector.GetProperty("current").GetInt32(),
			(ushort)vector.GetProperty("target").GetInt32(),
			vector.GetProperty("step").GetInt32(),
			(ushort)vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// Loads the vectors for the midpoint operation.
	/// </summary>
	/// <returns>First, second and expected value tuples.</returns>
	public static IEnumerable<object[]> MidpointVectors() => GoldenVectors.Load("007A8CB8.json")
		.Select(vector => new object[]
		{
			(ushort)vector.GetProperty("first").GetInt32(),
			(ushort)vector.GetProperty("second").GetInt32(),
			(ushort)vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// Loads the vectors for the smoothed-midpoint operation.
	/// </summary>
	/// <returns>First, second and expected value tuples.</returns>
	public static IEnumerable<object[]> SmoothedMidpointVectors() => GoldenVectors.Load("007A8CD0.json")
		.Select(vector => new object[]
		{
			(ushort)vector.GetProperty("first").GetInt32(),
			(ushort)vector.GetProperty("second").GetInt32(),
			(ushort)vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// Loads the vectors for the heading operation.
	/// </summary>
	/// <returns>Origin, target and expected heading tuples.</returns>
	public static IEnumerable<object[]> HeadingVectors() => GoldenVectors.Load("007A90A8.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadVector(vector.GetProperty("origin")),
			GoldenVectors.ReadVector(vector.GetProperty("target")),
			unchecked((int)vector.GetProperty("result").GetInt64()),
		});

	[Theory]
	[MemberData(nameof(StepVectors))]
	public void StepMatchesTheMachineCode(ushort current, ushort target, int step, ushort expected) =>
		Assert.Equal(expected, Angle.StepTowards(current, target, step));

	[Theory]
	[MemberData(nameof(MidpointVectors))]
	public void MidpointMatchesTheMachineCode(ushort first, ushort second, ushort expected) =>
		Assert.Equal(expected, Angle.Midpoint(first, second));

	[Theory]
	[MemberData(nameof(SmoothedMidpointVectors))]
	public void SmoothedMidpointMatchesTheMachineCode(ushort first, ushort second, ushort expected) =>
		Assert.Equal(expected, Angle.SmoothedMidpoint(first, second));

	[Theory]
	[MemberData(nameof(HeadingVectors))]
	public void HeadingMatchesTheMachineCode(Vector3 origin, Vector3 target, int expected) =>
		Assert.Equal(expected, Angle.HeadingBetween(origin, target));
}
