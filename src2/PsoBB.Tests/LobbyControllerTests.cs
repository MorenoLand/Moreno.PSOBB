using System.Buffers.Binary;
using System.Text;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Net;
using PsoBB.Platform;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the field controller movement, camera follow, mode switching and the outgoing movement records.
/// </summary>
[Collection("Game state")]
public sealed class LobbyControllerTests : IDisposable
{
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

		public void Dispose() => Close();
	}

	private sealed class EmptyGround : IGroundCollision
	{
		public int Calls { get; private set; }

		public GroundContact? Sweep(Vector3 from, Vector3 to, int mask)
		{
			Calls++;
			return null;
		}
	}

	public LobbyControllerTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	private static void WriteUInt16(Span<byte> destination, int offset, ushort value) => BinaryPrimitives.WriteUInt16LittleEndian(destination[offset..], value);

	private static void WriteSingle(Span<byte> destination, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(destination[offset..], value);

	private static void WriteName(Span<byte> destination, int offset, string name) => Encoding.Unicode.GetBytes(name).AsSpan(0, Math.Min(name.Length * 2, LobbyEntity.NameLength)).CopyTo(destination[offset..]);

	private static byte[] LobbyData(int clientId, string name)
	{
		byte[] data = new byte[LobbyEntity.LobbyDataSize];
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(LobbyEntity.ClientIdOffset), (uint)clientId);
		WriteName(data, LobbyEntity.NameOffset, name);
		return data;
	}

	private static byte[] LobbyEntry(int clientId, string name) => [.. LobbyData(clientId, name), .. new byte[LobbyWorld.LobbyJoinEntryLength - LobbyEntity.LobbyDataSize]];

	private static Packet JoinLobby(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + (players.Length * LobbyWorld.LobbyJoinEntryLength)];
		body[0] = (byte)players[0].ClientId;
		for (int index = 0; index < players.Length; index++)
			LobbyEntry(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset + (index * LobbyWorld.LobbyJoinEntryLength));
		return Packet.Create(PacketCommand.JoinLobby, (uint)players.Length, body);
	}

	private static byte[] StopRecord(ushort clientId, ushort angle, float x, float y, float z)
	{
		byte[] record = new byte[0x18];
		record[0] = 0x3E;
		record[1] = 6;
		WriteUInt16(record, 2, clientId);
		WriteUInt16(record, 6, angle);
		WriteSingle(record, 0x0C, x);
		WriteSingle(record, 0x10, y);
		WriteSingle(record, 0x14, z);
		return record;
	}

	private static PlayerCharacter CreatePlayer(int index = 4, float x = 10) => PlayerCharacter.Create(index, new Vector3(x, 0, 20), 0, PlayerAnimationSet.Empty);

	private static InputManager CreateInput(MemoryGameInput source)
	{
		InputManager input = new(source);
		input.Update(TimeSpan.Zero);
		return input;
	}

	private static void Pump(InputManager input, MemoryGameInput source, GameKey key, bool down)
	{
		source.SetKey(key, down);
		input.Update(TimeSpan.Zero);
	}

	[Fact]
	public void ForwardRunMovesAlongTheCameraHeadingAndSendsARunRecord()
	{
		MemoryGameInput source = new();
		InputManager input = CreateInput(source);
		PlayerCharacter player = CreatePlayer();
		FieldCamera camera = new(new Vector3(0, 0, 0), new Vector3(0, 0, 1));
		EmptyGround ground = new();
		using GameSession session = new(new TestConnection());
		session.Connect("lobby.invalid", 12000);
		LobbyWorld world = new(session);
		world.HandlePacket(JoinLobby((4, "LOCAL")));
		world.LocalPlayer = player;
		LobbyController controller = new(input, player, camera, ground, world);
		Pump(input, source, GameKey.W, true);
		controller.Update();
		Assert.Equal(PlayerMovementState.Running, player.MovementState);
		Assert.Equal(new Vector3(10, 0, 148), player.Position);
		Assert.Equal(1, ground.Calls);
	}

	[Fact]
	public void BackStrafeAndTurnUseThePortedHeadingRules()
	{
		MemoryGameInput source = new();
		InputManager input = CreateInput(source);
		PlayerCharacter player = CreatePlayer();
		FieldCamera camera = new(new Vector3(0, 0, 0), new Vector3(0, 0, 1));
		LobbyController controller = new(input, player, camera, new EmptyGround());
		Pump(input, source, GameKey.S, true);
		controller.Update();
		Assert.Equal((ushort)0x8000, player.TargetHeading);
		Assert.Equal((ushort)0xF800, player.Heading);
		for (int frame = 0; frame < 64; frame++)
			controller.Update();
		Assert.True(player.Position.Z < 20, $"Backward movement ended at {player.Position}.");
		Pump(input, source, GameKey.S, false);
		Pump(input, source, GameKey.D, true);
		controller.Update();
		Assert.Equal((ushort)0x4000, player.TargetHeading);
		float strafeStart = player.Position.X;
		for (int frame = 0; frame < 64; frame++)
			controller.Update();
		Assert.True(player.Position.X > strafeStart, $"Right strafe ended at {player.Position}.");
		camera.SetHeading(0x2000);
		Pump(input, source, GameKey.D, false);
		Pump(input, source, GameKey.W, true);
		controller.Update();
		Assert.Equal((ushort)0x2000, player.TargetHeading);
	}

	[Fact]
	public void CameraFollowsTheSuppliedModeOffsetsAndKeepsTheProjection()
	{
		MemoryGameInput source = new();
		InputManager input = CreateInput(source);
		PlayerCharacter player = CreatePlayer();
		FieldCamera camera = new(new Vector3(0, 1, 2), new Vector3(0, 1, 3))
		{
			Settings = new FieldCameraModeSettings(new Vector3(0, 12, -24), new Vector3(0, 8, 4)),
		};
		LobbyController controller = new(input, player, camera, new EmptyGround());
		Pump(input, source, GameKey.W, true);
		controller.Update();
		Assert.True(camera.HasModeSettings);
		Assert.False(camera.CollisionAvailable);
		Assert.Equal(Vector3.Add(player.Position, new Vector3(0, 12, -24)), camera.Position);
		Assert.Equal(Vector3.Add(player.Position, new Vector3(0, 8, 4)), camera.Target);
		Assert.Equal(CameraProjection.CreateFromAngle(SceneCamera.DefaultFieldOfViewAngle, SceneCamera.DefaultFieldOfViewAspect, SceneCamera.DefaultNearPlane, SceneCamera.DefaultFarPlane), camera.Camera.CreateProjection());
	}

	[Fact]
	public void ModeSwitchingKeepsThePreviousModeExceptForFiveAndNine()
	{
		FieldCamera camera = new(new Vector3(0, 0, 0), new Vector3(1, 0, 0));
		Assert.Equal(FieldCamera.DefaultMode, camera.Mode);
		camera.SwitchMode(3);
		Assert.Equal((byte)3, camera.Mode);
		Assert.Equal((byte)0, camera.PreviousMode);
		camera.SwitchMode(5);
		Assert.Equal((byte)5, camera.Mode);
		Assert.Equal((byte)3, camera.PreviousMode);
		camera.SwitchMode(6);
		Assert.Equal((byte)6, camera.Mode);
		Assert.Equal((byte)3, camera.PreviousMode);
		camera.SelectMode(7);
		Assert.Equal((byte)7, camera.Mode);
		Assert.Throws<ArgumentOutOfRangeException>(() => camera.SelectMode(FieldCamera.ModeCount));
		Assert.Throws<ArgumentOutOfRangeException>(() => camera.SwitchMode(FieldCamera.ModeCount));
	}

	[Fact]
	public void StoppingAfterMovementSendsTheStopRecordAndLeavesThePlayerStanding()
	{
		MemoryGameInput source = new();
		InputManager input = CreateInput(source);
		PlayerCharacter player = CreatePlayer();
		FieldCamera camera = new(new Vector3(0, 0, 0), new Vector3(0, 0, 1));
		TestConnection connection = new();
		using GameSession session = new(connection);
		Assert.True(session.Connect("lobby.invalid", 12000));
		LobbyWorld world = new(session);
		world.HandlePacket(JoinLobby((4, "LOCAL")));
		world.LocalPlayer = player;
		LobbyController controller = new(input, player, camera, new EmptyGround(), world);
		Pump(input, source, GameKey.W, true);
		controller.Update();
		Pump(input, source, GameKey.W, false);
		controller.Update();
		Assert.Equal(PlayerMovementState.Standing, player.MovementState);
		session.Pump();
		Packet stop = Assert.Single(ReadPackets(connection.Sent), packet => packet.IsCommand(PacketCommand.Broadcast) && packet.Payload.Span[0] == 0x3E);
		Assert.Equal(0x20, stop.Length);
		ReadOnlySpan<byte> record = stop.Payload.Span;
		Assert.Equal(6, record[1]);
		Assert.Equal((ushort)4, BinaryPrimitives.ReadUInt16LittleEndian(record[2..]));
		Assert.Equal((ushort)0, BinaryPrimitives.ReadUInt16LittleEndian(record[4..]));
		Assert.Equal((ushort)0, BinaryPrimitives.ReadUInt16LittleEndian(record[6..]));
		Assert.Equal(-1, BinaryPrimitives.ReadInt16LittleEndian(record[8..]));
		Assert.Equal(-1, BinaryPrimitives.ReadInt16LittleEndian(record[0x0A..]));
		Assert.Equal(player.Position.X, BinaryPrimitives.ReadSingleLittleEndian(record[0x0C..]));
		Assert.Equal(player.Position.Y, BinaryPrimitives.ReadSingleLittleEndian(record[0x10..]));
		Assert.Equal(player.Position.Z, BinaryPrimitives.ReadSingleLittleEndian(record[0x14..]));
	}

	[Fact]
	public void StopRecordsUpdateTheLocalPlayerAndTheOtherEntity()
	{
		LobbyWorld world = new();
		world.HandlePacket(JoinLobby((4, "LOCAL"), (5, "OTHER")));
		PlayerCharacter player = CreatePlayer();
		world.LocalPlayer = player;
		world.HandlePacket(Packet.Create(PacketCommand.Broadcast, 0, StopRecord(4, 0x3000, 20, 21, 22)));
		world.HandlePacket(Packet.Create(PacketCommand.Broadcast, 0, StopRecord(5, 0x4000, 30, 31, 32)));
		Assert.Equal(new Vector3(20, 21, 22), player.Position);
		Assert.Equal((ushort)0x3000, player.Heading);
		Assert.Equal(PlayerMovementState.Standing, player.MovementState);
		Assert.True(world.Entities.TryGet(5, out LobbyEntity? entity));
		Assert.Equal(new Vector3(30, 31, 32), entity!.Position);
		Assert.Equal((ushort)0x4000, entity.Heading);
		Assert.Equal(LobbyMovementState.Stopped, entity.MovementState);
	}

	[Fact]
	public void MissingMapDrawsNothingAndReleaseIsIdempotent()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, OfflineScene.LightTableName, SceneSamples.Lights());
		SceneSamples.AddFile(files, OfflineScene.CharacterFileName, new byte[OfflineScene.CharacterFileLength]);
		using DataFileRegistry registry = new(files);
		using OfflineScene offline = new(registry);
		using FieldScene scene = new(offline);
		FieldCamera camera = new(new Vector3(0, 0, 0), new Vector3(0, 0, 1));
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Null(scene.Map);
		Assert.Equal(0, scene.Draw(renderer, camera.Camera));
		scene.Dispose();
		scene.Dispose();
	}

	private static List<Packet> ReadPackets(List<byte> bytes)
	{
		byte[] data = [.. bytes];
		List<Packet> packets = [];
		int offset = 0;
		while (offset + PacketHeader.Size <= data.Length)
		{
			PacketHeader header = PacketHeader.Read(data.AsSpan(offset));
			if (header.Length < PacketHeader.Size || offset + header.Length > data.Length)
				break;
			packets.Add(new Packet(header, data.AsSpan(offset + PacketHeader.Size, header.Length - PacketHeader.Size)));
			offset += header.Length;
		}
		return packets;
	}
}
