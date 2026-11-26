using PsoBB.Imaging;

namespace PsoBB.Models;

/// <summary>
/// One entry of a BML archive: its name, chunks, parsed model, animations and embedded textures.
/// </summary>
public sealed class BmlFile
{
	internal BmlFile(string name, IReadOnlyList<NinjaChunk> chunks, NinjaModel? model, NinjaTextureList? textureList, IReadOnlyList<NinjaMotion> motions, IReadOnlyList<XvmTexture> textures)
	{
		Name = name;
		Chunks = chunks;
		Model = model;
		TextureList = textureList;
		Motions = motions;
		Textures = textures;
	}

	/// <summary>Gets the stored file name.</summary>
	public string Name { get; }

	/// <summary>Gets the relocated chunks in file order.</summary>
	public IReadOnlyList<NinjaChunk> Chunks { get; }

	/// <summary>Gets the parsed model, or null when the entry has no NJCM chunk.</summary>
	public NinjaModel? Model { get; }

	/// <summary>Gets the texture names from the entry's NJTL chunk, or null.</summary>
	public NinjaTextureList? TextureList { get; }

	/// <summary>Gets every NMDM motion in file order.</summary>
	public IReadOnlyList<NinjaMotion> Motions { get; internal set; }

	/// <summary>Gets the first NMDM motion, or null when the entry has no animation.</summary>
	public NinjaMotion? Motion => Motions.Count == 0 ? null : Motions[0];

	/// <summary>Gets the decoded textures from the entry's texture archive.</summary>
	public IReadOnlyList<XvmTexture> Textures { get; }
}
