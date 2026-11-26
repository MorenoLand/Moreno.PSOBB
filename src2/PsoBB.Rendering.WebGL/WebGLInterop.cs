using System.Runtime.InteropServices.JavaScript;
using System.Runtime.Versioning;

namespace PsoBB.Rendering.WebGL;

/// <summary>
/// The JavaScript seam that owns the canvas, WebGL 2 context and GPU resources.
/// </summary>
[SupportedOSPlatform("browser")]
internal static partial class WebGLInterop
{
	[JSImport("renderer.create", "psobb.webgl")]
	internal static partial int Create(string canvasId, int width, int height, int multisampleCount);

	[JSImport("renderer.sampleCount", "psobb.webgl")]
	internal static partial int GetSampleCount(int handle);

	[JSImport("renderer.beginFrame", "psobb.webgl")]
	internal static partial void BeginFrame(int handle);

	[JSImport("renderer.setViewport", "psobb.webgl")]
	internal static partial void SetViewport(int handle, int x, int y, int width, int height);

	[JSImport("renderer.clear", "psobb.webgl")]
	internal static partial void Clear(int handle, int argb);

	[JSImport("renderer.setTransform", "psobb.webgl")]
	internal static partial void SetTransform(int handle, int slot, [JSMarshalAs<JSType.Array<JSType.Number>>] float[] transform);

	[JSImport("renderer.setRenderState", "psobb.webgl")]
	internal static partial void SetRenderState(int handle, int state, int value);

	[JSImport("renderer.prepareFormat", "psobb.webgl")]
	internal static partial void PrepareFormat(int handle, int formatCode, int stride, int positionComponents, int blendWeightCount, bool packedLastWeight, int colorOffset, int textureCoordinateOffset, int textureCoordinateSize);

	[JSImport("renderer.draw", "psobb.webgl")]
	internal static partial void Draw(int handle, int primitive, int primitiveCount, [JSMarshalAs<JSType.Array<JSType.Number>>] byte[] vertices, int stride, int formatCode);

	[JSImport("renderer.endFrame", "psobb.webgl")]
	internal static partial void EndFrame(int handle);

	[JSImport("renderer.setTexture", "psobb.webgl")]
	internal static partial void SetTexture(int handle, int stage, int texture);

	[JSImport("renderer.createTexture", "psobb.webgl")]
	internal static partial int CreateTexture(int handle, int width, int height, [JSMarshalAs<JSType.Array<JSType.Number>>] byte[] pixels, int stride);

	[JSImport("renderer.updateTexture", "psobb.webgl")]
	internal static partial void UpdateTexture(int handle, int texture, [JSMarshalAs<JSType.Array<JSType.Number>>] byte[] pixels, int stride);

	[JSImport("renderer.disposeTexture", "psobb.webgl")]
	internal static partial void DisposeTexture(int handle, int texture);

	[JSImport("renderer.errorState", "psobb.webgl")]
	internal static partial string ErrorState(int handle);

	[JSImport("renderer.readPixel", "psobb.webgl")]
	internal static partial double ReadPixel(int handle, int x, int y);

	[JSImport("renderer.dispose", "psobb.webgl")]
	internal static partial void Dispose(int handle);
}
