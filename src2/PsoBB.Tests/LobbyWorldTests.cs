using System.Buffers.Binary;
using System.Text;
using PsoBB.Mathematics;
using PsoBB.Net;
using PsoBB.Platform;
using PsoBB.Player;

namespace PsoBB.Tests;

/// <summary>
/// Behaviour checks for the lobby world packet handlers, player-slot tracking and the subcommand permission path.
/// </summary>
public sealed class LobbyWorldTests
{
	private const string TestHost = "lobby.invalid";
	private const int TestPort = 12000;

	private sealed class TestConnection : IGameConnection
	{
		private readonly Queue<byte> _incoming = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;

		public List<byte> Sent { get; } = new();

		public bool Connect(string host, int port)
		{
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data)
		{
			Sent.AddRange(data.ToArray());
			return data.Length;
		}

		public int Receive(Span<byte> destination)
		{
			int count = 0;
			while (count < destination.Length && _incoming.Count > 0)
				destination[count++] = _incoming.Dequeue();
			return count;
		}

		public void Close() => State = GameConnectionState.Disconnected;

		public void Push(ReadOnlySpan<byte> data)
		{
			foreach (byte value in data)
				_incoming.Enqueue(value);
		}

		public void RemoteClose() => State = GameConnectionState.Disconnected;

		public void Dispose() => Close();
	}

	private static void WriteUInt16(Span<byte> destination, int offset, ushort value) => BinaryPrimitives.WriteUInt16LittleEndian(destination[offset..], value);

	private static void WriteUInt32(Span<byte> destination, int offset, uint value) => BinaryPrimitives.WriteUInt32LittleEndian(destination[offset..], value);

	private static void WriteSingle(Span<byte> destination, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(destination[offset..], value);

	private static void WriteName(Span<byte> destination, int offset, string name)
	{
		byte[] encoded = Encoding.Unicode.GetBytes(name);
		encoded.AsSpan(0, Math.Min(encoded.Length, LobbyEntity.NameLength)).CopyTo(destination[offset..]);
	}

	private static byte[] LobbyData(int clientId, string name, uint guildCardNumber = 0x01020304, uint playerTag = 0x00010000, uint teamId = 0, uint teamMaster = 0, uint hideHelp = 1)
	{
		byte[] data = new byte[LobbyEntity.LobbyDataSize];
		WriteUInt32(data, 0x00, playerTag);
		WriteUInt32(data, 0x04, guildCardNumber);
		WriteUInt32(data, 0x08, teamMaster);
		WriteUInt32(data, 0x0C, teamId);
		WriteUInt32(data, LobbyEntity.ClientIdOffset, (uint)clientId);
		WriteName(data, LobbyEntity.NameOffset, name);
		WriteUInt32(data, 0x40, hideHelp);
		return data;
	}

	private static byte[] LobbyEntry(int clientId, string name, uint guildCardNumber = 0x01020304) =>
		[.. LobbyData(clientId, name, guildCardNumber), .. new byte[LobbyJoinEntryLength - LobbyEntity.LobbyDataSize]];

	private const int LobbyJoinEntryLength = LobbyWorld.LobbyJoinEntryLength;

	private static Packet GameJoin(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.GameJoinBodyLength];
		body[0x190] = 2;
		body[0x191] = 1;
		body[0x192] = 1;
		body[0x193] = 2;
		body[0x194] = 1;
		body[0x195] = 7;
		body[0x196] = 3;
		body[0x197] = 1;
		WriteUInt32(body, 0x198, 0xA1B2C3D4);
		body[0x19C] = 1;
		body[0x19E] = 1;
		body[0x19F] = 1;
		for (int index = 0; index < players.Length; index++)
			LobbyData(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.GameJoinPlayerOffset + (index * LobbyEntity.LobbyDataSize));
		return Packet.Create(PacketCommand.GameJoin, 0, body);
	}

	private static Packet AddPlayerToGame(int clientId, string name, int leaderId = 1)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + LobbyWorld.LobbyJoinEntryLength];
		body[0] = 0;
		body[1] = (byte)leaderId;
		body[2] = 0;
		LobbyEntry(clientId, name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset);
		return Packet.Create(PacketCommand.AddPlayerToGame, 1, body);
	}

	private static Packet AddPlayerToLobby(int clientId, string name, int leaderId = 1)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + LobbyWorld.LobbyJoinEntryLength];
		body[1] = (byte)leaderId;
		LobbyEntry(clientId, name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset);
		return Packet.Create(PacketCommand.AddPlayerToLobby, 1, body);
	}

	private static Packet JoinLobby(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + (players.Length * LobbyWorld.LobbyJoinEntryLength)];
		body[0] = 4;
		body[1] = 5;
		body[3] = 3;
		body[4] = 2;
		body[5] = 1;
		body[6] = 9;
		body[7] = 1;
		WriteUInt32(body, 8, 0x11223344);
		for (int index = 0; index < players.Length; index++)
			LobbyEntry(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset + (index * LobbyWorld.LobbyJoinEntryLength));
		return Packet.Create(PacketCommand.JoinLobby, (uint)players.Length, body);
	}

	private static Packet RemovePlayer(PacketCommand command, int clientId, int leaderId, byte disableUdp = 0)
	{
		byte[] body = [(byte)clientId, (byte)leaderId, disableUdp, 0];
		return Packet.Create(command, 0, body);
	}

	private static byte[] StopAtPosition(ushort clientId, ushort nearEnemy, ushort angle, short floor, short room, float x, float y, float z)
	{
		byte[] record = new byte[0x18];
		record[0] = 0x3E;
		record[1] = 6;
		WriteUInt16(record, 2, clientId);
		WriteUInt16(record, 4, nearEnemy);
		WriteUInt16(record, 6, angle);
		BinaryPrimitives.WriteInt16LittleEndian(record.AsSpan(8), floor);
		BinaryPrimitives.WriteInt16LittleEndian(record.AsSpan(0x0A), room);
		WriteSingle(record, 0x0C, x);
		WriteSingle(record, 0x10, y);
		WriteSingle(record, 0x14, z);
		return record;
	}

	private static byte[] WalkToPosition(ushort clientId, float x, float z, uint flags = 0)
	{
		byte[] record = new byte[0x10];
		record[0] = 0x40;
		record[1] = 4;
		WriteUInt16(record, 2, clientId);
		WriteSingle(record, 4, x);
		WriteSingle(record, 8, z);
		WriteUInt32(record, 0x0C, flags);
		return record;
	}

	private static byte[] RunToPosition(ushort clientId, float x, float z)
	{
		byte[] record = new byte[0x0C];
		record[0] = 0x42;
		record[1] = 3;
		WriteUInt16(record, 2, clientId);
		WriteSingle(record, 4, x);
		WriteSingle(record, 8, z);
		return record;
	}

	private static byte[] SyncPlayer(ushort clientId, ushort room, uint flags, Vector3 position, ushort phase, ushort hitPoints)
	{
		byte[] record = new byte[0x4C0];
		record[0] = 0x70;
		record[1] = 0;
		WriteUInt32(record, 4, 0x4C0);
		WriteUInt16(record, 8, clientId);
		WriteUInt16(record, 0x0A, room);
		WriteUInt32(record, 0x0C, flags);
		WriteSingle(record, 0x10, position.X);
		WriteSingle(record, 0x14, position.Y);
		WriteSingle(record, 0x18, position.Z);
		WriteUInt16(record, 0x28, phase);
		WriteUInt16(record, 0x2A, hitPoints);
		return record;
	}

	private static byte[] UnblockGameJoin()
	{
		byte[] record = new byte[4];
		record[0] = 0x71;
		record[1] = 1;
		return record;
	}

	private static byte[] RootObjectDespawn(ushort clientId)
	{
		byte[] record = new byte[4];
		record[0] = 0x4E;
		record[1] = 1;
		WriteUInt16(record, 2, clientId);
		return record;
	}

	private static Packet SubcommandPacket(params byte[][] records)
	{
		byte[] body = records.SelectMany(record => record).ToArray();
		return Packet.Create(PacketCommand.Broadcast, 0, body);
	}

	[Fact]
	public void GameJoinCreatesFourPlayerSlotsAndCopiesJoinFlags()
	{
		LobbyWorld world = new();
		Assert.True(world.HandlePacket(GameJoin((0, "ALPHA"), (1, "BRAVO"), (2, "CHARLIE"), (3, "DELTA"))));
		Assert.Equal(LobbyWorldState.GameLoading, world.State);
		Assert.Equal(2, world.LocalPlayerIndex!.Value);
		Assert.Equal(1, world.LeaderId!.Value);
		Assert.Equal(1, world.DisableUdp!.Value);
		Assert.Equal(2, world.Difficulty!.Value);
		Assert.Equal(1, world.BattleMode!.Value);
		Assert.Equal(7, world.Event!.Value);
		Assert.Equal(3, world.SectionId!.Value);
		Assert.Equal(1, world.ChallengeMode!.Value);
		Assert.Equal(0xA1B2C3D4u, world.RandomSeed!.Value);
		Assert.Equal(1, world.Episode!.Value);
		Assert.Equal(1, world.SoloMode!.Value);
		Assert.Equal(1, world.IsInQuest!.Value);
		Assert.Equal(0x80, world.Variations.Length);
		Assert.Equal(4, world.Entities.Count);
		Assert.True(world.Entities.TryGet(2, out LobbyEntity? charlie));
		Assert.Equal("CHARLIE", charlie.Name);
		Assert.Equal(0x01020304u, charlie.GuildCardNumber);
		Assert.Equal(1u, charlie.HideHelpPrompt);
	}

	[Fact]
	public void AddPlayerToGameAddsOneSlotAndUpdatesLeader()
	{
		LobbyWorld world = new();
		world.HandlePacket(GameJoin());
		Assert.True(world.HandlePacket(AddPlayerToGame(6, "FOXTROT", 5)));
		Assert.Equal(LobbyWorldState.GameLoading, world.State);
		Assert.Equal(5, world.LeaderId!.Value);
		Assert.Equal(0, world.DisableUdp!.Value);
		Assert.Equal(1, world.Entities.Count);
		Assert.True(world.Entities.TryGet(6, out LobbyEntity? entity));
		Assert.Equal("FOXTROT", entity.Name);
	}

	[Fact]
	public void AddPlayerToGameBeforeTheGameJoinIsIgnored()
	{
		LobbyWorld world = new();
		world.HandlePacket(AddPlayerToGame(3, "EARLY"));
		Assert.Equal(LobbyWorldState.Disconnected, world.State);
		Assert.Equal(0, world.Entities.Count);
	}

	[Fact]
	public void JoinLobbyCreatesEntriesAndCopiesLobbyFlags()
	{
		LobbyWorld world = new();
		Assert.True(world.HandlePacket(JoinLobby((4, "GOLF"), (5, "HOTEL"))));
		Assert.Equal(LobbyWorldState.Lobby, world.State);
		Assert.Equal(4, world.LocalPlayerIndex!.Value);
		Assert.Equal(5, world.LeaderId!.Value);
		Assert.Equal(3, world.LobbyNumber!.Value);
		Assert.Equal(2, world.BlockNumber!.Value);
		Assert.Equal(1, world.EnableBattleMode!.Value);
		Assert.Equal(9, world.Event!.Value);
		Assert.Equal(1, world.VoiceChat!.Value);
		Assert.Equal(2, world.Entities.Count);
	}

	[Fact]
	public void DuplicateLobbyJoinUpdatesTheExistingSlot()
	{
		LobbyWorld world = new();
		world.HandlePacket(AddPlayerToLobby(3, "FIRST"));
		world.HandlePacket(AddPlayerToLobby(3, "SECOND"));
		Assert.Equal(1, world.Entities.Count);
		Assert.True(world.Entities.TryGet(3, out LobbyEntity? entity));
		Assert.Equal("SECOND", entity.Name);
	}

	[Fact]
	public void MovementBeforeJoinIsIgnoredAndMovementAfterJoinUpdatesTheSlot()
	{
		LobbyWorld world = new();
		world.HandlePacket(SubcommandPacket(RunToPosition(2, 1f, 2f)));
		Assert.Equal(0, world.Entities.Count);
		world.HandlePacket(AddPlayerToLobby(2, "MOVER"));
		world.HandlePacket(SubcommandPacket(RunToPosition(2, 3f, 4f)));
		Assert.True(world.Entities.TryGet(2, out LobbyEntity? entity));
		Assert.Equal(3f, entity.NetworkX);
		Assert.Equal(4f, entity.NetworkZ);
		Assert.Equal(LobbyMovementState.Running, entity.MovementState);
		world.HandlePacket(SubcommandPacket(WalkToPosition(2, 5f, 6f, 8)));
		Assert.Equal(5f, entity.NetworkX);
		Assert.Equal(6f, entity.NetworkZ);
		Assert.True(entity.IsNearEnemy);
		Assert.Equal(LobbyMovementState.Walking, entity.MovementState);
		world.HandlePacket(SubcommandPacket(StopAtPosition(2, 0, 0x4000, 4, 7, 10f, 11f, 12f)));
		Assert.Equal(new Vector3(10f, 11f, 12f), entity.Position);
		Assert.Equal((ushort)0x4000, entity.Heading!.Value);
		Assert.Equal(4, entity.Floor!.Value);
		Assert.Equal(7, entity.Room!.Value);
		Assert.False(entity.IsNearEnemy);
		Assert.Equal(LobbyMovementState.Stopped, entity.MovementState);
	}

	[Fact]
	public void StopAtPositionMovesTheAttachedLocalPlayer()
	{
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		PlayerCharacter local = PlayerCharacter.Create(4, new Vector3(0f, 0f, 0f), 0, PlayerAnimationSet.Empty);
		world.LocalPlayer = local;
		world.HandlePacket(SubcommandPacket(StopAtPosition(4, 0, 0x2000, 1, 2, 20f, 21f, 22f)));
		Assert.Equal(new Vector3(20f, 21f, 22f), local.Position);
		Assert.Equal((ushort)0x2000, local.Heading);
		Assert.Equal(PlayerMovementState.Standing, local.MovementState);
	}

	[Fact]
	public void RemovePlayerDropsTheSlotAndUpdatesTheLeader()
	{
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((1, "ONE"), (2, "TWO")));
		Assert.True(world.HandlePacket(RemovePlayer(PacketCommand.RemovePlayerFromLobby, 1, 2, 1)));
		Assert.Equal(1, world.Entities.Count);
		Assert.False(world.Entities.TryGet(1, out _));
		Assert.True(world.Entities.TryGet(2, out _));
		Assert.Equal(2, world.LeaderId!.Value);
		Assert.Equal(1, world.DisableUdp!.Value);
		Assert.True(world.HandlePacket(RemovePlayer(PacketCommand.RemovePlayerFromLobby, 9, 2)));
		Assert.Equal(1, world.Entities.Count);
	}

	[Fact]
	public void RemoveLocalPlayerClosesTheWorld()
	{
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		world.HandlePacket(RemovePlayer(PacketCommand.RemovePlayerFromLobby, 4, 5));
		Assert.Equal(LobbyWorldState.Disconnected, world.State);
		Assert.Equal(1, world.Entities.Count);
	}

	[Fact]
	public void SubcommandPermissionTableBlocksMovementOnMapWithZeroPermission()
	{
		LobbyWorld world = new() { CurrentMapId = 0x2F };
		world.HandlePacket(AddPlayerToLobby(2, "MOVER"));
		world.HandlePacket(SubcommandPacket(RunToPosition(2, 3f, 4f)));
		Assert.True(world.Entities.TryGet(2, out LobbyEntity? entity));
		Assert.Null(entity.NetworkX);
		Assert.Equal(LobbyMovementState.Unknown, entity.MovementState);
		world.CurrentMapId = 0;
		world.HandlePacket(SubcommandPacket(RunToPosition(2, 3f, 4f)));
		Assert.Equal(3f, entity.NetworkX);
		Assert.Equal(LobbyMovementState.Running, entity.MovementState);
	}

	[Fact]
	public void JoinerSyncAddsAnUnknownSlotAndSetsItsPosition()
	{
		LobbyWorld world = new();
		world.HandlePacket(GameJoin((2, "LOCAL")));
		Vector3 position = new(30f, 31f, 32f);
		world.HandlePacket(SubcommandPacket(SyncPlayer(6, 8, 0x00000005, position, 3, 120)));
		Assert.True(world.Entities.TryGet(6, out LobbyEntity? entity));
		Assert.Equal(position, entity.Position);
		Assert.Equal(8, entity.Room!.Value);
		Assert.Equal(0x00000005u, entity.GameFlags!.Value);
		Assert.Equal(3, entity.Phase!.Value);
		Assert.Equal(120, entity.CurrentHitPoints!.Value);
		world.HandlePacket(SubcommandPacket(SyncPlayer(2, 1, 0, new Vector3(0f, 0f, 0f), 0, 1)));
		Assert.True(world.Entities.TryGet(2, out LobbyEntity? local));
		Assert.Null(local.Position);
	}

	[Fact]
	public void RootObjectDespawnMarksTheTrackedPlayerAsLeaving()
	{
		LobbyWorld world = new();
		world.HandlePacket(AddPlayerToLobby(6, "LEAVER"));
		world.HandlePacket(SubcommandPacket(RootObjectDespawn(6)));
		Assert.True(world.Entities.TryGet(6, out LobbyEntity? entity));
		Assert.True(entity.IsLeaving);
		Assert.Equal(LobbyMovementState.Leaving, entity.MovementState);
	}

	[Fact]
	public void UnblockGameJoinMovesTheWorldIntoTheGamePhase()
	{
		LobbyWorld world = new();
		world.HandlePacket(GameJoin());
		world.HandlePacket(AddPlayerToGame(1, "ONE"));
		Assert.Equal(LobbyWorldState.GameLoading, world.State);
		world.HandlePacket(SubcommandPacket(UnblockGameJoin()));
		Assert.Equal(LobbyWorldState.Game, world.State);
	}

	[Fact]
	public void GameJoinReplacesExistingSlots()
	{
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((1, "ONE"), (2, "TWO")));
		world.HandlePacket(GameJoin((7, "SEVEN")));
		Assert.Equal(LobbyWorldState.GameLoading, world.State);
		Assert.Equal(1, world.Entities.Count);
		Assert.True(world.Entities.TryGet(7, out _));
	}

	[Fact]
	public void MalformedJoinAndSubcommandLengthsAreRejected()
	{
		LobbyWorld world = new();
		Assert.Throws<InvalidDataException>(() => world.HandlePacket(Packet.Create(PacketCommand.GameJoin, 0, new byte[0x19F])));
		byte[] shortLobby = new byte[0x0C];
		Assert.Throws<InvalidDataException>(() => world.HandlePacket(Packet.Create(PacketCommand.JoinLobby, 13, shortLobby)));
		Assert.Throws<InvalidDataException>(() => world.HandlePacket(SubcommandPacket([0x40, 0x05])));
		Assert.Throws<InvalidDataException>(() => world.HandlePacket(SubcommandPacket([0x3E, 0x01])));
	}

	[Fact]
	public void MenuSelectionRequiresARedirectedSession()
	{
		Assert.Throws<InvalidOperationException>(() => new LobbyWorld().SelectMainMenuItem(MenuSelectionPacket.GoToLobbyItem));
		TestConnection connection = new();
		using GameSession session = new(connection);
		Assert.True(session.Connect(TestHost, TestPort));
		LobbyWorld world = new(session);
		Assert.False(world.SelectMainMenuItem(MenuSelectionPacket.GoToLobbyItem));
	}

	[Fact]
	public void SessionDisconnectClearsTheWorld()
	{
		TestConnection connection = new();
		using GameSession session = new(connection);
		Assert.True(session.Connect(TestHost, TestPort));
		LobbyWorld world = new(session);
		connection.Push(GameJoin((0, "ALPHA")).ToArray());
		world.Update();
		Assert.Equal(1, world.Entities.Count);
		Assert.Equal(LobbyWorldState.GameLoading, world.State);
		connection.RemoteClose();
		world.Update();
		Assert.Equal(LobbyWorldState.Disconnected, world.State);
		Assert.Equal(0, world.Entities.Count);
	}
}
