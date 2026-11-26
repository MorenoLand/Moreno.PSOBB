using System.Reflection;
using PsoBB.Mathematics;

namespace PsoBB.Tests;

/// <summary>
/// Checks the ported 16-bit turn difference.
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

	[Fact]
	public void DifferenceDeclaresItsOriginalAddress()
	{
		MethodInfo method = typeof(Angle).GetMethod(nameof(Angle.Difference))!;
		OriginalAttribute attribute = Assert.IsType<OriginalAttribute>(method.GetCustomAttribute<OriginalAttribute>());
		Assert.Equal(0x007A9018, attribute.Address);
	}
}
