using System.Text.Json;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported flag operations against vectors produced by the original machine code.
/// </summary>
public sealed class FlagOperationsTests
{
	/// <summary>
	/// Loads the vectors for the second-bit helper.
	/// </summary>
	/// <returns>Initial and resulting 32-bit values.</returns>
	public static List<object[]> ClearSecondBitVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "005DD34C.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				unchecked((int)vector.GetProperty("initial").GetInt64()),
				unchecked((int)vector.GetProperty("result").GetInt64()),
			]);
		return rows;
	}

	/// <summary>
	/// The ported helper produces the recorded value for every vector.
	/// </summary>
	/// <param name="initial">The value before the operation.</param>
	/// <param name="expected">The value after the original ran.</param>
	[Theory]
	[MemberData(nameof(ClearSecondBitVectors))]
	public void ClearSecondBitMatchesTheMachineCode(int initial, int expected)
	{
		FlagOperations.ClearSecondBit(ref initial);
		Assert.Equal(expected, initial);
	}
}
