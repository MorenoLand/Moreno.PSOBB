using System.Buffers.Binary;
using PsoBB.Compression;

namespace PsoBB.Data;

/// <summary>
/// Reads the locale text containers that ship as <c>.pr2</c> files.
/// </summary>
/// <remarks>
/// A file starts with the decompressed size and the key-stream seed, both little-endian 32-bit words. The remaining bytes are a PRC-encrypted PRS stream. The original reads the whole file, initializes the key stream, decrypts the payload in place and decompresses it into a buffer of the declared size.
/// </remarks>
public static class Pr2Container
{
	/// <summary>Size of the size and seed header.</summary>
	public const int HeaderSize = 8;

	/// <summary>
	/// Decrypts and decompresses a complete PR2 file.
	/// </summary>
	/// <param name="file">The complete file, including its header.</param>
	/// <returns>The decompressed payload.</returns>
	/// <exception cref="Pr2FormatException">The header, key stream or compressed payload is invalid.</exception>
	[Original(0x005B9934, "LoadAndDecryptAsset")]
	public static byte[] Decompress(ReadOnlySpan<byte> file)
	{
		if (file.Length < HeaderSize)
			throw new Pr2FormatException($"A PR2 file needs an {HeaderSize}-byte header but only {file.Length} bytes are present.");
		uint declared = BinaryPrimitives.ReadUInt32LittleEndian(file);
		uint seed = BinaryPrimitives.ReadUInt32LittleEndian(file[4..]);
		if (declared > int.MaxValue)
			throw new Pr2FormatException($"The PR2 header declares {declared} bytes, which exceeds the readable range.");
		byte[] encrypted = file[HeaderSize..].ToArray();
		PrcCipher cipher = new();
		cipher.Initialize(seed);
		cipher.Decrypt(encrypted);
		byte[] payload = new byte[declared];
		int written;
		try
		{
			written = PrsDecompressor.Decompress(encrypted, payload);
		}
		catch (PrsFormatException exception)
		{
			throw new Pr2FormatException("The PR2 payload is not a complete PRS stream.", exception);
		}
		catch (ArgumentException exception)
		{
			throw new Pr2FormatException("The PR2 payload expands beyond its declared size.", exception);
		}
		if (written != payload.Length)
			throw new Pr2FormatException($"The PR2 header declares {payload.Length} bytes but the stream produced {written}.");
		return payload;
	}
}
