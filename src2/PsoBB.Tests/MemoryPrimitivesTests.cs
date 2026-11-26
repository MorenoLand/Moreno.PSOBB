using System.Text.Json;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported memory helpers against vectors produced by the original machine code.
/// </summary>
public sealed class MemoryPrimitivesTests
{
	/// <summary>
	/// Loads the vectors for the pair-clearing helper.
	/// </summary>
	/// <returns>Initial values and the values after the original clears them.</returns>
	public static List<object[]> ClearPairVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "0082E930.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				unchecked((int)vector.GetProperty("first").GetInt64()),
				unchecked((int)vector.GetProperty("second").GetInt64()),
				unchecked((int)vector.GetProperty("first_after").GetInt64()),
				unchecked((int)vector.GetProperty("second_after").GetInt64()),
			]);
		return rows;
	}

	/// <summary>
	/// The ported helper clears both values exactly as the original does.
	/// </summary>
	/// <param name="first">The initial first value.</param>
	/// <param name="second">The initial second value.</param>
	/// <param name="firstAfter">The first value after the original ran.</param>
	/// <param name="secondAfter">The second value after the original ran.</param>
	[Theory]
	[MemberData(nameof(ClearPairVectors))]
	public void ClearPairMatchesTheMachineCode(int first, int second, int firstAfter, int secondAfter)
	{
		MemoryPrimitives.ClearPair(ref first, ref second);
		Assert.Equal(firstAfter, first);
		Assert.Equal(secondAfter, second);
	}
}
