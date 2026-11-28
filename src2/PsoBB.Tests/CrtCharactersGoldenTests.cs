using System.Globalization;
using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the case-insensitive ASCII comparison against vectors produced by the original machine code.
/// </summary>
public sealed class CrtCharactersGoldenTests
{
	/// <summary>
	/// Loads the vectors for the ASCII case-insensitive comparison.
	/// </summary>
	/// <returns>First bytes, second bytes, count and expected sign tuples.</returns>
	public static IEnumerable<object[]> CompareAsciiIgnoreCaseVectors() => GoldenVectors.Load("00863DE0.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("a").GetString()!),
			Convert.FromHexString(vector.GetProperty("b").GetString()!),
			(uint)vector.GetProperty("n").GetInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// The ported comparison returns the recorded sign for every vector.
	/// </summary>
	/// <param name="first">The first string with its terminator.</param>
	/// <param name="second">The second string with its terminator.</param>
	/// <param name="count">The largest number of bytes to compare.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(CompareAsciiIgnoreCaseVectors))]
	public void CompareAsciiIgnoreCaseMatchesTheMachineCode(byte[] first, byte[] second, uint count, int expected) =>
		Assert.Equal(expected, CrtCharacters.CompareAsciiIgnoreCase(first, second, count));
}
