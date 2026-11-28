using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the C runtime's sort routines against vectors produced by the original machine code.
/// </summary>
public sealed class CrtSortGoldenTests
{
	/// <summary>
	/// Loads the vectors for <c>_shortsort</c>.
	/// </summary>
	/// <returns>Width, input and expected output tuples.</returns>
	public static IEnumerable<object[]> ShortSortVectors() => LoadVectors("008CAD70.json");

	/// <summary>
	/// Loads the vectors for <c>_qsort</c>.
	/// </summary>
	/// <returns>Width, input and expected output tuples.</returns>
	public static IEnumerable<object[]> QuickSortVectors() => LoadVectors("008CADE0.json");

	/// <summary>
	/// The ported selection sort leaves the bytes the original leaves for every vector.
	/// </summary>
	/// <param name="width">The element width.</param>
	/// <param name="input">The elements before the call.</param>
	/// <param name="expected">The elements after the call.</param>
	[Theory]
	[MemberData(nameof(ShortSortVectors))]
	public void ShortSortMatchesTheMachineCode(int width, byte[] input, byte[] expected)
	{
		byte[] array = (byte[])input.Clone();
		CrtSort.ShortSort(array, 0, input.Length - width, width, CompareFirstDword);
		Assert.Equal(expected, array);
	}

	/// <summary>
	/// The ported quicksort leaves the bytes the original leaves for every vector.
	/// </summary>
	/// <param name="width">The element width.</param>
	/// <param name="input">The elements before the call.</param>
	/// <param name="expected">The elements after the call.</param>
	[Theory]
	[MemberData(nameof(QuickSortVectors))]
	public void QuickSortMatchesTheMachineCode(int width, byte[] input, byte[] expected)
	{
		byte[] array = (byte[])input.Clone();
		CrtSort.QuickSort(array, width, CompareFirstDword);
		Assert.Equal(expected, array);
	}

	private static IEnumerable<object[]> LoadVectors(string name) => GoldenVectors.Load(name)
		.Select(vector => new object[]
		{
			vector.GetProperty("width").GetInt32(),
			Convert.FromHexString(vector.GetProperty("input").GetString()!),
			Convert.FromHexString(vector.GetProperty("output").GetString()!),
		});

	private static int CompareFirstDword(ReadOnlySpan<byte> left, ReadOnlySpan<byte> right) =>
		unchecked(BitConverter.ToInt32(left) - BitConverter.ToInt32(right));
}
