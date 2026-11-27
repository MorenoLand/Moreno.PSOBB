using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x0072DDF4 measurement over the width seam.
/// </summary>
public sealed class Scene2TextLayoutTests
{
	[Fact]
	public void AnEmptyTextMeasuresZero()
	{
		Scene2CellState cell = Scene2CellState.Create(0, new int[20], 0);

		Scene2TextLayout.Measure(cell, 100f, new FixedSurface(10f));

		Assert.Equal(0f, cell.TextWidth);
		Assert.Equal(0f, cell.TextHeight);
	}

	[Fact]
	public void APlainLineMeasuresItsWidthAndHeight()
	{
		Scene2CellState cell = Scene2CellState.Create(0, new int[20], 0);
		cell.Text = "abc";

		Scene2TextLayout.Measure(cell, 100f, new FixedSurface(10f));

		Assert.Equal(30f, cell.TextWidth);
		Assert.Equal(14f, cell.TextHeight);
	}

	[Fact]
	public void TheFlagFourPathUsesTheShortLine()
	{
		Scene2CellState cell = Scene2CellState.Create(0, new int[20], 0);
		cell.Text = "abc";
		cell.Flags = 4;

		Scene2TextLayout.Measure(cell, 100f, new FixedSurface(10f));

		Assert.Equal(30f, cell.TextWidth);
		Assert.Equal(13f, cell.TextHeight);
	}

	[Fact]
	public void ANewlineAddsTheLineHeight()
	{
		Scene2CellState cell = Scene2CellState.Create(0, new int[20], 0);
		cell.Text = "ab\ncd";

		Scene2TextLayout.Measure(cell, 100f, new FixedSurface(10f));

		Assert.Equal(20f, cell.TextWidth);
		Assert.Equal(34f, cell.TextHeight);
	}

	[Fact]
	public void AThemedWidthIsClampedAndTheSpaceWrapAddsALine()
	{
		Scene2CellState cell = Scene2CellState.Create(0, new int[20], 0);
		cell.Text = "abc def";
		cell.Flags = 0x800;

		Scene2TextLayout.Measure(cell, 25f, new FixedSurface(10f));

		Assert.Equal(25f, cell.TextWidth);
		Assert.Equal(34f, cell.TextHeight);
	}

	private sealed class FixedSurface : IUiTextSurface
	{
		private readonly float _advance;

		public FixedSurface(float advance) => _advance = advance;

		public float Measure(string? text) => (text?.Length ?? 0) * _advance;

		public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
		{
		}
	}
}
