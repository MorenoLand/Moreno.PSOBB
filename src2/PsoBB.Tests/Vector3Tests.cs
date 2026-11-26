using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported vector length.
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
	public void LengthDeclaresItsOriginalAddress()
	{
		MethodInfo method = typeof(Vector3).GetMethod(nameof(Vector3.Length))!;
		OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
		Assert.Equal(0x0083173C, attribute.Address);
	}
}
