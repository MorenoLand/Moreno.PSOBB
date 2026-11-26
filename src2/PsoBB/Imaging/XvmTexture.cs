namespace PsoBB.Imaging;

/// <summary>
/// One texture from an XVRT chunk.
/// </summary>
public sealed class XvmTexture
{
	internal XvmTexture(uint globalIndex, XvmTextureFormat format, int width, int height, int offset, TextureImage image)
	{
		GlobalIndex = globalIndex;
		Format = format;
		Width = width;
		Height = height;
		Offset = offset;
		Image = image;
	}

	/// <summary>Gets the global texture index used by the client's texture cache.</summary>
	public uint GlobalIndex { get; }

	/// <summary>Gets the compression format.</summary>
	public XvmTextureFormat Format { get; }

	/// <summary>Gets the texture width in pixels.</summary>
	public int Width { get; }

	/// <summary>Gets the texture height in pixels.</summary>
	public int Height { get; }

	/// <summary>Gets the byte offset of the XVRT chunk in the archive.</summary>
	public int Offset { get; }

	/// <summary>Gets the decoded BGRA image.</summary>
	public TextureImage Image { get; }
}
