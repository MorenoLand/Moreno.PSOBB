# Static recompiler that translates the Phantasy Star Online Blue Burst client into portable C

This is a StaticShock project. It lifts the original 32-bit Windows client
instruction by instruction into C, then builds a native Win32 host and a
WebAssembly target from the same lifted source.

The original executable and game data are not part of this repository.

## Status

| Area | State |
|---|---|
| Native host | Boots the CRT startup, creates the D3D8 device and renders the title screen. |
| Keyboard and mouse | DirectInput devices are created, formatted, acquired and polled. The title screen advances on Enter. |
| Audio | Music is decoded by a host Vorbis backend and matches the reference `title.ogg`. Seeks and sound-effect mixing still need verification. |
| Patch DLL | The loader stub and the patch library are intentionally not loaded. |
| WebAssembly | The build and browser shell exist; the Win32 import layer is incomplete. |

## How it works

- The PE entry (`0x00B60000`) is the patch loader stub. The host boots at the
  statically identified CRT startup (`0x0085AB43`) and lets the lifted code run
  the application's `WinMain`.
- Calls into Direct3D 8, DirectInput 8 and DirectSound go through guest-side
  vtable proxies. The proxy translates the DirectX C ABI to the host object and
  wraps returned interfaces so the guest only ever sees guest addresses.
- The original image is mapped at its preferred base. Read-only tables that the
  compiler placed inside `.text` are part of the data image because DirectInput
  and other APIs read them directly.
- Delphi exception handlers are entered by `_HandleAnyException`; the lift
  resolves their landing blocks without treating ordinary jump-table targets as
  handlers.
- Music streams through the guest libvorbisfile interface. On the native host a
  vendored `stb_vorbis` decoder replaces the corrupted lifted samples while the
  lifted call still advances the guest decoder state.

## Requirements

- Python 3.11 or newer.
- A 32-bit MinGW-w64 toolchain.
- A copy of the client that you own, with the expected SHA-256:
  `f4d4bd463c07fec2542452735deb5237641634100d9223d2d0f0ae4000315cc0`.
- Optional: IDA 9.x for re-exporting the analysis and regenerating the lift.
- Optional: Emscripten for the WebAssembly target.

## Configure

`project.toml` contains the target addresses and build settings. Input paths can
be overridden without editing the file:

| Variable | Meaning |
|---|---|
| `SS_EXE` | Path to the original client executable. |
| `SS_MINGW32` | Root of the 32-bit MinGW-w64 installation. |
| `SS_IDAT` | IDA text-mode executable. |
| `SS_IDA_OUT` | Directory for the IDA export. |

The default target path is `PsoBB.exe` in the repository root. The default
MinGW root is `mingw32`; set `SS_MINGW32` when the toolchain lives elsewhere.

## Build and run

```sh
python static_shock.py build
```

The native host is `bin/PsoBBHost.exe`. It needs the client data directory as
its argument:

```bat
set PSOBB_DIR=C:\path\to\your\client
run.cmd
```

`run.cmd` adds `bin` and `%PSOBB_DIR%` to `PATH` and starts the host from `bin`.
It defaults `PSOBB_DIR` to `bin`, so a client whose `data` directory is copied
under `bin` runs without further configuration.

`RECOMP_PSO_HOST` replaces the client endpoint in the loaded image
(five string sites) before the CRT runs, so an alternative compatible server
can be selected without rebuilding.

Regenerating the analysis and the lift requires IDA and the original client:

```sh
python static_shock.py ida
python static_shock.py functions
python static_shock.py lift
python static_shock.py api
python static_shock.py build
```

WebAssembly:

```sh
python build_wasm.py --preload-data
python web/serve.py bin/wasm 8080
```

## Layout

| Path | Contents |
|---|---|
| `project.toml` | Target addresses, build layout, WebAssembly layout, analyzer settings. |
| `src/` | Generated C: one function per address, prototypes, dispatch table and the data image. |
| `runtime/` | Guest CPU state, memory, import dispatch, COM bridge, Win32 host and the wasm32 host. |
| `pipeline/` | IDA export, classification, lifting, API generation and project tooling. |
| `recomp/data/` | Target manifest, classified function table and inventory. |
| `docs/` | Pipeline and runtime documentation. |
| `analysis/` | Evidence notes, including the entry-point decision. |
| `web/` | Browser shell and development server. |
| `tests/` | Pipeline and runtime checks. |

`ida/`, `asm/` and `pseudo/` are produced locally by the analysis steps and are
not tracked.

## Limits

- The patch loader and the patch library are not lifted or loaded.
- Music seeks and loops do not yet move the host Vorbis decoder with the guest
  position; sound effects are outside the host decoder path.
- The wasm host needs a per-import Win32 implementation; calls without one abort
  with the missing `module!name`.
- The guest is a single thread on wasm; guest threads are serialized.

## Legal

Read `LEGAL.md`. This repository ships no original executable, game data, assets
or keys. Use it only with software you legally own and are allowed to reverse
engineer.
