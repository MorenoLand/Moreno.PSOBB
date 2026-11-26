# Browser platform host for the WebAssembly client

This project implements the `PsoBB.Platform` contracts for a .NET browser-wasm build. It uses `System.Runtime.InteropServices.JavaScript` for interop and ships the ES module `wwwroot/psobb-platform.js` plus a self-check page.

## Build

```powershell
dotnet build src2/PsoBB.Platform.Web/PsoBB.Platform.Web.csproj -c Release -r browser-wasm
dotnet publish src2/PsoBB.Platform.Web/PsoBB.Platform.Web.csproj -c Release -r browser-wasm -o <publish-dir>
```

Serve `<publish-dir>/wwwroot` over HTTP and open `selfcheck.html`. The page runs the C# self-check plus live keyboard, pointer, wheel and file interop checks.

## JavaScript contract

The module is installed as `psobb.platform` with `setModuleImports` before the C# platform starts.

| Import | Purpose |
| --- | --- |
| `clock.monotonicMilliseconds` | `performance.now()` |
| `clock.unixMilliseconds` | `Date.now()` |
| `clock.localOffsetMinutes` | Minutes east of UTC |
| `storage.getItem` / `setItem` / `removeItem` / `keys` | `localStorage` |
| `input.setPointerPosition` / `setPointerVisible` | Cursor requests |
| `data.manifest` / `data.read` | Preloaded data root |
| `audio.create` / `freeBytes` / `write` / `play` / `stop` / `setVolume` / `dispose` | Web Audio outputs |

The C# side exports `BrowserPlatformHost` with `Create`, `Pump`, `PollInput`, `PushKey`, `PushPointerMove`, `PushPointerButtons`, `PushWheel`, `NotifyFocusLost`, `AddFile`, `AddDirectory`, `RunSelfCheck` and `DisposePlatform`.

`connect` loads the runtime, installs the imports, registers data, creates the platform, attaches input listeners and pumps each animation frame. A host with its own managed entry point can call `installModuleImports(runtime)` before `runMain` and then use the exported host methods directly. `addDataFile`, `addDataDirectory` and `loadDataFiles` fill the data root before `Create`.

## Caveats

- Web Audio uses `ScriptProcessorNode`, which is deprecated but available in current browsers; its 4096-frame block adds about 90 ms of latency at 44.1 kHz.
- The browser cannot warp the operating-system pointer; `SetCursorPosition` records the requested position and requests pointer lock on the next pointer press when the cursor is hidden.
- The data root is held in memory, so a full retail install needs enough browser memory for its archives.
- Settings are limited by the origin's `localStorage` quota.
- There are no background threads; `StartThread` bodies run on the pump.
