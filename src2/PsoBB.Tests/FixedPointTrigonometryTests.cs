using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the fixed-point trigonometry and its boundaries.
/// </summary>
public sealed class FixedPointTrigonometryTests
{
	[Theory]
	[InlineData(0, 0.0)]
	[InlineData(0x4000, 1.0)]
	[InlineData(0x8000, -0.0)]
	[InlineData(0xC000, -1.0)]
	public void SineHitsTheQuadrantBoundaries(int angle, double expected) =>
		GoldenVectors.AssertDouble(expected, FixedPointTrigonometry.Sine(angle));

	[Theory]
	[InlineData(0, 1.0)]
	[InlineData(0x4000, -0.0)]
	[InlineData(0x8000, -1.0)]
	[InlineData(0xC000, 0.0)]
	public void CosineHitsTheQuadrantBoundaries(int angle, double expected) =>
		GoldenVectors.AssertDouble(expected, FixedPointTrigonometry.Cosine(angle));

	[Fact]
	public void InterpolationFillsTheFractionBits()
	{
		double start = FixedPointTrigonometry.Sine(0x1000);
		double middle = FixedPointTrigonometry.Sine(0x1008);
		double end = FixedPointTrigonometry.Sine(0x1010);
		Assert.True(start < middle && middle < end);
	}

	[Fact]
	public void HighBitsWrapAtOneTurn()
	{
		Assert.Equal(FixedPointTrigonometry.Sine(0x1234), FixedPointTrigonometry.Sine(0x11234));
		Assert.Equal(FixedPointTrigonometry.Sine(0xFFFF), FixedPointTrigonometry.Sine(-1));
		Assert.Equal(FixedPointTrigonometry.Cosine(0x1234), FixedPointTrigonometry.Cosine(0x11234));
	}

	[Fact]
	public void OffsetMovesAroundTheVerticalAxis()
	{
		GoldenVectors.AssertVector(new Vector3(10, 20, 35),
			FixedPointTrigonometry.OffsetAroundY(0, 5, new Vector3(10, 20, 30)));
		GoldenVectors.AssertVector(new Vector3(15, 20, 30),
			FixedPointTrigonometry.OffsetAroundY(0x4000, 5, new Vector3(10, 20, 30)));
	}

	[Fact]
	public void CirclePointStaysInTheHorizontalPlane()
	{
		GoldenVectors.AssertVector(new Vector3(0, 0, 5), FixedPointTrigonometry.CirclePoint(0, 5));
		GoldenVectors.AssertVector(new Vector3(5, 0, -0.0f), FixedPointTrigonometry.CirclePoint(0x4000, 5));
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Sine"] = 0x0082DCBC,
			["Cosine"] = 0x0082DDD8,
			["OffsetAroundY"] = 0x007A90F0,
			["CirclePoint"] = 0x007A9128,
		};
		MethodInfo[] methods = typeof(FixedPointTrigonometry)
			.GetMethods(BindingFlags.Public | BindingFlags.Static | BindingFlags.DeclaredOnly)
			.Where(method => method.GetCustomAttribute<OriginalAttribute>() is not null)
			.ToArray();
		Assert.Equal(expected.Count, methods.Length);
		foreach (MethodInfo method in methods)
		{
			OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
			Assert.Equal(expected[method.Name], attribute.Address);
		}
	}
}
