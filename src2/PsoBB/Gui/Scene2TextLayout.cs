namespace PsoBB.Gui;

/// <summary>
/// The text measurement at <c>0x0072DDF4</c> over the renderer-independent width seam.
/// </summary>
/// <remarks>
/// The original reads per-glyph advances from the table at <c>0x00A9C484</c>; this port asks the
/// surface's <see cref="IUiTextSurface.Measure"/> for the same advance. The bold flag from
/// <c>0x007AC580</c> selects the surface measure too. Line heights are 13/10/13 for the flag-four
/// path and 20/14/14 otherwise. The space wrap uses the <c>0x0071D4C0</c> next-word check when
/// bit 0x800 is set.
/// </remarks>
public static class Scene2TextLayout
{
	/// <summary>
	/// Measures a cell's text and writes the width and height.
	/// </summary>
	/// <param name="cell">The cell that holds the text and flags.</param>
	/// <param name="maxWidth">The maximum width; zero keeps the measured width.</param>
	/// <param name="surface">The surface that supplies the advance.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	[Original(0x0072DDF4)]
	public static void Measure(Scene2CellState cell, float maxWidth, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(cell);
		ArgumentNullException.ThrowIfNull(surface);
		string? text = cell.Text;
		if (string.IsNullOrEmpty(text))
		{
			cell.TextWidth = 0f;
			cell.TextHeight = 0f;
			return;
		}
		int flags = cell.Flags;
		float lineAdvance = (flags & 4) != 0 ? 10f : 14f;
		float lineHeight = (flags & 4) != 0 ? 13f : 20f;
		float height = (flags & 4) != 0 ? 13f : 14f;
		float current = 0f;
		float widest = 0f;
		bool bold = (flags & 4) != 0;
		int color = 0;
		int index = 0;
		while (index < text.Length)
		{
			index = Scene2TextMarkup.Skip(text, index, ref bold, ref color);
			if (index >= text.Length)
				break;
			char value = text[index++];
			if (value == '\n')
			{
				if ((flags & 0x80) != 0)
					current += lineAdvance / 2f;
				else
				{
					widest = MathF.Max(widest, current);
					current = 0f;
					height += lineHeight;
				}
				continue;
			}
			float advance = surface.Measure(value.ToString());
			if (value == ' ')
			{
				current += advance;
				if ((flags & 0x800) != 0 && WrapPending(text, index, current, maxWidth, surface))
				{
					widest = MathF.Max(widest, current);
					current = 0f;
					height += lineHeight;
				}
			}
			else
			{
				current += advance;
			}
		}
		if (current <= 0f)
			height -= lineHeight;
		float width = MathF.Max(widest, current);
		cell.TextHeight = height;
		cell.TextWidth = maxWidth > 0f && width > maxWidth ? maxWidth : width;
	}

	private static bool WrapPending(string text, int index, float current, float maxWidth, IUiTextSurface surface)
	{
		bool ignoredBold = false;
		int ignoredColor = 0;
		while (index < text.Length)
		{
			index = Scene2TextMarkup.Skip(text, index, ref ignoredBold, ref ignoredColor);
			if (index >= text.Length || text[index] == ' ')
				return false;
			current += surface.Measure(text[index].ToString());
			index++;
		}
		return current > maxWidth;
	}
}

