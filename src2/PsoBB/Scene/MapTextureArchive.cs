using System.Buffers.Binary;
using PsoBB.Data;
using PsoBB.Imaging;

namespace PsoBB.Scene;

/// <summary>
/// The map texture archive loader behind <c>0x00800BC0</c>: read the named XVM file and return
/// every texture in archive order.
/// </summary>
/// <remarks>
/// The map loader names the archive <c>map + "m.xvm"</c> and falls back to <c>map + ".gvm"</c>.
/// Both are XVMH archives; this path has no PRS branch.
/// </remarks>
public static class MapTextureArchive
{
	/// <summary>The scene archive suffix the loader appends through <c>0x0092B2B8</c>.</summary>
	public const string ArchiveSuffix = ".xvm";

	/// <summary>The primary presence-check suffix at <c>0x0097F1F8</c>.</summary>
	public const string PrimarySuffix = "m.xvm";

	/// <summary>The fallback presence-check suffix at <c>0x0097F200</c>.</summary>
	public const string FallbackSuffix = ".gvm";

	/// <summary>
	/// Tries to read the named map texture archive.
	/// </summary>
	/// <param name="files">The data files that resolve the name.</param>
	/// <param name="name">The archive name.</param>
	/// <param name="textures">The textures in archive order, or an empty list when the file is absent.</param>
	/// <returns><see langword="true"/> when the file was read.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed.</exception>
	[Original(0x00800BC0, "MapTextureArchive_Load_00800bc0")]
	public static bool TryLoad(IDataFiles files, string name, out IReadOnlyList<XvmTexture> textures)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(name);
		if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
		{
			textures = [];
			return false;
		}
		if (data.Length < 4 || BinaryPrimitives.ReadUInt32LittleEndian(data.Span) != XvmTextureReader.Magic)
			throw new TextureFormatException($"The map texture archive '{name}' does not begin with XVMH.", 0);
		textures = XvmArchive.Read(data.Span);
		return true;
	}

	/// <summary>
	/// Tries the scene <c>map + ".xvm"</c> archive, then the <c>m.xvm</c> and <c>.gvm</c> names.
	/// </summary>
	/// <param name="files">The data files that resolve the names.</param>
	/// <param name="mapName">The map name prefix.</param>
	/// <param name="textures">The textures in archive order, or an empty list when no file is present.</param>
	/// <returns><see langword="true"/> when an archive was read.</returns>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="TextureFormatException">The archive is malformed.</exception>
	public static bool TryLoadForMap(IDataFiles files, string mapName, out IReadOnlyList<XvmTexture> textures)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(mapName);
		if (TryLoad(files, mapName + ArchiveSuffix, out textures))
			return true;
		if (TryLoad(files, mapName + PrimarySuffix, out textures))
			return true;
		if (TryLoad(files, mapName + FallbackSuffix, out textures))
			return true;
		textures = [];
		return false;
	}
}
