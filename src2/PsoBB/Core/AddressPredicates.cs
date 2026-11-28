namespace PsoBB.Core;

/// <summary>
/// Predicates over the 16-bit identifiers the client passes between its systems.
/// </summary>
public static class AddressPredicates
{
	/// <summary>
	/// Returns whether a 16-bit identifier lies below the first 0x1000 values.
	/// </summary>
	/// <param name="value">The identifier to test.</param>
	/// <returns><see langword="true"/> for 0x0000 through 0x0FFF.</returns>
	[Original(0x0051F8D8)]
	public static bool IsBelowPageSize(ushort value) => value < 0x1000;
}
