# PSO_CHARACTER character save container

`PSO_CHARACTER` is a fixed **0xBAA4-byte** image holding four `0x2EA4`-byte character records. The
loader at `0x006C324C` opens the file and reads the fixed size; `PsoBB.Save.CharacterSaveCodec`
parses the first `0xBAA4` bytes, seals the checksum and validates the record signatures without any
OS calls.

## Container layout

| offset | size | field | evidence |
|---|---|---|---|
| `0x0000` | 4 | CRC-32 checksum | `0x006C26F8` clears this word, computes the image CRC and stores it here |
| `0x0004` | `0xBA90` | four `0x2EA4` character records | `0x006C1C9C` constructs four records at `base + 4`; `0x006C3B1D` copies `0x4DC + 0x29C8` bytes into one record |
| `0xBA94` | 8 | flag word | `0x0077BE58` sets bit `index` at `0xBA94 + (index >> 5) * 4`; it accepts indices `0` through `0x30` |
| `0xBA9C` | 4 | save counter | `0x006C26E4` increments it; `0x006C2608` compares it between two images |
| `0xBAA0` | 4 | reserved word | `0x006C26F8` clears it before computing the checksum |

The complete checksum is a reflected CRC-32 with polynomial `0xEDB88320`, initial value
`0xFFFFFFFF` and a final complement. `0x006C26F8` clears both the checksum and reserved words before
computing, so a sealed image hashes zero in those eight bytes. The loader at `0x006C1C9C` clears only
the checksum word before hashing, so a non-zero reserved word participates in validation and makes
an otherwise sealed image fail until the checksum is recomputed over that word.

## Character record (`0x2EA4` bytes)

| offset | size | field | evidence |
|---|---|---|---|
| `0x0000` | `0x4DC` | player chunk | copied by `0x006C1B1D` and `0x006C3B1D` |
| `0x04DC` | `0x29C8` | system chunk | copied by `0x006C1B1D` and `0x006C3B1D`; compared by `0x006C2608` |
| `0x0364` | 2 | level, zero-based | read by `0x006C44D0` and `0x006C77C5` |
| `0x036C` | 4 | carried meseta | `0x006C44D0` exposes this address to character select |
| `0x03A0` | 1 | section identifier | cross-referenced PSOBB map; the save path copies it opaquely |
| `0x03A1` | 1 | character class | read by `0x006C77D3` |
| `0x03C0` | `0x20` | UTF-16LE display name | `0x006C44D0` exposes this address to character select |
| `0x04E0` | 4 | character marker | tested by `0x006C44D0`; compared by `0x006C2608` (`creation_timestamp` in the cross-referenced map) |
| `0x04E4` | 4 | `0xC87ED5B1` signature | tested by `0x006C1BDC` for all four records |
| `0x19F4` | `0x20` | UTF-16LE team name | cross-referenced PSOBB map; the save path copies it opaquely |

`0x006C2608` compares an in-memory `0x29C8` system chunk with one stored record and returns `0` for a
null input, `2` when the in-memory save counter is greater, `4` when the `0x4E0` marker differs, `5`
when either side lacks the signature, `6` when the candidate and stored counters differ, and `7`
when all compared fields match.

`0x006C1BDC` validates the checksum and the four signatures and returns `0` absent, `1` checksum
mismatch, `5` signature mismatch, or `7` valid. A zero signature is accepted, matching the original.
The client save path does not encrypt the character file; the signature and CRC are the only
integrity markers.

## Unknown and opaque regions

The codec deliberately does not name inventory item fields, bank fields, guild-card fields, symbol
chats, shortcuts, records, quest counters or the remaining transparent bytes. It preserves every
one of them byte-for-byte. The section and team offsets above come from the PSOBB save-format
notes (`_psobb_save_format.md`); no save-path instruction reads them directly, so they are layout
cross-references rather than independently exercised fields.

## Limitations

- No retail `PSO_CHARACTER` file is present in this worktree, so no retail round-trip was performed.
  The tests use synthetic images and a golden CRC vector.
- The codec verifies the container checksum and record signatures only; it does not validate item,
  quest or guild-card contents.
- `0xBAA4` is accepted from a longer file by reading the first `0xBAA4` bytes, matching the scene
  loader. A shorter file is rejected before parsing.
