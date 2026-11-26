using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Text;

/// <summary>
/// Draws text with the XVM texture-font atlas.
/// </summary>
/// <remarks>
/// This is the texture path of <c>0x0071D924</c>: the character byte selects the sixteen-pixel cell, the
/// metric table supplies the advance and descender offset, a space advances five pixels, and a glyph that
/// crosses the remaining width is shortened on screen without shortening its texture rectangle. Newlines and
/// automatic wrapping belong to the bitmap-font path <c>0x0071D58C</c>, not this one.
/// </remarks>
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

	/// <summary>
	/// Measures the widest line, following the texture-window measurement at <c>0x0072DDF4</c>.
	/// </summary>
	/// <param name="text">The text.</param>
	/// <returns>The widest line width in pixels.</returns>
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
			width += (int)_font.GetGlyph(value).Advance & 0xFF;
		}
		return MathF.Max(widest, width);
	}

	/// <summary>
	/// Draws a line with the horizontal texture layout.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The diffuse colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The remaining line width; zero follows the interface convention and leaves it unlimited.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
		=> DrawLine(drawList, text, position, color, maxWidth > 0f ? maxWidth : float.MaxValue);

	/// <summary>
	/// Draws a line with the alternate texture row selected by window flag <c>0x80</c>.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The diffuse colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The remaining line width; zero follows the interface convention and leaves it unlimited.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	public void DrawVertical(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
		=> DrawLine(drawList, text, position, color, maxWidth > 0f ? maxWidth : float.MaxValue, true);

	/// <summary>
	/// Draws a line and reports whether every glyph fitted, using the original remaining-width rule.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The diffuse colour in 0xAARRGGBB form.</param>
	/// <param name="remainingWidth">The exact remaining width; zero suppresses every non-space glyph.</param>
	/// <param name="vertical">Whether the alternate texture row is selected.</param>
	/// <returns><see langword="true"/> when every glyph fitted; <see langword="false"/> when one was shortened or suppressed.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	[Original(0x0071D924)]
	public bool DrawLine(UiDrawList drawList, string? text, Vector2 position, uint color, float remainingWidth, bool vertical = false)
		=> Render(drawList, text, position, color, remainingWidth, vertical);

	private bool Render(UiDrawList drawList, string? text, Vector2 position, uint color, float remaining, bool vertical)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		if (string.IsNullOrEmpty(text))
			return true;
		bool fitted = true;
		float x = position.X;
		float y = position.Y;
		foreach (char value in text)
		{
			if (value == '\0')
				break;
			byte index = TextureFont.GetEncodedIndex(value);
			if (index == ' ')
			{
				x += TextureFont.SpaceAdvance;
				remaining -= TextureFont.SpaceAdvance;
				continue;
			}
			if (remaining <= 0f)
			{
				fitted = false;
				continue;
			}
			TextureFontGlyph glyph = _font.GetGlyph(value);
			float width = (int)glyph.Advance & 0xFF;
			if (width <= 0f)
				continue;
			float top = y + glyph.Top;
			float right = x + width;
			if (remaining < width)
			{
				right = remaining + x;
				fitted = false;
			}
			drawList.Add(new UiQuad(
				new Vector2(x, top),
				new Vector2(right - x, TextureFont.GlyphHeight),
				vertical ? GetVerticalCoordinates(index, width) : GetCoordinates(index, width),
				_font.Pages[0],
				color));
			x += width;
			remaining -= width;
		}
		return fitted;
	}

	[Original(0x007893A4, "unknown_get_texture_glyph_rect")]
	private static Vector4 GetCoordinates(byte index, float width)
	{
		float cellX = (index & 0x0F) * TextureFont.CellSize;
		float cellY = index & 0xF0;
		return new Vector4(
			cellX / TextureFont.PageSize,
			cellY / TextureFont.PageSize,
			(cellX + width) / TextureFont.PageSize,
			(cellY + TextureFont.GlyphHeight) / TextureFont.PageSize);
	}

	[Original(0x00788FA0, "unknown_get_texture_glyph_rect_vertical")]
	private static Vector4 GetVerticalCoordinates(byte index, float width)
	{
		float cellX = (index & 0x0F) * TextureFont.CellSize;
		float cellY = (index & 0xF0) + TextureFont.VerticalTextureOffset;
		return new Vector4(
			cellX / TextureFont.PageSize,
			cellY / TextureFont.PageSize,
			(cellX + width) / TextureFont.PageSize,
			(cellY + TextureFont.GlyphHeight) / TextureFont.PageSize);
	}
}
