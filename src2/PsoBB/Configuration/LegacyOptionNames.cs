namespace PsoBB.Configuration;

/// <summary>
/// The value names the original client reads from its per-user option store.
/// </summary>
/// <remarks>
/// The original opens <c>HKEY_CURRENT_USER\Software\SonicTeam\PSOV2</c> and reads typed values by name. The portable layer keeps the same names so an existing retail registry or a settings file produced by the launcher remains readable. The <c>PsoBB.</c> names are portable additions documented in <c>src2/docs/configuration.md</c>.
/// </remarks>
public static class LegacyOptionNames
{
	/// <summary>The client locale code sent during login.</summary>
	public const string ClientCode = "CLIENT_CODE";

	/// <summary>A twelve-byte display control block: resolution, colour depth and mode flag.</summary>
	public const string ControlBuffer = "CTRLBUF";

	/// <summary>A thirty-six-byte display control block holding the renderer options.</summary>
	public const string GraphicControl = "GRAPHICCTRL";

	/// <summary>The brightness level from zero through four.</summary>
	public const string ExtraOption = "EXT0";

	/// <summary>Whether chat text wraps at the window edge.</summary>
	public const string WordWrap = "WORD_WRAP";

	/// <summary>Whether the client presents in a window.</summary>
	public const string WindowMode = "WINDOW_MODE";

	/// <summary>A twelve-byte audio control block: master, music and sound-effect enables.</summary>
	public const string SoundControl = "SOUNDCTRL";

	/// <summary>Whether audio continues while the window is unfocused.</summary>
	public const string FocusSound = "FOCUS_SOUND";

	/// <summary>The portable serialized keyboard, pointer and gamepad binding map.</summary>
	public const string PortableKeyBindings = "PsoBB.Input.Bindings";

	/// <summary>The portable music gain as a percentage from zero through one hundred.</summary>
	public const string PortableMusicVolume = "PsoBB.Audio.MusicVolume";

	/// <summary>The portable sound-effect gain as a percentage from zero through one hundred.</summary>
	public const string PortableSoundVolume = "PsoBB.Audio.SoundVolume";

	internal const int ControlBufferLength = 12;

	internal const int GraphicControlLength = 36;

	internal const int SoundControlLength = 12;
}
