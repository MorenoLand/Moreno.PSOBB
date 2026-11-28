using PsoBB.Models;
using PsoBB.Rendering;
using Xunit;

namespace PsoBB.Tests;

[Collection("Game state")]
public class NinjaColorAndMotionGoldenTests
{
	public static IEnumerable<object[]> LocateKeyframes16Vectors() => GoldenVectors.Load("0084AD80.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("frames").EnumerateArray().Select(static e => e.GetUInt16()).ToArray(),
			GoldenVectors.ReadFloat(vector.GetProperty("query")),
			vector.GetProperty("lowerIndex").GetInt32(),
			vector.GetProperty("upperIndex").GetInt32(),
			vector.GetProperty("fractionBits").GetUInt32(),
		});

	public static IEnumerable<object[]> ApplyAmbientColorVectors() => GoldenVectors.Load("0084A544.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("flagsIn").GetUInt32(),
			vector.GetProperty("ambient").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
			vector.GetProperty("flagsOut").GetUInt32(),
			vector.GetProperty("packedColor").GetUInt32(),
		});

	public static IEnumerable<object[]> ResolveVertexColorVectors() => GoldenVectors.Load("0084A338.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("colorFlags").GetUInt32(),
			vector.GetProperty("renderFlagsIn").GetUInt32(),
			vector.GetProperty("ambient").EnumerateArray().Select(GoldenVectors.ReadFloat).ToArray(),
			vector.GetProperty("color").GetUInt32(),
			vector.GetProperty("packedColorOut").GetUInt32(),
			vector.GetProperty("renderFlagsOut").GetUInt32(),
		});

	public static IEnumerable<object[]> EulerToQuaternionVectors() => GoldenVectors.Load("00846FAC.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("xAngle").GetInt32(),
			vector.GetProperty("yAngle").GetInt32(),
			vector.GetProperty("zAngle").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("x")),
			GoldenVectors.ReadFloat(vector.GetProperty("y")),
			GoldenVectors.ReadFloat(vector.GetProperty("z")),
			GoldenVectors.ReadFloat(vector.GetProperty("w")),
		});

	public static IEnumerable<object[]> EulerAlternateToQuaternionVectors() => GoldenVectors.Load("00847074.json")
		.Select(vector => new object[]
		{
			vector.GetProperty("xAngle").GetInt32(),
			vector.GetProperty("yAngle").GetInt32(),
			vector.GetProperty("zAngle").GetInt32(),
			GoldenVectors.ReadFloat(vector.GetProperty("x")),
			GoldenVectors.ReadFloat(vector.GetProperty("y")),
			GoldenVectors.ReadFloat(vector.GetProperty("z")),
			GoldenVectors.ReadFloat(vector.GetProperty("w")),
		});

	[Theory]
	[MemberData(nameof(LocateKeyframes16Vectors))]
	public void LocateKeyframes16MatchesTheMachineCode(
		ushort[] frames,
		float query,
		int expectedLower,
		int expectedUpper,
		uint expectedFractionBits)
	{
		(int lower, int upper, float fraction) = NinjaMotionEvaluator.LocateKeyframes16(frames, query);
		Assert.Equal(expectedLower, lower);
		Assert.Equal(expectedUpper, upper);
		Assert.Equal(expectedFractionBits, BitConverter.SingleToUInt32Bits(fraction));
	}

	[Theory]
	[MemberData(nameof(ApplyAmbientColorVectors))]
	public void ApplyAmbientMaterialColorMatchesTheMachineCode(
		uint flagsIn,
		float[] ambient,
		uint expectedFlagsOut,
		uint expectedPackedColor)
	{
		NinjaColorState.ResetGlobals();
		try
		{
			NinjaColorState.Flags = flagsIn;
			NinjaColorState.AmbientAlpha = ambient[0];
			NinjaColorState.AmbientRed = ambient[1];
			NinjaColorState.AmbientGreen = ambient[2];
			NinjaColorState.AmbientBlue = ambient[3];

			NinjaColorState.ApplyAmbientMaterialColor();

			Assert.Equal(expectedFlagsOut, NinjaColorState.Flags);
			Assert.Equal(expectedPackedColor, NinjaColorState.PackedColor);
		}
		finally
		{
			NinjaColorState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(ResolveVertexColorVectors))]
	public void ResolveVertexColorMatchesTheMachineCode(
		uint colorFlags,
		uint renderFlagsIn,
		float[] ambient,
		uint color,
		uint expectedPackedColorOut,
		uint expectedRenderFlagsOut)
	{
		NinjaColorState.ResetGlobals();
		try
		{
			NinjaColorState.Flags = colorFlags;
			NinjaColorState.PackedColor = 0xCAFEBABEu;
			NinjaColorState.RenderFlags = renderFlagsIn;
			NinjaColorState.AmbientAlpha = ambient[0];
			NinjaColorState.AmbientRed = ambient[1];
			NinjaColorState.AmbientGreen = ambient[2];
			NinjaColorState.AmbientBlue = ambient[3];

			uint result = NinjaColorState.ResolveVertexColor(color);

			Assert.Equal(expectedPackedColorOut, NinjaColorState.PackedColor);
			Assert.Equal(expectedRenderFlagsOut, NinjaColorState.RenderFlags);
			Assert.Equal(expectedRenderFlagsOut, result);
		}
		finally
		{
			NinjaColorState.ResetGlobals();
		}
	}

	[Theory]
	[MemberData(nameof(EulerToQuaternionVectors))]
	public void FromEulerMatchesTheMachineCode(
		int xAngle,
		int yAngle,
		int zAngle,
		float expectedX,
		float expectedY,
		float expectedZ,
		float expectedW)
	{
		NinjaQuaternion actual = NinjaQuaternion.FromEuler(xAngle, yAngle, zAngle);
		GoldenVectors.AssertFloat(expectedX, actual.X);
		GoldenVectors.AssertFloat(expectedY, actual.Y);
		GoldenVectors.AssertFloat(expectedZ, actual.Z);
		GoldenVectors.AssertFloat(expectedW, actual.W);
	}

	[Theory]
	[MemberData(nameof(EulerAlternateToQuaternionVectors))]
	public void FromEulerAlternateMatchesTheMachineCode(
		int xAngle,
		int yAngle,
		int zAngle,
		float expectedX,
		float expectedY,
		float expectedZ,
		float expectedW)
	{
		NinjaQuaternion actual = NinjaQuaternion.FromEulerAlternate(xAngle, yAngle, zAngle);
		GoldenVectors.AssertFloat(expectedX, actual.X);
		GoldenVectors.AssertFloat(expectedY, actual.Y);
		GoldenVectors.AssertFloat(expectedZ, actual.Z);
		GoldenVectors.AssertFloat(expectedW, actual.W);
	}
}
