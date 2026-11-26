# Browser program for the WebAssembly client

This project is the `PsoBB.Web` browser host. It connects the browser platform, the WebGL renderer and `ClientHost`, owns the canvas, and runs one client frame per animation frame. The page preloads the data root through the platform module before the client starts.

## Build and run

```powershell
dotnet publish src2/PsoBB.Web/PsoBB.Web.csproj -c Release -r browser-wasm
```

Serve `src2/PsoBB.Web/bin/Release/net11.0/publish/wwwroot` over HTTP and open `index.html`. The publish output contains `_framework`, `index.html`, `psobb-web.js`, `psobb-platform.js` and `psobb-webgl.js`.

## Data root

The page accepts a folder URL through `?data=<folder-url>` or the `dataRoot` member of `window.psobbWeb`. The folder must contain `manifest.json`, an object mapping each game file path to its URL. A manifest URL can be supplied directly with `?manifest=<url>` or `window.psobbWeb.dataManifest`. `window.psobbWeb.data` can supply file bytes by path, and `directories` can register empty directories.

The page reads `canvasId`, `width`, `height`, `msaa` and `dotnetUrl` from the same configuration. Without a data source it shows an in-page form and waits.

## JavaScript contract

`psobb-web.js` installs the `psobb.platform` and `psobb.webgl` module imports, loads `_framework/dotnet.js`, gets the `PsoBB.Web.WebProgram` and `PsoBB.Platform.Web.BrowserPlatformHost` exports, starts the client, attaches browser input and schedules `RunFrame` with `requestAnimationFrame`. Startup and frame failures are written to the page; nothing uses `alert`, `confirm` or `prompt`.

`WebProgram` exports `Start`, `RunFrame`, `GetFrameCount` and `Shutdown`. `Shutdown` disposes the renderer and releases the browser platform.

## Build note

The platform and renderer projects are self-contained WebAssembly hosts, so referencing them as projects would merge their `_framework` bootstraps into this program. The project therefore references their built assemblies, copies their ES modules into `wwwroot`, and builds both projects from a target before assembly resolution.
