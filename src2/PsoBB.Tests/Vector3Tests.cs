using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported vector helpers and their boundaries.
/// </summary>
public sealed class Vector3Tests
{
	[Fact]
	public void LengthReturnsTheEuclideanLength()
	{
		Assert.Equal(13, new Vector3(3, 4, 12).Length());
	}

	[Fact]
	public void LengthOfZeroIsZero()
	{
		Assert.Equal(0, default(Vector3).Length());
	}

	[Fact]
	public void LengthOfNegativeZeroComponentsIsZero()
	{
		Assert.Equal(0, new Vector3(-0.0f, -0.0f, -0.0f).Length());
	}

	[Fact]
	public void LengthOfAHugeComponentOverflowsToInfinity()
	{
		Assert.True(float.IsPositiveInfinity(new Vector3(1e30f, 0, 0).Length()));
	}

	[Fact]
	public void LengthOfANaNComponentIsNaN()
	{
		Assert.True(float.IsNaN(new Vector3(float.NaN, 0, 0).Length()));
	}

	[Fact]
	public void LengthSquaredKeepsTheWiderIntermediate()
	{
		Assert.Equal(25.0, new Vector3(3, 4, 0).LengthSquared());
	}

	[Fact]
	public void DistanceSquaredMeasuresBothDirections()
	{
		Vector3 first = new(1, 2, 3);
		Vector3 second = new(4, 6, 3);
		Assert.Equal(25.0, first.DistanceSquared(second));
		Assert.Equal(25.0, second.DistanceSquared(first));
	}

	[Fact]
	public void PlanarDistanceSquaredIgnoresHeight()
	{
		Assert.Equal(25.0, new Vector3(0, 100, 0).PlanarDistanceSquared(new Vector3(3, -50, 4)));
	}

	[Fact]
	public void AddAndSubtractAreComponentWise()
	{
		Vector3 first = new(1, 2, 3);
		Vector3 second = new(4, 5, 6);
		GoldenVectors.AssertVector(new Vector3(5, 7, 9), Vector3.Add(first, second));
		GoldenVectors.AssertVector(new Vector3(3, 3, 3), Vector3.Subtract(second, first));
	}

	[Fact]
	public void NormalizeReturnsTheLengthAndScalesTheVector()
	{
		Vector3 value = new(3, 4, 0);
		double length = Vector3.Normalize(ref value);
		Assert.Equal(5.0, length);
		GoldenVectors.AssertVector(new Vector3(0.6f, 0.8f, 0), value);
	}

	[Fact]
	public void NormalizeLeavesAZeroVectorAlone()
	{
		Vector3 value = new(-0.0f, 0, -0.0f);
		Assert.Equal(0.0, Vector3.Normalize(ref value));
		Assert.Equal(0x80000000u, BitConverter.SingleToUInt32Bits(value.X));
		Assert.Equal(0x80000000u, BitConverter.SingleToUInt32Bits(value.Z));
	}

	[Fact]
	public void NormalizeOfInfinityProducesNaN()
	{
		Vector3 value = new(float.PositiveInfinity, 0, 0);
		Assert.True(double.IsPositiveInfinity(Vector3.Normalize(ref value)));
		Assert.True(float.IsNaN(value.X));
	}

	[Fact]
	public void TryNormalizeAcceptsTheThreshold()
	{
		Vector3 value = new(1e-5f, 0, 0);
		Assert.True(Vector3.TryNormalize(ref value));
		Assert.Equal(1f, value.X);
	}

	[Fact]
	public void TryNormalizeRejectsASmallerVector()
	{
		Vector3 value = new(1e-6f, 0, 0);
		Assert.False(Vector3.TryNormalize(ref value));
		Assert.Equal(1e-6f, value.X);
	}

	[Fact]
	public void TryNormalizeRejectsNaN()
	{
		Vector3 value = new(float.NaN, 1, 0);
		Assert.False(Vector3.TryNormalize(ref value));
	}

	[Fact]
	public void HasNonFiniteComponentFindsEveryPosition()
	{
		Assert.False(new Vector3(1, 2, 3).HasNonFiniteComponent());
		Assert.True(new Vector3(float.PositiveInfinity, 2, 3).HasNonFiniteComponent());
		Assert.True(new Vector3(1, float.NaN, 3).HasNonFiniteComponent());
		Assert.True(new Vector3(1, 2, float.NegativeInfinity).HasNonFiniteComponent());
	}

	[Theory]
	[InlineData(0.0, true)]
	[InlineData(9.999e-6, true)]
	[InlineData(-9.999e-6, true)]
	[InlineData(1e-5, false)]
	[InlineData(-1e-5, false)]
	[InlineData(1e-4, false)]
	[InlineData(double.NaN, false)]
	public void IsWithinZeroToleranceIsStrictAtBothEnds(double value, bool expected) =>
		Assert.Equal(expected, Vector3.IsWithinZeroTolerance(value));

	[Fact]
	public void TryTriangleNormalBuildsAUnitNormal()
	{
		Vector3 normal = default;
		Assert.True(Vector3.TryTriangleNormal(new Vector3(0, 0, 0), new Vector3(1, 0, 0), new Vector3(0, 1, 0), ref normal));
		GoldenVectors.AssertVector(new Vector3(0, 0, 1), normal);
	}

	[Fact]
	public void TryTriangleNormalLeavesTheNormalOnADegenerateTriangle()
	{
		Vector3 normal = new(7, 8, 9);
		Assert.False(Vector3.TryTriangleNormal(new Vector3(0, 0, 0), new Vector3(1, 0, 0), new Vector3(2, 0, 0), ref normal));
		GoldenVectors.AssertVector(new Vector3(7, 8, 9), normal);
	}

	[Fact]
	public void TryTriangleNormalLeavesTheNormalOnNaN()
	{
		Vector3 normal = default;
		Assert.True(Vector3.TryTriangleNormal(new Vector3(float.NaN, 0, 0), new Vector3(1, 0, 0), new Vector3(0, 1, 0), ref normal));
		Assert.True(float.IsNaN(normal.X) || float.IsNaN(normal.Y) || float.IsNaN(normal.Z));
	}

	[Fact]
	public void MoveTowardsStopsAtTheTargetWhenItIsWithinReach()
	{
		Vector3 moved = Vector3.MoveTowards(new Vector3(0, 0, 0), new Vector3(10, 0, 0), 20, out double distance);
		Assert.Equal(0.0, distance);
		GoldenVectors.AssertVector(new Vector3(10, 0, 0), moved);
	}

	[Fact]
	public void MoveTowardsStopsShortAndReportsTheFullDistance()
	{
		Vector3 moved = Vector3.MoveTowards(new Vector3(0, 0, 0), new Vector3(10, 0, 0), 5, out double distance);
		Assert.Equal(10.0, distance);
		GoldenVectors.AssertVector(new Vector3(5, 0, 0), moved);
	}

	[Fact]
	public void MoveTowardsAZeroOffsetStaysAtTheOrigin()
	{
		Vector3 moved = Vector3.MoveTowards(new Vector3(1, 2, 3), new Vector3(1, 2, 3), 5, out double distance);
		Assert.Equal(0.0, distance);
		GoldenVectors.AssertVector(new Vector3(1, 2, 3), moved);
	}

	[Fact]
	public void DotMultipliesMatchingComponents()
	{
		Assert.Equal(32.0, Vector3.Dot(new Vector3(1, 2, 3), new Vector3(4, 5, 6)));
	}

	[Fact]
	public void CrossWritesTheProductAndReturnsItsLength()
	{
		double length = Vector3.Cross(new Vector3(1, 0, 0), new Vector3(0, 1, 0), out Vector3 cross);
		Assert.Equal(1.0, length);
		GoldenVectors.AssertVector(new Vector3(0, 0, 1), cross);
	}

	[Fact]
	public void DistanceReturnsZeroBelowTheCutoff()
	{
		Assert.Equal(0.0, Vector3.Distance(new Vector3(0, 0, 0), new Vector3(0.1f, 0, 0)));
		Assert.Equal(5.0, Vector3.Distance(new Vector3(0, 0, 0), new Vector3(3, 4, 0)));
	}

	[Fact]
	public void DistanceOfNaNIsZero() =>
		Assert.Equal(0.0, Vector3.Distance(new Vector3(float.NaN, 0, 0), new Vector3(1, 1, 1)));

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Length"] = 0x0083173C,
			["LengthSquared"] = 0x0082DEF4,
			["DistanceSquared"] = 0x007A8C28,
			["PlanarDistanceSquared"] = 0x007A9180,
			["Add"] = 0x007A8C04,
			["Subtract"] = 0x007A8C4C,
			["Normalize"] = 0x0082DF08,
			["TryNormalize"] = 0x007A9158,
			["HasNonFiniteComponent"] = 0x007A8BA0,
			["IsWithinZeroTolerance"] = 0x007A96DC,
			["TryTriangleNormal"] = 0x007A9618,
			["MoveTowards"] = 0x007A8F28,
			["Dot"] = 0x0082F9E0,
			["Cross"] = 0x0083A1F0,
			["Distance"] = 0x00836208,
		};
		MethodInfo[] methods = typeof(Vector3)
			.GetMethods(BindingFlags.Public | BindingFlags.Static | BindingFlags.Instance | BindingFlags.DeclaredOnly)
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
