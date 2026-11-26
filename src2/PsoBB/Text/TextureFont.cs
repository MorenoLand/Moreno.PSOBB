using PsoBB.Graphics;

namespace PsoBB.Text;

/// <summary>
/// The XVM texture-font atlas and its per-character metrics.
/// </summary>
/// <remarks>The atlas places a character at column <c>code &amp; 0xF</c> and row <c>code &amp; 0xF0</c> of a sixteen-pixel grid; the metric table supplies the advance and vertical offset.</remarks>
public sealed class TextureFont : IDisposable
{
	/// <summary>The atlas cell pitch in pixels.</summary>
	public const int CellSize = 16;

	/// <summary>The drawn glyph height in pixels.</summary>
	public const float GlyphHeight = 13f;

	/// <summary>The distance between line origins in pixels.</summary>
	public const float LineHeight = 20f;

	/// <summary>The atlas page width and height in pixels.</summary>
	public const float PageSize = 256f;

	private readonly ITexture[] _pages;
	private readonly IReadOnlyList<TextureFontGlyph> _glyphs;
	private bool _disposed;

	/// <summary>
	/// Creates a texture font over uploaded atlas pages and a metric table.
	/// </summary>
	/// <param name="pages">The uploaded atlas pages.</param>
	/// <param name="glyphs">The metric table, starting at space.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ArgumentException">The page list is empty.</exception>
	public TextureFont(IReadOnlyList<ITexture> pages, IReadOnlyList<TextureFontGlyph> glyphs)
	{
		ArgumentNullException.ThrowIfNull(pages);
		ArgumentNullException.ThrowIfNull(glyphs);
		if (pages.Count == 0)
			throw new ArgumentException("A texture font needs at least one atlas page.", nameof(pages));
		_pages = [.. pages];
		_glyphs = [.. glyphs];
	}

	/// <summary>Gets the uploaded atlas pages.</summary>
	public IReadOnlyList<ITexture> Pages => _pages;

	/// <summary>Gets the metric table in character order.</summary>
	public IReadOnlyList<TextureFontGlyph> Glyphs => _glyphs;

	/// <summary>Gets a value indicating whether the font has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Returns the glyph for a character.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The glyph entry, or a zero advance when the table has no entry.</returns>
	public TextureFontGlyph GetGlyph(char value)
	{
		int index = value - TextureFontMetrics.FirstCharacter;
		return index >= 0 && index < _glyphs.Count ? _glyphs[index] : default;
	}

	/// <summary>
	/// Releases every atlas page. Repeated calls do nothing.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (ITexture page in _pages)
			page.Dispose();
	}
}
