namespace PsoBB.Text;

/// <summary>
/// The advance and vertical offset table the client uses for the printable ASCII range of its texture font.
/// </summary>
/// <remarks>The entries are copied from the data image at <c>0x009FCE80</c>; each entry is one pair of single-precision values.</remarks>
public static class TextureFontMetrics
{
	/// <summary>The first character in the table.</summary>
	public const int FirstCharacter = 0x20;

	/// <summary>The last character in the table.</summary>
	public const int LastCharacter = 0x7E;

	[OriginalGlobal(0x009FCE80)]
	private static readonly TextureFontGlyph[] Glyphs =
	[
		new(6.0f, 0.0f), new(6.0f, 0.0f), new(10.0f, 0.0f), new(11.0f, 0.0f),
		new(11.0f, 0.0f), new(15.0f, 0.0f), new(13.0f, 0.0f), new(6.0f, 0.0f),
		new(7.0f, 0.0f), new(7.0f, 0.0f), new(11.0f, 0.0f), new(11.0f, 0.0f),
		new(6.0f, 0.0f), new(11.0f, 0.0f), new(6.0f, 0.0f), new(12.0f, 0.0f),
		new(10.0f, 0.0f), new(10.0f, 0.0f), new(10.0f, 0.0f), new(10.0f, 0.0f),
		new(10.0f, 0.0f), new(10.0f, 0.0f), new(10.0f, 0.0f), new(10.0f, 0.0f),
		new(10.0f, 0.0f), new(10.0f, 0.0f), new(5.0f, 0.0f), new(5.0f, 0.0f),
		new(11.0f, 0.0f), new(11.0f, 0.0f), new(12.0f, 0.0f), new(11.0f, 0.0f),
		new(14.0f, 0.0f), new(13.0f, 0.0f), new(12.0f, 0.0f), new(13.0f, 0.0f),
		new(12.0f, 0.0f), new(11.0f, 0.0f), new(11.0f, 0.0f), new(13.0f, 0.0f),
		new(12.0f, 0.0f), new(9.0f, 0.0f), new(10.0f, 0.0f), new(11.0f, 0.0f),
		new(11.0f, 0.0f), new(13.0f, 0.0f), new(12.0f, 0.0f), new(12.0f, 0.0f),
		new(11.0f, 0.0f), new(13.0f, 0.0f), new(12.0f, 0.0f), new(11.0f, 0.0f),
		new(12.0f, 0.0f), new(12.0f, 0.0f), new(13.0f, 0.0f), new(15.0f, 0.0f),
		new(13.0f, 0.0f), new(14.0f, 0.0f), new(11.0f, 0.0f), new(8.0f, 0.0f),
		new(11.0f, 0.0f), new(8.0f, 0.0f), new(10.0f, 0.0f), new(9.0f, 0.0f),
		new(5.0f, 0.0f), new(11.0f, 0.0f), new(11.0f, 0.0f), new(10.0f, 0.0f),
		new(11.0f, 0.0f), new(10.0f, 0.0f), new(9.0f, 0.0f), new(10.0f, 3.0f),
		new(10.0f, 0.0f), new(5.0f, 0.0f), new(9.0f, 1.0f), new(11.0f, 0.0f),
		new(5.0f, 0.0f), new(13.0f, 0.0f), new(10.0f, 0.0f), new(11.0f, 0.0f),
		new(10.0f, 3.0f), new(10.0f, 3.0f), new(9.0f, 0.0f), new(10.0f, 0.0f),
		new(9.0f, 0.0f), new(10.0f, 0.0f), new(12.0f, 0.0f), new(14.0f, 0.0f),
		new(12.0f, 0.0f), new(12.0f, 3.0f), new(10.0f, 0.0f), new(7.0f, 0.0f),
		new(5.0f, 0.0f), new(7.0f, 0.0f), new(12.0f, 0.0f)
	];

	/// <summary>Gets the table entries in character order.</summary>
	public static IReadOnlyList<TextureFontGlyph> Default => Glyphs;

	/// <summary>
	/// Returns the glyph for a character, or a zero advance when the character is outside the table.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The glyph entry.</returns>
	public static TextureFontGlyph GetGlyph(char value)
	{
		int index = value - FirstCharacter;
		return index >= 0 && index < Glyphs.Length ? Glyphs[index] : default;
	}

	/// <summary>
	/// Returns the horizontal advance for a character, truncated to a byte like the original lookup.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The advance in pixels.</returns>
	[Original(0x00789044)]
	public static int GetAdvance(char value) => (int)GetGlyph(value).Advance & 0xFF;
}
