# Scene 10: offline game

Scene 10 is the offline game scene, not a menu. The baked table row is `0x007BC27C` (init),
`0x007BB6D8` (update) and `0x007BBFB0` (release), at row 10 of the table at `0x009FF7C0`.

## Evidence

- `0x007BC27C` stores scene parameter 2 and root 10 at the end of initialisation. It runs the
  47-entry table at `0x00A0F2E0` through `0x0078B184`, creates the scene objects, then calls the
  character loader `0x006C324C`. On failure that loader runs the startup cancel helper
  `0x007BBB88`; scene parameter and root are stored afterwards either way.
- The character loader opens `PSO_CHARACTER` through the platform file API and reads
  `0xBAA4` bytes into four character records. The name is the string at `0x009CEAC8`.
- The table pairs an initialiser with its release function. `0x0078B184` calls the first word of
  every entry in order; `0x0078B0A0` calls the second word in reverse order from `0x007BBFB0`.
  Entry 17 is `0x00796708` / `0x00793F48`, which loads and releases `lightentry.bin`.
- `0x007BB6D8` reads `0x00A95624`. A zero value calls the pre-game update `0x007BB6F0`; a nonzero
  value calls the field update `0x007BBBA8`.
- `0x007BB6F0` checks the map-ready flag `0x00AAB378` (`0x007A616C`) and the scene-event flag
  `0x00AAB380` (`0x007A6120`). The map-ready path initialises the map tables through
  `0x0080C3C4`, `0x0080C79C(0)`, `0x0080CF44` and `0x00810550`, creates the 408-byte game object
  through `0x006BC800`, sets `0x00A95624` to one and clears the scene-event flag.
- `0x007BBBA8` consumes the scene-event flag first and the map-ready flag second. The scene-event
  path clears both flags through `0x007A6108` and `0x007A6154`; the map-ready-only path clears
  `0x00AAB378`. The pre-game scene-event path also clears `0x00AAB380` at the end of its shared tail.
- Escape is `0x007BFEDC`. The pre-game path calls `0x007BBB88`; the field path calls
  `0x007BBF8C`. Both clear both flags and `0x00A95624`, and call `0x007A6174`, which requests a
  scene-loop restart (requested scene 0, transition 3). They do not return to a menu.
- There is no draw entry for scene 10. The field map, objects and player are rendered by the
  unported game systems, so the scene itself submits no quads and owns no two-dimensional layout.

## Ported surface

`PsoBB.Scenes.OfflineScene` stores scene parameter 2 and root 10, resolves `lightentry.bin`
through `IDataFiles` and `MapLightTable`, and reads `PSO_CHARACTER` through `IDataFiles`. A save
shorter than `0xBAA4` is rejected, matching the fixed read size, and the complete image is parsed
into `PsoBB.Save.CharacterSave`. A missing save enters the same startup cancel path and requests the
restart before the scene parameter and root are stored. A missing light table is tolerated; a
malformed one is rejected by the shared parser.

The 47 initialiser and release pairs are exposed as `OfflineScene.InitTable` with both original
addresses. `Update` dispatches on `GameState.GameStarted`; the map-ready and scene-event flags are
the `SceneManager` members at `0x00AAB378` and `0x00AAB380`. Escape in either phase requests the
restart and clears the flags. Release resets the game and drops the loaded save and light table.

## Field scene composition

`PsoBB.Scenes.FieldScene` runs the in-game field or lobby over an initialised `OfflineScene`. It
calls the scene-10 update, pumps an optional `LobbyWorld`, binds the world's local player to the
scene's `PlayerCharacter`, and spawns one `FieldEntityView` for every player slot that has a
packet-supplied position and a host-registered model, except the bound local player. `SetMap` binds
the loaded `MapScene`; its object placement records are drawn at their stored position and rotations
through the shared Euler transform stack when the host registers a model for the object id. The
object entity manager that consumes the table is unported. The draw path collects placed object
models, the local player and the player views in that order through `ModelRenderer`; `SceneRenderer`
then submits its opaque, alpha-tested and blended passes. The camera is supplied to `Draw`, as for
the character preview, so the unported field camera controller is not reconstructed.

A stop or joiner-sync packet supplies the view position and heading; walk and run records only set
the network target coordinates and do not move the view because the entity animation layer is not
ported. A root-object-despawn record removes the view immediately because its transition is not
ported. Map render geometry, object model selection, the camera controller and the HUD remain with
their unported managers; the host supplies the NJCM models and textures stay unbound on the
surfaces.

## Unported boundary

- The 46 initialisers and releases other than the light-table pair are not reproduced; their
  addresses and order stay in `InitTable` so the boundary is explicit. The initialisation cancel
  gate `0x005BA1F0` is not reproduced, so the port always stores scene parameter 2 and root 10.
- The scene does not consume individual save fields; the container decoder lives in
  `PsoBB.Save.CharacterSave` and keeps unproven regions opaque. The 408-byte game object, the map and
  object streaming behind `0x0080C79C`, `0x0080FAB8`, `0x0080D578` and `0x0077B1A0`, the player
  entity and the field renderer are not ported.
- The scene-event and map-ready paths set and clear the same flags as the original but do not run
  the unported UI, camera, map and object work behind them.
- `0x007C04EC`, the audio, task-tree and camera releases inside `0x007BBFB0`, and the globals
  `0x00A8EBA4`, `0x00A8F744`, `0x00A8FCB4`, `0x00AAFC90` and `0x009C9558` in `0x007BB668` are not
  ported. `FieldScene` keeps the object-model, player-model and entity-model registrations, the
  armed scene-10 update, the lobby pump and the model submission outside those managers.

## Verification

`OfflineSceneTests` builds loose synthetic files for the save and light table. It covers the
initialiser table and order, save and light loads, missing and short saves, missing light, map
completion, both flag paths, cancel in both phases, empty drawing, idempotent release, disposed
guards and the retail `lightentry.bin` table when the data folder is present.

`FieldSceneTests` uses loose synthetic save, light, render, collision, room and object files, a
synthetic lobby packet stream and the NJCM test model. It covers map-load start, local-player
binding, object then player then entity draw order, entity spawn, stop update and removal, local
movement from a stop packet, the supplied camera view and projection, empty and missing data, null
arguments, slot range checks and idempotent release.
