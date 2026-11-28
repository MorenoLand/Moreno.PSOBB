using PsoBB.Imaging;

namespace PsoBB.Graphics.Textures;

/// <summary>
/// One slot of the cache's fixed request table, keyed by global texture index.
/// </summary>
public sealed class TextureCacheEntry
{
	internal TextureCacheEntry()
	{
		Reset();
	}

	/// <summary>Gets the global texture index, or zero when the slot is unused.</summary>
	public uint GlobalIndex { get; private set; }

	/// <summary>Gets the decoded image, or null when the slot is unused.</summary>
	public TextureImage? Image => Record?.Image;

	/// <summary>Gets the uploaded GPU texture, or null when it is released or the slot is unused.</summary>
	public ITexture? Texture => Record?.Texture;

	/// <summary>Gets the number of live requests that reference this slot.</summary>
	public int ReferenceCount { get; internal set; }

	/// <summary>Gets the per-request state value the original texture stages stored.</summary>
	public int State { get; internal set; }

	/// <summary>Gets the cache clock value of the most recent acquire or release.</summary>
	public long LastUse { get; internal set; }

	/// <summary>Gets or sets the texture record backing this slot.</summary>
	internal TextureRecord? Record { get; set; }

	/// <summary>Gets a value indicating whether the slot holds a cached texture.</summary>
	internal bool IsUsed => GlobalIndex != 0;

	/// <summary>
	/// Returns the slot to its unused state.
	/// </summary>
	[Original(0x0082AC48)]
	internal void Reset()
	{
		GlobalIndex = 0;
		Record = null;
		ReferenceCount = 0;
		State = -1;
		LastUse = 0;
	}

	/// <summary>
	/// Assigns the slot to a cached record.
	/// </summary>
	/// <param name="globalIndex">The global texture index.</param>
	/// <param name="record">The retained decoded source.</param>
	internal void Assign(uint globalIndex, TextureRecord record)
	{
		GlobalIndex = globalIndex;
		Record = record;
		ReferenceCount = 0;
		State = -1;
		LastUse = 0;
	}
}
