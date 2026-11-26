# Archive containers

The portable client reads the two archive containers directly from bytes supplied by the platform file system. Both readers live in `PsoBB.Archives` and expose a narrow `IArchive` surface: directory entries, lookup by index or name, and extraction with PRS decompression where the directory marks an entry compressed.

## AFS

AFS is Sega's generic section archive. The client uses it for item texture and model bundles such as `plJtex.afs`.

| Offset | Type | Meaning |
| --- | --- | --- |
| 0x00 | u32 | Section count |
| 0x04 | u32 | Reserved; the loader reads it as part of the header and ignores it |
| 0x08 | section[count] | Section table |

Each section record is two little-endian u32 values: a byte offset from the archive start and a byte size. Sections have no names. Data begins after the table and may be padded to 2048-byte sectors.

The original loader is `load_afs_file` at `0x0086D92C`. It reads the count, then each offset/size pair, and stores only `offset / 2048` in a 16-bit sector table. `OpenAssetFileSlot_0086DAB0` turns a sector index back into `sector * 2048` and derives a section's length from the next section's sector, so the client reads sector-rounded ranges. The portable reader exposes the declared table values and returns exactly the declared bytes; see `known-differences.md`.

## GSL

GSL is the client's main data container (`data.gsl`). It has no separate header: the directory begins at offset zero.

| Offset | Type | Meaning |
| --- | --- | --- |
| 0x00 | char[32] | Null-padded entry name |
| 0x20 | u32 | Data sector; the byte offset is this value times 2048 |
| 0x24 | u32 | Stored size in bytes |
| 0x28 | u32 | Decompressed size; zero means the stored bytes are used as-is |
| 0x2C | u32 | Reserved |

Every entry is `0x30` bytes. The directory ends at the first entry whose first name byte is zero. `unknown_load_data_gsl` at `0x005BBF1C` reads `0x30` sectors (`0x18000` bytes) from offset zero into a zero-filled buffer and scans at most `0x7FF` slots. If no terminator appears inside those slots the client reports zero asset files.

Name lookup is `InitializeAssetLoadContext_005BB224`. It lowercases only the requested name and compares the result with the stored name ordinally, so directory names are expected to be lowercase. Extraction is `TGStream::gsSctLoadFile` at `0x005BB53C`: it reads the stored sectors and, when the decompressed size is nonzero, runs the result through `PrsDecompressor` at `0x00788154`.

The portable reader validates the stored range, wraps decompressor failures, and requires the stream to produce exactly the declared decompressed size. Those checks are deliberate differences from the original's sector reads; see `known-differences.md`.
