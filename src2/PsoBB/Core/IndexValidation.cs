namespace PsoBB.Core;

/// <summary>
/// Validation of the small indices the client uses for fixed tables.
/// </summary>
public static class IndexValidation
{
	/// <summary>
	/// Returns the value when it is between 0 and 11 inclusive; otherwise returns zero.
	/// </summary>
	/// <param name="value">The signed index to validate.</param>
	/// <returns>The index, or zero when it is outside the valid range.</returns>
	[Original(0x0068C45C)]
	public static int ValidateSmallIndex(sbyte value) => value is >= 0 and < 12 ? value : 0;
}
