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
9. Unlocked chunks contain non-zero PCM samples; the data path is live.

All calls in the sequence return `S_OK`.

## Measured output

An 18.4 second capture (3,252,224 bytes) was taken across the title screen and
the intro transition.

- RMS is about 0.21 of full scale; peaks reach full scale from the fourth
  second onwards.
- Zero-crossing rate is about 0.29 and spectral flatness stays between 0.6 and
  0.8. Music normally has a much lower flatness; this is noise-like.
- The byte order is correct: aligning the stream as signed 16-bit little-endian
  gives a smoother waveform than a one-byte shift.
- The native host presents at 29.9 to 30.0 frames per second during the capture.

The DirectSound setup is therefore not the cause. The guest is writing
noise-like PCM into a correctly created buffer.

## Open questions

- The stream is generated at 44100 Hz while the primary buffer runs at 48000 Hz.
  DirectSound resamples the secondary buffer; this should not turn music into
  noise.
- The lifted mixer or decoder may be producing incorrect samples (fixed point,
  MMX/SSE, x87 rounding).
- The retail Patch client expects `patch.dll`; that DLL bundles SDL2 and may
  provide the audio decoder or the sample data path. The host currently does not
  load it.
- The stream buffer uses position notifications. If the guest consumes the
  notifications at the wrong rate, it can underrun or overwrite unplayed data.
- The client may call `IDirectSoundBuffer::SetFrequency`; the current log does
  not show it.

## Instrumentation

- `RECOMP_AUDIODUMP=<path>` appends every unlocked region to a raw PCM file.
  The stream is 44100 Hz, stereo, signed 16-bit little-endian.
- `RECOMP_FPS=1` prints the `IDirect3DDevice8::Present` rate every five seconds.
- `RECOMP_COMLOG=1` prints the COM method, host function offset, proxy and real
  pointers, arguments and result.

## Next checks

1. Capture ten seconds of the stream, wrap it as a WAV and compare pitch and
   duration with a reference recording of the same screen.
2. Log `SetFrequency` and the first `GetCurrentPosition` values.
3. Locate the guest mixer's output-rate constant and compare it with the
   `WAVEFORMATEX` rate.
4. Check whether the stream is underrun: count `Lock` calls per second against
   the 0.25 s each chunk represents.
