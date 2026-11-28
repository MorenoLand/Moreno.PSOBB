using System.Buffers.Binary;

namespace PsoBB.Scene;

/// <summary>
/// A <c>c.rel</c> collision image: a terminated array of placed triangle meshes.
/// </summary>
/// <remarks>
/// The REL root points at the first section record. A section whose mesh offset is zero terminates the array. A mesh stores an implicit vertex array addressed by its faces, so the vertex count is recovered from the largest face index.
/// </remarks>
public sealed class MapCollisionFile
{
	private readonly MapCollisionSection[] _sections;

	private MapCollisionFile(MapCollisionSection[] sections)
	{
		_sections = sections;
	}

	/// <summary>Gets the collision sections in file order.</summary>
	public IReadOnlyList<MapCollisionSection> Sections => _sections;

	/// <summary>
	/// Parses a relocated collision image at its root.
	/// </summary>
	/// <param name="container">The relocated image.</param>
	/// <returns>The parsed collision sections.</returns>
	/// <exception cref="SceneFormatException">A section, terminator, mesh or face lies outside the image.</exception>
	[Original(0x0080A3C0, "load_map_c_rel")]
	public static MapCollisionFile Parse(RelContainer container)
	{
		ArgumentNullException.ThrowIfNull(container);
		return Parse(container.Data.Span, container.RootOffset);
	}

	/// <summary>
	/// Parses a collision root at the given offset.
	/// </summary>
	/// <param name="data">The complete image.</param>
	/// <param name="rootOffset">Offset of the first section pointer.</param>
	/// <returns>The parsed collision sections.</returns>
	/// <exception cref="SceneFormatException">A section, terminator, mesh or face lies outside the image.</exception>
	public static MapCollisionFile Parse(ReadOnlySpan<byte> data, int rootOffset = 0)
	{
		if (rootOffset < 0 || rootOffset > data.Length - 4)
			throw new SceneFormatException("The collision root pointer is truncated.", rootOffset);
		int sectionsOffset = MapRenderGeometryFile.ReadOffset(data, rootOffset, "collision sections");
		byte[] image = data.ToArray();
		List<MapCollisionSection> sections = [];
		int offset = sectionsOffset;
		while (true)
		{
			if (offset < 0 || offset > image.Length - MapCollisionSection.EntrySize)
				throw new SceneFormatException("The collision section array has no terminator inside the image.", offset);
			if (BinaryPrimitives.ReadUInt32LittleEndian(image.AsSpan(offset)) == 0)
				return new MapCollisionFile([.. sections]);
			sections.Add(MapCollisionSection.Parse(image, offset, sections.Count));
			offset = checked(offset + MapCollisionSection.EntrySize);
		}
	}
}
