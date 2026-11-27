using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x0072A68C cell layout table and its word walk.
/// </summary>
public sealed class Scene2CellGridTests
{
	[Fact]
	public void TheLayoutTableCarriesTheThirteenSizesAndStrides()
	{
		Assert.Equal(13, Scene2CellGrid.Layouts.Count);
		Assert.Equal(new Scene2CellLayout(0, 0x18, 5, 0x0072ACF4), Scene2CellGrid.Layouts[0]);
		Assert.Equal(new Scene2CellLayout(2, 0x68, 11, 0x00729F3C), Scene2CellGrid.Layouts[2]);
		Assert.Equal(new Scene2CellLayout(7, 0x38, 14, 0x0072E5B4), Scene2CellGrid.Layouts[7]);
		Assert.Equal(new Scene2CellLayout(12, 0x2C, 1, 0x0072E17C), Scene2CellGrid.Layouts[12]);
	}

	[Fact]
	public void TheReaderWalksTheTypeWordsByTheirStrides()
	{
		int[] words = new int[28];
		words[0] = 2;
		words[1] = 2;
		words[2] = 0;
		words[7] = 1;
		words[16] = 2;
		words[27] = 3;

		Scene2Cell[] cells = Scene2CellGrid.Read(words);

		Assert.Equal(4, cells.Length);
		Assert.Equal(0, cells[0].Layout.Type);
		Assert.Equal(2, cells[0].Offset);
		Assert.Equal(1, cells[1].Layout.Type);
		Assert.Equal(7, cells[1].Offset);
		Assert.Equal(2, cells[2].Layout.Type);
		Assert.Equal(16, cells[2].Offset);
		Assert.Equal(3, cells[3].Layout.Type);
		Assert.Equal(27, cells[3].Offset);
	}

	[Fact]
	public void AZeroDimensionReturnsNoCells()
	{
		Assert.Empty(Scene2CellGrid.Read([0, 3]));
		Assert.Empty(Scene2CellGrid.Read([3, 0]));
	}

	[Fact]
	public void ShortWordsAndUnknownTypesAreRejected()
	{
		Assert.Throws<ArgumentException>(() => Scene2CellGrid.Read([1]));
		Assert.Throws<ArgumentException>(() => Scene2CellGrid.Read([1, 1]));
		Assert.Throws<ArgumentException>(() => Scene2CellGrid.Read([1, 1, 13]));
	}
}
