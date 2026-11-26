using PsoBB.Graphics;
using PsoBB.Text;

namespace PsoBB.Platform.Windows;

/// <summary>
/// A bitmap font whose glyphs are rasterised by GDI, with its atlas uploaded and a text renderer ready for the host.
/// </summary>
/// <remarks>
/// The factory reads the configured face name, creates the five-face table, rasterises the requested characters into the portable atlas and uploads the three pages through the supplied renderer.
/// </remarks>
public sealed class GdiBitmapFont : IDisposable
{
	private static readonly char[] AsciiCharacters = CreateAsciiCharacters();
	private readonly FontTextures _textures;

	private GdiBitmapFont(BitmapFont font, IReadOnlyList<FontDescriptor> faces, FontTextures textures)
	{
		Font = font;
		Faces = faces;
		_textures = textures;
		Text = new TextRenderer(font, textures);
	}

	/// <summary>Gets the completed font and its three atlas pages.</summary>
	public BitmapFont Font { get; }

	/// <summary>Gets the five descriptors used for rasterisation.</summary>
	public IReadOnlyList<FontDescriptor> Faces { get; }

	/// <summary>Gets the uploaded atlas pages.</summary>
	public FontTextures Textures => _textures;

	/// <summary>Gets the draw and measure surface for the font.</summary>
	public TextRenderer Text { get; }

	/// <summary>
	/// Builds the printable ASCII font from the configured face name and uploads its pages.
	/// </summary>
	/// <param name="renderer">The renderer that creates the three atlas textures.</param>
	/// <returns>The completed font.</returns>
	public static GdiBitmapFont Create(IRenderer renderer) => Create(renderer, AsciiCharacters);

	/// <summary>
	/// Builds the requested characters from the configured face name and uploads the atlas pages.
	/// </summary>
	/// <param name="renderer">The renderer that creates the three atlas textures.</param>
	/// <param name="characters">The UTF-16 code units to rasterise.</param>
	/// <param name="keyPath">The registry key path beneath the current user.</param>
	/// <param name="valueName">The registry value that holds the face name.</param>
	/// <param name="wideAlphabetType">The alphabet type used for code units at or above 0x100.</param>
	/// <returns>The completed font.</returns>
	public static GdiBitmapFont Create(
		IRenderer renderer,
		IEnumerable<char> characters,
		string keyPath = GdiFontFaces.RegistryKeyPath,
		string valueName = GdiFontFaces.FaceValueName,
		int wideAlphabetType = 0)
	{
		string faceName = GdiFontFaces.ReadFaceName(keyPath, valueName);
		return Create(renderer, GdiFontFaces.CreateDescriptors(faceName), characters, wideAlphabetType);
	}

	/// <summary>
	/// Builds the requested characters from supplied descriptors and uploads the atlas pages.
	/// </summary>
	/// <param name="renderer">The renderer that creates the three atlas textures.</param>
	/// <param name="faces">The five descriptors in image order.</param>
	/// <param name="characters">The UTF-16 code units to rasterise.</param>
	/// <param name="wideAlphabetType">The alphabet type used for code units at or above 0x100.</param>
	/// <returns>The completed font.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ArgumentException">The descriptor table does not contain five faces.</exception>
	/// <exception cref="InvalidOperationException">The atlas has no free cell.</exception>
	public static GdiBitmapFont Create(IRenderer renderer, IReadOnlyList<FontDescriptor> faces, IEnumerable<char> characters, int wideAlphabetType = 0)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(characters);
		using GdiGlyphRasterizer rasterizer = new(faces, wideAlphabetType);
		BitmapFontBuilder builder = new(faces[0], wideAlphabetType);
		foreach (char value in characters)
			rasterizer.AddGlyph(builder, value);
		BitmapFont font = builder.Build();
		FontTextures textures = new(font, renderer);
		return new GdiBitmapFont(font, faces, textures);
	}

	/// <summary>Releases the three uploaded atlas textures.</summary>
	public void Dispose() => _textures.Dispose();

	private static char[] CreateAsciiCharacters()
	{
		char[] characters = new char[0x5F];
		for (int index = 0; index < characters.Length; index++)
			characters[index] = (char)(0x20 + index);
		return characters;
	}
}
