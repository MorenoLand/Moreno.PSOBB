using System.Numerics;

namespace PsoBB.Text;

/// <summary>
/// One glyph in the three-page font atlas, with its advance and drawing rectangle.
/// </summary>
/// <param name="Code">The UTF-16 code unit the glyph represents.</param>
/// <param name="Advance">The horizontal advance in pixels.</param>
/// <param name="Width">The drawn width in pixels, capped at fourteen.</param>
/// <param name="Page">The atlas page index.</param>
/// <param name="X">The left edge in atlas pixels.</param>
/// <param name="Y">The top edge in atlas pixels.</param>
public readonly record struct FontGlyph(ushort Code, byte Advance, byte Width, byte Page, byte X, byte Y)
{
	/// <summary>
	/// Returns the texture rectangle for the glyph in normalised atlas coordinates.
	/// </summary>
	/// <param name="atlasSize">The width and height of one atlas page in pixels.</param>
	/// <param name="height">The glyph height in pixels.</param>
	/// <returns>The left, top, right and bottom texture coordinates.</returns>
	[Original(0x007AC1A0, "put_wchar_in_texture_for_rendering")]
	public Vector4 GetTextureCoordinates(float atlasSize, int height)
	{
		float left = X / atlasSize;
		float top = Y / atlasSize;
		return new Vector4(left, top, (X + Width) / atlasSize, (Y + height) / atlasSize);
	}
}
