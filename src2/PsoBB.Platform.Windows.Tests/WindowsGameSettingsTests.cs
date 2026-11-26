using Microsoft.Win32;
using PsoBB.Platform;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks stored settings against a unique registry key that is removed after each test.
/// </summary>
public sealed class WindowsGameSettingsTests
{
	[Fact]
	public void ValuesRoundTripWithCaseInsensitiveNamesAndOneType()
	{
		string keyPath = UniqueKeyPath();
		try
		{
			using WindowsGameSettings settings = new(keyPath);
			Assert.False(settings.TryGetString("Missing", out string? missingText));
			Assert.Null(missingText);
			Assert.False(settings.TryGetInt32("Missing", out int missingInteger));
			Assert.Equal(0, missingInteger);
			Assert.False(settings.TryGetBinary("Missing", out byte[]? missingBinary));
			Assert.Null(missingBinary);
			settings.SetString("PlayerName", "Humar");
			settings.SetInt32("Volume", -12);
			settings.SetBinary("Options", [1, 2, 3]);
			Assert.True(settings.TryGetString("playername", out string? playerName));
			Assert.Equal("Humar", playerName);
			Assert.True(settings.TryGetInt32("VOLUME", out int volume));
			Assert.Equal(-12, volume);
			Assert.True(settings.TryGetBinary("options", out byte[]? options));
			Assert.Equal(new byte[] { 1, 2, 3 }, options);
			Assert.False(settings.TryGetString("volume", out string? wrongText));
			Assert.Null(wrongText);
			Assert.False(settings.TryGetInt32("PlayerName", out int wrongInteger));
			Assert.Equal(0, wrongInteger);
			Assert.False(settings.TryGetBinary("PlayerName", out byte[]? wrongBinary));
			Assert.Null(wrongBinary);
			settings.SetString("PLAYERNAME", "FOnewearl");
			Assert.True(settings.TryGetString("PlayerName", out string? replaced));
			Assert.Equal("FOnewearl", replaced);
			Assert.Equal(new[] { "Options", "PlayerName", "Volume" }, settings.GetNames());
			settings.SetBinary("Empty", []);
			Assert.True(settings.TryGetBinary("empty", out byte[]? empty));
			Assert.Empty(empty);
			Assert.True(settings.Remove("VOLUME"));
			Assert.False(settings.Remove("volume"));
			Assert.Equal(new[] { "Empty", "Options", "PlayerName" }, settings.GetNames());
			settings.Dispose();
			Assert.Throws<ObjectDisposedException>(() => settings.GetNames());
		}
		finally
		{
			Registry.CurrentUser.DeleteSubKeyTree(keyPath, throwOnMissingSubKey: false);
		}
	}

	[Fact]
	public void AnotherProcessReadsTheSameValues()
	{
		string keyPath = UniqueKeyPath();
		try
		{
			using (WindowsGameSettings settings = new(keyPath))
				settings.SetInt32("Width", 1280);
			using WindowsGameSettings reopened = new(keyPath);
			Assert.True(reopened.TryGetInt32("width", out int width));
			Assert.Equal(1280, width);
			Assert.Equal(new[] { "Width" }, reopened.GetNames());
		}
		finally
		{
			Registry.CurrentUser.DeleteSubKeyTree(keyPath, throwOnMissingSubKey: false);
		}
	}

	private static string UniqueKeyPath() => $"Software\\PsoBB.Platform.Windows.Tests.{Guid.NewGuid():N}";
}
