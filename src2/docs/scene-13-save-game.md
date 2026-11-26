# Scene 13: save after the credits

Scene 13 is the **save-after-credits** screen, not the visual lobby. Its baked table row is
`0x006C8408` (init), `0x006C81A0` (update) and `0x006C8268` (release). The scene number is 13 and
it stores scene parameter 2; it does not set the root scene.

## Evidence

- `0x006C8408` calls `0x0082ACD8(0,0,0)`, `0x007BEBE8`, runs the first six function pairs of the
  list at `0x009CEC28` through `0x0078B184`, applies the light record at `0x009FF420` through
  `0x00793CF0`, creates the 468-byte NPC camera state through `0x004D3408`, selects preset 9 through
  `0x004D30FC`, and sets the view origin `(0,0,0)` and extent `(0,0,-100)` through `0x004D33C0`.
- It creates the `0x1C` interface-element manager through `0x007195C8` and the `0x40` menu entity
  through `0x006C82F4`, stores scene parameter 2 through `0x007A6198`, clears `0x00A95E88`, plays
  the name at `0x0096B8FC` through `0x00814AFC`, calls `0x00814888(-900)`, reinitialises the
  player record at `0x00A94290` through `0x006A92E8`, and presents through `0x0080030C`.
- The six-entry initialiser list at `0x009CEC28` is
  `0x004D471C/0x004D2AF0`, `0x004D4800/0x004D2774`, `0x00401220/0x00401094`,
  `0x0040141C/0x004012B0`, `0x0071A1F4/0x00719500` and `0x007933BC/0x00793190`. The third pair
  loads and frees `f256_ad_pic_2`; the fourth pair loads and frees `f256_backtext`.
- The music name at `0x0096B8FC` is `title.adx` in the shipped image. The advertisement name at
  `0x008F8524` is `f256_ad_pic_2`; the background name at `0x008F8558` is `f256_backtext`.
- `0x004012CC` and its draw method `0x0040131C` draw the background surface full-screen with
  colour `0x3B280A81`; `0x004010B0` and `0x004010E4` draw the advertisement surface through the
  tiled routine `0x00415BCC`.
- The menu constructor at `0x006C7C34` creates a two-row list window at the pair at `0x0096B8E0`
  (`324,374`), adds unitxt group 12 strings 13 and 14, and applies the scroll target 288.0. Retail
  `unitxt_e.prs` resolves those strings to `Save.` and `Exit without Saving.`. The row step is 20
  pixels (`0x00735C90` stores 20 times the row index).
- The state table at `0x009CEBE0` has 18 entries. States 3 and 5 through 11 are the file-save
  state machine: `0x006C7CD0` allocates the 0xBAA4-byte save image, builds four 0x2EA4-byte
  records, writes through `0x0086B324`, and checks the save result; `0x006C7E98` starts the
  “Saving Game Data.” status row; `0x006C7E58` rebuilds a one-row “Exit without Saving.” list after
  a failed save. `0x006C8598` creates the loading-screen object whose callback `0x006C8294`
  requests the root scene.
- `0x006C81A0` begins the scene through `0x0083ADBC`, polls shared and keyboard input through
  `0x007BECD4` and `0x007BFBA0`, applies preset 9 and the same view, updates the three global user
  interface calls at `0x0081745C`, `0x00817604` and `0x00818F80`, calls `0x005BA748`, `0x00814168`
  and `0x006C38BC`, and then tests `0x00A95E88 & 1`. When the flag is clear, `0x007BFEDC` requests
  the restart scene through `0x007A6174`; the `0x006DC358` test is always false in the shipped
  image, so the scene-zero request through `0x007A60DC(0)` is unreachable. It presents through
  `0x0080030C`.
- `0x006C8268` releases the global user interface through `0x00818560`, stops audio through
  `0x00815434`, sets `0x00814888(0)`, runs the six release pairs through `0x0078B0A0`, and presents.

## Ported surface

`PsoBB.Scenes.SaveGameScene` loads both surfaces through the merged archive reader and uploads
their first textures. It opens `title.adx` through `MusicLibrary` when an `AudioPipeline` is
supplied. The scene stores parameter 2, exposes the preset-9 camera constants, and starts in
`CreatingMenu`.

The first update creates the two-row menu. Its position is `(324,374)`, its row step is 20 pixels,
and its rows are the retail `Save.` and `Exit without Saving.` strings. Up and Down move the
selection with wrapping; Return on the first row enters `SaveRequested`; Return on the second row
requests the root scene; Escape requests the restart scene, matching `0x007BFEDC`/`0x007A6174`.
`Draw` submits the advertisement surface, then the background surface with `0x3B280A81`, then the
menu through `UiListWindow` and the merged text surface. `Dispose` detaches and disposes the music,
the two textures and the menu.

## Unported boundary

- The save-file state machine and serializer (`0x006C7CD0`, `0x006C7E98`, `0x006C7EE4`,
  `0x006C7F7C`, `0x006C7FF0`, `0x006C8024`, `0x006C80A0`, `0x006C80D4`, `0x006C80FC`,
  `0x006C2608`, `0x0086B324`) are not ported: the session and character records they write are
  not ported. Selecting Save stops at `SaveRequested`; no save is performed.
- The status list in the menu entity (`0x006C7BE0`, `0x006C7CD0`, `0x006C7E58`) and its unitxt
  strings 9 through 12 are not submitted. The port does not display save progress or failure text.
- The generic menu globals, NPC camera UI, rendering system, dressing-room UI and the remaining
  interface pair from the six-entry list are not ported. The port keeps the camera preset and the
  two surfaces but does not recreate those subsystems.
- The original list draws its own selection cursor through the list-window renderer. The port uses
  the merged `UiListWindow` selection fill and text colours, so the cursor sprite and its animation
  are not reproduced. The 288.0 value passed to `0x00736138` is not applied by the merged control.
- The tiled advertisement animation (`0x004010E4`/`0x00415BCC`), the alpha animation on the
  background (`0x0040131C`/`0x00401304`), and the `0x0083ADBC`/`0x0080030C` frame pair are replaced
  by the merged draw-list submission. The advertisement is submitted as one full-screen quad.
- The 0x14000-byte menu buffer, the `0x1C` interface-element manager, the global `0x00ACA2E4`
  interface root, `0x005BA748`, `0x00814168`, `0x006C38BC` and `0x006A92E8` player-record
  initialisation are not ported.
- The `-900` audio argument at `0x00814888` has no equivalent on `AudioMixer`; the port exposes it
  as `SaveGameScene.MusicAttenuation` but does not apply a gain.

## Verification

`SaveGameSceneTests` builds synthetic GSL archives with both XVM surfaces and an optional OGG
entry. It covers both surfaces and the title path, the first-update menu creation, the two retail
labels, the position and row step, save and exit transitions, cancel, wrapping navigation, draw
order and the background colour, idempotent release, and the missing-surface and missing-music
cases.
