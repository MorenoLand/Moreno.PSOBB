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
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [BitConverter.SingleToInt32Bits(3f), 4], Grid(2), 5, 2);

		Assert.Equal(2, window.Count);
		Assert.Equal(2, window.Cells.Length);
		Assert.Equal(16, window.Records.Length);
		Assert.All(window.Records, value => Assert.Equal(0, value));
		Assert.Equal(180, window.Base.Fields[35]);
		Assert.Equal(2, window.Base.Fields[40]);
		Assert.Equal(0x80, window.Base.Fields[11] & 0x80);
		Assert.Equal(-17f, window.Point.X);
	}

	[Fact]
	public void TheRefreshMovesTheTailWordAndAppliesTheValueReset()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(2), 0, 2);
		window.Base.Fields[38] = 9;
		window.Cells[0].Text = "x";
		BinaryPrimitives.WriteInt32LittleEndian(window.Records.AsSpan(0), 0x18);

		window.RefreshChildren();

		Assert.Equal(9, window.Base.Fields[29]);
		Assert.Equal(0x1000000, window.Base.Fields[23]);
		Assert.Equal(0x10, BinaryPrimitives.ReadInt32LittleEndian(window.Records.AsSpan(0)));
		Assert.Equal(0, BinaryPrimitives.ReadUInt16LittleEndian(window.Cells[0].Data.AsSpan(4)) & 8);
		Assert.Equal(900000f, BinaryPrimitives.ReadSingleLittleEndian(window.Cells[0].Data.AsSpan(28)));
	}

	[Fact]
	public void ThePositionUsesThePreviousLineAndUpdatesTheScroll()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(2), 0, 2);
		window.MaxWidth = 100f;
		window.CurrentLine = 1;
		window.Cells[0].TextHeight = 14f;
		window.Cells[1].TextPosition = 20f;
		window.Cells[1].TextHeight = 14f;

		window.UpdatePosition();

		Assert.Equal(81f, window.Point.X);
		Assert.Equal(-6f, window.Point.Y);

		window.Scroll = 20f;
		window.UpdatePosition();
		Assert.Equal(14f, window.Scroll);
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

	[Fact]
	public void TheLineAssemblyStoresTheRecordAndAdvancesThePosition()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(2), 0, 2);
		window.MaxWidth = 100f;
		window.RecordValue = 5;

		Assert.True(window.AddLine("abc", 0, 9, new FixedSurface(10f)));

		Assert.Equal("abc", window.Cells[0].Text);
		Assert.Equal(30f, window.Cells[0].TextWidth);
		Assert.Equal(14f, window.Cells[0].TextHeight);
		Assert.Equal(0f, window.Cells[0].TextPosition);
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(window.Records.AsSpan(0)));
		Assert.Equal(5, BinaryPrimitives.ReadInt32LittleEndian(window.Records.AsSpan(4)));
		Assert.Equal(1, window.CurrentLine);
		Assert.Equal(20f, window.LinePosition);
		Assert.Equal(40f, window.Tail);
	}

	[Fact]
	public void TheSecondLineUsesTheNextCellAndTheOffsetFlag()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(2), 0, 2);
		window.MaxWidth = 100f;
		window.AddLine("abc", 0, 0, new FixedSurface(10f));

		window.AddLine("de", 0x202, 0, new FixedSurface(10f));

		Assert.Equal("de", window.Cells[1].Text);
		Assert.Equal((int)(80f - 20f), window.Cells[1].TextOffset28);
		Assert.Equal(0, window.CurrentLine);
	}

	[Fact]
	public void AZeroTextIsRejectedAndAMissingCellThrows()
	{
		Scene2TextWindow window = Scene2TextWindow.Create([0, 0, 0, 0, 0], [0, 0], Grid(1), 0, 2);
		window.MaxWidth = 100f;

		Assert.False(window.AddLine(null, 0, 0, new FixedSurface(10f)));
		window.CurrentLine = 5;
		Assert.Throws<InvalidOperationException>(() => window.AddLine("x", 0, 0, new FixedSurface(10f)));
	}

	private sealed class FixedSurface : IUiTextSurface
	{
		private readonly float _advance;

		public FixedSurface(float advance) => _advance = advance;

		public float Measure(string? text) => (text?.Length ?? 0) * _advance;

		public void Draw(UiDrawList drawList, string? text, System.Numerics.Vector2 position, uint color, float maxWidth = 0f)
		{
		}
	}

	private static int[] Grid(int cells)
	{
		int[] words = new int[2 + cells * 5];
		words[0] = 1;
		words[1] = cells;
		return words;
	}
}


