# Scene 1 startup media boundary

The retail PC client has no in-client intro-movie playback path. Scene 1 is the title screen, and
its descriptor at `0x009FF7C0` contains only `0x007A45D0` (initialise), `0x007A4418` (update) and
`0x007A44D0` (release). The files named `opening_j.sfd` and `pso_x_*.mkv` are not opened by that
path and are not decoded by the client's code.

## What scene 1 does

| Address | Work |
|---|---|
| `0x007A45D0` | Creates the shared screen container, selects its screen 9, loads the logo resource group, creates `0x004D3408` and `0x007195C8` |
| `0x007A4418` | Draws the logo stage, handles the two input checks and requests scene 2 |
| `0x007A44D0` | Releases the title resources |

Scene 1 is the publisher-logo stage, not the title menu. Its screen 9 is `0x004D5A14`, and
`0x00411FB8` selects the eight-sprite `logo` descriptor by default. See
[Scene 1: the publisher-logo screen](scene-1-title.md) for the screen, resource, rectangle, timing
and boundary evidence.

`0x004D3408` is the thirteen-screen container used by both the title and menu scenes; the existing
`PsoBB.Scenes.CharacterPreview` port already records its table at `0x009ACB70`. `0x004D31F4`
activates a screen and `0x004D33C0` writes the screen's position and rotation vectors. Neither opens
a media file. The four `0x004D7E70` entries are the player-preview screens; the remaining entries are
interface screens.

The title resources are loaded from the GSL/data manager through `0x0078B184` and the logo pieces
are drawn from `logo.prs`. The source of the SEGA and Sonic Team marks is the logo texture set, not a
video stream.

## Import-table evidence

`PsoBB.exe` imports thirteen modules: `advapi32`, `dinput8`, `dsound`, `gdi32`, `imm32`,
`kernel32`, `shell32`, `user32`, `winmm`, `ws2_32`, `wsock32`, `d3d8` and `snmpapi`. It has no
`ole32`, `oleaut32`, `quartz`, `mfplat`, `mfreadwrite`, `wmp`, `mci`, `avifil32` or `msvfw32`
imports. The only `winmm` imports are the three timer calls; there is no MCI command. The only
`shell32` import is `ShellExecuteA`.

The sole `ShellExecuteA` call is at `0x007A638E`. Its verb is the static string `open` at
`0x0097D120`; its target is the writable buffer at `0x00AAE9A0`, not a static movie filename. It is
the shell-open helper and is not on the scene 1 initialise, update or release path.

`LoadLibraryA` is imported, but the shipped image contains no media-module name. The only dynamic
module names in the image are the game module, `d3d8d.dll` and `d3d8.dll`. No DirectShow, Media
Foundation or Windows Media Player object is created by the client.

## File evidence

| File | Size | Signature |
|---|---|---|
| `data/opening_j.sfd` | 23,634,729 | `30 26 B2 75 8E 66 CF 11 A6 D9 00 AA 00 62 CE 6C`: ASF/WMV GUID |
| `data/pso_x_op_j.mkv` | 20,426,168 | `1A 45 DF A3`: EBML/Matroska |
| `data/pso_x_op_e.mkv` | 20,425,684 | EBML/Matroska |
| `data/pso_x_op_ep2.mkv` | 20,094,092 | EBML/Matroska |
| `data/pso_x_ed_ep2.mkv` | 45,484,169 | EBML/Matroska |
| `data/pso_x_ed_ep2_u.mkv` | 45,770,233 | EBML/Matroska |

`opening_j.sfd` is an ASF file with a `.sfd` extension, not a CRI Sofdec container. The image also
contains the strings `psogc_j.sfd`, `psogc_j2.sfd`, `ending_normal.sfd` and `ult01.sfd` through
`ult04.sfd`, but none has a code reference. The string table at `0x00A0E340` (localised
`openning_*` names) and the movie-name entries at `0x0097E650` are dead data: the only code that
touches that area writes the constant `0x5368D4A5` to `0x00A0E2B8`.

`data/openning_j.pae` is a PRS-compressed PAE model/texture archive, not a movie: its PAE flags
mark compression, its declared decompressed size is `0x009524DC`, and its sections are model,
texture-list and XVM data.

## C host trace

The reference host was run with `RECOMP_LOGAPI=CreateFileA,LoadLibraryA`, `RECOMP_FRAMES=120` and
`RECOMP_DIR=D:\Games\PSOBB`. It loaded `data/data.gsl` and the title/player data through the GSL
manager and opened no `opening_j.sfd`, `pso_x_*.mkv`, `openning_j.pae` or `.adx` file. The trace was
limited to 120 message-loop turns and did not confirm a full title confirmation, so the static call
graph and import table are the primary evidence.

## Boundary

There is no original host media API, COM object or file selection to port for scene 1. Adding an
`IntroMovie` decoder would be a new host feature, not a port of observed client behaviour. No SFD
decoder, ASF decoder or synthetic-frame path is added, and no member is marked `[Original]` for this
work.

If the product later needs the retail ASF/WMV shown before the menu, the host contract must be
specified separately: a Windows implementation would choose and document its own media stack, and
Linux and Web would report their own unavailability. That is outside the current port and is not
claimed as original behaviour.
