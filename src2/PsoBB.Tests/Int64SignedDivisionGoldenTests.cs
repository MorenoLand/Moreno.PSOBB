using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the signed 64-bit division against vectors produced by the original machine code.
/// </summary>
public sealed class Int64SignedDivisionGoldenTests
{
	/// <summary>
	/// Loads the vectors for the signed division.
	/// </summary>
	/// <returns>Dividend, divisor and expected quotient tuples.</returns>
	public static IEnumerable<object[]> DivideVectors() => GoldenVectors.Load("0085ADE0.json")
		.Select(vector => new object[]
		{
			ParseBits(vector.GetProperty("dividend").GetString()!),
			ParseBits(vector.GetProperty("divisor").GetString()!),
			ParseBits(vector.GetProperty("result").GetString()!),
		});

	/// <summary>
	/// The ported division returns the recorded quotient for every vector.
	/// </summary>
	/// <param name="dividend">The value to divide.</param>
	/// <param name="divisor">The nonzero divisor.</param>
	/// <param name="expected">The expected quotient, truncated toward zero.</param>
	[Theory]
	[MemberData(nameof(DivideVectors))]
	public void DivideMatchesTheMachineCode(long dividend, long divisor, long expected) =>
		Assert.Equal(expected, Int64Arithmetic.Divide(dividend, divisor));

	private static long ParseBits(string hex) =>
		unchecked((long)ulong.Parse(hex, NumberStyles.HexNumber, CultureInfo.InvariantCulture));
}
