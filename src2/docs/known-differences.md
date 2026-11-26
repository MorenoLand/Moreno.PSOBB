# Known differences from the original client

## Network session

`PsoBB.Net.GameSession` keeps the original wire format, the eight-byte padding before encryption, the receive-buffer limit and the welcome key order. Its transport and lifecycle differ in these ways:

- The desktop seam connects synchronously and then switches the socket to non-blocking mode. The original starts a non-blocking connect and polls it from the socket state machine, so a slow host can delay the first frame here where the original would keep running.
- A remote orderly close moves the session to `Disconnected`. The original latches an error byte and runs its disconnect handler. A transport error moves this session to `Failed` with a reason instead of only setting the error byte.
- Partial sends are retained in an ordered queue and retried. The original calls the socket send wrapper once per packet and treats a short result as an error.
- The session validates and applies the command 0x03 and 0x9B welcomes, then returns the welcome packet to the caller. The original welcome handlers also build and send the client login or 0xDB registration packet from account state; that response belongs to the protocol layer above the session.
- A browser page cannot open a raw TCP stream. `BrowserGameConnection` refuses transport operations and a host relay must implement `IGameConnection` over WebSockets.

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
