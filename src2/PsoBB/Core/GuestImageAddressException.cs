namespace PsoBB.Core;

/// <summary>
/// Reports a guest virtual-address range that the data image does not map.
/// </summary>
public sealed class GuestImageAddressException : Exception
{
	/// <summary>
	/// Creates the exception for the requested guest range.
	/// </summary>
	/// <param name="address">First guest address of the request.</param>
	/// <param name="length">Number of requested bytes.</param>
	public GuestImageAddressException(uint address, int length)
		: base($"Guest address 0x{address:X8} with length {length} is not mapped by the data image.")
	{
		Address = address;
		Length = length;
	}

	/// <summary>
	/// Gets the first guest address of the rejected request.
	/// </summary>
	public uint Address { get; }

	/// <summary>
	/// Gets the number of requested bytes.
	/// </summary>
	public int Length { get; }
}
