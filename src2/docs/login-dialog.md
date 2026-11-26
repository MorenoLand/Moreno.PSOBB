# Account panel and texture font atlas

## Rows

`0x006FEDE0` reaches `0x007617E8`, which creates the account window through `0x00761C48`. The
window takes its title from unitxt list 41 string 2 and its four rows from strings 3 through 6:

| Row data | unitxt list 41 | Text | Action in `0x007621E4` |
| --- | --- | --- | --- |
| 0 | 3 | Start Game | state 9, closes the account panel |
| 1 | 4 | Exit Game | state 5 |
| 2 | 5 | Patch Download | state 7 |
| 3 | 6 | Register UserID | state 3 |

`0x00735C90` appends each row with flags `0x0D`. The flag bit `0x2` marks the rows selectable,
so the later hint row, appended by `0x00735DB8` with flags `0x09`, is not selectable. The hint
text is the data-image literal at `0x00974EBC` (`[%s]`) with colour `0xFFFFCC33`; the row data
value is 4. `0x007365F4` returns the selected row's data value.

`0x0072DB60` stores the copied row text at item `+0x20`. `0x0072D9B4` draws a row, and its item
flag `0x4` branch is the only caller of the XVM texture-font renderer `0x0071D924`. The account
rows have item flags `0x41` (enabled and coloured), so their text takes the bitmap-font renderer
`0x0071D58C`; they do not use the texture-font atlas.

The header label is created by the list base `0x0073566C` through `0x00761320` and `0x00760A28`
with unitxt list 41 string 2. The panel rectangle passed in the online branch is the four floats
at `0x00974E08` (210, 340, 220, 120); the first twenty pixels hold the header and the remaining
hundred hold the four rows and hint. The data-image hint is `[%s]`; the retail frame shows `[d]`,
so `LoginDialog.DefaultHintKey` is `d` and `DefaultHint` is `[d]`.

`0x006FF0D4` is not the account dialog list. It calls the scene draw pair `0x004D28A4` and
`0x004D2968` and drives the scene-2 selector element table `0x009CFF00`: header element 15 at
(192, 308), row elements 11 through 14 at (193, 300), (193, 332), (193, 364) and (193, 396),
and selected-row element 10 at (193, 338) with frame 10 of table `0x009CFB60`. Those frames
belong to the scene-2 selector object, so `LoginDialog` exposes their addresses and positions
as constants and a `SelectorFrameDraw` hook instead of drawing them twice.

## Atlas

`0x0079324C` selects the locale atlas from these data-image names:

| Locale code | Stored name | Shipped archive entry |
| --- | --- | --- |
| 0 Japanese | `TextureJapanese.gvm` | `texturejapanese.xvm` |
| 2 German | `TextureGerman.gvm` | `texturegerman.xvm` |
| 3 French | `TextureFrench.gvm` | `texturefrench.xvm` |
| 4 Spanish | `TextureSpanish.gvm` | `texturespanish.xvm` |
| 5, 6 Chinese | `TextureChineseS.gvm` | not present in the shipped archive |
| anything else, including 1 English | `TextureEnglish.gvm` | `textureenglish.xvm` |

`0x0078E1C0` rewrites each stored name before lookup: it keeps the stem up to the dot and
appends `"."` from `0x0096B740` and `"xvm"` from `0x0092B2B8`, so no `.gvm` entry is requested
from the shipped archive. The English and Japanese archives contain five pages: three 256 by
256, one 128 by 128 and one 64 by 64.
The shared metric table is loaded at `0x009FCE80`; each entry from `0x20` through `0x7F` has
one advance and one vertical offset. `0x00789044` returns the advance, and
`0x007893A4` uses the character's low nibble times sixteen as the cell column and the high
nibble as the cell row in a 256-pixel page.

## Port boundary

`TextureFontMetrics`, `TextureFont`, `TextureFontSurface` and `TextureFontAtlas` cover the ASCII
texture-font path: the metric table, the cell quad, advancing, remaining-width clipping, the
vertical texture row, atlas loading, texture binding and release. Wide glyphs and the
page-selection rule above code unit `0x00FF` are not established, and the window clip
`0x0071BA64`, the anchor scale `0x0071BBB4` and the projection `0x0082B440` remain host
transforms; the account rows do not use that path.

The account panel itself is `PsoBB.Scenes.LoginDialog`: the list 41 string 2 header label, four
enabled rows, a disabled yellow hint, wrapping selection, the data-value confirm mapping and
close. Data value 0 closes the account panel to start the game; it is not a separate Exit
action. The scene-2 selector frames are reached through `SelectorFrameDraw`; their proven
addresses and positions are constants on `LoginDialog`.
