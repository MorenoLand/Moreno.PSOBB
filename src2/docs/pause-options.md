# Pause options panel

`PsoBB.Scenes.PauseOptionsPanel` recreates the pause menu's option list from the original functions at `0x007536F4` (constructor), `0x0075377C` (list rows), `0x007538EC` (state machine), `0x00753C24` (row selection change), `0x00753C70` (value-to-flag mapping) and `0x00753D84` (value row). It uses the shared `UiListWindow` and `UiOptionRow` controls, `GameOptions` for the typed brightness value, `IGameSettings` for persistence and `PauseOptionState` for the session graphics bits.

## Rows

The original list is created with capacity eleven and a caption from message table entry 61 (`Options`). Ten rows are appended in this order; the identifier is the fourth argument the original stores with each list item and returns from `0x007365F4`.

| Id | Label source | Values | Flag bits |
| --- | --- | --- | --- |
| 0 | message 121 `Map Direction` | message 131 `Fixed`, 132 `Non-fixed` | 0 |
| 1 | table 0 / 6 `Function Key Setting` | table 0 / 7 `Menu Shortcuts`, 8 `Chat Shortcuts` | 25 |
| 2 | table 0 / 9 `Keyboard Controls` | message 196 `On`, 197 `Off` | 24 |
| 3 | table 0 / 10 `Mouse Controls` | table 0 / 11 `Off`, 12 `Drag`, 13 `Hold` | 20 through 22 |
| 4 | table 0 / 17 `Pad Button Config` | external pad window | none |
| 5 | table 0 / 0 `Keyboard Config` | external keyboard window | 1 (value row is not reachable) |
| 6 | message 123 `Cursor Position` | message 135 `Saved`, 136 `Non-Saved` | 2 |
| 7 | message 124 `Message Speed` | message 137 `Slow`, 138 `Normal`, 139 `Fast`, 140 `Very Fast` | 8 and 9 |
| 8 | message 125 `Vibration ` | message 196 `On`, 197 `Off` | 3 (row never appended) |
| 9 | message 129 `Auto Disconnect` | message 141 `15 minutes`, 142 `30 minutes`, 143 `45 minutes`, 144 `60 minutes` | 10 through 11 |
| 10 | message 130 `Brightness` | message 146 `+2 level`, 147 `+1 level`, 148 `Normal`, 149 `-1 level`, 150 `-2 level` | `EXT0` |

Message entries are read through `0x0079317C` (table 11); table-zero entries are read through `0x00792FE8`.

## Brightness and EXT0

The row labelled `Brightness` reads `0x00482A38`, clamps the selected index through `0x00482A60` and writes the value with `0x00482A80` as a four-byte `EXT0` value. `0x00482A40` applies the matching gamma offset before the write. The five offsets are the dwords at `0x009006E0`: `32`, `16`, `0`, `-16` and `-32`, matching levels `+2` through `-2`. `GameOptions.Brightness` therefore replaces the older `TextureDetail` name, which did not match the original label or the gamma table.

## Boundaries

- The pad-button configuration window and the keyboard configuration window opened from row 5 are separate original screens. The panel keeps their rows and raises `PadButtonConfigRequested` or `KeyboardConfigurationRequested`; the host resumes the panel with `ResumeFromExternalScreen`.
- Row 8 (`Vibration`) is defined by `0x00753D84` and updated by `0x00753C24`, but `0x0075377C` appends only rows 0 through 7, 9 and 10. It is unreachable in this build and is not appended.
- The original row control is a generic child list at `0x00714AC8`. The port's `UiOptionRow` keeps its label, forty-pixel value spacing, selected-child display and wrap-around selection, but does not recreate its mouse hit testing. The panel closes the row only on confirmation, matching the `0x0004` flag that `0x007538EC` tests; the row's cancellation flag is reported but the panel does not treat it as a close.
- Gamma application needs a renderer seam the portable library does not expose; the constructor accepts an `Action<int>` that receives the confirmed level.
- The host supplies the list size and the `PauseOptionState` bits. The pause-menu root that creates the panel and initializes those bits from the client structure is outside this port.
- The caption is drawn in a twenty-pixel header above the list; the original scene layout record fixes the exact caption and list rectangles and is not part of `0x007536F4`.
