namespace PsoBB.Platform.Windows;

/// <summary>
/// One rasterised glyph: the GDI extent and 196 four-level coverage values in top-down order.
/// </summary>
/// <param name="Extent">The measured character width before the fourteen-pixel cap.</param>
/// <param name="Coverage">The coverage values, one per pixel, top row first.</param>
public readonly record struct GdiRasterizedGlyph(int Extent, byte[] Coverage);
