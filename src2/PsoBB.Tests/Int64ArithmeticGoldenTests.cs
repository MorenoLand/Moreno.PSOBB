using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 64-bit multiplication helper against vectors produced by the original machine code.
/// </summary>
public sealed class Int64ArithmeticGoldenTests
{
	/// <summary>
	/// Loads the vectors for the 64-bit multiplication.
	/// </summary>
	/// <returns>Left operand, right operand and expected product tuples.</returns>
	public static IEnumerable<object[]> MultiplyVectors() => GoldenVectors.Load("0085ADA0.json")
		.Select(vector => new object[]
		{
			ParseBits(vector.GetProperty("left").GetString()!),
			ParseBits(vector.GetProperty("right").GetString()!),
			ParseBits(vector.GetProperty("result").GetString()!),
		});

	/// <summary>
	/// The ported multiplication returns the recorded product for every vector.
	/// </summary>
	/// <param name="left">The first operand.</param>
	/// <param name="right">The second operand.</param>
	/// <param name="expected">The expected low 64 bits of the product.</param>
	[Theory]
	[MemberData(nameof(MultiplyVectors))]
	public void MultiplyMatchesTheMachineCode(long left, long right, long expected) =>
		Assert.Equal(expected, Int64Arithmetic.Multiply(left, right));

	private static long ParseBits(string hex) =>
		unchecked((long)ulong.Parse(hex, NumberStyles.HexNumber, CultureInfo.InvariantCulture));
}
