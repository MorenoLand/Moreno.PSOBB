namespace PsoBB.Rendering;

/// <summary>
/// Expands Ninja plist triangle-strip chunks (<c>0x40</c>/<c>0x41</c>) from <see cref="NinjaVertexTransformer.ScratchBuffer"/> into the shared primitive draw buffer (<c>0x00ACD52C</c>).
/// </summary>
public static class NinjaStripExpander
{
	private const float UvScale8 = 0.003921568859368563f;
	private const float UvScale10 = 0.0009765625f;

	/// <summary>Gets or sets the shared primitive expansion scratch words backing <c>0x00ACD52C</c>.</summary>
	[OriginalGlobal(0x00ACD52C)]
	public static uint[] DrawBuffer { get; set; } = new uint[4096];

	/// <summary>Resets the shared primitive expansion scratch buffer to zeroes.</summary>
	public static void ResetGlobals() => Array.Clear(DrawBuffer);

	/// <summary>Expands position+normal+packed-color+UV8 strips (<c>stride = 36</c>).</summary>
	[Original(0x00847E00)]
	public static void ExpandPosNormPackedColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.PackedColor, UvScale8, submitStrip);

	/// <summary>Expands position+normal+packed-color+UV10 strips (<c>stride = 36</c>).</summary>
	[Original(0x00847FB4)]
	public static void ExpandPosNormPackedColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.PackedColor, UvScale10, submitStrip);

	/// <summary>Expands position+packed-color strips without normals or UVs (<c>stride = 16</c>).</summary>
	[Original(0x00848168)]
	public static void ExpandPosPackedColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.PackedColor, 0.0f, submitStrip);

	/// <summary>Expands position+packed-color+UV8 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00848268)]
	public static void ExpandPosPackedColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.PackedColor, UvScale8, submitStrip);

	/// <summary>Expands position+packed-color+UV10 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x008483E0)]
	public static void ExpandPosPackedColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.PackedColor, UvScale10, submitStrip);

	/// <summary>Expands position+normal+scratch-color strips without UVs (<c>stride = 28</c>).</summary>
	[Original(0x00848558)]
	public static void ExpandPosNormScratchColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.ScratchVertexColor, 0.0f, submitStrip);

	/// <summary>Expands position+normal+scratch-color+UV8 strips (<c>stride = 36</c>).</summary>
	[Original(0x00848698)]
	public static void ExpandPosNormScratchColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.ScratchVertexColor, UvScale8, submitStrip);

	/// <summary>Expands position+normal+scratch-color+UV10 strips (<c>stride = 36</c>).</summary>
	[Original(0x0084884C)]
	public static void ExpandPosNormScratchColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.ScratchVertexColor, UvScale10, submitStrip);

	/// <summary>Expands position+scratch-color+UV8 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00848B00)]
	public static void ExpandPosScratchColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.ScratchVertexColor, UvScale8, submitStrip);

	/// <summary>Expands position+scratch-color+UV10 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00848C74)]
	public static void ExpandPosScratchColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.ScratchVertexColor, UvScale10, submitStrip);

	/// <summary>Expands position+normal+diffuse-color strips without UVs (<c>stride = 28</c>).</summary>
	[Original(0x00848DE8)]
	public static void ExpandPosNormDiffuseColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, 0.0f, submitStrip);

	/// <summary>Expands position+normal+diffuse-color+UV8 strips (<c>stride = 36</c>).</summary>
	[Original(0x00848F24)]
	public static void ExpandPosNormDiffuseColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, UvScale8, submitStrip);

	/// <summary>Expands position+normal+diffuse-color+UV10 strips (<c>stride = 36</c>).</summary>
	[Original(0x008490D8)]
	public static void ExpandPosNormDiffuseColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, UvScale10, submitStrip);

	/// <summary>Expands position+diffuse-color strips without normals or UVs (<c>stride = 16</c>).</summary>
	[Original(0x0084928C)]
	public static void ExpandPosDiffuseColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, 0.0f, submitStrip);

	/// <summary>Expands position+diffuse-color+UV8 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x0084938C)]
	public static void ExpandPosDiffuseColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, UvScale8, submitStrip);

	/// <summary>Expands position+diffuse-color+UV10 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00849504)]
	public static void ExpandPosDiffuseColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, UvScale10, submitStrip);

	/// <summary>Expands flat-shaded position+normal+diffuse-color strips without UVs (<c>stride = 28</c>).</summary>
	[Original(0x0084967C)]
	public static void ExpandFlatPosNormDiffuseColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, 0.0f, submitStrip);

	/// <summary>Expands flat-shaded position+normal+diffuse-color+UV8 strips (<c>stride = 36</c>).</summary>
	[Original(0x008497B8)]
	public static void ExpandFlatPosNormDiffuseColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, UvScale8, submitStrip);

	/// <summary>Expands flat-shaded position+normal+diffuse-color+UV10 strips (<c>stride = 36</c>).</summary>
	[Original(0x0084996C)]
	public static void ExpandFlatPosNormDiffuseColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: true, StripColorSource.DiffuseColor, UvScale10, submitStrip);

	/// <summary>Expands flat-shaded position+diffuse-color strips without normals or UVs (<c>stride = 16</c>).</summary>
	[Original(0x00849B20)]
	public static void ExpandFlatPosDiffuseColor(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, 0.0f, submitStrip);

	/// <summary>Expands flat-shaded position+diffuse-color+UV8 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00849C20)]
	public static void ExpandFlatPosDiffuseColorUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, UvScale8, submitStrip);

	/// <summary>Expands flat-shaded position+diffuse-color+UV10 strips without normals (<c>stride = 24</c>).</summary>
	[Original(0x00849D98)]
	public static void ExpandFlatPosDiffuseColorUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.DiffuseColor, UvScale10, submitStrip);

	/// <summary>Expands position-only strips without normals, color, or UVs (<c>stride = 12</c>).</summary>
	[Original(0x00849F10)]
	public static void ExpandPosOnly(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.None, 0.0f, submitStrip);

	/// <summary>Expands position+UV8 strips without normals or color (<c>stride = 20</c>).</summary>
	[Original(0x00849FFC)]
	public static void ExpandPosUv8(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.None, UvScale8, submitStrip);

	/// <summary>Expands position+UV10 strips without normals or color (<c>stride = 20</c>).</summary>
	[Original(0x0084A15C)]
	public static void ExpandPosUv10(ReadOnlySpan<short> chunkShorts, Action<int, int, int>? submitStrip = null) =>
		ExpandStrips(chunkShorts, includeNormals: false, StripColorSource.None, UvScale10, submitStrip);

	private static void ExpandStrips(
		ReadOnlySpan<short> chunkShorts,
		bool includeNormals,
		StripColorSource colorSource,
		float uvScale,
		Action<int, int, int>? submitStrip)
	{
		bool hasUv = uvScale != 0.0f;
		int strideDwords = 3 + (includeNormals ? 3 : 0) + (colorSource != StripColorSource.None ? 1 : 0) + (hasUv ? 2 : 0);
		int strideBytes = strideDwords * 4;

		short flagsAndCount = chunkShorts[2];
		int stripCount = flagsAndCount & 0x3FFF;
		int extraShorts = ((flagsAndCount >> 14) & 3) + 1;
		int cursor = 3;

		for (int strip = 0; strip < stripCount; strip++)
		{
			int vertCount = Math.Abs((int)chunkShorts[cursor]);
			int dst = 0;

			if (hasUv)
			{
				dst = WriteStripVertex(dst, chunkShorts[cursor + 1], includeNormals, colorSource, true, chunkShorts[cursor + 2], chunkShorts[cursor + 3], uvScale);
				dst = WriteStripVertex(dst, chunkShorts[cursor + 4], includeNormals, colorSource, true, chunkShorts[cursor + 5], chunkShorts[cursor + 6], uvScale);
				cursor += 7;
				int step = extraShorts + 2;
				for (int i = vertCount - 2; i > 0; i--)
				{
					dst = WriteStripVertex(dst, chunkShorts[cursor], includeNormals, colorSource, true, chunkShorts[cursor + 1], chunkShorts[cursor + 2], uvScale);
					cursor += step;
				}
			}
			else
			{
				dst = WriteStripVertex(dst, chunkShorts[cursor + 1], includeNormals, colorSource, false, 0, 0, 0.0f);
				dst = WriteStripVertex(dst, chunkShorts[cursor + 2], includeNormals, colorSource, false, 0, 0, 0.0f);
				cursor += 3;
				for (int i = vertCount - 2; i > 0; i--)
				{
					dst = WriteStripVertex(dst, chunkShorts[cursor], includeNormals, colorSource, false, 0, 0, 0.0f);
					cursor += extraShorts;
				}
			}

			submitStrip?.Invoke(5, vertCount - 2, strideBytes);
		}
	}

	private static int WriteStripVertex(
		int dst,
		short vertexIndex,
		bool includeNormals,
		StripColorSource colorSource,
		bool hasUv,
		short rawU,
		short rawV,
		float uvScale)
	{
		NinjaScratchVertex vertex = NinjaVertexTransformer.ScratchBuffer[vertexIndex];
		DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.X);
		DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.Y);
		DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.Z);

		if (includeNormals)
		{
			DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.NormalX);
			DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.NormalY);
			DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits(vertex.NormalZ);
		}

		switch (colorSource)
		{
			case StripColorSource.PackedColor:
				DrawBuffer[dst++] = NinjaColorState.PackedColor;
				break;
			case StripColorSource.DiffuseColor:
				DrawBuffer[dst++] = NinjaColorState.DiffuseColor;
				break;
			case StripColorSource.ScratchVertexColor:
				DrawBuffer[dst++] = vertex.Color;
				break;
		}

		if (hasUv)
		{
			DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits((float)((double)rawU * uvScale));
			DrawBuffer[dst++] = BitConverter.SingleToUInt32Bits((float)((double)rawV * uvScale));
		}

		return dst;
	}

	private enum StripColorSource
	{
		None,
		PackedColor,
		DiffuseColor,
		ScratchVertexColor,
	}
}
