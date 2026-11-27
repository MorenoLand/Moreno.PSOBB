using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the unsigned 64-bit division against vectors produced by the original machine code.
/// </summary>
public sealed class Int64DivisionGoldenTests
{
	/// <summary>
	/// Loads the vectors for the unsigned division.
	/// </summary>
	/// <returns>Dividend, divisor and expected quotient tuples.</returns>
	public static IEnumerable<object[]> DivideUnsignedVectors() => GoldenVectors.Load("00863510.json")
		.Select(vector => new object[]
		{
			ParseBits(vector.GetProperty("dividend").GetString()!),
			ParseBits(vector.GetProperty("divisor").GetString()!),
			ParseBits(vector.GetProperty("result").GetString()!),
		});

	/// <summary>
	/// The ported division returns the recorded quotient for every vector with a nonzero divisor.
	/// </summary>
	/// <param name="dividend">The value to divide.</param>
	/// <param name="divisor">The nonzero divisor.</param>
	/// <param name="expected">The expected quotient.</param>
	[Theory]
	[MemberData(nameof(DivideUnsignedVectors))]
	public void DivideUnsignedMatchesTheMachineCode(ulong dividend, ulong divisor, ulong expected) =>
		Assert.Equal(expected, Int64Arithmetic.DivideUnsigned(dividend, divisor));

	private static ulong ParseBits(string hex) =>
		ulong.Parse(hex, NumberStyles.HexNumber, CultureInfo.InvariantCulture);
}
