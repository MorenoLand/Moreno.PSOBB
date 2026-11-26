namespace PsoBB.Models;

/// <summary>
/// One Ninja IFF chunk with its pointer table already applied.
/// </summary>
public sealed class NinjaChunk
{
	internal NinjaChunk(NinjaChunkType type, byte[] body, int offset)
	{
		Type = type;
		Body = body;
		Offset = offset;
	}

	/// <summary>Gets the chunk type.</summary>
	public NinjaChunkType Type { get; }

	/// <summary>Gets the chunk body, without the eight-byte chunk header.</summary>
	public ReadOnlyMemory<byte> Body { get; }

	/// <summary>Gets the byte offset of the chunk header in the source stream.</summary>
	public int Offset { get; }
}
