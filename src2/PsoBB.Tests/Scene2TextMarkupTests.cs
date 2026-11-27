using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the 0x007AC580 tab commands.
/// </summary>
public sealed class Scene2TextMarkupTests
{
	[Fact]
	public void PlainTextKeepsTheState()
	{
		bool bold = false;
		int color = 7;

		int index = Scene2TextMarkup.Skip("abc", 0, ref bold, ref color);

		Assert.Equal(0, index);
		Assert.False(bold);
		Assert.Equal(7, color);
	}

	[Fact]
	public void TheBoldCommandsSetAndClear()
	{
		bool bold = false;
		int color = 0;

		Assert.Equal(2, Scene2TextMarkup.Skip("\tJabc", 0, ref bold, ref color));
		Assert.True(bold);

		Assert.Equal(2, Scene2TextMarkup.Skip("\tEabc", 0, ref bold, ref color));
		Assert.False(bold);
	}

	[Fact]
	public void TheDigitCommandSelectsTheColourTable()
	{
		bool bold = false;
		int color = 0;

		int index = Scene2TextMarkup.Skip("\tC3abc", 0, ref bold, ref color);

		Assert.Equal(3, index);
		Assert.Equal(Scene2TextMarkup.Colors[3], color);
	}

	[Fact]
	public void TheThemeCommandUsesTheThemeColour()
	{
		Scene2TextMarkup.ThemeColor = 0x1234;
		bool bold = false;
		int color = 0;

		try
		{
			Assert.Equal(3, Scene2TextMarkup.Skip("\tCGabc", 0, ref bold, ref color));
			Assert.Equal(0x1234, color);
		}
		finally
		{
			Scene2TextMarkup.ThemeColor = Scene2TextMarkup.DefaultThemeColor;
		}
	}

	[Fact]
	public void MultipleCommandsAreSkipped()
	{
		bool bold = false;
		int color = 0;

		int index = Scene2TextMarkup.Skip("\tJ\tC1x", 0, ref bold, ref color);

		Assert.Equal(5, index);
		Assert.True(bold);
		Assert.Equal(Scene2TextMarkup.Colors[1], color);
	}

	[Fact]
	public void ATrailingTabStopsAtTheEnd()
	{
		bool bold = false;
		int color = 0;

		Assert.Equal(1, Scene2TextMarkup.Skip("\t", 0, ref bold, ref color));
	}
}
