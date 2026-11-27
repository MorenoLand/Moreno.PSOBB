# Scene 2

Scene 2 is the shared title and login interface. This assembly ports its lifecycle, the shared
state and fade protocol, the account panel rows and the title art. The interface tree and the
screen constructors are supplied by their own ports.

Scene 1 screen 9 is **not** the observed Login screen: its constructor `0x004D5A14` builds a
108-byte sprite whose update only animates and hides it. Scene 2 is the observed screen. Its
state-zero controller `0x006F8130` selects `title.adx`, builds the title art, and loads the
`title_a`/`title_b`/`title_seiunn` effect records; selector state 0 later creates the account
dialog. The Login header and the Start Game/Exit Game/Patch Download/Register UserID rows are
built by the account dialog from `unitxt_e.prs` list 41; they are not baked into the title
effect textures.

## Ported members

| Member | Original | Work |
|---|---|---|
| `Scene2.Start` | `0x00824934` | Selects shared screen 9 in the title container, writes the zero/-100 transform and enters shared state 0 with fade 1 |
| `Scene2.Update` | `0x0081AA00` | Runs the fade step, advances the interface tree and applies the cancel and confirm checks |
| `Scene2.Release` | `0x0081E160` | Hides the current screen, releases the interface tree, disposes the title container and writes shared state 0xC |
| `Scene2.SelectSharedScreenState` | `0x00824860` | Saves the current state, selects state 9 and starts fade 1 |
| `Scene2Interface.CreateScreen` | `0x0081AAC8` | The thirteen-state switch, constructor addresses and allocation sizes |
| `Scene2TransitionOverlay.Pump` | `0x007199E8` | The transition manager's draw order |
| `Scene2TransitionOverlay.CanPump` | `0x00719A48` | The ready-bit gate |
| `LoginDialog` | `0x007617E8` | Header and four action rows, hint, selection and confirm mapping |
| `Scene2TitleArt` | `0x006F475C` | Title strips, effect records, emblem overlay and flash |

`Scene2Interface.ScreenDefinitions` records the switch at `0x0081AAC8`:

| State | Constructor | Bytes |
|---|---|---|
| 0 | `0x006F8130` | `0x4C` |
| 1 | `0x00793458` | `0x28` |
| 2 | none | |
| 3 | `0x007BDDC8` | `0x30` |
| 4 | `0x0041450C` | `0x24` |
| 5 | `0x00412A48` | `0x24` |
| 6 | `0x004135E0` | `0x60` |
| 7 | `0x004107FC` | `0x48` |
| 8 | `0x0040D8EC` | `0x24` |
| 9 | `0x00403018` | `0x1290` |
| 10 | none | |
| 11 | `0x00788050` | `0x24` |
| 12 | none | |

## Fade protocol

The scene stores the shared screen state at `0x00A165F0`, the previous state at `0x00A165F8` and the
fade word at `0x00ACA4E4`. Entering a state saves the old state, writes the new state and sets fade
1. The update then behaves exactly as `0x0081AA00`:

1. Fade 1 clears the current screen pointer and sets bit zero of the low word at screen offset 8;
   the high word keeps its value, so the result is `(oldHighWord << 16) | (oldLowWord | 1)`.
2. Fade 2 clears the fade word and creates the screen for the current state.
3. Fade 0 and every other value do nothing.

The release callback keeps the previous state and the fade word and writes only state `0x0C`.

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
as `[d]`.

`0x00735C90` adds each row with `0x0072DB60` and stores the caller's data value (`0`, `1`, `2`, `3`)
in the list's item table. `0x007348D8` handles list input and updates the selected item at list
`+0x8C`; on confirm `0x007365F4` returns the selected item's stored data value, and `0x007621E4` maps
it:

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
from the account dialog or its list selection to `selector + 0x20` was found in the lifted code.

The selector draw `0x006FF0D4` draws one element when selector state (`+0x24`) is zero:
`0x006FB8D4(10)` returns the `0x009CFF00` entry 10, and `0x0082B6BC` submits frame 10 of the
`0x009CFB60` table at `(193,338)` with depth scale `-10` and flags `0x22`. The frame table is
20-byte records of width, height, UV origin, UV end and page; frame 10 is a 256x32 strip at
`v=0..31`. The other selector entries are the header at `(192,308)` and four 256x32 rows at
`(193,300)`, `(193,332)`, `(193,364)`, `(193,396)`.

## Text rendering

The list widget vtable is `0x00B40A38`: destructor `0x00734700`, update `0x007348D8`, draw
`0x007352D0`. The draw path is:

1. `0x007352D0` calls the base widget draw `0x00710F80`, which binds the GUI skin texture set
   `dword_A983D8` (`&off_9F58C8` or `&off_9F58F4`, selected by `0x00712D14`) and draws the widget frame
   and title bar.
2. `0x0072DB60` stores each row string at the item's `+0x20`. The item draw `0x0072D9B4` reads that
   string and calls `0x0071D924` or `0x0071D58C`; both submit glyph quads.
3. The account rows have item flags `0x41`, so their text takes the bitmap-font renderer
   `0x0071D58C`; the texture-font path `0x0071D924` is the item flag `0x4` branch.

The bitmap font is created by `0x007AC6E8` through `0x00844428(14,14)`: a 32-bit 14x14 DIB and five
GDI faces from the 216-byte descriptors at `0x00A21CE0`. The atlas has three 256x256 pages and four
alpha levels. The face name is the `FONT_JPN` value under `HKCU\Software\SonicTeam\PSOBB`, which is
`Tahoma` on this machine. `TextRenderer.Draw` ports `0x0071D58C`, and `TextRendererSurface` exposes it
to the list. `GdiBitmapFont` on the Windows platform rasterises the five faces and uploads the pages.

The texture-font atlas is selected by `0x0079324C`; for English it is `textureenglish.xvm`, five
pages of 256/256/256/128/64 pixels. `TextureFontMetrics` copies the width/offset table at
`0x009FCE80`; `TextureFontSurface` ports the ASCII glyph path.

## Title art

`0x006F475C` draws the title in this order:

1. `0x00415AB0` with frame base 13, depth divisor `-150`: the eight `s256_1st_title` strips with
   alpha blending disabled.
2. Frames 150 through 170 of the controller: the full-screen flash.
3. `0x00415BCC` with frame base 3, depth divisor `-130`: the eight `f256_titlealpha` strips with
   alpha blending enabled.
4. The emblem/ring overlay.

The strip table is the eight-entry, 20-byte-per-entry table at `0x009A3840`: positions
`(512,384)`, `(512,256)`, `(512,128)`, `(512,0)`, `(0,256)`, `(0,0)`, `(256,256)`, `(256,0)` with
128x128 or 256x256 sizes and frame offsets `7, 6, 5, 4, 1, 0, 3, 2`.

`Scene2TitleArt` selects the texture set explicitly with `Scene2TitleSet`: `Title` maps to
`Title.prs`, `TitleEp4` to `TitleEP4.prs` and `TitleCs` to `Title_cs.prs`. These are the three
literals at `0x0096E400`, `0x0096E40C` and `0x0096E418`, and `0x0081A93C` appends `.prs` to each.
`SelectTitleSet(mode, episode4Configuration)` mirrors `0x006FB914`: a nonzero mode keeps `Title`,
otherwise the Episode 4 flag selects `TitleEp4`. `IsEpisode4Configuration` mirrors `0x00708514`:
mode 3, the network flag or an `Episode4` account name selects the Episode 4 configuration. The
constructor defaults to `Title`.

The exact texture set is:

| Frames | Textures |
|---|---|
| 3–10 | `f256_titlealpha01`–`08` |
| 11–12 | `f512_mahoujin` and `_b` |
| 13–20 | `s256_1st_title01`–`08` |

`TitleArtDrawList` submits the strip quads with the original `0x144` vertex format, z values,
texture binds, alpha-blend enable state and texture-stage states 4, 13 and 14 used by `0x0082BB30`.
The strip alpha pass uses source-alpha over inverse-source-alpha; the emblem overlay uses additive
`SourceBlend=One`, `DestinationBlend=One`, so the black surround adds nothing.

`DrawEmblem` reproduces the overlay after the strip passes: the 430-radius and 178-radius quads from
frames 11 and 12, then the three 104-radius quads from the `0x0096E168` points `(-137,-79)`,
`(137,-79)` and `(0,156)`. It uses the frame-derived angle `(frame << 16) / 900`, the
`0x007A919C(0,88,115,frame,300,150,165,180)` colour, depth values `0.008333334`, `0.008403362` and
`0.008474576`, and the runtime UV state below.

`DrawFlash` reproduces frames 150 through 170: `v15 = 255 * (1 - (frame % 300 - 150) / 20)`,
expanded into an opaque grey `0xFFxxxxxx`, texture 12, alpha state, depth `1 - 0.007142857` and the
`0x0082B440` quad from `(320 - 268.8t, 200 - 268.8t)` to `(320 + 268.8t, 200 + 268.8t)`, where
`t = (frame % 300 - 150) / 20`. The four `0xA96904/08/0C/10` UV values are supplied by the caller
because no writer exists in the lift or host data.

The runtime host gives `0xA96914 = 1`, `0xA96918/0x1C = 320/220`, `0xA96920 = 0`, `0xA96924/28 = 0`
and `0xA9692C/30 = 0.35/0`. Those values are exposed through `TitleEmblemState`; the image defaults use
them.

## Title effect records 483–485

`0x006F8130` loads three 152-byte records through `0x0050A0EC` and stores the resulting 208-byte
objects at controller `+0x40`, `+0x44` and `+0x48`:

| Record | Name field (+0x00) | Type (+0x10) | Texture ID (+0x14) | +0x48 | +0x4C |
|---|---|---|---|---|---|
| 483 | `title_a` / `ontaib` | 2 | `0x000AB02C` | 50 | 10 |
| 484 | `title_b` | 2 | `0x000AB02C` | 100 | 20 |
| 485 | `title_seiunn` / `ki` | 0 | `0x000AAEF7` | 350 | 300 |

The table is `particleentry.dat`: GSL directory index 1043, sector 24610, stored size 77824, offset
`0x03011000`. That is 512 records. Records 483, 484 and 485 start at `0x03022EC8`, `0x03022F60` and
`0x03022FF8`. `0x0050DAE0` allocates 512 records; `0x0050A0EC` builds the 208-byte object with vtable
`0x00AFF308` and stores the record pointer at object `+0x28`.

The record's `+0x14` value is a texture ID in `effect_nt.xvm`, not a GSL entry index. `0x00501C4C`
loads `effect_nt.rel`, parses `effect_nt.xvm` through `0x0081A7D8`, and fills the 54-entry
`dword_A72880` table. `0x00501804` maps an ID to its slot. `effect_nt.xvm` is GSL directory index
1375, sector 30087, size 177280, offset `0x03AC3800`. The two IDs map as follows:

| Texture ID | XVRT slot | Format | Size | Chunk offset | Pixel bytes |
|---|---|---|---|---|---|
| `0x000AB02C` | 5 | DXT1 | 32x32 | `0x03AC45C0` | 512 |
| `0x000AAEF7` | 43 | DXT1 | 128x128 | `0x03AD7740` | 8192 |

The decoded payloads are particle sprites: `0xAB02C` is a blue glow orb and `0xAAEF7` is a 4x4
smoke/star sheet. Neither contains the Login or row text. The labels are drawn by the account dialog's
text list, and the title effect records supply the title artwork's particle sprites.

## Ordering and transitions

`Scene2.Update` advances the interface tree through `UiManager.Update`, then checks cancel before
confirm. Cancel calls `SceneManager.RequestRestart` (`0x007A6174`). The confirm check is always
false in the shipped image because `0x006DC358` returns zero; `Scene2` accepts a delegate for a host
that needs to exercise `SceneManager.RequestExit` (`0x007A60DC`).

The transition pump runs the original order: begin display, draw the sublayer, reset the viewport,
draw the full-screen overlay, draw the band pass, draw the primary layer, restore the viewport and
end the display. The six transition windows are created at 640 by 480.

`SceneDirectory` maps scene 2 only when the caller supplies a `Scene2Interface` factory. It builds a
fresh interface tree, calls `Scene2.Start`, drives `Update`/`Draw`, and calls `Scene2.Release` on the
director's release pass; without a factory it emits the no-interface diagnostic.

## Boundary

- `0x00824944` also initialises the one-megabyte effect buffer, the title theme table at
  `0x009FF420`, the 0.3 colour, the three fixed-point sine values and the 108 interface elements at
  `0x008013BC`. Those stages belong to the title-art and interface ports and are not reconstructed.
- `0x0081AAC8` runs the string comparison at `0x0081E118` for states other than 0 and 9. That
  comparison only gates a side effect and is not reproduced.
- The screen constructors are not ported; `Scene2Interface` calls the factory supplied by the login
  and art ports. A state with an unported constructor leaves the current screen null.
- `0x007195C8` also creates two layer tasks and three optional submanagers whose classes are not
  ported. Only the six transition windows and the pump order are represented.
- The band pass `0x00719B1C`, the overlay primitive `0x00719A60`, the layer traversal `0x00818F50`,
  the renderer state calls and the viewport calls are supplied through
  `IScene2TransitionRenderer`.
- The update segment also runs the renderer begin, the device input poll, the async file step, the
  camera update and the save state machine at `0x006C38BC`. Those systems are host or other-port
  responsibilities; the scene keeps the fade, tree and cancel/confirm order it owns.
- The release segment also tears down the renderer, file handles and the effect buffer. The host
  owns those calls.
- The flash UV values `0xA96904/08/0C/10` have no writer in the lift; `DrawFlash` requires them from
  the caller rather than inventing constants.
- `LoginDialogFrame` owns the title panel body, orange header and selected-row strip behind
  `0x00710F80`/`0x007120EC`; the login port draws the header text, rows and hint.

## Verification

`Scene2LifecycleTests` uses synthetic screens and a recording transition renderer. It covers the
initial state switch, the optional state callback, fade 1 and 2, the state-2/10/12 no-case result,
update-before-draw order, cancel, confirm, release, the screen table and the pump order.
`LoginDialogTests` covers the header, four rows, hint substitution, selection wrap, confirm mapping,
panel rectangle and release. `Scene2TitleArtTests` covers the twenty-one title textures, records
483–485, effect texture mapping, both strip passes, the sixteen-quad strip submission, the emblem
angle/colour, the two large plus three ring overlay quads and the flash window/colour/quad.

Composing the mode-zero GSL `title.prs` (the default `Title` set) with frames 13 through 20 and 3
through 10, then the overlay, produces the Blue Burst logo with the Japanese subtitle and the
`(C) SONICTEAM / SEGA, 2000, 2004` line, matching `t07`. The loose `TitleEP4.prs` (269638 stored
bytes, 845184 decoded bytes) is the Episode IV variant with `(C) SEGA, 2000, 2005`; it is selected only
by the Episode 4 configuration. `t09` uses the same default background behind the separate Login list.

The oracle captures were used only to confirm the rendered states; the labels, IDs, record names and
texture slots above come from the shipped binaries and the lift.

## State-9 mode machine

`Scene2StartGameModeMachine` ports the dispatcher kernel at `0x00403084`, the mode change at
`0x004033C4`, the 75-frame timeout to mode 22, and the nine file flags at offsets `0x34`-`0x54`.
Ported update handlers: `0x004031E8` (0), `0x004033E8` (1), `0x00403864` (2),
`0x00403AF0` (3), `0x00403B68` (4), `0x00403B94` (6), `0x00403BD4` (7), `0x00403CCC` (8),
`0x00403D08` (9), `0x00403D48` (10), `0x00403D90` (11), `0x00403DD4` (12),
`0x00403E1C` (13), `0x00403E60` (14), `0x00403EB4` (15), `0x00403F14` (16),
`0x00403F54` (17), `0x00403FB4` (18), `0x004041D0` (19), `0x00404450` (20), `0x00404CA4` (23),
`0x00404558` (24), `0x004050F0` (25), `0x004046D4` (26), `0x00404D60` (27) and
`0x004048E8` (28). Mode 21 and the timeout mode share the `0x004044E0` confirm handler.
Mode 5 is an entry-only transition to mode 6.

The save path is the mode-0 file-flag stage, the mode-3 alternate system start, the mode-4 wait,
the mode-6 system start, and the mode-7 four-slot character validation. `SystemSave.Pump` stands in
for the asynchronous worker at `0x006C38BC`; it completes pending 16 before each dispatch. The mode-7
valid flag set selects mode 23, which writes the shared lobby screen state 6.

The four character rows use the shipped pairs at `0x008F8940`/`0x008F8944`: x 28 and y 182, 225,
268 and 311, with 43-pixel spacing. `0x00406624` adds the 180-by-38 selection rectangle from
`0x008F8988`/`0x008F8984`; the list widget uses the same 180 width and 38 selection height. The further columns at
`0x008F8908` (x 131) and `0x008F8928` (x 234), and the three extra rows those columns carry, remain
unported; the screen draws only the four character rows.

Ported entry callbacks: `0x00405734` (5), `0x00405670` (14), `0x00405600` (15),
`0x00405580` (16), `0x004054C0` (20), `0x0040544C` (21), `0x004053E0` (22),
`0x00405168` (25) and `0x00404DFC` (27). The mode-20 callback uses the nine-flag condition at
`0x00404ADC` to select unitxt list 29 strings 23/24 or 25/26, with 20 and 21 as the option labels.
The mode-21 callback returns without building text because `0x00403770` is the constant
`90 - 50000`, so its `budget > 0` body is unreachable. The mode-22 callback selects list 29 strings
27 and 34; mode 27 displays the shared byte-132 message buffer set by the preceding entries. The
text-box factory `0x00402F0C` remains the host seam for modes 20, 22, 25 and 27. `0x00403784` and
`0x00404A34` create and release the element and cursor slots and are ported.

All update handlers in the `0x009A2DA4` table except the entry-only mode 5 are now ported; mode 18
was recovered from a headless Ghidra dossier because the existing lift had no entry for
`0x00403FB4`. Remaining boundary: the mode-24, mode-26 and mode-28 entry callbacks
(`0x00405358`, `0x00404E28`, `0x00404CD8`) need the unported network/world-list objects. The
`0x00402F0C` text-box and scroll-control factory still needs its cell composition: the
shared templates' column word is written at runtime, `0x009F30EC` by `0x007354FC`/`0x00735708`/
`0x00735884` and `0x009F3248` by `0x0073B1E8`, so the zero column count in the static image is not
an unknown grid. The cell constructors and text-box draw path remain unported. The running
`--startgame` diagnostic confirms the state-9 rows at frame 10 using a synthetic `PSO_CHARACTER`,
then the scene-11 `Connecting..` label at frame 60.
