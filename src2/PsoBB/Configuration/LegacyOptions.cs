using System.Buffers.Binary;
using System.Text;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Configuration;

/// <summary>The display values decoded from the original option store.</summary>
internal readonly record struct LegacyDisplaySettings(int ResolutionIndex, bool Use32BitColor, bool Windowed, int TextureDetail, bool WordWrap);

/// <summary>The audio enables decoded from the original option store.</summary>
internal readonly record struct LegacySoundSettings(bool AudioEnabled, bool SoundEffectsEnabled, bool MusicEnabled);

/// <summary>The two display fields decoded from <c>CTRLBUF</c>.</summary>
internal readonly record struct LegacyGraphicControl(int ResolutionIndex, bool Use32BitColor);

/// <summary>
/// Reads and writes the original option values through the portable settings seam.
/// </summary>
/// <remarks>
/// The original opens <c>HKEY_CURRENT_USER\Software\SonicTeam\PSOV2</c> and reads the value size before reading the bytes. The portable layer keeps the same value names and byte layouts; the platform settings backends own the actual registry, JSON or browser storage.
/// </remarks>
internal static class LegacyOptions
{
	internal const int DefaultResolutionIndex = 0;
	internal const int DefaultTextureDetail = 2;
	internal const int MaxClientCodeLength = 0x104;
	[OriginalGlobal(0x009006F4)]
	private static readonly (int Width, int Height)[] Resolutions = [(640, 480), (800, 600), (1024, 768), (1280, 1024), (1600, 1200)];
	private static readonly int[] DefaultGraphicControl = [0, 0, 0, 0, 0, 2, 0, 0, 0];

	/// <summary>Gets the display resolution for a preset index.</summary>
	internal static (int Width, int Height) GetResolution(int index) => index >= 0 && index < Resolutions.Length ? Resolutions[index] : (0, 0);

	/// <summary>Returns the original's default display values.</summary>
	[Original(0x00482AA8)]
	internal static LegacyGraphicControl SetDefaultGraphicSettings() => new(DefaultResolutionIndex, false);

	/// <summary>Decodes the two display fields from the raw control blocks.</summary>
	/// <param name="control">The three-dword <c>CTRLBUF</c> value.</param>
	/// <param name="graphic">The nine-dword <c>GRAPHICCTRL</c> value; the port preserves it but the typed surface only uses the control buffer.</param>
	[Original(0x00482B38)]
	internal static LegacyGraphicControl DecodeGraphicControl(ReadOnlySpan<int> control, ReadOnlySpan<int> graphic)
	{
		_ = graphic;
		return new(Math.Clamp(control[0], 0, 5), Math.Clamp(control[1], 0, 1) == 1);
	}

	/// <summary>Reads the display options, falling back to the original defaults when a block is missing or malformed.</summary>
	[Original(0x00482EAC)]
	internal static LegacyDisplaySettings ReadDisplaySettings(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		LegacyGraphicControl graphic = SetDefaultGraphicSettings();
		if (TryReadControlBuffer(settings, out int[] control) && TryReadGraphicControl(settings, out int[] graphicControl))
			graphic = DecodeGraphicControl(control, graphicControl);
		int textureDetail = ReadTextureDetail(settings);
		bool wordWrap = ReadWordWrap(settings);
		bool windowed = ReadWindowMode(settings);
		return new(graphic.ResolutionIndex, graphic.Use32BitColor, windowed, textureDetail, wordWrap);
	}

	/// <summary>Writes the display options while preserving the unknown fields of an existing block.</summary>
	internal static void SaveDisplaySettings(IGameSettings settings, int resolutionIndex, bool use32BitColor, bool windowed, int textureDetail, bool wordWrap)
	{
		int[] control = TryReadControlBuffer(settings, out int[] existing) ? existing : [0, 0, 0];
		control[0] = Math.Clamp(resolutionIndex, 0, 5);
		control[1] = use32BitColor ? 1 : 0;
		WriteBytes(settings, LegacyOptionNames.ControlBuffer, ToBytes(control));
		if (!TryReadGraphicControl(settings, out _))
			WriteBytes(settings, LegacyOptionNames.GraphicControl, ToBytes(DefaultGraphicControl));
		SaveTextureDetail(settings, textureDetail);
		WriteInt32(settings, LegacyOptionNames.WordWrap, wordWrap ? 1 : 0);
		WriteInt32(settings, LegacyOptionNames.WindowMode, windowed ? 1 : 0);
	}

	/// <summary>Reads the texture detail index; the original's unsigned clamp maps a negative value to four.</summary>
	internal static int ReadTextureDetail(IGameSettings settings) => TryReadInt32(settings, LegacyOptionNames.ExtraOption, out int value) ? value is < 0 or > 4 ? 4 : value : DefaultTextureDetail;

	/// <summary>Writes the texture detail index using the original <c>EXT0</c> value.</summary>
	[Original(0x00482A80)]
	internal static void SaveTextureDetail(IGameSettings settings, int textureDetail) => WriteInt32(settings, LegacyOptionNames.ExtraOption, Math.Clamp(textureDetail, 0, 4));

	/// <summary>Reads the chat word-wrap flag; zero disables it and every other value enables it.</summary>
	internal static bool ReadWordWrap(IGameSettings settings) => !TryReadInt32(settings, LegacyOptionNames.WordWrap, out int value) || value != 0;

	/// <summary>Reads the windowed flag; any non-zero value selects windowed presentation.</summary>
	internal static bool ReadWindowMode(IGameSettings settings) => TryReadInt32(settings, LegacyOptionNames.WindowMode, out int value) && value != 0;

	/// <summary>Reads the audio enables; a missing or malformed block leaves every channel enabled.</summary>
	[Original(0x0048377C)]
	internal static LegacySoundSettings ReadSoundSettings(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (!TryReadSoundControl(settings, out int[] values))
			return SetDefaultSoundSettings();
		return new(true, values[2] == 1, values[1] == 1);
	}

	/// <summary>Reads the focus-sound flag; zero disables it and every other value enables it.</summary>
	[Original(0x004837CC)]
	internal static bool ReadFocusSoundSetting(IGameSettings settings) => !TryReadInt32(settings, LegacyOptionNames.FocusSound, out int value) || value != 0;

	/// <summary>Returns the original's default audio enables.</summary>
	[Original(0x00483760)]
	internal static LegacySoundSettings SetDefaultSoundSettings() => new(true, true, true);

	/// <summary>Writes the audio enables while preserving the unused master field.</summary>
	internal static void SaveSoundSettings(IGameSettings settings, bool soundEffectsEnabled, bool musicEnabled, bool focusSoundEnabled)
	{
		int[] values = TryReadSoundControl(settings, out int[] existing) ? existing : [1, 1, 1];
		values[0] = 1;
		values[1] = musicEnabled ? 1 : 0;
		values[2] = soundEffectsEnabled ? 1 : 0;
		WriteBytes(settings, LegacyOptionNames.SoundControl, ToBytes(values));
		WriteInt32(settings, LegacyOptionNames.FocusSound, focusSoundEnabled ? 1 : 0);
	}

	/// <summary>Reads the original <c>CLIENT_CODE</c> text.</summary>
	internal static string ReadClientCode(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (settings.TryGetString(LegacyOptionNames.ClientCode, out string? text))
			return Truncate(text);
		if (TryReadBytes(settings, LegacyOptionNames.ClientCode, out byte[] bytes))
			return DecodeAscii(bytes);
		return "";
	}

	/// <summary>Writes the original <c>CLIENT_CODE</c> text.</summary>
	internal static void SaveClientCode(IGameSettings settings, string languageCode) => WriteString(settings, LegacyOptionNames.ClientCode, Truncate(languageCode ?? ""));

	/// <summary>Reads a portable gain percentage, defaulting to full volume.</summary>
	internal static float ReadPortableVolume(IGameSettings settings, string name) => TryReadInt32(settings, name, out int value) ? Math.Clamp(value, 0, 100) / 100f : 1f;

	/// <summary>Writes a portable gain percentage.</summary>
	internal static void SavePortableVolume(IGameSettings settings, string name, float volume)
	{
		float clamped = Math.Clamp(volume, 0f, 1f);
		WriteInt32(settings, name, Math.Clamp((int)MathF.Round(clamped * 100f, MidpointRounding.AwayFromZero), 0, 100));
	}

	/// <summary>Reads the portable binding map, falling back to the default controls when it is absent or malformed.</summary>
	internal static InputBindings ReadInputBindings(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (TryReadBytes(settings, LegacyOptionNames.PortableKeyBindings, out byte[] bytes) && InputBindingSerializer.TryRead(bytes, out InputBindings? bindings))
			return bindings;
		return InputBindings.CreateDefault();
	}

	/// <summary>Writes the portable binding map.</summary>
	internal static void SaveInputBindings(IGameSettings settings, InputBindings bindings) => WriteBytes(settings, LegacyOptionNames.PortableKeyBindings, InputBindingSerializer.Write(bindings));

	/// <summary>Gets the stored size of a value, or zero when it is absent.</summary>
	[Original(0x0082D40C)]
	internal static int GetValueLength(IGameSettings settings, string name)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (settings.TryGetBinary(name, out byte[]? bytes))
			return bytes.Length;
		if (settings.TryGetInt32(name, out _))
			return 4;
		if (settings.TryGetString(name, out string? text))
			return text.Length;
		return 0;
	}

	/// <summary>Reads a binary value after the original's size probe.</summary>
	[Original(0x0082D3C0)]
	internal static bool TryReadBytes(IGameSettings settings, string name, out byte[] value)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (GetValueLength(settings, name) == 0 || !settings.TryGetBinary(name, out byte[]? bytes))
		{
			value = [];
			return false;
		}
		value = bytes;
		return true;
	}

	/// <summary>Reads a four-byte value stored either as binary data or as a DWORD.</summary>
	internal static bool TryReadInt32(IGameSettings settings, string name, out int value)
	{
		ArgumentNullException.ThrowIfNull(settings);
		if (settings.TryGetBinary(name, out byte[]? bytes) && bytes.Length == 4)
		{
			value = BinaryPrimitives.ReadInt32LittleEndian(bytes);
			return true;
		}
		return settings.TryGetInt32(name, out value);
	}

	/// <summary>Writes a string value.</summary>
	[Original(0x0082D564)]
	internal static void WriteString(IGameSettings settings, string name, string value)
	{
		ArgumentNullException.ThrowIfNull(settings);
		ArgumentNullException.ThrowIfNull(value);
		settings.SetString(name, value);
	}

	/// <summary>Writes a four-byte integer value.</summary>
	[Original(0x0082D5FC)]
	internal static void WriteInt32(IGameSettings settings, string name, int value)
	{
		ArgumentNullException.ThrowIfNull(settings);
		settings.SetInt32(name, value);
	}

	/// <summary>Writes a binary value.</summary>
	[Original(0x0082D628)]
	internal static void WriteBytes(IGameSettings settings, string name, ReadOnlySpan<byte> value)
	{
		ArgumentNullException.ThrowIfNull(settings);
		settings.SetBinary(name, value);
	}

	internal static bool TryReadControlBuffer(IGameSettings settings, out int[] value) => TryReadInt32Block(settings, LegacyOptionNames.ControlBuffer, LegacyOptionNames.ControlBufferLength, out value);

	internal static bool TryReadGraphicControl(IGameSettings settings, out int[] value) => TryReadInt32Block(settings, LegacyOptionNames.GraphicControl, LegacyOptionNames.GraphicControlLength, out value);

	internal static bool TryReadSoundControl(IGameSettings settings, out int[] value) => TryReadInt32Block(settings, LegacyOptionNames.SoundControl, LegacyOptionNames.SoundControlLength, out value);

	private static bool TryReadInt32Block(IGameSettings settings, string name, int length, out int[] value)
	{
		if (!TryReadBytes(settings, name, out byte[] bytes) || bytes.Length != length)
		{
			value = [];
			return false;
		}
		value = new int[bytes.Length / 4];
		for (int index = 0; index < value.Length; index++)
			value[index] = BinaryPrimitives.ReadInt32LittleEndian(bytes.AsSpan(index * 4, 4));
		return true;
	}

	private static byte[] ToBytes(ReadOnlySpan<int> values)
	{
		byte[] bytes = new byte[values.Length * 4];
		for (int index = 0; index < values.Length; index++)
			BinaryPrimitives.WriteInt32LittleEndian(bytes.AsSpan(index * 4, 4), values[index]);
		return bytes;
	}

	private static string Truncate(string text) => text.Length <= MaxClientCodeLength ? text : text[..MaxClientCodeLength];

	private static string DecodeAscii(ReadOnlySpan<byte> bytes)
	{
		int length = bytes.IndexOf((byte)0);
		if (length < 0)
			length = bytes.Length;
		return Encoding.ASCII.GetString(bytes[..Math.Min(length, MaxClientCodeLength)]);
	}
}
