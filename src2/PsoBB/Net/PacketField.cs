using PsoBB.Core;

namespace PsoBB.Net;

/// <summary>
/// Shared fixed-width field encoding for the handshake packet bodies.
/// </summary>
internal static class PacketField
{
	/// <summary>
	/// Writes a byte string into a fixed-width field, padding the remainder with zero bytes.
	/// </summary>
	/// <param name="destination">The fixed-width field.</param>
	/// <param name="value">The string to write.</param>
	/// <param name="name">The field name used in error messages.</param>
	/// <exception cref="ArgumentException">The string is longer than the field.</exception>
	public static void WriteText(Span<byte> destination, ByteString value, string name)
	{
		ArgumentNullException.ThrowIfNull(value);
		if (value.Length > destination.Length)
			throw new ArgumentException($"The {name} field holds at most {destination.Length} bytes but the value has {value.Length}.", name);
		destination.Clear();
		value.Bytes.CopyTo(destination);
	}

	/// <summary>
	/// Reads a fixed-width byte string, stopping at its first zero byte.
	/// </summary>
	/// <param name="source">The fixed-width field.</param>
	/// <returns>The decoded byte string.</returns>
	public static ByteString ReadText(ReadOnlySpan<byte> source) => ByteString.FromBytes(source);

	/// <summary>
	/// Copies a byte sequence whose length must equal the destination.
	/// </summary>
	/// <param name="destination">The fixed-width destination.</param>
	/// <param name="value">The value to copy.</param>
	/// <param name="name">The field name used in error messages.</param>
	/// <exception cref="ArgumentException">The value length differs from the destination length.</exception>
	public static void WriteExact(Span<byte> destination, ReadOnlySpan<byte> value, string name)
	{
		if (value.Length != destination.Length)
			throw new ArgumentException($"The {name} field must contain exactly {destination.Length} bytes but has {value.Length}.", name);
		value.CopyTo(destination);
	}

	/// <summary>
	/// Reads a byte sequence whose length must equal <paramref name="length"/>.
	/// </summary>
	/// <param name="source">The source bytes.</param>
	/// <param name="offset">The field offset.</param>
	/// <param name="length">The field length.</param>
	/// <param name="name">The field name used in error messages.</param>
	/// <returns>A copy of the field.</returns>
	/// <exception cref="InvalidDataException">The payload is too short for the field.</exception>
	public static byte[] ReadExact(ReadOnlySpan<byte> source, int offset, int length, string name)
	{
		if (source.Length < offset + length)
			throw new InvalidDataException($"The payload is too short for the {name} field at offset 0x{offset:X}.");
		return source.Slice(offset, length).ToArray();
	}

	/// <summary>
	/// Requires a payload to have exactly one of the accepted lengths.
	/// </summary>
	/// <param name="length">The actual payload length.</param>
	/// <param name="name">The packet name used in error messages.</param>
	/// <param name="accepted">The accepted payload lengths.</param>
	/// <exception cref="InvalidDataException">The length is not accepted.</exception>
	public static void RequireLength(int length, string name, params int[] accepted)
	{
		foreach (int candidate in accepted)
		{
			if (length == candidate)
				return;
		}
		throw new InvalidDataException($"The {name} payload has length 0x{length:X} but this packet accepts {string.Join(" or ", Array.ConvertAll(accepted, value => $"0x{value:X}"))}.");
	}
}
