using PsoBB.Mathematics;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class NinjaVertexTransformGoldenTests
{
	public static IEnumerable<object[]> StandardVectors()
	{
		(string Fixture, Action<int, int, uint[]> Invoke)[] specs =
		[
			("00846A24.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsFlags(off, cnt, words)),
			("00846B04.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsSkipNormals(off, cnt, words)),
			("00846BE4.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsSkipNormalsAndExtra(off, cnt, words)),
			("00845494.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsColors(off, cnt, words)),
			("00845578.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsNormals(off, cnt, words)),
			("008456CC.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsNormalsColors(off, cnt, words)),
			("00845C84.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsLitColors(off, cnt, words)),
			("00845ED4.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsNormalsLitAmbient(off, cnt, words)),
			("00846164.json", (off, cnt, words) => NinjaVertexTransformer.TransformPositionsNormalsLitColors(off, cnt, words)),
		];

		foreach ((string fixture, Action<int, int, uint[]> invoke) in specs)
		{
			foreach (var vector in GoldenVectors.Load(fixture))
			{
				yield return
				[
					fixture,
					invoke,
					vector.GetProperty("indexOffset").GetInt32(),
					vector.GetProperty("count").GetInt32(),
					vector.GetProperty("initMax").GetInt32(),
					vector.GetProperty("initRenderFlags").GetUInt32(),
					GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
					vector.GetProperty("ambient").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
					vector.GetProperty("payloadWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("initialVertexWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expectedVertexWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expectedMaxCount").GetInt32(),
					vector.GetProperty("expectedRenderFlags").GetUInt32(),
				];
			}
		}
	}

	public static IEnumerable<object[]> WeightedVectors()
	{
		(string Fixture, Action<uint, int, int, uint[]> Invoke)[] specs =
		[
			("00846CCC.json", (hdr, off, cnt, words) => NinjaVertexTransformer.TransformWeightedPositions(hdr, off, cnt, words)),
			("00845820.json", (hdr, off, cnt, words) => NinjaVertexTransformer.TransformWeightedPositionsNormals(hdr, off, cnt, words)),
			("0084641C.json", (hdr, off, cnt, words) => NinjaVertexTransformer.TransformWeightedPositionsNormalsLit(hdr, off, cnt, words)),
		];

		foreach ((string fixture, Action<uint, int, int, uint[]> invoke) in specs)
		{
			foreach (var vector in GoldenVectors.Load(fixture))
			{
				yield return
				[
					fixture,
					invoke,
					vector.GetProperty("headerFlags").GetUInt32(),
					vector.GetProperty("indexOffset").GetInt32(),
					vector.GetProperty("count").GetInt32(),
					vector.GetProperty("initMax").GetInt32(),
					vector.GetProperty("initRenderFlags").GetUInt32(),
					GoldenVectors.ReadMatrix(vector.GetProperty("matrix")),
					vector.GetProperty("ambient").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
					vector.GetProperty("payloadWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("initialVertexWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expectedVertexWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expectedMaxCount").GetInt32(),
					vector.GetProperty("expectedRenderFlags").GetUInt32(),
				];
			}
		}
	}

	[Theory]
	[MemberData(nameof(StandardVectors))]
	public void StandardVertexTransformerMatchesTheMachineCode(
		string fixture,
		Action<int, int, uint[]> invoke,
		int indexOffset,
		int count,
		int initMax,
		uint initRenderFlags,
		Matrix4x4 matrix,
		float[] ambient,
		uint[] payloadWords,
		uint[] initialVertexWords,
		uint[] expectedVertexWords,
		int expectedMaxCount,
		uint expectedRenderFlags)
	{
		_ = fixture;
		RunTransformCase(
			initMax,
			initRenderFlags,
			matrix,
			ambient,
			initialVertexWords,
			() => invoke(indexOffset, count, payloadWords),
			expectedVertexWords,
			expectedMaxCount,
			expectedRenderFlags);
	}

	[Theory]
	[MemberData(nameof(WeightedVectors))]
	public void WeightedVertexTransformerMatchesTheMachineCode(
		string fixture,
		Action<uint, int, int, uint[]> invoke,
		uint headerFlags,
		int indexOffset,
		int count,
		int initMax,
		uint initRenderFlags,
		Matrix4x4 matrix,
		float[] ambient,
		uint[] payloadWords,
		uint[] initialVertexWords,
		uint[] expectedVertexWords,
		int expectedMaxCount,
		uint expectedRenderFlags)
	{
		_ = fixture;
		RunTransformCase(
			initMax,
			initRenderFlags,
			matrix,
			ambient,
			initialVertexWords,
			() => invoke(headerFlags, indexOffset, count, payloadWords),
			expectedVertexWords,
			expectedMaxCount,
			expectedRenderFlags);
	}

	private static void RunTransformCase(
		int initMax,
		uint initRenderFlags,
		Matrix4x4 matrix,
		float[] ambient,
		uint[] initialVertexWords,
		Action invoke,
		uint[] expectedVertexWords,
		int expectedMaxCount,
		uint expectedRenderFlags)
	{
		NinjaVertexTransformer.ResetGlobals();
		NinjaColorState.ResetGlobals();
		try
		{
			NinjaVertexTransformer.MaxVertexCount = initMax;
			NinjaVertexTransformer.ViewTransform = matrix;
			NinjaColorState.RenderFlags = initRenderFlags;
			NinjaColorState.AmbientAlpha = ambient[0];
			NinjaColorState.AmbientRed = ambient[1];
			NinjaColorState.AmbientGreen = ambient[2];
			NinjaColorState.AmbientBlue = ambient[3];

			for (int i = 0; i < 8; i++)
			{
				int w = i * 8;
				NinjaVertexTransformer.ScratchBuffer[i] = new NinjaScratchVertex
				{
					X = BitConverter.UInt32BitsToSingle(initialVertexWords[w]),
					Y = BitConverter.UInt32BitsToSingle(initialVertexWords[w + 1]),
					Z = BitConverter.UInt32BitsToSingle(initialVertexWords[w + 2]),
					NormalX = BitConverter.UInt32BitsToSingle(initialVertexWords[w + 3]),
					NormalY = BitConverter.UInt32BitsToSingle(initialVertexWords[w + 4]),
					NormalZ = BitConverter.UInt32BitsToSingle(initialVertexWords[w + 5]),
					Color = initialVertexWords[w + 6],
					Reserved = initialVertexWords[w + 7],
				};
			}

			invoke();

			Assert.Equal(expectedMaxCount, NinjaVertexTransformer.MaxVertexCount);
			Assert.Equal(expectedRenderFlags, NinjaColorState.RenderFlags);
			for (int i = 0; i < 8; i++)
			{
				int w = i * 8;
				NinjaScratchVertex v = NinjaVertexTransformer.ScratchBuffer[i];
				Assert.Equal(expectedVertexWords[w], BitConverter.SingleToUInt32Bits(v.X));
				Assert.Equal(expectedVertexWords[w + 1], BitConverter.SingleToUInt32Bits(v.Y));
				Assert.Equal(expectedVertexWords[w + 2], BitConverter.SingleToUInt32Bits(v.Z));
				Assert.Equal(expectedVertexWords[w + 3], BitConverter.SingleToUInt32Bits(v.NormalX));
				Assert.Equal(expectedVertexWords[w + 4], BitConverter.SingleToUInt32Bits(v.NormalY));
				Assert.Equal(expectedVertexWords[w + 5], BitConverter.SingleToUInt32Bits(v.NormalZ));
				Assert.Equal(expectedVertexWords[w + 6], v.Color);
				Assert.Equal(expectedVertexWords[w + 7], v.Reserved);
			}
		}
		finally
		{
			NinjaVertexTransformer.ResetGlobals();
			NinjaColorState.ResetGlobals();
		}
	}
}
