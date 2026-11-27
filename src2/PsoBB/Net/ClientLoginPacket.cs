using System.Buffers.Binary;
using PsoBB.Core;

namespace PsoBB.Net;

/// <summary>
/// The client login (command 0x93) sent after the welcome packet.
/// </summary>
/// <remarks>
/// There are three wire lengths: the base form is 0x7C bytes, a form with the 0x28-byte client configuration is 0xA4 bytes, and the newest form adds a big-endian hardware identifier before the configuration for 0xAC bytes.
/// </remarks>
public sealed class ClientLoginPacket
{
	/// <summary>The player tag value the client normally sends.</summary>
	public const uint DefaultPlayerTag = 0x00010000;

	/// <summary>The width of the account name field.</summary>
	public const int AccountTextLength = 0x30;

	/// <summary>The width of the client configuration field.</summary>
	public const int ClientConfigLength = 0x28;

	/// <summary>The base payload size, excluding the packet header.</summary>
	public const int BasePayloadLength = 0x7C;

	/// <summary>The payload size when the client configuration is present.</summary>
	public const int WithClientConfigPayloadLength = 0xA4;

	/// <summary>The payload size when the hardware identifier and client configuration are present.</summary>
	public const int WithHardwareInfoPayloadLength = 0xAC;

	/// <summary>The value identifying the client as present; two leading bytes are usually zero.</summary>
	public uint PlayerTag { get; init; } = DefaultPlayerTag;

	/// <summary>The account guild card number, or zero before the server assigns one.</summary>
	public uint GuildCardNumber { get; init; }

	/// <summary>The client program version.</summary>
	public uint SubVersion { get; init; }

	/// <summary>The client language code.</summary>
	public byte Language { get; init; }

	/// <summary>The selected character slot, or -1 when no slot is selected.</summary>
	public sbyte CharacterSlot { get; init; }

	/// <summary>
	/// The login phase: 0 initial connection, 1 choose character, 2 create character, 3 apply dressing-room updates, 4 login server, 5 lobby server, or 6 lobby server with meet-user fields.
	/// </summary>
	public byte ConnectionPhase { get; init; }

	/// <summary>A client build or platform code.</summary>
	public byte ClientCode { get; init; }

	/// <summary>The token that determines whether the client scrambles the configuration before returning it.</summary>
	public uint SecurityToken { get; init; }

	/// <summary>The account name, padded with zero bytes to 0x30 bytes on the wire.</summary>
	public required ByteString Username { get; init; }

	/// <summary>The account password, padded with zero bytes to 0x30 bytes on the wire.</summary>
	public required ByteString Password { get; init; }

	/// <summary>The selected menu identifier.</summary>
	public uint MenuId { get; init; }

	/// <summary>The preferred lobby identifier.</summary>
	public uint PreferredLobbyId { get; init; }

	/// <summary>The optional big-endian hardware identifier sent by newer clients.</summary>
	public ulong? HardwareId { get; init; }

	/// <summary>The optional 0x28-byte opaque client configuration; required when <see cref="HardwareId"/> is present.</summary>
	public ReadOnlyMemory<byte>? ClientConfig { get; init; }

	/// <summary>Gets the payload length implied by the optional fields.</summary>
	public int PayloadLength => HardwareId.HasValue ? WithHardwareInfoPayloadLength : ClientConfig.HasValue ? WithClientConfigPayloadLength : BasePayloadLength;

	/// <summary>
	/// Copies the login with the guild card and security token the client-init reply assigned.
	/// </summary>
	/// <param name="guildCardNumber">The guild card number from the 0xE6 reply.</param>
	/// <param name="securityToken">The security token from the 0xE6 reply.</param>
	/// <param name="clientConfig">The command-0xE6 client configuration, or empty to keep the current value.</param>
	/// <returns>The login for the redirected connection.</returns>
	public ClientLoginPacket WithServerState(uint guildCardNumber, uint securityToken, ReadOnlyMemory<byte> clientConfig) => new()
	{
		PlayerTag = PlayerTag,
		GuildCardNumber = guildCardNumber,
		SubVersion = SubVersion,
		Language = Language,
		CharacterSlot = CharacterSlot,
		ConnectionPhase = ConnectionPhase,
		ClientCode = ClientCode,
		SecurityToken = securityToken,
		Username = Username,
		Password = Password,
		MenuId = MenuId,
		PreferredLobbyId = PreferredLobbyId,
		HardwareId = HardwareId,
		ClientConfig = clientConfig.Length == ClientConfigLength ? clientConfig : ClientConfig,
	};

	/// <summary>
	/// Copies the login with the chosen character slot and the phase-one connection marker.
	/// </summary>
	/// <param name="characterSlot">The chosen zero-based character slot.</param>
	/// <returns>The login for the game-server connection.</returns>
	public ClientLoginPacket WithCharacter(int characterSlot) => new()
	{
		PlayerTag = PlayerTag,
		GuildCardNumber = GuildCardNumber,
		SubVersion = SubVersion,
		Language = Language,
		CharacterSlot = unchecked((sbyte)characterSlot),
		ConnectionPhase = 1,
		ClientCode = ClientCode,
		SecurityToken = SecurityToken,
		Username = Username,
		Password = Password,
		MenuId = MenuId,
		PreferredLobbyId = PreferredLobbyId,
		HardwareId = HardwareId,
		ClientConfig = ClientConfig,
	};

	/// <summary>
	/// Reads the command payload in any of the three wire lengths.
	/// </summary>
	/// <param name="payload">The payload bytes after the header.</param>
	/// <returns>The decoded login packet.</returns>
	/// <exception cref="InvalidDataException">The length is not 0x7C, 0xA4, or 0xAC.</exception>
	public static ClientLoginPacket Read(ReadOnlySpan<byte> payload)
	{
		PacketField.RequireLength(payload.Length, "client login", BasePayloadLength, WithClientConfigPayloadLength, WithHardwareInfoPayloadLength);
		bool hasHardwareInfo = payload.Length == WithHardwareInfoPayloadLength;
		bool hasClientConfig = payload.Length != BasePayloadLength;
		return new ClientLoginPacket
		{
			PlayerTag = BinaryPrimitives.ReadUInt32LittleEndian(payload),
			GuildCardNumber = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x04..]),
			SubVersion = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x08..]),
			Language = payload[0x0C],
			CharacterSlot = unchecked((sbyte)payload[0x0D]),
			ConnectionPhase = payload[0x0E],
			ClientCode = payload[0x0F],
			SecurityToken = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x10..]),
			Username = PacketField.ReadText(payload.Slice(0x14, AccountTextLength)),
			Password = PacketField.ReadText(payload.Slice(0x44, AccountTextLength)),
			MenuId = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x74..]),
			PreferredLobbyId = BinaryPrimitives.ReadUInt32LittleEndian(payload[0x78..]),
			HardwareId = hasHardwareInfo ? BinaryPrimitives.ReadUInt64BigEndian(payload[BasePayloadLength..]) : null,
			ClientConfig = hasClientConfig ? PacketField.ReadExact(payload, hasHardwareInfo ? 0x84 : BasePayloadLength, ClientConfigLength, "client configuration") : (ReadOnlyMemory<byte>?)null,
		};
	}

	/// <summary>
	/// Writes the payload in the length selected by <see cref="HardwareId"/> and <see cref="ClientConfig"/>.
	/// </summary>
	/// <returns>The 0x7C, 0xA4, or 0xAC payload bytes.</returns>
	/// <exception cref="InvalidOperationException">A hardware identifier is present without a client configuration.</exception>
	/// <exception cref="ArgumentException">A field is too wide, or the client configuration is not 0x28 bytes.</exception>
	[Original(0x00482490)]
	public byte[] WritePayload()
	{
		if (HardwareId.HasValue && !ClientConfig.HasValue)
			throw new InvalidOperationException("A hardware identifier requires the client configuration.");
		if (ClientConfig.HasValue && ClientConfig.Value.Length != ClientConfigLength)
			throw new ArgumentException($"The client configuration must contain exactly 0x{ClientConfigLength:X} bytes but has {ClientConfig.Value.Length}.");
		byte[] payload = new byte[PayloadLength];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, PlayerTag);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x04), GuildCardNumber);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x08), SubVersion);
		payload[0x0C] = Language;
		payload[0x0D] = unchecked((byte)CharacterSlot);
		payload[0x0E] = ConnectionPhase;
		payload[0x0F] = ClientCode;
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x10), SecurityToken);
		PacketField.WriteText(payload.AsSpan(0x14, AccountTextLength), Username, "username");
		PacketField.WriteText(payload.AsSpan(0x44, AccountTextLength), Password, "password");
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x74), MenuId);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(0x78), PreferredLobbyId);
		if (HardwareId.HasValue)
			BinaryPrimitives.WriteUInt64BigEndian(payload.AsSpan(BasePayloadLength), HardwareId.Value);
		if (ClientConfig.HasValue)
			ClientConfig.Value.Span.CopyTo(payload.AsSpan(HardwareId.HasValue ? 0x84 : BasePayloadLength));
		return payload;
	}

	/// <summary>
	/// Creates the framed 0x93 packet with zero flags.
	/// </summary>
	/// <returns>The complete packet.</returns>
	public Packet ToPacket() => Packet.Create(PacketCommand.ClientLogin, 0, WritePayload());
}
