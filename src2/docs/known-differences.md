# Known differences from the original client

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

## WebGL renderer

The browser WebGL 2 renderer preserves the Direct3D 11 renderer's visible output for solid geometry, textures, blending, depth, stencil, alpha test and fog. The remaining differences come from the browser graphics API.

- Vertical sync is controlled by the browser's presentation scheduler; `RenderSettings.VSync` has no effect.
- WebGL 2 has no polygon fill mode, so the Direct3D 8 wireframe state is ignored and geometry stays solid.
- A lost WebGL context is not restored in place. The next renderer call reports the loss, and the host must dispose and recreate the renderer.
- Multisample counts are reduced to the browser's `MAX_SAMPLES`; the resolved count is reported in `RenderSettings.MultisampleCount`.
