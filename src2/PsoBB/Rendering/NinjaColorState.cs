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

	/// <summary>
	/// Resets all Ninja color state globals to zero.
	/// </summary>
	public static void ResetGlobals()
	{
		Flags = 0;
		PackedColor = 0;
		AmbientAlpha = 0.0f;
		AmbientRed = 0.0f;
		AmbientGreen = 0.0f;
		AmbientBlue = 0.0f;
		RenderFlags = 0;
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
