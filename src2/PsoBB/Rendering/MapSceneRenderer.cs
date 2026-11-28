using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Mathematics;
using PsoBB.Scene;

namespace PsoBB.Rendering;

/// <summary>
/// Builds and submits a loaded <see cref="MapScene"/> with the map chunk and node transforms, the map mesh index buffers and the scene texture list.
/// </summary>
/// <remarks>
/// The walk follows the original map render callback at 0x008060FC and its draw walker at 0x008061E0: a chunk pushes its own transform, the static and animated tree roots draw through the node walker at 0x00831D40 and normal and alpha index buffers split into the two scene passes. The per-pass render-state callbacks selected by 0x00806184 and the animated-tree playback at 0x00805FD4 are not ported, so the stored node pose is drawn and the merged <see cref="SceneRenderer"/> supplies the pass order and material state.
/// </remarks>
public sealed class MapSceneRenderer : IDisposable
{
	private readonly TextureCache? _textures;
	private readonly List<TextureRequest> _requests = [];
	private readonly SceneRenderer _sceneRenderer = new();
	private bool _disposed;

	/// <summary>
	/// Creates a map renderer.
	/// </summary>
	/// <param name="textures">The cache used to bind scene texture-list entries, or null to leave textures unbound.</param>
	public MapSceneRenderer(TextureCache? textures = null) => _textures = textures;

	/// <summary>
	/// Builds the render scene for a loaded map.
	/// </summary>
	/// <param name="scene">The loaded map.</param>
	/// <param name="camera">The camera that supplies the view and projection transforms.</param>
	/// <returns>The map surfaces in the original opaque and translucent draw order.</returns>
	[Original(0x008061E0, "MapRenderer_DrawChunks_008061e0")]
	public RenderScene BuildScene(MapScene scene, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(scene);
		ObjectDisposedException.ThrowIf(_disposed, this);
		ReleaseTextures();
		List<SceneSurface> opaque = [];
		List<SceneSurface> transparent = [];
		TransformationStack stack = new();
		DrawState state = new();
		foreach (MapRenderChunk chunk in scene.Geometry.Chunks)
		{
			if ((chunk.Flags & 0x10000) == 0)
				continue;
			stack.PushCopy();
			if ((chunk.Flags & 0x80000) == 0)
			{
				stack.Translate(chunk.Position);
				stack.RotateEuler(chunk.RotationX, chunk.RotationY, chunk.RotationZ, true);
			}
			bool visibleTreeOnly = (chunk.Flags & 0x100000) != 0;
			foreach (MapMeshTree tree in chunk.StaticMeshTrees)
			{
				if (visibleTreeOnly && (tree.Flags & 0x10000) == 0)
					continue;
				WalkTree(tree.RootNode, stack, scene.Geometry.Textures, state, opaque, transparent);
			}
			foreach (MapAnimatedMeshTree tree in chunk.AnimatedMeshTrees)
			{
				if ((tree.Flags & 0x10000) == 0)
					continue;
				WalkTree(tree.RootNode, stack, scene.Geometry.Textures, state, opaque, transparent);
			}
			stack.Pop();
		}
		return new RenderScene { Camera = camera, Opaque = opaque, Transparent = transparent };
	}

	/// <summary>
	/// Builds the map scene and submits it between the host's frame calls.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <param name="scene">The loaded map.</param>
	/// <param name="camera">The camera that supplies the view and projection transforms.</param>
	/// <returns>The number of map surfaces submitted.</returns>
	public int Render(IRenderer renderer, MapScene scene, SceneCamera camera)
	{
		ArgumentNullException.ThrowIfNull(renderer);
		RenderScene renderScene = BuildScene(scene, camera);
		_sceneRenderer.Render(renderer, renderScene);
		return renderScene.Opaque.Count + renderScene.Transparent.Count;
	}

	/// <summary>
	/// Releases every texture reference acquired by the last scene build.
	/// </summary>
	public void ReleaseTextures()
	{
		foreach (TextureRequest request in _requests)
			request.Dispose();
		_requests.Clear();
	}

	/// <summary>
	/// Releases the textures and marks the renderer disposed.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		ReleaseTextures();
	}

	/// <summary>
	/// Walks one sibling chain exactly as the original node draw walker does.
	/// </summary>
	/// <param name="node">The first node of the chain.</param>
	/// <param name="stack">The shared transform stack.</param>
	/// <param name="textures">The scene texture list, or null.</param>
	/// <param name="state">The render state carried through the original draw order.</param>
	/// <param name="opaque">The opaque surface list.</param>
	/// <param name="transparent">The translucent surface list.</param>
	private void WalkTree(MapMeshNode? node, TransformationStack stack, MapTextureList? textures, DrawState state, List<SceneSurface> opaque, List<SceneSurface> transparent)
	{
		for (; node is not null; node = node.Next)
		{
			uint flags = node.EvaluationFlags;
			if ((flags & 7) == 7)
			{
				if ((flags & 8) == 0 && node.Mesh is not null)
					AddMeshSurfaces(node.Mesh, stack.Current, textures, state, opaque, transparent);
				WalkTree(node.Child, stack, textures, state, opaque, transparent);
				continue;
			}
			stack.PushCopy();
			if ((flags & 1) == 0)
				stack.Translate(node.Position);
			if ((flags & 2) == 0)
				stack.RotateEuler(node.RotationX, node.RotationY, node.RotationZ, (flags & 0x20) != 0);
			if ((flags & 4) == 0)
				stack.Scale(node.Scale);
			if ((flags & 8) == 0 && node.Mesh is not null)
				AddMeshSurfaces(node.Mesh, stack.Current, textures, state, opaque, transparent);
			WalkTree(node.Child, stack, textures, state, opaque, transparent);
			stack.Pop();
		}
	}

	/// <summary>
	/// Creates one surface for every index buffer of a map mesh and accumulates the render state each buffer sees.
	/// </summary>
	/// <param name="mesh">The mesh to split.</param>
	/// <param name="transform">The node world transform.</param>
	/// <param name="textures">The scene texture list, or null.</param>
	/// <param name="state">The render state carried through the original draw order.</param>
	/// <param name="opaque">The opaque surface list.</param>
	/// <param name="transparent">The translucent surface list.</param>
	[Original(0x00835090, "draw_map_mesh_node")]
	private void AddMeshSurfaces(MapMesh mesh, Matrix4x4 transform, MapTextureList? textures, DrawState state, List<SceneSurface> opaque, List<SceneSurface> transparent)
	{
		AddIndexBuffers(mesh, mesh.IndexBuffers, transform, textures, state, opaque);
		AddIndexBuffers(mesh, mesh.AlphaIndexBuffers, transform, textures, state, transparent);
	}

	private void AddIndexBuffers(MapMesh mesh, IReadOnlyList<MapIndexBuffer> buffers, Matrix4x4 transform, MapTextureList? textures, DrawState state, List<SceneSurface> surfaces)
	{
		foreach (MapIndexBuffer buffer in buffers)
		{
			foreach (MapRenderStateArgument argument in buffer.Arguments)
			{
				switch (argument.State)
				{
					case MapRenderStateArgument.BlendState:
						state.SourceBlend = argument.First;
						state.DestinationBlend = argument.Second;
						break;
					case MapRenderStateArgument.TextureState:
						state.TextureIndex = (int)argument.First;
						break;
					case MapRenderStateArgument.AddressState:
						state.AddressU = argument.First;
						state.AddressV = argument.Second;
						break;
				}
			}
			if (buffer.VertexBufferIndex >= mesh.VertexBuffers.Count)
				throw new InvalidOperationException("A map index buffer selects a missing vertex buffer.");
			MapVertexBuffer vertexBuffer = mesh.VertexBuffers[(int)buffer.VertexBufferIndex];
			surfaces.Add(new SceneSurface
			{
				Vertices = vertexBuffer.Data,
				Stride = checked((int)vertexBuffer.Stride),
				VertexFormat = vertexBuffer.VertexFormat,
				Primitive = PrimitiveType.TriangleStrip,
				Indices = buffer.IndicesMemory,
				Transform = transform,
				Texture = ResolveTexture(textures, state.TextureIndex),
				CullMode = SceneCullMode.None,
				SourceBlend = state.SourceBlend,
				DestinationBlend = state.DestinationBlend,
				AddressU = state.AddressU,
				AddressV = state.AddressV,
			});
		}
	}

	/// <summary>
	/// Resolves a scene texture-list index to an uploaded texture and keeps the reference alive until the next build.
	/// </summary>
	/// <param name="textures">The scene texture list, or null.</param>
	/// <param name="textureIndex">The texture-list index, or a negative value when no state selected one.</param>
	/// <returns>The uploaded texture, or null when the index or cache is unavailable.</returns>
	private ITexture? ResolveTexture(MapTextureList? textures, int textureIndex)
	{
		if (_textures is null || textures is null || textureIndex < 0 || textureIndex >= textures.GlobalIndices.Count)
			return null;
		uint globalIndex = textures.GlobalIndices[textureIndex];
		if (globalIndex == 0)
			return null;
		TextureRequest? request = _textures.Acquire(globalIndex);
		if (request is null)
			return null;
		_requests.Add(request);
		return request.Texture;
	}

	private sealed class DrawState
	{
		internal int TextureIndex { get; set; } = -1;

		internal uint SourceBlend { get; set; } = RenderStateId.BlendSourceAlpha;

		internal uint DestinationBlend { get; set; } = RenderStateId.BlendInverseSourceAlpha;

		internal uint AddressU { get; set; } = TextureStageStateId.AddressWrap;

		internal uint AddressV { get; set; } = TextureStageStateId.AddressWrap;
	}
}
