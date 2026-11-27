using PsoBB.Data;
using PsoBB.Save;
using PsoBB.Scenes;

namespace PsoBB.Tests;

/// <summary>
/// Checks the state-9 mode kernel, the timeout and the handlers that use the ported save state.
/// </summary>
[Collection("Game state")]
public sealed class Scene2StartGameModeMachineTests : IDisposable
{
	private readonly Files _files = new();

	public Scene2StartGameModeMachineTests() => SystemSave.Reset();

	public void Dispose() => SystemSave.Reset();

	[Fact]
	public void TheShippedConstructorStartsInModeTwentySix()
	{
		Scene2StartGameModeMachine machine = new(_files);

		Assert.Equal((uint)Scene2StartGameModeMachine.InitialMode, machine.Mode);
		Assert.Throws<NotSupportedException>(machine.Advance);
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

		NotSupportedException error = Assert.Throws<NotSupportedException>(() => machine.SetMode(14));
		Assert.Contains("14", error.Message);
	}

	private sealed class Files : IDataFiles
	{
		private readonly Dictionary<string, byte[]> _files = new(StringComparer.OrdinalIgnoreCase);

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

