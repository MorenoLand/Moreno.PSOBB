namespace PsoBB.Text;

/// <summary>
/// Chooses the texture-font atlas for a locale.
/// </summary>
/// <remarks>The data image stores <c>TextureJapanese.gvm</c>, <c>TextureGerman.gvm</c>, <c>TextureFrench.gvm</c>, <c>TextureSpanish.gvm</c>, <c>TextureChineseS.gvm</c> and <c>TextureEnglish.gvm</c>. <c>0x0078E1C0</c> copies the stem up to the dot, appends the <c>"."</c> at <c>0x0096B740</c> and the <c>"xvm"</c> suffix at <c>0x0092B2B8</c>, so the effective request is the lower-case <c>.xvm</c> entry in <c>data.gsl</c>.</remarks>
public static class TextureFontAtlasFile
{
	/// <summary>
	/// Returns the archive name the original client requests for a locale.
	/// </summary>
	/// <param name="locale">The locale.</param>
	/// <returns>The exact data-image name.</returns>
	public static string GetOriginalName(GameTextLocale locale) => locale switch
	{
		GameTextLocale.Japanese => "TextureJapanese.gvm",
		GameTextLocale.German => "TextureGerman.gvm",
		GameTextLocale.French => "TextureFrench.gvm",
		GameTextLocale.Spanish => "TextureSpanish.gvm",
		GameTextLocale.ChineseSimplified or GameTextLocale.ChineseTraditional => "TextureChineseS.gvm",
		_ => "TextureEnglish.gvm",
	};

	/// <summary>
	/// Returns the shipped archive entry name after the <c>0x0078E1C0</c> extension rewrite.
	/// </summary>
	/// <param name="locale">The locale.</param>
	/// <returns>The lower-case archive entry name.</returns>
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
