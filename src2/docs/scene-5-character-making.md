# Scene 5: character making

Scene 5 is the character-making screen, not the options menu. The baked table row is
`0x004E9C74` (init), `0x004E9BD4` (update) and `0x004E9C58` (release).

## Evidence

- `0x004E9C74` calls `0x0082ACD8(0,0,255)`, `0x007BEBE8`, stores scene parameter 2 through
  `0x007A6198`, and then calls `0x004DF9EC`. When `0x00A721CC` is set it clears the flag and
  requests the exit scene through `0x007A6174`.
- `0x004DF9EC` creates the 468-byte preview container through `0x004D3408`, activates screen 8
  through `0x004D30FC(8)`, creates the `f256_ad_pic_2` and `f256_backtext` surfaces at
  `0x00401220` and `0x0040141C`, loads `charamakingmot.bml` from the table at `0x009B1308` through
  `0x005B7A84`, and opens `CHARA.adx` through `0x00814AFC`.
- The preview constructor table at `0x009ACB70` has thirteen entries. Entries zero through three
  use the same constructor, `0x004D7E70`, which is the four player preview slots. Entry eight is
  `0x004EB2C0`, the character-making category the scene activates.
- `0x004E9BD4` requests the exit scene on the cancel check `0x007BFEDC`, never takes the
  scene-zero request because `0x006DC358` returns zero, and requests scene 2 when the `0x50`
  control is selected. It does not read or write `GameOptions` or `IGameSettings`.
- The options controls are the pause-menu panel at `0x007538EC` and `0x00753D84`, including the
  `EXT0` write at `0x00753B84`. They are not part of scene 5.

## Ported surface

`PsoBB.Scenes.CharacterMakingScene` loads the model, both `.prs` texture archives and the optional
`CHARA.adx` music entry through `IDataFiles`. `PsoBB.Scenes.CharacterPreview` builds the thirteen
screens, four player slots and screen-8 selection from the original constructor table.

The two full-screen surfaces are submitted to `UiDrawList` in creation order at `(0,0)` with the
original `639x479` vertex extent and `(0,0)-(1,1)` texture coordinates. Cancelling calls
`SceneManager.RequestRestart`, which stores scene 0 with transition kind 3. Confirming calls
`SceneManager.RequestScene(2)`. The original processes cancel first and does not return, so a
confirm in the same frame replaces the restart request; the port keeps that order.

## Unported boundary

The creation controls, the 3D preview draw, the model animation and the character-name entry are
not ported. The initial engine fade and controller-config copy at `0x0082ACD8` and `0x007BEBE8`,
the four-entry render setup at `0x00793CF0`, and the task tree's render sorting are not ported
either. The scene exposes the loaded model, the preview container and the two interface surfaces
but stops before those screens. The two interface surfaces are submitted in creation order. Music
decoding only happens when an `AudioPipeline` is supplied; path resolution and presence are always
reported.

## Verification

`CharacterMakingSceneTests` builds a synthetic GSL archive with a minimal BML model, PRS-compressed
XVM surfaces and a music placeholder. It covers asset resolution, four preview objects, thirteen
screens with screen 8 selected, cancel and confirm transitions, same-frame order, draw order and
quad geometry, idempotent release, a missing model and the re-entry flag.
