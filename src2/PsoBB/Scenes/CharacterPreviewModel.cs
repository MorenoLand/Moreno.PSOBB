using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Imaging;
using PsoBB.Models;
using PsoBB.Rendering;
using RenderMatrix = PsoBB.Mathematics.Matrix4x4;

namespace PsoBB.Scenes;

/// <summary>
/// One of the four player preview objects: a parsed model, its selected motion, the motion clock
/// and the instantiated textures.
/// </summary>
/// <remarks>
/// The original preview object is constructed at <c>0x4D7E70</c> and advances in
/// <c>0x4D80A4</c>. This type ports the node walk, keyframe sampling and surface submission; the
/// camera modes and input-driven target selection in that function are not ported.
/// </remarks>
public sealed class CharacterPreviewModel : IDisposable
{
	private readonly List<ITexture> _textures = [];
	private readonly Dictionary<NinjaNode, Matrix4x4> _world = [];
	private NinjaNode[] _animatedNodes = [];
	private BmlFile? _file;
	private NinjaMotion? _motion;
	private float _frame;
	private bool _disposed;

	/// <summary>
	/// Creates one player preview slot.
	/// </summary>
	/// <param name="slot">The player slot from zero through three.</param>
	/// <exception cref="ArgumentOutOfRangeException">The slot is outside the four preview slots.</exception>
	public CharacterPreviewModel(int slot)
	{
		if (slot is < 0 or >= CharacterCreationScreen.PlayerCount)
			throw new ArgumentOutOfRangeException(nameof(slot), slot, "The preview slot is from zero through three.");
		Slot = slot;
	}

	/// <summary>Gets the player slot.</summary>
	public int Slot { get; }

	/// <summary>Gets the loaded BML entry, or null.</summary>
	public BmlFile? File => _file;

	/// <summary>Gets the parsed model, or null.</summary>
	public NinjaModel? Model => _file?.Model;

	/// <summary>Gets the selected motion, or null.</summary>
	public NinjaMotion? Motion => _motion;

	/// <summary>Gets the motion clock in frames.</summary>
	public float Frame => _frame;

	/// <summary>Gets or sets the placement in camera space.</summary>
	public Vector3 Position { get; set; }

	/// <summary>Gets or sets the yaw in radians.</summary>
	public float Yaw { get; set; }

	/// <summary>Gets a value indicating whether a model is loaded.</summary>
	public bool IsLoaded => Model is not null;

	/// <summary>
	/// Attaches a parsed model entry and instantiates its embedded textures.
	/// </summary>
	/// <param name="file">The BML entry with an NJCM model.</param>
	/// <param name="renderer">The renderer that owns the textures.</param>
	/// <param name="motion">The shared motion to use when the entry carries none.</param>
	/// <returns><see langword="true"/> when the entry supplied a model.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	public bool Load(BmlFile file, IRenderer renderer, NinjaMotion? motion = null)
	{
		ArgumentNullException.ThrowIfNull(file);
		ArgumentNullException.ThrowIfNull(renderer);
		ReleaseTextures();
		_file = file;
		_motion = file.Motion ?? motion;
		_frame = 0f;
		foreach (XvmTexture texture in file.Textures)
			_textures.Add(renderer.CreateTexture(texture.Width, texture.Height, texture.Image.Pixels.Span, texture.Image.Stride));
		_world.Clear();
		if (Model is null)
			return false;
		BuildAnimatedNodes();
		UpdateWorld();
		return true;
	}

	/// <summary>
	/// Advances the motion clock and wraps at the motion length.
	/// </summary>
	/// <param name="frames">The number of frames to add.</param>
	public void Advance(float frames)
	{
		if (Model is null)
			return;
		_frame += frames;
		uint length = _motion?.FrameCount ?? 0;
		if (length != 0 && _frame >= length)
			_frame %= length;
		UpdateWorld();
	}

	/// <summary>
	/// Returns the world transform of one node at the current motion frame.
	/// </summary>
	/// <param name="node">A node from the loaded model.</param>
	/// <returns>The row-vector world transform.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="node"/> is null.</exception>
	/// <exception cref="InvalidOperationException">The node is not part of the loaded model.</exception>
	public Matrix4x4 GetWorld(NinjaNode node)
	{
		ArgumentNullException.ThrowIfNull(node);
		if (!_world.TryGetValue(node, out Matrix4x4 transform))
			throw new InvalidOperationException("The node does not belong to the loaded preview model.");
		return transform;
	}

	/// <summary>
	/// Builds the opaque and transparent surfaces of every visible node and mesh.
	/// </summary>
	/// <param name="opaque">The opaque destination.</param>
	/// <param name="transparent">The transparent destination.</param>
	public void AppendSurfaces(List<SceneSurface> opaque, List<SceneSurface> transparent)
	{
		ArgumentNullException.ThrowIfNull(opaque);
		ArgumentNullException.ThrowIfNull(transparent);
		if (Model is null)
			return;
		foreach (NinjaNode node in Model.DrawNodes)
		{
			if (node.Mesh is null || !_world.TryGetValue(node, out Matrix4x4 world))
				continue;
			Matrix4x4 placement = Matrix4x4.CreateFromYawPitchRoll(Yaw, 0f, 0f) * Matrix4x4.CreateTranslation(Position);
			Matrix4x4 transform = world * placement;
			NinjaMesh mesh = node.Mesh;
			for (int index = 0; index < mesh.IndexBuffers.Count; index++)
			{
				NinjaIndexBuffer buffer = mesh.IndexBuffers[index];
				NinjaVertexBuffer vertices = mesh.VertexBuffers[buffer.VertexBufferIndex];
				opaque.Add(CreateSurface(vertices, buffer, mesh.OpaqueMaterials[index], transform, false));
			}
			for (int index = 0; index < mesh.AlphaIndexBuffers.Count; index++)
			{
				NinjaIndexBuffer buffer = mesh.AlphaIndexBuffers[index];
				NinjaVertexBuffer vertices = mesh.VertexBuffers[buffer.VertexBufferIndex];
				transparent.Add(CreateSurface(vertices, buffer, mesh.AlphaMaterials[index], transform, true));
			}
		}
	}

	/// <summary>Releases every instantiated texture.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		ReleaseTextures();
		_file = null;
		_motion = null;
		_world.Clear();
	}

	private SceneSurface CreateSurface(NinjaVertexBuffer vertices, NinjaIndexBuffer buffer, NinjaMaterial material, Matrix4x4 transform, bool transparent)
	{
		ITexture? texture = material.TextureIndex >= 0 && material.TextureIndex < _textures.Count ? _textures[material.TextureIndex] : null;
		return new SceneSurface
		{
			Vertices = vertices.Encode(),
			Stride = vertices.Stride,
			VertexFormat = vertices.Format,
			Primitive = PrimitiveType.TriangleStrip,
			Indices = buffer.Indices is ushort[] indices ? indices : buffer.Indices.ToArray(),
			Transform = ToRenderMatrix(transform),
			Texture = texture,
			CullMode = SceneCullMode.None,
			SourceBlend = transparent ? material.BlendSource : RenderStateId.BlendOne,
			DestinationBlend = transparent ? material.BlendDestination : RenderStateId.BlendZero,
		};
	}

	private void BuildAnimatedNodes()
	{
		_animatedNodes = Model is null ? [] : [.. Model.Nodes.Where(node => (node.EvaluationFlags & 0x40) == 0)];
	}

	private void UpdateWorld()
	{
		_world.Clear();
		if (Model is null)
			return;
		foreach (NinjaNode root in Model.RootNodes)
			UpdateNode(root, Matrix4x4.Identity);
	}

	private void UpdateNode(NinjaNode node, Matrix4x4 parent)
	{
		Matrix4x4 local = LocalTransform(node);
		Matrix4x4 world = local * parent;
		_world[node] = world;
		foreach (NinjaNode child in node.Children)
			UpdateNode(child, world);
	}

	private Matrix4x4 LocalTransform(NinjaNode node)
	{
		Vector3 translation = (node.EvaluationFlags & 0x1) != 0 ? Vector3.Zero : ToSystem(node.Position);
		Vector3 scale = (node.EvaluationFlags & 0x4) != 0 ? Vector3.One : ToSystem(node.Scale);
		Vector3 rotation = (node.EvaluationFlags & 0x2) != 0
			? Vector3.Zero
			: new Vector3(node.RotationX * (MathF.Tau / 65536f), node.RotationY * (MathF.Tau / 65536f), node.RotationZ * (MathF.Tau / 65536f));
		bool hasMotionRotation = false;
		int bone = Array.IndexOf(_animatedNodes, node);
		if (bone >= 0 && _motion is not null && bone < _motion.Bones.Count)
		{
			NinjaBoneAnimation animation = _motion.Bones[bone];
			NinjaAnimationTrack? translationTrack = FindTrack(animation, NinjaAnimationChannel.Translation);
			NinjaAnimationTrack? rotationTrack = FindTrack(animation, NinjaAnimationChannel.Rotation);
			NinjaAnimationTrack? scaleTrack = FindTrack(animation, NinjaAnimationChannel.Scale);
			if ((node.EvaluationFlags & 0x1) == 0)
				translation = Sample(translationTrack, translation);
			if ((node.EvaluationFlags & 0x2) == 0)
			{
				rotation = Sample(rotationTrack, rotation);
				hasMotionRotation = rotationTrack is { Keyframes.Count: > 0 };
			}
			if ((node.EvaluationFlags & 0x4) == 0)
				scale = Sample(scaleTrack, scale);
		}
		Matrix4x4 orientation = node.Quaternion is { } quaternion && !hasMotionRotation
			? RotationFromQuaternion(quaternion)
			: Matrix4x4.CreateFromYawPitchRoll(rotation.Y, rotation.X, rotation.Z);
		return Matrix4x4.CreateScale(scale) * orientation * Matrix4x4.CreateTranslation(translation);
	}

	private Vector3 Sample(NinjaAnimationTrack? track, Vector3 fallback)
	{
		if (track is null || track.Keyframes.Count == 0)
			return fallback;
		IReadOnlyList<NinjaKeyframe> keys = track.Keyframes;
		if (_frame <= keys[0].Frame)
			return Value(keys[0]);
		for (int index = 1; index < keys.Count; index++)
		{
			NinjaKeyframe next = keys[index];
			if (_frame > next.Frame)
				continue;
			NinjaKeyframe previous = keys[index - 1];
			uint length = next.Frame - previous.Frame;
			float amount = length == 0 ? 0f : (_frame - previous.Frame) / length;
			Vector3 first = Value(previous);
			return Vector3.Lerp(first, Value(next), amount);
		}
		return Value(keys[^1]);
	}

	private static NinjaAnimationTrack? FindTrack(NinjaBoneAnimation bone, NinjaAnimationChannel channel)
	{
		foreach (NinjaAnimationTrack track in bone.Tracks)
			if (track.Channel == channel)
				return track;
		return null;
	}

	private static Vector3 Value(NinjaKeyframe keyframe) => new(keyframe.X, keyframe.Y, keyframe.Z);

	private static Vector3 ToSystem(PsoBB.Mathematics.Vector3 value) => new(value.X, value.Y, value.Z);

	private static Matrix4x4 RotationFromQuaternion(NinjaQuaternion value)
	{
		Quaternion quaternion = new(value.X, value.Y, value.Z, value.W);
		if (quaternion.LengthSquared() > 0f)
			quaternion = Quaternion.Normalize(quaternion);
		return Matrix4x4.CreateFromQuaternion(quaternion);
	}

	private static RenderMatrix ToRenderMatrix(Matrix4x4 matrix) => new(
		matrix.M11, matrix.M12, matrix.M13, matrix.M14,
		matrix.M21, matrix.M22, matrix.M23, matrix.M24,
		matrix.M31, matrix.M32, matrix.M33, matrix.M34,
		matrix.M41, matrix.M42, matrix.M43, matrix.M44);

	private void ReleaseTextures()
	{
		foreach (ITexture texture in _textures)
			texture.Dispose();
		_textures.Clear();
	}
}
