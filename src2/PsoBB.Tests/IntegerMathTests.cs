using System.Text.Json;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported integer helpers against vectors produced by the original machine code.
/// </summary>
public sealed class IntegerMathTests
{
	/// <summary>
	/// Loads the vectors for the multiply-add helper.
	/// </summary>
	/// <returns>Addend, factor, multiplier and expected result tuples.</returns>
	public static List<object[]> MultiplyAddVectors() => Load("007A9608.json", vector =>
	[
		vector.GetProperty("addend").GetInt32(),
		vector.GetProperty("factor").GetInt32(),
		(short)vector.GetProperty("multiplier").GetInt32(),
		unchecked((int)vector.GetProperty("result").GetInt64()),
	]);

	/// <summary>
	/// Loads the vectors for the biased division helper.
	/// </summary>
	/// <returns>Total, divisor, quotient and remainder tuples.</returns>
	public static List<object[]> DivideVectors() => Load("008A8CE1.json", vector =>
	[
		vector.GetProperty("total").GetInt32(),
		vector.GetProperty("divisor").GetInt32(),
		unchecked((int)vector.GetProperty("quotient").GetInt64()),
		unchecked((int)vector.GetProperty("remainder").GetInt64()),
	]);

	/// <summary>
	/// The ported multiply-add returns the recorded result for every vector.
	/// </summary>
	/// <param name="addend">The value added after the multiplication.</param>
	/// <param name="factor">The 32-bit multiplier.</param>
	/// <param name="multiplier">The signed 16-bit operand.</param>
	/// <param name="expected">The expected combined value.</param>
	[Theory]
	[MemberData(nameof(MultiplyAddVectors))]
	public void MultiplyAddMatchesTheMachineCode(int addend, int factor, short multiplier, int expected)
	{
		Assert.Equal(expected, IntegerMath.MultiplyAdd(addend, factor, multiplier));
	}

	/// <summary>
	/// The ported division returns the recorded quotient and remainder for every vector.
	/// </summary>
	/// <param name="total">The value the divisor bias is added to.</param>
	/// <param name="divisor">The non-zero divisor.</param>
	/// <param name="quotient">The expected quotient.</param>
	/// <param name="remainder">The expected remainder.</param>
	[Theory]
	[MemberData(nameof(DivideVectors))]
	public void DivideRoundingUpMatchesTheMachineCode(int total, int divisor, int quotient, int remainder)
	{
		DivisionResult result = IntegerMath.DivideRoundingUp(total, divisor);
		Assert.Equal(quotient, result.Quotient);
		Assert.Equal(remainder, result.Remainder);
	}

	/// <summary>
	/// Reads one fixture and maps every vector to a test row.
	/// </summary>
	/// <param name="name">Fixture file name.</param>
	/// <param name="map">Mapping from a JSON vector to a row.</param>
	/// <returns>The mapped rows.</returns>
	private static List<object[]> Load(string name, Func<JsonElement, object[]> map)
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", name);
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(map(vector));
		return rows;
	}
}
