using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Imaging;

namespace PsoBB.Text;

/// <summary>
/// Loads a locale's XVM texture-font atlas and uploads every page it contains.
/// </summary>
public static class TextureFontAtlas
{
	/// <summary>
	/// Reads the locale's atlas archive and uploads its pages.
	/// </summary>
	/// <param name="files">The data files that resolve the archive.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <param name="locale">The locale whose atlas is loaded.</param>
	/// <returns>The texture font over the uploaded pages and the ASCII metric table.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">The locale's atlas archive is absent.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed.</exception>
	[Original(0x007933BC, "ensure_texture_font_assets")]
	public static TextureFont Load(IDataFiles files, IRenderer renderer, GameTextLocale locale)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		string name = TextureFontAtlasFile.GetFileName(locale);
		if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
			throw new FileNotFoundException($"No texture-font atlas named '{name}' is present.", name);
		IReadOnlyList<XvmTexture> textures = XvmArchive.Read(data.Span);
		ITexture[] pages = new ITexture[textures.Count];
		try
		{
			for (int index = 0; index < textures.Count; index++)
			{
				XvmTexture texture = textures[index];
				pages[index] = renderer.CreateTexture(texture.Width, texture.Height, texture.Image.Pixels.Span, texture.Image.Stride);
			}
			return new TextureFont(pages, TextureFontMetrics.Default);
		}
		catch
		{
			foreach (ITexture page in pages)
				page?.Dispose();
			throw;
		}
	}
}
