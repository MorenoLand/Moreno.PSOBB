using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported scalar square root and absolute value.
/// </summary>
public sealed class FloatingPointMathTests
{
	[Fact]
	public void SquareRootOfANonNegativeValue()
	{
		Assert.Equal(3, FloatingPointMath.SquareRoot(9));
	}

	[Fact]
	public void SquareRootOfANegativeValueIsNegated()
	{
		Assert.Equal(-2, FloatingPointMath.SquareRoot(-4));
	}

	[Fact]
	public void SquareRootPreservesNegativeZero()
	{
		Assert.Equal(0x80000000u, BitConverter.SingleToUInt32Bits(FloatingPointMath.SquareRoot(-0.0f)));
	}

	[Fact]
	public void SquareRootOfANaNIsNaN()
	{
		Assert.True(float.IsNaN(FloatingPointMath.SquareRoot(float.NaN)));
		Assert.True(float.IsNaN(FloatingPointMath.SquareRoot(BitConverter.UInt32BitsToSingle(0xFFC00000u))));
	}

	[Fact]
	public void SquareRootOfInfinityPreservesTheSign()
	{
		Assert.True(float.IsPositiveInfinity(FloatingPointMath.SquareRoot(float.PositiveInfinity)));
		Assert.True(float.IsNegativeInfinity(FloatingPointMath.SquareRoot(float.NegativeInfinity)));
	}

	[Fact]
	public void AbsoluteReturnsTheMagnitude()
	{
		Assert.Equal(3.5f, FloatingPointMath.Absolute(-3.5f));
		Assert.Equal(3.5f, FloatingPointMath.Absolute(3.5f));
	}

	[Fact]
	public void AbsolutePreservesNegativeZero()
	{
		Assert.Equal(0x80000000u, BitConverter.SingleToUInt32Bits(FloatingPointMath.Absolute(-0.0f)));
	}

	[Fact]
	public void AbsoluteClearsTheSignOfANegativeNaN()
	{
		float value = FloatingPointMath.Absolute(BitConverter.UInt32BitsToSingle(0xFFC00000u));
		Assert.True(float.IsNaN(value));
		Assert.False(float.IsNegative(value));
	}

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Absolute"] = 0x0082E900,
			["SquareRoot"] = 0x0082DC9C,
		};
		MethodInfo[] methods = typeof(FloatingPointMath)
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
