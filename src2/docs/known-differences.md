# Known differences from the original client

## Archive readers

The portable archive readers in `PsoBB.Archives` turn archive bytes into a validated directory. The original reads through a fixed zero-filled buffer and a host file API that returns short reads, so it has no equivalent truncation errors. The readers expose declared table values; the original's storage layer rounds every read to 2048-byte sectors.

- AFS extraction returns exactly the declared offset and size. The original records only the section's sector index and derives its length from the next section's sector (`0x0086D92C`, `0x0086DAB0`), so the client reads sector-rounded ranges even when the table declares exact sizes.
- GSL parsing rejects an archive shorter than one directory slot and a directory that ends inside a named slot. The original reads into a zero-filled buffer and would see an empty name after the short read.
- GSL extraction rejects a stored range outside the archive, a malformed PRS stream, and a stream whose output differs from the declared decompressed size. The original reads sector-rounded blocks and trusts the declared size.
- Both readers take a complete archive in memory and return the stored range directly. The original streams sectors through its 16-slot asynchronous file table and rounds every read to 2048 bytes.

## Model readers

The portable model readers in `PsoBB.Models` turn Ninja chunk streams into node trees, vertex arrays, index buffers, material state and keyframes. The original walks guest pointers inside fixed load buffers.

- Pointer relocation adds the represented buffer base, which is zero in the flat portable model, so relocated pointer words stay file-relative offsets. Payload pointers are then rebased to the payload start. The table traversal and bounds checks match `0x0083B124` and `0x005BA264`.
- Truncated chunks, out-of-range pointers, unsupported vertex formats and invalid buffer indices are rejected. The original would read past the mapped buffer or draw with an unchecked index.
- The NMDM header carries no bone count. The caller supplies the model node count as the original does; a standalone motion can use a length-derived bound.
- The PAE container is the project's asset wrapper. Its model and texture-list sections reuse the client's relocated-block and Ninja chunk layouts, so the inner formats remain the original ones.

## WebGL renderer

The browser WebGL 2 renderer preserves the Direct3D 11 renderer's visible output for solid geometry, textures, blending, depth, stencil, alpha test and fog. The remaining differences come from the browser graphics API.

- Vertical sync is controlled by the browser's presentation scheduler; `RenderSettings.VSync` has no effect.
- WebGL 2 has no polygon fill mode, so the Direct3D 8 wireframe state is ignored and geometry stays solid.
- A lost WebGL context is not restored in place. The next renderer call reports the loss, and the host must dispose and recreate the renderer.
- Multisample counts are reduced to the browser's `MAX_SAMPLES`; the resolved count is reported in `RenderSettings.MultisampleCount`.
