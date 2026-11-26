# Fonts and text

The original client does not ship a font resource. It creates a fourteen-pixel logical font
through GDI at start-up, rasterises one character at a time into a 14-by-14 device-independent
bitmap and packs the result into a small glyph atlas.

## Original format

| Item | Value | Evidence |
| --- | --- | --- |
| Glyph cell | 14 by 14 pixels, 16-pixel atlas pitch | `write_one_char_to_DIB_00844138`, `InitializeFontDIBTable_008443BC` |
| Atlas pages | 3 pages of 256 by 256 pixels | `init_font_rendering_stuff_007AC6E8` |
| Cache entries | 768 entries; two hashed probes and two aging scans | `unknown_get_wchar_from_cache_007ABAA5` |
| Glyph width | measured character width, capped at 14 pixels for the atlas | `unknown_get_wchar_from_cache_007ABAA5` |
| Alpha levels | four levels, stored as A4R4G4B4 white | `unknown_initialize_wchar_color_cache_007ABFB5` |
| Thresholds | 0x555555 and 0xAAAAAA over the DIB pixel | `unknown_initialize_wchar_color_cache_007ABFB5` |
| Space advance | 7 pixels | `CalculateTextExtent_007AC43C` |
| Line advance | 20 pixels | `unknown_render_text3_007AB554` data image at `0x0097DB78` |
| Outline offsets | -2 and +2 pixels | data image at `0x00979B18` and `0x00979B1C` |
| Texture UV scale | 256 pixels, glyph height 14 | data image at `0x0097DB60` through `0x0097DB6C` |
| Missing glyph | last cache entry, seven pixels wide and transparent | `unknown_get_wchar_from_cache_007ABAA5` |

Each glyph entry stores the UTF-16 code unit, the sixteen-bit measured width, the drawing
extent, the update counter, the atlas page and the cell origin. The original table is exposed
as `FontGlyph`; the fixed atlas shape is exposed as `BitmapFont` and `BitmapFontBuilder`.

The atlas is white with alpha, so a glyph is tinted by the interface colour supplied at draw
time. The original maps the four alpha levels to `0x0FFF`, `0x5FFF`, `0xAFFF` and `0xFFFF`
(A4R4G4B4). The port stores the equivalent 0, 85, 170 and 255 levels in a BGRA `TextureImage`.

## Text functions

| Original address | Original role | Port |
| --- | --- | --- |
| `0x007AC580` | locale and colour prefix parser | `TextPrefix.Skip` |
| `0x007AC264` | extent with each glyph capped at 14 | `TextMetrics.MeasureExtent` |
| `0x007AC344` | window width with padding and minimum | `TextMetrics.MeasureWindowWidth` |
| `0x007AC43C` | byte-oriented Shift-JIS measurement | `TextMetrics.MeasureEncodedExtent` |
| `0x007AC24C` | one-character advance | `TextMetrics.GetCharacterAdvance` |
| `0x0071D4C0` | next-word line check | `TextMetrics.NextWordFits` |
| `0x0071D58C` | wrapped text renderer | `TextRenderer.Draw` and `TextLayout` |
| `0x007AB554` | atlas text renderer | `TextRenderer.DrawAtlas` |
| `0x007AC200` | glyph primitive rectangle | `TextRenderer.CreateQuad` |
| `0x007AC1A0` | glyph texture coordinates | `FontGlyph.GetTextureCoordinates` |
| `0x00783F50` | eight-direction outlined text | `TextRenderer.DrawOutlined` |
| `0x007ABAA5` | glyph cache lookup | `BitmapFont.GetGlyph` |
| `0x007ABFB5` | glyph atlas write | `BitmapFontBuilder.AddGlyph` |
| `0x008441E0` | character extent query | `BitmapFont.GetAdvance` |
| `0x00841A44` | alphabet type for a code unit | `BitmapFont.GetAlphabetType` |
| `0x00841A10` | five-face lookup | `FontFaceTable.GetFace` |
| `0x00841A34` | face-index fallback | `FontDescriptor.GetValidFaceIndex` |

`unknown_render_text` measures each glyph with the character extent, wraps when the next glyph
would cross the line width, and after a space checks whether the following word still fits.
`unknown_render_text3` handles newlines and spaces but does not word-wrap automatically. The
outlined helper subtracts the measured width from its horizontal parameter, draws eight black
copies at the two-pixel offsets and then the visible pass.

## Port boundary

`BitmapFontBuilder` replaces the GDI rasteriser with caller-supplied 14-by-14 coverage
bitmaps. `FontTextures` uploads the three `TextureImage` pages through `IRenderer`, and
`TextRenderer` submits one `UiQuad` per glyph to `UiDrawList`. No operating-system font, device
context or platform type is used by the portable library.

Limitations: the exact GDI face metrics, the five registry-provided face names, the game's
colour-table contents and the separate Japanese XVM texture-font path
(`unknown_render_texturejapanese_xvm_font2_0071D924`) are supplied by the host or remain
outside this port. The atlas cache policy is represented by the fixed three-page layout; the
runtime texture-update counter is not needed when a font is built once.
