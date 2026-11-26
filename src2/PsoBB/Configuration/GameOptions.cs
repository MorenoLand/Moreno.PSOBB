using PsoBB.Audio;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Configuration;

/// <summary>
/// The client's typed option surface, loaded from the platform settings store.
/// </summary>
/// <remarks>
/// The original keeps display, audio and locale values under <c>HKEY_CURRENT_USER\Software\SonicTeam\PSOV2</c>. This class reads the original names and byte layouts through <see cref="IGameSettings"/> and adds portable music, sound-effect and binding values documented in <c>src2/docs/configuration.md</c>. Unknown registry values are never removed.
/// </remarks>
public sealed class GameOptions
{
	private string _languageCode = "";
	private int _resolutionIndex;
	private bool _use32BitColor;
	private bool _windowed;
	private int _brightness = LegacyOptions.DefaultBrightness;
	private bool _chatWordWrap = true;
	private bool _soundEffectsEnabled = true;
	private bool _musicEnabled = true;
	private bool _focusSoundEnabled = true;
	private float _musicVolume = 1f;
	private float _soundVolume = 1f;
	private InputBindings _input = InputBindings.CreateDefault();

	/// <summary>Gets or sets the client locale code stored as <c>CLIENT_CODE</c>.</summary>
	public string LanguageCode
	{
		get => _languageCode;
		set => _languageCode = value is null ? "" : value.Length <= LegacyOptions.MaxClientCodeLength ? value : value[..LegacyOptions.MaxClientCodeLength];
	}

	/// <summary>Gets or sets the display preset from zero through five.</summary>
	/// <remarks>The original clamp accepts five while its resolution table holds five entries; preset five therefore reports a zero width and height.</remarks>
	public int ResolutionIndex
	{
		get => _resolutionIndex;
		set => _resolutionIndex = Math.Clamp(value, 0, 5);
	}

	/// <summary>Gets the display width in pixels for <see cref="ResolutionIndex"/>.</summary>
	public int Width => LegacyOptions.GetResolution(ResolutionIndex).Width;

	/// <summary>Gets the display height in pixels for <see cref="ResolutionIndex"/>.</summary>
	public int Height => LegacyOptions.GetResolution(ResolutionIndex).Height;

	/// <summary>Gets or sets whether the display uses 32-bit colour instead of 16-bit colour.</summary>
	public bool Use32BitColor { get => _use32BitColor; set => _use32BitColor = value; }

	/// <summary>Gets or sets whether the client presents in a window, stored as <c>WINDOW_MODE</c>.</summary>
	public bool Windowed { get => _windowed; set => _windowed = value; }

	/// <summary>Gets or sets the brightness level from zero through four, stored as <c>EXT0</c>.</summary>
	/// <remarks>The original labels level zero <c>+2 level</c>, level two <c>Normal</c> and level four <c>-2 level</c>; the renderer applies the matching gamma offset.</remarks>
	public int Brightness
	{
		[Original(0x00482A38)]
		get => _brightness;
		[Original(0x00482A60)]
		set => _brightness = Math.Clamp(value, 0, 4);
	}

	/// <summary>Gets or sets whether chat text wraps at the window edge, stored as <c>WORD_WRAP</c>.</summary>
	public bool ChatWordWrap { get => _chatWordWrap; set => _chatWordWrap = value; }

	/// <summary>Gets whether audio output is enabled; a valid sound block and the defaults both set it.</summary>
	[Original(0x00483758)]
	public bool AudioEnabled { get; private set; } = true;

	/// <summary>Gets or sets whether sound effects play.</summary>
	public bool SoundEffectsEnabled { get => _soundEffectsEnabled; set => _soundEffectsEnabled = value; }

	/// <summary>Gets or sets whether music plays.</summary>
	public bool MusicEnabled { get => _musicEnabled; set => _musicEnabled = value; }

	/// <summary>Gets or sets whether audio continues while the window is unfocused.</summary>
	public bool FocusSoundEnabled { get => _focusSoundEnabled; set => _focusSoundEnabled = value; }

	/// <summary>Gets or sets the music gain from silence through full volume.</summary>
	/// <remarks>The original client only enables or disables music; the gain is a portable addition stored as a percentage.</remarks>
	public float MusicVolume
	{
		get => _musicVolume;
		set => _musicVolume = float.IsNaN(value) ? 1f : Math.Clamp(value, 0f, 1f);
	}

	/// <summary>Gets or sets the sound-effect gain from silence through full volume.</summary>
	/// <remarks>The original client only enables or disables sound effects; the gain is a portable addition stored as a percentage.</remarks>
	public float SoundVolume
	{
		get => _soundVolume;
		set => _soundVolume = float.IsNaN(value) ? 1f : Math.Clamp(value, 0f, 1f);
	}

	/// <summary>Gets or sets the keyboard, pointer and gamepad binding map.</summary>
	/// <remarks>The original client has a fixed control map; the persisted map is a portable addition.</remarks>
	public InputBindings Input
	{
		get => _input;
		set => _input = value ?? throw new ArgumentNullException(nameof(Input));
	}

	/// <summary>Gets or sets the gamepad dead zone and trigger threshold.</summary>
	public GamepadSettings Gamepad { get; set; } = GamepadSettings.Default;

	/// <summary>Loads the options from a settings store.</summary>
	/// <param name="settings">The persisted values.</param>
	/// <returns>The loaded options; missing or malformed values use the original defaults.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="settings"/> is null.</exception>
	public static GameOptions Load(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		LegacyDisplaySettings display = LegacyOptions.ReadDisplaySettings(settings);
		LegacySoundSettings sound = LegacyOptions.ReadSoundSettings(settings);
		bool focusSoundEnabled = LegacyOptions.ReadFocusSoundSetting(settings);
		string languageCode = LegacyOptions.ReadClientCode(settings);
		float musicVolume = LegacyOptions.ReadPortableVolume(settings, LegacyOptionNames.PortableMusicVolume);
		float soundVolume = LegacyOptions.ReadPortableVolume(settings, LegacyOptionNames.PortableSoundVolume);
		InputBindings input = LegacyOptions.ReadInputBindings(settings);
		return new GameOptions
		{
			LanguageCode = languageCode,
			ResolutionIndex = display.ResolutionIndex,
			Use32BitColor = display.Use32BitColor,
			Windowed = display.Windowed,
			Brightness = display.Brightness,
			ChatWordWrap = display.WordWrap,
			AudioEnabled = sound.AudioEnabled,
			SoundEffectsEnabled = sound.SoundEffectsEnabled,
			MusicEnabled = sound.MusicEnabled,
			FocusSoundEnabled = focusSoundEnabled,
			MusicVolume = musicVolume,
			SoundVolume = soundVolume,
			Input = input,
		};
	}

	/// <summary>Writes the options to a settings store.</summary>
	/// <param name="settings">The persisted values.</param>
	/// <exception cref="ArgumentNullException"><paramref name="settings"/> is null.</exception>
	public void Save(IGameSettings settings)
	{
		ArgumentNullException.ThrowIfNull(settings);
		LegacyOptions.SaveDisplaySettings(settings, ResolutionIndex, Use32BitColor, Windowed, Brightness, ChatWordWrap);
		LegacyOptions.SaveSoundSettings(settings, SoundEffectsEnabled, MusicEnabled, FocusSoundEnabled);
		LegacyOptions.SaveClientCode(settings, LanguageCode);
		LegacyOptions.SavePortableVolume(settings, LegacyOptionNames.PortableMusicVolume, MusicVolume);
		LegacyOptions.SavePortableVolume(settings, LegacyOptionNames.PortableSoundVolume, SoundVolume);
		LegacyOptions.SaveInputBindings(settings, Input);
	}

	/// <summary>Writes the brightness level to <c>EXT0</c> without changing any other stored option.</summary>
	/// <param name="settings">The settings store that receives the value.</param>
	/// <exception cref="ArgumentNullException"><paramref name="settings"/> is null.</exception>
	public void SaveBrightness(IGameSettings settings) => LegacyOptions.SaveBrightness(settings, Brightness);

	/// <summary>Creates an input manager that uses the loaded binding map and gamepad thresholds.</summary>
	/// <param name="input">The platform input source.</param>
	/// <returns>The configured input manager.</returns>
	public InputManager CreateInputManager(IGameInput input) => new(input, Input, Gamepad);

	/// <summary>Applies the music and sound-effect enables and gains to a mixer.</summary>
	/// <param name="mixer">The mixer to configure.</param>
	/// <exception cref="ArgumentNullException"><paramref name="mixer"/> is null.</exception>
	public void ApplyAudio(AudioMixer mixer)
	{
		ArgumentNullException.ThrowIfNull(mixer);
		mixer.MusicVolume = MusicEnabled ? MusicVolume : 0f;
		mixer.SoundVolume = SoundEffectsEnabled ? SoundVolume : 0f;
	}
}
