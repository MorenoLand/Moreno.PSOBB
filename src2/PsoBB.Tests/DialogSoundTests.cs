using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;
using PsoBB.Text;
using Xunit;

namespace PsoBB.Tests;

public sealed class DialogSoundTests
{
	[Fact]
	public void ExitConfirmPlaysTheListControlSounds()
	{
		(InputManager input, MemoryGameInput source) = CreateInput();
		List<int> played = [];
		using TitleExitConfirm dialog = new(CreateText(), new RecordingTextSurface()) { SoundPlayer = played.Add };

		Press(input, source, GameKey.Up, dialog.Update);
		Assert.Equal([UiSounds.Select], played);
		Press(input, source, GameKey.Return, dialog.Update);
		Assert.Equal([UiSounds.Select, UiSounds.Activate], played);
		Assert.True(dialog.Cancelled || dialog.Confirmed);
	}

	[Fact]
	public void ExitConfirmCancelKeyPlaysTheCancelSound()
	{
		(InputManager input, MemoryGameInput source) = CreateInput();
		List<int> played = [];
		using TitleExitConfirm dialog = new(CreateText(), new RecordingTextSurface()) { SoundPlayer = played.Add };

		Press(input, source, GameKey.Escape, dialog.Update);

		Assert.Equal([UiSounds.Cancel], played);
		Assert.True(dialog.Cancelled);
	}

	[Fact]
	public void RegisterDialogPlaysMoveActivateAndCancelSounds()
	{
		(InputManager input, MemoryGameInput source) = CreateInput();
		List<int> played = [];
		using TitleRegisterDialog dialog = new(CreateText(), new RecordingTextSurface()) { SoundPlayer = played.Add };

		Press(input, source, GameKey.Down, dialog.Update);
		Press(input, source, GameKey.Down, dialog.Update);
		Assert.Equal([UiSounds.Select, UiSounds.Select], played);
		Press(input, source, GameKey.Return, dialog.Update);
		Assert.Equal(UiSounds.Activate, played[^1]);
	}

	[Fact]
	public void RegisterDialogCancelKeyPlaysTheCancelSound()
	{
		(InputManager input, MemoryGameInput source) = CreateInput();
		List<int> played = [];
		using TitleRegisterDialog dialog = new(CreateText(), new RecordingTextSurface()) { SoundPlayer = played.Add };

		Press(input, source, GameKey.Escape, dialog.Update);

		Assert.Equal([UiSounds.Cancel], played);
		Assert.True(dialog.Cancelled);
	}

	private static (InputManager Input, MemoryGameInput Source) CreateInput()
	{
		MemoryGameInput source = new();
		return (new InputManager(source), source);
	}

	private static void Press(InputManager input, MemoryGameInput source, GameKey key, Action<InputManager> update)
	{
		source.SetKey(key, true);
		input.Update(TimeSpan.Zero);
		update(input);
		source.SetKey(key, false);
		input.Update(TimeSpan.Zero);
	}

	private static GameText CreateText()
	{
		int[] sizes = new int[42];
		sizes[GameText.LoginScreenList] = 22;
		string[] values = ["Cancel", "Confirm", "Login", "Start Game", "Exit Game", "Patch Download", "Register UserID", string.Empty, string.Empty, string.Empty, string.Empty];
		Dictionary<int, string[]> strings = new() { [GameText.LoginScreenList] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
	}
}
