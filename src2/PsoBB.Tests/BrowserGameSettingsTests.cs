using PsoBB.Platform.Web;

namespace PsoBB.Tests;

/// <summary>
/// Checks the typed settings stored in browser storage.
/// </summary>
public sealed class BrowserGameSettingsTests
{
	[Fact]
	public void StringsRoundTripAndIgnoreCase()
	{
		FakeStorage storage = new();
		BrowserGameSettings settings = new(storage);
		settings.SetString("PlayerName", "");
		Assert.True(settings.TryGetString("PLAYERNAME", out string? text));
		Assert.Equal("", text);
		settings.SetString("PlayerName", "Rico");
		Assert.True(settings.TryGetString("playername", out text));
		Assert.Equal("Rico", text);
		Assert.NotNull(storage.Get("psobb.setting.playername"));
	}

	[Fact]
	public void TypedValuesDoNotConvert()
	{
		FakeStorage storage = new();
		BrowserGameSettings settings = new(storage);
		settings.SetInt32("option", 3);
		Assert.False(settings.TryGetString("option", out _));
		Assert.False(settings.TryGetBinary("option", out _));
		Assert.True(settings.TryGetInt32("OPTION", out int value));
		Assert.Equal(3, value);
	}

	[Fact]
	public void BinaryValuesAreCopiedBothWays()
	{
		FakeStorage storage = new();
		BrowserGameSettings settings = new(storage);
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
	public void NamesAreSortedAndIgnoreForeignOrCorruptKeys()
	{
		FakeStorage storage = new();
		storage.SetRaw("other.value", "ignored");
		storage.SetRaw("psobb.setting.corrupt", "x");
		storage.SetRaw("psobb.setting.broken", "bBroken-without-separator");
		BrowserGameSettings settings = new(storage);
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
	public void RemoveDeletesOnlyTheNamedValue()
	{
		FakeStorage storage = new();
		BrowserGameSettings settings = new(storage);
		settings.SetInt32("a", 1);
		settings.SetInt32("b", 2);
		Assert.True(settings.Remove("A"));
		Assert.False(settings.Remove("a"));
		Assert.Equal(["b"], settings.GetNames());
	}

	[Fact]
	public void CorruptBinaryReturnsFalse()
	{
		FakeStorage storage = new();
		storage.SetRaw("psobb.setting.blob", "bBlob\u001fnot-base64!");
		BrowserGameSettings settings = new(storage);
		Assert.False(settings.TryGetBinary("blob", out byte[]? value));
		Assert.Null(value);
	}

	[Fact]
	public void InvalidNamesAreRejected()
	{
		BrowserGameSettings settings = new(new FakeStorage());
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32(null!, 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32("", 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetString(" ", "value"));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32("bad\u001fname", 1));
		Assert.Throws<ArgumentNullException>(() => settings.SetString("name", null!));
		Assert.ThrowsAny<ArgumentException>(() => settings.TryGetInt32("", out _));
		Assert.ThrowsAny<ArgumentException>(() => settings.Remove(""));
	}

	private sealed class FakeStorage : IBrowserStorage
	{
		private readonly Dictionary<string, string> _values = new(StringComparer.Ordinal);

		public string? Get(string key) => _values.TryGetValue(key, out string? value) ? value : null;

		public void Set(string key, string value) => _values[key] = value;

		public void Remove(string key) => _values.Remove(key);

		public IReadOnlyList<string> GetKeys()
		{
			string[] keys = [.. _values.Keys];
			Array.Sort(keys, StringComparer.Ordinal);
			return keys;
		}

		public void SetRaw(string key, string value) => _values[key] = value;
	}
}
