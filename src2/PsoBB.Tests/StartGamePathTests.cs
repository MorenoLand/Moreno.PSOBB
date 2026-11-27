using System.Buffers.Binary;
using System.Text;
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
using PsoBB.Rendering;
using PsoBB.Save;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Runs the Start Game path from the title row through state 9, the file-flag stages and the scene-11 binding.
/// </summary>
[Collection("Game state")]
public sealed class StartGamePathTests : IDisposable
{
	public StartGamePathTests()
	{
		GameState.Reset();
		Scene2.Reset();
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
	}

	public void Dispose()
	{
		GameState.Reset();
		Scene2.Reset();
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
	}

	[Fact]
	public void TitleStartGameReachesStateNineAndTheSceneElevenBinding()
	{
		using LoginDialog dialog = new(CreateTitleText());
		using Scene2TitleMenu menu = new(dialog);
		Assert.Equal(LoginDialogAction.StartGame, menu.Confirm());
		Assert.Equal(Scene2.SharedScreenState, GameState.SceneScreenState);
		Assert.Equal(Scene2.SharedFadeState, GameState.SceneFadeState);

		Scene2Screen? rows = null;
		using Scene2Interface ui = new(state => state == 9 ? rows = Scene2StartGameScreenFactory.Create(CreateRowsText(), CreateSave()) : null);
		using Scene2 scene = new(ui);
		InputManager input = new(new MemoryGameInput());
		input.Update(TimeSpan.Zero);
		scene.Start();
		scene.Update(input, 0f);
		scene.Update(input, 0f);
		Scene2.SelectStartGame();
		scene.Update(input, 0f);
		scene.Update(input, 0f);
		Assert.NotNull(rows);

		Files files = new();
		files.Add(SaveFileCheck.SystemName, CreateSystem());
		files.Add(SaveFileCheck.CharacterName, CreateCharacter());
		files.Add(SaveFileCheck.GuildCardName, new byte[16]);
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		CharacterSaveLoad.Attach(
			new byte[CharacterSaveLoad.PlayerChunkLength],
			new byte[CharacterSaveLoad.SystemChunkLength],
			new byte[CharacterSaveLoad.SaveLength],
			new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		GuildSave.Attach(new byte[4096], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		CreateCharacter().CopyTo(CharacterSaveLoad.LoadBuffer!);
		Scene2StartGameModeMachine machine = new(files) { PumpSave = SystemSave.Pump };
		machine.SetMode(0);
		machine.Advance();
		Assert.Equal(1u, machine.Mode);
		for (int slot = 0; slot < 4; slot++)
		{
			Assert.Equal(1, machine.FileFlags[1 + 2 * slot]);
			Assert.Equal(1, machine.FileFlags[2 + 2 * slot]);
		}

		machine.FileFlags[0] = 1;
		machine.SetMode(1);
		machine.Advance();
		Assert.Equal(3u, machine.Mode);

		int guard = 0;
		while (machine.Mode != 23 && guard++ < 64)
			machine.Advance();
		Assert.Equal(23u, machine.Mode);
		GameState.Reset();
		machine.Advance();
		Assert.Equal(6u, GameState.SceneScreenState);

		using DataFileRegistry online = OnlineTestData.Registry();
		using RecordingRenderer renderer = new(RenderSettings.Default);
		RecordingConnection connection = new();
		SceneNetworkOptions network = new(
			new ServerHostTable("patch.invalid", "patch-alt.invalid", "patch-fallback.invalid", "login.invalid", "login-alt.invalid", "login-fallback.invalid", "login-secondary.invalid"),
			new ClientLoginPacket { Username = ByteString.FromText("ACCOUNT")!, Password = ByteString.FromText("PASSWORD")! },
			() => connection);
		using LobbyScene lobby = LobbyScene.Create(online, renderer, network);

		Assert.NotNull(lobby.Online);
		Assert.False(lobby.IsDisposed);
	}

	private static GameText CreateTitleText()
	{
		int[] sizes = new int[42];
		sizes[GameText.LoginScreenList] = 22;
		string[] values =
		[
			"Cancel", "Confirm", "Login", "Start Game", "Exit Game", "Patch Download",
			"Register UserID", string.Empty, string.Empty, string.Empty, string.Empty,
		];
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, new Dictionary<int, string[]> { [GameText.LoginScreenList] = values })));
	}

	private static GameText CreateRowsText()
	{
		int[] sizes = new int[24];
		sizes[23] = 29;
		string[] values = Enumerable.Repeat(string.Empty, 29).ToArray();
		values[28] = "No Data";
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, new Dictionary<int, string[]> { [23] = values })));
	}

	private static CharacterSave CreateSave()
	{
		byte[] data = new byte[CharacterSave.Length];
		int record = CharacterSave.SlotOffset;
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.SignatureOffset), CharacterSaveCodec.CharacterSignature);
		Encoding.Latin1.GetBytes("HUNTER").CopyTo(data.AsSpan(record + 0x374));
		CharacterSaveCodec.Seal(data);
		return CharacterSaveCodec.Parse(data);
	}

	private static byte[] CreateSystem()
	{
		byte[] data = new byte[SystemSave.SaveLength];
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(4), SystemSave.Version);
		BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(8), SystemSave.Timestamp);
		BinaryPrimitives.WriteInt32LittleEndian(data, unchecked((int)~SaveChecksum.Compute(data)));
		return data;
	}

	private static byte[] CreateCharacter()
	{
		byte[] data = new byte[CharacterSave.Length];
		int record = CharacterSave.SlotOffset;
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.SignatureOffset), CharacterSaveCodec.CharacterSignature);
		CharacterSaveCodec.Seal(data);
		return data;
	}

	private sealed class Files : IDataFiles
	{
		private readonly Dictionary<string, byte[]> _files = new(StringComparer.OrdinalIgnoreCase);

		public void Add(string name, byte[] data) => _files[name] = data;

		public bool Exists(string name) => _files.ContainsKey(name);

		public int GetLength(string name) => _files.TryGetValue(name, out byte[]? data) ? data.Length : throw new FileNotFoundException(name);

		public ReadOnlyMemory<byte> Read(string name) => _files.TryGetValue(name, out byte[]? data) ? data : throw new FileNotFoundException(name);

		public bool TryRead(string name, out ReadOnlyMemory<byte> data)
		{
			bool found = _files.TryGetValue(name, out byte[]? stored);
			data = found ? stored : ReadOnlyMemory<byte>.Empty;
			return found;
		}
	}

	private sealed class RecordingConnection : IGameConnection
	{
		public GameConnectionState State { get; private set; } = GameConnectionState.Disconnected;

		public bool Connect(string host, int port)
		{
			State = GameConnectionState.Connected;
			return true;
		}

		public int Send(ReadOnlySpan<byte> data) => data.Length;

		public int Receive(Span<byte> destination) => 0;

		public void Close() => State = GameConnectionState.Disconnected;

		public void Dispose() => Close();
	}
}

