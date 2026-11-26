namespace PsoBB.Text;

/// <summary>
/// The font-creation parameters the original client reads before it builds its glyph atlas.
/// </summary>
/// <param name="Weight">The requested font weight.</param>
/// <param name="Charset">The requested character set.</param>
/// <param name="OutputPrecision">The requested output precision.</param>
/// <param name="ClipPrecision">The requested clipping precision.</param>
/// <param name="Quality">The requested rasterisation quality.</param>
/// <param name="PitchAndFamily">The requested pitch and family flags.</param>
/// <param name="FaceName">The typeface name.</param>
public readonly record struct FontDescriptor(
	int Weight,
	int Charset,
	int OutputPrecision,
	int ClipPrecision,
	int Quality,
	int PitchAndFamily,
	string FaceName)
{
	/// <summary>
	/// Returns the face index, falling back to the second face when the requested index is outside the five-face table.
	/// </summary>
	/// <param name="index">The requested face index.</param>
	/// <returns>The valid face index.</returns>
	[Original(0x00841A34, "get_valid_font_handle_index")]
	public static int GetValidFaceIndex(int index) => index is >= 0 and < 5 ? index : 1;
}
