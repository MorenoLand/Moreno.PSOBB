using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the unsigned integer formatter.
/// </summary>
public sealed class CrtIntegerTests
{
	[Fact]
	public void WritesZeroWithATerminator()
	{
		byte[] buffer = Filled(4);
		CrtInteger.WriteUnsigned(0, 10, false, buffer);
		Assert.Equal(new byte[] { 0x30, 0x00, 0xAA, 0xAA }, buffer);
	}

	[Fact]
	public void WritesZeroWithASignWhenNegative()
	{
		byte[] buffer = Filled(4);
		CrtInteger.WriteUnsigned(0, 10, true, buffer);
		Assert.Equal(new byte[] { 0x2D, 0x30, 0x00, 0xAA }, buffer);
	}

	[Fact]
	public void WritesPositiveAndNegativeValues()
	{
		byte[] positive = Filled(8);
		CrtInteger.WriteUnsigned(123, 10, false, positive);
		Assert.Equal(new byte[] { 0x31, 0x32, 0x33, 0x00, 0xAA, 0xAA, 0xAA, 0xAA }, positive);

		byte[] negative = Filled(8);
		CrtInteger.WriteUnsigned(0xFFFFFFFFu, 10, true, negative);
		Assert.Equal(new byte[] { 0x2D, 0x31, 0x00, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA }, negative);
	}

	[Fact]
	public void NegatesTheValueBeforeFormatting()
	{
		byte[] buffer = Filled(4);
		CrtInteger.WriteUnsigned(0xFFFFFFFFu, 10, true, buffer);
		Assert.Equal(new byte[] { 0x2D, 0x31, 0x00, 0xAA }, buffer);
	}

	[Fact]
	public void WritesTheLargestUnsignedValue()
	{
		byte[] buffer = Filled(12);
		CrtInteger.WriteUnsigned(uint.MaxValue, 10, false, buffer);
		Assert.Equal(new byte[] { 0x34, 0x32, 0x39, 0x34, 0x39, 0x36, 0x37, 0x32, 0x39, 0x35, 0x00, 0xAA }, buffer);
	}

	[Fact]
	public void WritesBinaryDigits()
	{
		byte[] buffer = Filled(6);
		CrtInteger.WriteUnsigned(10, 2, false, buffer);
		Assert.Equal(new byte[] { 0x31, 0x30, 0x31, 0x30, 0x00, 0xAA }, buffer);
	}

	[Fact]
	public void WritesLowercaseHexadecimalDigits()
	{
		byte[] buffer = Filled(10);
		CrtInteger.WriteUnsigned(0xDEADBEEFu, 16, false, buffer);
		Assert.Equal(new byte[] { 0x64, 0x65, 0x61, 0x64, 0x62, 0x65, 0x65, 0x66, 0x00, 0xAA }, buffer);
	}

	[Fact]
	public void WritesRadixThirtySixDigits()
	{
		byte[] digitA = Filled(4);
		CrtInteger.WriteUnsigned(10, 36, false, digitA);
		Assert.Equal(new byte[] { 0x61, 0x00, 0xAA, 0xAA }, digitA);

		byte[] digitZ = Filled(4);
		CrtInteger.WriteUnsigned(35, 36, false, digitZ);
		Assert.Equal(new byte[] { 0x7A, 0x00, 0xAA, 0xAA }, digitZ);
	}

	[Fact]
	public void WritesTheFullBinaryWidthOfAnUnsignedValue()
	{
		byte[] buffer = Filled(34);
		CrtInteger.WriteUnsigned(uint.MaxValue, 2, false, buffer);
		Assert.Equal(32, buffer.Count(value => value == 0x31));
		Assert.Equal(0x00, buffer[32]);
		Assert.Equal(0xAA, buffer[33]);
	}

	[Fact]
	public void AcceptsAnExactlySizedDestination()
	{
		byte[] buffer = new byte[2];
		CrtInteger.WriteUnsigned(7, 10, false, buffer);
		Assert.Equal(new byte[] { 0x37, 0x00 }, buffer);

		byte[] signed = new byte[3];
		CrtInteger.WriteUnsigned(0xFFFFFFFFu, 10, true, signed);
		Assert.Equal(new byte[] { 0x2D, 0x31, 0x00 }, signed);
	}

	[Fact]
	public void RejectsAnUndersizedDestination()
	{
		Assert.Throws<ArgumentException>(() => CrtInteger.WriteUnsigned(10, 10, false, new byte[2]));
		Assert.Throws<ArgumentException>(() => CrtInteger.WriteUnsigned(0, 10, false, new byte[1]));
		Assert.Throws<ArgumentException>(() => CrtInteger.WriteUnsigned(0, 10, true, new byte[2]));
	}

	[Fact]
	public void RejectsRadicesOutsideThirtySix()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => CrtInteger.WriteUnsigned(0, 0, false, new byte[40]));
		Assert.Throws<ArgumentOutOfRangeException>(() => CrtInteger.WriteUnsigned(0, 1, false, new byte[40]));
		Assert.Throws<ArgumentOutOfRangeException>(() => CrtInteger.WriteUnsigned(0, 37, false, new byte[40]));
	}

	private static byte[] Filled(int length)
	{
		byte[] buffer = new byte[length];
		Array.Fill(buffer, (byte)0xAA);
		return buffer;
	}
}
