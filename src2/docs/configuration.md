# Configuration

`PsoBB.Configuration.GameOptions` is the typed option surface. It reads and writes through `PsoBB.Platform.IGameSettings`, so the Windows registry store, the Linux JSON file and browser storage share one implementation.

## Original storage

The client opens `HKEY_CURRENT_USER\Software\SonicTeam\PSOV2` (`0x0082D444`) and reads a value's size (`0x0082D40C`) before reading its bytes (`0x0082D3C0`). Values are written with `0x0082D564` (string), `0x0082D5FC` (DWORD) and `0x0082D628` (binary). The key is closed at `0x0082D49C`.

| Value | Layout | Default | Rule |
| --- | --- | --- | --- |
| `CLIENT_CODE` | text | empty | Read by `0x00482490`; capped at `0x104` characters for the original buffer. |
| `CTRLBUF` | 3 x int32 | `0,0,0` | Loaded by `0x00482EAC` and decoded by `0x00482B38`. Index 0 is the resolution preset, index 1 is 16/32-bit colour and index 2 is preserved. A missing or non-12-byte value uses the defaults from `0x00482AA8`. |
| `GRAPHICCTRL` | 9 x int32 | `0,0,0,0,0,2,0,0,0` | Loaded with `CTRLBUF`. A missing or non-36-byte value uses the defaults. Fields the typed surface does not use are preserved when saving. |
| `EXT0` | DWORD | `2` | Texture detail from zero through four, written by `0x00482A80`. The original's unsigned comparison maps a negative value to four. |
| `WORD_WRAP` | DWORD | `1` | Chat word wrap; zero disables it and any other value enables it. |
| `WINDOW_MODE` | DWORD | `0` | Any non-zero value selects windowed presentation. |
| `SOUNDCTRL` | 3 x int32 | `1,1,1` | Read by `0x0048377C`; index 1 enables music and index 2 enables sound effects. A missing or non-12-byte value uses `0x00483760`. |
| `FOCUS_SOUND` | DWORD | `1` | Read by `0x004837CC`; zero disables it and any other value enables it. |

The resolution table at `0x009006F4` holds `640x480`, `800x600`, `1024x768`, `1280x1024` and `1600x1200`. The original accepts a preset index through five although the table has five entries, so index five produces a zero width and height; the port keeps that behaviour.

The trivially named getters `0x00483740` (sound effects), `0x00483748` (music), `0x00483750` (focus sound) and `0x00483758` (audio enabled) are represented by the typed properties on `GameOptions`.

## Portable additions

The original client has no persisted key-binding value, only the enables above for audio and no numeric volume. These values are additions and are written under names that cannot collide with the original ones:

| Value | Layout | Default |
| --- | --- | --- |
| `PsoBB.Input.Bindings` | versioned binary map, one block per action | `InputBindings.CreateDefault()` |
| `PsoBB.Audio.MusicVolume` | percentage 0-100 | `100` |
| `PsoBB.Audio.SoundVolume` | percentage 0-100 | `100` |

The binding map stores keyboard scan codes, single pointer buttons and single gamepad controls in action order. A malformed map falls back to the default controls. `GameOptions.ApplyAudio` applies the enables and gains to `AudioMixer`, and `GameOptions.CreateInputManager` builds the configured input manager.

Saving never removes unknown settings, and saving an existing `CTRLBUF` or `GRAPHICCTRL` value changes only the fields the typed surface owns.
