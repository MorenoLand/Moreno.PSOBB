namespace PsoBB.Imaging;

/// <summary>
/// Reads a standalone XVM texture archive.
/// </summary>
public static class XvmArchive
{
	/// <summary>
	/// Decodes every texture in an XVM archive.
	/// </summary>
	/// <param name="data">The complete XVM archive.</param>
	/// <returns>The textures in archive order.</returns>
	/// <exception cref="TextureFormatException">The archive or one of its textures is invalid.</exception>
	public static IReadOnlyList<XvmTexture> Read(ReadOnlySpan<byte> data) => XvmTextureReader.Read(data);
}
