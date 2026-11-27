using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the C-locale lowercase path against vectors produced by the original machine code.
/// </summary>
public sealed class CrtToLowerGoldenTests
{
	/// <summary>
	/// Loads the vectors for the C-locale lowercase path.
	/// </summary>
	/// <returns>Character and expected result tuples.</returns>
	public static IEnumerable<object[]> ToLowerCVectors() => GoldenVectors.Load("008598F9.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("c").GetInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// The ported lowercase path returns the recorded value for every vector.
	/// </summary>
	/// <param name="character">The character value.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(ToLowerCVectors))]
	public void ToLowerCMatchesTheMachineCode(int character, int expected) =>
		Assert.Equal(expected, CrtCharacters.ToLowerC(character));
}
