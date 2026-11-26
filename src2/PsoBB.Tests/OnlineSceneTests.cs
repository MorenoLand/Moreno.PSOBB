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
/// Checks scene 11's loading transition, download panels, merged login flow, character selection, cancel and release.
/// </summary>
[Collection("Game state")]
public sealed class OnlineSceneTests : IDisposable
{
	private const string TestHost = "online.invalid";
	private const int TestPort = 12000;
	private static readonly byte[] ServerKey = Pattern(0x30, 0x11);
	private static readonly byte[] ClientKey = Pattern(0x30, 0x41);
	private static readonly byte[] KeyMask = [0x19, 0x16, 0x18];

	public OnlineSceneTests() => GameState.Reset();

	public void Dispose() => GameState.Reset();

	[Fact]
	public void InitialiseStoresSceneParameterAndRoot()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		Assert.Equal(2u, GameState.SceneParameter);
		Assert.Equal(11u, GameState.RootScene);
		Assert.Equal(OnlineSceneState.Loading, scene.State);
		Assert.True(scene.IsLoading);
		Assert.Equal(256, scene.ProgressTexture.Width);
		Assert.Equal(1, renderer.CreatedTextureCount);
	}

	[Fact]
	public void ZeroLoadingResultStartsTheConnectionPhaseWithoutATransition()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		Assert.False(scene.CompleteLoading(0));
		Assert.Equal(0u, GameState.SceneTransition);
		Assert.Equal(OnlineSceneState.Idle, scene.State);
		Assert.False(scene.IsLoading);
		Assert.Throws<InvalidOperationException>(() => scene.CompleteLoading(0));
	}

	[Fact]
	public void NonzeroLoadingResultRequestsSceneTwoWithRootTwo()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		Assert.True(scene.CompleteLoading(2));
		Assert.Equal(2u, GameState.RootScene);
		Assert.Equal(2u, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(OnlineSceneState.Transitioned, scene.State);
	}

	[Fact]
	public void LoadingResultThreeReturnsToRootZero()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		Assert.True(scene.CompleteLoading(3));
		Assert.Equal(0u, GameState.RootScene);
		Assert.Equal(2u, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void ConnectBeforeLoadingCompletesIsRejected()
	{
		using FlowFixture fixture = new();
		Assert.Throws<InvalidOperationException>(() => fixture.Scene.Connect(TestHost, TestPort, DefaultLogin()));
		Assert.Equal(OnlineSceneState.Loading, fixture.Scene.State);
	}

	[Fact]
	public void DrawStopsAfterTheLoadingTransition()
	{
		using FlowFixture fixture = new();
		fixture.Scene.CompleteLoading(2);
		UiDrawList draw = new();
		fixture.Scene.Draw(draw);
		Assert.Empty(draw.Quads);
	}

	[Fact]
	public void CancelRequestsTheExitScene()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		scene.Cancel();
		Assert.Equal(0u, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(OnlineSceneState.Canceled, scene.State);
	}

	[Fact]
	public void CancelInputRequestsTheExitScene()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		InputManager input = NewInput(out MemoryGameInput source);
		source.SetKey(GameKey.Escape, true);
		input.Update(TimeSpan.Zero);
		scene.Update(input);
		Assert.Equal(0u, GameState.RequestedScene);
		Assert.Equal(1u, GameState.SceneTransition);
	}

	[Fact]
	public void DrawsTheTwoOriginalDownloadPanels()
	{
		using DataFileRegistry files = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.Equal(2, draw.Quads.Count);
		UiQuad upper = draw.Quads[0];
		Assert.Equal(new System.Numerics.Vector2(0f, 28f), upper.Position);
		Assert.Equal(new System.Numerics.Vector2(640f, 84f), upper.Size);
		Assert.Null(upper.Texture);
		Assert.Equal(0x8F000000u, upper.Color);
		UiQuad lower = draw.Quads[1];
		Assert.Equal(new System.Numerics.Vector2(0f, 310f), lower.Position);
		Assert.Equal(new System.Numerics.Vector2(640f, 136f), lower.Size);
		Assert.Null(lower.Texture);
		draw.Render(renderer);
		Assert.Equal(2, renderer.DrawVertices.Count);
		Assert.All(renderer.Textures, binding => Assert.Null(binding.Texture));
		Assert.Equal("Draw TriangleList 2 28 144", renderer.Commands[^1]);
	}

	[Fact]
	public void ProgressTextureFallsBackToTheLanguageNeutralArchive()
	{
		using DataFileRegistry files = OnlineTestData.Registry(includeEnglish: false, includeStandalone: true);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using OnlineScene scene = new(files, renderer);
		Assert.Equal(256, scene.ProgressTexture.Width);
		Assert.Equal(256, scene.ProgressTexture.Height);
	}

	[Fact]
	public void MissingProgressTextureIsReported()
	{
		using DataFileRegistry files = OnlineTestData.Registry(includeEnglish: false);
		using RecordingRenderer renderer = new(RenderSettings.Default);
		Assert.Throws<FileNotFoundException>(() => new OnlineScene(files, renderer));
	}

	[Fact]
	public void MergedLoginFlowDrivesTheSceneStates()
	{
		using FlowFixture fixture = new();
		fixture.Scene.CompleteLoading(0);
		Assert.True(fixture.Scene.Connect(TestHost, TestPort, DefaultLogin()));
		Assert.Equal(OnlineSceneState.Connecting, fixture.Scene.State);
		fixture.Connection.Push(Welcome().ToArray());
		fixture.Update();
		Assert.Equal(OnlineSceneState.Connecting, fixture.Scene.State);
		PushEncrypted(fixture.Connection, ClientInit());
		fixture.Update();
		Assert.Equal(OnlineSceneState.Connecting, fixture.Scene.State);
		PushEncrypted(fixture.Connection, SystemFileCreated());
		fixture.Update();
		Assert.Equal(OnlineSceneState.CharacterSelect, fixture.Scene.State);
	}

	[Fact]
	public void CharacterSelectionSendsThePreviewAndRecordsTheApproval()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		Assert.True(fixture.Scene.SelectCharacter(2));
		Assert.Equal(OnlineSceneState.CharacterSelect, fixture.Scene.State);
		List<Packet> sent = ReadSentPackets(fixture.Connection);
		Assert.Equal(new byte[] { 0x93, 0xE0, 0xE3 }, sent.Select(packet => packet.Header.Opcode));
		Assert.Equal(2, PlayerPreviewRequestPacket.Read(sent[2].Payload.Span).CharacterIndex);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(2).ToPacket());
		fixture.Update();
		Assert.Equal(OnlineSceneState.CharacterSelected, fixture.Scene.State);
		Assert.Equal(2, fixture.Scene.SelectedCharacterIndex);
	}

	[Fact]
	public void RedirectStopsAtTheMergedFlowBoundary()
	{
		using FlowFixture fixture = new();
		fixture.AdvanceToCharacterSelect();
		fixture.Scene.SelectCharacter(3);
		PushEncrypted(fixture.Connection, PlayerChoicePacket.Approved(3).ToPacket());
		fixture.Update();
		PushEncrypted(fixture.Connection, new ReconnectPacket { Address = 0x0A000102, Port = 0x1F90 }.ToPacket());
		fixture.Update();
		Assert.Equal(OnlineSceneState.Redirected, fixture.Scene.State);
		Assert.NotNull(fixture.Scene.Redirect);
		Assert.Equal(0x0A000102u, fixture.Scene.Redirect!.Address);
		Assert.Equal((ushort)0x1F90, fixture.Scene.Redirect.Port);
		Assert.Equal(0u, GameState.SceneTransition);
		Assert.Null(fixture.Scene.FailureReason);
	}

	[Fact]
	public void RejectedLoginFailsTheScene()
	{
		using FlowFixture fixture = new();
		fixture.Scene.CompleteLoading(0);
		fixture.Scene.Connect(TestHost, TestPort, DefaultLogin());
		fixture.Connection.Push(Welcome().ToArray());
		fixture.Update();
		PushEncrypted(fixture.Connection, ClientInit(errorCode: 9));
		fixture.Update();
		Assert.Equal(OnlineSceneState.Failed, fixture.Scene.State);
		Assert.Contains("rejected", fixture.Scene.FailureReason!);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void ReleaseDisconnectsAndDisposesOnce()
	{
		using FlowFixture fixture = new();
		fixture.Scene.CompleteLoading(0);
		fixture.Scene.Connect(TestHost, TestPort, DefaultLogin());
		fixture.Scene.Dispose();
		fixture.Scene.Dispose();
		Assert.True(fixture.Scene.IsDisposed);
		Assert.Equal(OnlineSceneState.Released, fixture.Scene.State);
		Assert.Equal(GameConnectionState.Disconnected, fixture.Connection.State);
		Assert.Equal(1, fixture.Renderer.DisposedTextureCount);
	}

	private static InputManager NewInput(out MemoryGameInput source)
	{
		source = new MemoryGameInput();
		return new InputManager(source);
	}

	private static ClientLoginPacket DefaultLogin() => new()
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

	private static List<Packet> ReadSentPackets(RecordingConnection connection)
	{
		byte[] wire = connection.Sent.ToArray();
		List<Packet> packets = [];
		PsoCipher cipher = new();
		cipher.Init(ClientKey);
		int offset = 0;
		while (offset < wire.Length)
		{
			byte[] headerBytes = new byte[PacketHeader.Size];
			Array.Copy(wire, offset, headerBytes, 0, PacketHeader.Size);
			cipher.DecryptBlock(headerBytes);
			PacketHeader header = PacketHeader.Read(headerBytes);
			int padded = (header.Length + 7) & ~7;
			byte[] body = new byte[padded - PacketHeader.Size];
			Array.Copy(wire, offset + PacketHeader.Size, body, 0, body.Length);
			if (body.Length > 0)
				cipher.DecryptBlocks(body);
			byte[] complete = new byte[header.Length];
			headerBytes.CopyTo(complete, 0);
			Array.Copy(body, 0, complete, PacketHeader.Size, header.Length - PacketHeader.Size);
			packets.Add(Packet.Read(complete));
			offset += padded;
		}
		return packets;
	}

	private sealed class FlowFixture : IDisposable
	{
		public FlowFixture()
		{
			Files = OnlineTestData.Registry();
			Renderer = new RecordingRenderer(RenderSettings.Default);
			Session = new GameSession(Connection);
			Flow = new LoginFlow(Session);
			Scene = new OnlineScene(Files, Renderer, Flow);
		}

		public DataFileRegistry Files { get; }
		public RecordingRenderer Renderer { get; }
		public RecordingConnection Connection { get; } = new();
		public GameSession Session { get; }
		public LoginFlow Flow { get; }
		public OnlineScene Scene { get; }
		private InputManager Input { get; } = new(new MemoryGameInput());

		public void Update() => Scene.Update(Input);

		public void AdvanceToCharacterSelect()
		{
			Scene.CompleteLoading(0);
			Assert.True(Scene.Connect(TestHost, TestPort, DefaultLogin()));
			Connection.Push(Welcome().ToArray());
			Update();
			PushEncrypted(Connection, ClientInit());
			Update();
			PushEncrypted(Connection, SystemFileCreated());
			Update();
			Assert.Equal(OnlineSceneState.CharacterSelect, Scene.State);
		}

		public void Dispose()
		{
			Scene.Dispose();
			Session.Dispose();
			Renderer.Dispose();
			Files.Dispose();
		}
	}

	private sealed class RecordingConnection : IGameConnection
	{
		private readonly Queue<byte> _received = new();

		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;
		public List<byte> Sent { get; } = [];

		public bool Connect(string host, int port)
		{
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

		public void Dispose() => Close();

		public void Push(ReadOnlySpan<byte> bytes)
		{
			foreach (byte value in bytes)
				_received.Enqueue(value);
		}
	}
}
