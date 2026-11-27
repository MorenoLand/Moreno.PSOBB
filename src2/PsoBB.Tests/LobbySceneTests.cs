using System.Buffers.Binary;
using System.Text;
using PsoBB.Client;
using PsoBB.Core;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Input;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Platform;
using PsoBB.Player;
using PsoBB.Rendering;
using PsoBB.Scene;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the title hand-off, the redirected game server, the lobby field promotion, the controller and the release path.
/// </summary>
[Collection("Game state")]
public sealed class LobbySceneTests : IDisposable
{
	private const string PatchService = "patch-service.invalid";
	private const string PatchAlternate = "patch-alternate.invalid";
	private const string PatchFallback = "patch-fallback.invalid";
	private const string LoginService = "login-service.invalid";
	private const string LoginAlternate = "login-alternate.invalid";
	private const string LoginFallback = "login-fallback.invalid";
	private const string LoginSecondary = "login-secondary.invalid";
	private static readonly byte[] ServerKey = Pattern(0x30, 0x11);
	private static readonly byte[] ClientKey = Pattern(0x30, 0x41);
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];

	public LobbySceneTests()
	{
		GameState.Reset();
		Scene2.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		Scene2.Reset();
	}

	[Fact]
	public void StartGameRequestsTheOnlineSceneAndOtherActionsDoNot()
	{
		using LoginDialog dialog = new(CreateText());

		Assert.Equal(LoginDialogAction.StartGame, dialog.ConfirmSelected());
		Assert.True(LobbyScene.RequestFromTitle(dialog.RequestedAction));
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(OnlineScene.SceneNumber, GameState.RequestedScene);
		Assert.False(LobbyScene.RequestFromTitle(LoginDialogAction.ExitGame));
	}

	[Fact]
	public void TheDirectoryBindsSceneElevenToTheLobbyScene()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RecordingConnection connection = new();
		SceneNetworkOptions network = new(Hosts(), Login(), () => connection);
		using OfflineScene offline = CreateOffline();
		LobbySceneHost host = new(offline);
		using SceneDirectory directory = new(files, renderer, network, lobbyHostFactory: () => host);

		ISceneScreen? screen = directory.Create(OnlineScene.SceneNumber);

		LobbyScene lobby = Assert.IsType<LobbyScene>(screen);
		Assert.Same(directory.OnlineScene, lobby.Online);
		Assert.Same(lobby, directory.Lobby);
		Assert.Equal(LoginFallback, connection.LastHost);
	}

	[Fact]
	public void HostEndpointRedirectsToTheGameServerAndTheLobbyWorldBecomesTheField()
	{
		using LobbyFixture fixture = new();

		Assert.Equal(LoginFallback, fixture.Connection.LastHost);
		Assert.Equal(ServerEndpoints.LoginDefaultPort, fixture.Connection.LastPort);
		fixture.AdvanceToRedirect();
		Assert.Equal("10.0.1.2", fixture.Connection.LastHost);
		Assert.Equal(0x1F90, fixture.Connection.LastPort);
		fixture.AdvanceToLobby();

		Assert.Equal(LobbyWorldState.Lobby, fixture.Scene.World!.State);
		Assert.Same(fixture.Scene.GameServerFlow!.World, fixture.Scene.World);
		Assert.True(fixture.Scene.IsFieldReady);
		Assert.Same(fixture.Map, fixture.Scene.Field!.Map);
		Assert.Same(fixture.Player, fixture.Scene.Field.Player);
		Assert.Same(fixture.Player, fixture.Scene.World.LocalPlayer);
		Assert.NotNull(fixture.Scene.Controller);
	}

	[Fact]
	public void TheControllerMovesThePromotedPlayer()
	{
		using LobbyFixture fixture = new();
		fixture.AdvanceToLobby();
		Vector3 start = fixture.Player.Position;

		fixture.Press(GameKey.W, true);
		fixture.Scene.Update(fixture.Input);

		Assert.Equal(PlayerMovementState.Running, fixture.Player.MovementState);
		Assert.True(fixture.Player.Position.Z > start.Z, $"The lobby player did not move from {start}.");
		Assert.NotEmpty(fixture.Connection.Sent);
	}

	[Fact]
	public void TheMapDrawsBeforeThePlayer()
	{
		using LobbyFixture fixture = new();
		fixture.AdvanceToLobby();
		using RecordingRenderer renderer = new(RenderSettings.Default);

		int surfaces = fixture.Scene.DrawWorld(renderer);

		Assert.Equal(3, surfaces);
		Matrix4x4[] worlds = [.. renderer.Transforms.Where(transform => transform.Kind == TransformKind.World).Select(transform => ToGameMatrix(transform.Transform))];
		Assert.True(worlds.Length >= 2);
		Assert.Equal(ModelTransform(PlayerTransform(fixture.Player)), worlds[^1]);
	}

	[Fact]
	public void MissingFieldHostStopsWithADiagnosticAndReleaseIsIdempotent()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RecordingConnection connection = new();
		SceneNetworkOptions network = new(Hosts(), Login(), () => connection);
		using LobbyScene scene = LobbyScene.Create(files, renderer, network);

		AdvanceToLobby(scene, connection);

		Assert.True(scene.IsStopped);
		Assert.Contains("field host", scene.Diagnostic!);
		Assert.False(scene.IsFieldReady);
		scene.Dispose();
		scene.Dispose();
		Assert.True(scene.IsDisposed);
		Assert.True(scene.Online.IsDisposed);
		Assert.Equal(1, connection.DisposeCount);
		Assert.Equal(1, renderer.DisposedTextureCount);
	}

	[Fact]
	public void TheDirectorStopsWhenTheLobbySceneHasNoFieldHost()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RecordingConnection connection = new();
		SceneNetworkOptions network = new(Hosts(), Login(), () => connection);
		LobbyScene lobby = LobbyScene.Create(files, renderer, network);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), new FixedScreenFactory(lobby));
		GameState.CurrentScene = LobbyScene.SceneNumber;

		director.Update();
		connection.Push(Welcome().ToArray());
		director.Update();
		PushEncrypted(connection, ClientInit());
		director.Update();
		PushEncrypted(connection, new SystemFileCreatedPacket().ToPacket());
		director.Update();
		PushEncrypted(connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
		director.Update();
		director.Update();
		connection.Push(Welcome().ToArray());
		director.Update();
		PushEncrypted(connection, JoinLobby((4, "LOCAL")));
		director.Update();

		Assert.True(director.IsStopped);
		Assert.Contains("field host", director.Diagnostic!);
		Assert.False(lobby.IsFieldReady);
	}

	[Fact]
	public void ReleasingTheFieldClearsTheWorldBindingAndTheSession()
	{
		using LobbyFixture fixture = new();
		fixture.AdvanceToLobby();
		LobbyWorld world = fixture.Scene.World!;

		fixture.Scene.Dispose();
		fixture.Scene.Dispose();

		Assert.True(fixture.Scene.IsDisposed);
		Assert.Null(fixture.Scene.Field);
		Assert.Null(fixture.Scene.World);
		Assert.Null(world.LocalPlayer);
		Assert.Equal(1, fixture.Connection.DisposeCount);
		Assert.Equal(1, fixture.Renderer.DisposedTextureCount);
	}

	private static void AdvanceToLobby(LobbyScene scene, RecordingConnection connection)
	{
		InputManager input = new(new MemoryGameInput());
		input.Update(TimeSpan.Zero);
		connection.Push(Welcome().ToArray());
		scene.Update(input);
		PushEncrypted(connection, ClientInit());
		scene.Update(input);
		PushEncrypted(connection, new SystemFileCreatedPacket().ToPacket());
		scene.Update(input);
		PushEncrypted(connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
		scene.Update(input);
		scene.Update(input);
		connection.Push(Welcome().ToArray());
		scene.Update(input);
		PushEncrypted(connection, JoinLobby((4, "LOCAL"), (5, "OTHER")));
		scene.Update(input);
	}

	private static GameText CreateText()
	{
		int[] sizes = new int[42];
		sizes[GameText.LoginScreenList] = 22;
		string[] values =
		[
			"Cancel", "Confirm", "Login", "Start Game", "Exit Game", "Patch Download",
			"Register UserID", string.Empty, string.Empty, string.Empty, string.Empty,
		];
		Dictionary<int, string[]> strings = new() { [GameText.LoginScreenList] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
	}

	private static ServerHostTable Hosts() => new(PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary);

	private static ClientLoginPacket Login() => new()
	{
		Username = ByteString.FromText("ACCOUNT")!,
		Password = ByteString.FromText("PASSWORD")!,
	};

	private static Packet Welcome() => Packet.Create(PacketCommand.ServerInit, 0, new ServerInitPacket
	{
		Copyright = ByteString.FromText(ServerInitPacket.GameServerCopyright)!,
		ServerKey = Mask(ServerKey),
		ClientKey = Mask(ClientKey),
	}.WritePayload());

	private static Packet ClientInit() => new ClientInitPacket
	{
		GuildCardNumber = 0x11223344,
		SecurityToken = 0x55667788,
		ClientConfig = Pattern(ClientInitPacket.ClientConfigLength, 0x21),
	}.ToPacket();

	private static Packet JoinLobby(params (int ClientId, string Name)[] players)
	{
		byte[] body = new byte[LobbyWorld.LobbyJoinEntryOffset + (players.Length * LobbyWorld.LobbyJoinEntryLength)];
		body[0] = (byte)players[0].ClientId;
		body[1] = (byte)players[0].ClientId;
		body[3] = 3;
		body[4] = 2;
		for (int index = 0; index < players.Length; index++)
			LobbyEntry(players[index].ClientId, players[index].Name).CopyTo(body, LobbyWorld.LobbyJoinEntryOffset + (index * LobbyWorld.LobbyJoinEntryLength));
		return Packet.Create(PacketCommand.JoinLobby, (uint)players.Length, body);
	}

	private static byte[] LobbyEntry(int clientId, string name)
	{
		byte[] data = new byte[LobbyWorld.LobbyJoinEntryLength];
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(LobbyEntity.ClientIdOffset), (uint)clientId);
		byte[] encoded = Encoding.Unicode.GetBytes(name);
		encoded.AsSpan(0, Math.Min(encoded.Length, LobbyEntity.NameLength)).CopyTo(data.AsSpan(LobbyEntity.NameOffset));
		return data;
	}

	private static PlayerCharacter CreatePlayer() => PlayerCharacter.Create(4, new Vector3(10, 0, 20), 0, PlayerAnimationSet.Empty);

	private static OfflineScene CreateOffline()
	{
		MemoryFileSystem files = new();
		SceneSamples.AddFile(files, OfflineScene.LightTableName, SceneSamples.Lights());
		SceneSamples.AddFile(files, OfflineScene.CharacterFileName, new byte[OfflineScene.CharacterFileLength]);
		using DataFileRegistry registry = new(files);
		return new OfflineScene(registry);
	}

	private static Matrix4x4 PlayerTransform(PlayerCharacter player)
	{
		TransformationStack stack = new();
		stack.Translate(player.Position);
		stack.RotateEuler(0, player.Heading, 0, false);
		return stack.Current;
	}

	private static Matrix4x4 ModelTransform(Matrix4x4 world)
	{
		using ModelRenderer renderer = new();
		return Assert.Single(renderer.Build(NinjaModelReader.Read(ModelTestData.ModelCore()), world)).Transform;
	}

	private static Matrix4x4 ToGameMatrix(System.Numerics.Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);

	private static byte[] Pattern(int length, byte seed = 1)
	{
		byte[] values = new byte[length];
		for (int index = 0; index < values.Length; index++)
			values[index] = unchecked((byte)(seed + index));
		return values;
	}

	private static byte[] Mask(ReadOnlySpan<byte> key)
	{
		byte[] masked = key.ToArray();
		for (int index = 0; index < masked.Length; index++)
			masked[index] ^= KeyMask[index % KeyMask.Length];
		return masked;
	}

	private static byte[] Encrypt(Packet packet, ReadOnlySpan<byte> key)
	{
		byte[] wire = new byte[(packet.Length + 7) & ~7];
		packet.WriteTo(wire);
		PsoCipher cipher = new();
		cipher.Init(key);
		cipher.EncryptBlocks(wire);
		return wire;
	}

	private static void PushEncrypted(RecordingConnection connection, params Packet[] packets)
	{
		foreach (Packet packet in packets)
			connection.Push(Encrypt(packet, ServerKey));
	}

	private sealed class EmptyGround : IGroundCollision
	{
		public GroundContact? Sweep(Vector3 from, Vector3 to, int mask) => null;
	}

	private sealed class LobbyFixture : IDisposable
	{
		public LobbyFixture()
		{
			Files = OnlineTestData.Registry();
			Renderer = new RecordingRenderer(RenderSettings.Default);
			Network = new SceneNetworkOptions(Hosts(), Login(), () => Connection);
			Source = new MemoryGameInput();
			Input = new InputManager(Source);
			Input.Update(TimeSpan.Zero);
			Offline = CreateOffline();
			Map = MapRendererTestData.Scene(new MapGeometryOptions { WithAlpha = true });
			Textures = new TextureCache(Renderer);
			Player = CreatePlayer();
			Camera = new FieldCamera(new Vector3(0, 0, 0), new Vector3(0, 0, 1));
			Host = new LobbySceneHost(Offline)
			{
				Map = Map,
				Camera = Camera,
				Textures = Textures,
				Player = Player,
				Ground = new EmptyGround(),
				PlayerModel = NinjaModelReader.Read(ModelTestData.ModelCore()),
			};
			Scene = LobbyScene.Create(Files, Renderer, Network, Host);
		}

		public DataFileRegistry Files { get; }
		public RecordingRenderer Renderer { get; }
		public RecordingConnection Connection { get; } = new();
		public SceneNetworkOptions Network { get; }
		public MemoryGameInput Source { get; }
		public InputManager Input { get; }
		public OfflineScene Offline { get; }
		public MapScene Map { get; }
		public TextureCache Textures { get; }
		public PlayerCharacter Player { get; }
		public FieldCamera Camera { get; }
		public LobbySceneHost Host { get; }
		public LobbyScene Scene { get; }

		public void Press(GameKey key, bool down)
		{
			Source.SetKey(key, down);
			Input.Update(TimeSpan.Zero);
		}

		public void AdvanceToRedirect()
		{
			Connection.Push(Welcome().ToArray());
			Scene.Update(Input);
			PushEncrypted(Connection, ClientInit());
			Scene.Update(Input);
			PushEncrypted(Connection, new SystemFileCreatedPacket().ToPacket());
			Scene.Update(Input);
			PushEncrypted(Connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
			Scene.Update(Input);
			Scene.Update(Input);
		}

		public void AdvanceToLobby()
		{
			AdvanceToRedirect();
			Connection.Push(Welcome().ToArray());
			Scene.Update(Input);
			PushEncrypted(Connection, JoinLobby((4, "LOCAL"), (5, "OTHER")));
			Scene.Update(Input);
		}

		public void Dispose()
		{
			Scene.Dispose();
			Textures.Dispose();
			Offline.Dispose();
			Files.Dispose();
			Renderer.Dispose();
		}
	}

	private sealed class FixedScreenFactory : ISceneScreenFactory
	{
		private readonly ISceneScreen _screen;

		public FixedScreenFactory(ISceneScreen screen) => _screen = screen;

		public ISceneScreen? Create(uint scene) => scene == LobbyScene.SceneNumber ? _screen : null;

		public void Dispose()
		{
		}
	}

	private sealed class RecordingConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public string? LastHost { get; private set; }
		public int LastPort { get; private set; }
		public List<byte> Sent { get; } = [];
		public int DisposeCount { get; private set; }

		public bool Connect(string host, int port)
		{
			LastHost = host;
			LastPort = port;
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
			if (State != GameConnectionState.Connected)
				return 0;
			int count = Math.Min(destination.Length, _received.Count);
			for (int index = 0; index < count; index++)
				destination[index] = _received.Dequeue();
			return count;
		}

		public void Close() => State = GameConnectionState.Disconnected;

		public void Dispose()
		{
			DisposeCount++;
			Close();
		}

		public void Push(ReadOnlySpan<byte> bytes)
		{
			foreach (byte value in bytes)
				_received.Enqueue(value);
		}
	}
}
