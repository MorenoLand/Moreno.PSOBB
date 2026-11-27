using System.Buffers.Binary;
using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x0073B698 text window state and the 0x0073B0F0 refresh.
/// </summary>
[Collection("Game state")]
public sealed class Scene2TextWindowTests : IDisposable
{
	public Scene2TextWindowTests() => Scene2WindowState.ThemeFlag = 0;

	public void Dispose() => Scene2WindowState.ThemeFlag = 0;

	[Fact]
	public void TheWindowAllocatesOneRecordPerLineAndSetsTheBaseWords()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [3, 4], Grid(2), 5, 2);

		Assert.Equal(2, window.Count);
		Assert.Equal(2, window.Cells.Length);
		Assert.Equal(16, window.Records.Length);
		Assert.All(window.Records, value => Assert.Equal(0, value));
		Assert.Equal(180, window.Base.Fields[35]);
		Assert.Equal(2, window.Base.Fields[40]);
		Assert.Equal(0x80, window.Base.Fields[11] & 0x80);
		Assert.Equal(3 - 20 + 0, window.Point.X);
	}

	[Fact]
	public void TheRefreshMovesTheTailWordAndAppliesTheValueReset()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(2), 0, 2);
		window.Base.Fields[38] = 9;
		BinaryPrimitives.WriteInt32LittleEndian(window.Cells[0].Data.AsSpan(32), 1);
		BinaryPrimitives.WriteInt32LittleEndian(window.Records.AsSpan(0), 0x18);

		window.RefreshChildren();

		Assert.Equal(9, window.Base.Fields[29]);
		Assert.Equal(0x1000000, window.Base.Fields[23]);
		Assert.Equal(0x10, BinaryPrimitives.ReadInt32LittleEndian(window.Records.AsSpan(0)));
		Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(window.Cells[0].Data.AsSpan(4)) & 8);
		Assert.Equal(900000f, BinaryPrimitives.ReadSingleLittleEndian(window.Cells[0].Data.AsSpan(28)));
	}

	[Fact]
	public void TheScrollClampKeepsTheValueBetweenZeroAndThePointLimit()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(1), 0, 1);

		Assert.False(window.UpdateScroll());
		Assert.Equal(0f, window.Scroll);

		window.Scroll = 30f;
		window.ScrollLimitSource = 7f;
		Assert.True(window.UpdateScroll());
		Assert.Equal(20f, window.Scroll);
		Assert.Equal(7f, window.ScrollCopy);

		window.Scroll = -5f;
		Assert.True(window.UpdateScroll());
		Assert.Equal(0f, window.Scroll);

		window.Offset76 = 100f;
		window.Scroll = 5f;
		Assert.True(window.UpdateScroll());
		Assert.Equal(0f, window.Scroll);
	}

	private static int[] Grid(int cells)
	{
		int[] words = new int[2 + cells * 5];
		words[0] = 1;
		words[1] = cells;
		return words;
	}
}
