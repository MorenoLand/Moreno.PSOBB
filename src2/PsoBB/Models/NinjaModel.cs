namespace PsoBB.Models;

/// <summary>
/// A parsed NJCM model: its root nodes, flattened hierarchy, meshes and texture names.
/// </summary>
public sealed class NinjaModel
{
	private readonly NinjaNode[] _nodes;
	private readonly NinjaNode[] _drawNodes;
	private NinjaTextureList? _textures;

	internal NinjaModel(NinjaNode[] roots, NinjaNode[] nodes, NinjaMesh[] meshes, NinjaTextureList? textures)
	{
		RootNodes = roots;
		_nodes = nodes;
		Meshes = meshes;
		_textures = textures;
		List<NinjaNode> drawNodes = [];
		foreach (NinjaNode root in roots)
			CollectDrawNodes(root, drawNodes);
		_drawNodes = drawNodes.ToArray();
		AnimatedNodeCount = nodes.Length;
	}

	/// <summary>Gets the root nodes in sibling order.</summary>
	public IReadOnlyList<NinjaNode> RootNodes { get; }

	/// <summary>Gets every node in depth-first, first-sibling-first order.</summary>
	public IReadOnlyList<NinjaNode> Nodes => _nodes;

	/// <summary>Gets the nodes the original draw walker visits, in draw order. A visited node may have no mesh.</summary>
	public IReadOnlyList<NinjaNode> DrawNodes => _drawNodes;

	/// <summary>Gets every distinct mesh attached to the tree.</summary>
	public IReadOnlyList<NinjaMesh> Meshes { get; }

	/// <summary>Gets the number of nodes that consume a motion bone record.</summary>
	public int AnimatedNodeCount { get; }

	/// <summary>Gets the texture names, when the model was loaded with an NJTL chunk.</summary>
	public NinjaTextureList? Textures => _textures;

	/// <summary>
	/// Attaches a texture list loaded beside the model.
	/// </summary>
	/// <param name="textures">The texture list.</param>
	internal void AttachTextures(NinjaTextureList textures) => _textures ??= textures;

	/// <summary>
	/// Collects visible nodes and stops descending at nodes that set the break flag.
	/// </summary>
	/// <param name="node">The current node.</param>
	/// <param name="destination">The destination list.</param>
	private static void CollectDrawNodes(NinjaNode node, List<NinjaNode> destination)
	{
		if (!node.IsHidden)
			destination.Add(node);
		if (node.SkipsChildren)
			return;
		foreach (NinjaNode child in node.Children)
			CollectDrawNodes(child, destination);
	}
}
