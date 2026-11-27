using System.Buffers.Binary;
using PsoBB.Gui;
using PsoBB.Save;

namespace PsoBB.Tests;

/// <summary>
/// Checks the thirteen cell state constructors against their copied word offsets.
/// </summary>
[Collection("Game state")]
public sealed class Scene2CellStateTests : IDisposable
{
	public Scene2CellStateTests() => CharacterSaveLoad.Reset();

	public void Dispose() => CharacterSaveLoad.Reset();

	[Fact]
	public void EveryTypeBuildsTheDocumentedSize()
	{
		for (int type = 0; type < Scene2CellGrid.Layouts.Count; type++)
		{
			Scene2CellState state = Scene2CellState.Create(type, Cell(type), 3);
			Assert.Equal(type, state.Type);
			Assert.Equal(Scene2CellState.Length, state.Data.Length);
			Assert.True(Scene2CellGrid.Layouts[type].Size <= Scene2CellState.Length);
			Assert.Equal(3, BinaryPrimitives.ReadUInt16LittleEndian(state.Data.AsSpan(Scene2CellState.KindOffset)));
		}
	}

	[Fact]
	public void TypeZeroCopiesTheFourWords()
	{
		Scene2CellState state = Scene2CellState.Create(0, Cell(0), 0);

		Assert.Equal(101, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(8)));
		Assert.Equal(102, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(12)));
		Assert.Equal(103, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(16)));
		Assert.Equal(104, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(20)));
	}

	[Fact]
	public void TypeOneMapsTheSourceWordsToTheirOffsets()
	{
		Scene2CellState state = Scene2CellState.Create(1, Cell(1), 0);

		Assert.Equal(101, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(12)));
		Assert.Equal(102, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(16)));
		Assert.Equal(103, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(8)));
		Assert.Equal(106, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(20)));
		Assert.Equal(104, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(24)));
		Assert.Equal((ushort)105, BinaryPrimitives.ReadUInt16LittleEndian(state.Data.AsSpan(Scene2CellState.FlagsOffset)));
		Assert.Equal(107, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(32)));
		Assert.Equal(108, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(36)));
	}

	[Fact]
	public void TypeFiveCopiesTheIntegerIntoBothFloats()
	{
		Scene2CellState state = Scene2CellState.Create(5, Cell(5), 0);

		Assert.Equal(106f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(40)));
		Assert.Equal(106f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(36)));
	}

	[Fact]
	public void TypeSixDividesTheFourRectsBy256()
	{
		int[] cell = Cell(6);
		cell[3] = BitConverter.SingleToInt32Bits(2f);
		cell[4] = BitConverter.SingleToInt32Bits(3f);
		cell[5] = BitConverter.SingleToInt32Bits(4f);
		cell[6] = BitConverter.SingleToInt32Bits(5f);

		Scene2CellState state = Scene2CellState.Create(6, cell, 0);

		Assert.Equal(4f / 256f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(28)));
		Assert.Equal(5f / 256f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(32)));
		Assert.Equal(6f / 256f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(36)));
		Assert.Equal(8f / 256f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(40)));
	}

	[Fact]
	public void TheConstantTypesWriteTheirShippedFields()
	{
		Scene2CellState eight = Scene2CellState.Create(8, Cell(8), 0);
		Assert.Equal(54, eight.Data[28]);
		Assert.Equal(54, eight.Data[29]);
		Assert.Equal(14f, BinaryPrimitives.ReadSingleLittleEndian(eight.Data.AsSpan(20)));
		Assert.Equal(-1, BinaryPrimitives.ReadInt32LittleEndian(eight.Data.AsSpan(48)));

		Scene2CellState twelve = Scene2CellState.Create(12, Cell(12), 0);
		Assert.Equal(54, twelve.Data[28]);
		Assert.Equal(0xFF, twelve.Data[29]);
		Assert.Equal(14f, BinaryPrimitives.ReadSingleLittleEndian(twelve.Data.AsSpan(20)));
	}

	[Fact]
	public void TypeTenAndElevenCopyTheirTwoWords()
	{
		Scene2CellState ten = Scene2CellState.Create(10, Cell(10), 0);
		Assert.Equal(101, BinaryPrimitives.ReadInt32LittleEndian(ten.Data.AsSpan(8)));
		Assert.Equal(102, BinaryPrimitives.ReadInt32LittleEndian(ten.Data.AsSpan(12)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(ten.Data.AsSpan(16)));

		Scene2CellState eleven = Scene2CellState.Create(11, Cell(11), 0);
		Assert.Equal(-1, BinaryPrimitives.ReadInt32LittleEndian(eleven.Data.AsSpan(16)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(eleven.Data.AsSpan(32)));
	}

	[Fact]
	public void TypeThreeUsesTheOptionValue()
	{
		Scene2CellState state = Scene2CellState.Create(3, Cell(3), 0);

		Assert.Equal(51f, BinaryPrimitives.ReadSingleLittleEndian(state.Data.AsSpan(40)));
		Assert.Equal(0, BinaryPrimitives.ReadInt32LittleEndian(state.Data.AsSpan(28)));
	}

	[Fact]
	public void TheTextStoreKeepsTheCopyFlagAndMergesTheLowBits()
	{
		Scene2CellState state = Scene2CellState.Create(0, Cell(0), 0);

		state.SetText("abc", 0x20);

		Assert.Equal("abc", state.Text);
		Assert.Equal(0x20, state.Flags & 0x20);

		state.SetText("next", 0x2C1);
		Assert.Equal("next", state.Text);
		Assert.Equal(0x2C1, state.Flags & 0x2C1);
	}

	[Fact]
	public void TheTextStoreResetsTheOffsetWhenThePositionIsPositive()
	{
		Scene2CellState state = Scene2CellState.Create(0, Cell(0), 0);
		state.TextOffset28 = 5;
		state.TextPosition = 1f;

		state.SetText(null, 0);

		Assert.Equal(0, state.TextOffset28);
		Assert.Null(state.Text);
	}

	[Fact]
	public void TheMarkupPathStopsWithTheAddress()
	{
		Scene2CellState state = Scene2CellState.Create(0, Cell(0), 0);

		NotSupportedException error = Assert.Throws<NotSupportedException>(() => state.SetText("x", 0x400));
		Assert.Contains("0072DB60", error.Message);
	}

	private static int[] Cell(int type)
	{
		int[] cell = new int[20];
		cell[0] = type;
		for (int index = 1; index < cell.Length; index++)
			cell[index] = 100 + index;
		return cell;
	}
}

