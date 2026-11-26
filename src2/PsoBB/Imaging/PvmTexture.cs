using PsoBB.Core;

namespace PsoBB.Imaging;

/// <summary>
/// One texture described by a PVM entry and its PVRT chunk.
/// </summary>
public sealed class PvmTexture
{
	internal PvmTexture(
		int index,
		ByteString name,
		ushort entryFormat,
		int declaredWidth,
		int declaredHeight,
		uint globalIndex,
		int offset,
		PvrTexture texture,
		TextureImage image)
	{
		Index = index;
		Name = name;
		EntryFormat = entryFormat;
		DeclaredWidth = declaredWidth;
		DeclaredHeight = declaredHeight;
		GlobalIndex = globalIndex;
		Offset = offset;
		Texture = texture;
		Image = image;
	}

	/// <summary>Gets the index stored in the archive entry.</summary>
	public int Index { get; }

	/// <summary>Gets the entry name, or an empty string when the archive has no names.</summary>
	public ByteString Name { get; }

	/// <summary>Gets the raw format word from the entry, or zero when absent.</summary>
	public ushort EntryFormat { get; }

	/// <summary>Gets the width declared by the entry, or zero when absent.</summary>
	public int DeclaredWidth { get; }

	/// <summary>Gets the height declared by the entry, or zero when absent.</summary>
	public int DeclaredHeight { get; }

	/// <summary>Gets the global texture index, or zero when absent.</summary>
	public uint GlobalIndex { get; }

	/// <summary>Gets the byte offset of the PVRT chunk in the archive.</summary>
	public int Offset { get; }

	/// <summary>Gets the parsed PVRT chunk.</summary>
	public PvrTexture Texture { get; }

	/// <summary>Gets the decoded BGRA image.</summary>
	public TextureImage Image { get; }
}
