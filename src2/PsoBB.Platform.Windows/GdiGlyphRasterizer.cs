using System.ComponentModel;
using System.Runtime.InteropServices;
using PsoBB.Text;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Rasterises one character at a time through the client's fourteen-pixel GDI device context and DIB.
/// </summary>
/// <remarks>
/// The original creates one compatible DC, one 14-by-14 32-bit DIB and five fonts, draws each character with an opaque background, copies the bottom-up DIB into a top-down buffer, and quantises the 24-bit pixel to the four atlas alpha levels.
/// </remarks>
public sealed class GdiGlyphRasterizer : IDisposable
{
	/// <summary>The glyph width and height in pixels.</summary>
	public const int GlyphSize = BitmapFont.GlyphHeight;

	/// <summary>The number of bytes in one 14-by-14 BGRA DIB.</summary>
	public const int GlyphByteCount = GlyphSize * GlyphSize * 4;

	private readonly byte[] _pixels = new byte[GlyphByteCount];
	private readonly nint[] _fonts = new nint[5];
	private readonly IReadOnlyList<FontDescriptor> _faces;
	private readonly int _wideAlphabetType;
	private nint _deviceContext;
	private nint _bitmap;
	private nint _previousBitmap;
	private nint _bits;
	private bool _disposed;

	/// <summary>
	/// Creates the device context, the glyph bitmap and the five fonts.
	/// </summary>
	/// <param name="faces">The five descriptors in image order.</param>
	/// <param name="wideAlphabetType">The alphabet type used for code units at or above 0x100.</param>
	/// <exception cref="ArgumentNullException"><paramref name="faces"/> is null.</exception>
	/// <exception cref="ArgumentException">The table does not contain five faces.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The alphabet type is outside the five-face table.</exception>
	/// <exception cref="Win32Exception">A GDI object could not be created.</exception>
	[Original(0x00844428, "FUN_00844428")]
	public GdiGlyphRasterizer(IReadOnlyList<FontDescriptor> faces, int wideAlphabetType = 0)
	{
		ArgumentNullException.ThrowIfNull(faces);
		if (faces.Count != 5)
			throw new ArgumentException("The client has exactly five font faces.", nameof(faces));
		if (wideAlphabetType is < 0 or > 4)
			throw new ArgumentOutOfRangeException(nameof(wideAlphabetType));
		_faces = [.. faces];
		_wideAlphabetType = wideAlphabetType;
		_deviceContext = GdiNative.CreateCompatibleDC(0);
		if (_deviceContext == 0)
			throw new Win32Exception(Marshal.GetLastPInvokeError(), "A compatible device context could not be created.");
		try
		{
			GdiBitmapInfo info = new()
			{
				Header = new GdiBitmapInfoHeader
				{
					Size = (uint)Marshal.SizeOf<GdiBitmapInfoHeader>(),
					Width = GlyphSize,
					Height = GlyphSize,
					Planes = 1,
					BitCount = 32,
					Compression = GdiNative.BiRgb,
				},
			};
			_bitmap = GdiNative.CreateDIBSection(_deviceContext, ref info, 0, out _bits, 0, 0);
			if (_bitmap == 0 || _bits == 0)
				throw new Win32Exception(Marshal.GetLastPInvokeError(), "The glyph bitmap could not be created.");
			_previousBitmap = GdiNative.SelectObject(_deviceContext, _bitmap);
			if (_previousBitmap == 0)
				throw new Win32Exception(Marshal.GetLastPInvokeError(), "The glyph bitmap could not be selected.");
			GdiNative.SetMapMode(_deviceContext, GdiNative.MmText);
			GdiNative.SetTextColor(_deviceContext, 0x00FFFFFF);
			GdiNative.SetBkColor(_deviceContext, 0);
			GdiNative.SetTextAlign(_deviceContext, 0);
			for (int index = 0; index < _fonts.Length; index++)
			{
				FontDescriptor face = _faces[index];
				_fonts[index] = GdiNative.CreateFontA(
					BitmapFont.GlyphHeight,
					0,
					0,
					0,
					face.Weight,
					0,
					0,
					0,
					(uint)face.Charset,
					(uint)face.OutputPrecision,
					(uint)face.ClipPrecision,
					(uint)face.Quality,
					(uint)face.PitchAndFamily,
					face.FaceName);
				if (_fonts[index] == 0)
					throw new Win32Exception(Marshal.GetLastPInvokeError(), $"The font face '{face.FaceName}' could not be created.");
			}
		}
		catch
		{
			Dispose();
			throw;
		}
	}

	/// <summary>Gets the five descriptors in image order.</summary>
	public IReadOnlyList<FontDescriptor> Faces => _faces;

	/// <summary>Gets the alphabet type used for code units at or above 0x100.</summary>
	public int WideAlphabetType => _wideAlphabetType;

	/// <summary>
	/// Returns the face index the original selects for a code unit.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>Zero for single-byte characters and the configured alphabet type otherwise.</returns>
	[Original(0x00841A44, "get_locale_alphabet_type")]
	public int GetFaceIndex(char value) => FontDescriptor.GetValidFaceIndex(value < 0x100 ? 0 : _wideAlphabetType);

	/// <summary>
	/// Returns the GDI character extent before the atlas cap.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The measured width, or fourteen pixels for control and wide characters.</returns>
	[Original(0x008441E0, "unknown_get_text_extent_point_32")]
	public int MeasureCharacter(char value)
	{
		ThrowIfDisposed();
		if (value < 0x20)
			return GlyphSize;
		int extent = GlyphSize;
		if (value < 0x100)
		{
			SelectFace(0);
			byte ansi = (byte)value;
			if (GdiNative.GetTextExtentPoint32A(_deviceContext, ref ansi, 1, out GdiSize size))
				extent = size.Cx;
		}
		return extent;
	}

	/// <summary>
	/// Returns the advance stored in a glyph entry, capped at fourteen pixels.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The stored advance in pixels.</returns>
	public int GetAdvance(char value) => Math.Min(GlyphSize, MeasureCharacter(value));

	/// <summary>
	/// Rasterises one character and quantises it to the four atlas alpha levels.
	/// </summary>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The extent and 196 coverage values, top row first.</returns>
	[Original(0x00844138, "write_one_char_to_DIB")]
	public GdiRasterizedGlyph Rasterize(char value)
	{
		ThrowIfDisposed();
		char rasterValue = MapRasterCode(value);
		int extent = MeasureCharacter(rasterValue);
		SelectFace(GetFaceIndex(rasterValue));
		Array.Clear(_pixels);
		Marshal.Copy(_pixels, 0, _bits, GlyphByteCount);
		string text = rasterValue.ToString();
		GdiNative.ExtTextOutW(_deviceContext, 0, 0, GdiNative.EtOpaque, 0, text, 1, 0);
		Marshal.Copy(_bits, _pixels, 0, GlyphByteCount);
		byte[] coverage = new byte[GlyphSize * GlyphSize];
		for (int row = 0; row < GlyphSize; row++)
		{
			int source = (GlyphSize - 1 - row) * GlyphSize * 4;
			for (int column = 0; column < GlyphSize; column++)
			{
				int offset = source + column * 4;
				uint bgr = (uint)(_pixels[offset] | _pixels[offset + 1] << 8 | _pixels[offset + 2] << 16);
				coverage[row * GlyphSize + column] = Threshold(bgr);
			}
		}
		return new GdiRasterizedGlyph(extent, coverage);
	}

	/// <summary>
	/// Rasterises one character and adds it to the portable atlas builder.
	/// </summary>
	/// <param name="builder">The atlas builder.</param>
	/// <param name="value">The UTF-16 code unit.</param>
	/// <returns>The glyph entry that was written.</returns>
	[Original(0x007ABFB5, "unknown_initialize_wchar_color_cache")]
	public FontGlyph AddGlyph(BitmapFontBuilder builder, char value)
	{
		ArgumentNullException.ThrowIfNull(builder);
		GdiRasterizedGlyph glyph = Rasterize(value);
		return builder.AddGlyph(value, glyph.Coverage, Math.Min(BitmapFont.GlyphHeight, glyph.Extent));
	}

	/// <summary>
	/// Quantises one 24-bit BGR pixel to the original four alpha levels.
	/// </summary>
	/// <param name="bgr">The pixel with the alpha byte removed.</param>
	/// <returns>Zero, 0x55, 0xAA or 0xFF.</returns>
	internal static byte Threshold(uint bgr) => bgr == 0 ? (byte)0 : bgr < 0x555556 ? (byte)0x55 : bgr < 0xAAAAAB ? (byte)0xAA : (byte)0xFF;

	/// <summary>
	/// Maps a code unit above 0xDFFF to the value the original glyph cache draws.
	/// </summary>
	/// <param name="value">The stored UTF-16 code unit.</param>
	/// <returns>The code unit used for measurement and rasterisation.</returns>
	internal static char MapRasterCode(char value) => value > 0xDFFF ? (char)(value - 0xDF20) : value;

	/// <summary>Releases the five fonts, the glyph bitmap and the device context.</summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		if (_deviceContext != 0 && _previousBitmap != 0)
			GdiNative.SelectObject(_deviceContext, _previousBitmap);
		if (_bitmap != 0)
			GdiNative.DeleteObject(_bitmap);
		foreach (nint font in _fonts)
		{
			if (font != 0)
				GdiNative.DeleteObject(font);
		}
		if (_deviceContext != 0)
			GdiNative.DeleteDC(_deviceContext);
	}

	private void SelectFace(int index)
	{
		nint font = _fonts[FontDescriptor.GetValidFaceIndex(index)];
		if (GdiNative.SelectObject(_deviceContext, font) == 0)
			throw new Win32Exception(Marshal.GetLastPInvokeError(), "The font face could not be selected.");
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}

[StructLayout(LayoutKind.Sequential)]
internal struct GdiBitmapInfoHeader
{
	internal uint Size;
	internal int Width;
	internal int Height;
	internal ushort Planes;
	internal ushort BitCount;
	internal uint Compression;
	internal uint SizeImage;
	internal int XPelsPerMeter;
	internal int YPelsPerMeter;
	internal uint ClrUsed;
	internal uint ClrImportant;
}

[StructLayout(LayoutKind.Sequential)]
internal struct GdiBitmapInfo
{
	internal GdiBitmapInfoHeader Header;
	internal uint Color;
}

[StructLayout(LayoutKind.Sequential)]
internal struct GdiSize
{
	internal int Cx;
	internal int Cy;
}

internal static class GdiNative
{
	internal const uint BiRgb = 0;
	internal const int MmText = 1;
	internal const uint EtOpaque = 2;

	[DllImport("gdi32.dll", EntryPoint = "CreateCompatibleDC")]
	internal static extern nint CreateCompatibleDC(nint deviceContext);

	[DllImport("gdi32.dll", EntryPoint = "CreateDIBSection")]
	internal static extern nint CreateDIBSection(nint deviceContext, ref GdiBitmapInfo info, uint usage, out nint bits, nint section, uint offset);

	[DllImport("gdi32.dll", EntryPoint = "CreateFontA", CharSet = CharSet.Ansi)]
	internal static extern nint CreateFontA(int height, int width, int escapement, int orientation, int weight, uint italic, uint underline, uint strikeOut, uint charSet, uint outputPrecision, uint clipPrecision, uint quality, uint pitchAndFamily, string faceName);

	[DllImport("gdi32.dll", EntryPoint = "SelectObject")]
	internal static extern nint SelectObject(nint deviceContext, nint objectHandle);

	[DllImport("gdi32.dll", EntryPoint = "DeleteObject")]
	internal static extern bool DeleteObject(nint objectHandle);

	[DllImport("gdi32.dll", EntryPoint = "DeleteDC")]
	internal static extern bool DeleteDC(nint deviceContext);

	[DllImport("gdi32.dll", EntryPoint = "SetMapMode")]
	internal static extern int SetMapMode(nint deviceContext, int mode);

	[DllImport("gdi32.dll", EntryPoint = "SetTextColor")]
	internal static extern uint SetTextColor(nint deviceContext, uint color);

	[DllImport("gdi32.dll", EntryPoint = "SetBkColor")]
	internal static extern uint SetBkColor(nint deviceContext, uint color);

	[DllImport("gdi32.dll", EntryPoint = "SetTextAlign")]
	internal static extern uint SetTextAlign(nint deviceContext, uint align);

	[DllImport("gdi32.dll", EntryPoint = "ExtTextOutW", CharSet = CharSet.Unicode)]
	internal static extern bool ExtTextOutW(nint deviceContext, int x, int y, uint options, nint rectangle, string text, uint count, nint spacing);

	[DllImport("gdi32.dll", EntryPoint = "GetTextExtentPoint32A")]
	internal static extern bool GetTextExtentPoint32A(nint deviceContext, ref byte text, int count, out GdiSize size);
}
