namespace PsoBB.Gui;

/// <summary>
/// The tab-command parser at <c>0x007AC580</c>.
/// </summary>
/// <remarks>
/// A tab followed by J or E sets or clears bold; a tab followed by C and a digit selects the
/// ten-entry colour table at <c>0x0097DA60</c>; C and G selects the theme colour or -5632 when no
/// theme is loaded. Every other tab pair leaves the state alone.
/// </remarks>
public static class Scene2TextMarkup
{
	/// <summary>The colour the C-G command uses without a theme.</summary>
	public const int DefaultThemeColor = -5632;

	/// <summary>Gets the ten colour values at <c>0x0097DA60</c>.</summary>
	public static IReadOnlyList<int> Colors { get; } = Array.AsReadOnly<int>(
	[
		0x14, 0x50, 0x140, 0x10, 0x8, 0x8, 0x5, 0x1000, 0x3DCCCCCD, 0x3F000000,
	]);

	/// <summary>Gets or sets the theme colour the C-G command selects.</summary>
	public static int ThemeColor { get; set; } = DefaultThemeColor;

	/// <summary>
	/// Skips the tab commands starting at <paramref name="index"/>.
	/// </summary>
	/// <param name="text">The text.</param>
	/// <param name="index">The first character to read.</param>
	/// <param name="bold">The bold state to update.</param>
	/// <param name="color">The colour to update.</param>
	/// <returns>The index of the first normal character.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="text"/> is empty.</exception>
	public static int Skip(ReadOnlySpan<char> text, int index, ref bool bold, ref int color)
	{
		if (text.IsEmpty)
			throw new ArgumentNullException(nameof(text));
		while ((uint)index < (uint)text.Length && text[index] == '\t')
		{
			if (index + 1 >= text.Length)
				return text.Length;
			char command = text[index + 1];
			if (command == 'J')
			{
				bold = true;
				index += 2;
			}
			else if (command == 'E')
			{
				bold = false;
				index += 2;
			}
			else if (command == 'C')
			{
				if (index + 2 < text.Length)
				{
					char value = text[index + 2];
					if (value == 'G')
						color = ThemeColor;
					else if (value is >= '0' and <= '9')
						color = Colors[value - '0'];
				}
				index += 3;
			}
			else
			{
				index += 2;
			}
		}
		return index;
	}
}
