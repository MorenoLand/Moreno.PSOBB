using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x00710918 base words, the 0x00710F64 bound copy, the 0x00719930 theme and 0x0073F670 point.
/// </summary>
public sealed class Scene2WindowStateTests
{
	[Fact]
	public void TheBaseInitialiserWritesTheDocumentedWords()
	{
		Scene2WindowState.ThemePointer = 0x1234;
		Scene2WindowState state = new();

		state.InitializeFields();

		Assert.Equal(0x1234, state.Fields[1]);
		foreach (int index in new[] { 24, 25, 28, 29, 30, 31, 32 })
			Assert.Equal(0, state.Fields[index]);
		Assert.Equal(1065353216, state.Fields[26]);
		Assert.Equal(1065353216, state.Fields[27]);
		Assert.Equal(0x1234, Scene2WindowState.GetTheme());
	}

	[Fact]
	public void TheBoundCopyMovesTheFourWords()
	{
		Scene2WindowState state = new();
		state.Fields[12] = 1;
		state.Fields[13] = 2;
		state.Fields[14] = 3;
		state.Fields[15] = 4;

		state.CopyBounds();

		Assert.Equal(1, state.Fields[16]);
		Assert.Equal(2, state.Fields[17]);
		Assert.Equal(3, state.Fields[18]);
		Assert.Equal(4, state.Fields[19]);
	}

	[Fact]
	public void ThePointCopiesTwoWordsAndClearsTheThird()
	{
		(int X, int Y, int Z) point = Scene2Point.Copy([7, 9]);

		Assert.Equal(7, point.X);
		Assert.Equal(9, point.Y);
		Assert.Equal(0, point.Z);
		Assert.Throws<ArgumentException>(() => Scene2Point.Copy([1]));
	}
}
