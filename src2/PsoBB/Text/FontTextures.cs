using PsoBB.Graphics;

namespace PsoBB.Text;

/// <summary>
/// Uploads a bitmap font's atlas pages to a renderer and owns the resulting texture handles.
/// </summary>
public sealed class FontTextures : IDisposable
{
	private readonly ITexture[] _pages;
	private bool _disposed;

	/// <summary>
	/// Creates one renderer texture per atlas page.
	/// </summary>
	/// <param name="font">The font whose pages are uploaded.</param>
	/// <param name="renderer">The renderer that creates the textures.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public FontTextures(BitmapFont font, IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(font);
		ArgumentNullException.ThrowIfNull(renderer);
		Font = font;
		_pages = new ITexture[font.Pages.Count];
		for (int index = 0; index < font.Pages.Count; index++)
		{
			var page = font.Pages[index];
			_pages[index] = renderer.CreateTexture(page.Width, page.Height, page.Pixels.Span, page.Stride);
		}
	}

	/// <summary>Gets the font whose pages were uploaded.</summary>
	public BitmapFont Font { get; }

	/// <summary>Gets the number of uploaded pages.</summary>
	public int Count => _pages.Length;

	/// <summary>
	/// Gets the texture for an atlas page.
	/// </summary>
	/// <param name="page">The page index.</param>
	/// <returns>The renderer texture.</returns>
	public ITexture this[int page] => _pages[page];

	/// <summary>
	/// Releases the renderer textures this font created.
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
