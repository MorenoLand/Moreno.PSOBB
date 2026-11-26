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

The account list draw is `0x007352D0`. It calls `0x00710F80` for the window frame, `0x0072A648`
for child windows, `0x007353E8` for the selected row and `0x00735428` for the normal rows. The
row routine `0x007120EC` binds `dword_A983D8` (the `f256_hyouji` UI texture) and draws three
horizontal slices: left 18 pixels from UV `(151, 57)`, middle 30 pixels from UV `(169, 57)` and
right 16 pixels from UV `(183, 57)`, with the selected row using V `76` instead of `57`. The
window frame `0x00710F80` draws the nine-slice background and border; the header child is
`0x0073566C` → `0x00761320` → `0x00761390`.

`0x006FF0D4` is the scene-2 selector object, not the account list. It drives the element table
`0x009CFF00`: element 15 at (192, 308), rows 11 through 14 at (193, 300), (193, 332), (193, 364)
and (193, 396), and selected-row element 10 at (193, 338) with frame 10 of table `0x009CFB60`.
When its state is 0 it draws the visible 256 by 32 strip at (193, 338), which is the selected-row
highlight in t09; `LoginDialog` therefore keeps the `SelectorFrameDraw` hook.

The exact texture page selected from `f256_hyouji` by `dword_A983D8`, the `0x00710F80` corner
and edge UVs, and the header child's draw UVs/colours are not established from the machine code
or the data image. Those elements are not drawn by the port; the panel rectangle and row text
are proven, but the textured background, header bar and row fills stop at that boundary.

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
