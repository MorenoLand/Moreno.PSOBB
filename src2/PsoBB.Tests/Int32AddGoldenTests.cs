using System.Globalization;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 32-bit add-with-carry against vectors produced by the original machine code.
/// </summary>
public sealed class Int32AddGoldenTests
{
	/// <summary>
	/// Loads the vectors for the add-with-carry.
	/// </summary>
	/// <returns>Left operand, right operand, expected carry and expected sum tuples.</returns>
	public static IEnumerable<object[]> AddWithCarryVectors() => GoldenVectors.Load("00869903.json")
		.Select(vector => new object[]
		{
			uint.Parse(vector.GetProperty("left").GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture),
			uint.Parse(vector.GetProperty("right").GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture),
			vector.GetProperty("carry").GetInt32(),
			uint.Parse(vector.GetProperty("sum").GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture),
		});

	/// <summary>
	/// The ported addition returns the recorded carry and sum for every vector.
	/// </summary>
	/// <param name="left">The first addend.</param>
	/// <param name="right">The second addend.</param>
	/// <param name="expectedCarry">The expected carry.</param>
	/// <param name="expectedSum">The expected wrapped sum.</param>
	[Theory]
	[MemberData(nameof(AddWithCarryVectors))]
	public void AddWithCarryMatchesTheMachineCode(uint left, uint right, int expectedCarry, uint expectedSum)
	{
		int carry = Int32Arithmetic.AddWithCarry(left, right, out uint sum);
		Assert.Equal(expectedCarry, carry);
		Assert.Equal(expectedSum, sum);
	}
}
