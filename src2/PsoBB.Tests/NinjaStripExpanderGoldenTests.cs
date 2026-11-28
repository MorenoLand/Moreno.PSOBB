using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class NinjaStripExpanderGoldenTests
{
	public static IEnumerable<object[]> StripVectors()
	{
		(string Fixture, Action<short[], Action<int, int, int>> Invoke)[] specs =
		[
			("00847E00.json", (s, cb) => NinjaStripExpander.ExpandPosNormPackedColorUv8(s, cb)),
			("00847FB4.json", (s, cb) => NinjaStripExpander.ExpandPosNormPackedColorUv10(s, cb)),
			("00848168.json", (s, cb) => NinjaStripExpander.ExpandPosPackedColor(s, cb)),
			("00848268.json", (s, cb) => NinjaStripExpander.ExpandPosPackedColorUv8(s, cb)),
			("008483E0.json", (s, cb) => NinjaStripExpander.ExpandPosPackedColorUv10(s, cb)),
			("00848558.json", (s, cb) => NinjaStripExpander.ExpandPosNormScratchColor(s, cb)),
			("00848698.json", (s, cb) => NinjaStripExpander.ExpandPosNormScratchColorUv8(s, cb)),
			("0084884C.json", (s, cb) => NinjaStripExpander.ExpandPosNormScratchColorUv10(s, cb)),
			("00848B00.json", (s, cb) => NinjaStripExpander.ExpandPosScratchColorUv8(s, cb)),
			("00848C74.json", (s, cb) => NinjaStripExpander.ExpandPosScratchColorUv10(s, cb)),
			("00848DE8.json", (s, cb) => NinjaStripExpander.ExpandPosNormDiffuseColor(s, cb)),
			("00848F24.json", (s, cb) => NinjaStripExpander.ExpandPosNormDiffuseColorUv8(s, cb)),
			("008490D8.json", (s, cb) => NinjaStripExpander.ExpandPosNormDiffuseColorUv10(s, cb)),
			("0084928C.json", (s, cb) => NinjaStripExpander.ExpandPosDiffuseColor(s, cb)),
			("0084938C.json", (s, cb) => NinjaStripExpander.ExpandPosDiffuseColorUv8(s, cb)),
			("00849504.json", (s, cb) => NinjaStripExpander.ExpandPosDiffuseColorUv10(s, cb)),
			("0084967C.json", (s, cb) => NinjaStripExpander.ExpandFlatPosNormDiffuseColor(s, cb)),
			("008497B8.json", (s, cb) => NinjaStripExpander.ExpandFlatPosNormDiffuseColorUv8(s, cb)),
			("0084996C.json", (s, cb) => NinjaStripExpander.ExpandFlatPosNormDiffuseColorUv10(s, cb)),
			("00849B20.json", (s, cb) => NinjaStripExpander.ExpandFlatPosDiffuseColor(s, cb)),
			("00849C20.json", (s, cb) => NinjaStripExpander.ExpandFlatPosDiffuseColorUv8(s, cb)),
			("00849D98.json", (s, cb) => NinjaStripExpander.ExpandFlatPosDiffuseColorUv10(s, cb)),
			("00849F10.json", (s, cb) => NinjaStripExpander.ExpandPosOnly(s, cb)),
			("00849FFC.json", (s, cb) => NinjaStripExpander.ExpandPosUv8(s, cb)),
			("0084A15C.json", (s, cb) => NinjaStripExpander.ExpandPosUv10(s, cb)),
		];

		foreach ((string fixture, Action<short[], Action<int, int, int>> invoke) in specs)
		{
			foreach (var vector in GoldenVectors.Load(fixture))
			{
				yield return
				[
					fixture,
					invoke,
					vector.GetProperty("stride").GetInt32(),
					vector.GetProperty("vertexCount").GetInt32(),
					vector.GetProperty("packedColor").GetUInt32(),
					vector.GetProperty("diffuseColor").GetUInt32(),
					vector.GetProperty("scratchWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("chunkShorts").EnumerateArray().Select(static e => e.GetInt16()).ToArray(),
					vector.GetProperty("expectedWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
				];
			}
		}
	}

	[Theory]
	[MemberData(nameof(StripVectors))]
	public void StripExpanderMatchesTheMachineCode(
		string fixture,
		Action<short[], Action<int, int, int>> invoke,
		int expectedStride,
		int expectedVertexCount,
		uint packedColor,
		uint diffuseColor,
		uint[] scratchWords,
		short[] chunkShorts,
		uint[] expectedWords)
	{
		_ = fixture;
		NinjaVertexTransformer.ResetGlobals();
		NinjaColorState.ResetGlobals();
		NinjaStripExpander.ResetGlobals();
		try
		{
			NinjaColorState.PackedColor = packedColor;
			NinjaColorState.DiffuseColor = diffuseColor;
			for (int i = 0; i < scratchWords.Length / 8; i++)
			{
				int w = i * 8;
				NinjaVertexTransformer.ScratchBuffer[i] = new NinjaScratchVertex
				{
					X = BitConverter.UInt32BitsToSingle(scratchWords[w]),
					Y = BitConverter.UInt32BitsToSingle(scratchWords[w + 1]),
					Z = BitConverter.UInt32BitsToSingle(scratchWords[w + 2]),
					NormalX = BitConverter.UInt32BitsToSingle(scratchWords[w + 3]),
					NormalY = BitConverter.UInt32BitsToSingle(scratchWords[w + 4]),
					NormalZ = BitConverter.UInt32BitsToSingle(scratchWords[w + 5]),
					Color = scratchWords[w + 6],
					Reserved = scratchWords[w + 7],
				};
			}

			int lastPrimType = 0;
			int lastTriCount = 0;
			int lastStride = 0;
			invoke(chunkShorts, (primType, triCount, stride) =>
			{
				lastPrimType = primType;
				lastTriCount = triCount;
				lastStride = stride;
			});

			Assert.Equal(5, lastPrimType);
			Assert.Equal(expectedVertexCount - 2, lastTriCount);
			Assert.Equal(expectedStride, lastStride);
			for (int i = 0; i < expectedWords.Length; i++)
				Assert.Equal(expectedWords[i], NinjaStripExpander.DrawBuffer[i]);
		}
		finally
		{
			NinjaVertexTransformer.ResetGlobals();
			NinjaColorState.ResetGlobals();
			NinjaStripExpander.ResetGlobals();
		}
	}

	public static IEnumerable<object[]> TranslucentAlphaScanVectors()
	{
		(string Fixture, Func<uint[], int, bool> Invoke)[] specs =
		[
			("008359D8.json", (words, cnt) => NinjaColorState.HasTranslucentAlphaStride16(words, cnt)),
			("00835A70.json", (words, cnt) => NinjaColorState.HasTranslucentAlphaStride24(words, cnt)),
			("00835B08.json", (words, cnt) => NinjaColorState.HasTranslucentAlphaStride28(words, cnt)),
			("00835BA0.json", (words, cnt) => NinjaColorState.HasTranslucentAlphaStride36(words, cnt)),
		];

		foreach ((string fixture, Func<uint[], int, bool> invoke) in specs)
		{
			foreach (var vector in GoldenVectors.Load(fixture))
			{
				yield return
				[
					fixture,
					invoke,
					vector.GetProperty("count").GetInt32(),
					vector.GetProperty("words").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expected").GetBoolean(),
				];
			}
		}
	}

	public static IEnumerable<object[]> StreamResetVectors() => GoldenVectors.Load("00839A28.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("slot").GetInt32(),
			vector.GetProperty("initialBinding").GetInt32(),
			vector.GetProperty("initialStride").GetInt32(),
			vector.GetProperty("expectedBinding").GetInt32(),
			vector.GetProperty("expectedStride").GetInt32(),
		});

	public static IEnumerable<object[]> IndexedLitStripVectors()
	{
		(string Fixture, Action<ushort[], uint[], Action<int, int, int>> Invoke)[] specs =
		[
			("008341A8.json", (idx, src, cb) => NinjaStripExpander.ExpandIndexedLitPosColor(idx, src, cb)),
			("0083441C.json", (idx, src, cb) => NinjaStripExpander.ExpandIndexedLitPosColorUv(idx, src, cb)),
			("0083469C.json", (idx, src, cb) => NinjaStripExpander.ExpandIndexedLitPosNormColor(idx, src, cb)),
			("0083493C.json", (idx, src, cb) => NinjaStripExpander.ExpandIndexedLitPosNormColorUv(idx, src, cb)),
		];

		foreach ((string fixture, Action<ushort[], uint[], Action<int, int, int>> invoke) in specs)
		{
			foreach (var vector in GoldenVectors.Load(fixture))
			{
				yield return
				[
					fixture,
					invoke,
					vector.GetProperty("stride").GetInt32(),
					vector.GetProperty("indices").EnumerateArray().Select(static e => e.GetUInt16()).ToArray(),
					vector.GetProperty("ambient").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
					vector.GetProperty("sourceWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
					vector.GetProperty("expectedWords").EnumerateArray().Select(static e => e.GetUInt32()).ToArray(),
				];
			}
		}
	}

	[Theory]
	[MemberData(nameof(TranslucentAlphaScanVectors))]
	public void TranslucentAlphaScanMatchesTheMachineCode(
		string fixture,
		Func<uint[], int, bool> invoke,
		int count,
		uint[] words,
		bool expected)
	{
		_ = fixture;
		Assert.Equal(expected, invoke(words, count));
	}

	[Theory]
	[MemberData(nameof(StreamResetVectors))]
	public void ClearStreamBindingMatchesTheMachineCode(
		int slot,
		int initialBinding,
		int initialStride,
		int expectedBinding,
		int expectedStride)
	{
		NinjaColorState.ResetGlobals();
		try
		{
			NinjaColorState.CachedStreamBindings[slot] = initialBinding;
			NinjaColorState.CachedStreamStrides[slot] = initialStride;
			NinjaColorState.ClearStreamBinding(slot);
			Assert.Equal(expectedBinding, NinjaColorState.CachedStreamBindings[slot]);
			Assert.Equal(expectedStride, NinjaColorState.CachedStreamStrides[slot]);
		}
		finally
		{
			NinjaColorState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(IndexedLitStripVectors))]
	public void IndexedLitStripMatchesTheMachineCode(
		string fixture,
		Action<ushort[], uint[], Action<int, int, int>> invoke,
		int expectedStride,
		ushort[] indices,
		float[] ambient,
		uint[] sourceWords,
		uint[] expectedWords)
	{
		_ = fixture;
		NinjaColorState.ResetGlobals();
		NinjaStripExpander.ResetGlobals();
		try
		{
			NinjaColorState.StreamStateFlags = 2;
			NinjaColorState.AmbientAlpha = ambient[0];
			NinjaColorState.AmbientRed = ambient[1];
			NinjaColorState.AmbientGreen = ambient[2];
			NinjaColorState.AmbientBlue = ambient[3];

			int primType = 0;
			int triCount = 0;
			int stride = 0;
			invoke(indices, sourceWords, (pt, tc, st) =>
			{
				primType = pt;
				triCount = tc;
				stride = st;
			});

			Assert.Equal(5, primType);
			Assert.Equal(indices.Length - 2, triCount);
			Assert.Equal(expectedStride, stride);
			for (int i = 0; i < expectedWords.Length; i++)
				Assert.Equal(expectedWords[i], NinjaStripExpander.DrawBuffer[i]);
		}
		finally
		{
			NinjaColorState.ResetGlobals();
			NinjaStripExpander.ResetGlobals();
		}
	}
}
