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

## Open questions

- The stream is generated at 44100 Hz while the primary buffer runs at 48000 Hz.
  DirectSound resamples the secondary buffer; the original client does the same
  on this device, so this alone should not change pitch.
- The unlocked PCM has not been compared with a reference capture. A lifted
  mixer path (fixed point, MMX/SSE, x87 rounding) or a stale sample-rate
  constant in the guest would produce incorrect content rather than incorrect
  DirectSound setup.
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
