# Patch download protocol

The client's patch flow is a raw TCP conversation with four-byte frames: a little-endian total length,
a command byte and a flag byte, followed by a command body. Frames are limited to `0x7F00` bytes. After
command `0x02`, both directions are XORed with the PC 57-word lagged-Fibonacci stream (not the Blue
Burst Blowfish stream).

## Original functions

| Address | Role |
|---|---|
| `0x0070B320` | Send one frame; encrypts with the client-side stream and loops over `send`. |
| `0x0070B3E4` | Receive up to `0x7F00` bytes into the queue. |
| `0x0070C40C` | Frame assembler, header/body decryption and handler-table dispatch. |
| `0x0070B870` | `0x02` welcome: checks the copyright, seeds both streams, answers `0x02`. |
| `0x0070C004` / `0x0070C020` | `0x04` request: sends the `0x04` login body. |
| `0x0070B900` | `0x06` open file: builds the target and `.patch` temp paths, creates the temp. |
| `0x0070BA70` | `0x07` write chunk: appends the chunk to the temp. |
| `0x0070BB78` | `0x08` close: checks the temp length, LZSS-expands or deletes/moves the target. |
| `0x0070BDEC` | `0x09` enter directory; creates it when missing. |
| `0x0070BEAC` | `0x0B` start list: returns to the root and clears the checksum list. |
| `0x0070BE14` | `0x0C` checksum request; `PsoBB.pat` is checksummed as `PsoBB.exe`. |
| `0x0070BEEC` | `0x0D` end list: sends one `0x0F` per answer and a final `0x10`. |
| `0x0070BFB0` / `0x0070BFEC` | `0x11` totals and `0x12` completion. |
| `0x0070BF98` | `0x13` message callback. |
| `0x0070C0D0` | `0x14` redirect to a big-endian IPv4 address and port. |
| `0x0070C910` | `0x15` login-failure callback. |
| `0x0084C390` | PC stream key schedule. |
| `0x00763054` | PC stream XOR over 32-bit words, including the final partial word. |
| `0x0070B64C` / `0x0070B7CC` | File CRC-32 and its lookup table. |
| `0x0070BB1C` | Progress percentage; the conversion truncates. |
| `0x007A5C80` | LZSS decoder for a `0x06` header flag of one. |

## Commands

| Command | Direction | Body |
|---|---|---|
| `0x02` | server → client | `0x40` copyright, server key `u32`, client key `u32` |
| `0x02` | client → server | empty |
| `0x04` | server → client | empty |
| `0x04` | client → server | three zero `u32`, username `0x10`, password `0x10`, email `0x40` |
| `0x05` | server → client | empty |
| `0x06` | server → client | unused `u32`, size `u32`, filename `0x30`; header flag one means LZSS |
| `0x07` | server → client | chunk index `u32`, CRC-32 `u32`, size `u32`, data |
| `0x08` | server → client | unused `u32` (optional) |
| `0x09` | server → client | directory name `0x40` |
| `0x0A` | server → client | empty (parent directory) |
| `0x0B` | server → client | empty |
| `0x0C` | server → client | request id `u32`, filename `0x20` |
| `0x0D` | server → client | empty |
| `0x0F` | client → server | request id `u32`, CRC-32 `u32`, size `u32` |
| `0x10` | client → server | empty |
| `0x11` | server → client | total bytes `u32`, file count `u32` |
| `0x12` | server → client | empty |
| `0x13` | server → client | UTF-16LE text, at most `0x2000` bytes |
| `0x14` | server → client | address four bytes, port big-endian `u16`, unused `u16` |
| `0x15` | server → client | empty |

The command maximum lengths are the original handler-table values: `0x4C`, `0x3C`, `0x6010`, `8`,
`0x44`, `0x28`, `0x0C`, `0x2004` for the commands above.

## Version comparison and integrity

The client does not compare versions. It answers the server's checksum requests with local CRC-32 and
size; the server decides which files differ and sends `0x11`/`0x06`/`0x07`/`0x08`. The three leading
`u32` fields in `0x04` are unused and zero in this build; they are not version numbers.

The protocol has no signature field. The `0x02` copyright is the only server-identity check. CRC-32 is
the hash used for version comparison, and the `0x07` body carries a per-chunk CRC-32. This build's
`0x70BA70` handler ignores the chunk CRC and relies on the final size check in `0x70BB78`; this port
verifies the chunk CRC and rejects a mismatch or an oversized chunk, and still checks the final size.
A truncated LZSS stream is rejected before the target is replaced; the original decoder could leave a
partial target because its caller ignores the decoder result.

`ValidateGameGuardDll_008c7a90` is not part of this flow. It reads a PE security directory and the
trailing overlay, hashes the image with CryptoAPI SHA-1 and verifies the signature against a shipped
key blob. It is a GameGuard DLL check, not a patch-file check, and remains outside `PatchSession`.

## Host-owned pieces

`PatchSession` takes an `IGameConnection` and an `IGameFileSystem`. The host owns DNS, sockets, any
TLS, file attributes and the `.rel` file cache. The original clears read-only attributes and closes or
reopens cached `.rel` files around an apply; the portable file interface has no attribute or cache
operation, so those effects are host policy rather than session code. The session also owns the
transport and closes it on failure, completion, disconnect and redirect.
