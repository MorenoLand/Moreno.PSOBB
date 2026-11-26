# Entry point

Observed facts (authority: shipped client artifact, SHA-256
`f4d4bd463c07fec2542452735deb5237641634100d9223d2d0f0ae4000315cc0`).

## PE entry is a protector stub

`AddressOfEntryPoint` = `0x00B60000`, inside section `.pseudo`
(`0x00B60000-0x00B62000`). The first 16 bytes are:

```
e8 cb f7 ff ff   call 00b5f7d0
e9 69 00 00 00   jmp  00b60005
90 ...           padding
```

At `0x00B5F7D0`:

```
68 a5 eb 96 00      push 0096eba5        ; "patch.dll"
ff 15 30 81 8f 00   call dword [008f8130] ; kernel32!LoadLibraryA
bb 27 02 00 00      mov ebx, 0x227
e8 20 08 00 00      call 00b60005
c3                  ret
```

`0x0096EBA5` reads `patch.dll` (observed). The code after the call performs
self-modifying fixups inside `.pseudo`, using `call $+5` / `pop ebp` /
`sub ebp, 0x4BE14D` and writes through computed pointers. It is a client patch
loader, not the C runtime startup.

Consequence: booting the lifted program at `0xB60000` would execute host
`LoadLibraryA` and then dynamic fixup code that a static lift cannot reproduce
(the writes target generated instructions inside `.pseudo`).

## C runtime startup

`0x0085AB43` is not an IDA function (it sits in the gap after `_fast_error_exit`
at `0x0085AB18`, size 33). Bytes at `0x0085AB43`:

```
e8 64 3a 00 00    call 0085e5ac        ; __SEH_prolog
bf 94 00 00 00    mov  edi, 0x94
8b c7             mov  eax, edi
e8 cc d4 ff ff    call 00858020        ; __alloca_probe
89 65 e8          mov  [ebp-0x18], esp
8b f4             mov  esi, esp
89 3e             mov  [esi], edi
56                push esi
ff 15 0c 82 8f 00 call dword [008f820c] ; kernel32!GetVersionExA
```

`__SEH_prolog` at `0x0085E5AC` is confirmed by IDA's FLIRT names
(`__SEH_prolog` 59 bytes, `__SEH_epilog` at `0x0085E5E7`).

Calls observed in the same function (`0x0085AB43`-`0x0085AD10`):

| call site | target | name |
|---|---|---|
| `0x0085AC05` | `0x0085F529` | `__heap_init` |
| `0x0085AC17` | `0x0085C76A` | `__mtinit` |
| `0x0085AC30` | `0x00864 97A` | `__ioinit` |
| `0x0085AC56` | `0x0086511C` | `__setargv` |
| `0x0085AC67` | `0x00864EE9` | `__setenvp` |
| `0x0085AC7A` | `0x00859F05` | `__cinit` |
| `0x0085AC9B` | `0x00864E8C` | `__wincmdln` |
| `0x0085ACBB` | `0x0082CB18` | application entry (`sub_82CB18`, 1336 bytes) |

`0x0082CB18` takes four stack arguments (read from `[esp+0x4FC]`, `[esp+0x504]`,
`[esp+0x508]`), clears globals at `0x00ACBE60`-`0x00ACBEA8`, and calls
`0x008C0BB0` immediately; this is the `WinMain` signature
(`hInstance`, `hPrevInstance`, `lpCmdLine`, `nShowCmd`).

## Decision

`[project].entry = 0x0085AB43` (the C runtime startup), `[project].pe_entry =
0x00B60000` (the observed PE entry, kept for verification). `0x0085AB43` is
listed in `[lift].extra` because IDA did not create a function there.

Limitation: the Patch patch loader (`patch.dll`, `0x00B5F7D0` /
`0x00B60000`) is not part of the lifted program.
