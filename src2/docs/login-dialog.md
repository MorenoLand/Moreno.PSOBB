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
with unitxt list 41 string 2. The two-row online branch passes the four floats at `0x00974E08`
(210, 340, 220, 120). The five-row title branch, which this port implements, passes the pair
`(210, 300)`, or `(210, 336)` when `dword_A96968` selects the Episode 4 layout, and then the
size at `0x00974E10` (220, 120). The first twenty pixels hold the header and the remaining
hundred hold the four rows and hint. The data-image hint is `[%s]`; the retail frame shows `[d]`,
so `LoginDialog.DefaultHintKey` is `d` and `DefaultHint` is `[d]`.

The account list draw is `0x007352D0`. It calls `0x00710F80` for the window frame, `0x0072A648`
for child windows, `0x007353E8` for the selected row and `0x00735428` for the normal rows. The
row routine `0x007120EC` binds `dword_A983D8` and draws three sixteen-pixel slices from
`dword_A983D8` page 2: left `U 151..167`, right `U 183..199` and middle `U 167..183`, each sixteen
pixels high from `V 57..73`; the hovered row uses `V 76..92`. The left cap is drawn at `x-2`, the
right cap at `x+width-14` and the middle from `x+14` to `x+width-14`. The tint passed to
`0x0082BB60` is `-1` (`0xFFFFFFFF`).

`dword_A983D8` is written only by `0x00712D14`. Its only caller is `0x0071A198`, called with
argument `1` at `0x004E2CC9`, so the name is `f256_hyoujismall` and the page array is
`off_9F58F4`: a pointer to the three descriptors at `0x009F58D0` followed by the count `3`. The
descriptors are `f256_hyoujismall_a`, `_b` and `_c`; `0x0082A7D8` fills them in XVRT order, so
page 2 is `_c`. `0x0082BB60(2, -1)` selects that page through `0x00839838`.

The title-menu panel is drawn at `(210, 288)` with the `220 x 120` size at `0x00974E10`. The
constructor's body top is `308` when `dword_A96968` is nonzero and `300` otherwise, and the
twenty-pixel header is drawn above it, which gives the observed `288` top. The
`(210, 340, 220, 120)` data at `0x00974E08` is the online account-edit form, not this title menu.
The panel body and orange header come from `f256_hyoujismall_b` page 1: the body is a nine-slice
with an eight-pixel mirrored border from the `(0,0,80,80)` panel and the header is a three-slice
from `(4,128,76,147)` with twelve-pixel caps. Those two source rectangles are observed from the
decoded page and the `t09` capture; the exact `0x00710F80` corner/tile UVs are not reconstructed.

`LoginDialogFrame` draws the body, the header and the selected row in that order and is installed
through `LoginDialog.Frame`. Its tests pin the row slices, the header caps, the panel corners, the
draw order and release.

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
addresses and positions are constants on `LoginDialog`. `LoginDialogFrame` supplies the textured
title body, header and selected-row strip, and `LoginDialog.Dispose` releases its two skin pages.

## Input UserID layout, from the lifted code

These facts come from the lifted C and the disassembly, not from screenshots. Each address is the
place the value was read.

- The panel is the window created at `0x00762224` by `0x0073840C` with `(140, 330, 360, 100)`
  (`push 0x430C0000`, `0x43A50000`, `0x43B40000`, `0x42C80000`, `4`). `TitleRegisterDialog`
  already uses these values.
- The UserID editor is set to `(316, 346)` in the state-3 block of the dispatcher `0x007624E0`
  (`0x007627C9`, `0x007627D9`). The Password editor is set to `(316, 366)` in the state-5 block
  (`0x007625F5`, `0x007625FF`).
- The list layout `0x00738C1C` places the window's child elements in groups of five (`add ebx, 5`).
  Child index `c` has its y at `+0x0C` equal to `20 * c`, relative to the window origin. The x
  value is not set by this routine.
- Children are appended by `0x007389CC` and `0x00738A04`. Each call fills the next pre-allocated
  element (`[window+0x28][count]`) and increments `[window+0x86]`. The register dialog makes four
  such appends in `0x00762224`.
- The row strip `0x007120EC` draws three slices on page `_c` (`dword_A983D8` page 2) with tint
  `0xFFFFFFFF`, after `0x0082BB30(1)` and `0x0082BB60(2, -1)`. Its offsets are `x-2` (left cap),
  `x+width-14` (right cap) and `x+14` (middle), with 16-pixel caps and a 16-pixel height. The
  port's `LoginDialogFrame.DrawRow` matches those offsets.
- The item text draw `0x0072D9B4` takes its x and y from the item at `+0x08` and `+0x0C` plus the
  parent's `+0x10` and `+0x14`. Text width is clamped to the item's `+0x1C`. Flag `0x40` selects an
  unbounded width (`0x970EBC` = 1e7) instead of the parent's `+0x44`.

Not decoded yet, so the port does not change these: which of the four appended elements is the
header, the UserID row, the Password row or the buttons; the centring formula behind the text x in
`0x0072D9B4` (it uses the parent's `+0x30` and `+0x38`); and the blend state set by
`0x0082BB30(1)`, which decides whether the strip looks white.
