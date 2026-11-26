namespace PsoBB.Core;

/// <summary>
/// Predicates over the 16-bit identifiers and offsets used by the original client.
/// </summary>
public static class AddressPredicates
{
	/// <summary>
	/// Returns <see langword="true"/> when <paramref name="value"/> is below the 0x1000 page boundary.
	/// The original subtracts 0x1000 and returns the sign bit, so the test is an unsigned comparison.
	/// </summary>
	/// <param name="value">The 16-bit value supplied by the caller.</param>
	/// <returns><see langword="true"/> for values 0x0000 through 0x0FFF.</returns>
	[Original(0x0051F8D8)]
	public static bool IsBelowPageSize(ushort value) => value < 0x1000;
}
