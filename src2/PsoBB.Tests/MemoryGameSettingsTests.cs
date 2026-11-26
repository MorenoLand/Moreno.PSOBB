using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the typed settings store that replaces the client's registry values in tests.
/// </summary>
public sealed class MemoryGameSettingsTests
{
	[Fact]
	public void MissingValuesReturnFalse()
	{
		MemoryGameSettings settings = new();
		Assert.False(settings.TryGetString("missing", out string? text));
		Assert.Null(text);
		Assert.False(settings.TryGetInt32("missing", out int number));
		Assert.Equal(0, number);
		Assert.False(settings.TryGetBinary("missing", out byte[]? bytes));
		Assert.Null(bytes);
		Assert.Empty(settings.GetNames());
	}

	[Fact]
	public void StringsRoundTripAndIgnoreCase()
	{
		MemoryGameSettings settings = new();
		settings.SetString("PlayerName", "");
		Assert.True(settings.TryGetString("PLAYERNAME", out string? text));
		Assert.Equal("", text);
		settings.SetString("PlayerName", "Rico");
		Assert.True(settings.TryGetString("playername", out text));
		Assert.Equal("Rico", text);
	}

	[Fact]
	public void IntegersRoundTrip()
	{
		MemoryGameSettings settings = new();
		settings.SetInt32("width", int.MinValue);
		settings.SetInt32("height", int.MaxValue);
		Assert.True(settings.TryGetInt32("WIDTH", out int width));
		Assert.Equal(int.MinValue, width);
		Assert.True(settings.TryGetInt32("height", out int height));
		Assert.Equal(int.MaxValue, height);
	}

	[Fact]
	public void BinaryValuesAreCopiedBothWays()
	{
		MemoryGameSettings settings = new();
		byte[] source = [1, 2, 3];
		settings.SetBinary("blob", source);
		source[0] = 9;
		Assert.True(settings.TryGetBinary("BLOB", out byte[]? first));
		byte[] firstBytes = Assert.IsType<byte[]>(first);
		Assert.Equal([1, 2, 3], firstBytes);
		firstBytes[1] = 9;
		Assert.True(settings.TryGetBinary("blob", out byte[]? second));
		Assert.Equal([1, 2, 3], second);
	}

	[Fact]
	public void ValuesHaveExactlyOneType()
	{
		MemoryGameSettings settings = new();
		settings.SetInt32("option", 3);
		Assert.False(settings.TryGetString("option", out _));
		Assert.False(settings.TryGetBinary("option", out _));
		Assert.True(settings.TryGetInt32("option", out int number));
		Assert.Equal(3, number);
		settings.SetString("option", "three");
		Assert.False(settings.TryGetInt32("option", out _));
		Assert.True(settings.TryGetString("option", out string? text));
		Assert.Equal("three", text);
		settings.SetBinary("option", [4]);
		Assert.False(settings.TryGetString("option", out _));
		Assert.True(settings.TryGetBinary("option", out byte[]? bytes));
		Assert.Equal([4], bytes);
	}

	[Fact]
	public void RemoveDeletesOnlyTheNamedValue()
	{
		MemoryGameSettings settings = new();
		settings.SetInt32("a", 1);
		settings.SetInt32("b", 2);
		Assert.True(settings.Remove("A"));
		Assert.False(settings.Remove("a"));
		Assert.Equal(["b"], settings.GetNames());
	}

	[Fact]
	public void NamesAreSortedAndReturnedAsASnapshot()
	{
		MemoryGameSettings settings = new();
		settings.SetInt32("zeta", 1);
		settings.SetInt32("Alpha", 2);
		settings.SetInt32("middle", 3);
		IReadOnlyList<string> names = settings.GetNames();
		Assert.Equal(["Alpha", "middle", "zeta"], names);
		settings.SetInt32("beta", 4);
		Assert.Equal(["Alpha", "middle", "zeta"], names);
		Assert.Equal(["Alpha", "beta", "middle", "zeta"], settings.GetNames());
	}

	[Fact]
	public void InvalidNamesAndNullTextAreRejected()
	{
		MemoryGameSettings settings = new();
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32(null!, 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32("", 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetString(" ", "value"));
		Assert.Throws<ArgumentNullException>(() => settings.SetString("name", null!));
		Assert.ThrowsAny<ArgumentException>(() => settings.TryGetInt32("", out _));
		Assert.ThrowsAny<ArgumentException>(() => settings.Remove(""));
	}
}
