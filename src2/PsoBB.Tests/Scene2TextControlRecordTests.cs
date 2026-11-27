using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x00735C90 records, the 0x00736138 height sum and the 0x00736458 placement.
/// </summary>
public sealed class Scene2TextControlRecordTests
{
	[Fact]
	public void TheRecordStoresTheFlagsValueAndPosition()
	{
		Scene2TextControl control = CreateControl(2);

		Assert.True(control.AddRecord("OK", 1, 7, new FixedSurface(10f)));
		Assert.Equal(1, control.Count);
		Assert.Equal("OK", control.Cells[0].Text);
		Assert.Equal(0f, control.Cells[0].TextPosition);
		Assert.Equal(1, BinaryPrimitives.ReadInt32LittleEndian(control.Records.AsSpan(0)));
		Assert.Equal(7, BinaryPrimitives.ReadInt32LittleEndian(control.Records.AsSpan(4)));

		Assert.True(control.AddRecord("Cancel", 0, 8, new FixedSurface(10f)));
		Assert.Equal(20f, control.Cells[1].TextPosition);
		Assert.False(control.AddRecord("third", 0, 9, new FixedSurface(10f)));
	}

	[Fact]
	public void TheCompareBitClearsOnlyOnTheMatchingRecord()
	{
		Scene2TextControl control = CreateControl(2);
		control.Compare136 = 0;

		control.AddRecord("a", 2, 0, new FixedSurface(10f));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(control.Records.AsSpan(0)) & 2);

		control.AddRecord("b", 2, 0, new FixedSurface(10f));
		Assert.Equal(2, BinaryPrimitives.ReadInt32LittleEndian(control.Records.AsSpan(8)) & 2);
	}

	[Fact]
	public void TheHeightSumUsesTheTextCellsAndTheSixOffset()
	{
		Scene2TextControl control = CreateControl(2);
		control.AddRecord("a", 1, 0, new FixedSurface(10f));
		control.AddRecord("b", 1, 0, new FixedSurface(10f));
		control.Cells[0].TextHeight = 14f;
		control.Cells[1].TextHeight = 20f;

		control.MeasureLayout(0);

		Assert.Equal(60f, control.Field56);
		Assert.Equal(60, control.Result144);

		control.Flags44 = 0x40;
		control.MeasureLayout(0);
		Assert.Equal(66f, control.Field56);
	}

	[Fact]
	public void ThePlacementUsesTheHalfWidthAndTheFourteenCut()
	{
		Scene2TextControl control = CreateControl(2);
		control.AddRecord("a", 1, 0, new FixedSurface(10f));
		control.AddRecord("b", 1, 0, new FixedSurface(10f));
		control.Cells[0].TextHeight = 14f;
		control.Cells[0].TextWidth = 12f;
		control.Cells[1].TextHeight = 20f;
		control.Field56 = 30f;

		control.PlaceChildren();

		Assert.Equal(10f, control.Cells[0].TextPosition);
		Assert.Equal(-7f, control.Cells[0].TextX);
		Assert.Equal(10f, control.Cells[1].TextPosition);
		Assert.Equal(0f, control.Cells[1].TextX);
	}

	private static Scene2TextControl CreateControl(int capacity) => new(capacity)
	{
		Cells = [Scene2CellState.Create(0, new int[20], 0), Scene2CellState.Create(0, new int[20], 0)],
	};

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

