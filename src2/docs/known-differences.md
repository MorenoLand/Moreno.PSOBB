# Known differences from the original client

## Network session

`PsoBB.Net.GameSession` keeps the original wire format, the eight-byte padding before encryption, the receive-buffer limit and the welcome key order. Its transport and lifecycle differ in these ways:

- The desktop seam connects synchronously and then switches the socket to non-blocking mode. The original starts a non-blocking connect and polls it from the socket state machine, so a slow host can delay the first frame here where the original would keep running.
- A remote orderly close moves the session to `Disconnected`. The original latches an error byte and runs its disconnect handler. A transport error moves this session to `Failed` with a reason instead of only setting the error byte.
- Partial sends are retained in an ordered queue and retried. The original calls the socket send wrapper once per packet and treats a short result as an error.
- The session validates and applies the command 0x03 and 0x9B welcomes, then returns the welcome packet to the caller. The original welcome handlers also build and send the client login or 0xDB registration packet from account state; that response belongs to the protocol layer above the session.
- A browser page cannot open a raw TCP stream. `BrowserGameConnection` refuses transport operations and a host relay must implement `IGameConnection` over WebSockets.

## Options

`GameOptions` reads the original registry names and layouts. The original has no persisted key-binding value, no numeric music or sound-effect volume and no other chat preference; the fixed control map and the `SOUNDCTRL` enables are all it stores. `PsoBB.Input.Bindings`, `PsoBB.Audio.MusicVolume` and `PsoBB.Audio.SoundVolume` are portable additions documented in `configuration.md`.

The original accepts resolution preset five although its table has five entries, so preset five reports a zero width and height. The port keeps that result rather than inventing a sixth resolution.

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

## WebGL renderer

The browser WebGL 2 renderer preserves the Direct3D 11 renderer's visible output for solid geometry, textures, blending, depth, stencil, alpha test and fog. The remaining differences come from the browser graphics API.

- Vertical sync is controlled by the browser's presentation scheduler; `RenderSettings.VSync` has no effect.
- WebGL 2 has no polygon fill mode, so the Direct3D 8 wireframe state is ignored and geometry stays solid.
- A lost WebGL context is not restored in place. The next renderer call reports the loss, and the host must dispose and recreate the renderer.
- Multisample counts are reduced to the browser's `MAX_SAMPLES`; the resolved count is reported in `RenderSettings.MultisampleCount`.

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

## The scene table is baked from the shipped image

`SceneLibrary` contains the 19 rows of three function pointers at `0x009FF7C0`, copied from the
mapped piece at `0x009A2000` in the shipped `src/image.bin` (228 bytes, 12 bytes per row). The
scene loop at `0x007A5E84` uses a 12-byte stride.

## The display mode comes from the renderer settings

The original reads the mode from `0x00482AA0`, `0x004829E0` and `0x004829E8` inside `0x007A6080`,
after the configuration stage `0x0082D650` and the registry reads at `0x00482EAC`. The port takes
the same three values from `IRenderer.Settings`, the seam the host already applied, because the
configuration stage is not ported.

## Writable-data initial values are baked zero

The writable globals at `0x00AAB378`-`0x00AAB3A8` and `0x00ACBE78`-`0x00ACBEE0` fall in the gap
between the shipped image pieces, which is the zero-filled uninitialised-data range. `GameState`
initialises every member to the same zero constant the loader supplies. The retail image contains no
non-zero value for this range, so no value is invented.
