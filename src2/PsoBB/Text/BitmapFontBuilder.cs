using PsoBB.Imaging;

namespace PsoBB.Text;

/// <summary>
/// Packs supplied glyph bitmaps into the client's three-page, four-alpha-level font atlas.
/// </summary>
/// <remarks>
/// The original creates a 14-by-14 device-independent bitmap, asks GDI to draw one character,
/// quantises the result to four alpha levels and copies it into a 16-pixel cell. This builder
/// keeps the cell layout, glyph cap and quantisation so a synthetic bitmap font reaches the same
/// drawing path without an operating-system rasteriser.
/// </remarks>
public sealed class BitmapFontBuilder
{
	private readonly byte[][] _pages =
	[
		new byte[BitmapFont.PageSize * BitmapFont.PageSize * 4],
		new byte[BitmapFont.PageSize * BitmapFont.PageSize * 4],
		new byte[BitmapFont.PageSize * BitmapFont.PageSize * 4],
	];
	private readonly Dictionary<ushort, FontGlyph> _glyphs = [];
	private readonly Dictionary<ushort, int> _cells = [];
	private int _nextCell;

	/// <summary>
	/// Creates a builder for a font.
	/// </summary>
	/// <param name="descriptor">The original font-creation parameters.</param>
	/// <param name="wideAlphabetType">The alphabet type selected for code units at or above 0x100.</param>
	[Original(0x008443BC, "InitializeFontDIBTable_008443bc")]
	public BitmapFontBuilder(FontDescriptor descriptor, int wideAlphabetType = 0)
	{
		Descriptor = descriptor;
		WideAlphabetType = wideAlphabetType;
	}

	/// <summary>Gets the original font-creation parameters.</summary>
	public FontDescriptor Descriptor { get; }

	/// <summary>Gets the alphabet type selected for code units at or above 0x100.</summary>
	public int WideAlphabetType { get; }

	/// <summary>Gets or sets the advance used when a character has no glyph.</summary>
	public int DefaultAdvance { get; set; } = BitmapFont.GlyphHeight;

	/// <summary>Gets or sets the advance used for a space that has no glyph.</summary>
	public int SpaceAdvance { get; set; } = 7;

	/// <summary>Gets or sets the distance between line origins in pixels.</summary>
	public float LineHeight { get; set; } = 20f;

	/// <summary>Gets or sets the padding added by the window-width measurement.</summary>
	public float WindowWidthPadding { get; set; }

	/// <summary>Gets or sets the minimum width returned by the window-width measurement.</summary>
	public float MinimumWindowWidth { get; set; }

	/// <summary>Gets or sets the padding added by the extent measurement.</summary>
	public float ExtentPadding { get; set; }

	/// <summary>
	/// Adds or replaces one glyph bitmap.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <param name="coverage">Fourteen rows of fourteen coverage values, top row first.</param>
	/// <param name="advance">The horizontal advance in pixels.</param>
	/// <returns>The glyph entry that was written.</returns>
	/// <exception cref="ArgumentException">The coverage length is not 196 values.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The advance is outside one byte.</exception>
	/// <exception cref="InvalidOperationException">The atlas has no free cell.</exception>
	[Original(0x007ABFB5, "unknown_initialize_wchar_color_cache")]
	public FontGlyph AddGlyph(char value, ReadOnlySpan<byte> coverage, int advance)
	{
		if (coverage.Length != BitmapFont.GlyphHeight * BitmapFont.GlyphHeight)
			throw new ArgumentException("A glyph bitmap must be 14 by 14 coverage values.", nameof(coverage));
		if (advance is < 0 or > byte.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(advance));
		ushort code = value;
		if (!_cells.TryGetValue(code, out int cell))
		{
			if (_nextCell >= BitmapFont.GlyphCapacity - 1)
				throw new InvalidOperationException("The font atlas is full.");
			cell = _nextCell++;
			_cells.Add(code, cell);
		}
		byte width = (byte)Math.Min(BitmapFont.GlyphHeight, advance);
		int page = cell / BitmapFont.CellsPerPage;
		int cellInPage = cell % BitmapFont.CellsPerPage;
		byte x = (byte)(cellInPage % (BitmapFont.PageSize / BitmapFont.CellSize) * BitmapFont.CellSize);
		byte y = (byte)(cellInPage / (BitmapFont.PageSize / BitmapFont.CellSize) * BitmapFont.CellSize);
		WriteGlyph(page, x, y, coverage);
		FontGlyph glyph = new(code, (byte)advance, width, (byte)page, x, y);
		_glyphs[code] = glyph;
		return glyph;
	}

	/// <summary>
	/// Completes the atlas and returns the immutable font.
	/// </summary>
	/// <returns>The font with its transparent missing-glyph cell.</returns>
	/// <exception cref="ArgumentException">The face name is empty.</exception>
	[Original(0x007AC6E8, "init_font_rendering_stuff")]
	public BitmapFont Build()
	{
		if (string.IsNullOrEmpty(Descriptor.FaceName))
			throw new ArgumentException("The font descriptor needs a face name.", nameof(Descriptor));
		if (DefaultAdvance is < 0 or > byte.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(DefaultAdvance));
		if (SpaceAdvance is < 0 or > byte.MaxValue)
			throw new ArgumentOutOfRangeException(nameof(SpaceAdvance));
		if (LineHeight <= 0f)
			throw new ArgumentOutOfRangeException(nameof(LineHeight));
		int fallbackPage = BitmapFont.PageCount - 1;
		int fallbackCell = BitmapFont.GlyphCapacity - 1;
		int fallbackInPage = fallbackCell % BitmapFont.CellsPerPage;
		byte fallbackX = (byte)(fallbackInPage % (BitmapFont.PageSize / BitmapFont.CellSize) * BitmapFont.CellSize);
		byte fallbackY = (byte)(fallbackInPage / (BitmapFont.PageSize / BitmapFont.CellSize) * BitmapFont.CellSize);
		FontGlyph fallback = new(0, (byte)SpaceAdvance, (byte)Math.Min(BitmapFont.GlyphHeight, SpaceAdvance), (byte)fallbackPage, fallbackX, fallbackY);
		List<TextureImage> pages = new(BitmapFont.PageCount);
		foreach (byte[] page in _pages)
			pages.Add(new TextureImage(BitmapFont.PageSize, BitmapFont.PageSize, page));
		return new BitmapFont(
			Descriptor,
			WideAlphabetType,
			pages,
			_glyphs,
			fallback,
			DefaultAdvance,
			SpaceAdvance,
			LineHeight,
			WindowWidthPadding,
			MinimumWindowWidth,
			ExtentPadding);
	}

	private void WriteGlyph(int page, int originX, int originY, ReadOnlySpan<byte> coverage)
	{
		byte[] pixels = _pages[page];
		for (int row = 0; row < BitmapFont.GlyphHeight; row++)
		{
			for (int column = 0; column < BitmapFont.GlyphHeight; column++)
			{
				byte coverageValue = coverage[row * BitmapFont.GlyphHeight + column];
				byte alpha = coverageValue == 0 ? (byte)0 : coverageValue <= 0x55 ? (byte)0x55 : coverageValue <= 0xAA ? (byte)0xAA : (byte)0xFF;
				int offset = ((originY + row) * BitmapFont.PageSize + originX + column) * 4;
				pixels[offset] = 0xFF;
				pixels[offset + 1] = 0xFF;
				pixels[offset + 2] = 0xFF;
				pixels[offset + 3] = alpha;
			}
		}
	}
}
