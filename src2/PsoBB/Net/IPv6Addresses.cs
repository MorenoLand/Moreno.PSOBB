using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// Accessors for the sixteen-byte IPv6 address structure the original's networking code keeps.
/// </summary>
public static class IPv6Addresses
{
	/// <summary>
	/// Returns the IPv4 dword stored at offset twelve of an IPv6 address structure, as the original's <c>_IP6_GET_V4_ADDR</c> does.
	/// </summary>
	/// <param name="address">The sixteen-byte address structure.</param>
	/// <returns>The little-endian dword at offset twelve.</returns>
	/// <exception cref="ArgumentException">The structure is shorter than sixteen bytes.</exception>
	[Original(0x008A8C52, "_IP6_GET_V4_ADDR@4")]
	public static uint EmbeddedIPv4(ReadOnlySpan<byte> address)
	{
		if (address.Length < 16)
			throw new ArgumentException("An IPv6 address structure is sixteen bytes long.", nameof(address));
		return BinaryPrimitives.ReadUInt32LittleEndian(address.Slice(12, 4));
	}
}
