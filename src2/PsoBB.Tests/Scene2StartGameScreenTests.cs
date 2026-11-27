using System.Buffers.Binary;
using System.Text;
using PsoBB.Core;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Save;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the scene-2 state-9 character rows, the confirm and cancel paths and the title Start Game dispatch.
/// </summary>
[Collection("Game state")]
public sealed class Scene2StartGameScreenTests : IDisposable
{
	public Scene2StartGameScreenTests()
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
	public void BuildsFourRowsFromTheSavedCharactersAndTheEmptyLabel()
	{
		CharacterSave save = CreateSave("HUNTER");
		using Scene2StartGameScreen screen = new(CreateText(), save);

		Assert.Equal(4, screen.Menu.Items.Count);
		Assert.Equal("HUNTER", screen.Menu.Items[0].Text);
		Assert.Equal("No Data", screen.Menu.Items[1].Text);
		Assert.Equal("No Data", screen.Menu.Items[3].Text);
		Assert.Equal(0, screen.Menu.SelectedData);
		Assert.Same(save, screen.Save);
	}

	[Fact]
	public void UsesTheRowPositionsFromTheShippedPairTable()
	{
		using Scene2StartGameScreen screen = new(CreateText(), CreateSave("HUNTER"));

		Assert.Equal(Scene2StartGameScreen.RowX, screen.Menu.Position.X);
		Assert.Equal(Scene2StartGameScreen.RowY, screen.Menu.Position.Y);
		Assert.Equal(Scene2StartGameScreen.RowStep, screen.Menu.ItemHeight);
		Assert.Equal(Scene2StartGameScreen.RowHeight, screen.Menu.SelectionHeight);
		Assert.Equal(28f, Scene2StartGameScreen.RowX);
		Assert.Equal(182f, Scene2StartGameScreen.RowY);
		Assert.Equal(43f, Scene2StartGameScreen.RowStep);
		Assert.Equal(180f, Scene2StartGameScreen.RowWidth);
		Assert.Equal(38f, Scene2StartGameScreen.RowHeight);
		Assert.Equal(180f, Scene2StartGameScreen.RowAreaSize.X);
		Assert.Equal(172f, Scene2StartGameScreen.RowAreaSize.Y);
	}

	[Fact]
	public void ConfirmsAPresentSlotAndIgnoresAnEmptyOne()
	{
		int selected = -1;
		using Scene2StartGameScreen screen = new(CreateText(), CreateSave("HUNTER"), slot => selected = slot);

		screen.Menu.SelectedIndex = 1;
		Assert.False(screen.ConfirmSelected());
		Assert.Equal(-1, selected);
		Assert.False(screen.IsStarted);

		screen.Menu.SelectedIndex = 0;
		Assert.True(screen.ConfirmSelected());
		Assert.Equal(0, selected);
		Assert.True(screen.IsStarted);
	}

	[Fact]
	public void CancelRequestsTheExitScene()
	{
		using Scene2StartGameScreen screen = new(CreateText(), CreateSave("HUNTER"));

		screen.Cancel();

		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(SceneManager.ExitScene, GameState.RequestedScene);
	}

	[Fact]
	public void SuccessSelectsTheLobbyStateAndReturnSelectsTheTitleState()
	{
		using Scene2StartGameScreen screen = new(CreateText(), CreateSave("HUNTER"));
		GameState.SceneScreenState = 2;

		screen.Succeed();

		Assert.Equal(6u, GameState.SceneScreenState);
		Assert.Equal(2u, GameState.PreviousSceneScreenState);
		Assert.Equal(Scene2.SharedFadeState, GameState.SceneFadeState);

		screen.ReturnToTitle();

		Assert.Equal(Scene2.EntryScreenState, GameState.SceneScreenState);
		Assert.Equal(6u, GameState.PreviousSceneScreenState);
		Assert.Equal(Scene2.SharedFadeState, GameState.SceneFadeState);
	}

	[Fact]
	public void ReleaseIsIdempotentAndRejectsLaterCalls()
	{
		Scene2StartGameScreen screen = new(CreateText(), CreateSave("HUNTER"));

		screen.Dispose();
		screen.Dispose();

		Assert.True(screen.IsDisposed);
		Assert.Throws<ObjectDisposedException>(screen.Cancel);
		Assert.Throws<ObjectDisposedException>(screen.Succeed);
		Assert.Throws<ObjectDisposedException>(screen.ReturnToTitle);
		Assert.Throws<ObjectDisposedException>(() => screen.ConfirmSelected());
	}

	[Fact]
	public void TheFactoryStopsWhenTheSaveOrTextIsMissing()
	{
		Assert.Null(Scene2StartGameScreenFactory.Create(null, CreateSave("HUNTER")));
		Assert.Null(Scene2StartGameScreenFactory.Create(CreateText(), null));
		Assert.NotNull(Scene2StartGameScreenFactory.Create(CreateText(), CreateSave("HUNTER")));
	}

	[Fact]
	public void TheTitleMenuStartGameRowSelectsStateNineOnce()
	{
		using LoginDialog dialog = new(CreateTitleText());
		using Scene2TitleMenu menu = new(dialog);

		Assert.Equal(LoginDialogAction.StartGame, menu.Confirm());
		Assert.Equal(LoginDialogAction.StartGame, menu.RequestedAction);
		Assert.Equal(Scene2.SharedScreenState, GameState.SceneScreenState);
		Assert.Equal(Scene2.SharedFadeState, GameState.SceneFadeState);

		GameState.SceneScreenState = 2;
		Assert.Null(menu.Confirm());
		Assert.Equal(2u, GameState.SceneScreenState);
	}

	[Fact]
	public void TheFadePathCreatesTheStateNineScreenThroughTheInterface()
	{
		Scene2Screen? created = null;
		using Scene2Interface ui = new(state => state == 9 ? created = Scene2StartGameScreenFactory.Create(CreateText(), CreateSave("HUNTER")) : null);
		using Scene2 scene = new(ui);
		InputManager input = new(new MemoryGameInput());
		input.Update(TimeSpan.Zero);
		scene.Start();

		scene.Update(input, 0f);
		scene.Update(input, 0f);
		Assert.Null(ui.CurrentScreen);

		Scene2.SelectStartGame();
		scene.Update(input, 0f);
		scene.Update(input, 0f);

		Assert.NotNull(created);
		Assert.Same(created, ui.CurrentScreen);
		UiDrawList draw = new();
		scene.Draw(draw);
		Assert.NotEmpty(draw.Quads);
	}

	[Fact]
	public void TheInterfaceLeavesTheScreenEmptyWhenTheSaveIsMissing()
	{
		using Scene2Interface ui = new(state => state == 9 ? Scene2StartGameScreenFactory.Create(CreateText(), null) : null);

		ui.CreateScreen(9);

		Assert.Null(ui.CurrentScreen);
	}

	private static CharacterSave CreateSave(string name)
	{
		byte[] data = new byte[CharacterSave.Length];
		int record = CharacterSave.SlotOffset;
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(record + CharacterSaveSlot.SignatureOffset), CharacterSaveCodec.CharacterSignature);
		byte[] encoded = Encoding.Latin1.GetBytes(name);
		encoded.CopyTo(data.AsSpan(record + 0x374));
		CharacterSaveCodec.Seal(data);
		return CharacterSaveCodec.Parse(data);
	}

	private static GameText CreateText()
	{
		int[] sizes = new int[24];
		sizes[23] = 29;
		string[] values = new string[29];
		Array.Fill(values, string.Empty);
		values[28] = "No Data";
		Dictionary<int, string[]> strings = new() { [23] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
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
		Dictionary<int, string[]> strings = new() { [GameText.LoginScreenList] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
	}
}
