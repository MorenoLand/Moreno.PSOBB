using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 96-bit addition against vectors produced by the original machine code.
/// </summary>
public sealed class Int96AddGoldenTests
{
	/// <summary>
	/// Loads the vectors for the 96-bit addition.
	/// </summary>
	/// <returns>Left dwords, right dwords and expected sum dwords.</returns>
	public static IEnumerable<object[]> AddVectors() => GoldenVectors.Load("00869924.json")
		.Select(vector => new object[]
		{
			ReadDwords(vector.GetProperty("left")),
			ReadDwords(vector.GetProperty("right")),
			ReadDwords(vector.GetProperty("result")),
		});

	/// <summary>
	/// The ported addition returns the recorded sum for every vector.
	/// </summary>
	/// <param name="left">The first addend, updated in place.</param>
	/// <param name="right">The second addend.</param>
	/// <param name="expected">The expected sum.</param>
	[Theory]
	[MemberData(nameof(AddVectors))]
	public void AddMatchesTheMachineCode(uint[] left, uint[] right, uint[] expected)
	{
		Int96Arithmetic.Add(left, right);
		Assert.Equal(expected, left);
	}

	private static uint[] ReadDwords(System.Text.Json.JsonElement value) =>
		value.EnumerateArray().Select(dword => dword.GetUInt32()).ToArray();
}
