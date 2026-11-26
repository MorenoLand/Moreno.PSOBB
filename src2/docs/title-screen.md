# Title scene and menu

`PsoBB.Game.TitleScene` ports scene 1 of the baked table: the Sonic Team logo, the press-start
prompt, and the transition into the title menu. `PsoBB.Game.TitleMenu` ports the four-entry menu
surface. `PsoBB.Client.TitlePreview` drives both over a constructed `ClientHost` without changing
the host.

## Scene 1

| Member | Original | Work |
|---|---|---|
| `TitleScene` constructor | `0x007A45D0` | Sets scene parameter 1, loads the title, select-game and logo archives, creates the press-start and menu textures |
| `TitleScene.Update` | `0x007A4418` | Cancel requests a restart; the start screen advances through the original two-step state |
| `TitleScene.Dispose` | `0x007A44D0` | Releases the scene textures |
| `AdvanceStartScreen` | `0x007A44F0` | State 0 waits for confirmation; state 3 requests scene 2 |
| `TitleMenu` constructor | `0x004121F0` | Creates the four-entry menu at the original origin `(131,182)` and entry size `180x38` |
| `TitleMenu.Update` | `0x0041245C` | Moves the selection with wrap and input repeat, sets the selected alpha to 255 and fades the others by 25 |
| `TitleMenu.Confirm` | `0x00413F54` | Dispatches the selected action and requests the scene the title screen enters |
| `TitleMenu.Draw` | `0x00412800` | Adds one label quad per entry with `(alpha << 24) \| 0xFFFFFF` |
| `TitleMenu.Cancel` | `0x007A6174` | Requests a restart from the exit scene |

## Assets

The scene resolves names through `IDataFiles` and decodes the XVM payload. A GSL entry may store a
raw XVM archive or a PRS stream with a zero declared decompressed size, so the loader probes the
`XVMH` magic and decompresses the stream when needed.

| Name | Use |
|---|---|
| `title2_eng.xvm` / `title2.xvm` / `title.prs` / `title_eng.prs` | 256x256 title atlas; rows 4, 36, 68, 100 and 132 hold `PRESS START BUTTON`, `ONLINE GAME`, `OFFLINE GAME`, `OPTIONS` and `HOME PAGES` |
| `f256_selectgamen_a_eng.prs` / `f256_selectgamen_a.prs` | Optional select-game atlas; texture 2 holds the same four menu labels |
| `logo.prs` | Eight logo pieces: four 256x256 textures and four 128x128 textures |

The title atlas is drawn full-screen at `640x480`, so its first row occupies `(0, 7.5)` with size
`640x45`; this is the press-start prompt position. The menu uses rows 1 through 4 at the original
entry positions. The optional select-game texture is loaded and exposed but the menu draws the title
atlas so both retail sets decode through the same path.

## Logo composition

`0x00411E30` draws one four-vertex triangle strip per logo piece from the table at `0x009A3840`.
The table is eight rows of `(texture index, x, y, width, height)`, in draw order:

| Texture | Position | Size |
|---|---|---|
| 7 | `(512,384)` | `128x128` |
| 6 | `(512,256)` | `128x128` |
| 5 | `(512,128)` | `128x128` |
| 4 | `(512,0)` | `128x128` |
| 1 | `(0,256)` | `256x256` |
| 0 | `(0,0)` | `256x256` |
| 3 | `(256,256)` | `256x256` |
| 2 | `(256,0)` | `256x256` |

Texture coordinates are the full `(0,0)-(1,1)` rectangle. The depth argument `-150.0` only feeds the
`1.0 - argument` z value; the `-1.0 / argument` quotient is written below the vertex array and never
read. There is no rotation or scale.

`0x00415AB0` sets alpha blending off, alpha operation `SELECTARG2`, lighting off, diffuse material
source colour 1, clamp addressing, and the `0x144` transformed/coloured/textured vertex format. It
does not set blend factors, alpha test, culling or z state. Because blending is off, the white
background is removed by a colour key rather than by blending. The port converts pure white texels in
`logo.prs` to zero alpha at upload and then enables alpha test (`GREATER`, reference 0). The
full-screen white 128x128 pieces therefore become fully transparent.

## Transitions

- Confirming the press-start requests scene 2, matching `0x007A44F0`.
- Cancelling the press-start requests a scene-loop restart, matching `0x007A4418`.
- Menu confirmations request the scenes of the title screen switch at `0x00414320`: online to scene
  11, offline to root 11 and scene 5, options to root 6 and scene 3, home pages to root 15 and scene
  5.
- Cancelling the menu requests the scene-loop restart.

## Limitations

- Scene 2's own initialiser and update are not ported. The preview keeps the menu surface visible in
  place of the scene 2 loop after the original scene 2 request.
- The eight logo pieces use the original table positions and full texture coordinates; the original
  z value is not represented by the port's two-dimensional quad list.
- The press-start prompt accepts the confirm action; the original callback reacts to any window input.
- The network-state check that requests scene zero is not ported.
- Audio, network login and the options pages behind the menu are not ported. The original scene 1 has no movie playback path; see [Scene 1 startup media boundary](intro-movie.md).
- The select-game texture is loaded and validated but not drawn; the title atlas supplies the menu
  labels.

## Verification

`TitleSceneTests` and `TitleMenuTests` use synthetic GSL archives with raw and PRS-compressed XVM
payloads. They cover archive loading, the two-step press-start transition, wrap and repeat selection,
alpha fade, the four confirm transitions, cancel, the eight logo positions and textures, the white
colour key, the exact logo and menu render-state sequences, expected quad positions and textures, and
clean release. The retail archive at `data/data.gsl` was decoded through
`WindowsFileSystem`, `DataFileRegistry` and `TitleScene`: press and select textures 256x256, eight
logo textures, four entries, press-start quad at `(0,7.5)` size `640x45` with UV
`(0,0.015625,1,0.109375)`, first menu quad at `(131,182)` size `180x38` with UV
`(0,0.140625,1,0.234375)`, and 11 created textures disposed 11 times. A Windows capture of the
start screen shows the SEGA and Sonic Team logos over black, with no white rectangle.
