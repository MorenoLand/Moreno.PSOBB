using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported 16-bit turn helpers.
/// </summary>
public sealed class AngleTests
{
	[Theory]
	[InlineData(0x0000, 0x0000, 0x0000)]
	[InlineData(0x0000, 0x0001, 0x0001)]
	[InlineData(0x0001, 0x0000, 0x0001)]
	[InlineData(0x0000, 0xFFFF, 0x0001)]
	[InlineData(0xFFFF, 0x0000, 0x0001)]
	[InlineData(0x0000, 0x8000, 0x8000)]
	[InlineData(0x4000, 0xC000, 0x8000)]
	[InlineData(0x1234, 0x1234, 0x0000)]
	[InlineData(0x7FFF, 0x8000, 0x0001)]
	public void DifferenceIsTheWrappedAbsoluteTurnDistance(int left, int right, int expected)
	{
		Assert.Equal((ushort)expected, Angle.Difference((ushort)left, (ushort)right));
	}

	[Theory]
	[InlineData(0, 100, 10, 10)]
	[InlineData(0, 100, 200, 100)]
	[InlineData(100, 0, 10, 90)]
	[InlineData(0, 32768, 100, 65436)]
	[InlineData(32768, 0, 100, 32668)]
	[InlineData(0, 10, 10, 10)]
	[InlineData(0, 0, 0, 0)]
	[InlineData(0, 1, -1, 65535)]
	public void StepTowardsUsesTheShortestDirection(int current, int target, int step, int expected)
	{
		Assert.Equal((ushort)expected, Angle.StepTowards((ushort)current, (ushort)target, step));
	}

	[Theory]
	[InlineData(0, 100, 50)]
	[InlineData(100, 0, 50)]
	[InlineData(0xFFFF, 1, 0)]
	[InlineData(1, 0xFFFF, 0)]
	[InlineData(0x8000, 0, 0x4000)]
	[InlineData(0x1234, 0x1234, 0x1234)]
	public void MidpointTruncatesTheHalfStepTowardNegativeInfinity(int first, int second, int expected)
	{
		Assert.Equal((ushort)expected, Angle.Midpoint((ushort)first, (ushort)second));
	}

	[Theory]
	[InlineData(0, 100, 25)]
	[InlineData(0, 10000, 2500)]
	[InlineData(0, 12287, 3072)]
	[InlineData(0, 12288, 6144)]
	[InlineData(0, 53247, 59391)]
	[InlineData(0, 53248, 59392)]
	[InlineData(0xFFFF, 0, 0xFFFF)]
	public void SmoothedMidpointQuarterStepsBelowOneEighthTurn(int first, int second, int expected)
	{
		Assert.Equal((ushort)expected, Angle.SmoothedMidpoint((ushort)first, (ushort)second));
	}

	[Theory]
	[InlineData(0, 0, 0, 0, 0)]
	[InlineData(0, 0, 0, 10, 0)]
	[InlineData(0, 0, 10, 0, 16384)]
	[InlineData(0, 0, -10, 0, -16384)]
	[InlineData(0, 0, 0, -10, 32768)]
	public void HeadingMeasuresFromDepthTowardLateral(float originX, float originZ, float targetX, float targetZ, int expected)
	{
		Assert.Equal(expected, Angle.HeadingBetween(new Vector3(originX, 0, originZ), new Vector3(targetX, 0, targetZ)));
	}

	[Fact]
	public void HeadingOfANaNIsTheIntegerIndefiniteValue() =>
		Assert.Equal(int.MinValue, Angle.HeadingBetween(new Vector3(float.NaN, 0, 0), new Vector3(1, 0, 1)));

	[Fact]
	public void MembersDeclareTheirOriginalAddresses()
	{
		Dictionary<string, int> expected = new()
		{
			["Difference"] = 0x007A9018,
			["StepTowards"] = 0x007A8C74,
			["Midpoint"] = 0x007A8CB8,
			["SmoothedMidpoint"] = 0x007A8CD0,
			["HeadingBetween"] = 0x007A90A8,
		};
		MethodInfo[] methods = typeof(Angle)
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
