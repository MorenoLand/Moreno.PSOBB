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
| `title.prs` / `title_eng.prs` / `title2_eng.xvm` | 256x256 title atlas; rows 4, 36, 68, 100 and 132 hold `PRESS START BUTTON`, `ONLINE GAME`, `OFFLINE GAME`, `OPTIONS` and `HOME PAGES` |
| `f256_selectgamen_a_eng.prs` / `f256_selectgamen_a.prs` | Optional select-game atlas; texture 2 holds the same four menu labels |
| `logo.prs` | Eight logo pieces: four 256x256 textures and four 128x128 textures |

The press-start quad uses the atlas row at `(0,4)-(256,28)` drawn at `(192,96)` with size `256x24`.
The menu uses rows 1 through 4 at the original entry positions. The optional select-game texture is
loaded and exposed but the menu draws the title atlas so both retail sets decode through the same
path.

## Transitions

- Confirming the press-start requests scene 2, matching `0x007A44F0`.
- Cancelling the press-start requests a scene-loop restart, matching `0x007A4418`.
- Menu confirmations request the scenes of the title screen switch at `0x00414320`: online to scene
  11, offline to root 11 and scene 5, options to root 6 and scene 3, home pages to root 15 and scene
  5.
- Cancelling the menu requests the scene-loop restart.

## Limitations

- Scene 2's shared state and fade are ported in `PsoBB.Scenes.Scene2`; its screen controller, menu,
  assets and draw are not. The preview keeps the menu surface visible in place of the scene 2 loop.
- The eight logo pieces are drawn as a 3x2 arrangement from their stored dimensions rather than the
  original vertex fan and rotation.
- The press-start prompt accepts the confirm action; the original callback reacts to any window input.
- The network-state check that requests scene zero is not ported.
- Audio, network login, movie playback and the options pages behind the menu are not ported.
- The select-game texture is loaded and validated but not drawn; the title atlas supplies the menu
  labels.

## Verification

`TitleSceneTests` and `TitleMenuTests` use synthetic GSL archives with raw and PRS-compressed XVM
payloads. They cover archive loading, the two-step press-start transition, wrap and repeat selection,
alpha fade, the four confirm transitions, cancel, expected quad positions and textures, and clean
release. The retail archive at `data/data.gsl` was decoded through
`WindowsFileSystem`, `DataFileRegistry` and `TitleScene`: press and select textures 256x256, eight
logo textures, four entries, press-start quad at `(192,96)` with UV `(0,0.015625,1,0.109375)`, first
menu quad at `(131,182)` size `180x38` with UV `(0,0.140625,1,0.234375)`, and 11 created textures
disposed 11 times.
