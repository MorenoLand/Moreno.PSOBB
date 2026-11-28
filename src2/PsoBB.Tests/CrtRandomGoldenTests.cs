using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the C runtime's seeding and pseudo-random sequence against vectors produced by the original machine code.
/// </summary>
public sealed class CrtRandomGoldenTests
{
	/// <summary>
	/// Loads the vectors for <c>_srand</c>.
	/// </summary>
	/// <returns>Seed and expected state tuples.</returns>
	public static IEnumerable<object[]> SrandVectors() => GoldenVectors.Load("00858798.json")
		.Select(vector => new object[]
		{
			(uint)vector.GetProperty("seed").GetInt64(),
			(uint)vector.GetProperty("state").GetInt64(),
		});

	/// <summary>
	/// Loads the vectors for <c>_rand</c>.
	/// </summary>
	/// <returns>Seed, expected result and expected state tuples.</returns>
	public static IEnumerable<object[]> RandVectors() => GoldenVectors.Load("008587A5.json")
		.Select(vector => new object[]
		{
			(uint)vector.GetProperty("seed").GetInt64(),
			vector.GetProperty("result").GetInt32(),
			(uint)vector.GetProperty("state").GetInt64(),
		});

	/// <summary>
	/// The ported seeding stores the seed unchanged for every vector.
	/// </summary>
	/// <param name="seed">The seed passed to <c>_srand</c>.</param>
	/// <param name="expected">The state the original stores.</param>
	[Theory]
	[MemberData(nameof(SrandVectors))]
	public void SeedMatchesTheMachineCode(uint seed, uint expected)
	{
		uint state = 0;
		CrtRandom.Seed(ref state, seed);
		Assert.Equal(expected, state);
	}

	/// <summary>
	/// The ported generator returns the recorded value and leaves the recorded state for every vector.
	/// </summary>
	/// <param name="seed">The state before the call.</param>
	/// <param name="expected">The value the original returns.</param>
	/// <param name="expectedState">The state the original leaves.</param>
	[Theory]
	[MemberData(nameof(RandVectors))]
	public void NextMatchesTheMachineCode(uint seed, int expected, uint expectedState)
	{
		uint state = seed;
		Assert.Equal(expected, CrtRandom.Next(ref state));
		Assert.Equal(expectedState, state);
	}

	/// <summary>
	/// The process-wide sequence starts at the thread-data seed of one.
	/// </summary>
	[Fact]
	public void ProcessSequenceStartsAtTheInitialSeed()
	{
		uint state = CrtRandom.InitialSeed;
		Assert.Equal(CrtRandom.Next(ref state), CrtRandom.Rand());
	}
}
