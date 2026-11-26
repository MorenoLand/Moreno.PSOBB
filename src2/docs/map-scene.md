# Map scene formats

The map scene loader lives in `PsoBB.Scene`. It reads scene assets from the `scene/` directory and map tables from the data root through `IDataFiles`, so the same code runs against loose files or `data.gsl` entries.

## Relocatable REL images

`n.rel`, `c.rel` and the other map `.rel` files end with a 0x20-byte trailer. The loader uses three words in it:

| Trailer offset | Meaning |
| --- | --- |
| file end - 0x20 | Byte offset of the pointer-fixup table |
| file end - 0x1C | Number of fixup entries |
| file end - 0x10 | Byte offset of the asset root returned to the caller |

A fixup entry is a 16-bit count of four-byte words from the previous pointer slot. The original adds the image base to the 32-bit value at each reached slot. The C# parsers operate on a zero-based image, so the stored file offsets already are the offsets they read; `RelContainer` validates the slots and exposes the root. This is `load_rel_asset2` at `0x005B9BF4`.

## Render geometry: `n.rel`

`MapRenderGeometryFile` parses a `fmt2` root:

| Offset | Type | Meaning |
| --- | --- | --- |
| 0x00 | char[4] | `fmt2` |
| 0x04 | u32 | Format value |
| 0x08 | s16 | Chunk count |
| 0x0C | f32 | Scene radius |
| 0x10 | u32 | Chunk table offset |
| 0x14 | u32 | Texture-data offset |

Each chunk is 0x34 bytes: section id, position, three int rotations, view distance, static-tree offset and count, animated-tree offset and count, flags. Static trees are 0x10 bytes and animated trees are 0x20 bytes. A tree roots a node chain; nodes are 0x34 bytes with evaluation flags, mesh, position, rotations, scale, child and next links. The `0x200` tree flag makes the stored root a word that points at the first node.

A mesh is 0x1C bytes. It points at a vertex-buffer table and two index-buffer tables. Vertex buffers are 0x10 bytes and hold the original vertex format, stride, count and bytes. Index buffers are 0x14 bytes and hold raw render-state arguments, 16-bit indices and the fifth word that selects the vertex-buffer table entry used by the draw. NJCM/NJTL rendering, vertex-buffer creation and render-state setter semantics remain unported.

## Collision: `c.rel`

The root points at a terminated section array. Each section is 0x18 bytes: mesh offset, centre, radius and collision flags. A zero mesh offset terminates the array. A collision mesh is 0x10 bytes: vertex offset, face count and face offset. Faces are 0x24 bytes with three vertex indices, flags, normal, centre and radius. Faces imply the vertex count, which is the largest index plus one.

## Section visibility: `bm.bin`

`vr1b` stores big-endian numbers; `vr2b` stores the same layout little-endian. The header is the marker and a u32 section count. Each 0x0C-byte section record holds a u32 section id, a u32 visible-section count and a u32 index position. The shared tail is an array of big- or little-endian u16 section ids.

## Events: `.evt`

`MapEventFile` reads a 16-byte header: total byte size, header size, event count and a marker that is zero or `evt2`. Each wave event is 20 bytes: event id, flags, reserved word, section, wave number, delay and clear-event index. The clear-event tail and any bytes after the declared size are preserved. Clear-event semantics belong to the unported quest event engine.

## Object placement: `*o.dat`

`MapObjectPlacementFile` reads 0x44-byte records: object id, flags, two entity-index words, two group/section words, position, three int rotations and six constructor parameters. The original divides the file length by 0x44 and ignores a partial record, so the reader preserves that tail.

## Lighting: `lightentry.bin`

`MapLightTable` reads one 0x44-byte entry per map id: two direction vectors, specular/diffuse/ambient intensities and diffuse/ambient colours.

## Model archives: `.bml`

`BmlArchive` reads the 0x800-byte header block, a u32 entry count at +4, a `P` compression flag at +8 and a texture-present flag at +9. Each 0x40-byte descriptor holds a 32-byte name, stored and uncompressed geometry sizes and stored and uncompressed texture sizes. Geometry streams begin at the aligned header end; texture streams follow their geometry stream and both use 0x20-byte alignment when textures are present, otherwise 0x800. `BmlChunkReader` walks Ninja IFF chunks (big-endian FourCC, little-endian size) and skips POF0 fixup chunks. NJCM model conversion is not part of this loader batch.

## Original addresses

| Address | Original function | Port |
| --- | --- | --- |
| `0x005B9BF4` | `load_rel_asset2` | `RelContainer.Parse` |
| `0x005B869C` | `LoadBmlExec_005b869c` | `BmlArchive.Parse` |
| `0x00806FCC` | `MapLoader_LoadAndSwapGeometry_00806fcc` | `SceneLoader.Load` |
| `0x00807320` | `MapLoader_LoadCollision_00807320` | collision load branch |
| `0x0080A124` | `MapLoaderLoadNrel_0080a124` | `MapRenderGeometryFile.Parse` |
| `0x0080A3C0` | `load_map_c_rel` | `MapCollisionFile.Parse` |
| `0x0080B52C` | section visibility loader | `MapRoomGraph.Parse` |
| `0x0080CF78` | `LoadMapEventTableByVariant_0080cf78` | `MapEventFile.Parse` |
| `0x0080FAB8` | `load_preset_entities` | `MapObjectPlacementFile.Parse` |
| `0x0083B124` | `read_ninjalib_iff_chunk` | `BmlChunkReader.Read` |
