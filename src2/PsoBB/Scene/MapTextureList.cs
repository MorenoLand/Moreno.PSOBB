using System.Buffers.Binary;
using PsoBB.Imaging;

namespace PsoBB.Scene;

/// <summary>
/// The ordered texture names and resolved global indices a <c>fmt2</c> scene binds during a draw.
/// </summary>
/// <remarks>
/// The list is pointed to by the scene header and holds a relocated array of 12-byte entries. Each entry starts with the texture name and its third word points at a texture object whose +0x0C word points at the texture record; the record's +0x20 word is the global index the cache uses. A zero object pointer means the texture loader has not filled the slot, which is what raw <c>n.rel</c> files contain; a zero global index means the slot has no texture.
/// </remarks>
public sealed class MapTextureList
{
	private readonly string[] _names;
	private readonly uint[] _globalIndices;

	private MapTextureList(string[] names, uint[] globalIndices)
	{
		_names = names;
		_globalIndices = globalIndices;
	}

	/// <summary>Gets the texture names in scene texture-list order.</summary>
	public IReadOnlyList<string> Names => _names;

	/// <summary>Gets the resolved global texture indices in scene texture-list order.</summary>
	public IReadOnlyList<uint> GlobalIndices => _globalIndices;

	/// <summary>
	/// Reads a scene texture list and resolves each entry to its global texture index.
	/// </summary>
	/// <param name="data">The complete relocated image.</param>
	/// <param name="offset">Offset of the list header.</param>
	/// <returns>The texture list.</returns>
	/// <exception cref="SceneFormatException">The header, entry array, texture object or record lies outside the image.</exception>
	[Original(0x00829CC8, "MapTextureList_00829cc8")]
	internal static MapTextureList Parse(ReadOnlySpan<byte> data, int offset)
	{
		if (offset < 0 || offset > data.Length - 8)
			throw new SceneFormatException("The map texture list header is truncated.", offset);
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
		if (count > int.MaxValue / 0x0C)
			throw new SceneFormatException($"The map texture count {count} exceeds the readable range.", offset + 4);
		if (count == 0)
			return new MapTextureList([], []);
		int entriesOffset = MapRenderGeometryFile.ReadOffset(data, offset, "map texture entries");
		int length = (int)count * 0x0C;
		if (entriesOffset < 0 || entriesOffset > data.Length || length > data.Length - entriesOffset)
			throw new SceneFormatException($"The map texture entry array at 0x{entriesOffset:X} with {count} entries does not fit the image.", offset);
		string[] names = new string[count];
		uint[] indices = new uint[count];
		for (int index = 0; index < indices.Length; index++)
		{
			int entryOffset = entriesOffset + index * 0x0C;
			int nameOffset = MapRenderGeometryFile.ReadOffset(data, entryOffset, $"map texture {index} name");
			names[index] = nameOffset == 0 ? string.Empty : ReadName(data, nameOffset, index);
			int objectOffset = MapRenderGeometryFile.ReadOffset(data, entryOffset + 8, $"map texture {index} object");
			indices[index] = objectOffset == 0 ? 0 : ReadGlobalIndex(data, objectOffset, index);
		}
		return new MapTextureList(names, indices);
	}

	/// <summary>
	/// Fills the zero object slots in archive order, as <c>0x0081A7D8</c> copies the loaded texture
	/// records into the scene list.
	/// </summary>
	/// <param name="textures">The archive textures in order.</param>
	/// <returns>The list with resolved global indices.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="textures"/> is null.</exception>
	[Original(0x0081A7D8, "MapTextureList_Fill_0081a7d8")]
	public MapTextureList Fill(IReadOnlyList<XvmTexture> textures)
	{
		ArgumentNullException.ThrowIfNull(textures);
		uint[] indices = new uint[_names.Length];
		int count = Math.Min(indices.Length, textures.Count);
		for (int index = 0; index < count; index++)
			indices[index] = textures[index].GlobalIndex;
		return new MapTextureList(_names, indices);
	}

	private static string ReadName(ReadOnlySpan<byte> data, int nameOffset, int index)
	{
		int end = nameOffset;
		while (end < data.Length && data[end] != 0)
			end++;
		if (end == data.Length)
			throw new SceneFormatException($"The map texture {index} name is not terminated.", nameOffset);
		return System.Text.Encoding.Latin1.GetString(data[nameOffset..end]);
	}

	private static uint ReadGlobalIndex(ReadOnlySpan<byte> data, int objectOffset, int index)
	{
		int recordOffset = MapRenderGeometryFile.ReadOffset(data, objectOffset + 0x0C, $"map texture {index} record");
		if (recordOffset == 0 || recordOffset > data.Length - 0x24)
			throw new SceneFormatException($"The map texture {index} record at 0x{recordOffset:X} does not fit the image.", objectOffset + 0x0C);
		return BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + 0x20)..]);
	}
}
