using System.Text.Json;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported bit operations against vectors produced by the original machine code.
/// </summary>
public sealed class BitOperationsTests
{
	/// <summary>
	/// Loads the vectors for the low-bit helper.
	/// </summary>
	/// <returns>Initial and resulting 16-bit values.</returns>
	public static List<object[]> SetLowBitVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "005CEA60.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				(ushort)vector.GetProperty("initial").GetInt32(),
				(ushort)vector.GetProperty("result").GetInt32(),
			]);
		return rows;
	}

	/// <summary>
	/// The ported helper produces the same 16-bit value as the original.
	/// </summary>
	/// <param name="initial">The value before the operation.</param>
	/// <param name="expected">The value after the original ran.</param>
	[Theory]
	[MemberData(nameof(SetLowBitVectors))]
	public void SetLowBitMatchesTheMachineCode(ushort initial, ushort expected)
	{
		BitOperations.SetLowBit(ref initial);
		Assert.Equal(expected, initial);
	}
}
