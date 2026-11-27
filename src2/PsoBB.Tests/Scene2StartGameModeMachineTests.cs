using System.Buffers.Binary;
using PsoBB.Data;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Input;
using PsoBB.Save;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the state-9 mode kernel, the timeout and the handlers that use the ported save state.
/// </summary>
[Collection("Game state")]
public sealed class Scene2StartGameModeMachineTests : IDisposable
{
	private readonly Files _files = new();

	public Scene2StartGameModeMachineTests()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
		GuildSave.Reset();
	}

	public void Dispose()
	{
		SystemSave.Reset();
		CharacterSaveLoad.Reset();
		GuildSave.Reset();
	}

	[Fact]
	public void TheShippedConstructorStartsInModeTwentySix()
	{
		Scene2StartGameModeMachine machine = new(_files);

		Assert.Equal((uint)Scene2StartGameModeMachine.InitialMode, machine.Mode);
		machine.Advance();
		Assert.Equal((uint)Scene2StartGameModeMachine.InitialMode, machine.Mode);
	}

	[Fact]
	public void ModeZeroClearsTheFlagsAndSelectsModeOneWithoutFiles()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(0);

		machine.Advance();

		Assert.Equal(1u, machine.Mode);
		Assert.Equal(1, machine.EntryState);
		Assert.All(machine.FileFlags, flag => Assert.Equal(-1, flag));
	}

	[Fact]
	public void ModeZeroMarksThePresentFilesAndSelectsModeOne()
	{
		_files.Add(SaveFileCheck.SystemName, new byte[SystemSave.SaveLength]);
		_files.Add(SaveFileCheck.CharacterName, new byte[CharacterSave.Length]);
		_files.Add(SaveFileCheck.GuildCardName, new byte[16]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(0);

		machine.Advance();

		Assert.Equal(1u, machine.Mode);
		Assert.Equal(0, machine.FileFlags[0]);
		for (int slot = 0; slot < 4; slot++)
		{
			Assert.Equal(1, machine.FileFlags[1 + 2 * slot]);
			Assert.Equal(1, machine.FileFlags[2 + 2 * slot]);
		}
	}

	[Fact]
	public void ModeOneSelectsNineteenForTheAllMinusOneFlags()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(1);
		Array.Fill(machine.FileFlags, -1);
		machine.Flag32 = 1;
		machine.Flag27 = 1;

		machine.Advance();

		Assert.Equal(19u, machine.Mode);
	}

	[Fact]
	public void ModeOneSelectsEighteenForAZeroFlag()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(1);
		Array.Fill(machine.FileFlags, 1);
		machine.FileFlags[4] = 0;
		machine.Flag32 = 1;

		machine.Advance();

		Assert.Equal(18u, machine.Mode);
		Assert.Equal(96, machine.CounterB);
	}

	[Fact]
	public void ModeOneSelectsThreeOrTwoForTheAllOneFlags()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(1);
		Array.Fill(machine.FileFlags, 1);

		machine.Advance();
		Assert.Equal(3u, machine.Mode);

		machine.SetMode(1);
		machine.Field10 = 1;
		machine.Advance();
		Assert.Equal(2u, machine.Mode);
	}

	[Fact]
	public void ModeOneSelectsThreeForTheMixedMinusOneAndOneFlags()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(1);
		Array.Fill(machine.FileFlags, -1);
		machine.FileFlags[3] = 1;

		machine.Advance();

		Assert.Equal(3u, machine.Mode);
	}

	[Fact]
	public void ModeTwentyRoutesTheScrollSelectionToOneOrTwentyThree()
	{
		Scene2StartGameModeMachine machine = new(_files);
		Scene2TextControl control = new(2) { Flags132 = 2, Count = 1 };
		machine.ScrollControl = control;
		ForceMode(machine, 20);
		BinaryPrimitives.WriteInt32LittleEndian(control.Records.AsSpan(4), 0);

		machine.Advance();
		Assert.Equal(1u, machine.Mode);
		Assert.Equal(1, machine.Flag32);

		ForceMode(machine, 20);
		BinaryPrimitives.WriteInt32LittleEndian(control.Records.AsSpan(4), 1);
		machine.Advance();
		Assert.Equal(23u, machine.Mode);
		Assert.Equal(1, machine.EntryState);
	}

	[Fact]
	public void ModeTwentyEightConfirmsTheCharacterOrReturns()
	{
		Scene2StartGameModeMachine machine = new(_files) { ScreenFlags = 2 };
		Scene2TextControl control = new(2) { Count = 1 };
		machine.ScrollControl = control;
		ForceMode(machine, 28);
		BinaryPrimitives.WriteInt32LittleEndian(control.Records.AsSpan(4), -1);

		machine.Advance();
		Assert.Equal(23u, machine.Mode);
		Assert.Equal(1, machine.EntryState);

		int confirmed = -1;
		ForceMode(machine, 28);
		machine.ScreenFlags = 2;
		BinaryPrimitives.WriteInt32LittleEndian(control.Records.AsSpan(4), 5);
		machine.CharacterConfirmed = index => confirmed = index;
		machine.Advance();
		Assert.Equal(5, confirmed);
		Assert.Equal(26u, machine.Mode);

		ForceMode(machine, 28);
		machine.ScreenFlags = 4;
		machine.Advance();
		Assert.Equal(23u, machine.Mode);
	}

	[Fact]
	public void TheModeFourteenEntryQueuesFifteenWhileThePatchIsBusy()
	{
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		Scene2StartGameModeMachine machine = new(_files) { PatchBusy = () => true, CharacterFileReady = () => false };

		machine.SetMode(14);

		Assert.Equal(14u, machine.Mode);
		Assert.Equal(15, SystemSave.Pending);

		machine = new(_files) { PatchBusy = () => true, CharacterFileReady = () => true };
		machine.SetMode(14);
		Assert.Equal(22u, machine.Mode);

		machine = new(_files) { PatchBusy = () => false };
		machine.SetMode(14);
		Assert.Equal(22u, machine.Mode);
	}

	[Fact]
	public void TheModeFifteenEntryStaysOnlyForTheSevenValidation()
	{
		Scene2StartGameModeMachine machine = new(_files) { PatchValidation = () => 7 };
		machine.SetMode(15);
		Assert.Equal(15u, machine.Mode);

		machine = new(_files) { PatchValidation = () => 0 };
		machine.SetMode(15);
		Assert.Equal(22u, machine.Mode);
	}

	[Fact]
	public void TheModeSixteenEntryQueuesTwelve()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(16);

		Assert.Equal(16u, machine.Mode);
		Assert.Equal(12, SystemSave.Pending);
	}

	[Fact]
	public void TheModeTwentySevenEntryDisplaysTheSharedMessageAndReleasesChildren()
	{
		Scene2StartGameModeMachine machine = new(_files) { MessageText = "Warning" };

		machine.SetMode(27);

		Assert.Equal("Warning", machine.Mode27Text);
		Assert.True(machine.Mode27Ready);
		Assert.Null(machine.Children.Element);
		Assert.Null(machine.Children.Cursor);
	}

	[Fact]
	public void TheModeTwentyOneEntryHasNoReachableBody()
	{
		Scene2StartGameModeMachine machine = new(_files);

		machine.SetMode(21);

		Assert.Equal(21u, machine.Mode);
	}

	[Fact]
	public void TheModeThreeAndTwentyThreeEntriesReleaseTheChildren()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.Children.Ensure(machine);

		machine.SetMode(3);
		Assert.Null(machine.Children.Element);
		Assert.Null(machine.Children.Cursor);

		machine.Children.Ensure(machine);
		machine.SetMode(23);
		Assert.Null(machine.Children.Element);
		Assert.Null(machine.Children.Cursor);
	}

	[Fact]
	public void TheModeTwentyEntrySelectsTheMessagePairFromTheFlags()
	{
		int[] sizes = new int[30];
		sizes[29] = 27;
		string[] values = new string[27];
		Array.Fill(values, string.Empty);
		for (int index = 20; index < values.Length; index++)
			values[index] = $"T{index}";
		UnitxtTable table = UnitxtTable.Open(TextSamples.Unitxt(sizes, new Dictionary<int, string[]> { [29] = values }));
		Scene2StartGameModeMachine machine = new(_files) { TextTable = table };

		machine.SetMode(20);
		Assert.Equal("T23\nT24", machine.Mode20Text);
		Assert.Equal("T23\nT24", machine.MessageText);
		Assert.Equal("T20", machine.Mode20OptionA);
		Assert.Equal("T21", machine.Mode20OptionB);

		Array.Fill(machine.FileFlags, 1);
		machine.SetMode(21);
		machine.SetMode(20);
		Assert.Equal("T25\nT26", machine.Mode20Text);
		Assert.Null(machine.Children.Element);
	}

	[Fact]
	public void TheModeTwentyTwoEntrySelectsTheTwoLines()
	{
		int[] sizes = new int[30];
		sizes[29] = 35;
		string[] values = new string[35];
		Array.Fill(values, string.Empty);
		values[27] = "First";
		values[34] = "Second";
		UnitxtTable table = UnitxtTable.Open(TextSamples.Unitxt(sizes, new Dictionary<int, string[]> { [29] = values }));
		Scene2StartGameModeMachine machine = new(_files) { TextTable = table };

		machine.SetMode(22);

		Assert.Equal("First\nSecond", machine.Mode22Text);
		Assert.True(machine.Mode22Ready);
	}

	[Fact]
	public void TheModeTwentyFiveEntrySelectsTheEventText()
	{
		int[] sizes = new int[72];
		sizes[71] = 21;
		string[] values = new string[21];
		Array.Fill(values, string.Empty);
		for (int index = 5; index < values.Length; index++)
			values[index] = $"T{index}";
		UnitxtTable table = UnitxtTable.Open(TextSamples.Unitxt(sizes, new Dictionary<int, string[]> { [71] = values }));

		Scene2StartGameModeMachine machine = new(_files) { EventCode = () => 0, TextTable = table };
		machine.SetMode(25);
		Assert.Equal("T5", machine.Mode25Text);
		Assert.True(machine.Mode25Ready);

		machine = new(_files) { EventCode = () => 13, TextTable = table };
		machine.SetMode(25);
		Assert.Equal("T20", machine.Mode25Text);

		machine = new(_files) { EventCode = () => 14, TextTable = table };
		machine.SetMode(25);
		Assert.Null(machine.Mode25Text);
		Assert.False(machine.Mode25Ready);
	}

	[Fact]
	public void TheConfirmAtModeTwentySixReachesTheLobbyState()
	{
		Scene2StartGameModeMachine machine = new(_files);
		ControllerButtonState controller = new() { Buttons = 0x101 };
		machine.Controller = controller;
		machine.GameEvent = () => 0xF;

		machine.Advance();
		Assert.Equal(24u, machine.Mode);

		machine.Advance();
		Assert.Equal(23u, machine.Mode);

		GameState.Reset();
		machine.Advance();
		Assert.Equal(6u, GameState.SceneScreenState);
	}

	[Fact]
	public void ModeTwentySixRotatesTheCameraFromTheController()
	{
		Scene2StartGameModeMachine machine = new(_files) { Flag27 = 1, Controller = new ControllerButtonState { Buttons = 0x00010000 } };

		machine.Advance();

		Assert.Equal(-6f, machine.CameraRotation);
		Assert.Equal(26u, machine.Mode);
	}

	[Fact]
	public void ModeTwentySixPumpsTheNetworkWhileTheObjectIsPresent()
	{
		int pumps = 0;
		Scene2StartGameModeMachine machine = new(_files) { InterfaceObject1185 = 1, PumpNetwork = () => ++pumps };

		machine.Advance();

		Assert.Equal(1, pumps);
		Assert.Equal(1, machine.InterfaceObject1185);
	}

	[Fact]
	public void ModeTwentySixSelectsModeTwentyFourOrTwentyThree()
	{
		Scene2StartGameModeMachine machine = new(_files) { Controller = new ControllerButtonState { Buttons = 1 } };
		machine.Advance();
		Assert.Equal(24u, machine.Mode);
		Assert.Equal(0, machine.EntryState);

		Scene2StartGameModeMachine choose = new(_files) { Controller = new ControllerButtonState { Buttons = 1 }, GlobalA3A940 = 1 };
		choose.Advance();
		Assert.Equal(23u, choose.Mode);
		Assert.Equal(1, choose.EntryState);
	}

	[Fact]
	public void ModeTwentySixRequestsExitForTheThirdObject()
	{
		Scene2StartGameModeMachine machine = new(_files) { Controller = new ControllerButtonState { Buttons = 1 }, InterfaceObject1187 = 1 };
		GameState.Reset();

		machine.Advance();

		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(0u, GameState.RequestedScene);
	}

	[Fact]
	public void ModeNineteenFallsBackToOneWithoutTheMinusFlags()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(19);
		Array.Fill(machine.FileFlags, 1);

		machine.Advance();

		Assert.Equal(1u, machine.Mode);
		Assert.Equal(1, machine.Field11);
	}

	[Fact]
	public void ModeNineteenFallsBackOnAZeroFlag()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(19);
		Array.Fill(machine.FileFlags, 1);
		machine.FileFlags[0] = 0;

		machine.Advance();

		Assert.Equal(1u, machine.Mode);
		Assert.Equal(1, machine.Field11);
	}

	[Fact]
	public void ModeTwentyThreeUsesTheEntryStateForTitleLobbyOrExit()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(23);
		machine.EntryState = 1;
		GameState.Reset();

		machine.Advance();
		Assert.Equal(Scene2.EntryScreenState, GameState.SceneScreenState);

		machine.EntryState = 0;
		machine.Advance();
		Assert.Equal(6u, GameState.SceneScreenState);

		machine.EntryState = 2;
		GameState.Reset();
		machine.Advance();
		Assert.Equal(1u, GameState.SceneTransition);
		Assert.Equal(0u, GameState.RequestedScene);
	}

	[Fact]
	public void ModeTwentyThreeWaitsForItsCounter()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(23);
		machine.EntryState = 1;
		machine.CounterA = 5;
		GameState.Reset();
		uint state = GameState.SceneScreenState;

		machine.Advance();

		Assert.Equal(state, GameState.SceneScreenState);
		Assert.Equal(0u, GameState.SceneTransition);
	}

	[Fact]
	public void ModeThreeStartsTheSystemLoadAndSelectsModeFour()
	{
		_files.Add(SaveFileCheck.SystemName, new byte[SystemSave.SaveLength]);
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(3);

		machine.Advance();

		Assert.Equal(4u, machine.Mode);
		Assert.Equal(SystemSave.SystemPending, SystemSave.Pending);
		Assert.Equal(1, SystemSave.LoadActive);
	}

	[Fact]
	public void ModeFourCompletesTheLoadThroughTheHostPumpAndReachesModeSix()
	{
		_files.Add(SaveFileCheck.SystemName, new byte[SystemSave.SaveLength]);
		SystemSave.Attach(new byte[SystemSave.SaveLength], new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		SystemSave.Pending = SystemSave.SystemPending;
		Scene2StartGameModeMachine machine = new(_files)
		{
			PumpSave = SystemSave.Pump,
		};
		machine.SetMode(4);

		machine.Advance();

		Assert.Equal(6u, machine.Mode);
		Assert.Equal(0, SystemSave.Pending);
	}

	[Fact]
	public void ModeSevenValidatesEverySlotAndSelectsTheLobby()
	{
		CharacterSaveLoad.Attach(
			new byte[CharacterSaveLoad.PlayerChunkLength],
			new byte[CharacterSaveLoad.SystemChunkLength],
			new byte[CharacterSaveLoad.SaveLength],
			new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		CharacterSaveCodec.Seal(CharacterSaveLoad.LoadBuffer!);
		Scene2StartGameModeMachine machine = new(_files);
		machine.FileFlags[1] = machine.FileFlags[3] = machine.FileFlags[5] = machine.FileFlags[7] = 1;

		for (int slot = 0; slot < 4; slot++)
		{
			machine.SetMode(7);
			machine.Advance();
		}

		Assert.Equal(23u, machine.Mode);
		Assert.Equal(0, machine.EntryState);
	}

	[Fact]
	public void ModeSevenFallsBackToModeOneForAnInvalidImage()
	{
		CharacterSaveLoad.Attach(
			new byte[CharacterSaveLoad.PlayerChunkLength],
			new byte[CharacterSaveLoad.SystemChunkLength],
			new byte[CharacterSaveLoad.SaveLength],
			new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.FileFlags[1] = machine.FileFlags[3] = machine.FileFlags[5] = machine.FileFlags[7] = 1;
		machine.SlotIndex = 3;

		machine.SetMode(7);
		machine.Advance();

		Assert.Equal(1u, machine.Mode);
		Assert.Equal(1, machine.RepeatFlag);
		Assert.Equal(0, machine.FileFlags[7]);
	}

	[Fact]
	public void ModeSevenUsesTheRepeatFlagToSelectModeTwentyTwo()
	{
		CharacterSaveLoad.Attach(
			new byte[CharacterSaveLoad.PlayerChunkLength],
			new byte[CharacterSaveLoad.SystemChunkLength],
			new byte[CharacterSaveLoad.SaveLength],
			new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.FileFlags[1] = machine.FileFlags[3] = machine.FileFlags[5] = machine.FileFlags[7] = 1;
		machine.SlotIndex = 3;
		machine.RepeatFlag = 1;

		machine.SetMode(7);
		machine.Advance();

		Assert.Equal(22u, machine.Mode);
		Assert.Equal(1, machine.RepeatFlag);
	}

	[Fact]
	public void ModeThreeWhileWaitingClearsTheProgressObjects()
	{
		Scene2StartGameModeMachine machine = new(_files)
		{
			ProgressObject25 = 1,
			ProgressObject26 = 2,
			CounterA = 1,
		};
		machine.SetMode(3);

		machine.Advance();

		Assert.Equal(3u, machine.Mode);
		Assert.Equal(0, machine.ProgressObject25);
		Assert.Equal(0, machine.ProgressObject26);
	}

	[Fact]
	public void ModeSixteenStartsTheGuildTimeAndSelectsSeventeen()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(16);
		Assert.Equal(12, SystemSave.Pending);

		machine.Advance();

		Assert.Equal(17u, machine.Mode);
		Assert.Equal(1, SystemSave.LoadActive);
		Assert.Equal(0, GuildSave.Language);
	}

	[Fact]
	public void ModeEighteenSelectsTheFirstMissingFileMode()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(18);
		Array.Fill(machine.FileFlags, 1);
		machine.Advance();
		Assert.Equal(1u, machine.Mode);

		machine.SetMode(18);
		machine.FileFlags[0] = 0;
		machine.Advance();
		Assert.Equal(8u, machine.Mode);
		Assert.Equal(1, machine.Field10);

		machine.SetMode(18);
		machine.FileFlags[0] = 1;
		machine.FileFlags[5] = 0;
		machine.Advance();
		Assert.Equal(10u, machine.Mode);
		Assert.Equal(2, machine.SlotIndex);

		machine.SetMode(18);
		machine.FileFlags[5] = 1;
		machine.FileFlags[4] = 0;
		machine.Advance();
		Assert.Equal(12u, machine.Mode);
		Assert.Equal(1, machine.SlotIndex);
	}

	[Fact]
	public void ModeEighteenUsesTheOneFlagsOnlyForTheMissingSystemFlag()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(18);
		Array.Fill(machine.FileFlags, -1);
		machine.FileFlags[7] = 1;
		machine.Advance();
		Assert.Equal(10u, machine.Mode);
		Assert.Equal(3, machine.SlotIndex);

		machine.SetMode(18);
		Array.Fill(machine.FileFlags, -1);
		machine.Advance();
		Assert.Equal(1u, machine.Mode);
	}

	[Fact]
	public void ModeSeventeenMarksTheGuildFlagAndSelectsNineteen()
	{
		Scene2StartGameModeMachine machine = new(_files);
		SystemSave.Pending = 0;
		machine.SetMode(17);
		machine.SlotIndex = 2;

		machine.Advance();

		Assert.Equal(19u, machine.Mode);
		Assert.Equal(1, machine.FileFlags[6]);
		Assert.Equal(0, machine.Timer);
	}

	[Fact]
	public void ModeSeventeenWaitsForThePendingWord()
	{
		Scene2StartGameModeMachine machine = new(_files);
		SystemSave.Pending = 1;
		machine.SetMode(17);

		machine.Advance();

		Assert.Equal(17u, machine.Mode);
		Assert.Equal(0, machine.FileFlags[2]);
	}

	[Fact]
	public void TheFreeSpaceBudgetIsNegative()
	{
		Assert.Equal(90 - 50000, Scene2StartGameModeMachine.FreeSpaceBudget());
		Assert.True(Scene2StartGameModeMachine.FreeSpaceBudget() < 0);
	}

	[Fact]
	public void ModeTwoWaitsForItsCounter()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(2);
		machine.CounterB = 1;

		machine.Advance();

		Assert.Equal(2u, machine.Mode);
	}

	[Fact]
	public void ModeTwoSelectsTheTimeoutModeWithoutTheRequiredFiles()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(2);

		machine.Advance();

		Assert.Equal(22u, machine.Mode);
	}

	[Fact]
	public void ModeTwoSelectsTheTimeoutModeWithAValidSystemFile()
	{
		_files.Add(SaveFileCheck.SystemName, new byte[SystemSave.SaveLength]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(2);

		machine.Advance();

		Assert.Equal(22u, machine.Mode);
	}

	[Fact]
	public void ModeTwoSelectsTheTimeoutModeWithAZeroLengthSystemFile()
	{
		_files.Add(SaveFileCheck.SystemName, []);
		_files.Add(SaveFileCheck.CharacterName, new byte[CharacterSave.Length]);
		_files.Add(SaveFileCheck.GuildCardName, new byte[16]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(2);

		machine.Advance();

		Assert.Equal(22u, machine.Mode);
		Assert.Equal(1, machine.FileFlags[0]);
	}

	[Fact]
	public void ModeFourMovesThroughTheEntryFiveIntoModeSix()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(4);

		machine.Advance();

		Assert.Equal(6u, machine.Mode);
		Assert.Equal(0, machine.Timer);
		Assert.Equal(0, machine.SlotIndex);
	}

	[Fact]
	public void ModeSixStartsTheSystemLoadAndMovesToSevenWithoutASaveBlock()
	{
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(6);

		machine.Advance();

		Assert.Equal(7u, machine.Mode);
	}

	[Fact]
	public void ModeSixStaysWhenTheSystemFileIsMissing()
	{
		byte[] block = new byte[SystemSave.SaveLength];
		SystemSave.Attach(block, new byte[SystemSave.DefaultPages << SystemSave.PageShift]);
		Scene2StartGameModeMachine machine = new(_files);
		machine.SetMode(6);

		machine.Advance();

		Assert.Equal(6u, machine.Mode);
	}

	[Fact]
	public void TheClearStatusHandlersAdvanceToTheNextMode()
	{
		Scene2StartGameModeMachine machine = new(_files);

		machine.SetMode(8);
		machine.Advance();
		Assert.Equal(9u, machine.Mode);

		machine.SetMode(10);
		machine.Advance();
		Assert.Equal(11u, machine.Mode);

		machine.SetMode(12);
		machine.Advance();
		Assert.Equal(13u, machine.Mode);
	}

	[Fact]
	public void TheSystemAndSlotHandlersSetTheFlagsAndMoveToEighteen()
	{
		Scene2StartGameModeMachine machine = new(_files);

		machine.SetMode(9);
		machine.Advance();
		Assert.Equal(18u, machine.Mode);
		Assert.Equal(-1, machine.FileFlags[0]);

		machine.SetMode(11);
		machine.SlotIndex = 2;
		machine.Advance();
		Assert.Equal(18u, machine.Mode);
		Assert.Equal(-1, machine.FileFlags[5]);

		machine.SetMode(13);
		machine.SlotIndex = 1;
		machine.Advance();
		Assert.Equal(18u, machine.Mode);
		Assert.Equal(-1, machine.FileFlags[4]);
	}

	[Fact]
	public void TheSeventySixthTimerFrameForcesTheTimeoutMode()
	{
		Scene2StartGameModeMachine machine = new(_files);
		SystemSave.Pending = 1;
		machine.SetMode(4);
		machine.Timer = Scene2StartGameModeMachine.TimeoutFrames + 1;

		machine.Advance();

		Assert.Equal((uint)Scene2StartGameModeMachine.TimeoutMode, machine.Mode);
		Assert.Equal(0, machine.Timer);
	}

	[Fact]
	public void TheCountersStopAtZero()
	{
		Scene2StartGameModeMachine machine = new(_files);
		SystemSave.Pending = 1;
		machine.SetMode(4);
		machine.CounterA = 0;
		machine.CounterB = 2;

		machine.Advance();

		Assert.Equal(0, machine.CounterA);
		Assert.Equal(1, machine.CounterB);
	}

	[Fact]
	public void AnUnportedEntryCallbackStopsWithTheModeNumber()
	{
		Scene2StartGameModeMachine machine = new(_files);

		NotSupportedException error = Assert.Throws<NotSupportedException>(() => machine.SetMode(24));
		Assert.Contains("24", error.Message);
	}

	private static void ForceMode(Scene2StartGameModeMachine machine, uint mode) =>
		typeof(Scene2StartGameModeMachine).GetProperty(nameof(Scene2StartGameModeMachine.Mode))!.SetValue(machine, mode);

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
}












