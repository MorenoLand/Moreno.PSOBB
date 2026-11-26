# Scene 2

Scene 2 is the shared title and login interface. This assembly ports its lifecycle and the shared
state and fade protocol; the title art, the account dialog and the login list are supplied by their
own ports.

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

## Verification

`Scene2LifecycleTests` uses synthetic screens and a recording transition renderer. It covers the
initial state switch, the optional state callback, fade 1 and 2, the state-2/10/12 no-case result,
update-before-draw order, cancel, confirm, release, the screen table and the pump order. The oracle
captures are used only to confirm that state 9 is the observed login screen; no label, row or layout
is reconstructed here.
