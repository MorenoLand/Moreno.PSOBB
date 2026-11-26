namespace PsoBB.Imaging;

/// <summary>
/// Converts the client's packed color words into little-endian BGRA values.
/// </summary>
internal static class TextureColor
{
	/// <summary>
	/// Converts a packed PowerVR color word.
	/// </summary>
	/// <param name="value">The sixteen-bit color word.</param>
	/// <param name="pixelFormat">The packing of the word.</param>
	/// <returns>The color packed as little-endian BGRA.</returns>
	internal static uint FromPvr(ushort value, PvrPixelFormat pixelFormat) => pixelFormat switch
	{
		PvrPixelFormat.Argb1555 => Pack(
			Expand5((value >> 10) & 0x1F),
			Expand5((value >> 5) & 0x1F),
			Expand5(value & 0x1F),
			(value & 0x8000) != 0 ? (byte)0xFF : (byte)0),
		PvrPixelFormat.Rgb565 => Pack(
			Expand5((value >> 11) & 0x1F),
			Expand6((value >> 5) & 0x3F),
			Expand5(value & 0x1F),
			0xFF),
		PvrPixelFormat.Argb4444 => Pack(
			(byte)(((value >> 8) & 0xF) * 17),
			(byte)(((value >> 4) & 0xF) * 17),
			(byte)((value & 0xF) * 17),
			(byte)(((value >> 12) & 0xF) * 17)),
		PvrPixelFormat.Rgb555 => Pack(
			Expand5((value >> 10) & 0x1F),
			Expand5((value >> 5) & 0x1F),
			Expand5(value & 0x1F),
			0xFF),
		_ => throw new TextureFormatException($"Pixel format {pixelFormat} is not a color format.", 0),
	};

	/// <summary>
	/// Packs red, green, blue and alpha into a little-endian BGRA word.
	/// </summary>
	/// <param name="red">Red channel.</param>
	/// <param name="green">Green channel.</param>
	/// <param name="blue">Blue channel.</param>
	/// <param name="alpha">Alpha channel.</param>
	/// <returns>The packed BGRA word.</returns>
	internal static uint Pack(byte red, byte green, byte blue, byte alpha) =>
		(uint)(blue | green << 8 | red << 16 | alpha << 24);

	/// <summary>
	/// Expands a five-bit channel to eight bits by repeating its high bits.
	/// </summary>
	/// <param name="value">The five-bit channel.</param>
	/// <returns>The expanded channel.</returns>
	internal static byte Expand5(int value) => (byte)(value << 3 | value >> 2);

	/// <summary>
	/// Expands a six-bit channel to eight bits by repeating its high bits.
	/// </summary>
	/// <param name="value">The six-bit channel.</param>
	/// <returns>The expanded channel.</returns>
	internal static byte Expand6(int value) => (byte)(value << 2 | value >> 4);

	/// <summary>
	/// Expands an RGB565 word into three eight-bit channels.
	/// </summary>
	/// <param name="value">The packed word.</param>
	/// <returns>The red, green and blue channels.</returns>
	internal static (byte Red, byte Green, byte Blue) FromRgb565(ushort value) =>
		(Expand5((value >> 11) & 0x1F), Expand6((value >> 5) & 0x3F), Expand5(value & 0x1F));
}
