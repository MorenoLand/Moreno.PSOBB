# Scene 2: proven state and unported screen

Scene 2's initialiser, update and release are `0x00824934`, `0x0081AA00` and `0x0081E160`. All three
call renderer, interface, input and asset systems that are not ported, so none of them is annotated or
claimed as a port. The one complete function on the scene-2 path is the selector transition at
`0x00824860`, ported by `PsoBB.Scenes.Scene2.SelectSharedScreenState`.

Scene 1 screen 9 is **not** the observed Login screen: its constructor `0x004D5A14` builds a 108-byte
sprite whose update only animates and hides it. Scene 2 remains the candidate because its state-zero
controller `0x006F8130` selects `title.adx` and builds a four-slot selector and account dialog, but
the function that draws the Login/Start Game/Exit Game/Patch Download/Register UserID rows has not
been identified. No screen, layout, menu entry or asset assignment is invented or claimed.

The title screen in `build/ref-13.png` was not reconstructed from the screenshot. No guessed layout,
menu entries, labels, assets or transitions remain in the code.

## Ported function

| Member | Original | Work |
|---|---|---|
| `Scene2.SelectSharedScreenState` | `0x00824860` | Save the current shared screen state, select state 9, start fade 1 |

The selector transition is reached from scene 2's screen switch: the completed selector calls
`0x006F8464`, which dispatches through the table at `0x009D04C8`. The current rebuilt host and the lift
agree that entries 0–3 call `0x006F8534`, entries 4–5 call the null function `0x0061CDB0`, and entry 6
calls `0x006F4C04`. `0x006F8534` calls `0x00824860`. The table, selector and state-9 screen object are
not ported.

## Evidence addresses, not ported

- `0x00824934` calls the common scene frame `0x00824944` and then `0x0081E298`.
- `0x0081E298` saves screen state, selects state 0 and starts fade 1. The optional
  `0x00ACBEF0` branch is unported.
- `0x0081AA00` advances fade 1 → 2 → 0 and then calls `0x0081AAC8`; the renderer, interface tree,
  camera, input and cancel paths are unported.
- The state-zero branch of `0x0081AAC8` allocates 76 bytes and constructs `0x006F8130`.
- `0x006F8130` stores the controller in `0x00A96954`, writes scene parameter 1, selects `title.adx`,
  chooses a `0x04B0` or `0x0320` timer from `0x006DC358`, creates child objects `0x006F4734`,
  `0x006FECB8` and `0x006F4CA4`, and loads cache textures `483`, `484` and `485`.
- `0x006F4734` draws through `0x006F475C`, which uses `0x00415AB0`, `0x00415BCC` and the ring vertex
  helper `0x006F46C4`.
- `0x006FECB8` moves a four-slot index with `0x006FED2C`; confirming stores state two. `0x006FEDE0`
  creates the account dialog at `0x007617E8`. The menu labels and their slot mapping are not
  established by these functions.
- `0x0081E160` releases the screen controller, interface tree and textures; none of those objects is
  ported.

## Assets proven only as archive contents

The standalone archives contain the following textures; this does **not** prove scene 2 uses them:

| Archive | Proven contents |
|---|---|
| `title_eng.prs` / `title.prs` | 21 textures: four 256x256 backdrop pieces at 3–6, a 512x512 emblem at 11, a 512x512 ring at 12 |
| `f256_backtext.prs` | five 256x256 circuit background textures |
| `patch.xvm` | one 256x256 button strip and one 64x64 button strip |
| `textureenglish.xvm` / `texturejapanese.xvm` | 256x256 texture-font atlases, not proven to be the title labels |

The global numeric cache indices loaded by the controller (`483`, `484`, `485`) are not mapped to
these files. The observed labels are in `unitxt_e.prs` as shown above, but the function that draws
them for this screen is still unidentified. The draw function that composes the reference screen was
not identified.

## Draw-path investigation

The oracle captures show the Login menu at `t09` without input. The transition path to scene 2 is
proven:

1. `0x00411C94` state 9 counts past 60 frames and schedules `0x00411E94`.
2. `0x00411E94` writes `dword_A3B078 = 1` when `0x006DC358() == 1`.
3. The title-UI virtual method `0x007A44F0` sees `dword_A3B078`, hides its child, enters state 3, and
   the next state-3 call invokes `0x007A60DC(2)`, requesting scene 2.
4. Scene 2 runs the fade and `0x0081AAC8` state 0 constructs `0x006F8130`.

The selector object is confirmed from the vtable at `0x00B3EAF8`: destructor `0x006FEC44`, update
`0x006FED04`, draw `0x006FF0D4`, null slot `0x0061CDB0`.

`0x006FF0D4` is the only caller of `0x006FB8D4`, which indexes the 32-byte element table at
`0x009CFF00`. It draws element 10 with frame 10 from the 20-byte frame table at `0x009CFB60`:
element 10 is a 256x32 strip at `(193,338)`, and frame 10 covers `(0,0)-(255,31)`. The call passes
scale `-10.0` and flags `0x22` to `0x0082B6BC`. The static elements 11–14 are 256x32 strips at
`(193,300)`, `(193,332)`, `(193,364)` and `(193,396)`, and element 15 is at `(192,308)`. The function
that draws elements 11–15, the text lookup for `unitxt_e.prs` IDs 3–7, and the mapping from the
element/frame tables to an archive texture are **not identified**. No C# member reproduces a menu
element; `Scene2.SelectSharedScreenState` reproduces only `0x00824860`.

`0x006FED04` dispatches update state 0 to `0x006FEDE0` and state 1 to `0x006FED2C`, then increments
the frame counter. `0x006FED2C` changes the four-slot index in `[object+0x20]`, wraps it at both
ends and sets `[object+0x24] = 2` on confirm. `0x006FEDE0` creates the account dialog at
`0x007617E8`. Their input globals, dialog controls and draw destinations are not ported.

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

Screen 9 is therefore not `0x004D7E70`. `0x004D5A14` allocates 108 bytes and calls
`0x004D5A84`, which builds a sprite object (vtable `off_AFC7E8`, field 14 set to 4). Its update
`0x004D5AAC` advances a frame counter, calls the sprite transform helper `0x007A8F28` and hides the
sprite when the frame count is reached. It contains no text lookup, no menu rows and no input
handling. Scene 1's other title UI at `0x007A4530` → `0x00411BE8` draws logo strips through
`0x00411E30` and `0x00415AB0`; it also has no menu rows. Scene 1 screen 9 is therefore **not** the
observed Login screen.

## The observed labels are in the English text table

`unitxt_e.prs`, decompressed, contains the following UTF-16LE run at offset 234540:

`Login / Start Game / Exit Game / Patch Download / Register UserID / Empty / Input UserID / UserID / Password / Save UserID and Password?`

This proves the exact labels and the account fields. The function that selects these string IDs and
draws them has not been identified; no screen is assigned them.

## Unported boundary

- The title screen composition, camera, animated logo/ring, menu labels, row positions, fonts,
  button art and account dialog are unported.
- No layout or menu entries are reconstructed from the reference image.
- The selector table transition is recorded as constants only; the selector object and state 9's
  screen object are not ported.
- Missing reference: the draw path for the four static rows and the Login header (elements 11–15 of
  `0x009CFF00`), the text lookup/draw for `unitxt_e.prs` IDs 3–7, and the texture-atlas mapping for
  the `0x0082B6BC` element draw.

## Verification

`Scene2Tests` covers the saved previous state, selected state 9, fade 1 and the scene table row. It
does not test labels, assets, layout or transitions that the machine code does not establish.
