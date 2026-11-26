using PsoBB.Imaging;

namespace PsoBB.Text;

/// <summary>
/// A decoded bitmap font: three 256-pixel atlas pages, one glyph entry per character and the
/// metrics used by the text layout.
/// </summary>
/// <remarks>
/// The original client rasterises glyphs with GDI into a 14-pixel cell, places them on a
/// 16-pixel grid across three 256-by-256 textures and stores only four alpha levels. This type
/// keeps that atlas shape and substitutes a supplied bitmap for the operating-system rasteriser.
/// </remarks>
public sealed class BitmapFont
{
	/// <summary>The glyph height in pixels.</summary>
	public const int GlyphHeight = 14;

	/// <summary>The atlas cell pitch in pixels.</summary>
	public const int CellSize = 16;

	/// <summary>The width and height of one atlas page in pixels.</summary>
	public const int PageSize = 256;

	/// <summary>The number of atlas pages.</summary>
	public const int PageCount = 3;

	/// <summary>The number of cells in one atlas page.</summary>
	public const int CellsPerPage = (PageSize / CellSize) * (PageSize / CellSize);

	/// <summary>The number of cells in the atlas.</summary>
	public const int GlyphCapacity = PageCount * CellsPerPage;

	private readonly IReadOnlyDictionary<ushort, FontGlyph> _glyphs;

	/// <summary>
	/// Creates a font from completed pages and glyph entries.
	/// </summary>
	/// <param name="descriptor">The original font-creation parameters.</param>
	/// <param name="wideAlphabetType">The alphabet type selected for code units at or above 0x100.</param>
	/// <param name="pages">The three atlas pages.</param>
	/// <param name="glyphs">The glyph entries by code unit.</param>
	/// <param name="fallbackGlyph">The transparent glyph returned for a missing character.</param>
	/// <param name="defaultAdvance">The advance used when a character has no glyph.</param>
	/// <param name="spaceAdvance">The advance used for a space that has no glyph.</param>
	/// <param name="lineHeight">The distance between line origins in pixels.</param>
	/// <param name="windowWidthPadding">The padding added by the window-width measurement.</param>
	/// <param name="minimumWindowWidth">The minimum width returned by the window-width measurement.</param>
	/// <param name="extentPadding">The padding added by the extent measurement.</param>
	/// <exception cref="ArgumentNullException">A collection is null.</exception>
	/// <exception cref="ArgumentException">The page count or a page size is wrong.</exception>
	/// <exception cref="ArgumentOutOfRangeException">A metric is negative.</exception>
	public BitmapFont(
		FontDescriptor descriptor,
		int wideAlphabetType,
		IReadOnlyList<TextureImage> pages,
		IReadOnlyDictionary<ushort, FontGlyph> glyphs,
		FontGlyph fallbackGlyph,
		int defaultAdvance,
		int spaceAdvance,
		float lineHeight,
		float windowWidthPadding,
		float minimumWindowWidth,
		float extentPadding)
	{
		ArgumentNullException.ThrowIfNull(pages);
		ArgumentNullException.ThrowIfNull(glyphs);
		if (pages.Count != PageCount)
			throw new ArgumentException("A font needs exactly three atlas pages.", nameof(pages));
		foreach (TextureImage page in pages)
		{
			ArgumentNullException.ThrowIfNull(page);
			if (page.Width != PageSize || page.Height != PageSize)
				throw new ArgumentException("Every atlas page must be 256 by 256 pixels.", nameof(pages));
		}
		if (defaultAdvance < 0)
			throw new ArgumentOutOfRangeException(nameof(defaultAdvance));
		if (spaceAdvance < 0)
			throw new ArgumentOutOfRangeException(nameof(spaceAdvance));
		if (lineHeight <= 0f)
			throw new ArgumentOutOfRangeException(nameof(lineHeight));
		Descriptor = descriptor;
		WideAlphabetType = wideAlphabetType;
		Pages = pages;
		_glyphs = glyphs;
		FallbackGlyph = fallbackGlyph;
		DefaultAdvance = defaultAdvance;
		SpaceAdvance = spaceAdvance;
		LineHeight = lineHeight;
		WindowWidthPadding = windowWidthPadding;
		MinimumWindowWidth = minimumWindowWidth;
		ExtentPadding = extentPadding;
	}

	/// <summary>Gets the original font-creation parameters.</summary>
	public FontDescriptor Descriptor { get; }

	/// <summary>Gets the alphabet type selected for code units at or above 0x100.</summary>
	public int WideAlphabetType { get; }

	/// <summary>Gets the three atlas pages.</summary>
	public IReadOnlyList<TextureImage> Pages { get; }

	/// <summary>Gets the glyph entries by code unit.</summary>
	public IReadOnlyDictionary<ushort, FontGlyph> Glyphs => _glyphs;

	/// <summary>Gets the transparent glyph returned for a missing character.</summary>
	public FontGlyph FallbackGlyph { get; }

	/// <summary>Gets the advance used when a character has no glyph.</summary>
	public int DefaultAdvance { get; }

	/// <summary>Gets the advance used for a space that has no glyph.</summary>
	public int SpaceAdvance { get; }

	/// <summary>Gets the distance between line origins in pixels.</summary>
	public float LineHeight { get; }

	/// <summary>Gets the padding added by the window-width measurement.</summary>
	public float WindowWidthPadding { get; }

	/// <summary>Gets the minimum width returned by the window-width measurement.</summary>
	public float MinimumWindowWidth { get; }

	/// <summary>Gets the padding added by the extent measurement.</summary>
	public float ExtentPadding { get; }

	/// <summary>
	/// Returns the glyph for a code unit, or the transparent fallback glyph when it has none.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The glyph entry.</returns>
	[Original(0x007ABAA5, "unknown_get_wchar_from_cache")]
	public FontGlyph GetGlyph(char value)
	{
		ushort code = value;
		return _glyphs.TryGetValue(code, out FontGlyph glyph) ? glyph : FallbackGlyph;
	}

	/// <summary>
	/// Returns the horizontal advance for a code unit.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The advance in pixels.</returns>
	[Original(0x008441E0, "unknown_get_text_extent_point_32")]
	public int GetAdvance(char value)
	{
		if (_glyphs.TryGetValue(value, out FontGlyph glyph))
			return glyph.Advance;
		return value == ' ' ? SpaceAdvance : DefaultAdvance;
	}

	/// <summary>
	/// Returns the drawn extent for a code unit, capped at fourteen pixels.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The extent in pixels.</returns>
	public int GetExtent(char value) => Math.Min(GlyphHeight, GetAdvance(value));

	/// <summary>
	/// Returns the alphabet type used to select a font face for a code unit.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>Zero for single-byte characters and the locale alphabet type otherwise.</returns>
	[Original(0x00841A44, "get_locale_alphabet_type")]
	public int GetAlphabetType(char value) => value < 0x100 ? 0 : WideAlphabetType;
}
