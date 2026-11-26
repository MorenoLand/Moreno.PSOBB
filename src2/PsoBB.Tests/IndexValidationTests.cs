using System.Text.Json;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported index validation against vectors produced by the original machine code.
/// </summary>
public sealed class IndexValidationTests
{
	/// <summary>
	/// Loads the vectors for the small-index validator.
	/// </summary>
	/// <returns>Input and expected result pairs.</returns>
	public static List<object[]> ValidateSmallIndexVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "0068C45C.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				(sbyte)vector.GetProperty("value").GetInt32(),
				unchecked((int)vector.GetProperty("result").GetInt64()),
			]);
		return rows;
	}

	/// <summary>
	/// The ported validator returns the recorded result for every vector.
	/// </summary>
	/// <param name="value">The signed index.</param>
	/// <param name="expected">The expected result.</param>
	[Theory]
	[MemberData(nameof(ValidateSmallIndexVectors))]
	public void ValidateSmallIndexMatchesTheMachineCode(sbyte value, int expected)
	{
		Assert.Equal(expected, IndexValidation.ValidateSmallIndex(value));
	}
}
