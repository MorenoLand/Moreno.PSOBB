using System.Numerics;

namespace PsoBB.Text;

/// <summary>
/// A glyph placed at a position relative to the text origin.
/// </summary>
/// <param name="Glyph">The atlas glyph.</param>
/// <param name="Position">The top-left position in pixels.</param>
/// <param name="Line">The zero-based line index.</param>
/// <param name="Color">The colour in 0xAARRGGBB form.</param>
public readonly record struct PlacedGlyph(FontGlyph Glyph, Vector2 Position, int Line, uint Color);
