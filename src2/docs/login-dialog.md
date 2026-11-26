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

The English archive contains five pages: three 256 by 256, one 128 by 128 and one 64 by 64.
The shared metric table is loaded at `0x009FCE80`; each printable character from space through
tilde has one advance and one vertical offset. `0x00789044` returns the advance, and
`0x007893A4` uses the character's low nibble times sixteen as the cell column and the high
nibble as the cell row in a 256-pixel page.

## Port boundary

`TextureFontMetrics`, `TextureFont`, `TextureFontSurface` and `TextureFontAtlas` cover the ASCII
texture-font path: the metric table, the cell quad, advancing, wrapping, atlas loading, texture
binding and release. Wide glyphs and the page-selection rule above code unit `0x00FF` are not
established; the account rows do not use that path.

The account panel itself is `PsoBB.Scenes.LoginDialog`: four enabled rows, a disabled yellow
hint, wrapping selection, the data-value confirm mapping and close. The panel frame, header
label and the substitution of the hint's `%s` with a bound key are outside this port because
the machine code does not build them in the row path above.
