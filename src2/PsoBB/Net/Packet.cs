namespace PsoBB.Net;

/// <summary>
/// A complete packet consisting of the eight-byte header and its payload.
/// </summary>
public sealed class Packet
{
	/// <summary>
	/// Creates a packet from an existing header and payload.
	/// </summary>
	/// <param name="header">The packet header; its length must match the payload.</param>
	/// <param name="payload">The bytes after the header.</param>
	/// <exception cref="ArgumentException">The header length does not match the payload length.</exception>
	public Packet(PacketHeader header, ReadOnlySpan<byte> payload)
	{
		if (header.Length != PacketHeader.Size + payload.Length)
			throw new ArgumentException($"Header length 0x{header.Length:X4} does not match a {payload.Length}-byte payload.", nameof(header));
		Header = header;
		Payload = payload.ToArray();
	}

	/// <summary>Gets the packet header.</summary>
	public PacketHeader Header { get; }

	/// <summary>Gets the payload bytes that follow the header.</summary>
	public ReadOnlyMemory<byte> Payload { get; }

	/// <summary>Gets the total packet length, including the header.</summary>
	public int Length => Header.Length;

	/// <summary>
	/// Creates a packet for <paramref name="command"/> with the supplied flags and payload.
	/// </summary>
	/// <param name="command">The command to place in the header.</param>
	/// <param name="flags">The command-specific flag word.</param>
	/// <param name="payload">The bytes after the header.</param>
	/// <returns>The framed packet.</returns>
	/// <exception cref="ArgumentException">The payload is too large for the 16-bit length field.</exception>
	public static Packet Create(PacketCommand command, uint flags, ReadOnlySpan<byte> payload)
	{
		int length = PacketHeader.Size + payload.Length;
		if (length > ushort.MaxValue)
			throw new ArgumentException($"Packet length {length} does not fit the 16-bit length field.", nameof(payload));
		return new Packet(new PacketHeader((ushort)length, (ushort)command, flags), payload);
	}

	/// <summary>
	/// Reads one packet from the beginning of <paramref name="source"/>.
	/// </summary>
	/// <param name="source">The buffer beginning with a packet header.</param>
	/// <returns>The packet; bytes after its declared length are ignored.</returns>
	/// <exception cref="InvalidDataException">The header or packet body is incomplete, or the length is smaller than the header.</exception>
	public static Packet Read(ReadOnlySpan<byte> source)
	{
		PacketHeader header = PacketHeader.Read(source);
		if (header.Length < PacketHeader.Size)
			throw new InvalidDataException($"Packet length 0x{header.Length:X4} is smaller than the {PacketHeader.Size}-byte header.");
		if (source.Length < header.Length)
			throw new InvalidDataException($"Packet declares 0x{header.Length:X4} bytes but only 0x{source.Length:X4} are available.");
		return new Packet(header, source.Slice(PacketHeader.Size, header.Length - PacketHeader.Size));
	}

	/// <summary>
	/// Writes the complete packet to <paramref name="destination"/>.
	/// </summary>
	/// <param name="destination">The buffer that receives the header and payload.</param>
	/// <exception cref="ArgumentException">The destination is shorter than the packet.</exception>
	public void WriteTo(Span<byte> destination)
	{
		if (destination.Length < Length)
			throw new ArgumentException($"Packet requires {Length} bytes but the destination has {destination.Length}.", nameof(destination));
		Header.Write(destination);
		Payload.Span.CopyTo(destination[PacketHeader.Size..]);
	}

	/// <summary>
	/// Returns the complete packet as a new array.
	/// </summary>
	/// <returns>The header followed by the payload.</returns>
	public byte[] ToArray()
	{
		byte[] result = new byte[Length];
		WriteTo(result);
		return result;
	}

	/// <summary>
	/// Returns whether the header command number is <paramref name="command"/>.
	/// </summary>
	/// <param name="command">The expected command.</param>
	/// <returns><see langword="true"/> when the low command byte matches.</returns>
	public bool IsCommand(PacketCommand command) => Header.Opcode == (byte)command;
}
