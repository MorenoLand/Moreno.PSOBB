using System.Buffers.Binary;

namespace PsoBB.Imaging;

/// <summary>
/// Decodes the DXT blocks used by the client's XVRT textures.
/// </summary>
internal static class DxtDecoder
{
	/// <summary>
	/// Decodes a complete DXT image into BGRA pixels.
	/// </summary>
	/// <param name="data">The compressed block data.</param>
	/// <param name="width">Texture width in pixels.</param>
	/// <param name="height">Texture height in pixels.</param>
	/// <param name="format">The block compression format.</param>
	/// <returns>The decoded image.</returns>
	/// <exception cref="TextureFormatException">The block data is truncated.</exception>
	internal static TextureImage Decode(ReadOnlySpan<byte> data, int width, int height, XvmTextureFormat format)
	{
		bool colorOnly = format == XvmTextureFormat.Dxt1;
		int blockBytes = colorOnly ? 8 : 16;
		int blocksWide = (width + 3) / 4;
		int blocksHigh = (height + 3) / 4;
		long required = (long)blocksWide * blocksHigh * blockBytes;
		if (required > data.Length)
			throw new TextureFormatException("The DXT block data is truncated.", data.Length);
		byte[] bgra = new byte[checked(width * height * 4)];
		Span<uint> colors = stackalloc uint[16];
		Span<byte> alpha = stackalloc byte[16];
		for (int blockY = 0; blockY < blocksHigh; blockY++)
		{
			for (int blockX = 0; blockX < blocksWide; blockX++)
			{
				int offset = (blockY * blocksWide + blockX) * blockBytes;
				switch (format)
				{
					case XvmTextureFormat.Dxt1:
						DecodeColorBlock(data.Slice(offset, 8), colors, true);
						break;
					case XvmTextureFormat.Dxt2:
					case XvmTextureFormat.Dxt3:
						DecodeAlpha4(data.Slice(offset, 8), alpha);
						DecodeColorBlock(data.Slice(offset + 8, 8), colors, false);
						break;
					case XvmTextureFormat.Dxt4:
					case XvmTextureFormat.Dxt5:
						DecodeAlpha8(data.Slice(offset, 8), alpha);
						DecodeColorBlock(data.Slice(offset + 8, 8), colors, false);
						break;
					default:
						throw new TextureFormatException($"Compression format {format} is unsupported.", offset);
				}
				WriteBlock(bgra, width, height, blockX, blockY, colors, colorOnly ? ReadOnlySpan<byte>.Empty : alpha);
			}
		}
		return new TextureImage(width, height, bgra);
	}

	/// <summary>
	/// Expands one eight-byte color block into sixteen colors.
	/// </summary>
	/// <param name="block">The color block.</param>
	/// <param name="colors">The destination colors.</param>
	/// <param name="allowTransparent">Whether the three-color DXT1 mode is allowed.</param>
	private static void DecodeColorBlock(ReadOnlySpan<byte> block, Span<uint> colors, bool allowTransparent)
	{
		ushort first = BinaryPrimitives.ReadUInt16LittleEndian(block);
		ushort second = BinaryPrimitives.ReadUInt16LittleEndian(block[2..]);
		uint color0 = FromRgb565(first);
		uint color1 = FromRgb565(second);
		uint color2;
		uint color3;
		if (!allowTransparent || first > second)
		{
			color2 = Blend(color0, color1, 2, 1, 3);
			color3 = Blend(color0, color1, 1, 2, 3);
		}
		else
		{
			color2 = Blend(color0, color1, 1, 1, 2);
			color3 = 0;
		}
		uint indices = BinaryPrimitives.ReadUInt32LittleEndian(block[4..]);
		for (int pixel = 0; pixel < 16; pixel++)
		{
			colors[pixel] = ((indices >> (pixel * 2)) & 3) switch
			{
				0 => color0,
				1 => color1,
				2 => color2,
				_ => color3,
			};
		}
	}

	/// <summary>
	/// Expands the four-bit alpha block used by DXT2 and DXT3.
	/// </summary>
	/// <param name="block">The eight alpha bytes.</param>
	/// <param name="alpha">The destination alpha values.</param>
	private static void DecodeAlpha4(ReadOnlySpan<byte> block, Span<byte> alpha)
	{
		for (int pixel = 0; pixel < 16; pixel++)
		{
			int value = block[pixel / 2];
			alpha[pixel] = (byte)(((pixel & 1) == 0 ? value & 0x0F : value >> 4) * 17);
		}
	}

	/// <summary>
	/// Expands the interpolated alpha block used by DXT4 and DXT5.
	/// </summary>
	/// <param name="block">The eight alpha bytes.</param>
	/// <param name="alpha">The destination alpha values.</param>
	private static void DecodeAlpha8(ReadOnlySpan<byte> block, Span<byte> alpha)
	{
		int first = block[0];
		int second = block[1];
		ulong indices = 0;
		for (int index = 0; index < 6; index++)
			indices |= (ulong)block[2 + index] << (index * 8);
		for (int pixel = 0; pixel < 16; pixel++)
		{
			int code = (int)((indices >> (pixel * 3)) & 7);
			alpha[pixel] = (byte)(code switch
			{
				0 => first,
				1 => second,
				_ => first > second
					? code switch
					{
						2 => (6 * first + second) / 7,
						3 => (5 * first + 2 * second) / 7,
						4 => (4 * first + 3 * second) / 7,
						5 => (3 * first + 4 * second) / 7,
						6 => (2 * first + 5 * second) / 7,
						_ => (first + 6 * second) / 7,
					}
					: code switch
					{
						2 => (4 * first + second) / 5,
						3 => (3 * first + 2 * second) / 5,
						4 => (2 * first + 3 * second) / 5,
						5 => (first + 4 * second) / 5,
						6 => 0,
						_ => 255,
					},
			});
		}
	}

	/// <summary>
	/// Writes one decoded block into the image, clipping its right and bottom edges.
	/// </summary>
	/// <param name="destination">The BGRA image.</param>
	/// <param name="width">Image width.</param>
	/// <param name="height">Image height.</param>
	/// <param name="blockX">Block column.</param>
	/// <param name="blockY">Block row.</param>
	/// <param name="colors">The sixteen decoded colors.</param>
	/// <param name="alpha">The sixteen alpha values, or an empty span for DXT1.</param>
	private static void WriteBlock(byte[] destination, int width, int height, int blockX, int blockY, Span<uint> colors, ReadOnlySpan<byte> alpha)
	{
		for (int y = 0; y < 4; y++)
		{
			int destinationY = blockY * 4 + y;
			if (destinationY >= height)
				continue;
			for (int x = 0; x < 4; x++)
			{
				int destinationX = blockX * 4 + x;
				if (destinationX >= width)
					continue;
				int pixel = y * 4 + x;
				uint color = colors[pixel];
				if (!alpha.IsEmpty)
					color = (color & 0x00FFFFFF) | (uint)(alpha[pixel] << 24);
				BinaryPrimitives.WriteUInt32LittleEndian(destination.AsSpan((destinationY * width + destinationX) * 4, 4), color);
			}
		}
	}

	/// <summary>
	/// Converts an RGB565 word into BGRA.
	/// </summary>
	/// <param name="value">The packed color.</param>
	/// <returns>The opaque BGRA color.</returns>
	private static uint FromRgb565(ushort value) => TextureColor.Pack(
		TextureColor.Expand5((value >> 11) & 0x1F),
		TextureColor.Expand6((value >> 5) & 0x3F),
		TextureColor.Expand5(value & 0x1F),
		0xFF);

	/// <summary>
	/// Interpolates two BGRA colors with the given weights.
	/// </summary>
	/// <param name="first">The first color.</param>
	/// <param name="second">The second color.</param>
	/// <param name="firstWeight">Weight of the first color.</param>
	/// <param name="secondWeight">Weight of the second color.</param>
	/// <param name="divisor">Sum of the weights.</param>
	/// <returns>The interpolated BGRA color.</returns>
	private static uint Blend(uint first, uint second, int firstWeight, int secondWeight, int divisor) => TextureColor.Pack(
		(byte)((((first >> 16) & 0xFF) * firstWeight + ((second >> 16) & 0xFF) * secondWeight) / divisor),
		(byte)((((first >> 8) & 0xFF) * firstWeight + ((second >> 8) & 0xFF) * secondWeight) / divisor),
		(byte)(((first & 0xFF) * firstWeight + (second & 0xFF) * secondWeight) / divisor),
		(byte)((((first >> 24) & 0xFF) * firstWeight + ((second >> 24) & 0xFF) * secondWeight) / divisor));
}
