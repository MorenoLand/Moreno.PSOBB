using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 64-bit right shifts against vectors produced by the original machine code.
/// </summary>
public sealed class Int64ShiftGoldenTests
{
	/// <summary>
	/// Loads the vectors for the signed right shift.
	/// </summary>
	/// <returns>Value, count and expected result tuples.</returns>
	public static IEnumerable<object[]> ShiftRightVectors() => GoldenVectors.Load("008CAC90.json")
		.Select(vector => new object[]
		{
			ParseBits(vector.GetProperty("value").GetString()!),
			(byte)vector.GetProperty("count").GetInt32(),
			ParseBits(vector.GetProperty("result").GetString()!),
		});

	/// <summary>
	/// Loads the vectors for the unsigned right shift.
	/// </summary>
	/// <returns>Value, count and expected result tuples.</returns>
	public static IEnumerable<object[]> ShiftRightUnsignedVectors() => GoldenVectors.Load("008CB210.json")
		.Select(vector => new object[]
		{
			unchecked((ulong)ParseBits(vector.GetProperty("value").GetString()!)),
			(byte)vector.GetProperty("count").GetInt32(),
			unchecked((ulong)ParseBits(vector.GetProperty("result").GetString()!)),
		});

	/// <summary>
	/// The ported signed shift returns the recorded value for every vector.
	/// </summary>
	/// <param name="value">The value to shift.</param>
	/// <param name="count">The shift count.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(ShiftRightVectors))]
	public void ShiftRightMatchesTheMachineCode(long value, byte count, long expected) =>
		Assert.Equal(expected, Int64Arithmetic.ShiftRight(value, count));

	/// <summary>
	/// The ported unsigned shift returns the recorded value for every vector.
	/// </summary>
	/// <param name="value">The value to shift.</param>
	/// <param name="count">The shift count.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(ShiftRightUnsignedVectors))]
	public void ShiftRightUnsignedMatchesTheMachineCode(ulong value, byte count, ulong expected) =>
		Assert.Equal(expected, Int64Arithmetic.ShiftRightUnsigned(value, count));

	private static long ParseBits(string hex) =>
		unchecked((long)ulong.Parse(hex, NumberStyles.HexNumber, CultureInfo.InvariantCulture));
}
