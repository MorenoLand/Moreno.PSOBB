using PsoBB.Crt;

namespace PsoBB.Tests;

/// <summary>
/// Checks the null-terminated byte-string primitives.
/// </summary>
public sealed class CrtStringTests
{
	[Fact]
	public void CountUntilAnyStopsAtTheFirstDelimiter()
	{
		Assert.Equal(0, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x61 }));
		Assert.Equal(1, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x62 }));
		Assert.Equal(2, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x63 }));
	}

	[Fact]
	public void CountUntilAnyStopsAtTheTerminator()
	{
		Assert.Equal(0, CrtString.CountUntilAny(new byte[] { 0x00, 0x61 }, new byte[] { 0x61 }));
		Assert.Equal(1, CrtString.CountUntilAny(new byte[] { 0x61, 0x00, 0x62 }, Array.Empty<byte>()));
	}

	[Fact]
	public void CountUntilAnyUsesTheFirstRejectedByte()
	{
		Assert.Equal(1, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x63, 0x62 }));
		Assert.Equal(2, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x63, 0x63 }));
	}

	[Fact]
	public void CountUntilAnyUsesTheWholeTextWhenNoDelimiterIsPresent()
	{
		Assert.Equal(3, CrtString.CountUntilAny(new byte[] { 0x61, 0x62, 0x63 }, Array.Empty<byte>()));
		Assert.Equal(2, CrtString.CountUntilAny(new byte[] { 0x61, 0x62 }, new byte[] { 0x7A }));
	}

	[Fact]
	public void CountUntilAnyIgnoresDelimitersAfterTheSetTerminator()
	{
		Assert.Equal(2, CrtString.CountUntilAny(new byte[] { 0x61, 0x62 }, new byte[] { 0x00, 0x61 }));
	}

	[Fact]
	public void CountUntilAnyHandlesDefaultAndEmptySpans()
	{
		Assert.Equal(0, CrtString.CountUntilAny(default, new byte[] { 0x61 }));
		Assert.Equal(0, CrtString.CountUntilAny(default, default));
	}

	[Fact]
	public void CountUntilAnyUsesUnsignedBytes()
	{
		Assert.Equal(1, CrtString.CountUntilAny(new byte[] { 0x80, 0x81 }, new byte[] { 0xFF, 0x81 }));
		Assert.Equal(0, CrtString.CountUntilAny(new byte[] { 0x80 }, new byte[] { 0x80 }));
	}

	[Fact]
	public void CompareCountReturnsZeroForZeroCount()
	{
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61 }, new byte[] { 0x62 }, 0));
		Assert.Equal(0, CrtString.CompareCount(default, new byte[] { 0x62 }, 0));
	}

	[Fact]
	public void CompareCountComparesUnsignedBytesOrdinally()
	{
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x62 }, 2));
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61 }, new byte[] { 0x61 }, 2));
		Assert.Equal(0, CrtString.CompareCount(default, default, 1));
		Assert.Equal(-1, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x63 }, 2));
		Assert.Equal(1, CrtString.CompareCount(new byte[] { 0x61, 0x63 }, new byte[] { 0x61, 0x62 }, 2));
		Assert.Equal(1, CrtString.CompareCount(new byte[] { 0x80 }, new byte[] { 0x7F }, 1));
		Assert.Equal(-1, CrtString.CompareCount(new byte[] { 0x7F }, new byte[] { 0x80 }, 1));
	}

	[Fact]
	public void CompareCountStopsAtTheRequestedCount()
	{
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x63 }, 1));
		Assert.Equal(-1, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x63 }, 2));
	}

	[Fact]
	public void CompareCountTreatsAShorterStringAsTerminated()
	{
		Assert.Equal(-1, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x62, 0x63 }, 3));
		Assert.Equal(1, CrtString.CompareCount(new byte[] { 0x61, 0x62, 0x63 }, new byte[] { 0x61, 0x62 }, 3));
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61, 0x62 }, new byte[] { 0x61, 0x62, 0x63 }, 2));
		Assert.Equal(-1, CrtString.CompareCount(default, new byte[] { 0x61 }, 1));
		Assert.Equal(1, CrtString.CompareCount(new byte[] { 0x61 }, default, 1));
	}

	[Fact]
	public void CompareCountStopsAtAnEmbeddedTerminator()
	{
		Assert.Equal(0, CrtString.CompareCount(new byte[] { 0x61, 0x00, 0x62 }, new byte[] { 0x61, 0x00, 0x63 }, 3));
		Assert.Equal(-1, CrtString.CompareCount(new byte[] { 0x61, 0x00 }, new byte[] { 0x61, 0x01 }, 2));
	}

	[Fact]
	public void CompareCountRejectsNegativeCounts()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => CrtString.CompareCount(default, default, -1));
	}

	[Fact]
	public void CompareIgnoreAsciiCaseFoldsOnlyTheAsciiLetters()
	{
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x41, 0x62 }, new byte[] { 0x61, 0x42 }));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x41 }, new byte[] { 0x42 }));
		Assert.Equal(1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x42 }, new byte[] { 0x41 }));
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x5A }, new byte[] { 0x7A }));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x40 }, new byte[] { 0x41 }));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x5B }, new byte[] { 0x41 }));
		Assert.Equal(1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x7B }, new byte[] { 0x7A }));
	}

	[Fact]
	public void CompareIgnoreAsciiCaseLeavesHighBytesUnchanged()
	{
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x80 }, new byte[] { 0x80 }));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x80 }, new byte[] { 0x81 }));
		Assert.Equal(1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0xE9 }, new byte[] { 0xC9 }));
	}

	[Fact]
	public void CompareIgnoreAsciiCaseTreatsAShorterStringAsTerminated()
	{
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(default, default));
		Assert.Equal(1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x61 }, default));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(default, new byte[] { 0x61 }));
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x41, 0x62 }, new byte[] { 0x61, 0x42 }));
		Assert.Equal(-1, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x41, 0x62 }, new byte[] { 0x61, 0x43 }));
	}

	[Fact]
	public void CompareIgnoreAsciiCaseStopsAtAnEmbeddedTerminator()
	{
		Assert.Equal(0, CrtString.CompareIgnoreAsciiCase(new byte[] { 0x41, 0x00, 0x62 }, new byte[] { 0x61, 0x00, 0x63 }));
	}

	[Fact]
	public void LastIndexOfFindsTheLastMatchingByte()
	{
		Assert.Equal(2, CrtString.LastIndexOf(new byte[] { 0x61, 0x62, 0x61 }, 0x61));
		Assert.Equal(2, CrtString.LastIndexOf(new byte[] { 0x61, 0x62, 0x62 }, 0x62));
		Assert.Equal(-1, CrtString.LastIndexOf(new byte[] { 0x61, 0x62 }, 0x7A));
	}

	[Fact]
	public void LastIndexOfReturnsTheTerminatorPositionForZero()
	{
		Assert.Equal(0, CrtString.LastIndexOf(default, 0x00));
		Assert.Equal(2, CrtString.LastIndexOf(new byte[] { 0x61, 0x62 }, 0x00));
		Assert.Equal(1, CrtString.LastIndexOf(new byte[] { 0x61, 0x00, 0x62 }, 0x00));
	}

	[Fact]
	public void LastIndexOfDoesNotSearchPastTheFirstTerminator()
	{
		Assert.Equal(0, CrtString.LastIndexOf(new byte[] { 0x61, 0x00, 0x61 }, 0x61));
		Assert.Equal(-1, CrtString.LastIndexOf(new byte[] { 0x61, 0x00, 0x62 }, 0x62));
	}

	[Fact]
	public void LastIndexOfUsesUnsignedBytes()
	{
		Assert.Equal(1, CrtString.LastIndexOf(new byte[] { 0x7F, 0xFF }, 0xFF));
		Assert.Equal(-1, CrtString.LastIndexOf(new byte[] { 0x7F, 0xFF }, 0xFE));
	}
}
