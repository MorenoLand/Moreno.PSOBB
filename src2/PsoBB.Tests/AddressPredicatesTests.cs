using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported address predicates against the original's boundary behaviour.
/// </summary>
public sealed class AddressPredicatesTests
{
	/// <summary>
	/// Values below 0x1000 return true and values at or above it return false.
	/// </summary>
	/// <param name="value">The 16-bit input.</param>
	/// <param name="expected">The original's return value.</param>
	[Theory]
	[InlineData(0x0000, true)]
	[InlineData(0x0001, true)]
	[InlineData(0x0FFF, true)]
	[InlineData(0x1000, false)]
	[InlineData(0x1001, false)]
	[InlineData(0xFFFF, false)]
	public void IsBelowPageSizeMatchesTheOriginal(ushort value, bool expected)
	{
		Assert.Equal(expected, AddressPredicates.IsBelowPageSize(value));
	}
}
