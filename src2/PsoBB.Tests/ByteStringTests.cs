using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Checks the immutable Windows-1252 byte string.
/// </summary>
public sealed class ByteStringTests
{
	[Fact]
	public void EmptyHasNoBytes()
	{
		Assert.Equal(0, ByteString.Empty.Length);
		Assert.True(ByteString.Empty.IsEmpty);
		Assert.Equal(Array.Empty<byte>(), ByteString.Empty.ToByteArray());
	}

	[Fact]
	public void DefaultReferenceIsNull()
	{
		ByteString? value = default;
		Assert.Null(value);
	}

	[Fact]
	public void FromBytesStopsBeforeTheTerminator()
	{
		ByteString value = Bytes(0x61, 0x62, 0x00, 0x63);
		Assert.Equal(2, value.Length);
		Assert.False(value.IsEmpty);
		Assert.Equal(new byte[] { 0x61, 0x62 }, value.ToByteArray());
	}

	[Fact]
	public void FromBytesWithoutATerminatorUsesTheWholeSpan()
	{
		ByteString value = Bytes(0x61, 0x62, 0xE9);
		Assert.Equal(3, value.Length);
		Assert.Equal(new byte[] { 0x61, 0x62, 0xE9 }, value.Bytes.ToArray());
	}

	[Fact]
	public void FromAByteAndDefaultSpanProducesTheEmptyString()
	{
		Assert.Same(ByteString.Empty, Bytes(0x00));
		Assert.Same(ByteString.Empty, ByteString.FromBytes(default));
		Assert.Same(ByteString.Empty, ByteString.FromBytes(ReadOnlySpan<byte>.Empty));
	}

	[Fact]
	public void FromBytesCopiesTheSource()
	{
		byte[] source = [0x61, 0x62];
		ByteString value = ByteString.FromBytes(source);
		source[0] = 0x7A;
		Assert.Equal(new byte[] { 0x61, 0x62 }, value.ToByteArray());
	}

	[Fact]
	public void FromTextReturnsNullForNull()
	{
		Assert.Null(ByteString.FromText(null));
	}

	[Fact]
	public void FromTextEncodesWindows1252()
	{
		ByteString value = Text("Café €");
		Assert.Equal(new byte[] { 0x43, 0x61, 0x66, 0xE9, 0x20, 0x80 }, value.ToByteArray());
		Assert.Equal("Café €", value.Decode());
	}

	[Fact]
	public void FromTextStopsAtAnEmbeddedTerminator()
	{
		Assert.Equal("A", Text("A\0B").Decode());
	}

	[Fact]
	public void FromTextReplacesUnmappableCharacters()
	{
		ByteString value = Text("\u2603");
		Assert.Equal(new byte[] { 0x3F }, value.ToByteArray());
	}

	[Fact]
	public void FromTextOfEmptyStringReturnsTheEmptyString()
	{
		Assert.Same(ByteString.Empty, ByteString.FromText(string.Empty));
	}

	[Fact]
	public void IndexerReturnsTheCodePageByte()
	{
		ByteString value = Bytes(0x61, 0xE9);
		Assert.Equal(0x61, value[0]);
		Assert.Equal(0xE9, value[1]);
	}

	[Fact]
	public void IndexerRejectsAnOutOfRangeIndex()
	{
		ByteString value = Bytes(0x61);
		Assert.Throws<IndexOutOfRangeException>(() => _ = value[1]);
	}

	[Fact]
	public void ToNullTerminatedByteArrayAppendsZero()
	{
		Assert.Equal(new byte[] { 0x61, 0x62, 0x00 }, Bytes(0x61, 0x62).ToNullTerminatedByteArray());
		Assert.Equal(new byte[] { 0x00 }, ByteString.Empty.ToNullTerminatedByteArray());
	}

	[Fact]
	public void ToByteArrayReturnsAnIndependentCopy()
	{
		ByteString value = Bytes(0x61, 0x62);
		byte[] copy = value.ToByteArray();
		copy[0] = 0x7A;
		Assert.Equal(0x61, value[0]);
	}

	[Fact]
	public void DecodeUsesTheWindows1252HighBytes()
	{
		Assert.Equal("€", Bytes(0x80).Decode());
		Assert.Equal("é", Bytes(0xE9).Decode());
		Assert.Equal(Bytes(0xE9).Decode(), Bytes(0xE9).ToString());
	}

	[Fact]
	public void EqualityIsOrdinal()
	{
		Assert.Equal(Bytes(0x61, 0x62), Bytes(0x61, 0x62));
		Assert.NotEqual(Bytes(0x61, 0x62), Bytes(0x61, 0x63));
		Assert.NotEqual(Bytes(0x41), Bytes(0x61));
		Assert.True(Bytes(0x61, 0x62) == Bytes(0x61, 0x62));
		Assert.False(Bytes(0x61, 0x62) == Bytes(0x61, 0x63));
	}

	[Fact]
	public void NullOperandsAreHandled()
	{
		ByteString? none = null;
		Assert.True(none == null);
		Assert.False(none == ByteString.Empty);
		Assert.True(none != ByteString.Empty);
		Assert.False(ByteString.Empty == null);
		Assert.True(ByteString.Empty != null);
		Assert.False(ByteString.Empty.Equals(null));
		Assert.False(ByteString.Empty.Equals("empty"));
		Assert.False(ByteString.Empty.EqualsIgnoreAsciiCase(null));
		Assert.False(none is not null && none.Equals(ByteString.Empty));
	}

	[Fact]
	public void CompareToUsesOrdinalOrder()
	{
		Assert.Equal(0, Bytes(0x61).CompareTo(Bytes(0x61)));
		Assert.Equal(-1, Bytes(0x61).CompareTo(Bytes(0x62)));
		Assert.Equal(1, Bytes(0x62).CompareTo(Bytes(0x61)));
		Assert.Equal(-1, Bytes(0x61).CompareTo(Bytes(0x61, 0x62)));
		Assert.Equal(1, Bytes(0x61, 0x62).CompareTo(Bytes(0x61)));
		Assert.Equal(-1, Bytes(0x61).CompareTo(Bytes(0x61, 0x62, 0x63)));
		Assert.Equal(1, Bytes(0x61, 0x62, 0x63).CompareTo(Bytes(0x61)));
		Assert.Equal(-1, Bytes(0x7F).CompareTo(Bytes(0x80)));
	}

	[Fact]
	public void CompareToNullSortsTheNullAfterTheString()
	{
		Assert.Equal(1, Bytes(0x61).CompareTo(null));
	}

	[Fact]
	public void StartsWithComparesOrdinally()
	{
		Assert.True(Bytes(0x61, 0x62).StartsWith(ByteString.Empty));
		Assert.True(Bytes(0x61, 0x62).StartsWith(Bytes(0x61, 0x62)));
		Assert.True(Bytes(0x61, 0x62, 0x63).StartsWith(Bytes(0x61, 0x62)));
		Assert.False(Bytes(0x61, 0x62).StartsWith(Bytes(0x61, 0x42)));
		Assert.False(Bytes(0x61).StartsWith(Bytes(0x61, 0x62)));
		Assert.False(Bytes(0x61, 0x62).StartsWith(Bytes(0x62)));
	}

	[Fact]
	public void StartsWithRejectsNull()
	{
		Assert.Throws<ArgumentNullException>(() => Bytes(0x61).StartsWith(null!));
	}

	[Fact]
	public void EqualsIgnoreAsciiCaseFoldsOnlyAsciiLetters()
	{
		Assert.True(Bytes(0x41, 0x62, 0x43).EqualsIgnoreAsciiCase(Bytes(0x61, 0x42, 0x63)));
		Assert.False(Bytes(0x41, 0x62, 0x43).EqualsIgnoreAsciiCase(Bytes(0x61, 0x42, 0x64)));
		Assert.False(Bytes(0x5B).EqualsIgnoreAsciiCase(Bytes(0x41)));
		Assert.True(Bytes(0x80).EqualsIgnoreAsciiCase(Bytes(0x80)));
		Assert.False(Bytes(0xE9).EqualsIgnoreAsciiCase(Bytes(0xC9)));
		Assert.True(ByteString.Empty.EqualsIgnoreAsciiCase(ByteString.Empty));
	}

	[Fact]
	public void LastIndexOfFindsTheLastByteBeforeTheTerminator()
	{
		Assert.Equal(3, Bytes(0x61, 0x62, 0x63, 0x61).LastIndexOf(0x61));
		Assert.Equal(-1, Bytes(0x61, 0x62).LastIndexOf(0x7A));
		Assert.Equal(2, Bytes(0x61, 0x62).LastIndexOf(0x00));
		Assert.Equal(0, ByteString.Empty.LastIndexOf(0x00));
		Assert.Equal(-1, ByteString.Empty.LastIndexOf(0x61));
	}

	[Fact]
	public void CountUntilAnyStopsAtTheFirstDelimiter()
	{
		Assert.Equal(1, Bytes(0x61, 0x62, 0x63).CountUntilAny(Bytes(0x62, 0x63)));
		Assert.Equal(3, Bytes(0x61, 0x62, 0x63).CountUntilAny(ByteString.Empty));
		Assert.Equal(0, Bytes(0x61, 0x62).CountUntilAny(Bytes(0x61)));
	}

	[Fact]
	public void CountUntilAnyRejectsNull()
	{
		Assert.Throws<ArgumentNullException>(() => Bytes(0x61).CountUntilAny(null!));
	}

	[Fact]
	public void FromUnsignedFormatsDecimalAndOtherRadices()
	{
		Assert.Equal("0", ByteString.FromUnsigned(0).Decode());
		Assert.Equal("4294967295", ByteString.FromUnsigned(uint.MaxValue).Decode());
		Assert.Equal("1010", ByteString.FromUnsigned(10, 2).Decode());
		Assert.Equal("deadbeef", ByteString.FromUnsigned(0xDEADBEEF, 16).Decode());
		Assert.Equal("z", ByteString.FromUnsigned(35, 36).Decode());
	}

	[Fact]
	public void FromUnsignedRejectsAnInvalidRadix()
	{
		Assert.Throws<ArgumentOutOfRangeException>(() => ByteString.FromUnsigned(0, 1));
		Assert.Throws<ArgumentOutOfRangeException>(() => ByteString.FromUnsigned(0, 37));
	}

	[Fact]
	public void FromInt32UsesTheTwosComplementMagnitude()
	{
		Assert.Equal("0", ByteString.FromInt32(0).Decode());
		Assert.Equal("-1", ByteString.FromInt32(-1).Decode());
		Assert.Equal("2147483647", ByteString.FromInt32(int.MaxValue).Decode());
		Assert.Equal("-2147483648", ByteString.FromInt32(int.MinValue).Decode());
		Assert.Equal("ffffffff", ByteString.FromInt32(-1, 16).Decode());
		Assert.Equal("80000000", ByteString.FromInt32(int.MinValue, 16).Decode());
	}

	[Fact]
	public void EqualStringsHaveEqualHashes()
	{
		Assert.Equal(Bytes(0x61, 0x62).GetHashCode(), Bytes(0x61, 0x62).GetHashCode());
		Assert.Equal(ByteString.Empty.GetHashCode(), ByteString.FromBytes(new byte[] { 0x00 }).GetHashCode());
	}

	private static ByteString Bytes(params byte[] values) => ByteString.FromBytes(values);

	private static ByteString Text(string value) => ByteString.FromText(value) ?? throw new InvalidOperationException("The test string was null.");
}
