using System.Numerics;
using PsoBB.Gui;

namespace PsoBB.Text;

/// <summary>
/// Places bitmap-font glyphs into the interface draw list.
/// </summary>
public sealed class TextRenderer
{
	private readonly BitmapFont _font;
	private readonly TextMetrics _metrics;
	private readonly FontTextures _textures;

	/// <summary>
	/// Creates a renderer for a font and its uploaded pages.
	/// </summary>
	/// <param name="font">The font that supplies glyphs.</param>
	/// <param name="textures">The uploaded atlas pages for the font.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ArgumentException">The textures belong to another font.</exception>
	public TextRenderer(BitmapFont font, FontTextures textures)
	{
		ArgumentNullException.ThrowIfNull(font);
		ArgumentNullException.ThrowIfNull(textures);
		if (!ReferenceEquals(font, textures.Font))
			throw new ArgumentException("The atlas textures belong to another font.", nameof(textures));
		_font = font;
		_metrics = new TextMetrics(font);
		_textures = textures;
	}

	/// <summary>Gets the font used by the renderer.</summary>
	public BitmapFont Font => _font;

	/// <summary>
	/// Measures the width the client asks a text window to reserve.
	/// </summary>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <returns>The width in pixels.</returns>
	public int Measure(string? text) => _metrics.MeasureWindowWidth(text);

	/// <summary>
	/// Draws text with wrapping, colour commands and alignment.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The initial colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The line width; zero disables wrapping.</param>
	/// <param name="alignment">The horizontal alignment inside the line width.</param>
	/// <param name="clip">The optional left, top, right and bottom clipping rectangle.</param>
	/// <param name="colors">The optional colour command table.</param>
	[Original(0x0071D58C, "unknown_render_text")]
	public void Draw(
		UiDrawList drawList,
		string? text,
		Vector2 position,
		uint color,
		float maxWidth = 0f,
		TextAlignment alignment = TextAlignment.Left,
		Vector4? clip = null,
		TextColorTable? colors = null)
		=> Render(drawList, text, position, new TextLayoutOptions(maxWidth, alignment, true, color, true, colors), clip);

	/// <summary>
	/// Draws text with newline and space handling but without automatic word wrapping.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="color">The initial colour in 0xAARRGGBB form.</param>
	/// <param name="maxWidth">The optional layout width for alignment; zero uses the text width.</param>
	/// <param name="alignment">The horizontal alignment inside the layout width.</param>
	/// <param name="clip">The optional left, top, right and bottom clipping rectangle.</param>
	/// <param name="colors">The optional colour command table.</param>
	[Original(0x007AB554, "unknown_render_text3")]
	public void DrawAtlas(
		UiDrawList drawList,
		string? text,
		Vector2 position,
		uint color,
		float maxWidth = 0f,
		TextAlignment alignment = TextAlignment.Left,
		Vector4? clip = null,
		TextColorTable? colors = null)
		=> Render(drawList, text, position, new TextLayoutOptions(maxWidth, alignment, false, color, false, colors), clip);

	/// <summary>
	/// Draws an eight-direction black outline and a white or supplied final pass.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="text">The text, including any locale or colour commands.</param>
	/// <param name="right">The right edge of the text in client pixels.</param>
	/// <param name="color">The visible colour in 0xAARRGGBB form.</param>
	/// <param name="outlineColor">The outline colour in 0xAARRGGBB form.</param>
	/// <param name="offset">The outline distance in pixels.</param>
	/// <param name="clip">The optional left, top, right and bottom clipping rectangle.</param>
	[Original(0x00783F50, "DrawOutlinedText_00783f50")]
	public void DrawOutlined(
		UiDrawList drawList,
		string? text,
		Vector2 right,
		uint color,
		uint outlineColor = 0xFF000000,
		float offset = 2f,
		Vector4? clip = null)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		float x = right.X - _metrics.MeasureWindowWidth(text);
		float y = right.Y;
		DrawAtlas(drawList, text, new Vector2(x - offset, y - offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x, y - offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x + offset, y - offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x - offset, y), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x + offset, y), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x - offset, y + offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x, y + offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x + offset, y + offset), outlineColor, 0f, TextAlignment.Left, clip);
		DrawAtlas(drawList, text, new Vector2(x, y), color, 0f, TextAlignment.Left, clip);
	}

	private void Render(UiDrawList drawList, string? text, Vector2 position, TextLayoutOptions options, Vector4? clip)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		TextLayout layout = TextLayout.Create(_font, text, options);
		foreach (PlacedGlyph placed in layout.Glyphs)
		{
			if (placed.Glyph.Width == 0)
				continue;
			UiQuad quad = CreateQuad(placed, position);
			if (clip is not null)
				quad = quad.Clip(clip);
			drawList.Add(quad);
		}
	}

	/// <summary>
	/// Draws a layout that has already been measured.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="layout">The measured layout.</param>
	/// <param name="position">The top-left position in client pixels.</param>
	/// <param name="clip">The optional left, top, right and bottom clipping rectangle.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public void DrawLayout(UiDrawList drawList, TextLayout layout, Vector2 position, Vector4? clip = null)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ArgumentNullException.ThrowIfNull(layout);
		foreach (PlacedGlyph placed in layout.Glyphs)
		{
			if (placed.Glyph.Width == 0)
				continue;
			UiQuad quad = CreateQuad(placed, position);
			if (clip is not null)
				quad = quad.Clip(clip);
			drawList.Add(quad);
		}
	}

	[Original(0x007AC200, "unknown_set_text_primitive_values")]
	private UiQuad CreateQuad(PlacedGlyph placed, Vector2 origin)
	{
		FontGlyph glyph = placed.Glyph;
		return new UiQuad(
			origin + placed.Position,
			new Vector2(glyph.Width, BitmapFont.GlyphHeight),
			glyph.GetTextureCoordinates(BitmapFont.PageSize, BitmapFont.GlyphHeight),
			_textures[glyph.Page],
			placed.Color);
	}
}
