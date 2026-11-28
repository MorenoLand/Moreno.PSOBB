using System.Numerics;
using PsoBB.Client;
using PsoBB.Core;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Net;
using PsoBB.Net.Crypto;
using PsoBB.Platform;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the concrete scene mapping and the online scene's endpoint selection, login phases, redirect, cancel and release.
/// </summary>
[Collection("Game state")]
public sealed class SceneDirectoryTests : IDisposable
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

	public SceneDirectoryTests()
	{
		GameState.Reset();
		Scene1.Reset();
		Scene2.Reset();
		Scene2TransitionOverlay.Reset();
		CharacterMakingScene.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		Scene1.Reset();
		Scene2.Reset();
		Scene2TransitionOverlay.Reset();
		CharacterMakingScene.Reset();
	}

	[Fact]
	public void SceneOneMapsToThePortedLogoScene()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = Scene1.SceneNumber;

		director.Update();

		Assert.NotNull(director.Screen);
		Assert.Equal(Scene1.SceneNumber, GameState.SceneParameter);
	}

	[Fact]
	public void SceneFiveMapsToThePortedCharacterMakingScene()
	{
		using DataFileRegistry files = CharacterMakingTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = CharacterMakingScene.SceneNumber;

		director.Update();

		Assert.NotNull(director.Screen);
		Assert.Equal(CharacterMakingScene.SceneParameter, GameState.SceneParameter);
	}

	[Fact]
	public void SceneTenWithoutASaveRequestsRestart()
	{
		using DataFileRegistry files = Scene1TestData.Registry(includeLogo: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = OfflineScene.SceneNumber;

		director.Update();
		director.Update();

		Assert.Equal(SceneManager.ExitScene, GameState.CurrentScene);
		Assert.Equal(OfflineScene.SceneNumber, GameState.PreviousScene);
		Assert.True(director.IsExited);
	}

	[Fact]
	public void SceneThirteenMapsToThePortedSaveGameScene()
	{
		using DataFileRegistry files = SaveGameTestData.Registry(includeMusic: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = SaveGameScene.SceneNumber;

		director.Update();

		Assert.NotNull(director.Screen);
		Assert.Equal(SaveGameScene.SceneParameter, GameState.SceneParameter);
	}

	[Fact]
	public void SceneTwoWithoutAFactoryStopsWithTheInterfaceDiagnostic()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = Scene2.SceneNumber;

		director.Update();

		Assert.True(director.IsStopped);
		Assert.False(director.IsExited);
		Assert.Equal("Scene 2 has no supplied interface.", director.Diagnostic);
		Assert.Null(director.Screen);
	}

	[Fact]
	public void SceneTwoLifecycleThroughTheDirectorIsStartUpdateDrawRelease()
	{
		List<string> log = [];
		Func<Scene2Interface> scene2 = () => new(state =>
			state == Scene2.EntryScreenState ? new Scene2Screen(new RecordingPanel(log)) : null);
		using DataFileRegistry files = Scene1TestData.Registry(includeLogo: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer, scene2Factory: scene2);
		MemoryGameInput source = new();
		InputManager input = new(source);
		using SceneDirector director = new(input, directory);
		GameState.CurrentScene = Scene2.SceneNumber;

		director.Update();
		Assert.NotNull(director.Screen);
		Assert.Equal(Scene2.EntryScreenState, GameState.SceneScreenState);
		Assert.Equal(2u, GameState.SceneFadeState);

		director.Update();
		Assert.Equal(["create", "update"], log);
		director.Draw(new UiDrawList());
		Assert.Equal(["create", "update", "draw"], log);

		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);
		director.Update();
		Assert.Contains("update", log);
		Assert.DoesNotContain("release", log);
		director.Draw(new UiDrawList());
		Assert.Equal("draw", log[^1]);

		director.Update();

		Assert.True(director.IsExited);
		Assert.Equal(Scene2.ReleasedScreenState, GameState.SceneScreenState);
		Assert.Equal(["create", "update", "draw", "update", "draw", "release"], log);
	}

	[Fact]
	public void SceneOneRequestsSceneTwoWithTransitionOne()
	{
		using DataFileRegistry files = Scene1TestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = Scene1.SceneNumber;
		int total = TitleLogoSequence.FadeFrames + TitleLogoSequence.FrameLimit + 1 + TitleLogoSequence.FadeFrames;
		for (int index = 0; index < total; index++)
			director.Update();

		Assert.False(director.IsStopped);
		director.Update();

		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(Scene2.SceneNumber, GameState.RequestedScene);
		Assert.Equal(Scene1.SceneNumber, GameState.CurrentScene);
	}

	[Fact]
	public void ScenesWithoutPortedScreensReturnNoScreen()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		Assert.Null(directory.Create(14));
		Assert.Null(directory.Create(18));
	}

	[Fact]
	public void OnlineEntryUsesTheFallbackLoginEndpoint()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();
		Assert.NotNull(fixture.Online);
		Assert.Equal(OnlineSceneState.Connecting, fixture.Online.State);
		Assert.Equal(LoginFallback, fixture.Connection.ConnectHost);
		Assert.Equal(ServerEndpoints.LoginDefaultPort, fixture.Connection.ConnectPort);
		Assert.Equal(1, fixture.Connection.ConnectCount);
	}

	[Fact]
	public void OnlineEntryUsesTheRuntimeEndpointForModeOne()
	{
		using OnlineFixture fixture = new(clientMode: 1, runtimeHost: "runtime.invalid", runtimePort: 12345);
		fixture.Enter();
		Assert.Equal("runtime.invalid", fixture.Connection.ConnectHost);
		Assert.Equal(12345, fixture.Connection.ConnectPort);
	}

	[Fact]
	public void OnlineEntryUsesTheSecondaryEndpointForAnAlternateSet()
	{
		using OnlineFixture fixture = new(clientMode: 3, alternateEndpointSet: true, useSecondaryEndpoints: true);
		fixture.Enter();
		Assert.Equal(LoginSecondary, fixture.Connection.ConnectHost);
		Assert.Equal(ServerEndpoints.GamePort, fixture.Connection.ConnectPort);
	}

	[Fact]
	public void TheDirectorPumpsTheLoginFlowToCharacterSelection()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();
		fixture.AdvanceToCharacterSelect();
		Assert.Equal(OnlineSceneState.CharacterSelect, fixture.Online!.State);
		Assert.Equal(OnlineScene.SceneNumber, GameState.CurrentScene);
		Assert.Equal(0u, GameState.SceneTransition);
		Assert.Null(fixture.Director.Diagnostic);
	}

	[Fact]
	public void TheDirectorRecordsTheRedirectWithoutInventingATransition()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();
		fixture.AdvanceToCharacterSelect();
		Assert.True(fixture.Online!.SelectCharacter(2));
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(2).ToPacket());
		fixture.Director.Update();
		Assert.Equal(OnlineSceneState.CharacterSelected, fixture.Online.State);
		Assert.Equal(2, fixture.Online.SelectedCharacterIndex);

		PushEncrypted(fixture.Connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
		fixture.Director.Update();

		Assert.Equal(OnlineSceneState.Redirected, fixture.Online.State);
		Assert.NotNull(fixture.Online.Redirect);
		Assert.Equal(0x0A000102u, fixture.Online.Redirect!.Address);
		Assert.Equal((ushort)0x1F90, fixture.Online.Redirect.Port);
		Assert.Equal(OnlineScene.SceneNumber, GameState.CurrentScene);
		Assert.Equal(0u, GameState.SceneTransition);
		Assert.Null(fixture.Director.Diagnostic);
	}

	[Fact]
	public void ARejectedLoginFailsWithoutASceneTransition()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();
		fixture.Connection.Push(Welcome().ToArray());
		fixture.Director.Update();
		PushEncrypted(fixture.Connection, ClientInit(errorCode: 9));
		fixture.Director.Update();

		Assert.Equal(OnlineSceneState.Failed, fixture.Online!.State);
		Assert.Contains("rejected", fixture.Online.FailureReason!);
		Assert.Equal(OnlineScene.SceneNumber, GameState.CurrentScene);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void CancelRequestsTheExitSceneAndTheDirectorReleasesTheSession()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();
		fixture.Press(GameKey.Escape);

		fixture.Director.Update();
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.False(fixture.Online!.IsDisposed);

		fixture.Director.Update();

		Assert.Equal(SceneManager.ExitScene, GameState.CurrentScene);
		Assert.Equal(OnlineScene.SceneNumber, GameState.PreviousScene);
		Assert.True(fixture.Director.IsExited);
		Assert.True(fixture.Online.IsDisposed);
		Assert.Equal(GameConnectionState.Disconnected, fixture.Connection.State);
	}

	[Fact]
	public void DisposalReleasesTheOnlineSessionAndItsTextureOnce()
	{
		using OnlineFixture fixture = new();
		fixture.Enter();

		fixture.Director.Dispose();
		fixture.Director.Dispose();

		Assert.True(fixture.Online!.IsDisposed);
		Assert.Equal(GameConnectionState.Disconnected, fixture.Connection.State);
		Assert.Equal(1, fixture.Connection.DisposeCount);
		Assert.Equal(1, fixture.Renderer.DisposedTextureCount);
	}

	[Fact]
	public void AFailedOnlineSceneCreationDisposesTheSession()
	{
		using DataFileRegistry files = OnlineTestData.Registry(includeEnglish: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RecordingConnection connection = new();
		ServerHostTable hosts = new(PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary);
		SceneNetworkOptions network = new(hosts, Login(), () => connection);
		using SceneDirectory directory = new(files, renderer, network);

		Assert.Throws<FileNotFoundException>(() => directory.Create(OnlineScene.SceneNumber));

		Assert.Equal(1, connection.DisposeCount);
		Assert.Equal(GameConnectionState.Disconnected, connection.State);
	}

	[Fact]
	public void DisposingTheDirectoryReleasesALoadingOnlineScreen()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		SceneDirectory directory = new(files, renderer);
		ISceneScreen screen = directory.Create(OnlineScene.SceneNumber)!;
		Assert.NotNull(screen);

		directory.Dispose();

		Assert.True(directory.OnlineScene!.IsDisposed);
		Assert.Equal(1, renderer.DisposedTextureCount);
	}

	[Fact]
	public void WithoutAHostTableSceneElevenStaysInTheLoadingPhase()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using SceneDirectory directory = new(files, renderer);
		using SceneDirector director = new(new InputManager(new MemoryGameInput()), directory);
		GameState.CurrentScene = OnlineScene.SceneNumber;

		director.Update();

		Assert.NotNull(directory.OnlineScene);
		Assert.Equal(OnlineSceneState.Loading, directory.OnlineScene.State);
		Assert.Null(directory.OnlineScene.LoginFlow);
		UiDrawList draw = new();
		director.Draw(draw);
		Assert.Equal(2, draw.Quads.Count);
	}

	private static ClientLoginPacket Login() => new()
	{
		Username = ByteString.FromText("ACCOUNT")!,
		Password = ByteString.FromText("PASSWORD")!,
	};

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

	private static Packet Welcome() =>
		Packet.Create(PacketCommand.ServerInit, 0, new ServerInitPacket
		{
			Copyright = ByteString.FromText(ServerInitPacket.GameServerCopyright)!,
			ServerKey = Mask(ServerKey),
			ClientKey = Mask(ClientKey),
		}.WritePayload());

	private static Packet ClientInit(uint errorCode = 0) =>
		new ClientInitPacket
		{
			ErrorCode = errorCode,
			GuildCardNumber = 0x11223344,
			SecurityToken = 0x55667788,
			ClientConfig = Pattern(ClientInitPacket.ClientConfigLength, 0x21),
		}.ToPacket();

	private static Packet SystemFileCreated() =>
		new SystemFileCreatedPacket { Result = SystemFileCreatedPacket.Success }.ToPacket();

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

	private sealed class OnlineFixture : IDisposable
	{
		public OnlineFixture(uint clientMode = 0, bool alternateEndpointSet = false, bool useSecondaryEndpoints = false, string runtimeHost = "", ushort runtimePort = 0)
		{
			Files = OnlineTestData.Registry();
			Renderer = new RecordingRenderer(RenderSettings.Default);
			Source = new MemoryGameInput();
			Input = new InputManager(Source);
			ServerHostTable hosts = new(PatchService, PatchAlternate, PatchFallback, LoginService, LoginAlternate, LoginFallback, LoginSecondary);
			Network = new SceneNetworkOptions(hosts, Login(), () => Connection)
			{
				ClientMode = clientMode,
				AlternateEndpointSet = alternateEndpointSet,
				UseSecondaryEndpoints = useSecondaryEndpoints,
				RuntimeHost = runtimeHost,
				RuntimePort = runtimePort,
			};
			Directory = new SceneDirectory(Files, Renderer, Network);
			Director = new SceneDirector(Input, Directory);
			GameState.CurrentScene = OnlineScene.SceneNumber;
		}

		public DataFileRegistry Files { get; }
		public RecordingRenderer Renderer { get; }
		public RecordingConnection Connection { get; } = new();
		public MemoryGameInput Source { get; }
		public InputManager Input { get; }
		public SceneNetworkOptions Network { get; }
		public SceneDirectory Directory { get; }
		public SceneDirector Director { get; }
		public OnlineScene? Online => Directory.OnlineScene;

		public void Enter() => Director.Update();

		public void Press(GameKey key)
		{
			Source.SetKey(key, true);
			Input.Update(TimeSpan.Zero);
		}

		public void AdvanceToCharacterSelect()
		{
			Connection.Push(Welcome().ToArray());
			Director.Update();
			PushEncrypted(Connection, ClientInit());
			Director.Update();
			PushEncrypted(Connection, SystemFileCreated());
			Director.Update();
			Assert.Equal(OnlineSceneState.CharacterSelect, Online!.State);
		}

		public void Dispose()
		{
			Director.Dispose();
			Files.Dispose();
			Renderer.Dispose();
		}
	}

	private sealed class RecordingPanel : UiPanel
	{
		private readonly List<string> _log;

		public RecordingPanel(List<string> log)
		{
			_log = log;
			Size = new Vector2(640f, 480f);
			Color = 0xFFFFFFFFu;
			_log.Add("create");
		}

		public override void Update(float deltaSeconds)
		{
			_log.Add("update");
			base.Update(deltaSeconds);
		}

		public override void Draw(UiDrawList drawList)
		{
			_log.Add("draw");
			base.Draw(drawList);
		}

		protected override void Dispose(bool disposing)
		{
			if (!IsDisposed)
				_log.Add("release");
			base.Dispose(disposing);
		}
	}

	private sealed class RecordingConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public List<byte> Sent { get; } = [];
		public string? ConnectHost { get; private set; }
		public int ConnectPort { get; private set; }
		public int ConnectCount { get; private set; }
		public int DisposeCount { get; private set; }

		public bool Connect(string host, int port)
		{
			ConnectHost = host;
			ConnectPort = port;
			ConnectCount++;
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data)
		{
			foreach (byte value in data)
				Sent.Add(value);
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
