using System.Buffers.Binary;

namespace PsoBB.Imaging;

/// <summary>
/// Reads the XVRT texture list stored in a PAE archive.
/// </summary>
internal static class XvmTextureReader
{
	/// <summary>Gets the magic that starts an XVM archive.</summary>
	internal const uint Magic = 0x484D5658;

	/// <summary>Gets the magic that starts an XVRT chunk.</summary>
	internal const uint TextureMagic = 0x54525658;

	/// <summary>
	/// Parses the texture list and decodes every compressed texture.
	/// </summary>
	/// <param name="data">The XVM archive.</param>
	/// <returns>The textures in archive order.</returns>
	/// <exception cref="TextureFormatException">The archive or one of its textures is invalid.</exception>
	[Original(0x0082A7D8)]
	internal static List<XvmTexture> Read(ReadOnlySpan<byte> data)
	{
		if (data.Length < 0x0C)
			throw new TextureFormatException("The XVM header is truncated.", data.Length);
		if (BinaryPrimitives.ReadUInt32LittleEndian(data) != Magic)
			throw new TextureFormatException("The texture archive magic is not XVMH.", 0);
		int headerSize = BinaryPrimitives.ReadInt32LittleEndian(data[4..]);
		if (headerSize < 0)
			throw new TextureFormatException("The XVM header size is invalid.", 4);
		long offsetLong = 8L + headerSize;
		if (offsetLong > data.Length)
			throw new TextureFormatException("The XVM header extends past the archive.", 4);
		int count = BinaryPrimitives.ReadInt32LittleEndian(data[8..]);
		if (count < 0)
			throw new TextureFormatException("The XVM texture count is invalid.", 8);
		int offset = (int)offsetLong;
		if (count > (data.Length - offset) / 0x40)
			throw new TextureFormatException("The XVM texture count exceeds the archive.", 8);
		List<XvmTexture> textures = new(count);
		for (int index = 0; index < count; index++)
		{
			if (offset > data.Length - 0x40)
				throw new TextureFormatException("The XVRT header is truncated.", offset);
			if (BinaryPrimitives.ReadUInt32LittleEndian(data[offset..]) != TextureMagic)
				throw new TextureFormatException("The texture magic is not XVRT.", offset);
			long chunkEnd = offset + 8L + BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 4)..]);
			if (chunkEnd > data.Length)
				throw new TextureFormatException("The XVRT chunk is truncated.", offset);
			XvmTextureFormat format = ReadFormat(BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 0x0C)..]), offset + 0x0C);
			uint globalIndex = BinaryPrimitives.ReadUInt32LittleEndian(data[(offset + 0x10)..]);
			int width = BinaryPrimitives.ReadUInt16LittleEndian(data[(offset + 0x14)..]);
			int height = BinaryPrimitives.ReadUInt16LittleEndian(data[(offset + 0x16)..]);
			if (width == 0 || height == 0)
				throw new TextureFormatException("The XVRT dimensions are invalid.", offset + 0x14);
			int dataLength = BinaryPrimitives.ReadInt32LittleEndian(data[(offset + 0x18)..]);
			if (dataLength <= 0 || dataLength > chunkEnd - offset - 0x40)
				throw new TextureFormatException("The XVRT pixel data length is invalid.", offset + 0x18);
			TextureImage image = DxtDecoder.Decode(
				data.Slice(offset + 0x40, dataLength),
				width,
				height,
				format);
			textures.Add(new XvmTexture(globalIndex, format, width, height, offset, image));
			offset = (int)chunkEnd;
		}
		return textures;
	}

	/// <summary>
	/// Maps a format index to its decoder.
	/// </summary>
	/// <param name="code">The format index.</param>
	/// <param name="offset">The index's offset for the error message.</param>
	/// <returns>The pixel format.</returns>
	/// <exception cref="TextureFormatException">The index is not a supported pixel format.</exception>
	private static XvmTextureFormat ReadFormat(uint code, int offset) => code switch
	{
		1 or 11 => XvmTextureFormat.Bgra8888,
		2 or 12 => XvmTextureFormat.Bgrx8888,
		3 or 13 => XvmTextureFormat.A1R5G5B5,
		4 or 14 => XvmTextureFormat.A4R4G4B4,
		6 => XvmTextureFormat.Dxt1,
		7 => XvmTextureFormat.Dxt2,
		8 => XvmTextureFormat.Dxt3,
		9 => XvmTextureFormat.Dxt4,
		10 => XvmTextureFormat.Dxt5,
		_ => throw new TextureFormatException($"Texture format 0x{code:X8} is unsupported.", offset),
	};
}
