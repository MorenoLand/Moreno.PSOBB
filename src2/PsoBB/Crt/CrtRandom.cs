namespace PsoBB.Crt;

/// <summary>
/// The C runtime's pseudo-random sequence. The original game draws its random numbers from this linear congruential generator, so the port must produce the same sequence from the same seed.
/// </summary>
public static class CrtRandom
{
	/// <summary>
	/// The seed the original's per-thread block holds before the first call to <c>srand</c>; the thread-data initializer stores one there.
	/// </summary>
	public const uint InitialSeed = 1;

	private static uint processState = InitialSeed;

	/// <summary>
	/// Sets the seed of the process-wide sequence.
	/// </summary>
	/// <param name="seed">The new seed.</param>
	public static void Srand(uint seed) => Seed(ref processState, seed);

	/// <summary>
	/// Returns the next value of the process-wide sequence, between zero and 0x7FFF inclusive.
	/// </summary>
	/// <returns>The next pseudo-random value.</returns>
	public static int Rand() => Next(ref processState);

	/// <summary>
	/// Stores a new seed in the state of one sequence, as the original's <c>_srand</c> does with its per-thread block.
	/// </summary>
	/// <param name="state">The sequence state.</param>
	/// <param name="seed">The new seed.</param>
	[Original(0x00858798, "_srand")]
	public static void Seed(ref uint state, uint seed) => state = seed;

	/// <summary>
	/// Advances one sequence state and returns the next value, as the original's <c>_rand</c> does with its per-thread block.
	/// </summary>
	/// <param name="state">The sequence state, updated in place.</param>
	/// <returns>A value between zero and 0x7FFF inclusive.</returns>
	[Original(0x008587A5, "_rand")]
	public static int Next(ref uint state)
	{
		state = unchecked(state * 0x343FD + 0x269EC3);
		return (int)((state >> 16) & 0x7FFF);
	}
}
