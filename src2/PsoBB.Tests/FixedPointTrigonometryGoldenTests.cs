using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the fixed-point trigonometry against vectors produced by the original machine code.
/// </summary>
public sealed class FixedPointTrigonometryGoldenTests
{
	public static IEnumerable<object[]> SineVectors() => GoldenVectors.Load("0082DCBC.json")
		.Select(vector => new object[]
		{
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> CosineVectors() => GoldenVectors.Load("0082DDD8.json")
		.Select(vector => new object[]
		{
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadDouble(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> SineCosineVectors() => GoldenVectors.Load("008451F8.json")
		.Select(vector => new object[]
		{
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadFloat(vector.GetProperty("sine")),
			GoldenVectors.ReadFloat(vector.GetProperty("cosine")),
		});

	public static IEnumerable<object[]> OffsetVectors() => GoldenVectors.Load("007A90F0.json")
		.Select(vector => new object[]
		{
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			GoldenVectors.ReadVector(vector.GetProperty("center")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	public static IEnumerable<object[]> CircleVectors() => GoldenVectors.Load("007A9128.json")
		.Select(vector => new object[]
		{
			unchecked((int)vector.GetProperty("angle").GetUInt32()),
			GoldenVectors.ReadFloat(vector.GetProperty("radius")),
			GoldenVectors.ReadVector(vector.GetProperty("result")),
		});

	[Theory]
	[MemberData(nameof(SineVectors))]
	public void SineMatchesTheMachineCode(int angle, double expected) =>
		GoldenVectors.AssertDouble(expected, FixedPointTrigonometry.Sine(angle));

	[Theory]
	[MemberData(nameof(CosineVectors))]
	public void CosineMatchesTheMachineCode(int angle, double expected) =>
		GoldenVectors.AssertDouble(expected, FixedPointTrigonometry.Cosine(angle));

	[Theory]
	[MemberData(nameof(SineCosineVectors))]
	public void SineCosineMatchesTheMachineCode(int angle, float expectedSine, float expectedCosine)
	{
		(float sine, float cosine) = FixedPointTrigonometry.SineCosine(angle);
		GoldenVectors.AssertFloat(expectedSine, sine);
		GoldenVectors.AssertFloat(expectedCosine, cosine);
	}

	[Theory]
	[MemberData(nameof(OffsetVectors))]
	public void OffsetMatchesTheMachineCode(int angle, float radius, Vector3 center, Vector3 expected) =>
		GoldenVectors.AssertVector(expected, FixedPointTrigonometry.OffsetAroundY(angle, radius, center));

	[Theory]
	[MemberData(nameof(CircleVectors))]
	public void CircleMatchesTheMachineCode(int angle, float radius, Vector3 expected) =>
		GoldenVectors.AssertVector(expected, FixedPointTrigonometry.CirclePoint(angle, radius));
}
