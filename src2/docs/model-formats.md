# Model and animation formats

The portable model readers live in `PsoBB.Models`. They parse the Ninja chunk data the client stores in `.bml`, `.rel`, `.rlc` and PAE archives and expose node trees, vertex arrays, triangle strips, accumulated material state, texture names and motion keyframes.

## Ninja IFF chunks

`NinjaChunkReader` reads an eight-byte header (four-character big-endian tag, little-endian body size) followed by the body. A following `POF0` chunk lists the body words that hold chunk-relative pointers. Each table entry is a one-, two- or four-byte control word whose low six bits are a delta in four-byte units; the deltas accumulate. The original reader is `read_ninjalib_iff_chunk` at `0x0083B124`.

Known tags are `NJIN`, `NJCM`, `NJTL`, `NJLI`, `NJCA`, `NMDM`, `NSSM` and `POF0`. Unknown tags are rejected.

## NJCM model

The body starts with the first `njcm_model_node`. Each node is 0x34 bytes, or 0x38 when flag `0x400` selects quaternion rotation:

| Offset | Type | Meaning |
| --- | --- | --- |
| 0x00 | u32 | Evaluation flags |
| 0x04 | u32 | Mesh offset, or zero |
| 0x08 | float[3] | Position |
| 0x14 | i32[3] | Euler angles in 1/65536-turn units, or three quaternion components |
| 0x20 | float[3] | Scale |
| 0x2C | u32 | First child offset |
| 0x30 | u32 | Next sibling offset |
| 0x34 | float | Quaternion W, when flag `0x400` is set |

Flags `0x1`, `0x2`, `0x4` skip translation, rotation and scale; `0x8` hides the node; `0x10` skips its children; `0x20` selects the alternate Euler order. The model walker is `ModelObject_AllocateNodes_005121F8` at `0x005121F8`; the visible-node count matches `CountModelObjectNodes_00782A88` at `0x00782A88`.

A mesh is 0x1C bytes: flags, vertex-buffer offset and count, index-buffer offset and count, translucent index-buffer offset and count. A vertex buffer is 0x10 bytes: format word, data offset, stride and count. A vertex layout is the low 16 bits of the format word:

| Format | Fields | Size |
| --- | --- | --- |
| 1 | position, UV | 20 |
| 2 | position, normal | 24 |
| 3 | position, normal, UV | 32 |
| 4 | position, color | 16 |
| 5 | position, color, UV | 24 |
| 6 | position, color, normal | 28 |
| 7 | position, normal, color, UV | 36 |

Flag `0x10000` marks translucent geometry. Colors are stored in R, G, B, A byte order. The decoded
vertex array can be written back in its original layout and stride for `SceneSurface` submission.

An index buffer is 0x14 bytes: render-state argument offset and count, index-data offset and count, and the vertex-buffer index. Indices are 16-bit triangle-strip values. Render-state arguments are 0x10 bytes: setter index, two arguments and a reserved word. Setter 2 is blend, 3 texture, 4 addressing, 5 material color, 6 lighting, 7 camera-space normals and 8 material source. The accumulated state for each index buffer is exposed as `NinjaMaterial`.

## NJTL texture list

The body stores a pointer to an array of 0x0C-byte entries and the entry count. Each entry starts with a pointer to a null-terminated ASCII name, followed by two words the client fills at runtime. The name order is the texture index that render-state setter 3 selects.

## NMDM motion

The body starts with a 12-byte header: keyframe-record offset, frame count, a motion-flag word and a factor word. The factor word's low six bits are the channel count and bits 6-7 select the interpolation mode. Each bone record holds that many keyframe pointers followed by the same number of keyframe counts. A keyframe is 0x10 bytes: frame index and three components. Translation and scale tracks store floats; rotation tracks store 1/65536-turn integers, exposed as radians. The original context setup is `NJM_InitializeAnimationContext_008303DC` at `0x008303DC`.

The NMDM header has no bone count. The caller supplies the model node count, as the original does; the reader can also infer a bound from the body length for a standalone animation file.

## BML archive

The 0x40-byte header holds a file count at 0x04, a compression marker at 0x08 and the texture flag at 0x09. Each 0x40-byte descriptor holds a 32-byte name, stored size at 0x20, decompressed size at 0x28, compressed texture size at 0x2C and decompressed texture size at 0x30. Entry data starts at the next 0x800 boundary. Marker `P` selects PRS; otherwise bytes are stored. Entries are 0x800-aligned, or 0x20-aligned when the archive carries textures. The original loader is `LoadBML_005B7A84` at `0x005B7A84`.

## REL and PAE relocation

A relocated block stores the pointer-table offset at end-0x20, the table entry count at end-0x1C and the payload offset at end-0x10. Table entries are little-endian 16-bit deltas in four-byte units from the previous pointer location. The original function is `HandleRewriteAssetPointers_005BA264` at `0x005BA264`; `.rel` uses the same table shape.

A PAE archive's model section is a relocated block, a raw NJCM body or a Ninja chunk stream. Its texture-list section is a relocated block around an NJTL body, a raw NJTL body or a chunk stream containing NJTL. The embedded XVM archive supplies the decoded pixels.

## Limitations

- The readers take complete buffers, use flat offsets and reject malformed ranges. The original trusts its loaders and dereferences guest addresses directly.
- The NJCM reader implements the converted mesh layout used by the port's fixtures, not the retail chunk-model mesh. In `bin/data/bm_ene_astark.bml`, entry `nj00_astark.nj` root node 0 points to a retail `njcm_model_t` at body offset 0x2590 whose first two words are the vertex-chunk offset 0x24C4 and the polygon-chunk offset 0x34. `NinjaMesh.Read` therefore rejects that file; retail model rendering remains unverified.
- The NMDM reader detects the retail quaternion track record (20 bytes) and the 16-bit and 32-bit Euler angle records. A retail motion such as `cstand_bm2c_s_moj_body.njm` parses with quaternion tracks; only the retail model mesh remains unsupported.
- A `.rlc` file has no index or bone count; the caller supplies the model node count.
- A BML archive with separate model and animation entries uses the first model entry's animated node count. Callers that pair a specific model with a specific motion can parse the exposed chunks with that model's count.
- PAE texture names are paired with decoded archive textures by list order. The render-state index selects the NJTL entry; the client fills each entry's texture slot from the same archive.
- The PAE container has no original loader of its own. The inner NJCM, NJTL, XVM and relocation rules are the client's.
