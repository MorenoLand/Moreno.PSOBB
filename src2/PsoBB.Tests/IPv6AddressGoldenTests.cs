using System.Globalization;
using PsoBB.Net;

namespace PsoBB.Tests;

/// <summary>
/// Checks the embedded IPv4 accessor against vectors produced by the original machine code.
/// </summary>
public sealed class IPv6AddressGoldenTests
{
	/// <summary>
	/// Loads the vectors for the embedded IPv4 accessor.
	/// </summary>
	/// <returns>Address bytes and expected dword tuples.</returns>
	public static IEnumerable<object[]> EmbeddedIPv4Vectors() => GoldenVectors.Load("008A8C52.json")
		.Select(vector => new object[]
		{
			Convert.FromHexString(vector.GetProperty("address").GetString()!),
			uint.Parse(vector.GetProperty("result").GetString()!, NumberStyles.HexNumber, CultureInfo.InvariantCulture),
		});

	/// <summary>
	/// The ported accessor returns the recorded dword for every vector.
	/// </summary>
	/// <param name="address">The sixteen-byte address structure.</param>
	/// <param name="expected">The expected dword.</param>
	[Theory]
	[MemberData(nameof(EmbeddedIPv4Vectors))]
	public void EmbeddedIPv4MatchesTheMachineCode(byte[] address, uint expected) =>
		Assert.Equal(expected, IPv6Addresses.EmbeddedIPv4(address));
}
