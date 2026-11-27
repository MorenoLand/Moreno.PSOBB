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
