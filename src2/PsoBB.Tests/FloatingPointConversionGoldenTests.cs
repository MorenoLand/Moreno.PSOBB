using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 64-bit truncating conversion against vectors produced by the original machine code.
/// </summary>
public sealed class FloatingPointConversionGoldenTests
{
	/// <summary>
	/// Loads the vectors for the 64-bit truncating conversion.
	/// </summary>
	/// <returns>Input and expected result tuples.</returns>
	public static IEnumerable<object[]> TruncateToInt64Vectors() => GoldenVectors.Load("008CB1E8.json")
		.Select(vector => new object[]
		{
			GoldenVectors.ReadDouble(vector.GetProperty("value")),
			unchecked((long)ulong.Parse(vector.GetProperty("result").GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture)),
		});

	/// <summary>
	/// The ported conversion returns the recorded value for every vector.
	/// </summary>
	/// <param name="value">The value to convert.</param>
	/// <param name="expected">The expected integer.</param>
	[Theory]
	[MemberData(nameof(TruncateToInt64Vectors))]
	public void TruncateToInt64MatchesTheMachineCode(double value, long expected) =>
		Assert.Equal(expected, FloatingPointMath.TruncateToInt64(value));
}
