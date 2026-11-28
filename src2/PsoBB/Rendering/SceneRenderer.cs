using PsoBB.Graphics;
using PsoBB.Mathematics;
using RenderMatrix = System.Numerics.Matrix4x4;

namespace PsoBB.Rendering;

/// <summary>
/// Submits a <see cref="RenderScene"/> to an <see cref="IRenderer"/> with the original camera, per-surface world transform and opaque, alpha-tested and blended draw order.
/// </summary>
/// <remarks>
/// The host calls <see cref="Render"/> between <see cref="IRenderer.BeginFrame"/> and
/// <see cref="IRenderer.EndFrame"/>. Fixed-function lighting, fog, shadow projection and material
/// state are not ported here; this type only emits the geometry, texture, culling, depth and alpha
/// state described by the scene.
/// </remarks>
public sealed class SceneRenderer
{
	/// <summary>
	/// Draws a scene through the renderer.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="scene">The camera and surfaces to draw.</param>
	public void Render(IRenderer renderer, RenderScene scene)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentNullException.ThrowIfNull(scene);
		renderer.SetTransform(TransformKind.View, ToRenderMatrix(scene.Camera.CreateView()));
		renderer.SetTransform(TransformKind.Projection, ToRenderMatrix(scene.Camera.CreateProjection()));
		renderer.SetTransform(TransformKind.World, ToRenderMatrix(Matrix4x4.Identity));
		renderer.SetRenderState(RenderStateId.ZEnable, 1);
		renderer.SetRenderState(RenderStateId.ZFunction, RenderStateId.ComparisonLessEqual);
		renderer.SetRenderState(RenderStateId.ZWriteEnable, 1);
		renderer.SetRenderState(RenderStateId.AlphaTestEnable, 1);
		renderer.SetRenderState(RenderStateId.AlphaFunction, RenderStateId.ComparisonGreater);
		renderer.SetRenderState(RenderStateId.AlphaReference, 0);
		renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 0);
		renderer.SetRenderState(RenderStateId.CullMode, RenderStateId.CullNone);
		foreach (SceneSurface surface in scene.Opaque)
			DrawSurface(renderer, surface);
		if (scene.AlphaTested.Count != 0)
		{
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
			foreach (SceneSurface surface in scene.AlphaTested)
			{
				renderer.SetRenderState(RenderStateId.SourceBlend, surface.SourceBlend);
				renderer.SetRenderState(RenderStateId.DestinationBlend, surface.DestinationBlend);
				renderer.SetRenderState(RenderStateId.AlphaReference, surface.AlphaReference);
				DrawSurface(renderer, surface);
			}
		}
		if (scene.Transparent.Count != 0)
		{
			if (scene.AlphaTested.Count == 0)
				renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 1);
			renderer.SetRenderState(RenderStateId.ZWriteEnable, 0);
			renderer.SetRenderState(RenderStateId.AlphaReference, 0);
			foreach (SceneSurface surface in SortBackToFront(scene.Transparent, scene.Camera.Position))
			{
				renderer.SetRenderState(RenderStateId.SourceBlend, surface.SourceBlend);
				renderer.SetRenderState(RenderStateId.DestinationBlend, surface.DestinationBlend);
				DrawSurface(renderer, surface);
			}
		}
		if (scene.AlphaTested.Count != 0 || scene.Transparent.Count != 0)
		{
			renderer.SetRenderState(RenderStateId.ZWriteEnable, 1);
			renderer.SetRenderState(RenderStateId.AlphaBlendEnable, 0);
			renderer.SetRenderState(RenderStateId.AlphaReference, 0);
		}
	}

	private static RenderMatrix ToRenderMatrix(Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);

	private static void DrawSurface(IRenderer renderer, SceneSurface surface)
	{
		if (surface.Vertices.IsEmpty)
			return;
		byte[] vertices = BuildVertices(surface, out int primitiveCount);
		if (primitiveCount <= 0)
			return;
		renderer.SetTransform(TransformKind.World, ToRenderMatrix(surface.Transform));
		renderer.SetRenderState(RenderStateId.CullMode, CullValue(surface.CullMode));
		renderer.SetTexture(0, surface.Texture);
		renderer.SetTexture(1, surface.DetailTexture);
		if (renderer is IFixedFunctionRenderer fixedFunction)
		{
			fixedFunction.SetTextureStageState(0, TextureStageStateId.AddressU, surface.AddressU);
			fixedFunction.SetTextureStageState(0, TextureStageStateId.AddressV, surface.AddressV);
		}
		renderer.Draw(surface.Primitive, primitiveCount, vertices, surface.Stride, surface.VertexFormat);
	}

	private static byte[] BuildVertices(SceneSurface surface, out int primitiveCount)
	{
		if (surface.Stride <= 0)
			throw new ArgumentException("A scene surface needs a positive vertex stride.", nameof(surface));
		ReadOnlySpan<ushort> indices = surface.Indices.Span;
		if (indices.IsEmpty)
		{
			primitiveCount = surface.PrimitiveCount;
			return surface.Vertices.ToArray();
		}
		int vertexCount = PrimitiveVertexCount(surface.Primitive, indices.Length);
		primitiveCount = PrimitiveCount(surface.Primitive, vertexCount);
		byte[] vertices = new byte[vertexCount * surface.Stride];
		ReadOnlySpan<byte> source = surface.Vertices.Span;
		for (int index = 0; index < vertexCount; index++)
		{
			int offset = indices[index] * surface.Stride;
			if (offset < 0 || offset + surface.Stride > source.Length)
				throw new ArgumentException("A scene surface index points outside its vertex data.", nameof(surface));
			source.Slice(offset, surface.Stride).CopyTo(vertices.AsSpan(index * surface.Stride));
		}
		return vertices;
	}

	private static int PrimitiveVertexCount(PrimitiveType primitive, int indexCount) => primitive switch
	{
		PrimitiveType.TriangleList => indexCount - indexCount % 3,
		PrimitiveType.LineList => indexCount - indexCount % 2,
		_ => indexCount,
	};

	private static int PrimitiveCount(PrimitiveType primitive, int vertexCount) => primitive switch
	{
		PrimitiveType.PointList => vertexCount,
		PrimitiveType.LineList => vertexCount / 2,
		PrimitiveType.LineStrip => Math.Max(0, vertexCount - 1),
		PrimitiveType.TriangleList => vertexCount / 3,
		PrimitiveType.TriangleStrip => Math.Max(0, vertexCount - 2),
		PrimitiveType.TriangleFan => Math.Max(0, vertexCount - 2),
		_ => 0,
	};

	private static uint CullValue(SceneCullMode mode) => mode switch
	{
		SceneCullMode.None => RenderStateId.CullNone,
		SceneCullMode.Clockwise => RenderStateId.CullClockwise,
		SceneCullMode.CounterClockwise => RenderStateId.CullCounterClockwise,
		_ => throw new ArgumentOutOfRangeException(nameof(mode), mode, "Unknown cull mode."),
	};

	private static List<SceneSurface> SortBackToFront(IReadOnlyList<SceneSurface> surfaces, Vector3 camera)
	{
		List<(SceneSurface Surface, double Distance, int Index)> ordered = new(surfaces.Count);
		for (int index = 0; index < surfaces.Count; index++)
		{
			SceneSurface surface = surfaces[index];
			double x = (double)surface.Transform.M41 - camera.X;
			double y = (double)surface.Transform.M42 - camera.Y;
			double z = (double)surface.Transform.M43 - camera.Z;
			ordered.Add((surface, x * x + y * y + z * z, index));
		}
		ordered.Sort((first, second) =>
		{
			int distance = second.Distance.CompareTo(first.Distance);
			return distance != 0 ? distance : first.Index.CompareTo(second.Index);
		});
		List<SceneSurface> sorted = new(ordered.Count);
		foreach ((SceneSurface surface, _, _) in ordered)
			sorted.Add(surface);
		return sorted;
	}
}
