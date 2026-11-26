namespace PsoBB.Text;

/// <summary>
/// Options for laying out a string with a bitmap font.
/// </summary>
/// <param name="MaxWidth">The line width in pixels; zero disables wrapping.</param>
/// <param name="Alignment">The horizontal alignment inside the layout width.</param>
/// <param name="WordWrap">Whether a word that crosses the line limit moves to the next line.</param>
/// <param name="Color">The initial text colour in 0xAARRGGBB form.</param>
/// <param name="ApplyColorPrefixes">Whether tab colour commands change the glyph colour.</param>
/// <param name="ColorTable">The table used by tab colour commands, or <see langword="null"/>.</param>
public readonly record struct TextLayoutOptions(
	float MaxWidth = 0f,
	TextAlignment Alignment = TextAlignment.Left,
	bool WordWrap = true,
	uint Color = 0xFFFFFFFF,
	bool ApplyColorPrefixes = true,
	TextColorTable? ColorTable = null)
{
	/// <summary>Gets the default layout options.</summary>
	public static TextLayoutOptions Default => new(0f, TextAlignment.Left, true, 0xFFFFFFFF, true, null);
}
