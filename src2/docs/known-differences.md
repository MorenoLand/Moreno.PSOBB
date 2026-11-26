# Known differences from the original client

## Network session

`PsoBB.Net.GameSession` keeps the original wire format, the eight-byte padding before encryption, the receive-buffer limit and the welcome key order. Its transport and lifecycle differ in these ways:

- The desktop seam connects synchronously and then switches the socket to non-blocking mode. The original starts a non-blocking connect and polls it from the socket state machine, so a slow host can delay the first frame here where the original would keep running.
- A remote orderly close moves the session to `Disconnected`. The original latches an error byte and runs its disconnect handler. A transport error moves this session to `Failed` with a reason instead of only setting the error byte.
- Partial sends are retained in an ordered queue and retried. The original calls the socket send wrapper once per packet and treats a short result as an error.
- The session validates and applies the command 0x03 and 0x9B welcomes, then returns the welcome packet to the caller. The original welcome handlers also build and send the client login or 0xDB registration packet from account state; that response belongs to the protocol layer above the session.
- `LoginFlow` stops at the command 0x19 redirect. The notes establish the 0x93 login, 0xE6 client initialization, 0xE0 system-file request, 0xE1 or 0xE2 answer, 0xE3 preview request, 0xE4 choice answer and 0x19 redirect, but no ship, block or lobby list command and no 0xE5 preview body. The caller re-arms a flow on the next connection with the login phase that connection needs.
- `LoginFlow` has no protocol timer. The transport is non-blocking and the host pumps the flow; a stalled server leaves the current stage waiting, and an orderly close or transport failure moves the flow to `Failed`.
- A browser page cannot open a raw TCP stream. `BrowserGameConnection` refuses transport operations and a host relay must implement `IGameConnection` over WebSockets.

## Lobby world

`PsoBB.Net.LobbyWorld` ports the player-state core of the command 0x64/0x65/0x66/0x67/0x68/0x69 handlers, the 0x60/0x62/0x6C/0x6D record walk of `0x00800860`, and subcommands 0x3E/0x40/0x42/0x4E/0x70/0x71/0x72. It keeps the original field offsets, the twelve-slot client-id range, the record-size walk and the map action-permission mask.

- The join handlers store the join flags and player lobby records; the original menu objects, scene teardown, appearance, inventory and animation work stay outside this surface.
- A game-join record whose name field is empty is not registered, because the world has no other field that distinguishes an unused game-join slot from client id zero.
- Subcommands without a handler in `LobbyWorld.Subcommands` are ignored; the table currently holds only the movement, despawn and joiner-sync entries that are ported.
- The action-permission bytes are the shipped-image defaults at `0x00A10160`. The original can replace them from map `.rel` data; that replacement path is not ported.
- Movement records update the tracked position, heading, floor, room, near-enemy flag and locomotion state. The original also applies root-object and `+0x328` state gates and runs its animation and action-state helpers; those entity flags are not part of this surface.
- `0x70` stores base identity, room, flags, position, phase and current HP. Inventory, visual configuration and the original destroy-and-recreate player construction are not ported.
- `0x4E` marks the tracked player as leaving and does not fire the original despawn animation or particle effect.
- `0x71` sets the in-game phase but does not construct a missing local player or send the local 0x70 announcement; `0x72` sets the same phase and does not close the original menu object.

## Server endpoints

The client host names come from `PsoBB.Net.ServerHostTable` because the image strings are host-patched and the retail executable is not part of this repository. The mode, alternate-set and configuration-test results are selector inputs; the branches and ports match the original. See `server-endpoints.md` for the C# members and their inputs.

## Options

`GameOptions` reads the original registry names and layouts. The original has no persisted key-binding value, no numeric music or sound-effect volume and no other chat preference; the fixed control map and the `SOUNDCTRL` enables are all it stores. `PsoBB.Input.Bindings`, `PsoBB.Audio.MusicVolume` and `PsoBB.Audio.SoundVolume` are portable additions documented in `configuration.md`.

The original accepts resolution preset five although its table has five entries, so preset five reports a zero width and height. The port keeps that result rather than inventing a sixth resolution.

## Scene 5 is character making

The scene at `0x004E9C74` is the character-making screen, not the options menu. It loads
`charamakingmot.bml`, `CHARA.adx`, the `f256_ad_pic_2` and `f256_backtext` surfaces, creates the
thirteen-screen preview container and activates screen 8. The port adds the thirteen constructor
records, the three-row class selection with its original sound identifiers, the twelve-character
name rules and a preview model/motion renderer. Per-screen controls, the class row table, the
class-model archive table, camera modes and IME conversion remain at the documented boundary; see
`scene-5-character-making.md`. The options controls are the pause-menu panel at
`0x007538EC`/`0x00753D84`.

## Text resources

`PsoBB.Data.Pr2Container` and `PsoBB.Data.Pr3RelocationTable` decode the locale text containers. `PsoBB.Text.UnitxtTable` parses the indexed UTF-16 bundles and `PsoBB.Text.GameText` reads the title and account labels from list 41. The differences are:

- PR3 relocation is exposed as field and target payload offsets. The original adds the loaded payload address to each field; a managed byte array has no equivalent base, so the port returns the same field-to-target association without an absolute address.
- A truncated PR2 header, a stream that differs from its declared size, an invalid PRS stream, a pointer outside the payload and a string without a UTF-16 terminator are rejected with `Pr2FormatException` or `UnitxtFormatException`. The original trusts these files and reads outside its allocation.
- A unitxt bundle with a non-positive list count is rejected. The original marks the table unloaded, leaves the list pointer null and would read through it on the first lookup.
- Unitxt decompression uses the original 0x90000-byte temporary buffer, so a bundle that expands beyond it is rejected instead of overwriting adjacent memory.
- The client also loads the locale `text*.pr2` string blobs, but the lift has no reader for their relocated root. The port decodes the containers and does not invent a string-ID mapping for those blobs; the title, menu, item and system strings exposed by `GameText` come from the unitxt tables.

## Scene 13 is the post-credits save screen

The scene at `0x006C8408` is the save-after-credits screen, not the visual lobby. Its two rows
resolve to the retail `Save.` and `Exit without Saving.` strings, and it plays `title.adx`. The port
keeps the scene parameter, both full-screen surfaces, the menu position and rows, and the cancel,
save-request and root-scene transitions. It stops at `SaveRequested`: the save-file state machine
at `0x006C7CD0` through `0x006C80FC`, the serializer at `0x006C2608` and the `0x0086B324` file write
are not ported because the session and character records they write are not ported. The status
rows, the tiled advertisement and background animations, the generic menu/camera/rendering
initialisers from `0x009CEC28`, and the `-900` audio argument are also not reproduced. See
`scene-13-save-game.md`.

## Archive readers

The portable archive readers in `PsoBB.Archives` turn archive bytes into a validated directory. The original reads through a fixed zero-filled buffer and a host file API that returns short reads, so it has no equivalent truncation errors. The readers expose declared table values; the original's storage layer rounds every read to 2048-byte sectors.

- AFS extraction returns exactly the declared offset and size. The original records only the section's sector index and derives its length from the next section's sector (`0x0086D92C`, `0x0086DAB0`), so the client reads sector-rounded ranges even when the table declares exact sizes.
- GSL parsing rejects an archive shorter than one directory slot and a directory that ends inside a named slot. The original reads into a zero-filled buffer and would see an empty name after the short read.
- GSL extraction rejects a stored range outside the archive, a malformed PRS stream, and a stream whose output differs from the declared decompressed size. The original reads sector-rounded blocks and trusts the declared size.
- Both readers take a complete archive in memory and return the stored range directly. The original streams sectors through its 16-slot asynchronous file table and rounds every read to 2048 bytes.

## Map scene readers

The portable scene readers validate every table, pointer slot and stream before use. The original trusts the hostile file and would read or write outside its allocation on a malformed map. Those checks are intentional.

- REL pointer slots are read as zero-based image offsets. The original adds the guest buffer address to each slot; a managed byte array has no equivalent base, so `RelContainer` validates the slot and exposes the same offsets.
- A missing section terminator, negative count, table outside the image, or face index outside the vertex array is reported as `SceneFormatException` instead of continuing into unrelated bytes.
- The BML loader reads the first 0x800-byte header block and aligned streams from a complete buffer. The original reads the same ranges through its asynchronous asset buffer and screen-loading state machine.
- Ninja chunks are exposed as type and body bytes. NJCM/NJTL model conversion, texture upload and render-state setter semantics are not part of this loader batch.

## Model readers

The portable model readers in `PsoBB.Models` turn Ninja chunk streams into node trees, vertex arrays, index buffers, material state and keyframes. The original walks guest pointers inside fixed load buffers.

- Pointer relocation adds the represented buffer base, which is zero in the flat portable model, so relocated pointer words stay file-relative offsets. Payload pointers are then rebased to the payload start. The table traversal and bounds checks match `0x0083B124` and `0x005BA264`.
- Truncated chunks, out-of-range pointers, unsupported vertex formats and invalid buffer indices are rejected. The original would read past the mapped buffer or draw with an unchecked index.
- The NMDM header carries no bone count. The caller supplies the model node count as the original does; a standalone motion can use a length-derived bound.
- The PAE container is the project's asset wrapper. Its model and texture-list sections reuse the client's relocated-block and Ninja chunk layouts, so the inner formats remain the original ones.
- `PsoBB.Scene.BmlArchive` and `PsoBB.Models.BmlArchive` currently parse the same container at different depths: the scene copy exposes stream ranges for map props, the model copy builds model, motion and texture objects. They are kept as separate layers until the scene loader consumes the model archive directly.

## Sound assets

The portable loader reads the client's fixed bank table, not a directory from the `.pac` file. The table values were extracted from the data image; no game audio is stored in this repository.

- A bank sample must be integer PCM with a consistent block align and a stored range inside the bank. The original passes the header directly to DirectSound and trusts the fixed offset and byte count, so a malformed bank that DirectSound might accept is rejected here with `AudioFormatException`.
- A missing map bank still selects the map and leaves no map samples, matching the original's successful return after a failed asset load. A malformed bank that exists is an error.
- Streamed music uses NVorbis over an in-memory copy of the entry. The original decodes with its in-binary Vorbis implementation, whose lifted output is already known to be corrupt; the port intentionally uses a correct decoder.
- `SoundEffectPlayer` loops a clip over its metadata loop region. The original arms a DirectSound position notification at the loop end; the audible region is the same, but the host notification mechanism has no portable counterpart.


## Texture cache

`PsoBB.Graphics.Textures.TextureCache` keeps the original fixed 1024-entry request table and the
global-index key. The original frees a request slot when its reference count reaches zero and later
reloads from the model's source descriptor. The port retains the decoded `TextureImage` in the
cache instead, so a released GPU texture can be uploaded again; the renderer seam creates it from
decoded BGRA pixels rather than the original's Direct3D 8 formats and pitch calculation.

- The XVM chunk format selector indexes the original table at `0x00A21B40`. Indexes 2 and 12 are `D3DFMT_R5G6B5`, not BGRX8888; `XvmTextureReader` and `DxtDecoder` now decode the 16-bit layout. CPU expansion to BGRA uses 5/6-bit scaling; the original GPU conversion may round intermediate components differently.

## Interface controls

The menu controls in `PsoBB.Gui` run above `UiElement` and take synthetic `UiEvent` messages. The original controls read the DirectInput and IME globals directly and are placed from data-driven layout records, so the port exposes positions, colours and text as properties instead of loading a layout.

- A button invokes its callback on a completed click or a focused Return or Space press (`0x00713068`). The shared transition animation in `0x00713054` is not reproduced; highlighting is the element state bit.
- The list window reproduces the original row navigation (`0x00736768`, `0x007381E0`), activation (`0x0073885C`) and the three-frame scroll fields (`0x00715178`, `0x007151DC`, `0x0071522C`). The original has no separate scroll-bar class: the scroll state and its two child elements live in the list window, so `UiScrollBar` exposes that state as an element.
- The check box is the original two-state selector record (`0x0073E5D4`) and advance rule (`0x0073E60C`). The original draws the selected value as text (`0x0073E6B4`); the port draws a filled inset quad and leaves the label to the caller.
- The edit box receives `TextInput` messages instead of reading the Windows IME composition buffer in `0x00723BDC`. The commit still removes ASCII and full-width spaces before storing the line.
- Labels use the text surface for drawing and measure their width for `AutoSize` instead of the original's scale animation (`0x0073A4EC`, `0x0073A524`).
- The pause option panel (`0x007538EC`) keeps the original rows, text identifiers, value order, flag masks and `EXT0` write. Its row control composes the shared list, label and value row instead of reproducing the original `0x00714AC8` child-list hit testing, and the pad-button and keyboard configuration windows remain external requests. The vibration row is defined at `0x00753D84` but the list at `0x0075377C` never appends it.

## WebGL renderer

The browser WebGL 2 renderer preserves the Direct3D 11 renderer's visible output for solid geometry, textures, blending, depth, stencil, alpha test and fog. The remaining differences come from the browser graphics API.

- Vertical sync is controlled by the browser's presentation scheduler; `RenderSettings.VSync` has no effect.
- WebGL 2 has no polygon fill mode, so the Direct3D 8 wireframe state is ignored and geometry stays solid.
- A lost WebGL context is not restored in place. The next renderer call reports the loss, and the host must dispose and recreate the renderer.
- Multisample counts are reduced to the browser's `MAX_SAMPLES`; the resolved count is reported in `RenderSettings.MultisampleCount`.

## 3D scene renderer

`PsoBB.Rendering.SceneRenderer` ports the camera, view and projection composition, the model transformation stack and the opaque, alpha-tested and blended pass state from `0x0082EDC8`, `0x0082EEA0`, `0x00892565`, `0x0089241D`, `0x00830DF8` and `0x008362F0`. Its differences are:

- The scene and model loaders supply flat `SceneSurface` lists. NJ/NJCM hierarchy traversal, bone animation, mesh upload and map streaming stay in those loaders; the renderer receives one world matrix and vertex bytes per surface.
- `IRenderer.Draw` has no index buffer, so indexed surfaces are expanded into the vertex order the 16-bit indices name. Draw counts and triangle order match; the index buffer upload has no portable counterpart.
- The original fast arc-tangent at `0x0084D1FC` is reproduced by its small-angle polynomials through absolute values of 1.25 and by the runtime arc-tangent beyond that. The result still passes through the original 16-bit turn rounding.
- The original folds `inverse(view)` into the world upload so the fixed-function view cancels it. The port uploads the model matrix as `World` and the verified view as `View`, which composes to the same transform.
- Fixed-function lighting, materials, fog, shadow projection and texture-stage combine state are not ported. The renderer sets culling, depth, alpha and texture bindings only, and lighting and shadows stop at this boundary.
- Direct3D 11 rejects colour blend factors in the alpha slot on feature-level devices. The backend substitutes the matching alpha factor (`SourceColour` to `SourceAlpha`, and so on) when separate alpha blending is off; the colour operation is unchanged.
- Blended surfaces are sorted back to front by camera distance; the original orders its per-mesh alpha geometry by the same distance.

## Start-up runs the hook registrations before the engine chain

`GameStartup.Start` runs `0x0082CB00` and `0x0082D330` directly. The original reaches them near
the end of `0x007A64B0`, after the allocator and subsystem initialisers from `0x0082E940` onward.
Those initialisers are not ported, and the two hook functions only write the process globals
`0xACBEB0`/`0xACBEB8` and `0xACBEE0`, so the port performs them and reports the unported chain as
the boundary instead of inventing the missing work.

## The initial scene is chosen explicitly

`0x007A6454` has no call site in the lift, but `0x007A5E84` reads `0xAAB384` before any visible
initialiser. `SceneManager.SelectInitialScene` therefore runs during start-up. Its input is the baked
shipped value of `0x00ACBEC0` (zero), which `WinMain` overrides at run time from the command line;
that override is not ported.

## Online scene

`PsoBB.Scenes.OnlineScene` consumes the merged `LoginFlow` instead of reproducing the 123212-byte
network manager at `0x00797908` and the download transport behind `0x007A0370`. The scene sends no
packets itself; command 0x19 stops at `LoginFlowState.Redirected` because the client has no
separate ship, block or lobby list command.

The two download panels from `0x00407FB0` and `0x0040808C` are submitted while the scene is loading
or connecting. The original gates both on the progress-window state bit; the port has no download
window object and keeps the panels visible through the connection phase.

## Offline scene

`PsoBB.Scenes.OfflineScene` is the scene-10 shell. It loads the `PSO_CHARACTER` save and
`lightentry.bin`, keeps the 47 initialiser and release addresses, and reproduces the flag and
restart transitions. The save container is parsed into `PsoBB.Save.CharacterSave`, but the scene
does not consume individual fields; the 408-byte game object, player and field renderer are not
ported. The scene has no draw entry, so it submits no interface geometry. See
`character-save.md` and `scene-10-offline.md`.

## The scene table is baked from the shipped image

`SceneLibrary` contains the 19 rows of three function pointers at `0x009FF7C0`, copied from the
mapped piece at `0x009A2000` in the shipped `src/image.bin` (228 bytes, 12 bytes per row). The
scene loop at `0x007A5E84` uses a 12-byte stride.

## The display mode comes from the renderer settings

The original reads the mode from `0x00482AA0`, `0x004829E0` and `0x004829E8` inside `0x007A6080`,
after the configuration stage `0x0082D650` and the registry reads at `0x00482EAC`. The port takes
the same three values from `IRenderer.Settings`, the seam the host already applied, because the
configuration stage is not ported.

## Player movement

`PsoBB.Player` ports the local player's creation state, the input-to-heading speed step, the
heading interpolation, collision rejection and the `Player__Animate` clock.

- The weapon animation table (`weapon_anim_data`) and the model animation-object vtable are not
  ported. `PlayerAnimationSet` supplies the parsed idle, walk and run motions; `PlayerAnimation`
  advances and wraps them from the parsed motion frame count.
- `IGroundCollision` stands in for the wall and entity sweeps inside `player_about_to_collide`
  (`0x00693844`). A contact rejects the step and resets velocity, which matches the rejection
  return path; wall sliding, entity push-out and hitbox responses are not ported.
- The original's per-frame displacement reads the writable-data global at `0x00A94324`, which
  falls in the zero-filled uninitialised-data range. The portable step uses the verified walk and
  run speeds at `0x0096ED84` and `0x0096ED88` once per task update instead of inventing a value
  for the uninitialised global.
- The original sets the running movement bit for forward movement and chooses walk or run from
  the host's auto-run setting. The portable state distinguishes walking from running by the
  normalized speed threshold, because the auto-run setting is not part of `InputManager`.

## Writable-data initial values are baked zero

The writable globals at `0x00AAB378`-`0x00AAB3A8` and `0x00ACBE78`-`0x00ACBEE0` fall in the gap
between the shipped image pieces, which is the zero-filled uninitialised-data range. `GameState`
initialises every member to the same zero constant the loader supplies. The retail image contains no
non-zero value for this range, so no value is invented.
