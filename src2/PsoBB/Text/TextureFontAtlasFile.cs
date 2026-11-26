namespace PsoBB.Text;

/// <summary>
/// Chooses the XVM texture-font atlas for a locale.
/// </summary>
/// <remarks>The original passes <c>TextureJapanese.gvm</c>, <c>TextureGerman.gvm</c>, <c>TextureFrench.gvm</c>, <c>TextureSpanish.gvm</c>, <c>TextureChineseS.gvm</c> or <c>TextureEnglish.gvm</c> to its texture loader; the shipped archive stores the same surfaces under lower-case <c>.xvm</c> names.</remarks>
public static class TextureFontAtlasFile
{
	/// <summary>
	/// Returns the archive name of the locale's texture-font atlas.
	/// </summary>
	/// <param name="locale">The locale.</param>
	/// <returns>The lower-case archive entry name.</returns>
	[Original(0x0079324C, "select_texture_font_atlas")]
	public static string GetFileName(GameTextLocale locale) => locale switch
	{
		GameTextLocale.Japanese => "texturejapanese.xvm",
		GameTextLocale.German => "texturegerman.xvm",
		GameTextLocale.French => "texturefrench.xvm",
		GameTextLocale.Spanish => "texturespanish.xvm",
		GameTextLocale.ChineseSimplified or GameTextLocale.ChineseTraditional => "texturechineses.xvm",
		_ => "textureenglish.xvm",
	};
}
