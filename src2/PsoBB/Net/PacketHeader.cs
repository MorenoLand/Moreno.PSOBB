using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The eight-byte Blue Burst packet header.
/// </summary>
/// <remarks>
/// The length includes the header itself. The command word holds the command number in its low byte and an optional subcommand in its high byte.
/// </remarks>
public readonly struct PacketHeader : IEquatable<PacketHeader>
{
	/// <summary>The size of the header on the wire.</summary>
	public const int Size = 8;

	/// <summary>
	/// Creates a header from its wire fields.
	/// </summary>
	/// <param name="length">The total packet length, including the header.</param>
	/// <param name="command">The command word; the low byte is the command number.</param>
	/// <param name="flags">The command-specific flag word.</param>
	public PacketHeader(ushort length, ushort command, uint flags)
	{
		Length = length;
		Command = command;
		Flags = flags;
	}

	/// <summary>Gets the total packet length, including the header.</summary>
	public ushort Length { get; }

	/// <summary>Gets the command word, with the command number in the low byte and the subcommand in the high byte.</summary>
	public ushort Command { get; }

	/// <summary>Gets the command number, which is the low byte of <see cref="Command"/>.</summary>
	public byte Opcode => (byte)Command;

	/// <summary>Gets the subcommand number, which is the high byte of <see cref="Command"/>.</summary>
	public byte Subcommand => (byte)(Command >> 8);

	/// <summary>Gets the command-specific flag word.</summary>
	public uint Flags { get; }

	/// <summary>
	/// Reads a header from the first eight bytes of <paramref name="source"/>.
	/// </summary>
	/// <param name="source">The buffer beginning with the header.</param>
	/// <returns>The decoded header.</returns>
	/// <exception cref="InvalidDataException">The buffer contains fewer than eight bytes.</exception>
	public static PacketHeader Read(ReadOnlySpan<byte> source)
	{
		if (source.Length < Size)
			throw new InvalidDataException($"Packet header requires {Size} bytes but only {source.Length} are available.");
		return new PacketHeader(
			BinaryPrimitives.ReadUInt16LittleEndian(source),
			BinaryPrimitives.ReadUInt16LittleEndian(source[2..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[4..]));
	}

	/// <summary>
	/// Writes the header to the first eight bytes of <paramref name="destination"/>.
	/// </summary>
	/// <param name="destination">The buffer that receives the header.</param>
	/// <exception cref="ArgumentException">The destination is shorter than eight bytes.</exception>
	public void Write(Span<byte> destination)
	{
		if (destination.Length < Size)
			throw new ArgumentException($"Packet header requires {Size} bytes but the destination has {destination.Length}.", nameof(destination));
		BinaryPrimitives.WriteUInt16LittleEndian(destination, Length);
		BinaryPrimitives.WriteUInt16LittleEndian(destination[2..], Command);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[4..], Flags);
	}

	/// <inheritdoc/>
	public bool Equals(PacketHeader other) => Length == other.Length && Command == other.Command && Flags == other.Flags;

	/// <inheritdoc/>
	public override bool Equals(object? obj) => obj is PacketHeader other && Equals(other);

	/// <inheritdoc/>
	public override int GetHashCode() => HashCode.Combine(Length, Command, Flags);

	/// <summary>Returns whether two headers contain the same fields.</summary>
	/// <param name="left">The first header.</param>
	/// <param name="right">The second header.</param>
	/// <returns><see langword="true"/> when the headers are equal.</returns>
	public static bool operator ==(PacketHeader left, PacketHeader right) => left.Equals(right);

	/// <summary>Returns whether two headers differ.</summary>
	/// <param name="left">The first header.</param>
	/// <param name="right">The second header.</param>
	/// <returns><see langword="true"/> when the headers differ.</returns>
	public static bool operator !=(PacketHeader left, PacketHeader right) => !left.Equals(right);
}
