namespace PsoBB.Text;

/// <summary>
/// Measures text with the client's character widths, prefix rules and wrapping limits.
/// </summary>
public sealed class TextMetrics
{
	private readonly BitmapFont _font;

	/// <summary>
	/// Creates a measurement helper for a font.
	/// </summary>
	/// <param name="font">The font that supplies advances.</param>
	/// <exception cref="ArgumentNullException"><paramref name="font"/> is null.</exception>
	public TextMetrics(BitmapFont font)
	{
		ArgumentNullException.ThrowIfNull(font);
		_font = font;
	}

	/// <summary>
	/// Returns the advance for one code unit.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The advance in pixels.</returns>
	[Original(0x007AC24C, "unknown_get_text_extent_point_32_")]
	public int GetCharacterAdvance(char value) => _font.GetAdvance(value);

	/// <summary>
	/// Measures a string as the sum of each glyph extent capped at fourteen pixels.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The extent in pixels.</returns>
	[Original(0x007AC264, "get_text_extent_point_size_for_wstr")]
	public int MeasureExtent(string? text) => MeasureExtent(text.AsSpan());

	/// <summary>
	/// Measures a string as the sum of each glyph extent capped at fourteen pixels.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The extent in pixels.</returns>
	public int MeasureExtent(ReadOnlySpan<char> text)
	{
		int total = 0;
		int index = 0;
		uint color = 0;
		bool japanese = false;
		while (index < text.Length)
		{
			index = TextPrefix.Skip(text, index, ref color, ref japanese, false, null);
			if (index >= text.Length)
				break;
			total += _font.GetExtent(text[index]);
			index++;
		}
		return RoundExtent(total);
	}

	/// <summary>
	/// Measures the width the client asks a text window to reserve.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The width in pixels, at least the configured minimum.</returns>
	[Original(0x007AC344, "get_width_of_window_for_text")]
	public int MeasureWindowWidth(string? text) => MeasureWindowWidth(text.AsSpan());

	/// <summary>
	/// Measures the width the client asks a text window to reserve.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The width in pixels, at least the configured minimum.</returns>
	public int MeasureWindowWidth(ReadOnlySpan<char> text)
	{
		int total = 0;
		int index = 0;
		uint color = 0;
		bool japanese = false;
		while (index < text.Length)
		{
			index = TextPrefix.Skip(text, index, ref color, ref japanese, false, null);
			if (index >= text.Length)
				break;
			total += _font.GetAdvance(text[index]);
			index++;
		}
		float width = MathF.Max(total + _font.WindowWidthPadding, _font.MinimumWindowWidth);
		return (int)MathF.Round(width);
	}

	/// <summary>
	/// Measures a byte-oriented string whose two-byte characters are stored in little-endian order.
	/// </summary>
	/// <param name="text">The characters to measure.</param>
	/// <returns>The extent in pixels.</returns>
	[Original(0x007AC43C, "CalculateTextExtent_007ac43c")]
	public int MeasureEncodedExtent(ReadOnlySpan<char> text)
	{
		int total = 0;
		int index = 0;
		uint color = 0;
		bool japanese = false;
		while (index < text.Length)
		{
			index = TextPrefix.Skip(text, index, ref color, ref japanese, false, null);
			if (index >= text.Length)
				break;
			byte first = (byte)text[index];
			index++;
			if (first == '\n')
				continue;
			if (first == ' ')
			{
				total += 7;
				continue;
			}
			int code = first;
			if ((first & 0xE0) == 0x80 && index < text.Length)
			{
				byte second = (byte)text[index];
				index++;
				code = second | (first << 8);
			}
			total += _font.GetAdvance((char)code);
		}
		float extent = MathF.Max(total + _font.ExtentPadding, 0f);
		return (int)MathF.Round(extent);
	}

	/// <summary>
	/// Returns whether the word starting at an index fits before the line limit.
	/// </summary>
	/// <param name="text">The text being placed.</param>
	/// <param name="index">The first character of the word.</param>
	/// <param name="usedWidth">The width already used on the line.</param>
	/// <param name="lineWidth">The line width limit.</param>
	/// <returns><see langword="false"/> when the word crosses the limit.</returns>
	[Original(0x0071D4C0, "does_next_word_fill_line_width")]
	public bool NextWordFits(ReadOnlySpan<char> text, int index, int usedWidth, int lineWidth)
	{
		int used = usedWidth;
		for (int position = index; position < text.Length; position++)
		{
			if (text[position] == ' ')
				return true;
			used += _font.GetAdvance(text[position]);
			if (used > lineWidth)
				return false;
		}
		return true;
	}

	private int RoundExtent(int total)
	{
		float extent = MathF.Max(total + _font.ExtentPadding, 0f);
		return (int)MathF.Round(extent);
	}
}
