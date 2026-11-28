using PsoBB.Platform;

namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Checks the typed settings file, its case rules and its reload behaviour.
/// </summary>
public sealed class LinuxGameSettingsTests
{
	[Fact]
	public void MissingValuesReturnFalse()
	{
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
		Assert.False(settings.TryGetString("missing", out string? text));
		Assert.Null(text);
		Assert.False(settings.TryGetInt32("missing", out int number));
		Assert.Equal(0, number);
		Assert.False(settings.TryGetBinary("missing", out byte[]? bytes));
		Assert.Null(bytes);
		Assert.Empty(settings.GetNames());
		Assert.Equal(System.IO.Path.Combine(directory.Path, LinuxGameSettings.FileName), settings.FilePath);
	}

	[Fact]
	public void StringsRoundTripAndIgnoreCase()
	{
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
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
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
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
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
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
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
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
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
		settings.SetInt32("a", 1);
		settings.SetInt32("b", 2);
		Assert.True(settings.Remove("A"));
		Assert.False(settings.Remove("a"));
		Assert.Equal(["b"], settings.GetNames());
	}

	[Fact]
	public void NamesAreSortedAndReturnedAsASnapshot()
	{
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
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
	public void ValuesPersistToTheProvidedFolder()
	{
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
		settings.SetString("name", "Rico");
		settings.SetInt32("width", 1280);
		settings.SetBinary("blob", [1, 2, 3]);
		Assert.True(File.Exists(settings.FilePath));
		LinuxGameSettings reloaded = new(directory.Path);
		Assert.True(reloaded.TryGetString("NAME", out string? name));
		Assert.Equal("Rico", name);
		Assert.True(reloaded.TryGetInt32("width", out int width));
		Assert.Equal(1280, width);
		Assert.True(reloaded.TryGetBinary("blob", out byte[]? blob));
		Assert.Equal([1, 2, 3], blob);
	}

	[Fact]
	public void TheFirstWriteCreatesAMissingFolder()
	{
		using TestDirectory directory = TestDirectory.Create();
		string folder = System.IO.Path.Combine(directory.Path, "nested", "settings");
		LinuxGameSettings settings = new(folder);
		Assert.False(Directory.Exists(folder));
		settings.SetInt32("option", 5);
		Assert.True(Directory.Exists(folder));
		Assert.True(File.Exists(settings.FilePath));
		LinuxGameSettings reloaded = new(folder);
		Assert.True(reloaded.TryGetInt32("option", out int option));
		Assert.Equal(5, option);
	}

	[Fact]
	public void MalformedFilesAreReported()
	{
		using TestDirectory directory = TestDirectory.Create();
		string path = System.IO.Path.Combine(directory.Path, LinuxGameSettings.FileName);
		File.WriteAllText(path, "{");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
		File.WriteAllText(path, """{"Values":[{"Name":"a","Kind":"Integer","Integer":1},{"Name":"A","Kind":"Integer","Integer":2}]}""");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
		File.WriteAllText(path, """{"Values":[{"Name":"a","Kind":"Floating"}]}""");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
		File.WriteAllText(path, """{"Values":[{"Name":"a","Kind":"Binary","Base64":"!"}]}""");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
		File.WriteAllText(path, """{"Values":[{"Kind":"Integer","Integer":1}]}""");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
		File.WriteAllText(path, """{"Values":[{"Name":"a","Kind":"String"}]}""");
		Assert.Throws<InvalidDataException>(() => new LinuxGameSettings(directory.Path));
	}

	[Fact]
	public void InvalidNamesAndNullTextAreRejected()
	{
		using TestDirectory directory = TestDirectory.Create();
		LinuxGameSettings settings = new(directory.Path);
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32(null!, 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetInt32("", 1));
		Assert.ThrowsAny<ArgumentException>(() => settings.SetString(" ", "value"));
		Assert.Throws<ArgumentNullException>(() => settings.SetString("name", null!));
		Assert.ThrowsAny<ArgumentException>(() => settings.TryGetInt32("", out _));
		Assert.ThrowsAny<ArgumentException>(() => settings.Remove(""));
		Assert.ThrowsAny<ArgumentException>(() => new LinuxGameSettings(" "));
	}
}
