namespace PsoBB.Net.Patch;

/// <summary>
/// One local file's checksum answer for a patch-server request.
/// </summary>
/// <param name="RequestId">The request identifier from command 0x0C.</param>
/// <param name="Checksum">The CRC-32 of the file, or zero when the file is missing.</param>
/// <param name="Size">The file length, or zero when the file is missing.</param>
public readonly record struct PatchChecksum(uint RequestId, uint Checksum, uint Size);
