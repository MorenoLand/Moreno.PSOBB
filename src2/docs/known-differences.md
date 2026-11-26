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
