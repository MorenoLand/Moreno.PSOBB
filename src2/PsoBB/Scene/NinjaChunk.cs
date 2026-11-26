namespace PsoBB.Scene;

/// <summary>
/// One Ninja IFF chunk from a BML entry, with its type and copied body.
/// </summary>
/// <param name="Type">The chunk type.</param>
/// <param name="Data">The chunk body after its eight-byte header.</param>
public readonly record struct NinjaChunk(NinjaChunkType Type, ReadOnlyMemory<byte> Data);
