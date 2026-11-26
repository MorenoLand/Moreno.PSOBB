using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Mathematics;
using PsoBB.Models;

namespace PsoBB.Rendering;

/// <summary>
/// Converts parsed NJCM models into scene surfaces and applies the original node hierarchy and NMDM
/// motion poses.
/// </summary>
/// <remarks>
/// The static path follows the original node draw walker at 0x00831D40 and the animated path follows
/// the motion-aware walker at 0x0084785C. Mesh vertices keep their stored bytes, so the renderer
/// receives the original flexible vertex format and stride.
/// </remarks>
public sealed class ModelRenderer : IDisposable
{
	private readonly TextureCache? _textures;
	private readonly List<TextureRequest> _requests = [];
	private bool _disposed;

	/// <summary>
	/// Creates a model renderer.
	/// </summary>
	/// <param name="textures">The cache used to bind texture-list entries, or null to leave textures unbound.</param>
	public ModelRenderer(TextureCache? textures = null) => _textures = textures;

	/// <summary>
	/// Builds the model surfaces for a static pose.
	/// </summary>
	/// <param name="model">The parsed model.</param>
	/// <param name="transform">The object transform applied before the node hierarchy.</param>
	/// <returns>The surfaces in draw order.</returns>
	public IReadOnlyList<ModelSurface> Build(NinjaModel model, Matrix4x4 transform) => Build(model, transform, null, 0.0f);

	/// <summary>
	/// Builds the model surfaces for a static or animated pose.
	/// </summary>
	/// <param name="model">The parsed model.</param>
	/// <param name="transform">The object transform applied before the node hierarchy.</param>
	/// <param name="motion">The motion to apply, or null for the static pose.</param>
	/// <param name="frame">The frame position inside the motion.</param>
	/// <returns>The surfaces in draw order.</returns>
	public IReadOnlyList<ModelSurface> Build(NinjaModel model, Matrix4x4 transform, NinjaMotion? motion, float frame)
	{
		ArgumentNullException.ThrowIfNull(model);
		ObjectDisposedException.ThrowIf(_disposed, this);
		List<ModelSurface> surfaces = [];
		TransformationStack stack = new();
		stack.Push(transform);
		if (motion is null || motion.Bones.Count == 0)
			WalkStatic(model.RootNodes, stack, surfaces);
		else
		{
			int bone = 0;
			WalkAnimated(model.RootNodes, stack, surfaces, motion, frame, ref bone);
		}
		return surfaces;
	}

	/// <summary>
	/// Builds scene surfaces and binds their textures through the texture cache.
	/// </summary>
	/// <param name="model">The parsed model.</param>
	/// <param name="transform">The object transform applied before the node hierarchy.</param>
	/// <param name="motion">The motion to apply, or null for the static pose.</param>
	/// <param name="frame">The frame position inside the motion.</param>
	/// <param name="textures">The texture-list entries in render-state index order, or null.</param>
	/// <returns>The scene surfaces in draw order.</returns>
	/// <remarks>The list keeps traversal order and mixes the opaque and translucent buffers; use <see cref="BuildScene"/> to split them into scene passes.</remarks>
	public IReadOnlyList<SceneSurface> BuildSceneSurfaces(NinjaModel model, Matrix4x4 transform, NinjaMotion? motion, float frame, IReadOnlyList<NinjaTextureReference>? textures = null)
	{
		ReleaseTextures();
		IReadOnlyList<ModelSurface> modelSurfaces = Build(model, transform, motion, frame);
		SceneSurface[] surfaces = new SceneSurface[modelSurfaces.Count];
		for (int index = 0; index < surfaces.Length; index++)
		{
			ModelSurface surface = modelSurfaces[index];
			surfaces[index] = surface.CreateSceneSurface(ResolveTexture(surface.Material.TextureIndex, textures));
		}
		return surfaces;
	}

	/// <summary>
	/// Builds a render scene with the model surfaces split into the opaque and translucent passes.
	/// </summary>
	/// <param name="model">The parsed model.</param>
	/// <param name="transform">The object transform applied before the node hierarchy.</param>
	/// <param name="camera">The camera that draws the model.</param>
	/// <param name="motion">The motion to apply, or null for the static pose.</param>
	/// <param name="frame">The frame position inside the motion.</param>
	/// <param name="textures">The texture-list entries in render-state index order, or null.</param>
	/// <returns>The scene with opaque and translucent surface lists.</returns>
	public RenderScene BuildScene(NinjaModel model, Matrix4x4 transform, SceneCamera camera, NinjaMotion? motion = null, float frame = 0.0f, IReadOnlyList<NinjaTextureReference>? textures = null)
	{
		ReleaseTextures();
		IReadOnlyList<ModelSurface> modelSurfaces = Build(model, transform, motion, frame);
		List<SceneSurface> opaque = [];
		List<SceneSurface> transparent = [];
		foreach (ModelSurface surface in modelSurfaces)
		{
			SceneSurface sceneSurface = surface.CreateSceneSurface(ResolveTexture(surface.Material.TextureIndex, textures));
			if (surface.IsAlpha)
				transparent.Add(sceneSurface);
			else
				opaque.Add(sceneSurface);
		}
		return new RenderScene { Camera = camera, Opaque = opaque, Transparent = transparent };
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
	/// Draws one sibling chain of static nodes, pushing a matrix copy for transform nodes exactly as
	/// the original draw walker does.
	/// </summary>
	/// <param name="nodes">The sibling chain.</param>
	/// <param name="stack">The shared transform stack.</param>
	/// <param name="surfaces">The destination surface list.</param>
	[Original(0x00831D40, "draw_model_nodes")]
	private static void WalkStatic(IReadOnlyList<NinjaNode> nodes, TransformationStack stack, List<ModelSurface> surfaces)
	{
		foreach (NinjaNode node in nodes)
		{
			if ((node.EvaluationFlags & 7) == 7)
			{
				if (!node.IsHidden && node.Mesh is not null)
					AddMeshSurfaces(node, node.Mesh, stack.Current, surfaces);
				WalkStatic(node.Children, stack, surfaces);
				continue;
			}
			stack.PushCopy();
			if ((node.EvaluationFlags & 0x1) == 0)
				stack.Translate(node.Position);
			if ((node.EvaluationFlags & 0x2) == 0)
			{
				if (node.Quaternion is { } quaternion)
					stack.RotateQuaternion(quaternion);
				else
					stack.RotateEuler(node.RotationX, node.RotationY, node.RotationZ, (node.EvaluationFlags & 0x20) != 0);
			}
			if ((node.EvaluationFlags & 0x4) == 0)
				stack.Scale(node.Scale);
			if (!node.IsHidden && node.Mesh is not null)
				AddMeshSurfaces(node, node.Mesh, stack.Current, surfaces);
			WalkStatic(node.Children, stack, surfaces);
			stack.Pop();
		}
	}

	/// <summary>
	/// Draws one sibling chain with the motion context, advancing the bone record before descending
	/// into children.
	/// </summary>
	/// <param name="nodes">The sibling chain.</param>
	/// <param name="stack">The shared transform stack.</param>
	/// <param name="surfaces">The destination surface list.</param>
	/// <param name="motion">The motion to apply.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="bone">The current bone record index.</param>
	[Original(0x0084785C, "draw_model_nodes_motion")]
	private static void WalkAnimated(IReadOnlyList<NinjaNode> nodes, TransformationStack stack, List<ModelSurface> surfaces, NinjaMotion motion, float frame, ref int bone)
	{
		foreach (NinjaNode node in nodes)
		{
			stack.PushCopy();
			ApplyAnimatedNode(stack, node, motion, frame, bone);
			if (!node.IsHidden && node.Mesh is not null)
				AddMeshSurfaces(node, node.Mesh, stack.Current, surfaces);
			bone++;
			WalkAnimated(node.Children, stack, surfaces, motion, frame, ref bone);
			stack.Pop();
		}
	}

	/// <summary>
	/// Applies one node's motion channels or its stored pose when the node opts out of animation.
	/// </summary>
	/// <param name="stack">The transform stack receiving the local transform.</param>
	/// <param name="node">The node to pose.</param>
	/// <param name="motion">The motion that supplies the tracks.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="bone">The bone record index.</param>
	[Original(0x008305EC, "calc_model_node")]
	private static void ApplyAnimatedNode(TransformationStack stack, NinjaNode node, NinjaMotion motion, float frame, int bone)
	{
		bool staticPose = (node.EvaluationFlags & 0x40) != 0;
		NinjaBoneAnimation? animation = !staticPose && bone < motion.Bones.Count ? motion.Bones[bone] : null;
		Vector3 translation = node.Position;
		if (animation is not null && motion.HasTranslation && NinjaMotionEvaluator.TrySampleTranslation(animation, motion, frame, out Vector3 sampledTranslation))
			translation = sampledTranslation;
		Vector3 scale = node.Scale;
		if (animation is not null && motion.HasScale && NinjaMotionEvaluator.TrySampleScale(animation, motion, frame, out Vector3 sampledScale))
			scale = sampledScale;
		stack.Translate(translation);
		if (animation is not null && motion.HasEulerRotation && NinjaMotionEvaluator.TrySampleEuler(animation, frame, out int x, out int y, out int z))
			stack.RotateEuler(x, y, z, (node.EvaluationFlags & 0x20) != 0);
		else if (animation is not null && motion.HasQuaternionRotation && NinjaMotionEvaluator.TrySampleQuaternion(animation, frame, out NinjaQuaternion sampledQuaternion))
			stack.RotateQuaternion(sampledQuaternion);
		else if (node.Quaternion is { } quaternion)
			stack.RotateQuaternion(quaternion);
		else
			stack.RotateEuler(node.RotationX, node.RotationY, node.RotationZ, (node.EvaluationFlags & 0x20) != 0);
		stack.Scale(scale);
	}

	/// <summary>
	/// Creates one surface for every opaque and translucent index buffer of a mesh.
	/// </summary>
	/// <param name="node">The node that owns the mesh.</param>
	/// <param name="mesh">The mesh to split into surfaces.</param>
	/// <param name="transform">The node world transform.</param>
	/// <param name="surfaces">The destination surface list.</param>
	private static void AddMeshSurfaces(NinjaNode node, NinjaMesh mesh, in Matrix4x4 transform, List<ModelSurface> surfaces)
	{
		for (int index = 0; index < mesh.IndexBuffers.Count; index++)
		{
			NinjaIndexBuffer buffer = mesh.IndexBuffers[index];
			if (buffer.Indices.Count != 0)
				surfaces.Add(new ModelSurface(node, mesh, buffer, mesh.OpaqueMaterials[index], transform));
		}
		for (int index = 0; index < mesh.AlphaIndexBuffers.Count; index++)
		{
			NinjaIndexBuffer buffer = mesh.AlphaIndexBuffers[index];
			if (buffer.Indices.Count != 0)
				surfaces.Add(new ModelSurface(node, mesh, buffer, mesh.AlphaMaterials[index], transform));
		}
	}

	/// <summary>
	/// Acquires a texture-list entry from the cache and keeps the reference alive until the next build.
	/// </summary>
	/// <param name="textureIndex">The render-state texture-list index.</param>
	/// <param name="textures">The texture-list entries in index order.</param>
	/// <returns>The uploaded texture, or null when the index or cache is unavailable.</returns>
	private ITexture? ResolveTexture(int textureIndex, IReadOnlyList<NinjaTextureReference>? textures)
	{
		if (_textures is null || textures is null || textureIndex < 0 || textureIndex >= textures.Count)
			return null;
		uint globalIndex = textures[textureIndex].GlobalIndex;
		if (globalIndex == 0)
			return null;
		TextureRequest? request = _textures.Acquire(globalIndex);
		if (request is null)
			return null;
		_requests.Add(request);
		return request.Texture;
	}
}
