using PsoBB.Imaging;

namespace PsoBB.Graphics.Textures;

/// <summary>
/// The decoded source and GPU texture retained for one global texture index.
/// </summary>
internal sealed class TextureRecord
{
	internal TextureRecord(uint globalIndex, TextureImage image)
	{
		GlobalIndex = globalIndex;
		Image = image;
	}

	/// <summary>Gets the global texture index this record belongs to.</summary>
	internal uint GlobalIndex { get; private set; }

	/// <summary>Gets the decoded image kept for reloading after a release.</summary>
	internal TextureImage Image { get; }

	/// <summary>Gets or sets the uploaded GPU texture, or null while it is released.</summary>
	internal ITexture? Texture { get; set; }

	/// <summary>Gets or sets the number of live requests that reference this record.</summary>
	internal int ReferenceCount { get; set; }

	/// <summary>
	/// Returns the record to its unused state without disposing the image.
	/// </summary>
	[Original(0x0082AC20)]
	internal void Reset()
	{
		GlobalIndex = TextureCache.EmptyIndex;
		Texture = null;
		ReferenceCount = 0;
	}
}
