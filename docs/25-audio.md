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
