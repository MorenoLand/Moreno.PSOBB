using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Represents a single 32-byte transformed vertex slot in the shared Ninja geometry scratch buffer.
/// </summary>
public struct NinjaScratchVertex
{
	/// <summary>Gets or sets the transformed X coordinate.</summary>
	public float X;

	/// <summary>Gets or sets the transformed Y coordinate.</summary>
	public float Y;

	/// <summary>Gets or sets the transformed Z coordinate.</summary>
	public float Z;

	/// <summary>Gets or sets the transformed normal X component.</summary>
	public float NormalX;

	/// <summary>Gets or sets the transformed normal Y component.</summary>
	public float NormalY;

	/// <summary>Gets or sets the transformed normal Z component.</summary>
	public float NormalZ;

	/// <summary>Gets or sets the packed ARGB diffuse vertex color.</summary>
	public uint Color;

	/// <summary>Gets or sets the reserved eighth dword matching the 32-byte stride.</summary>
	public uint Reserved;
}

/// <summary>
/// Transforms Ninja chunk vertex lists into the shared 32-byte scratch vertex buffer (<c>0x00ACD534</c>).
/// </summary>
public static class NinjaVertexTransformer
{
	private const float Inv255 = 0.003921568859368563f;
	private const float ColorScale = 255.0f;

	/// <summary>Gets or sets the active high-water transformed vertex count at <c>0x00ACD530</c>.</summary>
	[OriginalGlobal(0x00ACD530)]
	public static int MaxVertexCount { get; set; }

	/// <summary>Gets or sets the active view-space 4x3 transform matrix at <c>0x00AE6EE0</c>.</summary>
	[OriginalGlobal(0x00AE6EE0)]
	public static Matrix4x4 ViewTransform { get; set; } = Matrix4x4.Identity;

	/// <summary>Gets or sets the shared transformed scratch vertex buffer at <c>0x00ACD534</c>.</summary>
	[OriginalGlobal(0x00ACD534)]
	public static NinjaScratchVertex[] ScratchBuffer { get; set; } = new NinjaScratchVertex[2048];

	/// <summary>
	/// Resets scratch buffer capacity, vertex high-water count, and view transform globals to clean defaults.
	/// </summary>
	public static void ResetGlobals()
	{
		MaxVertexCount = 0;
		ViewTransform = Matrix4x4.Identity;
		Array.Clear(ScratchBuffer);
	}

	/// <summary>
	/// Transforms stride-16 position+flags vertices without modifying scratch normals or color, setting render flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00846A24)]
	public static void TransformPositionsFlags(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 4, hasNormals: false, colorMode: ColorOperation.None, flagMode: FlagOperation.Set0x900);

	/// <summary>
	/// Transforms stride-24 position vertices while leaving scratch normals and color unchanged and clearing render flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00846B04)]
	public static void TransformPositionsSkipNormals(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 6, hasNormals: false, colorMode: ColorOperation.None, flagMode: FlagOperation.Clear0x900);

	/// <summary>
	/// Transforms stride-28 position vertices while leaving scratch normals and color unchanged and selecting lighting bit <c>0x100</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00846BE4)]
	public static void TransformPositionsSkipNormalsAndExtra(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 7, hasNormals: false, colorMode: ColorOperation.None, flagMode: FlagOperation.Set0x100Clear0x800);

	/// <summary>
	/// Transforms stride-16 position+color vertices, copying each source ARGB color verbatim and setting render flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00845494)]
	public static void TransformPositionsColors(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 4, hasNormals: false, colorMode: ColorOperation.CopySource, flagMode: FlagOperation.Set0x900);

	/// <summary>
	/// Transforms stride-24 position+normal vertices, setting vertex color to opaque white and clearing render flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00845578)]
	public static void TransformPositionsNormals(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 6, hasNormals: true, colorMode: ColorOperation.White, flagMode: FlagOperation.Clear0x900);

	/// <summary>
	/// Transforms stride-28 position+normal+color vertices, copying each source ARGB color verbatim and selecting bit <c>0x100</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x008456CC)]
	public static void TransformPositionsNormalsColors(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 7, hasNormals: true, colorMode: ColorOperation.CopySource, flagMode: FlagOperation.Set0x100Clear0x800);

	/// <summary>
	/// Transforms stride-16 position+color vertices, adding clamped ambient tint to each source ARGB color and setting flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00845C84)]
	public static void TransformPositionsLitColors(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 4, hasNormals: false, colorMode: ColorOperation.AmbientModulatedSource, flagMode: FlagOperation.Set0x900);

	/// <summary>
	/// Transforms stride-24 position+normal vertices using the lit ambient-offset white diffuse color and clearing flags <c>0x900</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00845ED4)]
	public static void TransformPositionsNormalsLitAmbient(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 6, hasNormals: true, colorMode: ColorOperation.AmbientLitWhite, flagMode: FlagOperation.Clear0x900);

	/// <summary>
	/// Transforms stride-28 position+normal+color vertices, adding clamped ambient tint to each color and selecting bit <c>0x100</c>.
	/// </summary>
	/// <param name="indexOffset">Destination starting vertex slot index.</param>
	/// <param name="count">Number of vertices to transform.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00846164)]
	public static void TransformPositionsNormalsLitColors(int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformStandard(indexOffset, count, payloadWords, stride: 7, hasNormals: true, colorMode: ColorOperation.AmbientModulatedSource, flagMode: FlagOperation.Set0x100Clear0x800);

	/// <summary>
	/// Transforms weighted stride-28 position vertices (chunk format <c>0x2B</c>/<c>NF</c> without normals) into indexed scratch slots.
	/// </summary>
	/// <param name="headerFlags">Chunk header dword; bits <c>0x300</c> select overwrite (<c>0</c>) or accumulate (<c>0x100</c>/<c>0x200</c>/<c>0x300</c>).</param>
	/// <param name="indexOffset">Base index used only when updating <see cref="MaxVertexCount"/>.</param>
	/// <param name="count">Number of weighted entries to process.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00846CCC)]
	public static void TransformWeightedPositions(uint headerFlags, int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformWeighted(headerFlags, indexOffset, count, payloadWords, hasNormals: false, useAmbientLitColor: false);

	/// <summary>
	/// Transforms weighted stride-28 position+normal vertices into indexed scratch slots, writing opaque white when flags equal <c>0x200</c>.
	/// </summary>
	/// <param name="headerFlags">Chunk header dword; bits <c>0x300</c> select overwrite (<c>0</c>) or accumulate (<c>0x100</c>/<c>0x200</c>/<c>0x300</c>).</param>
	/// <param name="indexOffset">Base index offset applied when writing and updating <see cref="MaxVertexCount"/>.</param>
	/// <param name="count">Number of weighted entries to process.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x00845820)]
	public static void TransformWeightedPositionsNormals(uint headerFlags, int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformWeighted(headerFlags, indexOffset, count, payloadWords, hasNormals: true, useAmbientLitColor: false);

	/// <summary>
	/// Transforms weighted stride-28 position+normal vertices with ambient-offset white diffuse color when flags equal <c>0x200</c>.
	/// </summary>
	/// <param name="headerFlags">Chunk header dword; bits <c>0x300</c> select overwrite (<c>0</c>) or accumulate (<c>0x100</c>/<c>0x200</c>/<c>0x300</c>).</param>
	/// <param name="indexOffset">Base index offset applied when writing and updating <see cref="MaxVertexCount"/>.</param>
	/// <param name="count">Number of weighted entries to process.</param>
	/// <param name="payloadWords">Raw 32-bit chunk payload words.</param>
	[Original(0x0084641C)]
	public static void TransformWeightedPositionsNormalsLit(uint headerFlags, int indexOffset, int count, ReadOnlySpan<uint> payloadWords) =>
		TransformWeighted(headerFlags, indexOffset, count, payloadWords, hasNormals: true, useAmbientLitColor: true);

	private static void UpdateMaxCount(int indexOffset, int count)
	{
		int end = indexOffset + count;
		if (end > MaxVertexCount)
			MaxVertexCount = end;
	}

	private static (int A, int R, int G, int B) ComputeAmbientOffsets() => (
		FloatingPointMath.TruncateToInt32((double)NinjaColorState.AmbientAlpha * ColorScale),
		FloatingPointMath.TruncateToInt32((double)NinjaColorState.AmbientRed * ColorScale),
		FloatingPointMath.TruncateToInt32((double)NinjaColorState.AmbientGreen * ColorScale),
		FloatingPointMath.TruncateToInt32((double)NinjaColorState.AmbientBlue * ColorScale));

	private static uint ComputeAmbientLitWhiteColor()
	{
		(int da, int dr, int dg, int db) = ComputeAmbientOffsets();
		int a = ClampByte(unchecked((short)(da + 255)));
		int r = ClampByte(unchecked((short)(dr + 255)));
		int g = ClampByte(unchecked((short)(dg + 255)));
		int b = ClampByte(unchecked((short)(db + 255)));
		return (uint)(b | (g << 8) | ((r | (a << 8)) << 16));
	}

	private static uint ModulateSourceColor(uint sourceColor, (int A, int R, int G, int B) ambient)
	{
		int b = ClampByte(unchecked((short)(ambient.B + (byte)sourceColor)));
		int g = ClampByte(unchecked((short)(ambient.G + (byte)(sourceColor >> 8))));
		int r = ClampByte(unchecked((short)(ambient.R + (byte)(sourceColor >> 16))));
		int a = ClampByte(unchecked((short)(ambient.A + (byte)(sourceColor >> 24))));
		return (uint)(b | (g << 8) | ((r | (a << 8)) << 16));
	}

	private static int ClampByte(int value)
	{
		if (value <= 0)
			return 0;
		return value >= 255 ? 255 : value;
	}

	private static void TransformPosition(float x, float y, float z, out float tx, out float ty, out float tz)
	{
		Matrix4x4 m = ViewTransform;
		tx = (float)((double)m.M11 * x + m.M41 + (double)m.M21 * y + (double)m.M31 * z);
		ty = (float)((double)m.M22 * y + (double)m.M12 * x + m.M42 + (double)m.M32 * z);
		tz = (float)((double)y * m.M23 + (double)x * m.M13 + m.M43 + (double)z * m.M33);
	}

	private static void TransformNormal(float nx, float ny, float nz, out float tnx, out float tny, out float tnz)
	{
		Matrix4x4 m = ViewTransform;
		tnx = (float)((double)m.M11 * nx + (double)m.M21 * ny + (double)m.M31 * nz);
		tny = (float)((double)m.M12 * nx + (double)m.M22 * ny + (double)m.M32 * nz);
		tnz = (float)((double)nz * m.M33 + (double)ny * m.M23 + (double)nx * m.M13);
	}

	private static void TransformStandard(
		int indexOffset,
		int count,
		ReadOnlySpan<uint> payloadWords,
		int stride,
		bool hasNormals,
		ColorOperation colorMode,
		FlagOperation flagMode)
	{
		UpdateMaxCount(indexOffset, count);
		NinjaColorState.RenderFlags = flagMode switch
		{
			FlagOperation.Set0x900 => NinjaColorState.RenderFlags | 0x900u,
			FlagOperation.Clear0x900 => NinjaColorState.RenderFlags & ~0x900u,
			FlagOperation.Set0x100Clear0x800 => (NinjaColorState.RenderFlags & ~0x900u) | 0x100u,
			_ => NinjaColorState.RenderFlags,
		};

		(int A, int R, int G, int B) ambient = colorMode == ColorOperation.AmbientModulatedSource
			? ComputeAmbientOffsets()
			: default;
		uint constantColor = colorMode == ColorOperation.AmbientLitWhite
			? ComputeAmbientLitWhiteColor()
			: 0xFFFFFFFFu;

		int src = 0;
		for (int i = 0; i < count; i++)
		{
			float x = BitConverter.UInt32BitsToSingle(payloadWords[src]);
			float y = BitConverter.UInt32BitsToSingle(payloadWords[src + 1]);
			float z = BitConverter.UInt32BitsToSingle(payloadWords[src + 2]);
			TransformPosition(x, y, z, out float tx, out float ty, out float tz);

			int dstIndex = indexOffset + i;
			ScratchBuffer[dstIndex].X = tx;
			ScratchBuffer[dstIndex].Y = ty;
			ScratchBuffer[dstIndex].Z = tz;

			if (hasNormals)
			{
				float nx = BitConverter.UInt32BitsToSingle(payloadWords[src + 3]);
				float ny = BitConverter.UInt32BitsToSingle(payloadWords[src + 4]);
				float nz = BitConverter.UInt32BitsToSingle(payloadWords[src + 5]);
				TransformNormal(nx, ny, nz, out float tnx, out float tny, out float tnz);
				ScratchBuffer[dstIndex].NormalX = tnx;
				ScratchBuffer[dstIndex].NormalY = tny;
				ScratchBuffer[dstIndex].NormalZ = tnz;
			}

			switch (colorMode)
			{
				case ColorOperation.CopySource:
					ScratchBuffer[dstIndex].Color = payloadWords[src + (stride - 1)];
					break;
				case ColorOperation.White:
				case ColorOperation.AmbientLitWhite:
					ScratchBuffer[dstIndex].Color = constantColor;
					break;
				case ColorOperation.AmbientModulatedSource:
					ScratchBuffer[dstIndex].Color = ModulateSourceColor(payloadWords[src + (stride - 1)], ambient);
					break;
			}

			src += stride;
		}
	}

	private static void TransformWeighted(
		uint headerFlags,
		int indexOffset,
		int count,
		ReadOnlySpan<uint> payloadWords,
		bool hasNormals,
		bool useAmbientLitColor)
	{
		UpdateMaxCount(indexOffset, count);
		NinjaColorState.RenderFlags &= ~0x100u;

		uint blendMode = headerFlags & 0x300u;
		uint writeColor = blendMode == 0x200u && hasNormals
			? (useAmbientLitColor ? ComputeAmbientLitWhiteColor() : 0xFFFFFFFFu)
			: 0u;

		int src = 0;
		for (int i = 0; i < count; i++)
		{
			float x = BitConverter.UInt32BitsToSingle(payloadWords[src]);
			float y = BitConverter.UInt32BitsToSingle(payloadWords[src + 1]);
			float z = BitConverter.UInt32BitsToSingle(payloadWords[src + 2]);
			uint targetAndWeight = payloadWords[src + 6];
			int targetOffset = (ushort)targetAndWeight;
			double weight = ((double)(targetAndWeight >> 16) + 0.0) * Inv255;

			int dstIndex = indexOffset + targetOffset;
			TransformPosition(x, y, z, out float tx, out float ty, out float tz);

			if (blendMode == 0)
			{
				ScratchBuffer[dstIndex].X = (float)(tx * weight);
				ScratchBuffer[dstIndex].Y = (float)(ty * weight);
				ScratchBuffer[dstIndex].Z = (float)(tz * weight);
			}
			else
			{
				ScratchBuffer[dstIndex].X = (float)(tx * weight + ScratchBuffer[dstIndex].X);
				ScratchBuffer[dstIndex].Y = (float)(ty * weight + ScratchBuffer[dstIndex].Y);
				ScratchBuffer[dstIndex].Z = (float)(tz * weight + ScratchBuffer[dstIndex].Z);
			}

			if (hasNormals)
			{
				float nx = BitConverter.UInt32BitsToSingle(payloadWords[src + 3]);
				float ny = BitConverter.UInt32BitsToSingle(payloadWords[src + 4]);
				float nz = BitConverter.UInt32BitsToSingle(payloadWords[src + 5]);
				TransformNormal(nx, ny, nz, out float tnx, out float tny, out float tnz);

				if (blendMode == 0)
				{
					ScratchBuffer[dstIndex].NormalX = (float)(tnx * weight);
					ScratchBuffer[dstIndex].NormalY = (float)(tny * weight);
					ScratchBuffer[dstIndex].NormalZ = (float)(tnz * weight);
				}
				else
				{
					ScratchBuffer[dstIndex].NormalX = (float)(tnx * weight + ScratchBuffer[dstIndex].NormalX);
					ScratchBuffer[dstIndex].NormalY = (float)(tny * weight + ScratchBuffer[dstIndex].NormalY);
					ScratchBuffer[dstIndex].NormalZ = (float)(tnz * weight + ScratchBuffer[dstIndex].NormalZ);
				}

				if (blendMode == 0x200u)
					ScratchBuffer[dstIndex].Color = writeColor;
			}

			src += 7;
		}

		NinjaColorState.RenderFlags &= ~0x800u;
	}

	private enum ColorOperation
	{
		None,
		CopySource,
		White,
		AmbientModulatedSource,
		AmbientLitWhite,
	}

	private enum FlagOperation
	{
		Set0x900,
		Clear0x900,
		Set0x100Clear0x800,
	}
}
