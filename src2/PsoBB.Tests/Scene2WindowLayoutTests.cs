using System.Buffers.Binary;
using PsoBB.Audio;
using PsoBB.Gui;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x00712C44 layout words, cells, sound and flag state and the 0x00710D30 creation.
/// </summary>
[Collection("Game state")]
public sealed class Scene2WindowLayoutTests : IDisposable
{
	public Scene2WindowLayoutTests()
	{
		CharacterSaveLoad.Reset();
		Scene2WindowState.ThemeFlag = 0;
		SoundSelection.Playback = null;
	}

	public void Dispose()
	{
		CharacterSaveLoad.Reset();
		Scene2WindowState.ThemeFlag = 0;
		SoundSelection.Playback = null;
	}

	[Fact]
	public void TheLayoutWritesTheBoundWordsAndTheGrid()
	{
		Scene2WindowState state = new();
		int[] first = [10, 20, 30, 40, 0x20];
		int[] second = [1, 2];
		int[] grid = [1, 1, 0];

		state.InitializeLayout(first, second, grid, 7);

		Assert.Equal(10, state.Fields[12]);
		Assert.Equal(20, state.Fields[13]);
		Assert.Equal(1, state.Fields[14]);
		Assert.Equal(2, state.Fields[15]);
		Assert.Equal(10, state.Fields[16]);
		Assert.Equal(20, state.Fields[17]);
		Assert.Equal(1, state.Fields[18]);
		Assert.Equal(2, state.Fields[19]);
		Assert.Equal(30, state.Fields[7]);
		Assert.Equal(-10000f, BitConverter.Int32BitsToSingle(state.Fields[21]));
		Assert.Equal(0x20, state.Fields[11]);
		Assert.Equal(0, state.Fields[20]);
		Assert.Single(state.Cells);
		Assert.Equal(0, state.Fields[23]);
	}

	[Fact]
	public void TheWordAtOffsetEightGetsTheSixteenBitWhenNeitherLowFlagIsSet()
	{
		Scene2WindowState state = new();

		state.InitializeLayout([0, 0, 0, 0, 0x20], [0, 0], [1, 1, 0], 7);

		Assert.Equal(0x10, state.Fields[2] & 0xFFFF);
	}

	[Fact]
	public void TheKindWordIsWrittenAtOffsetThirtyTwo()
	{
		Scene2WindowState state = new();

		state.InitializeLayout([0, 0, 0, 0, 0], [0, 0], [1, 1, 0], 7);

		Assert.Equal(7, state.Fields[8] & 0xFFFF);
		Assert.Equal(0, state.Fields[8] >> 16);
	}

	[Fact]
	public void TheSelectionPlaysOnlyForTheLowFlagPairWithoutBitTwenty()
	{
		int calls = 0;
		Scene2WindowState state = new();

		state.InitializeLayout([0, 0, 0, 0, 3], [0, 0], [1, 1, 0], 0, (id, _) =>
		{
			Assert.Equal(1394, id);
			++calls;
			return 0;
		});
		Assert.Equal(1, calls);

		state.InitializeLayout([0, 0, 0, 0, 0x23], [0, 0], [1, 1, 0], 0, (_, _) => ++calls);
		Assert.Equal(1, calls);
	}

	[Fact]
	public void TheOptionTableZeroSelectsTheMillionWord()
	{
		byte[] system = new byte[CharacterSaveLoad.SystemChunkLength];
		BinaryPrimitives.WriteInt32LittleEndian(system.AsSpan(16), 0x300);
		CharacterSaveLoad.SystemRecord = system;
		Scene2WindowState state = new();

		state.InitializeLayout([0, 0, 0, 0, 0], [0, 0], [1, 1, 0], 0);

		Assert.Equal(0x1000000, state.Fields[23]);
	}

	[Fact]
	public void TheCreationLinksTheWindowIntoTheThemeList()
	{
		Scene2ZList theme = new();

		Scene2WindowState state = Scene2WindowState.Create(theme, [0, 0, 5, 0, 0], [0, 0], [1, 1, 0], 1);

		Assert.Same(state.ZNode, theme.Head);
		Assert.Equal(5, state.ZNode.Key);
	}
}

