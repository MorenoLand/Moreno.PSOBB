# Field camera controller object

Facts read from the lifted code and disassembly. Names are not assigned to fields that no method
has been read for.

- The global at `0x00A48A54` holds the camera controller. `0x004D2B18` constructs it: vtable
  `0x00AFC590`, field of view `0x3555` at `+0x19C`, and `[global+4]` loaded from `0x009ACB64`.
- The constructor zeroes about a hundred dword fields between `+0x1C` and `+0x1D0`
  (for example `+0x8C..+0xAC`, `+0x134..+0x160`, `+0x164..+0x198`, `+0x1A0..+0x1C0`).
- `0x004D2FB4` sets the active camera mode. It reads the mode byte at `0x00A489F4`, takes the
  mode object from the table at `0x00A48A00` (indexed by that byte), stores its argument at
  `+0x1C` and `+0x20` of that object, calls the object's vtable slot `+0x1C`, and sets bit
  `0x800` in the flags word at `0x00A489FC`. It then calls the same slot on the default object
  at `[0x00A48A00]` and copies fields `+0x3C..+0x50` of that object to `+0xD4..+0xDC` and
  `+0x104..+0x10C` of the camera controller.
- The port's `FieldCamera` models modes and position only; it carries no `[Original]` addresses
  for this object yet.

## Methods and update structure

- The vtable at `0x00AFC590` has three real slots: `0x004D2610` (scalar-deleting destructor, absorbed),
  `0x004D386C` (per-frame update, 263 bytes) and `0x004D4048` (282 bytes, not read yet).
- The destructor clears `0x00A48A54`, destroys the 13 objects of the mode table at `0x00A48A00`
  (matching `FieldCamera.ModeCount`) and clears `0x00A489F8`.
- `0x004D386C` sets byte `+0x1C`, runs the steps `0x004D3974` (mode switch from the flags word at
  `0x00A489FC`, using the local player looked up by `0x0068D5A8(0x00A9C4F4)`), `0x004D3ABC` and
  `0x004D3EF4`, derives a viewing direction from camera fields `+0x178..+0x18C` plus `+0x68..+0x70`
  of the active mode object, normalises it with the ported `Vector3` helpers (`0x0082DEF4`,
  `0x0082DF08`, `0x0083173C`), stores eye and direction in the globals `0x00A48780..0x00A48794`,
  builds the view matrix with `0x00782984(0x00A48780, 0x00A48980)` and finishes with `0x004D3FB0`.
- Still to read before the controller can be ported: `0x004D3ABC`, `0x004D3EF4`, `0x004D3FB0`,
  `0x004D4048`, `0x0068D5A8`, `0x004D3AA0` and the 13 mode objects.

## Update steps read so far

- `0x004D3ABC` runs the active mode object (`[0x00A48A00 + 4 * byte 0x00A489F4]`): vtable slot `+4` unless flag `0x800`
  is set in `0x00A489FC`, slot `+0x10` with argument 1 when flag `0x80` is set and 0 when flag `2` is set, then
  `0x004D1FF4`. With flags `0x820` it runs `0x004D3E90`; otherwise it branches on the mode object's flags word `+0x38`
  (bit 1 `0x004D3BA8` and `0x004D3D6C`; bit 4 `0x004D3D14`; bit 8 `0x004D3C98`; else `0x004D3E90`) and then `0x004D3DF4`.
  It sets the field of view through `0x0082EBC8(fov at +0x19C, 1.1333334, 1.0, 21000.0)` (the values the handoff notes
  give for `FieldCamera`), calls the mode object's slot `+0x24`, and copies `+0x194` to `+0x94`.
- `0x004D3FB0` builds two rotation matrices on the matrix stack from the camera's `+0x194` and `+0x190` angles and
  stores the results in the globals `0x00A489E8` and `0x00A489DC`.
- Unread helpers: `0x004D1FF4`, `0x004D3BA8`, `0x004D3C98`, `0x004D3D14`, `0x004D3D6C`, `0x004D3DF4`, `0x004D3E90`,
  `0x004D3EF4`, `0x0082EBC8`, `0x004D4048`.
