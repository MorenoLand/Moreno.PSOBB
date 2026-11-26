using System.Buffers.Binary;

namespace PsoBB.Imaging;

/// <summary>
/// The external palette used by four- and eight-bit PowerVR textures.
/// </summary>
public sealed class PvpPalette
{
	private readonly ushort[] _colors;

	private PvpPalette(PvrPixelFormat pixelFormat, ushort[] colors)
	{
		PixelFormat = pixelFormat;
		_colors = colors;
	}

	/// <summary>Gets the magic that starts a palette file.</summary>
	public const uint Magic = 0x4C505650;

	/// <summary>Gets the pixel format of the palette entries.</summary>
	public PvrPixelFormat PixelFormat { get; }

	/// <summary>Gets the number of colors in the palette.</summary>
	public int Count => _colors.Length;

	/// <summary>Gets a read-only view of the raw sixteen-bit palette entries.</summary>
	public ReadOnlySpan<ushort> Colors => _colors;

	/// <summary>
	/// Parses a PVPL palette file.
	/// </summary>
	/// <param name="data">The complete palette file.</param>
	/// <returns>The palette entries and their pixel format.</returns>
	/// <exception cref="TextureFormatException">The magic, header or color table is invalid.</exception>
	public static PvpPalette Parse(ReadOnlySpan<byte> data)
	{
		if (data.Length < 0x10)
			throw new TextureFormatException("The palette header is truncated.", data.Length);
		if (BinaryPrimitives.ReadUInt32LittleEndian(data) != Magic)
			throw new TextureFormatException("The palette magic is not PVPL.", 0);
		PvrPixelFormat pixelFormat = (PvrPixelFormat)data[8];
		if (pixelFormat is not (PvrPixelFormat.Argb1555 or PvrPixelFormat.Rgb565 or PvrPixelFormat.Argb4444))
			throw new TextureFormatException("The palette pixel format is not supported.", 8);
		int count = BinaryPrimitives.ReadUInt16LittleEndian(data[0x0E..]);
		if (count == 0)
			throw new TextureFormatException("The palette is empty.", 0x0E);
		if (0x10L + count * 2L > data.Length)
			throw new TextureFormatException("The palette color table is truncated.", 0x10);
		ushort[] colors = new ushort[count];
		for (int index = 0; index < colors.Length; index++)
			colors[index] = BinaryPrimitives.ReadUInt16LittleEndian(data[(0x10 + index * 2)..]);
		return new PvpPalette(pixelFormat, colors);
	}

	/// <summary>
	/// Returns one palette color packed as little-endian BGRA.
	/// </summary>
	/// <param name="index">The palette index.</param>
	/// <returns>The packed color, or zero for an index outside the palette.</returns>
	public uint GetBgra(int index)
	{
		if ((uint)index >= (uint)_colors.Length)
			return 0;
		return TextureColor.FromPvr(_colors[index], PixelFormat);
	}
}
