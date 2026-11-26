using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// One NJCM model node with its local pose, attached mesh and child nodes.
/// </summary>
public sealed class NinjaNode
{
	private readonly List<NinjaNode> _children = [];

	internal NinjaNode(uint evaluationFlags, Vector3 position, Vector3 scale, int rotationX, int rotationY, int rotationZ, NinjaQuaternion? quaternion, NinjaMesh? mesh)
	{
		EvaluationFlags = evaluationFlags;
		Position = position;
		Scale = scale;
		RotationX = rotationX;
		RotationY = rotationY;
		RotationZ = rotationZ;
		Quaternion = quaternion;
		Mesh = mesh;
	}

	/// <summary>Gets the evaluation flags that select which local transforms are applied.</summary>
	public uint EvaluationFlags { get; }

	/// <summary>Gets the local translation.</summary>
	public Vector3 Position { get; }

	/// <summary>Gets the local scale.</summary>
	public Vector3 Scale { get; }

	/// <summary>Gets the first Euler angle in 1/65536-turn units when the node is not quaternion-rotated.</summary>
	public int RotationX { get; }

	/// <summary>Gets the second Euler angle in 1/65536-turn units when the node is not quaternion-rotated.</summary>
	public int RotationY { get; }

	/// <summary>Gets the third Euler angle in 1/65536-turn units when the node is not quaternion-rotated.</summary>
	public int RotationZ { get; }

	/// <summary>Gets the quaternion rotation when the node uses one, or null.</summary>
	public NinjaQuaternion? Quaternion { get; }

	/// <summary>Gets the attached mesh, or null for a transform-only node.</summary>
	public NinjaMesh? Mesh { get; private set; }

	/// <summary>Gets the child nodes in model order.</summary>
	public IReadOnlyList<NinjaNode> Children => _children;

	/// <summary>Gets a value indicating whether the node and its geometry are hidden.</summary>
	public bool IsHidden => (EvaluationFlags & 0x8) != 0;

	/// <summary>Gets a value indicating whether children are skipped.</summary>
	public bool SkipsChildren => (EvaluationFlags & 0x10) != 0;

	internal void AddChild(NinjaNode child) => _children.Add(child);

	/// <summary>
	/// Attaches a mesh after the chunk parser has collected the strip owners.
	/// </summary>
	/// <param name="mesh">The mesh to attach, or null.</param>
	internal void SetMesh(NinjaMesh? mesh) => Mesh = mesh;
}
