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
}
