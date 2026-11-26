# Scene 2: proven state, menu text and title effects

Scene 2's initialiser, update and release are `0x00824934`, `0x0081AA00` and `0x0081E160`. All three
call renderer, interface, input and asset systems that are not ported, so none of them is annotated or
claimed as a port. The one complete function on the scene-2 path is the selector transition at
`0x00824860`, ported by `PsoBB.Scenes.Scene2.SelectSharedScreenState`.

Scene 1 screen 9 is **not** the observed Login screen: its constructor `0x004D5A14` builds a 108-byte
sprite whose update only animates and hides it. Scene 2 is the observed screen. Its state-zero
controller `0x006F8130` selects `title.adx`, builds the title art and the four-slot selector, and loads
the `title_a`/`title_b`/`title_seiunn` effect records; selector state 0 later creates the account
dialog. The Login header and the Start Game/Exit Game/Patch Download/Register UserID rows are built by
the account dialog from `unitxt_e.prs` list 41; they are not baked into the title effect textures.

The title screen in `build/ref-13.png` and `build/oracle-captures/t09.png` was not reconstructed from
the screenshots. No guessed layout, menu entries, labels, assets or transitions remain in the code.

## Ported function

| Member | Original | Work |
|---|---|---|
| `Scene2.SelectSharedScreenState` | `0x00824860` | Save the current shared screen state, select state 9, start fade 1 |

The selector transition is reached from scene 2's screen switch: the completed selector calls
`0x006F8464`, which dispatches through the table at `0x009D04C8`. The current rebuilt host and the lift
agree that entries 0–3 call `0x006F8534`, entries 4–5 call the null function `0x0061CDB0`, and entry 6
calls `0x006F4C04`. `0x006F8534` calls `0x00824860`. The table, selector and state-9 screen object are
not ported.

## Transition to scene 2

The path from the title UI to scene 2 is proven:

1. `0x00411C94` state 9 counts past 60 frames and schedules `0x00411E94`.
2. `0x00411E94` writes `dword_A3B078 = 1` when `0x006DC358() == 1`; otherwise it writes the same flag
   after hiding its callback object.
3. The title-UI virtual method `0x007A44F0` sees `dword_A3B078`, hides its child, enters state 3, and
   the next state-3 call invokes `0x007A60DC(2)`, requesting scene 2.
4. Scene 2 runs the fade in `0x0081AA00`; its state-zero branch `0x0081AAC8` allocates 76 bytes and
   constructs `0x006F8130`.

## The account dialog builds the menu from list 41

The selector object is confirmed from the vtable at `0x00B3EAF8`: destructor `0x006FEC44`, update
`0x006FED04`, draw `0x006FF0D4`, null slot `0x0061CDB0`.

`0x006FED04` dispatches selector state 0 to `0x006FEDE0` and state 1 to `0x006FED2C`, then increments
the frame counter. `0x006FEDE0` creates the account dialog `0x007617E8` when
`0x0040E234(dword_A0F698 | HIDWORD(qword_A0F670))` is true, and stores the dialog pointer at selector
`+0x3C`. When the dialog reports confirmation, the selector copies the user and password buffers
through `0x007624C8` and `0x007624D4`, hides the dialog, and sets selector state 2.

`0x007617E8` calls `0x00761C48`, which resolves every label through `0x00792FE8`:

| Slot | Lookup | Text |
|---|---|---|
| Header | `0x00792FE8(41, 2)` | `Login` |
| 0 | `0x00792FE8(41, 3)` | `Start Game` |
| 1 | `0x00792FE8(41, 4)` | `Exit Game` |
| 2 | `0x00792FE8(41, 5)` | `Patch Download` |
| 3 | `0x00792FE8(41, 6)` | `Register UserID` |

`0x00761C48` has two branches. When `0x0082D2F8()` is nonzero it builds a two-row list with the Login
header and Start Game/Exit Game. Otherwise it builds the five-slot list used by `t09`: the Login header,
the four rows above, and a fifth non-action hint created by `0x00735DB8` with the string data at
`0x00974EB8`; the wide text `[%s]` begins at `0x00974EBC`. The observed capture shows that fifth slot
as `[d]`; the string data is in the shipped image, not in the capture.

The rows are bound to the list widget, not to the selector's four-slot index. `0x00735C90` adds each
row with `0x0072DB60` and stores the caller's data value (`0`, `1`, `2`, `3`) in the list's item table.
`0x007348D8` handles list input and updates the selected item at list `+0x8C`; on confirm
`0x007365F4` returns the selected item's stored data value, and `0x007621E4` maps it:

| Data value | Dialog state | Meaning |
|---|---|---|
| 0 | 9 | close the dialog; the selector then reaches state 2 |
| 1 | 5 | Exit Game flow |
| 2 | 7 | Patch Download flow |
| 3 | 3 | Register UserID/account-edit flow |

The fifth item (index 4) is a non-action hint; `0x007621E4` has no case for it.

The selector also has a separate four-slot index at `+0x20`. `0x006FED2C` decrements/increments it,
wraps it, and sets `+0x24 = 2` on confirm. `0x006F8464` checks selector state 2 through `0x006FF1A4`,
reads the index through `0x004076B0` (`[selector + 0x20]`), and dispatches `0x009D04C8[index]`. No write
from the account dialog or its list selection to `selector + 0x20` was found in the lifted code. The
dialog's row data and the selector's index are separate mechanisms; the selector index is initialised
to zero, and zero is also the Start Game row that closes the dialog.

## Text rendering

The list widget vtable is `0x00B40A38`: destructor `0x00734700`, update `0x007348D8`, draw
`0x007352D0`. The draw path is:

1. `0x007352D0` calls the base widget draw `0x00710F80`, which binds the GUI skin texture set
   `dword_A983D8` (`&off_9F58C8` or `&off_9F58F4`, selected by `0x00712D14`) and draws the widget frame
   and title bar.
2. `0x0072DB60` stores each row string at the item's `+0x20`. The item draw `0x0072D9B4` reads that
   string and calls `0x0071D924` or `0x0071D58C`; both draw the glyph quads. `0x0071D58C` parses with
   `0x007AC580`/`0x007AC24C`; `0x0071D924` uses `0x00789240`/`0x00789044`.
3. The font atlas is `dword_A9CD48`, bound by `0x00829CC8`. `0x0079324C` selects it by language; for
   English it is the `textureenglish.xvm` texture-font atlas. The glyph draw uses `0x007893A4` or
   `0x00788FA0` for the matching glyph cell.

The GUI skin and font atlas are separate from the title effect records below.

## Title effect records 483–485

`0x006F8130` loads three 152-byte records through `0x0050A0EC` and stores the resulting 208-byte
objects at controller `+0x40`, `+0x44` and `+0x48`:

| Record | Name field (+0x00) | Type (+0x10) | Texture ID (+0x14) | +0x48 | +0x4C |
|---|---|---|---|---|---|
| 483 | `title_a` / `ontaib` | 2 | `0x000AB02C` | 50 | 10 |
| 484 | `title_b` | 2 | `0x000AB02C` | 100 | 20 |
| 485 | `title_seiunn` / `ki` | 0 | `0x000AAEF7` | 350 | 300 |

`0x0050A0EC` indexes `dword_A72CD0 + 152 * index` and builds the 208-byte object with vtable
`0x00AFF308`, storing the record pointer at object `+0x28`. The function that allocates and fills the
table is `0x0050DAE0`; `0x0050D92C` frees it and `0x0050CD6C` edits individual records:

1. `operator new(0x13000)` allocates 512 records.
2. `0x005B9910(off_9BB1B8[0], buffer)` loads the named file. `off_9BB1B8[0]` points to the string
   `particleentry.dat`.
3. `0x005B9918` forwards to `0x005BB880`, which resolves the name through the file system, copies the
   bytes, and returns the byte count. The count divided by 152 becomes `dword_9BB1C8`.

The GSL entry `particleentry.dat` is directory index 1043, sector 24610, stored size 77824, offset
`0x03011000`. That is 512 records. Records 483, 484 and 485 therefore start at `0x03022EC8`,
`0x03022F60` and `0x03022FF8`. The local `particleentrya36.dat`–`particleentrya46.dat` files are
64-record variants and are not this table. No direct caller of `0x0050DAE0` was found in the lifted
code; its output is confirmed by the running host's `dword_A72CD0` contents.

The record's `+0x14` value is a texture ID in `effect_nt.xvm`, not a GSL entry index. `0x00501C4C`
loads `effect_nt.rel`, parses `effect_nt.xvm` through `0x0081A7D8`, and fills the 54-entry
`dword_A72880` table from the parsed XVM texture records; the IDs match the XVM global indices at
`+0x10`, and `0x00501804` maps an ID to its slot. `effect_nt.xvm` is GSL directory index 1375, sector
30087, size 177280, offset `0x03AC3800`. It contains 54 `XVRT` chunks. The two IDs map as follows:

| Texture ID | XVRT slot | Format | Size | Chunk offset | Pixel bytes |
|---|---|---|---|---|---|
| `0x000AB02C` | 5 | DXT1 | 32x32 | `0x03AC45C0` | 512 |
| `0x000AAEF7` | 43 | DXT1 | 128x128 | `0x03AD7740` | 8192 |

The decoded payloads are particle sprites: `0xAB02C` is a blue glow orb and `0xAAEF7` is a 4x4
smoke/star sheet. Neither contains the Login or row text. The labels are drawn by the account dialog's
text list, and the title effect records supply the title artwork's particle sprites.

## C# title-art surface

`PsoBB.Scenes.Scene2TitleArt` exposes the proven part of `0x006F475C`:

- `DrawOpaqueStrips` (`[Original(0x00415AB0)]`) adds the eight `s256_1st_title` strips with frame base
  13, colour `0xFFFFFFFF`, depth `1 + 1 / -150` and alpha blending disabled.
- `DrawAlphaStrips` (`[Original(0x00415BCC)]`) adds the eight `f256_titlealpha` strips with frame base
  3, colour `0xFFFFFFFF`, depth `1 + 1 / -130` and alpha blending enabled.
- The strip table is the eight-entry, 20-byte-per-entry table at `0x009A3840`: positions
  `(512,384)`, `(512,256)`, `(512,128)`, `(512,0)`, `(0,256)`, `(0,0)`, `(256,256)`, `(256,0)` with
  128x128 or 256x256 sizes and frame offsets `7, 6, 5, 4, 1, 0, 3, 2`.
- The texture set is selected explicitly with `Scene2TitleSet`: `Title` maps to `Title.prs`, `TitleEp4`
  to `TitleEP4.prs` and `TitleCs` to `Title_cs.prs`. These are the three literals at `0x0096E400`,
  `0x0096E408` and `0x0096E410`, and `0x0081A93C` appends `.prs` to each. The constructor defaults to
  `Title`; callers pass `TitleEp4` for the Episode 4 configuration.
- `Scene2TitleArt.SelectTitleSet(mode, episode4Configuration)` mirrors `0x006FB914`: a nonzero mode
  keeps `Title`, otherwise the Episode 4 flag selects `TitleEp4`. `IsEpisode4Configuration` mirrors
  `0x00708514`: mode 3, the network flag or an `Episode4` account name selects the Episode 4
  configuration. The loader checks the literal name and the `data/`-prefixed name, so a game-root
  registry finds `D:\Games\PSOBB\data\TitleEP4.prs` as a loose file before any GSL entry.
- The records and payloads from `particleentry.dat`/`effect_nt.xvm` are loaded and exposed but are not
  referenced by either strip pass.
- `TitleArtDrawList` submits the strip quads with the original `0x144` vertex format, z values, texture
  binds, alpha-blend enable state and texture-stage states 4, 13 and 14 used by `0x0082BB30`. The strip
  alpha pass uses source-alpha over inverse-source-alpha; the emblem/ring overlay uses additive
  `SourceBlend=One`, `DestinationBlend=Zero`, matching the captured overlay.
- `DrawEmblem` reproduces the overlay after the strip passes: the 430-radius and 178-radius quads from
  frames 11 and 12, then the three 104-radius quads from the `0x0096E168` points `(-137,-79)`,
  `(137,-79)` and `(0,156)`. It uses the frame-derived angle `(frame << 16) / 900`, the
  `0x007A919C(0,88,115,frame,300,150,165,180)` colour, depth values `0.008333334`, `0.008403362` and
  `0.008474576`, and the runtime UV state below.
- `DrawFlash` reproduces frames 150 through 170: `v15 = 255 * (1 - (frame % 300 - 150) / 20)`, expanded
  into an opaque grey `0xFFxxxxxx`, texture 12, alpha state, depth `1 - 0.007142857` and the
  `0x0082B440` quad from `(320 - 268.8t, 200 - 268.8t)` to `(320 + 268.8t, 200 + 268.8t)`, where
  `t = (frame % 300 - 150) / 20`. The four `0xA96904/08/0C/10` UV values are supplied by the caller
  because no writer exists in the lift or host data.

`Scene2TitleArtTests` covers the twenty-one-texture load, the three record names and fields, the two
effect payloads, both eight-strip passes, the sixteen-quad render submission, the emblem angle/colour,
the two large quads and three ring quads, the flash window/colour/quad and the title-set selector.

The runtime host gives `0xA96914 = 1`, `0xA96918/0x1C = 320/220`, `0xA96920 = 0`, `0xA96924/28 = 0`
and `0xA9692C/30 = 0.35/0`. Those values are exposed through `TitleEmblemState`; the image defaults use
them. The flash UV values remain the only missing draw input; they are explicit parameters rather than
invented constants.

Composing the mode-zero GSL `title.prs` (the default `Title` set) with frames 13 through 20 and 3
through 10, then the overlay, produces the Blue Burst logo with the Japanese subtitle and the
`(C) SONICTEAM / SEGA, 2000, 2004` line, matching `t07`. The loose `TitleEP4.prs` (269638 stored
bytes, 845184 decoded bytes) is the Episode IV variant with `(C) SEGA, 2000, 2005`; it is selected only
by the Episode 4 configuration. `t09` uses the same default background behind the separate Login list.

## Scene 1 screen 9 is not the login screen

The scene-1 renderer container at `0x004D3408` allocates thirteen screen objects from the table at
`0x009ACB70` (the lift names it `funcs_4D2E3E`). The current image and the lift agree on the table:

| Index | Constructor |
|---|---|
| 0–3 | `0x004D7E70` (player-preview screen) |
| 4 | `0x004D62BC` |
| 5 | `0x004D665C` |
| 6 | `0x004D71C4` |
| 7 | `0x004D1D48` |
| 8 | `0x004EB2C0` |
| 9 | `0x004D5A14` |
| 10 | `0x004D6E88` |
| 11 | `0x004D16B0` |
| 12 | `0x004D1A3C` |

Screen 9 is therefore not `0x004D7E70`. `0x004D5A14` allocates 108 bytes and calls `0x004D5A84`,
which builds a sprite object (vtable `off_AFC7E8`, field 14 set to 4). Its update `0x004D5AAC`
advances a frame counter, calls the sprite transform helper `0x007A8F28` and hides the sprite when
the frame count is reached. It contains no text lookup, no menu rows and no input handling. Scene 1's
other title UI at `0x007A4530` → `0x00411BE8` draws logo strips through `0x00411E30` and `0x00415AB0`;
it also has no menu rows. Scene 1 screen 9 is therefore **not** the observed Login screen.

## The observed labels are in the English text table

`unitxt_e.prs` list 41 (32 strings) contains the exact run:

`Login / Start Game / Exit Game / Patch Download / Register UserID / Empty / Input UserID / UserID / Password / Save UserID and Password?`

List 41 indices 2–6 are the header and four action rows. Indices 7–11 are the account-edit fields used
by `0x00762224`. `0x00792FE8(list, index)` indexes the table; `0x00793304` selects the locale
`unitxt_*.prs` bundle and `0x0079324C` selects the matching texture-font atlas.

## Unported boundary

- The title screen composition, camera, animated logo/ring, GUI skin, panel, glyph rendering and
  account-edit dialog are unported.
- No layout or menu entries are reconstructed from the reference images.
- Complete ports are `0x00824860`, `0x00415AB0` and `0x00415BCC`; the 0x006F475C emblem/ring overlay
  and flash are implemented in `DrawEmblem` and `DrawFlash` with the runtime constants above. The
  selector object, `0x007617E8`, `0x00761C48`, the list widget and the text renderer are documented but
  not ported.
- The text IDs and row binding are no longer missing. What remains unported is the GUI/font rendering
  stack (`0x007352D0`, `0x00710F80`, `0x0071D58C`), the flash UV source (`0xA96904/08/0C/10`), and the
  effect loader (`0x0050A0EC`/`0x0050DAE0`), which depend on the file, texture and interface systems
  absent from the branch.

## Verification

`Scene2Tests` covers the saved previous state, selected state 9, fade 1 and the scene table row.
`Scene2TitleArtTests` covers the twenty-one title textures, records 483–485, effect texture mapping,
both strip passes, the sixteen-quad render submission, the emblem angle/colour, the two large plus
three ring overlay quads and the flash window/colour. The full suite passes with 2114 tests and 6
skips. It does not test labels,
assets, layout or transitions that the machine code does not establish. The oracle captures were used
only to confirm that the account dialog and the observed menu are the same screen; the labels, IDs,
record names and texture slots above come from the shipped binaries and the lift. The Blue Burst/Episode
IV difference above is a verification result, not a layout source.
