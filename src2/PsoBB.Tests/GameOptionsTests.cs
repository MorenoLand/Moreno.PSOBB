using System.Buffers.Binary;
using PsoBB.Audio;
using PsoBB.Configuration;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the typed option surface against the original registry layout and its portable additions.
/// </summary>
public sealed class GameOptionsTests
{
	[Fact]
	public void EmptyStoreUsesOriginalDefaults()
	{
		GameOptions options = GameOptions.Load(new MemoryGameSettings());
		Assert.Equal("", options.LanguageCode);
		Assert.Equal(0, options.ResolutionIndex);
		Assert.Equal(640, options.Width);
		Assert.Equal(480, options.Height);
		Assert.False(options.Use32BitColor);
		Assert.False(options.Windowed);
		Assert.Equal(2, options.TextureDetail);
		Assert.True(options.ChatWordWrap);
		Assert.True(options.AudioEnabled);
		Assert.True(options.SoundEffectsEnabled);
		Assert.True(options.MusicEnabled);
		Assert.True(options.FocusSoundEnabled);
		Assert.Equal(1f, options.MusicVolume);
		Assert.Equal(1f, options.SoundVolume);
		Assert.Equal(0.1f, options.Gamepad.StickDeadZone);
		Assert.Equal(0.5f, options.Gamepad.TriggerThreshold);
		Assert.Contains(GameKey.W, options.Input.GetKeys(InputAction.MoveForward));
		Assert.Contains(GamepadButtons.A, options.Input.GetGamepadControls(InputAction.Confirm));
	}

	[Fact]
	public void RoundTripsEveryOption()
	{
		MemoryGameSettings settings = new();
		InputBindings input = new();
		input.Bind(InputAction.Confirm, GameKey.Space);
		input.Bind(InputAction.Confirm, MouseButtons.Right);
		input.Bind(InputAction.Confirm, GamepadButtons.B);
		input.Bind(InputAction.Cancel, GameKey.Escape);
		GameOptions options = new()
		{
			LanguageCode = "EU",
			ResolutionIndex = 3,
			Use32BitColor = true,
			Windowed = true,
			TextureDetail = 4,
			ChatWordWrap = false,
			SoundEffectsEnabled = false,
			MusicEnabled = false,
			FocusSoundEnabled = false,
			MusicVolume = 0.25f,
			SoundVolume = 0.75f,
			Input = input,
		};
		options.Save(settings);
		GameOptions loaded = GameOptions.Load(settings);
		Assert.Equal("EU", loaded.LanguageCode);
		Assert.Equal(3, loaded.ResolutionIndex);
		Assert.Equal(1280, loaded.Width);
		Assert.Equal(1024, loaded.Height);
		Assert.True(loaded.Use32BitColor);
		Assert.True(loaded.Windowed);
		Assert.Equal(4, loaded.TextureDetail);
		Assert.False(loaded.ChatWordWrap);
		Assert.False(loaded.SoundEffectsEnabled);
		Assert.False(loaded.MusicEnabled);
		Assert.False(loaded.FocusSoundEnabled);
		Assert.Equal(0.25f, loaded.MusicVolume);
		Assert.Equal(0.75f, loaded.SoundVolume);
		Assert.Equal([GameKey.Space], loaded.Input.GetKeys(InputAction.Confirm));
		Assert.Equal([MouseButtons.Right], loaded.Input.GetMouseButtons(InputAction.Confirm));
		Assert.Equal([GamepadButtons.B], loaded.Input.GetGamepadControls(InputAction.Confirm));
		Assert.Equal([GameKey.Escape], loaded.Input.GetKeys(InputAction.Cancel));
		Assert.True(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out int textureDetail));
		Assert.Equal(4, textureDetail);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.ControlBuffer, out byte[]? control));
		Assert.Equal(Ints(3, 1, 0), control);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.WordWrap, out int wordWrap));
		Assert.Equal(0, wordWrap);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.WindowMode, out int windowMode));
		Assert.Equal(1, windowMode);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.SoundControl, out byte[]? sound));
		Assert.Equal(Ints(1, 0, 0), sound);
		Assert.True(settings.TryGetString(LegacyOptionNames.ClientCode, out string? clientCode));
		Assert.Equal("EU", clientCode);
	}

	[Fact]
	public void ClampsDisplayPresetAndColourDepth()
	{
		MemoryGameSettings high = new();
		high.SetBinary(LegacyOptionNames.ControlBuffer, Ints(99, 9, 7));
		high.SetBinary(LegacyOptionNames.GraphicControl, new byte[LegacyOptionNames.GraphicControlLength]);
		GameOptions highOptions = GameOptions.Load(high);
		Assert.Equal(5, highOptions.ResolutionIndex);
		Assert.Equal(0, highOptions.Width);
		Assert.Equal(0, highOptions.Height);
		Assert.True(highOptions.Use32BitColor);
		MemoryGameSettings low = new();
		low.SetBinary(LegacyOptionNames.ControlBuffer, Ints(-4, -9, 0));
		low.SetBinary(LegacyOptionNames.GraphicControl, new byte[LegacyOptionNames.GraphicControlLength]);
		GameOptions lowOptions = GameOptions.Load(low);
		Assert.Equal(0, lowOptions.ResolutionIndex);
		Assert.False(lowOptions.Use32BitColor);
	}

	[Fact]
	public void ClampsTextureDetail()
	{
		MemoryGameSettings high = new();
		high.SetInt32(LegacyOptionNames.ExtraOption, 99);
		Assert.Equal(4, GameOptions.Load(high).TextureDetail);
		MemoryGameSettings negative = new();
		negative.SetInt32(LegacyOptionNames.ExtraOption, -1);
		Assert.Equal(4, GameOptions.Load(negative).TextureDetail);
		MemoryGameSettings minimum = new();
		minimum.SetInt32(LegacyOptionNames.ExtraOption, int.MinValue);
		Assert.Equal(4, GameOptions.Load(minimum).TextureDetail);
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.ExtraOption, new byte[3]);
		Assert.Equal(2, GameOptions.Load(malformed).TextureDetail);
	}

	[Fact]
	public void ReadsWordWrapAsANonZeroFlag()
	{
		MemoryGameSettings off = new();
		off.SetInt32(LegacyOptionNames.WordWrap, 0);
		Assert.False(GameOptions.Load(off).ChatWordWrap);
		MemoryGameSettings on = new();
		on.SetInt32(LegacyOptionNames.WordWrap, 1);
		Assert.True(GameOptions.Load(on).ChatWordWrap);
		MemoryGameSettings other = new();
		other.SetInt32(LegacyOptionNames.WordWrap, 2);
		Assert.True(GameOptions.Load(other).ChatWordWrap);
		MemoryGameSettings negative = new();
		negative.SetInt32(LegacyOptionNames.WordWrap, -1);
		Assert.True(GameOptions.Load(negative).ChatWordWrap);
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.WordWrap, new byte[8]);
		Assert.True(GameOptions.Load(malformed).ChatWordWrap);
	}

	[Fact]
	public void ReadsWindowModeFromAnyNonZeroValue()
	{
		MemoryGameSettings windowed = new();
		windowed.SetInt32(LegacyOptionNames.WindowMode, 2);
		Assert.True(GameOptions.Load(windowed).Windowed);
		MemoryGameSettings fullscreen = new();
		fullscreen.SetInt32(LegacyOptionNames.WindowMode, 0);
		Assert.False(GameOptions.Load(fullscreen).Windowed);
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.WindowMode, new byte[8]);
		Assert.False(GameOptions.Load(malformed).Windowed);
	}

	[Fact]
	public void ReadsSoundEnables()
	{
		MemoryGameSettings silent = new();
		silent.SetBinary(LegacyOptionNames.SoundControl, Ints(0, 0, 0));
		GameOptions silentOptions = GameOptions.Load(silent);
		Assert.False(silentOptions.MusicEnabled);
		Assert.False(silentOptions.SoundEffectsEnabled);
		MemoryGameSettings enabled = new();
		enabled.SetBinary(LegacyOptionNames.SoundControl, Ints(5, 1, 1));
		GameOptions enabledOptions = GameOptions.Load(enabled);
		Assert.True(enabledOptions.MusicEnabled);
		Assert.True(enabledOptions.SoundEffectsEnabled);
		MemoryGameSettings other = new();
		other.SetBinary(LegacyOptionNames.SoundControl, Ints(5, 2, -1));
		GameOptions otherOptions = GameOptions.Load(other);
		Assert.False(otherOptions.MusicEnabled);
		Assert.False(otherOptions.SoundEffectsEnabled);
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.SoundControl, new byte[8]);
		GameOptions malformedOptions = GameOptions.Load(malformed);
		Assert.True(malformedOptions.MusicEnabled);
		Assert.True(malformedOptions.SoundEffectsEnabled);
	}

	[Fact]
	public void ReadsFocusSound()
	{
		MemoryGameSettings off = new();
		off.SetInt32(LegacyOptionNames.FocusSound, 0);
		Assert.False(GameOptions.Load(off).FocusSoundEnabled);
		MemoryGameSettings on = new();
		on.SetInt32(LegacyOptionNames.FocusSound, 2);
		Assert.True(GameOptions.Load(on).FocusSoundEnabled);
		MemoryGameSettings negative = new();
		negative.SetInt32(LegacyOptionNames.FocusSound, -1);
		Assert.True(GameOptions.Load(negative).FocusSoundEnabled);
		MemoryGameSettings minimum = new();
		minimum.SetInt32(LegacyOptionNames.FocusSound, int.MinValue);
		Assert.True(GameOptions.Load(minimum).FocusSoundEnabled);
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.FocusSound, new byte[2]);
		Assert.True(GameOptions.Load(malformed).FocusSoundEnabled);
	}

	[Fact]
	public void ReadsClientCodeFromStringAndBinary()
	{
		MemoryGameSettings text = new();
		text.SetString(LegacyOptionNames.ClientCode, "JP");
		Assert.Equal("JP", GameOptions.Load(text).LanguageCode);
		MemoryGameSettings binary = new();
		binary.SetBinary(LegacyOptionNames.ClientCode, [0x55, 0x53, 0, 0x58]);
		Assert.Equal("US", GameOptions.Load(binary).LanguageCode);
		Assert.Equal("", GameOptions.Load(new MemoryGameSettings()).LanguageCode);
	}

	[Fact]
	public void MalformedDisplayBlocksFallBackToDefaults()
	{
		MemoryGameSettings controlOnly = new();
		controlOnly.SetBinary(LegacyOptionNames.ControlBuffer, Ints(2, 1, 0));
		controlOnly.SetBinary(LegacyOptionNames.GraphicControl, new byte[8]);
		GameOptions controlOptions = GameOptions.Load(controlOnly);
		Assert.Equal(0, controlOptions.ResolutionIndex);
		Assert.False(controlOptions.Use32BitColor);
		MemoryGameSettings graphicOnly = new();
		graphicOnly.SetBinary(LegacyOptionNames.ControlBuffer, new byte[8]);
		graphicOnly.SetBinary(LegacyOptionNames.GraphicControl, new byte[LegacyOptionNames.GraphicControlLength]);
		GameOptions graphicOptions = GameOptions.Load(graphicOnly);
		Assert.Equal(0, graphicOptions.ResolutionIndex);
		Assert.False(graphicOptions.Use32BitColor);
	}

	[Fact]
	public void ReadsFourByteBinaryScalarsAsWellAsDwords()
	{
		MemoryGameSettings settings = new();
		settings.SetBinary(LegacyOptionNames.ExtraOption, Ints(3));
		settings.SetBinary(LegacyOptionNames.WordWrap, Ints(0));
		settings.SetBinary(LegacyOptionNames.WindowMode, Ints(1));
		settings.SetBinary(LegacyOptionNames.FocusSound, Ints(0));
		GameOptions options = GameOptions.Load(settings);
		Assert.Equal(3, options.TextureDetail);
		Assert.False(options.ChatWordWrap);
		Assert.True(options.Windowed);
		Assert.False(options.FocusSoundEnabled);
	}

	[Fact]
	public void SavesCanonicalBlocksWhenMissing()
	{
		MemoryGameSettings settings = new();
		new GameOptions().Save(settings);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.ControlBuffer, out byte[]? control));
		Assert.Equal(Ints(0, 0, 0), control);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.GraphicControl, out byte[]? graphic));
		Assert.Equal(Ints(0, 0, 0, 0, 0, 2, 0, 0, 0), graphic);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.SoundControl, out byte[]? sound));
		Assert.Equal(Ints(1, 1, 1), sound);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.ExtraOption, out int textureDetail));
		Assert.Equal(2, textureDetail);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.WordWrap, out int wordWrap));
		Assert.Equal(1, wordWrap);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.WindowMode, out int windowMode));
		Assert.Equal(0, windowMode);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.FocusSound, out int focusSound));
		Assert.Equal(1, focusSound);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.PortableMusicVolume, out int musicVolume));
		Assert.Equal(100, musicVolume);
		Assert.True(settings.TryGetInt32(LegacyOptionNames.PortableSoundVolume, out int soundVolume));
		Assert.Equal(100, soundVolume);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.PortableKeyBindings, out byte[]? bindings));
		Assert.NotEmpty(bindings);
	}

	[Fact]
	public void PreservesUnknownRawFieldsAndValues()
	{
		MemoryGameSettings settings = new();
		settings.SetBinary(LegacyOptionNames.ControlBuffer, Ints(2, 0, 7));
		settings.SetBinary(LegacyOptionNames.GraphicControl, Ints(9, 8, 7, 6, 5, 4, 3, 2, 1));
		settings.SetString("Unknown", "keep");
		GameOptions options = GameOptions.Load(settings);
		options.ResolutionIndex = 4;
		options.Use32BitColor = true;
		options.Save(settings);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.ControlBuffer, out byte[]? control));
		Assert.Equal(Ints(4, 1, 7), control);
		Assert.True(settings.TryGetBinary(LegacyOptionNames.GraphicControl, out byte[]? graphic));
		Assert.Equal(Ints(9, 8, 7, 6, 5, 4, 3, 2, 1), graphic);
		Assert.True(settings.TryGetString("Unknown", out string? unknown));
		Assert.Equal("keep", unknown);
	}

	[Fact]
	public void ClampsPortableVolumes()
	{
		MemoryGameSettings high = new();
		high.SetInt32(LegacyOptionNames.PortableMusicVolume, 150);
		high.SetInt32(LegacyOptionNames.PortableSoundVolume, -10);
		GameOptions options = GameOptions.Load(high);
		Assert.Equal(1f, options.MusicVolume);
		Assert.Equal(0f, options.SoundVolume);
		MemoryGameSettings wrongType = new();
		wrongType.SetString(LegacyOptionNames.PortableMusicVolume, "loud");
		Assert.Equal(1f, GameOptions.Load(wrongType).MusicVolume);
	}

	[Fact]
	public void RoundTripsPortableBindingsAndRejectsMalformedValues()
	{
		MemoryGameSettings settings = new();
		InputBindings input = new();
		input.Bind(InputAction.MoveForward, GameKey.Up);
		input.Bind(InputAction.MoveForward, GamepadButtons.DPadUp);
		input.Bind(InputAction.Confirm, GamepadButtons.RightTrigger);
		input.Bind(InputAction.Menu, MouseButtons.Middle);
		GameOptions options = new() { Input = input };
		options.Save(settings);
		GameOptions loaded = GameOptions.Load(settings);
		Assert.Equal([GameKey.Up], loaded.Input.GetKeys(InputAction.MoveForward));
		Assert.Equal([GamepadButtons.DPadUp], loaded.Input.GetGamepadControls(InputAction.MoveForward));
		Assert.Equal([GamepadButtons.RightTrigger], loaded.Input.GetGamepadControls(InputAction.Confirm));
		Assert.Equal([MouseButtons.Middle], loaded.Input.GetMouseButtons(InputAction.Menu));
		MemoryGameSettings malformed = new();
		malformed.SetBinary(LegacyOptionNames.PortableKeyBindings, [1, 99]);
		GameOptions fallback = GameOptions.Load(malformed);
		Assert.Contains(GameKey.W, fallback.Input.GetKeys(InputAction.MoveForward));
		MemoryGameSettings wrongType = new();
		wrongType.SetString(LegacyOptionNames.PortableKeyBindings, "bindings");
		Assert.Contains(GameKey.W, GameOptions.Load(wrongType).Input.GetKeys(InputAction.MoveForward));
	}

	[Fact]
	public void AppliesAudioEnablesAndGains()
	{
		AudioMixer mixer = new();
		GameOptions options = new() { MusicEnabled = true, MusicVolume = 0.4f, SoundEffectsEnabled = false, SoundVolume = 0.8f };
		options.ApplyAudio(mixer);
		Assert.Equal(0.4f, mixer.MusicVolume);
		Assert.Equal(0f, mixer.SoundVolume);
		options.MusicEnabled = false;
		options.SoundEffectsEnabled = true;
		options.ApplyAudio(mixer);
		Assert.Equal(0f, mixer.MusicVolume);
		Assert.Equal(0.8f, mixer.SoundVolume);
	}

	[Fact]
	public void CreatesInputManagerWithLoadedControls()
	{
		InputBindings input = new();
		input.Bind(InputAction.Confirm, GameKey.Space);
		GameOptions options = new()
		{
			Input = input,
			Gamepad = new GamepadSettings(0.2f, 0.3f),
		};
		MemoryGameInput source = new();
		InputManager manager = options.CreateInputManager(source);
		Assert.Same(input, manager.Bindings);
		Assert.Equal(0.2f, manager.Gamepad.Settings.StickDeadZone);
		Assert.Equal(0.3f, manager.Gamepad.Settings.TriggerThreshold);
	}

	private static byte[] Ints(params int[] values)
	{
		byte[] bytes = new byte[values.Length * 4];
		for (int index = 0; index < values.Length; index++)
			BinaryPrimitives.WriteInt32LittleEndian(bytes.AsSpan(index * 4, 4), values[index]);
		return bytes;
	}
}
