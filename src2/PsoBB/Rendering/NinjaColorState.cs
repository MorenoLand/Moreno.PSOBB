using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Ninja vertex/ambient color override globals and alpha render flag resolution helpers.
/// </summary>
public static class NinjaColorState
{
	private const float ColorScale = 255.0f;
	private const uint AlphaRenderFlag = 0x400u;

	/// <summary>Gets or sets the Ninja color modulation mode flags at <c>0x00AE7784</c>.</summary>
	[OriginalGlobal(0x00AE7784)]
	public static uint Flags { get; set; }

	/// <summary>Gets or sets the packed ARGB diffuse color used by flat-lit chunk strips at <c>0x00AE7780</c>.</summary>
	[OriginalGlobal(0x00AE7780)]
	public static uint DiffuseColor { get; set; }

	/// <summary>Gets or sets the packed ARGB vertex/material color written to the active render state at <c>0x00AE7788</c>.</summary>
	[OriginalGlobal(0x00AE7788)]
	public static uint PackedColor { get; set; }

	/// <summary>Gets or sets the ambient alpha component in [0, 1] at <c>0x00AF0370</c>.</summary>
	[OriginalGlobal(0x00AF0370)]
	public static float AmbientAlpha { get; set; }

	/// <summary>Gets or sets the ambient red component in [0, 1] at <c>0x00AF0374</c>.</summary>
	[OriginalGlobal(0x00AF0374)]
	public static float AmbientRed { get; set; }

	/// <summary>Gets or sets the ambient green component in [0, 1] at <c>0x00AF0378</c>.</summary>
	[OriginalGlobal(0x00AF0378)]
	public static float AmbientGreen { get; set; }

	/// <summary>Gets or sets the ambient blue component in [0, 1] at <c>0x00AF037C</c>.</summary>
	[OriginalGlobal(0x00AF037C)]
	public static float AmbientBlue { get; set; }

	/// <summary>Gets or sets the Ninja render state bitmask at <c>0x00ACD538</c>.</summary>
	[OriginalGlobal(0x00ACD538)]
	public static uint RenderFlags { get; set; }

	/// <summary>Gets or sets the active stream state flags checked before clearing stream caches at <c>0x00ACC18C</c>.</summary>
	[OriginalGlobal(0x00ACC18C)]
	public static uint StreamStateFlags { get; set; }

	/// <summary>Gets the cached vertex-stream buffer identifiers at <c>0x00ACD540</c>.</summary>
	[OriginalGlobal(0x00ACD540)]
	public static int[] CachedStreamBindings { get; } = [-1, -1, -1, -1];

	/// <summary>Gets the cached vertex-stream strides at <c>0x00ACD550</c>.</summary>
	[OriginalGlobal(0x00ACD550)]
	public static int[] CachedStreamStrides { get; } = new int[4];

	/// <summary>
	/// Resets all Ninja color state globals to zero.
	/// </summary>
	public static void ResetGlobals()
	{
		Flags = 0;
		DiffuseColor = 0;
		PackedColor = 0;
		AmbientAlpha = 0.0f;
		AmbientRed = 0.0f;
		AmbientGreen = 0.0f;
		AmbientBlue = 0.0f;
		RenderFlags = 0;
		StreamStateFlags = 0;
		Array.Fill(CachedStreamBindings, -1);
		Array.Clear(CachedStreamStrides);
	}

	/// <summary>
	/// Clears cached Direct3D stream binding and stride state for <paramref name="slot"/> when bound.
	/// </summary>
	/// <param name="slot">Zero-based stream slot index (0 through 3).</param>
	[Original(0x00839A28)]
	public static void ClearStreamBinding(int slot)
	{
		if (CachedStreamBindings[slot] == -1)
			return;
		CachedStreamBindings[slot] = -1;
		CachedStreamStrides[slot] = 0;
	}

	/// <summary>
	/// Returns <see langword="true"/> if any vertex in a 16-byte stride (<c>Pos3 + Color</c>) buffer has alpha not equal to <c>0xFF</c>.
	/// </summary>
	[Original(0x008359D8)]
	public static bool HasTranslucentAlphaStride16(ReadOnlySpan<uint> words, int count) =>
		HasNonOpaqueAlpha(words, count, strideWords: 4, colorOffset: 3);

	/// <summary>
	/// Returns <see langword="true"/> if any vertex in a 24-byte stride (<c>Pos3 + Color + UV</c>) buffer has alpha not equal to <c>0xFF</c>.
	/// </summary>
	[Original(0x00835A70)]
	public static bool HasTranslucentAlphaStride24(ReadOnlySpan<uint> words, int count) =>
		HasNonOpaqueAlpha(words, count, strideWords: 6, colorOffset: 3);

	/// <summary>
	/// Returns <see langword="true"/> if any vertex in a 28-byte stride (<c>Pos3 + Norm3 + Color</c>) buffer has alpha not equal to <c>0xFF</c>.
	/// </summary>
	[Original(0x00835B08)]
	public static bool HasTranslucentAlphaStride28(ReadOnlySpan<uint> words, int count) =>
		HasNonOpaqueAlpha(words, count, strideWords: 7, colorOffset: 6);

	/// <summary>
	/// Returns <see langword="true"/> if any vertex in a 36-byte stride (<c>Pos3 + Norm3 + Color + UV</c>) buffer has alpha not equal to <c>0xFF</c>.
	/// </summary>
	[Original(0x00835BA0)]
	public static bool HasTranslucentAlphaStride36(ReadOnlySpan<uint> words, int count) =>
		HasNonOpaqueAlpha(words, count, strideWords: 9, colorOffset: 6);

	private static bool HasNonOpaqueAlpha(ReadOnlySpan<uint> words, int count, int strideWords, int colorOffset)
	{
		for (int i = 0; i < count; i++)
		{
			if ((words[i * strideWords + colorOffset] & 0xFF000000u) != 0xFF000000u)
				return true;
		}

		return false;
	}

	/// <summary>
	/// Forces bit 0 on <see cref="Flags"/> and packs <see cref="AmbientAlpha"/> through <see cref="AmbientBlue"/> into <see cref="PackedColor"/>.
	/// </summary>
	[Original(0x0084A544)]
	public static void ApplyAmbientMaterialColor()
	{
		Flags |= 1u;
		uint alpha = unchecked((uint)FloatingPointMath.TruncateToInt64((double)AmbientAlpha * ColorScale));
		byte red = unchecked((byte)FloatingPointMath.TruncateToInt64((double)AmbientRed * ColorScale));
		byte green = unchecked((byte)FloatingPointMath.TruncateToInt64((double)AmbientGreen * ColorScale));
		byte blue = unchecked((byte)FloatingPointMath.TruncateToInt64((double)AmbientBlue * ColorScale));
		PackedColor = (alpha << 24) | ((uint)red << 16) | ((uint)green << 8) | blue;
	}

	/// <summary>
	/// Modulates <paramref name="color"/> by the ambient offsets when ambient override is disabled and additive color mode is active, then updates the translucent bit on <see cref="RenderFlags"/>.
	/// </summary>
	/// <param name="color">The source packed ARGB color.</param>
	/// <returns>The updated render flags after applying the source alpha bit.</returns>
	[Original(0x0084A338)]
	public static uint ResolveVertexColor(uint color)
	{
		if ((Flags & 1u) == 0)
		{
			if ((Flags & 2u) != 0)
			{
				uint alpha = unchecked((uint)FloatingPointMath.TruncateToInt64(ClampChannel((color >> 24) / ColorScale + AmbientAlpha) * ColorScale));
				byte red = unchecked((byte)FloatingPointMath.TruncateToInt64(ClampChannel(((color >> 16) & 0xFF) / ColorScale + AmbientRed) * ColorScale));
				byte green = unchecked((byte)FloatingPointMath.TruncateToInt64(ClampChannel(((color >> 8) & 0xFF) / ColorScale + AmbientGreen) * ColorScale));
				byte blue = unchecked((byte)FloatingPointMath.TruncateToInt64(ClampChannel((color & 0xFF) / ColorScale + AmbientBlue) * ColorScale));
				PackedColor = (alpha << 24) | ((uint)red << 16) | ((uint)green << 8) | blue;
			}
			else
			{
				PackedColor = color;
			}
		}

		RenderFlags = (color & 0xFF000000u) == 0xFF000000u
			? RenderFlags & ~AlphaRenderFlag
			: RenderFlags | AlphaRenderFlag;
		return RenderFlags;
	}

	private static double ClampChannel(double value)
	{
		if (value < 0.0f)
			return 0.0f;
		return value > 1.0f ? 1.0f : value;
	}
}
