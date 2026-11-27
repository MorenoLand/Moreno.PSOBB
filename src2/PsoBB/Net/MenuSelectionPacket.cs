using System.Buffers.Binary;

namespace PsoBB.Net;

/// <summary>
/// The base command 0x10 menu selection: a menu identifier and an item identifier.
/// </summary>
/// <remarks>
/// The Blue Burst main menu uses menu <c>0x11000011</c> and item <c>0x11222211</c> for "Go to lobby"
/// (<c>0x007D4068</c> sends the two record values back). Longer variants append a name or password;
/// the port sends only the base form.
/// </remarks>
public sealed class MenuSelectionPacket
{
	/// <summary>The main menu identifier.</summary>
	public const uint MainMenuId = 0x11000011;

	/// <summary>The "Go to lobby" item identifier.</summary>
	public const uint GoToLobbyItem = 0x11222211;

	/// <summary>The payload size, excluding the packet header.</summary>
	public const int PayloadLength = 8;

	/// <summary>The menu identifier.</summary>
	public uint MenuId { get; init; }

	/// <summary>The selected item identifier.</summary>
	public uint ItemId { get; init; }

	/// <summary>
	/// Reads the command payload.
	/// </summary>
	/// <param name="payload">The eight payload bytes after the header.</param>
	/// <returns>The decoded selection.</returns>
	/// <exception cref="InvalidDataException">The payload length is not eight.</exception>
	public static MenuSelectionPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "menu selection", PayloadLength);
		return new MenuSelectionPacket
		{
			MenuId = BinaryPrimitives.ReadUInt32LittleEndian(payload),
			ItemId = BinaryPrimitives.ReadUInt32LittleEndian(payload[4..]),
		};
	}

	/// <summary>
	/// Writes the command payload.
	/// </summary>
	/// <returns>The eight payload bytes.</returns>
	public byte[] WritePayload()
	{
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, MenuId);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(4), ItemId);
		return payload;
	}

	/// <summary>
	/// Creates the framed 0x10 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.MenuSelection, 0, WritePayload());
}
