using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Text;

/// <summary>
/// Draws text with the XVM texture-font atlas.
/// </summary>
/// <remarks>The renderer walks the string, advances by the metric width and emits one atlas quad per visible character; a space advances without drawing and a newline returns to the left margin.</remarks>
public sealed class TextureFontSurface : IUiTextSurface
{
	private readonly TextureFont _font;

	/// <summary>
	/// Creates a surface over a texture font.
	/// </summary>
	/// <param name="font">The font that supplies the atlas pages and metrics.</param>
	/// <exception cref="ArgumentNullException"><paramref name="font"/> is null.</exception>
	public TextureFontSurface(TextureFont font)
	{
		ArgumentNullException.ThrowIfNull(font);
		_font = font;
	}

	/// <summary>Gets the font used by the surface.</summary>
	public TextureFont Font => _font;

	/// <inheritdoc/>
	public float Measure(string? text)
	{
		if (string.IsNullOrEmpty(text))
			return 0f;
		float width = 0f;
		float widest = 0f;
		foreach (char value in text)
		{
			if (value == '\n')
			{
				widest = MathF.Max(widest, width);
				width = 0f;
				continue;
			}
			if (value == '\r')
				continue;
			width += _font.GetGlyph(value).Advance;
		}
		return MathF.Max(widest, width);
	}

	/// <inheritdoc/>
	[Original(0x0071D924)]
	public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (string.IsNullOrEmpty(text))
			return;
		float originX = position.X;
		float x = originX;
		float y = position.Y;
		bool lineHasGlyph = false;
		foreach (char value in text)
		{
			if (value == '\r')
				continue;
			if (value == '\n')
			{
				x = originX;
				y += TextureFont.LineHeight;
				lineHasGlyph = false;
				continue;
			}
			TextureFontGlyph glyph = _font.GetGlyph(value);
			if (glyph.Advance <= 0f)
				continue;
			if (maxWidth > 0f && lineHasGlyph && x + glyph.Advance > originX + maxWidth)
			{
				x = originX;
				y += TextureFont.LineHeight;
				lineHasGlyph = false;
			}
			if (value != ' ')
			{
				int cellX = (value & 0xF) * TextureFont.CellSize;
				int cellY = value & 0xF0;
				Vector4 coordinates = new(
					cellX / TextureFont.PageSize,
					cellY / TextureFont.PageSize,
					(cellX + glyph.Advance) / TextureFont.PageSize,
					(cellY + TextureFont.GlyphHeight) / TextureFont.PageSize);
				drawList.Add(new UiQuad(
					new Vector2(x, y + glyph.Top),
					new Vector2(glyph.Advance, TextureFont.GlyphHeight),
					coordinates,
					_font.Pages[0],
					color));
			}
			x += glyph.Advance;
			lineHasGlyph = true;
		}
	}
}
