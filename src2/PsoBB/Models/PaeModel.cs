using System.Buffers.Binary;
using PsoBB.Imaging;

namespace PsoBB.Models;

/// <summary>
/// The model and texture-list sections of a PAE archive.
/// </summary>
public sealed class PaeModel
{
	private PaeModel(NinjaModel model, NinjaTextureList? textureList, NinjaTextureReference[] textures)
	{
		Model = model;
		TextureList = textureList;
		Textures = textures;
	}

	/// <summary>Gets the parsed node tree, meshes and vertex arrays.</summary>
	public NinjaModel Model { get; }

	/// <summary>Gets the texture names from the texture-list section, or null.</summary>
	public NinjaTextureList? TextureList { get; }

	/// <summary>Gets the texture names paired with the archive's decoded textures.</summary>
	public IReadOnlyList<NinjaTextureReference> Textures { get; }

	/// <summary>
	/// Relocates both PAE sections and parses the model tree, index buffers and texture names.
	/// </summary>
	/// <param name="container">The parsed PAE archive.</param>
	/// <returns>The model section.</returns>
	/// <exception cref="ModelFormatException">A section, node, mesh or list is invalid.</exception>
	public static PaeModel Parse(PaeContainer container)
	{
		ReadOnlySpan<byte> modelSection = container.ModelData.Span;
		if (modelSection.Length == 0)
			throw new ModelFormatException("The PAE model section is empty.", 0);
		NinjaModel model = ReadModel(modelSection);
		NinjaTextureList? textureList = null;
		ReadOnlySpan<byte> textureSection = container.TextureListData.Span;
		if (textureSection.Length != 0)
			textureList = ReadTextureList(textureSection);
		textureList ??= model.Textures;
		if (textureList is not null)
			model.AttachTextures(textureList);
		NinjaTextureReference[] textures = ReadTextures(textureList, container.Textures);
		return new PaeModel(model, textureList, textures);
	}

	/// <summary>
	/// Reads a model section stored as a relocated block, a raw NJCM body or a chunk stream.
	/// </summary>
	/// <param name="section">The model section.</param>
	/// <returns>The parsed model.</returns>
	private static NinjaModel ReadModel(ReadOnlySpan<byte> section)
	{
		if (IsChunkStream(section))
			return NinjaModelReader.Read(NinjaChunkReader.ReadAll(section));
		RelocatedBlock block;
		try
		{
			block = RelocatedBlock.Parse(section);
		}
		catch (ModelFormatException) when (LooksLikeModel(section))
		{
			return NinjaModelReader.Read(section.ToArray());
		}
		return NinjaModelReader.Read(block.Payload);
	}

	/// <summary>
	/// Reads a texture-list section stored as a relocated block, a raw NJTL body or a chunk stream.
	/// </summary>
	/// <param name="section">The texture-list section.</param>
	/// <returns>The texture names.</returns>
	private static NinjaTextureList? ReadTextureList(ReadOnlySpan<byte> section)
	{
		if (IsChunkStream(section))
		{
			foreach (NinjaChunk chunk in NinjaChunkReader.ReadAll(section))
			{
				if (chunk.Type == NinjaChunkType.TextureList)
					return NinjaTextureList.Parse(chunk.Body.Span, chunk.Offset + 8);
			}
			return null;
		}
		RelocatedBlock block;
		try
		{
			block = RelocatedBlock.Parse(section);
		}
		catch (ModelFormatException) when (LooksLikeTextureList(section))
		{
			return NinjaTextureList.Parse(section, 0);
		}
		return NinjaTextureList.Parse(block.Payload.Span, 0);
	}

	/// <summary>
	/// Returns true when the bytes start with a plausible raw NJCM root node.
	/// </summary>
	/// <param name="section">The section bytes.</param>
	/// <returns>True for a raw model body.</returns>
	private static bool LooksLikeModel(ReadOnlySpan<byte> section)
	{
		if (section.Length < 0x34)
			return false;
		uint flags = BinaryPrimitives.ReadUInt32LittleEndian(section);
		if (flags > 0x1FFFFF)
			return false;
		return IsOptionalPointer(section, 4) && IsOptionalPointer(section, 44) && IsOptionalPointer(section, 48);
	}

	/// <summary>
	/// Returns true when a word is zero or an aligned offset inside the section.
	/// </summary>
	/// <param name="section">The section bytes.</param>
	/// <param name="offset">The pointer field offset.</param>
	/// <returns>True for a valid optional pointer.</returns>
	private static bool IsOptionalPointer(ReadOnlySpan<byte> section, int offset)
	{
		uint pointer = BinaryPrimitives.ReadUInt32LittleEndian(section[offset..]);
		return pointer == 0 || (pointer < section.Length && (pointer & 3) == 0);
	}

	/// <summary>
	/// Returns true when the bytes start with a plausible raw NJTL header.
	/// </summary>
	/// <param name="section">The section bytes.</param>
	/// <returns>True for a raw texture-list body.</returns>
	private static bool LooksLikeTextureList(ReadOnlySpan<byte> section)
	{
		if (section.Length < 8)
			return false;
		uint entriesOffset = BinaryPrimitives.ReadUInt32LittleEndian(section);
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(section[4..]);
		return entriesOffset <= section.Length && count <= (uint)section.Length / 0x0C && count * 0x0C <= section.Length - entriesOffset;
	}

	/// <summary>
	/// Pairs each name with the texture at the same archive index.
	/// </summary>
	/// <param name="textureList">The optional name list.</param>
	/// <param name="decoded">The decoded archive textures.</param>
	/// <returns>The paired references.</returns>
	private static NinjaTextureReference[] ReadTextures(NinjaTextureList? textureList, IReadOnlyList<XvmTexture> decoded)
	{
		if (textureList is null)
			return [];
		NinjaTextureReference[] references = new NinjaTextureReference[textureList.Names.Count];
		for (int index = 0; index < references.Length; index++)
		{
			if (index < decoded.Count)
			{
				XvmTexture texture = decoded[index];
				references[index] = new NinjaTextureReference(textureList.Names[index], texture.GlobalIndex, texture.Width, texture.Height);
			}
			else
			{
				references[index] = new NinjaTextureReference(textureList.Names[index], 0, 0, 0);
			}
		}
		return references;
	}

	/// <summary>
	/// Returns true when the section starts with a Ninja chunk header.
	/// </summary>
	/// <param name="data">The section bytes.</param>
	/// <returns>True for a chunk stream.</returns>
	private static bool IsChunkStream(ReadOnlySpan<byte> data)
	{
		if (data.Length < 8)
			return false;
		uint tag = BinaryPrimitives.ReadUInt32BigEndian(data);
		return tag is 0x4E4A434D or 0x4E4A544C or 0x4E4D444D or 0x504F4630 or 0x4E4A494E or 0x4E4A4C49 or 0x4E4A4341 or 0x4E53534D;
	}
}
