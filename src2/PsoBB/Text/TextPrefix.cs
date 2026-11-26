namespace PsoBB.Text;

/// <summary>
/// Reads the client's tab-prefixed locale and colour commands.
/// </summary>
public static class TextPrefix
{
	/// <summary>
	/// Advances over every locale or colour command at the current position.
	/// </summary>
	/// <param name="text">The text being read.</param>
	/// <param name="index">The first character or command position.</param>
	/// <param name="color">The current colour; updated by colour commands.</param>
	/// <param name="japanese">The current Japanese-locale flag; updated by locale commands.</param>
	/// <param name="applyColor">Whether colour commands change <paramref name="color"/>.</param>
	/// <param name="colors">The command colour table, or <see langword="null"/>.</param>
	/// <returns>The index of the first character after the commands.</returns>
	[Original(0x007AC580, "string_parse_locale_and_color_prefix")]
	public static int Skip(
		ReadOnlySpan<char> text,
		int index,
		ref uint color,
		ref bool japanese,
		bool applyColor,
		TextColorTable? colors)
	{
		while (index < text.Length && text[index] == '\t')
		{
			if (index + 1 >= text.Length)
				return text.Length;
			char command = text[index + 1];
			if (command == 'J')
			{
				index += 2;
				japanese = true;
			}
			else if (command == 'E')
			{
				index += 2;
				japanese = false;
			}
			else if (command == 'C')
			{
				if (applyColor && index + 2 < text.Length)
				{
					char value = text[index + 2];
					if (value == 'G')
						color = colors?.Gold ?? TextColorTable.DefaultGold;
					else if (colors is not null && colors.TryGet(value, out uint entry))
						color = entry;
				}
				index = Math.Min(text.Length, index + 3);
			}
			else
			{
				index += 2;
				japanese = false;
			}
		}
		return index;
	}
}
