using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the decimal text conversions against vectors produced by the original machine code.
/// </summary>
public sealed class CrtNumbersGoldenTests
{
	/// <summary>
	/// Loads the vectors for <c>_atol</c>.
	/// </summary>
	/// <returns>Text and expected result tuples.</returns>
	public static IEnumerable<object[]> AtolVectors() => GoldenVectors.Load("0085A072.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("text").GetString()!),
			vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// Loads the vectors for <c>__atoi64</c>.
	/// </summary>
	/// <returns>Text and expected result tuples.</returns>
	public static IEnumerable<object[]> Atoi64Vectors() => GoldenVectors.Load("0085A0FF.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("text").GetString()!),
			vector.GetProperty("result").GetInt64(),
		});

	/// <summary>
	/// The ported 32-bit conversion returns the recorded value for every vector.
	/// </summary>
	/// <param name="text">The text with its terminator removed.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(AtolVectors))]
	public void ParseInt32MatchesTheMachineCode(byte[] text, int expected) =>
		Assert.Equal(expected, CrtNumbers.ParseInt32(text));

	/// <summary>
	/// The ported 64-bit conversion returns the recorded value for every vector.
	/// </summary>
	/// <param name="text">The text with its terminator removed.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(Atoi64Vectors))]
	public void ParseInt64MatchesTheMachineCode(byte[] text, long expected) =>
		Assert.Equal(expected, CrtNumbers.ParseInt64(text));
}
