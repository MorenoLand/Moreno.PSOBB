# Scene 1: the publisher-logo screen

Scene 1 is the publisher-logo screen that runs before the title menu. It selects screen 9 of the
shared thirteen-screen container, loads the `logo` texture archive and runs a timed logo sequence.
The left side of the logo table holds the SEGA and Sonic Team marks; the title menu with Login and
Start Game is scene 2 and is not part of this scene.

## Screen 9

The constructor table at `0x9ACB70` row 9 is `0x004D5A14`. The constructor allocates 0x6C bytes,
installs the vtable at `0xAFC7E8`, calls the base constructor `0x4D1F68`, stores four at `+0x38`
and clears `0xA48A9C`. `0x4D31F4` sets status bit 4 and activates the selection; `0x4D33C0` writes
the position to `+0x3C` and the direction to `+0x48` only when status bit 4 or 8 is set. The
initialiser calls `0x4D30FC(9)` and `0x4D33C0`, but the resource group then runs `0x4D471C`, which
clears the selection and status, so the first update is the call that activates screen 9 and
applies the vectors. This is the two-step screen activation.

Both the initialiser and the update write position `(0, 0, 0)` and direction `(0, 0, -100)`.

## Resources

The initialiser calls `0x78B184(0x9FF6A4, 0x30)`: six eight-byte pairs, initialised in order and
shut down in reverse order by `0x78B0A0`.

| Initialiser | Shutdown | Work |
|---|---|---|
| `0x0078DFE4` | none | sets bit 1 of `0xA9CA40` |
| `0x004D471C` | `0x004D2AF0` | clears the container selection, status and transform state |
| `0x004D4800` | `0x004D2774` | stores the display dimensions and initialises the title screen |
| `0x007933BC` | `0x00793190` | loads the localised text and font archive |
| `0x00411FB8` | `0x00411BCC` | loads the logo texture archive |
| `0x0078DDA4` | none | clears bit 1 of `0xA9CA40` |

`0x411FB8` calls `0x6DC358`; when the result is one it selects the descriptor at `0x9A36A0`
(`logo_cs`, 24 sprites) otherwise the descriptor at `0x9A36A8` (`logo`, 8 sprites). The shipped
`0x6DC358` at this address is `xor eax, eax; ret`, so the port selects the eight-sprite descriptor
by default. The eight names are `sega_logo01` through `sega_logo08`; `logo_cs` adds
`zarva_logo01` through `zarva_logo08` twice. The retail `logo.prs` entry in `data.gsl` decodes to
four 256 by 256 sprites and four 128 by 128 sprites.

The draw table at `0x9A3840` holds eight records of five 32-bit values:

| # | X | Y | Width | Height | Texture |
|---|---|---|---|---|---|
| 0 | 0x200 | 0x180 | 0x80 | 0x80 | 7 |
| 1 | 0x200 | 0x100 | 0x80 | 0x80 | 6 |
| 2 | 0x200 | 0x080 | 0x80 | 0x80 | 5 |
| 3 | 0x200 | 0x000 | 0x80 | 0x80 | 4 |
| 4 | 0x000 | 0x100 | 0x100 | 0x100 | 1 |
| 5 | 0x000 | 0x000 | 0x100 | 0x100 | 0 |
| 6 | 0x100 | 0x100 | 0x100 | 0x100 | 3 |
| 7 | 0x100 | 0x000 | 0x100 | 0x100 | 2 |

`0x415AB0` walks the table, adds the object variant from `0x411E30` to each texture index and
submits the eight rectangles. The variant is the word at object `+0x20`: zero uses offset 0, one
uses 8 and two uses 0x10. The state 3 handler sets it to one and the state 7 handler sets it to
two, so the simple path keeps offset 0.

## Timeline

`0x411BE8` starts the sequence with state 0, frame 0 and the global `0xA3B078` cleared. It schedules
`0x411E78` on the timer at `0x7889B0`: 255 divided by 8, thirty-two ticks. That callback advances
the state to 1.

`0x411C94` dispatches on the state through the jump table at `0x8FA96C`:

- state 1 increments the frame counter and, after it exceeds 60, sets state 2 and schedules
  `0x411E94` on the timer at `0x788938` (another thirty-two ticks);
- state 3 clears the counter, sets the variant to one and sets state 4;
- state 5 performs the state 1 step and sets state 6;
- state 7 clears the counter, sets the variant to two and sets state 2;
- state 9 performs the state 1 step and sets state 10.

`0x411E94` sets `0xA3B078` when the shipped check does not return one. With the shipped check the
simple sequence therefore finishes after 32, 61 and 32 updates. `0x411E94` continues through states
3 and 7 only when the cinematic checkpoint returns one.

The task object created by `0x7A4530` owns the sequence. Its update at `0x7A44F0` sees `0xA3B078`,
marks its child for destruction, and on the following pass requests scene 2. The scene 1 update
also calls `0x7BFEDC` and, when it returns nonzero, requests a restart, then calls `0x6DC358` and,
when it returns nonzero, requests scene 0. These are the two input checks that follow the timeline
in `0x7A4418`.

`0x7A44D0` releases the resource group through `0x78B0A0` and releases the interface resources.

## Ported

- `PsoBB.Scenes.Scene1` implements the `0x7A45D0` initialise, `0x7A4418` update and `0x7A44D0`
  release ordering, the resource table, the screen 9 selection and both transform writes.
- `PsoBB.Scenes.CharacterPreview` now models `0x4D30FC`, `0x4D31F4`, `0x4D33C0` and `0x4D471C`,
  including the status gate that defers the first transform write.
- `PsoBB.Scenes.TitleLogo` implements the `0x411FB8` descriptor selection, the `0x411BCC` release,
  the `0x9A3840` rectangle table and the `0x411E30` state offset.
- `PsoBB.Scenes.TitleLogoSequence` implements the `0x411BE8` initializer, `0x411C94` state machine,
  the `0x8FA96C` jump table transitions and the `0x788938`/`0x7889B0` timer delays.
- `Scene1Tests` covers the resource order, screen 9 activation, transforms, rectangle table, draw
  order, five timeline boundaries, cancel, confirm, release and missing archive.

## Boundary

Not yet ported:

- the title render object `0x793CF0` and its two child objects;
- the shared six-entry interface manager `0x7195C8` and its draw at `0x7199E8`;
- the task/input scheduler `0x7BECD4` and the key table polled by `0x7BFBA0`; the port applies
  the object update before the timer tick in one update, while the original runs both through the
  task manager at `0xACA384`
- the title overlay draw `0x78DDB8`;
- the screen-space projection `0x82B440`/`0x82BB74` that places the 640 by 512 logo rectangles in
  the display area; `TitleLogo.Draw` submits the original rectangles but the host still has to
  apply that projection;
- the localised text and font load `0x7933BC`, the metrics beyond width and height in `0x4D4800`,
  and the frame seams `0x83ADBC`, `0x814168` and `0x80030C`.

## Oracle

The C host was run as `bin\PsoBBHost.exe "D:\Games\PSOBB"`. The captured frames are in
`build/oracle-captures/t00.png` through `t29.png`:

- `t04.png` shows the logo stage: `PRESENTED BY`, the SEGA mark, `CREATED BY` and the Sonic Team
  mark on the flat background.
- `t07.png` shows the title background and logo that scene 2 owns.
- `t09.png` shows the real title menu with Login and Start Game; the menu appears automatically
  about nine seconds after start.

These frames confirm the scene order and the final composition. They were not used to derive any
layout: the rectangles above come from `0x9A3840`.
