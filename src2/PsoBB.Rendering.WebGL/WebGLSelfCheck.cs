using System.Buffers.Binary;
using System.Numerics;
using System.Runtime.Versioning;
using System.Text;
using PsoBB.Graphics;

namespace PsoBB.Rendering.WebGL;

/// <summary>
/// Exercises the renderer with a clear, a textured triangle fan and a presented frame.
/// </summary>
[SupportedOSPlatform("browser")]
public static class WebGLSelfCheck
{
	private const uint ClearColor = 0xFF102030;
	private const uint ClearPixel = 0x102030FF;
	private const uint Orange = 0xC04000FF;
	private const uint Green = 0x40C000FF;

	/// <summary>
	/// Runs the WebGL renderer self-check.
	/// </summary>
	/// <param name="canvasId">The canvas that receives the frames.</param>
	/// <param name="settings">The renderer settings.</param>
	/// <returns>One tab-separated <c>pass</c> or <c>fail</c> line per check.</returns>
	public static string Run(string canvasId, RenderSettings settings)
	{
		StringBuilder report = new();
		string stage = "create";
		WebGLRenderer? renderer = null;
		try
		{
			renderer = new WebGLRenderer(canvasId, settings);
			Append(report, "pass", "create", $"{renderer.Settings.Width}x{renderer.Settings.Height}, {renderer.Settings.MultisampleCount} samples");
			stage = "texture";
			using WebGLTexture texture = (WebGLTexture)renderer.CreateTexture(2, 2, CreateTexturePixels(0, 64, 192), 8);
			RequireGlState(renderer);
			Append(report, "pass", "texture", "BGRA 2x2 upload");
			stage = "begin";
			renderer.BeginFrame();
			renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
			RequireGlState(renderer);
			Append(report, "pass", "begin", "depth and stencil cleared");
			stage = "clear";
			renderer.Clear(ClearColor);
			RequireGlState(renderer);
			Append(report, "pass", "clear", "0xFF102030");
			stage = "draw";
			renderer.SetTexture(0, texture);
			renderer.Draw(PrimitiveType.TriangleFan, 1, CreateTriangle(), 28, 0x144);
			RequireGlState(renderer);
			Append(report, "pass", "draw", "textured triangle fan");
			stage = "present";
			renderer.EndFrame();
			RequireGlState(renderer);
			Append(report, "pass", "present", "frame resolved");
			stage = "gl-error";
			RequireGlState(renderer);
			Append(report, "pass", "gl-error", "NO_ERROR");
			stage = "pixel";
			RequirePixel(renderer, 32, 32, Orange, "textured triangle");
			RequirePixel(renderer, 100, 80, ClearPixel, "cleared area");
			Append(report, "pass", "pixel", "0xC04000FF at 32,32 and 0x102030FF at 100,80");
			stage = "update";
			texture.Update(CreateTexturePixels(0, 192, 64), 8);
			RequireGlState(renderer);
			Append(report, "pass", "update", "BGRA texture replacement");
			stage = "present-update";
			renderer.BeginFrame();
			renderer.SetViewport(0, 0, renderer.Settings.Width, renderer.Settings.Height);
			renderer.Clear(ClearColor);
			renderer.SetTexture(0, texture);
			renderer.SetTransform(TransformKind.World, Matrix4x4.CreateScale(0.5f) * Matrix4x4.CreateTranslation(0.25f, 0.25f, 0));
			renderer.Draw(PrimitiveType.TriangleList, 1, CreateTransformedTriangle(), 24, 0x142);
			renderer.EndFrame();
			RequireGlState(renderer);
			Append(report, "pass", "present-update", "transformed triangle list");
			stage = "pixel-update";
			RequirePixel(renderer, 89, 28, Green, "updated texture");
			RequirePixel(renderer, 32, 32, ClearPixel, "cleared area");
			Append(report, "pass", "pixel-update", "0x40C000FF at 89,28 and 0x102030FF at 32,32");
		}
		catch (Exception exception)
		{
			Append(report, "fail", stage, Describe(exception));
		}
		finally
		{
			renderer?.Dispose();
		}
		return report.ToString().TrimEnd('\n');
	}

	private static byte[] CreateTexturePixels(byte blue, byte green, byte red)
	{
		byte[] pixels = new byte[2 * 2 * 4];
		for (int pixel = 0; pixel < 4; pixel++)
		{
			pixels[pixel * 4] = blue;
			pixels[pixel * 4 + 1] = green;
			pixels[pixel * 4 + 2] = red;
			pixels[pixel * 4 + 3] = 255;
		}
		return pixels;
	}

	private static byte[] CreateTriangle()
	{
		byte[] vertices = new byte[3 * 28];
		WriteVertex(vertices, 0, 0, 0, 0.5f, 0, 0);
		WriteVertex(vertices, 1, 128, 0, 0.5f, 1, 0);
		WriteVertex(vertices, 2, 0, 96, 0.5f, 0, 1);
		return vertices;
	}

	private static byte[] CreateTransformedTriangle()
	{
		byte[] vertices = new byte[3 * 24];
		WriteTransformedVertex(vertices, 0, 0, 0, 0);
		WriteTransformedVertex(vertices, 1, 0, 1, 1);
		WriteTransformedVertex(vertices, 2, 1, 0, 2);
		return vertices;
	}

	private static void WriteTransformedVertex(Span<byte> vertices, int index, float x, float y, float textureCoordinate)
	{
		Span<byte> vertex = vertices.Slice(index * 24, 24);
		BinaryPrimitives.WriteSingleLittleEndian(vertex, x);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[8..], 0.5f);
		vertex[12] = 255;
		vertex[13] = 255;
		vertex[14] = 255;
		vertex[15] = 255;
		BinaryPrimitives.WriteSingleLittleEndian(vertex[16..], textureCoordinate);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[20..], textureCoordinate);
	}

	private static void WriteVertex(Span<byte> vertices, int index, float x, float y, float z, float u, float v)
	{
		Span<byte> vertex = vertices.Slice(index * 28, 28);
		BinaryPrimitives.WriteSingleLittleEndian(vertex, x);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[4..], y);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[8..], z);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[12..], 1);
		vertex[16] = 255;
		vertex[17] = 255;
		vertex[18] = 255;
		vertex[19] = 255;
		BinaryPrimitives.WriteSingleLittleEndian(vertex[20..], u);
		BinaryPrimitives.WriteSingleLittleEndian(vertex[24..], v);
	}

	private static void RequireGlState(WebGLRenderer renderer)
	{
		string error = renderer.GetErrorState();
		if (error.Length != 0)
			throw new InvalidOperationException($"The WebGL context reported {error}.");
	}

	private static void RequirePixel(WebGLRenderer renderer, int x, int y, uint expected, string label)
	{
		uint pixel = renderer.ReadPixel(x, y);
		if (pixel != expected)
			throw new InvalidOperationException($"The {label} pixel at {x},{y} is 0x{pixel:X8} instead of 0x{expected:X8}.");
	}

	private static void Append(StringBuilder report, string status, string name, string detail) => report.Append(status).Append('\t').Append(name).Append('\t').Append(detail).Append('\n');

	private static string Describe(Exception exception) => $"{exception.GetType().Name}: {exception.Message}".Replace('\t', ' ').Replace('\r', ' ').Replace('\n', ' ');
}
