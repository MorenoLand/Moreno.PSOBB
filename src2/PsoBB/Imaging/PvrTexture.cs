using System.Buffers.Binary;

namespace PsoBB.Imaging;

/// <summary>
/// One PVRT chunk from a PowerVR texture archive.
/// </summary>
public sealed class PvrTexture
{
	private readonly byte[] _data;

	private PvrTexture(PvrDataFormat dataFormat, PvrPixelFormat pixelFormat, int width, int height, byte[] data)
	{
		DataFormat = dataFormat;
		PixelFormat = pixelFormat;
		Width = width;
		Height = height;
		_data = data;
	}

	/// <summary>Gets the magic that starts a PVRT chunk.</summary>
	public const uint Magic = 0x54525650;

	/// <summary>Gets the pixel storage layout.</summary>
	public PvrDataFormat DataFormat { get; }

	/// <summary>Gets the pixel color layout.</summary>
	public PvrPixelFormat PixelFormat { get; }

	/// <summary>Gets the texture width in pixels.</summary>
	public int Width { get; }

	/// <summary>Gets the texture height in pixels.</summary>
	public int Height { get; }

	/// <summary>Gets the pixel bytes after the chunk header.</summary>
	public ReadOnlyMemory<byte> Data => _data;

	/// <summary>
	/// Parses one PVRT chunk.
	/// </summary>
	/// <param name="chunk">The complete chunk, including its magic and length.</param>
	/// <returns>The chunk metadata and pixel bytes.</returns>
	/// <exception cref="TextureFormatException">The magic, length or dimensions are invalid.</exception>
	public static PvrTexture Parse(ReadOnlySpan<byte> chunk)
	{
		if (chunk.Length < 0x10)
			throw new TextureFormatException("The PVRT header is truncated.", chunk.Length);
		if (BinaryPrimitives.ReadUInt32LittleEndian(chunk) != Magic)
			throw new TextureFormatException("The texture magic is not PVRT.", 0);
		long total = 8L + BinaryPrimitives.ReadUInt32LittleEndian(chunk[4..]);
		if (total > chunk.Length)
			throw new TextureFormatException("The PVRT chunk is truncated.", chunk.Length);
		PvrDataFormat dataFormat = (PvrDataFormat)chunk[8];
		PvrPixelFormat pixelFormat = (PvrPixelFormat)chunk[9];
		int width = BinaryPrimitives.ReadUInt16LittleEndian(chunk[0x0A..]);
		int height = BinaryPrimitives.ReadUInt16LittleEndian(chunk[0x0C..]);
		if (width == 0 || height == 0 || width > 4096 || height > 4096)
			throw new TextureFormatException("The PVRT dimensions are invalid.", 0x0A);
		return new PvrTexture(dataFormat, pixelFormat, width, height, chunk[0x10..(int)total].ToArray());
	}

	/// <summary>
	/// Decodes the texture into tightly packed BGRA pixels.
	/// </summary>
	/// <param name="palette">The external palette for four- and eight-bit formats.</param>
	/// <returns>The decoded image.</returns>
	/// <exception cref="TextureFormatException">The pixel data is truncated or the format is unsupported.</exception>
	public TextureImage Decode(PvpPalette? palette = null) => DataFormat switch
	{
		PvrDataFormat.Rectangle or PvrDataFormat.Stride => DecodeLinear16(),
		PvrDataFormat.SquareTwiddled or PvrDataFormat.SquareTwiddledMipmapsAlias => DecodeTwiddled16(0),
		PvrDataFormat.SquareTwiddledMipmaps => DecodeTwiddled16(TopLevelOffset(16)),
		PvrDataFormat.RectangleTwiddled => Width == Height
			? DecodeTwiddled16(0)
			: throw new TextureFormatException("A rectangular twiddled texture must be square.", 8),
		PvrDataFormat.VectorQuantized => DecodeVectorQuantized(false, false),
		PvrDataFormat.VectorQuantizedMipmaps => DecodeVectorQuantized(false, true),
		PvrDataFormat.SmallVectorQuantized => DecodeVectorQuantized(true, false),
		PvrDataFormat.SmallVectorQuantizedMipmaps => DecodeVectorQuantized(true, true),
		PvrDataFormat.Palette4 => DecodePaletted(4, false, palette),
		PvrDataFormat.Palette4Mipmaps => DecodePaletted(4, true, palette),
		PvrDataFormat.Palette8 => DecodePaletted(8, false, palette),
		PvrDataFormat.Palette8Mipmaps => DecodePaletted(8, true, palette),
		PvrDataFormat.Abgr or PvrDataFormat.AbgrMipmaps => throw new TextureFormatException("ABGR storage is not used by the client.", 8),
		_ => throw new TextureFormatException($"Data format 0x{(byte)DataFormat:X2} is unsupported.", 8),
	};

	/// <summary>
	/// Decodes sixteen-bit pixels stored in row order.
	/// </summary>
	/// <returns>The decoded image.</returns>
	private TextureImage DecodeLinear16()
	{
		int pixelCount = CheckedPixelCount();
		RequireData(pixelCount * 2, 0);
		byte[] bgra = new byte[pixelCount * 4];
		for (int index = 0; index < pixelCount; index++)
			WriteColor(bgra, index, BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(index * 2, 2)));
		return new TextureImage(Width, Height, bgra);
	}

	/// <summary>
	/// Decodes sixteen-bit pixels stored in twiddled order.
	/// </summary>
	/// <param name="offset">Offset of the largest mip level.</param>
	/// <returns>The decoded image.</returns>
	private TextureImage DecodeTwiddled16(int offset)
	{
		CheckSquare();
		int pixelCount = CheckedPixelCount();
		RequireData(pixelCount * 2, offset);
		byte[] bgra = new byte[pixelCount * 4];
		for (int y = 0; y < Height; y++)
		{
			for (int x = 0; x < Width; x++)
			{
				int source = offset + TwiddleIndex(x, y, Width) * 2;
				WriteColor(bgra, y * Width + x, BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(source, 2)));
			}
		}
		return new TextureImage(Width, Height, bgra);
	}

	/// <summary>
	/// Decodes palette indices into palette colors.
	/// </summary>
	/// <param name="bitsPerPixel">Four or eight bits per index.</param>
	/// <param name="mipmapped">Whether a mipmap chain precedes the largest level.</param>
	/// <param name="palette">The palette to resolve indices against.</param>
	/// <returns>The decoded image.</returns>
	private TextureImage DecodePaletted(int bitsPerPixel, bool mipmapped, PvpPalette? palette)
	{
		if (palette is null)
			throw new TextureFormatException("A palette is required for indexed pixels.", 8);
		CheckSquare();
		int pixelCount = CheckedPixelCount();
		int offset = mipmapped ? TopLevelOffset(bitsPerPixel) : 0;
		RequireData((pixelCount * bitsPerPixel + 7) / 8, offset);
		byte[] bgra = new byte[pixelCount * 4];
		for (int y = 0; y < Height; y++)
		{
			for (int x = 0; x < Width; x++)
			{
				int pixelIndex = TwiddleIndex(x, y, Width);
				int colorIndex = bitsPerPixel == 4
					? (pixelIndex & 1) == 0 ? _data[offset + pixelIndex / 2] >> 4 : _data[offset + pixelIndex / 2] & 0x0F
					: _data[offset + pixelIndex];
				BinaryPrimitives.WriteUInt32LittleEndian(bgra.AsSpan((y * Width + x) * 4, 4), palette.GetBgra(colorIndex));
			}
		}
		return new TextureImage(Width, Height, bgra);
	}

	/// <summary>
	/// Decodes a vector-quantized texture.
	/// </summary>
	/// <param name="small">Whether the codebook uses the small-texture sizes.</param>
	/// <param name="mipmapped">Whether a block-index mipmap chain precedes the largest level.</param>
	/// <returns>The decoded image.</returns>
	private TextureImage DecodeVectorQuantized(bool small, bool mipmapped)
	{
		CheckSquare();
		if (Width < 2 || (Width & 1) != 0)
			throw new TextureFormatException("A vector-quantized texture must be at least two pixels wide and even.", 0x0A);
		int codebookCount = small ? SmallCodebookCount(mipmapped) : 256;
		int codebookBytes = codebookCount * 8;
		int blockWidth = Width / 2;
		int blockHeight = Height / 2;
		int blockCount = blockWidth * blockHeight;
		int indexOffset = codebookBytes + (mipmapped ? BlockMipOffset() : 0);
		RequireData(blockCount, indexOffset);
		byte[] bgra = new byte[CheckedPixelCount() * 4];
		for (int y = 0; y < Height; y++)
		{
			for (int x = 0; x < Width; x++)
			{
				int blockIndex = TwiddleIndex(x / 2, y / 2, blockWidth);
				int codebookIndex = _data[indexOffset + blockIndex];
				if (codebookIndex >= codebookCount)
				{
					BinaryPrimitives.WriteUInt32LittleEndian(bgra.AsSpan((y * Width + x) * 4, 4), 0);
					continue;
				}
				int colorOffset = codebookIndex * 8 + ((y & 1) * 2 + (x & 1)) * 2;
				ushort color = BinaryPrimitives.ReadUInt16LittleEndian(_data.AsSpan(colorOffset, 2));
				WriteColor(bgra, y * Width + x, color);
			}
		}
		return new TextureImage(Width, Height, bgra);
	}

	/// <summary>
	/// Returns the codebook entry count used by a small vector-quantized texture.
	/// </summary>
	/// <param name="mipmapped">Whether the texture carries mipmaps.</param>
	/// <returns>The number of eight-byte codebook entries.</returns>
	private int SmallCodebookCount(bool mipmapped) => Width switch
	{
		<= 16 => 16,
		32 => mipmapped ? 64 : 32,
		_ => 128,
	};

	/// <summary>
	/// Returns the byte offset of the largest block-index level.
	/// </summary>
	/// <returns>The offset after the smaller block-index levels.</returns>
	private int BlockMipOffset()
	{
		int offset = 0;
		for (int size = 2; size < Width; size <<= 1)
			offset += (size / 2) * (size / 2);
		return offset;
	}

	/// <summary>
	/// Returns the byte offset of the largest mip level.
	/// </summary>
	/// <param name="bitsPerPixel">Bits used by one pixel or index.</param>
	/// <returns>The number of bytes used by the smaller levels.</returns>
	private int TopLevelOffset(int bitsPerPixel)
	{
		int offset = 0;
		for (int size = 1; size < Width; size <<= 1)
			offset += Math.Max(1, (size * size * bitsPerPixel + 7) / 8);
		return offset;
	}

	/// <summary>
	/// Writes one packed PowerVR color into a BGRA buffer.
	/// </summary>
	/// <param name="destination">The destination buffer.</param>
	/// <param name="pixelIndex">The destination pixel index.</param>
	/// <param name="color">The packed color word.</param>
	private void WriteColor(byte[] destination, int pixelIndex, ushort color) =>
		BinaryPrimitives.WriteUInt32LittleEndian(destination.AsSpan(pixelIndex * 4, 4), TextureColor.FromPvr(color, PixelFormat));

	/// <summary>
	/// Ensures the texture is a square with a power-of-two side.
	/// </summary>
	/// <exception cref="TextureFormatException">The dimensions cannot use twiddled order.</exception>
	private void CheckSquare()
	{
		if (Width != Height || (Width & (Width - 1)) != 0)
			throw new TextureFormatException("Twiddled and indexed textures must be square with a power-of-two side.", 0x0A);
	}

	/// <summary>
	/// Returns the pixel count with overflow checking.
	/// </summary>
	/// <returns>The number of pixels.</returns>
	private int CheckedPixelCount() => checked(Width * Height);

	/// <summary>
	/// Ensures the pixel bytes contain the requested range.
	/// </summary>
	/// <param name="required">Number of bytes needed.</param>
	/// <param name="offset">Offset where the range starts.</param>
	/// <exception cref="TextureFormatException">The pixel bytes are too short.</exception>
	private void RequireData(int required, int offset)
	{
		if (required < 0 || offset < 0 || offset > _data.Length || required > _data.Length - offset)
			throw new TextureFormatException("The PVRT pixel data is truncated.", 0x10 + offset);
	}

	/// <summary>
	/// Returns the source index of a pixel in twiddled order.
	/// </summary>
	/// <param name="x">Destination column.</param>
	/// <param name="y">Destination row.</param>
	/// <param name="width">Square width of the twiddled area.</param>
	/// <returns>The linear source index.</returns>
	private static int TwiddleIndex(int x, int y, int width)
	{
		int index = 0;
		int shift = 0;
		for (int bit = 1; bit < width; bit <<= 1)
		{
			if ((x & bit) != 0)
				index |= 1 << shift;
			shift++;
			if ((y & bit) != 0)
				index |= 1 << shift;
			shift++;
		}
		return index;
	}
}
