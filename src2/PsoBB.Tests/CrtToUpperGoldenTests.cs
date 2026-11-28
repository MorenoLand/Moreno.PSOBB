using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the C-locale uppercase path against vectors produced by the original machine code.
/// </summary>
public sealed class CrtToUpperGoldenTests
{
	/// <summary>
	/// Loads the vectors for the C-locale uppercase path.
	/// </summary>
	/// <returns>Character and expected result tuples.</returns>
	public static IEnumerable<object[]> ToUpperCVectors() => GoldenVectors.Load("00858A24.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("c").GetInt32(),
			vector.GetProperty("result").GetInt32(),
		});

	/// <summary>
	/// The ported uppercase path returns the recorded value for every vector.
	/// </summary>
	/// <param name="character">The character value.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(ToUpperCVectors))]
	public void ToUpperCMatchesTheMachineCode(int character, int expected) =>
		Assert.Equal(expected, CrtCharacters.ToUpperC(character));
}
