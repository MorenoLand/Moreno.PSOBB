using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 96-bit one-bit shifts against vectors produced by the original machine code.
/// </summary>
public sealed class Int96ShiftGoldenTests
{
	/// <summary>
	/// Loads the vectors for the left shift.
	/// </summary>
	/// <returns>Dwords before and after the shift.</returns>
	public static IEnumerable<object[]> ShiftLeftVectors() => GoldenVectors.Load("00869982.json")
		.Select(vector => new object[]
		{
			ReadDwords(vector.GetProperty("before")),
			ReadDwords(vector.GetProperty("after")),
		});

	/// <summary>
	/// Loads the vectors for the right shift.
	/// </summary>
	/// <returns>Dwords before and after the shift.</returns>
	public static IEnumerable<object[]> ShiftRightVectors() => GoldenVectors.Load("008699B0.json")
		.Select(vector => new object[]
		{
			ReadDwords(vector.GetProperty("before")),
			ReadDwords(vector.GetProperty("after")),
		});

	/// <summary>
	/// The ported left shift returns the recorded dwords for every vector.
	/// </summary>
	/// <param name="before">The dwords before the shift.</param>
	/// <param name="after">The expected dwords after the shift.</param>
	[Theory]
	[MemberData(nameof(ShiftLeftVectors))]
	public void ShiftLeftMatchesTheMachineCode(uint[] before, uint[] after)
	{
		Int96Arithmetic.ShiftLeftOne(before);
		Assert.Equal(after, before);
	}

	/// <summary>
	/// The ported right shift returns the recorded dwords for every vector.
	/// </summary>
	/// <param name="before">The dwords before the shift.</param>
	/// <param name="after">The expected dwords after the shift.</param>
	[Theory]
	[MemberData(nameof(ShiftRightVectors))]
	public void ShiftRightMatchesTheMachineCode(uint[] before, uint[] after)
	{
		Int96Arithmetic.ShiftRightOne(before);
		Assert.Equal(after, before);
	}

	private static uint[] ReadDwords(System.Text.Json.JsonElement value) =>
		value.EnumerateArray().Select(dword => dword.GetUInt32()).ToArray();
}
