using Microsoft.Win32;
using PsoBB.Text;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Supplies the five font-creation records the client reads from the image and the face name it reads from the registry.
/// </summary>
/// <remarks>
/// Each record is 216 bytes at image address 0xA21CE0: six dwords, a 96-byte face buffer, the ANSI value name and the wide value name.
/// </remarks>
public static class GdiFontFaces
{
	/// <summary>The registry key that holds the configured face name.</summary>
	public const string RegistryKeyPath = @"Software\SEGA\PHANTASY_STAR_ONLINE_Blue_Burst";

	/// <summary>The registry value that holds the configured face name.</summary>
	public const string FaceValueName = "FONT_JPN";

	/// <summary>
	/// Creates the five descriptors with one configured face name.
	/// </summary>
	/// <param name="faceName">The face name; an empty string asks GDI for its default face.</param>
	/// <returns>The ANSI, Shift-JIS, GB2312, Big5 and Hangul faces in image order.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="faceName"/> is null.</exception>
	public static IReadOnlyList<FontDescriptor> CreateDescriptors(string faceName)
	{
		ArgumentNullException.ThrowIfNull(faceName);
		return
		[
			new(600, 0x00, 7, 0, 4, 2, faceName),
			new(600, 0x80, 7, 0, 4, 1, faceName),
			new(600, 0x86, 7, 0, 4, 1, faceName),
			new(600, 0x88, 7, 0, 4, 1, faceName),
			new(600, 0x81, 7, 0, 4, 1, faceName),
		];
	}

	/// <summary>
	/// Creates the five-face table with one configured face name.
	/// </summary>
	/// <param name="faceName">The face name; an empty string asks GDI for its default face.</param>
	/// <returns>The five-face table.</returns>
	[Original(0x00841A10, "unknown_get_font_struct")]
	public static FontFaceTable CreateFaceTable(string faceName) => new(CreateDescriptors(faceName));

	/// <summary>
	/// Reads the configured face name, returning an empty string when the key or value is absent.
	/// </summary>
	/// <param name="keyPath">The key path beneath the current user.</param>
	/// <param name="valueName">The value name.</param>
	/// <returns>The face name, or an empty string.</returns>
	/// <exception cref="ArgumentException">A name is null or empty.</exception>
	[Original(0x0082D3C0, "unknown_read_registry_font_value")]
	public static string ReadFaceName(string keyPath = RegistryKeyPath, string valueName = FaceValueName)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(keyPath);
		ArgumentException.ThrowIfNullOrWhiteSpace(valueName);
		using RegistryKey? key = Registry.CurrentUser.OpenSubKey(keyPath, writable: false);
		object? value = key?.GetValue(valueName, null, RegistryValueOptions.DoNotExpandEnvironmentNames);
		return value as string ?? string.Empty;
	}
}
