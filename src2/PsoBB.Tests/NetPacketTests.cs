using System.Buffers.Binary;
using PsoBB.Core;
using PsoBB.Net;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the Blue Burst packet framing and the login and data-server handshake codecs.
/// </summary>
public sealed class NetPacketTests
{
	private static byte[] Pattern(int length, byte seed = 1)
	{
		byte[] values = new byte[length];
		for (int index = 0; index < values.Length; index++)
			values[index] = unchecked((byte)(seed + index));
		return values;
	}

	/// <summary>
	/// The header stores its length, command word and flags in little-endian order and separates the command and subcommand bytes.
	/// </summary>
	[Fact]
	public void HeaderRoundTripsLittleEndianFieldsAndSubcommand()
	{
		PacketHeader header = new(0x1234, 0x01E8, 0xDEADBEEF);
		byte[] bytes = new byte[PacketHeader.Size];
		header.Write(bytes);
		Assert.Equal(new byte[] { 0x34, 0x12, 0xE8, 0x01, 0xEF, 0xBE, 0xAD, 0xDE }, bytes);
		PacketHeader read = PacketHeader.Read(bytes);
		Assert.Equal(header, read);
		Assert.Equal((byte)0xE8, read.Opcode);
		Assert.Equal((byte)0x01, read.Subcommand);
	}

	/// <summary>
	/// A packet refuses a header whose length does not match its payload.
	/// </summary>
	[Fact]
	public void PacketRejectsHeaderLengthMismatch()
	{
		Assert.Throws<ArgumentException>(() => new Packet(new PacketHeader(9, 3, 0), new byte[2]));
		Assert.Throws<InvalidDataException>(() => Packet.Read(new byte[7]));
		Assert.Throws<InvalidDataException>(() => Packet.Read(new byte[] { 0x0C, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 }));
	}

	/// <summary>
	/// The framer holds a partial header and body until every declared byte has arrived.
	/// </summary>
	[Fact]
	public void FramerWaitsForCompleteHeaderAndPayload()
	{
		Packet source = Packet.Create(PacketCommand.ServerInit, 0, Pattern(16));
		byte[] bytes = source.ToArray();
		PacketFramer framer = new();
		framer.Append(bytes.AsSpan(0, 3));
		Assert.False(framer.TryRead(out Packet? first));
		Assert.Null(first);
		framer.Append(bytes.AsSpan(3, 18));
		Assert.False(framer.TryRead(out _));
		Assert.Equal(21, framer.BufferedLength);
		framer.Append(bytes.AsSpan(21));
		Assert.True(framer.TryRead(out Packet? packet));
		Assert.NotNull(packet);
		Assert.Equal(source.Header, packet.Header);
		Assert.Equal(source.Payload.ToArray(), packet.Payload.ToArray());
		Assert.False(framer.TryRead(out _));
		Assert.Equal(0, framer.BufferedLength);
	}

	/// <summary>
	/// The framer returns consecutive packets even when they arrived in one append.
	/// </summary>
	[Fact]
	public void FramerReturnsConsecutivePackets()
	{
		Packet first = Packet.Create(PacketCommand.Ping, 0, []);
		Packet second = Packet.Create(PacketCommand.SystemFileCreated, 7, Pattern(4, 9));
		PacketFramer framer = new();
		framer.Append(first.ToArray());
		framer.Append(second.ToArray());
		Assert.True(framer.TryRead(out Packet? readFirst));
		Assert.True(framer.TryRead(out Packet? readSecond));
		Assert.False(framer.TryRead(out _));
		Assert.Equal(first.Header, readFirst!.Header);
		Assert.Equal(7u, readSecond!.Header.Flags);
		Assert.Equal(Pattern(4, 9), readSecond.Payload.ToArray());
	}

	/// <summary>
	/// A declared length smaller than the header is corrupt input and is rejected.
	/// </summary>
	[Fact]
	public void FramerRejectsLengthSmallerThanHeader()
	{
		PacketFramer framer = new();
		framer.Append(new byte[] { 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 });
		Assert.Throws<InvalidDataException>(() => framer.TryRead(out _));
	}

	/// <summary>
	/// The welcome packet places the fixed copyright and both key blocks at their documented offsets.
	/// </summary>
	/// <summary>
	/// The Blue Burst welcome appends the fixed 0xB4 server message after the two key blocks.
	/// </summary>
	[Fact]
	public void ServerInitCarriesTheBlueBurstWelcomeMessage()
	{
		ByteString copyright = ByteString.FromText(ServerInitPacket.GameServerCopyright)!;
		ByteString message = ByteString.FromText("This server is in no way affiliated with SEGA.")!;
		ServerInitPacket packet = new() { Copyright = copyright, ServerKey = Pattern(0x30), ClientKey = Pattern(0x30, 9), Message = message };

		byte[] payload = packet.WritePayload();

		Assert.Equal(ServerInitPacket.PayloadLength + ServerInitPacket.MessageLength, payload.Length);
		ServerInitPacket read = ServerInitPacket.Read(payload);
		Assert.Equal(message, read.Message);

		ServerInitPacket legacy = new() { Copyright = copyright, ServerKey = Pattern(0x30), ClientKey = Pattern(0x30, 9) };
		Assert.Null(ServerInitPacket.Read(legacy.WritePayload()).Message);
		Assert.Throws<InvalidDataException>(() => ServerInitPacket.Read(payload.AsSpan(0, 0x100)));
	}

	/// <summary>
	/// The Blue Burst ping carries an optional big-endian server timestamp and still replies with the empty form.
	/// </summary>
	[Fact]
	public void PingAcceptsTheServerTimestamp()
	{
		byte[] payload = [1, 2, 3, 4, 5, 6, 7, 8];
		PingPacket ping = PingPacket.Read(payload);
		Assert.Equal(0x0102030405060708ul, ping.Timestamp);
		Assert.Empty(ping.WritePayload());
		Assert.Equal(PingPacket.Instance, PingPacket.Read([]));
		Assert.Throws<InvalidDataException>(() => PingPacket.Read(new byte[4]));
	}

	/// <summary>
	/// The player-preview packet carries the slot and the fixed 0x7C block.
	/// </summary>
	[Fact]
	public void PlayerPreviewRoundTripsTheSlotAndBlock()
	{
		byte[] preview = Pattern(PlayerPreviewPacket.PreviewLength, 3);
		PlayerPreviewPacket packet = new() { CharacterIndex = 3, Preview = preview };
		PlayerPreviewPacket read = PlayerPreviewPacket.Read(packet.WritePayload());
		Assert.Equal(3, read.CharacterIndex);
		Assert.Equal(preview, read.Preview.ToArray());
	}

	/// <summary>
	/// The base 0x10 selection carries the main-menu and "Go to lobby" identifiers.
	/// </summary>
	[Fact]
	public void MenuSelectionRoundTripsTheTwoIdentifiers()
	{
		MenuSelectionPacket packet = new() { MenuId = MenuSelectionPacket.MainMenuId, ItemId = MenuSelectionPacket.GoToLobbyItem };
		MenuSelectionPacket read = MenuSelectionPacket.Read(packet.WritePayload());
		Assert.Equal(0x11000011u, read.MenuId);
		Assert.Equal(0x11222211u, read.ItemId);
	}

	/// <summary>
	/// The command 0x07 menu read uses the header count minus one and the 0x2C record stride.
	/// </summary>
	[Fact]
	public void MenuPacketReadsTheOmittedCountAndRecords()
	{
		byte[] payload = new byte[MenuItemRecord.Size];
		BinaryPrimitives.WriteUInt32LittleEndian(payload, MenuSelectionPacket.MainMenuId);
		BinaryPrimitives.WriteUInt32LittleEndian(payload.AsSpan(4), MenuSelectionPacket.GoToLobbyItem);
		System.Text.Encoding.Unicode.GetBytes("Go to lobby").CopyTo(payload, 0x0A);
		MenuPacket menu = MenuPacket.Read(payload, 0);
		MenuItemRecord record = Assert.Single(menu.Records);
		Assert.Equal(MenuSelectionPacket.MainMenuId, record.MenuId);
		Assert.Equal(MenuSelectionPacket.GoToLobbyItem, record.ItemId);
		Assert.Equal("Go to lobby", record.Name);
		Assert.Throws<InvalidDataException>(() => MenuPacket.Read(payload.AsSpan(0, 0x2B), 0));
	}

	[Fact]
	public void ServerInitRoundTripsCopyrightAndKeys()
	{
		ByteString copyright = ByteString.FromText("Test Blue Burst Server")!;
		byte[] serverKey = Pattern(0x30, 0x10);
		byte[] clientKey = Pattern(0x30, 0x40);
		ServerInitPacket packet = new() { Copyright = copyright, ServerKey = serverKey, ClientKey = clientKey };
		byte[] payload = packet.WritePayload();
		Assert.Equal(ServerInitPacket.PayloadLength, payload.Length);
		Assert.Equal((byte)'T', payload[0]);
		Assert.Equal(0, payload[0x20]);
		Assert.Equal(serverKey, payload[0x60..0x90]);
		Assert.Equal(clientKey, payload[0x90..0xC0]);
		Packet framed = packet.ToPacket();
		Assert.Equal(0xC8, framed.Length);
		Assert.Equal(0x03, framed.Header.Opcode);
		Assert.Equal(0u, framed.Header.Flags);
		ServerInitPacket read = ServerInitPacket.Read(framed.Payload.Span);
		Assert.Equal(copyright, read.Copyright);
		Assert.Equal(serverKey, read.ServerKey.ToArray());
		Assert.Equal(clientKey, read.ClientKey.ToArray());
	}

	/// <summary>
	/// The base login form writes every field at its documented offset and round-trips.
	/// </summary>
	[Fact]
	public void ClientLoginBaseRoundTrips()
	{
		ClientLoginPacket packet = new()
		{
			GuildCardNumber = 0x11223344,
			SubVersion = 0x01020304,
			Language = 1,
			CharacterSlot = 3,
			ConnectionPhase = 2,
			ClientCode = 0,
			SecurityToken = 0x55667788,
			Username = ByteString.FromText("ACCOUNT")!,
			Password = ByteString.FromText("PASSWORD")!,
			MenuId = 0x99AABBCC,
			PreferredLobbyId = 0xDDEEFF00,
		};
		byte[] payload = packet.WritePayload();
		Assert.Equal(ClientLoginPacket.BasePayloadLength, payload.Length);
		Assert.Equal(0x00010000u, BitConverter.ToUInt32(payload, 0));
		Assert.Equal(0x11223344u, BitConverter.ToUInt32(payload, 4));
		Assert.Equal(0x01020304u, BitConverter.ToUInt32(payload, 8));
		Assert.Equal(1, payload[0x0C]);
		Assert.Equal(3, payload[0x0D]);
		Assert.Equal(2, payload[0x0E]);
		Assert.Equal(0x55667788u, BitConverter.ToUInt32(payload, 0x10));
		Assert.Equal(0x99AABBCCu, BitConverter.ToUInt32(payload, 0x74));
		Assert.Equal(0xDDEEFF00u, BitConverter.ToUInt32(payload, 0x78));
		ClientLoginPacket read = ClientLoginPacket.Read(packet.ToPacket().Payload.Span);
		Assert.Equal(packet.GuildCardNumber, read.GuildCardNumber);
		Assert.Equal(packet.SubVersion, read.SubVersion);
		Assert.Equal(packet.CharacterSlot, read.CharacterSlot);
		Assert.Equal(packet.Username, read.Username);
		Assert.Equal(packet.Password, read.Password);
		Assert.Null(read.HardwareId);
		Assert.Null(read.ClientConfig);
	}

	/// <summary>
	/// The configuration-only login form is 0xA4 bytes and places the configuration at 0x7C.
	/// </summary>
	[Fact]
	public void ClientLoginWithoutHardwareInfoRoundTrips()
	{
		byte[] config = Pattern(0x28, 0x21);
		ClientLoginPacket packet = new()
		{
			Username = ByteString.FromText("USER")!,
			Password = ByteString.FromText("PASS")!,
			ClientConfig = config,
		};
		byte[] payload = packet.WritePayload();
		Assert.Equal(ClientLoginPacket.WithClientConfigPayloadLength, payload.Length);
		Assert.Equal(config, payload[0x7C..0xA4]);
		ClientLoginPacket read = ClientLoginPacket.Read(packet.ToPacket().Payload.Span);
		Assert.Null(read.HardwareId);
		Assert.Equal(config, read.ClientConfig!.Value.ToArray());
		Assert.Equal(0xA4, packet.ToPacket().Length - PacketHeader.Size);
	}

	/// <summary>
	/// The hardware-aware login form writes the identifier big-endian before the configuration.
	/// </summary>
	[Fact]
	public void ClientLoginWithHardwareInfoWritesBigEndianIdentifier()
	{
		byte[] config = Pattern(0x28, 0x51);
		ClientLoginPacket packet = new()
		{
			CharacterSlot = -1,
			Username = ByteString.FromText("USER")!,
			Password = ByteString.FromText("PASS")!,
			HardwareId = 0x0102030405060708,
			ClientConfig = config,
		};
		byte[] payload = packet.WritePayload();
		Assert.Equal(ClientLoginPacket.WithHardwareInfoPayloadLength, payload.Length);
		Assert.Equal(new byte[] { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 }, payload[0x7C..0x84]);
		Assert.Equal(config, payload[0x84..0xAC]);
		Packet framed = packet.ToPacket();
		Assert.Equal(0xB4, framed.Length);
		ClientLoginPacket read = ClientLoginPacket.Read(framed.Payload.Span);
		Assert.Equal(0x0102030405060708ul, read.HardwareId);
		Assert.Equal(-1, read.CharacterSlot);
		Assert.Equal(config, read.ClientConfig!.Value.ToArray());
	}

	/// <summary>
	/// A hardware identifier without the configuration is not a representable login packet.
	/// </summary>
	[Fact]
	public void ClientLoginRejectsHardwareWithoutConfiguration()
	{
		ClientLoginPacket packet = new()
		{
			Username = ByteString.FromText("USER")!,
			Password = ByteString.FromText("PASS")!,
			HardwareId = 1,
		};
		Assert.Throws<InvalidOperationException>(() => packet.WritePayload());
		Assert.Throws<InvalidDataException>(() => ClientLoginPacket.Read(new byte[0x80]));
	}

	/// <summary>
	/// Client initialization keeps the configuration at 0x10 and both feature bytes before the trailing reserved word.
	/// </summary>
	[Fact]
	public void ClientInitRoundTrips()
	{
		byte[] config = Pattern(0x28, 0x61);
		ClientInitPacket packet = new()
		{
			ErrorCode = 0,
			GuildCardNumber = 0x0A0B0C0D,
			SecurityToken = 0x11223344,
			ClientConfig = config,
			CanCreateTeam = 1,
			Episode4Unlocked = 0,
			Unused = 0,
		};
		byte[] payload = packet.WritePayload();
		Assert.Equal(ClientInitPacket.PayloadLength, payload.Length);
		Assert.Equal(0x0A0B0C0Du, BitConverter.ToUInt32(payload, 8));
		Assert.Equal(0x11223344u, BitConverter.ToUInt32(payload, 0x0C));
		Assert.Equal(config, payload[0x10..0x38]);
		Assert.Equal(1, payload[0x38]);
		Assert.Equal(0, payload[0x39]);
		Packet framed = packet.ToPacket();
		Assert.Equal(0x44, framed.Length);
		ClientInitPacket read = ClientInitPacket.Read(framed.Payload.Span);
		Assert.Equal(packet.GuildCardNumber, read.GuildCardNumber);
		Assert.Equal(packet.SecurityToken, read.SecurityToken);
		Assert.Equal(config, read.ClientConfig.ToArray());
		Assert.Equal(1, read.CanCreateTeam);
		Assert.Equal(0, read.Episode4Unlocked);
	}

	/// <summary>
	/// The system file request has no payload, so the complete packet is only the header.
	/// </summary>
	[Fact]
	public void SystemFileRequestIsEmpty()
	{
		Packet packet = new SystemFileRequestPacket().ToPacket();
		Assert.Equal(PacketHeader.Size, packet.Length);
		Assert.Equal(0xE0, packet.Header.Opcode);
		Assert.Empty(packet.Payload.ToArray());
		Assert.IsType<SystemFileRequestPacket>(SystemFileRequestPacket.Read([]));
		Assert.Throws<InvalidDataException>(() => SystemFileRequestPacket.Read(new byte[1]));
	}

	/// <summary>
	/// The created-default notification carries the single success word.
	/// </summary>
	[Fact]
	public void SystemFileCreatedRoundTrips()
	{
		SystemFileCreatedPacket packet = new();
		Packet framed = packet.ToPacket();
		Assert.Equal(0x0C, framed.Length);
		Assert.True(packet.IsSuccess);
		Assert.Equal(1u, BitConverter.ToUInt32(framed.Payload.Span));
		SystemFileCreatedPacket read = SystemFileCreatedPacket.Read(framed.Payload.Span);
		Assert.Equal(SystemFileCreatedPacket.Success, read.Result);
		Assert.True(read.IsSuccess);
	}

	/// <summary>
	/// The system file sync splits the payload at the documented 0x2B8 boundary.
	/// </summary>
	[Fact]
	public void SyncSystemFileRoundTripsBothSections()
	{
		byte[] systemFile = Pattern(SyncSystemFilePacket.SystemFileLength, 0x31);
		byte[] teamMembership = Pattern(SyncSystemFilePacket.TeamMembershipLength, 0x71);
		SyncSystemFilePacket packet = new() { SystemFile = systemFile, TeamMembership = teamMembership };
		byte[] payload = packet.WritePayload();
		Assert.Equal(0xAF0, payload.Length);
		Assert.Equal(systemFile, payload[..0x2B8]);
		Assert.Equal(teamMembership, payload[0x2B8..]);
		Packet framed = packet.ToPacket();
		Assert.Equal(0xAF8, framed.Length);
		Assert.Equal(0xE2, framed.Header.Opcode);
		SyncSystemFilePacket read = SyncSystemFilePacket.Read(framed.Payload.Span);
		Assert.Equal(systemFile, read.SystemFile.ToArray());
		Assert.Equal(teamMembership, read.TeamMembership.ToArray());
	}

	/// <summary>
	/// A negative character index survives the little-endian encoding unchanged.
	/// </summary>
	[Fact]
	public void PlayerPreviewRequestRoundTripsNegativeIndex()
	{
		PlayerPreviewRequestPacket packet = new() { CharacterIndex = -2, Unknown = 0x11223344 };
		Packet framed = packet.ToPacket();
		Assert.Equal(0x10, framed.Length);
		Assert.Equal(0xE3, framed.Header.Opcode);
		Assert.Equal(new byte[] { 0xFE, 0xFF, 0xFF, 0xFF, 0x44, 0x33, 0x22, 0x11 }, framed.Payload.ToArray());
		PlayerPreviewRequestPacket read = PlayerPreviewRequestPacket.Read(framed.Payload.Span);
		Assert.Equal(-2, read.CharacterIndex);
		Assert.Equal(0x11223344u, read.Unknown);
	}

	/// <summary>
	/// Approval and empty-slot answers share the layout and differ only in the result word.
	/// </summary>
	[Fact]
	public void PlayerChoiceCarriesApprovalOrEmptySlotError()
	{
		Packet approved = PlayerChoicePacket.Approved(5).ToPacket();
		Packet noPlayer = PlayerChoicePacket.NoPlayer(2).ToPacket();
		Assert.Equal(0x10, approved.Length);
		Assert.Equal(new byte[] { 0x05, 0, 0, 0, 0x01, 0, 0, 0 }, approved.Payload.ToArray());
		Assert.Equal(new byte[] { 0x02, 0, 0, 0, 0x02, 0, 0, 0 }, noPlayer.Payload.ToArray());
		Assert.True(PlayerChoicePacket.Read(approved.Payload.Span).IsApproved);
		Assert.False(PlayerChoicePacket.Read(noPlayer.Payload.Span).IsApproved);
	}

	/// <summary>
	/// The reconnect address is big-endian while the port and reserved word stay little-endian.
	/// </summary>
	[Fact]
	public void ReconnectWritesBigEndianAddressAndLittleEndianPort()
	{
		ReconnectPacket packet = new() { Address = 0x0A000102, Port = 0x1F90 };
		Packet framed = packet.ToPacket();
		Assert.Equal(0x10, framed.Length);
		Assert.Equal(new byte[] { 0x0A, 0x00, 0x01, 0x02, 0x90, 0x1F, 0x00, 0x00 }, framed.Payload.ToArray());
		ReconnectPacket read = ReconnectPacket.Read(framed.Payload.Span);
		Assert.Equal(0x0A000102u, read.Address);
		Assert.Equal((ushort)0x1F90, read.Port);
		Assert.Equal((ushort)0, read.Unused);
	}

	/// <summary>
	/// The ping packet is exactly a header with command 0x1D.
	/// </summary>
	[Fact]
	public void PingIsHeaderOnly()
	{
		Packet framed = PingPacket.Instance.ToPacket();
		Assert.Equal(0x08, framed.Length);
		Assert.Equal(0x1D, framed.Header.Opcode);
		Assert.Same(PingPacket.Instance, PingPacket.Read(framed.Payload.Span));
		Assert.Throws<InvalidDataException>(() => PingPacket.Read(new byte[1]));
	}

	/// <summary>
	/// The 0x60 frame length byte counts 32-bit words including the two-byte subcommand header.
	/// </summary>
	[Fact]
	public void SubcommandFrameWritesLengthInWords()
	{
		byte[] body = [0x11, 0x22, 0x33, 0x44, 0x55, 0x66];
		SubcommandFrame frame = new(0x43, body);
		byte[] payload = frame.WritePayload();
		Assert.Equal(2, frame.SizeDwords);
		Assert.Equal(new byte[] { 0x43, 0x02, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66 }, payload);
		Packet packet = frame.ToPacket(0x99);
		Assert.Equal(0x10, packet.Length);
		Assert.Equal(0x60, packet.Header.Opcode);
		Assert.Equal(0x99u, packet.Header.Flags);
		SubcommandFrame read = SubcommandFrame.Read(packet);
		Assert.Equal((byte)0x43, read.Subcommand);
		Assert.Equal(body, read.Body.ToArray());
		Assert.Equal(2, read.SizeDwords);
	}

	/// <summary>
	/// A frame whose declared word count differs from its payload is rejected.
	/// </summary>
	[Fact]
	public void SubcommandFrameRejectsLengthMismatch()
	{
		Assert.Throws<InvalidDataException>(() => SubcommandFrame.Read(new byte[] { 0x43, 0x02, 0, 0 }));
		Assert.Throws<ArgumentException>(() => new SubcommandFrame(0x43, new byte[5]));
		Packet ping = PingPacket.Instance.ToPacket();
		Assert.Throws<InvalidDataException>(() => SubcommandFrame.Read(ping));
	}
}
