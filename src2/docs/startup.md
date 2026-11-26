# Client start-up order

This document traces the original client from the C runtime entry to the first frame and records
which stages the C# client ports, which belong to the host, and where the port stops.

Evidence: `src/unnamed/unnamed_085a.c` (`f_0085ab43`), `src/unnamed/unnamed_082c.c`
(`f_0082cb18`, `f_0082c49c`), `src/unnamed/unnamed_082d.c` (`f_0082d050`, `f_0082d2cc`,
`f_0082d384`, `f_0082d20c`), `src/unnamed/unnamed_07a5.c` (`f_007a5e84`),
`src/unnamed/unnamed_07a6.c` (`f_007a6080`, `f_007a60dc` through `f_007a6454`),
`src/unnamed/unnamed_083f.c` (`f_0083fea8`), `analysis/entry.md`, the Win32 import table in
`recomp/data/api_table.json`, and the shipped data image `src/image.bin` (piece at `0x009A2000`).

## 1. C runtime to WinMain

| # | Address | Work | Owner |
|---|---|---|---|
| 1 | `0x0085AB43` | `__SEH_prolog`, `GetVersionExA`, heap, multi-thread, I/O, argv and environment initialisation | Host CRT |
| 2 | `0x0085ACBB` | Calls the application entry `0x0082CB18` with the four `WinMain` arguments | Host CRT |
| 3 | `0x0082CB18` | Clears the process globals at `0xACBE60`-`0xACBEA4`, checks the exception state at `0x00AEAA28`, parses the command line | WinMain |
| 4 | `0x0082CE3C` / `0x0082CE4B` | Calls `0x007A6080` with `0x98A394` or null: applies the start-up configuration | Game |
| 5 | `0x0082CE65` | Sets `0xACBE60 = 1` | WinMain |
| 6 | `0x0082CE73` | Calls `0x0082D050`: `RegisterClassA` (procedure `0x0082C49C`), `CreateWindowExA`, `ShowWindow`, `UpdateWindow` | Host window |
| 7 | `0x0082CF6D` | Calls `0x008418C8`: disables IME, initialises the IME context | Host input |
| 8 | `0x0082CF7C` | `PeekMessageA` / `TranslateMessage` / `DispatchMessageA`, then `0x008412DC`, `Sleep(1)` until quit | Host message loop |
| 9 | `0x0082D025` | `0x0083FEA8` IME cleanup, `WaitForSingleObject` on the game thread, `CloseHandle`, calls the exit hook `0xACBEBC` | Host shutdown |

The display mode is already known before step 6: `0x0082CDEB`-`0x0082CE30` stores `0xACBE68 = -1`,
`0xACBE64 = hInstance`, `0xACBE6C = nCmdShow`, `0xACBE7C = 0x280`, `0xACBE80 = 0x1E0`, and
`0x0082D050` reads `0xACBE78`, `0xACBE7C` and `0xACBE80` when it creates the window.

## 2. Start-up configuration (game-owned, called from WinMain)

`0x007A6080` is the first game-owned call:

| # | Address | Work |
|---|---|---|
| 1 | `0x007A608A` | Stores a non-null argument in `0x9FF8D4` |
| 2 | `0x0082D650` | Copies `0x9FF8CC` and `0x9FF8D0` into `0xA216C0` and `0xA21700`, formats `0xAF0700`, copies the three fixed strings at `0x98A3AC`, `0x98A3B4`, `0x98A3BC` into `0xAF05E0`, `0xAF03A0`, `0xAF04C0`, then calls `0x83C014` |
| 3 | `0x00482EAC` | Resets the display configuration at `0xA46C48` from the persisted values or the 640x480x16 defaults at `0x00482AA8` |
| 4 | `0x00482AA0` | Reads the fullscreen flag at `0xA46C72` |
| 5 | `0x004829E0` / `0x004829E8` | Reads the configured width and height at `0xA46C48` and `0xA46C4A` |
| 6 | `0x0082CADC` | Stores the mode in `0xACBE78`, `0xACBE7C`, `0xACBE80` |
| 7 | `0x004837CC` | Reads the remaining persisted display settings into `0xA46C94` |

Steps 2, 3 and 7 use data-image strings and the registry seam. They are **not ported**; see
[Known differences](known-differences.md). The C# client takes the mode from
`IRenderer.Settings`, which the host already applied to its window.

## 3. Game thread

`0x0082C49C` creates the game thread when it handles `WM_CREATE` (`0x0082C7F6`):
`0xACBE60 != 0` schedules `0x82D2CC` with `__beginthreadex` and stores the handle at `0xACBE84` and
the identifier at `0xACBE88`. The thread body is:

| # | Address | Work | Owner |
|---|---|---|---|
| 1 | `0x008C0B06` | `ImmDisableIME(0)` | Host input |
| 2 | `0x0082D384` | Runs the first CRT static-destructor table (`0x8451C8` on `0xA21690` with two entries when `0xACBE60` is nonzero, otherwise `0xA216A0` with three) | Host CRT |
| 3 | `0x007A5E84` | `0x86B768`, then `0x007A64B0`, then the scene loop, then `0x007A6398` | Game |
| 4 | `0x0082D20C` | Runs the other CRT static-destructor table | Host CRT |
| 5 | `0x0082D2E2` | Clears `0xACBE8C` and calls `__endthreadex` | Host CRT |

## 4. Engine initialisation (`0x007A64B0`)

The first engine step is called only after `0x86B768` verifies and configures the SSE control word.

| # | Address | Work | Port state |
|---|---|---|---|
| 1 | `0x0061CDB0` | Empty default callback | No-op |
| 2 | `0x004829E0`, `0x004829E8`, `0x004829F0`, `0x00482F0C`, `0x00482A08` | Reads the display configuration | Host renderer settings |
| 3 | `0x00843FBC` | Applies the renderer configuration through `0x0084AFEC`, `0x0082E9D0`, `0x0082AE2C`, `0x0083ADAC`, `0x0083DD54`, `0x0083C5B0` | Host renderer |
| 4 | `0x0082E940`, `0x0082E960`, `0x0082AC64`, `0x0082D6F0`, `0x0082E8F4`, `0x0083B3F8` | Allocator thunk and allocator wiring | .NET runtime |
| 5 | `0x00843F64`, `0x00843F78`, `0x00830CD8` | Renderer callbacks and initial view transform | Host renderer |
| 6 | `0x0070828C` | Applies the persisted display mode to the renderer/window | Host |
| 7 | `0x00792B64` | Subsystem initialisation | **Not ported** |
| 8 | `0x0083AA48` | Clears the `0xAD9400` structure | **Not ported** |
| 9 | `0x0083FE24` | Clears the input and configuration structures | **Not ported** |
| 10 | `0x006FFA48` | Clears the sixteen manager slots at `0xA96980` | **Not ported** |
| 11 | `0x007C1374` | Initialises the interface/resource globals | **Not ported** |
| 12 | `0x00830A98`, `0x0078F5D0`, `0x00819438`, `0x005BBF1C`, `0x0078B184`, `0x006DC358`, `0x005068B8` | Remaining subsystem initialisation | **Not ported** |
| 13 | `0x0082CB00` | Registers `0x007A0334` as the custom window-message handler | Ported |
| 14 | `0x0082D330` | Registers `0x007A6358` as the exit handler | Ported |
| 15 | `0x0082D2AC` | Attaches the thread input to the game window | Host input |

## 5. Scene loop (`0x007A5E84`)

`0x007A5E84` reads `0xAAB384` (current scene). While it is nonzero it indexes the 12-byte
descriptor at `0x9FF7C0 + scene * 12` and calls the three function pointers at offsets 0, 4 and 8 in
order. After each pass it reads `0xAAB394`: a value in 1 through 3 copies the current scene to
`0xAAB398` and switches to `0xAAB388`, any other value repeats the current scene. The request
functions use 1 for a scene change, 2 for a root-scene return and 3 for a restart. When `0xAAB384`
becomes zero the loop calls `0x007A6398`, which shuts down the renderer, input, audio, interface and
scene managers.

## 6. Ported start-up

`PsoBB.Client.ClientStartup` is the entry point the Windows program calls after constructing its
services. It takes the host renderer and passes `IRenderer.Settings` to
`PsoBB.Game.GameStartup`, which runs these stages in this order and reports the first unported
engine step:

| Stage | Original | Result |
|---|---|---|
| Scene selection flag | `0x00ACBEC0` | Baked shipped value zero; the WinMain override is not ported |
| Display mode | `0x0082CADC` | `0x00ACBE78`, `0x00ACBE7C`, `0x00ACBE80` from the renderer settings |
| Initial scene | `0x007A6454` | Scene 1, or scene 18 when `GameState.SceneSelection` is nonzero; clears the four arguments |
| Scene library | `0x009FF7C0` | 19 baked descriptors of 12 bytes |
| Window message handler | `0x0082CB00` | `0x007A0334` split into `0x00ACBEB0` and `0x00ACBEB8` |
| Exit handler | `0x0082D330` | `0x007A6358` stored in `0x00ACBEE0` |

The boundary is `0x0082E940`, the allocator thunk that starts the unported chain above.
`GameStartupResult.IsComplete` is therefore false and `BoundaryAddress` is `0x0082E940`.

### Baked data

The scene descriptors are the 228 bytes at `0x009FF7C0` in the mapped shipped-image piece at
`0x009A2000` (`src/image.bin`), 19 rows of three function pointers with a 12-byte stride. The
scene-selection flag `0x00ACBEC0` and the writable globals at `0x00AAB378`-`0x00AAB3A8` and
`0x00ACBE78`-`0x00ACBEE0` are not present in a shipped-image piece; they lie in the zero-filled
uninitialised-data gap, so `GameState.InitialValue` is zero and every member starts there. `WinMain`
overrides `0x00ACBEC0` at run time from the command line; that override is not ported.


Functions ported by this change:

| Member | Original | Behaviour |
|---|---|---|
| `GameStartup.SetDisplayMode` | `0x0082CADC` | Stores the fullscreen flag and the two dimensions |
| `GameStartup.SetWindowMessageHandler` | `0x0082CB00` | Stores the high and low sixteen bits |
| `GameStartup.SetExitHandler` | `0x0082D330` | Stores the exit pointer |
| `GameStartup.SetShutdownHandler` | `0x0082D33C` | Stores the shutdown pointer |
| `SceneManager.SelectInitialScene` | `0x007A6454` | Chooses scene 1 or 18 and clears the arguments |
| `SceneManager.RequestScene` | `0x007A60DC` | Transition 1 to the requested scene |
| `SceneManager.RequestRootScene` | `0x007A60F0` | Transition 2 to the root scene |
| `SceneManager.RequestRestart` | `0x007A6174` | Transition 3 to scene zero |
| `SceneManager.SetRootScene` | `0x007A618C` | Stores the root scene |
| `SceneManager.SetSceneParameter` | `0x007A6198` | Stores the scene parameter |
| `SceneManager.GetCurrentScene` | `0x007A61A4` | Reads the current scene |
| `SceneManager.GetPreviousScene` | `0x007A61AC` | Reads the previous scene |
| `SceneManager.RequestExit` | `0x007A62DC` | Transition 1 to scene zero |

`SceneLibrary.Load` exposes the baked table the scene loop accesses directly; it has no function
address.

## 7. Verification

`GameStartupTests` checks the stage order and addresses, the display and hook globals, the baked
scene descriptor values and the engine boundary. `SceneManagerTests` checks every ported transition
and accessor. `ClientStartupTests` runs the whole start-up from the recording renderer, without a
host or a data image. All tests share the `Game state` collection so the process-wide globals are
never observed from two tests at once.

## 8. Open limitations

- The allocator thunk, manager tables and subsystem initialisers from `0x0082E940` to
  `0x0082D2AC` are not ported.
- The configuration stage at `0x007A6080` is not ported: `0x0082D650` needs the data-image strings
  at `0x98A3A8`-`0x98A3BC` and `sprintf`, and `0x00482EAC`/`0x004837CC` need the registry keys.
- The scene descriptors point at original function addresses; invoking them needs the scene
  address-to-delegate registry, which is not ported.
- `0x007A6454` has no call site in the lift; the port invokes it during start-up because the loop at
  `0x007A5E84` reads `0xAAB384` before any visible initialiser.
- The `WinMain` command-line override of `0x00ACBEC0` is not ported; the baked zero selects scene 1
  unless the host sets the flag first.
