# DirectSound output

Facts observed with `RECOMP_COMLOG=1` on the native host.

## Initialization

1. `DirectSoundCreate` returns `IDirectSound`.
2. `IDirectSound::SetCooperativeLevel(hwnd, DSSCL_PRIORITY)` returns `S_OK`.
3. `IDirectSound::CreateSoundBuffer` creates the primary buffer:
   - `DSBUFFERDESC.dwSize = 0x24`
   - `dwFlags = 0x11` (`DSBCAPS_PRIMARYBUFFER | DSBCAPS_CTRL3D`)
   - `dwBufferBytes = 0`
   - `lpwfxFormat = NULL`
4. `IDirectSoundBuffer::SetFormat` sets the primary buffer to
   `WAVE_FORMAT_PCM`, 2 channels, 48000 Hz, 16 bits, `nBlockAlign = 4`.
5. `QueryInterface` returns an `IDirectSound3DListener`; distance factor, rolloff,
   position, orientation and commit are called with default values.
6. `IDirectSoundBuffer::Play(0, 0, DSBPLAY_LOOPING)` starts the primary buffer.
7. A streaming buffer is created:
   - `dwFlags = 0x18188` (`DSBCAPS_LOCSOFTWARE | DSBCAPS_CTRLVOLUME |
     DSBCAPS_CTRLPOSITIONNOTIFY | DSBCAPS_GLOBALFOCUS |
     DSBCAPS_GETCURRENTPOSITION2`), no `DSBCAPS_CTRL3D`
   - `dwBufferBytes = 0xAC440`
   - `WAVE_FORMAT_PCM`, 2 channels, 44100 Hz, 16 bits, `nBlockAlign = 4`
8. The stream is filled with `Lock`/`Unlock` in `0xAC44` byte chunks, sixteen
   chunks per buffer. Returned pointers advance by `0xAC44` inside the buffer,
   so the out-parameter translation is correct.
9. The music stream comes from `data/ogg/*.ogg`; the streamer calls
   libvorbisfile `ov_read` (guest `0x873508`) with 16-bit signed
   little-endian output.

All DirectSound calls in the sequence return `S_OK`, and the bytes written to
the streaming buffer are exactly the bytes returned by `ov_read`.

## Lifted decoder defect

The lifted libvorbis decoder parses the headers and produces plausible-looking
float PCM, but the waveform is wrong. A generated 440 Hz OGG decoded by the
lifted code contains the 440 Hz tone plus strong images at 11464 Hz, 5909 Hz and
21610 Hz; the reference decoder returns a clean tone. The defect is inside
Vorbis synthesis, before `ov_read` converts float samples to int16.

Because the float output is already corrupted, changing the DirectSound buffer,
the primary format or the resampler cannot fix it.

## Native host backend

`runtime/audio_host.c` decodes the same OGG files with the vendored
`stb_vorbis` decoder for the native host.

- On the first `ov_read` for an `OggVorbis_File`, the wrapper finds the Win32
  file handle in the OGG datasource, looks up the path recorded by
  `CreateFileA`, and opens a host decoder.
- The lifted `ov_read` still runs first. Its output is discarded; it advances
  the guest decoder's sample position and bitstream fields so `ov_pcm_tell`,
  stream switching and the streamer's own bookkeeping stay consistent.
- The host decoder then fills the same buffer and returns its byte count.

This keeps the guest streamer state intact while replacing only the corrupted
sample data.

## Verification

- The 440 Hz test file decodes to the exact reference samples.
- The first two seconds of the real `title.ogg` stream correlate with the
  reference decode at 0.999999996 for the left channel.
- A 40 second run streamed 34.5 seconds of music (6,082,560 bytes) without a
  crash and kept the native host at 29.9 to 30.0 frames per second.

## Remaining work

- The host decoder does not yet follow guest `ov_pcm_seek` calls; a seek or loop
  can move the guest position without moving the host decoder. Loops that seek
  inside the track need a seek wrapper keyed by the same `OggVorbis_File`.
- The wasm host still uses the lifted decoder.
- Sound effects use DirectSound buffers filled from `data/sound/*.pac`, not
  `ov_read`; their content is not covered by this backend.

## Instrumentation

- `RECOMP_AUDIODUMP=<path>` appends every unlocked region to a raw PCM file.
  The stream is 44100 Hz, stereo, signed 16-bit little-endian.
- `RECOMP_AUDIODBG=1` prints host decoder selection and failures.
- `RECOMP_FPS=1` prints the `IDirect3DDevice8::Present` rate every five seconds.
- `RECOMP_COMLOG=1` prints the COM method, host function offset, proxy and real
  pointers, arguments and result.

## Portable client

`src2/PsoBB/Audio` reproduces the streaming path without DirectSound:

- `AudioPipeline` mixes music and sound-effect voices, converts the result to
  the output PCM format and writes it to an `AudioRingBuffer`. The streaming
  thread calls `Fill`; `Drain` moves buffered bytes into `IAudioOutput`.
  `StreamChunkBytes` is `0xAC44` and `StreamCapacityBytes` is `0xAC440`, the
  original chunk and sixteen-chunk buffer sizes.
- `PcmConverter` handles signed 8, 16, 24 and 32-bit PCM and channel remapping.
  It does not change the sample rate; the output uses the music source rate, as
  the original 44100 Hz streaming buffer did.
- `MusicStream` keeps the loop start and exclusive loop end and performs the
  same decoder seek the original used when a track ended. Seeking clears
  queued decoded audio but cannot recall audio already handed to the host.
- `SoundEffectPlayer` mixes up to 64 one-shot or looping voices at the output
  rate, leaving the mixing bus gains to `AudioMixer`.
- OGG decoding uses NVorbis 0.10.5 through `NVorbisOggDecoder` over a seekable
  stream. Tests use a generated 440 Hz tone and synthetic PCM; no game audio is
  committed.

## Sound assets

The original has two sound containers:

- Music is OGG Vorbis under `data/ogg/`. Track names keep the legacy `.adx`
  suffix; `play_bgm` (`0x00814AFC`) builds `data\ogg\<name>` and overwrites the
  final three characters with `ogg` (`0x00814C00`), then hands the path to
  `AudioPlayerPlaySound` (`0x0086DF38`). No ADX codec is used by this client.
- Sound effects are `.pac` banks under `data/sound/`. A bank has no directory.
  Every sample is a 0x20-byte header followed by its stored PCM. The header is
  a 16-byte `WAVEFORMATEX` PCM layout, a four-byte opaque tag, a size word, two
  reserved words and the audio byte count at `0x1C`. The client's fixed table
  supplies the header offset, the loaded-slot identifier and the loop points
  for every sample. `load_common_pac` (`0x00828E4C`) keeps bank 7 loaded while
  `load_map_sound_data` (`0x00828D40`, wrapper `0x00815584`) swaps the bank for
  the current map; `unload_map_sound_data` (`0x00828C38`) clears the sample
  table and rebinds bank 7. The table names 26 banks, including
  `common.pac`, and 50 map rows covering 1,811 samples.
- The per-bank identifier lists are absolute slots in the client's 0x700-entry
  table, not bank-local indices. `common.pac` holds slots 1 through 184 (with
  gaps at 51 and 56), then 1391 through 1405 and 1407 through 1423; `city.pac`
  holds 1047 through 1052, 1055 and 1056. The title scene calls
  `0x00815584(0)`, which is map row 0 and bank 6 (`city.pac`), so identifier
  1056 resolves from the map bank while 1391 and 1392 resolve from
  `common.pac`.
- `0x00814298` resolves global identifiers below 0x700 through `0x0081443C`:
  the dword table at `0x00A1F840` maps the identifier to a slot, and
  `0x00A13B20[slot]` supplies the attenuation index in bits 8 through 14.
  The wrapper negates that index, scales it by the master setting at
  `0x00AB59F8` and the constant 127, cubes it and multiplies by 6400 to obtain
  the DirectSound volume in hundredths of a decibel. Bits 24 through 27 select
  the buffer type, bit 28 stops voices with the same slot and bit 31 enables
  the positional attenuation curve. Areas 0x15 and 0x16 replace identifiers
  0x559 through 0x55C with slots 0x4B1 through 0x4B4 before the table lookup.
  The port keeps the remap and attenuation tables in `SoundEffectIds` and
  evaluates the volume curve at the image's initial master value of zero. The
  DirectSound buffer type, the stop-previous flag and the positional
  attenuation bit are not modelled; every clip plays as a two-dimensional
  voice.

`PacSoundBank` validates a bank against its fixed table and exposes each
sample's `AudioFormat`, PCM bytes and loop region. `SoundBankCatalog` holds the
client's 26 bank names, 50 map rows and per-bank identifiers and metadata.
`SoundEffectLibrary` performs the common/map load and slot binding;
`FindSlot` is the original `0x00829110` lookup and `Find` resolves a global
identifier through `SoundEffectIds` first.
`MusicLibrary` resolves the legacy track name, reads the OGG entry through
`IDataFiles` and returns a `MusicStream`; `AudioPipeline.PlayMusic` assigns it.
`AudioPipeline.PlaySound(SoundEffectLibrary, id)` decodes the selected sample,
uses the slot's gain when no explicit volume is passed and starts a normal
`SoundEffectPlayer` voice. Sound-effect voices honour a clip's loop region, so
the metadata's start and end frames are preserved.
