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

`PsoBB.Scenes.CharacterMakingScene` loads `charamakingmot.bml`, both `.prs` texture archives and
the optional `CHARA.adx` music entry through `IDataFiles`. `PsoBB.Scenes.CharacterPreview` builds
the thirteen screens and four player slots from the constructor table and selects screen 8 on
entry.

`CharacterCreationScreen` records the constructor address, allocator size, scale at object
`0x6C` and group word at `0x38` for every entry. `CharacterClassSelection` ports the three-row
class grid: row moves wrap through three rows, class moves wrap within the selected row,
confirmation advances from row selection to class selection, and the original sound identifiers
1391, 1392 and 1395 are raised through `CharacterMakingScene.SoundEffectRequested`. The row bounds
are supplied by the host because the table at `0x91D9C0` is not part of the lift.

`CharacterNameEntry` ports the twelve-character truncation, leading tab and full-width space
removal, graphic-character filter and rejection of an empty result at `0x4E732C` and
`0x4E7308`.

`CharacterPreviewModel` loads a model entry and its embedded textures, advances its motion clock,
samples translation, rotation and scale tracks between keyframes, walks the visible node tree,
and submits every opaque and translucent index buffer through `SceneRenderer`. The four preview
slots use the first four model-bearing entries of the loaded archive and share the first motion
from `charamakingmot.bml` when an entry has none. A host that loads the per-class model archive
through `LoadPreviewModels` supplies that archive explicitly.

The two full-screen surfaces are submitted to `UiDrawList` in creation order at `(0,0)` with the
original `639x479` vertex extent and `(0,0)-(1,1)` texture coordinates. Cancelling calls
`SceneManager.RequestRestart`, which stores scene 0 with transition kind 3. Confirming calls
`SceneManager.RequestScene(2)`. The original processes cancel first and does not return, so a
confirm in the same frame replaces the restart request; the port keeps that order.

## Unported boundary

- The class-model name table at `0x9B1620` and the class row bounds at `0x91D9C0` are not in the
  lift. A retail motion archive that carries no NJCM entry leaves all four preview slots unloaded;
  the host must supply a model archive when the retail layout requires one.
- The camera modes, target selection and input branches of `0x4D80A4` are not ported; only the
  motion clock and node refresh are.
- The NMDM interpolation-mode table selected at `0x8303DC` is not ported. Sampling is linear
  between adjacent keyframes. The node Euler order is the port's `CreateFromYawPitchRoll` order;
  the alternative order selected by node flag `0x20` is not reproduced.
- The input-method round-trip comparison at `0x813F0C` is not ported; the host supplies the
  composed edit-box text.
- The text-panel scroll and billboard path at `0x4D68A0`, and the remaining screen-specific
  controls of constructors 4, 5, 6, 7, 9, 10, 11 and 12, are not ported.
- Preview surfaces use the model renderer's default culling; the original per-mesh render-state
  culling command is not applied.
- The slot placement table at `0x9ACE68` is not ported; each preview slot defaults to the origin
  and the host sets its position and yaw.
- The initial engine fade and controller-config copy at `0x0082ACD8` and `0x007BEBE8`, the
  four-entry render setup at `0x00793CF0`, and the task tree's render sorting are not ported.
- Music decoding only happens when an `AudioPipeline` is supplied; path resolution and presence
  are always reported.

## Verification

`CharacterMakingSceneTests` builds synthetic GSL archives with minimal BML models, four model
entries, PRS-compressed XVM surfaces and a music placeholder. It covers asset resolution, screen
metadata, four loaded previews, node-surface submission, motion advancement, class moves and
clamping, sound routing, name trimming and length, cancel and confirm transitions, same-frame
order, draw order and quad geometry, idempotent release, a missing model and the re-entry flag.
