# WebGL 2 renderer for the WebAssembly client

This project implements `PsoBB.Graphics.IRenderer` for a .NET browser-wasm build. The C# side owns the seam contract and resource handles; the ES module `wwwroot/psobb-webgl.js` owns the canvas, WebGL 2 context, shader compilation, buffers, textures, framebuffer objects, multisample resolve, state cache and draw calls.

## Build

```powershell
dotnet build src2/PsoBB.Rendering.WebGL/PsoBB.Rendering.WebGL.csproj -c Release -r browser-wasm
dotnet publish src2/PsoBB.Rendering.WebGL/PsoBB.Rendering.WebGL.csproj -c Release -r browser-wasm -o <publish-dir>
```

Serve `<publish-dir>/wwwroot` over HTTP and open `selfcheck.html`. The page creates a 128x96 renderer with four-sample anti-aliasing, clears to `0xFF102030`, draws a textured triangle fan, presents, reads pixels back, updates the texture and presents a second frame.

## JavaScript contract

The module is installed as `psobb.webgl` with `setModuleImports` before the renderer starts.

| Import | Purpose |
| --- | --- |
| `renderer.create` / `sampleCount` / `dispose` | Canvas, context and render targets |
| `renderer.beginFrame` / `setViewport` / `clear` / `endFrame` | Frame, viewport, clear and MSAA resolve |
| `renderer.setTransform` | Row-major world, view, projection and texture matrices |
| `renderer.setRenderState` | Direct3D 8 state values with a cached GL translation |
| `renderer.prepareFormat` / `draw` | FVF vertex layout, shader program, indexed fan draw |
| `renderer.setTexture` / `createTexture` / `updateTexture` / `disposeTexture` | BGRA textures |
| `renderer.errorState` / `readPixel` | GL error drain and frame readback |

The C# side exports `PsoBB.Rendering.WebGL.WebGLHost.RunSelfCheck`. `connect` loads the runtime, installs the imports and returns the exported host.

## Fidelity notes

- Matrices are uploaded as row-major floats and multiplied as `matrix * vector` in GLSL, which is the transpose-equivalent of the Direct3D row-vector convention. Clip depth from Direct3D's `[0, 1]` range is remapped to OpenGL's `[-1, 1]` range in the vertex shader.
- Rows are flipped during texture upload so Direct3D's `V = 0` top edge samples the first source row. BGRA uploads use WebGL 2's `BGRA` format, with a one-time RGBA swizzle fallback.
- Culling uses `frontFace(CCW)` with the D3D8 cull mode mapped to the opposite GL face, because the Direct3D front face is clockwise in the original client.
- MSAA is rendered into a renderer-owned multisample framebuffer and resolved with `blitFramebuffer`; the browser's own antialiasing is disabled. A requested sample count is reduced to what `MAX_SAMPLES` supports, and the resolved count appears in `RenderSettings`.
- The browser controls presentation timing, so the vertical-sync setting has no effect, and WebGL 2 has no polygon fill mode, so the D3D8 wireframe state is ignored. These are recorded in `src2/docs/known-differences.md`.
- A lost context is not rebuilt; the host must dispose and recreate the renderer.
