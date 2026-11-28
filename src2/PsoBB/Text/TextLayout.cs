using System.Numerics;

namespace PsoBB.Text;

/// <summary>
/// Lays out a string into positioned glyphs, with the client's prefix skipping, newlines and
/// word wrapping.
/// </summary>
public sealed class TextLayout
{
	private TextLayout(IReadOnlyList<TextLine> lines, IReadOnlyList<PlacedGlyph> glyphs, float width, float height)
	{
		Lines = lines;
		Glyphs = glyphs;
		Width = width;
		Height = height;
	}

	/// <summary>Gets the laid-out lines.</summary>
	public IReadOnlyList<TextLine> Lines { get; }

	/// <summary>Gets the positioned glyphs in drawing order.</summary>
	public IReadOnlyList<PlacedGlyph> Glyphs { get; }

	/// <summary>Gets the layout width in pixels.</summary>
	public float Width { get; }

	/// <summary>Gets the layout height in pixels.</summary>
	public float Height { get; }

	/// <summary>
	/// Lays out a string for a font.
	/// </summary>
	/// <param name="font">The font that supplies glyphs and metrics.</param>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <param name="options">The wrapping, colour and alignment options.</param>
	/// <returns>The lines and positioned glyphs.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="font"/> is null.</exception>
	public static TextLayout Create(BitmapFont font, string? text, TextLayoutOptions? options = null)
	{
		ArgumentNullException.ThrowIfNull(font);
		if (string.IsNullOrEmpty(text))
			return Empty;
		TextLayoutOptions settings = options ?? TextLayoutOptions.Default;
		ReadOnlySpan<char> span = text.AsSpan();
		TextMetrics metrics = new(font);
		List<PlacedGlyph> glyphs = [];
		List<TextLine> lines = [];
		float x = 0f;
		float y = 0f;
		int lineStart = 0;
		int lineStartGlyph = 0;
		int index = 0;
		uint color = settings.Color;
		bool japanese = false;
		bool wrap = settings.WordWrap && settings.MaxWidth > 0f;

		void EndLine(int end)
		{
			lines.Add(new TextLine(lineStart, end - lineStart, x));
		}

		while (index < span.Length)
		{
			index = TextPrefix.Skip(span, index, ref color, ref japanese, settings.ApplyColorPrefixes, settings.ColorTable);
			if (index >= span.Length)
				break;
			char value = span[index];
			if (value == '\n')
			{
				EndLine(index + 1);
				index++;
				lineStart = index;
				lineStartGlyph = glyphs.Count;
				x = 0f;
				y += font.LineHeight;
				continue;
			}
			int advance = font.GetAdvance(value);
			if (wrap && x > 0f && x + advance > settings.MaxWidth)
			{
				EndLine(index);
				lineStart = index;
				lineStartGlyph = glyphs.Count;
				x = 0f;
				y += font.LineHeight;
			}
			if (value == ' ')
			{
				x += advance;
				if (wrap && settings.BreakAtWords && !metrics.NextWordFits(span, index + 1, (int)x, (int)settings.MaxWidth))
				{
					EndLine(index + 1);
					index++;
					lineStart = index;
					lineStartGlyph = glyphs.Count;
					x = 0f;
					y += font.LineHeight;
					continue;
				}
				index++;
				continue;
			}
			FontGlyph glyph = font.GetGlyph(value);
			glyphs.Add(new PlacedGlyph(glyph, new Vector2(x, y), lines.Count, color));
			x += advance;
			index++;
		}
		if (lineStart < span.Length || glyphs.Count > lineStartGlyph)
			EndLine(span.Length);
		if (lines.Count == 0)
			return Empty;
		float width = settings.MaxWidth > 0f ? settings.MaxWidth : MaxLineWidth(lines);
		for (int lineIndex = 0; lineIndex < lines.Count; lineIndex++)
		{
			float offset = settings.Alignment switch
			{
				TextAlignment.Center => (width - lines[lineIndex].Width) * 0.5f,
				TextAlignment.Right => width - lines[lineIndex].Width,
				_ => 0f,
			};
			if (offset == 0f)
				continue;
			for (int glyphIndex = 0; glyphIndex < glyphs.Count; glyphIndex++)
			{
				if (glyphs[glyphIndex].Line == lineIndex)
					glyphs[glyphIndex] = glyphs[glyphIndex] with { Position = glyphs[glyphIndex].Position + new Vector2(offset, 0f) };
			}
		}
		return new TextLayout(lines, glyphs, width, lines.Count * font.LineHeight);
	}

	private static TextLayout Empty { get; } = new([], [], 0f, 0f);

	private static float MaxLineWidth(IReadOnlyList<TextLine> lines)
	{
		float width = 0f;
		foreach (TextLine line in lines)
			width = MathF.Max(width, line.Width);
		return width;
	}
}
