namespace PsoBB.Net;

/// <summary>
/// The server push of the account system file (command 0xE2).
/// </summary>
/// <remarks>
/// The payload is the base system file followed by the full team membership record. The two sections are kept as opaque bytes in this layer because their internal fields belong to the save-file codecs.
/// </remarks>
public sealed class SyncSystemFilePacket
{
	/// <summary>The width of the base system file section.</summary>
	public const int SystemFileLength = 0x2B8;

	/// <summary>The width of the team membership section.</summary>
	public const int TeamMembershipLength = 0x838;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = SystemFileLength + TeamMembershipLength;

	/// <summary>The base system file bytes.</summary>
	public required ReadOnlyMemory<byte> SystemFile { get; init; }

	/// <summary>The full team membership bytes.</summary>
	public required ReadOnlyMemory<byte> TeamMembership { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The 0xAF0 payload bytes after the header.</param>
	/// <returns>The decoded system file packet.</returns>
	/// <exception cref="InvalidDataException">The payload length is not 0xAF0.</exception>
	public static SyncSystemFilePacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "system file sync", PayloadLength);
		return new SyncSystemFilePacket
		{
			SystemFile = PacketField.ReadExact(payload, 0, SystemFileLength, "system file"),
			TeamMembership = PacketField.ReadExact(payload, SystemFileLength, TeamMembershipLength, "team membership"),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The 0xAF0 payload bytes.</returns>
	/// <exception cref="ArgumentException">Either section has the wrong length.</exception>
	[Original(0x0046EB60)]
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		PacketField.WriteExact(payload.AsSpan(0, SystemFileLength), SystemFile.Span, "system file");
		PacketField.WriteExact(payload.AsSpan(SystemFileLength, TeamMembershipLength), TeamMembership.Span, "team membership");
		return payload;
	}

	/// <summary>
	/// Creates the framed 0xE2 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.SyncSystemFile, 0, WritePayload());
}
