namespace PsoBB.Text;

/// <summary>
/// One character in the XVM texture font: its advance and its vertical offset inside the sixteen-pixel cell.
/// </summary>
/// <param name="Advance">The horizontal distance to the next character in pixels.</param>
/// <param name="Top">The vertical offset from the text origin to the glyph top in pixels.</param>
public readonly record struct TextureFontGlyph(float Advance, float Top);
