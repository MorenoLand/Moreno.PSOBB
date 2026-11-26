using System.Runtime.InteropServices;

namespace PsoBB.Platform.Windows;

/// <summary>
/// A PCM stream played through the Windows waveform output device.
/// </summary>
/// <remarks>
/// The output keeps a fixed pool of prepared chunks, returns completed chunks to the caller through <see cref="FreeBytes"/>, and pauses rather than resets so <see cref="Stop"/> keeps buffered audio. Volume is device-wide because the waveform API has no per-buffer gain.
/// </remarks>
public sealed class WindowsAudioOutput : IAudioOutput
{
	private const uint WaveMapper = 0xFFFFFFFF;
	private const ushort WaveFormatPcm = 1;
	private const uint WaveErrStillPlaying = 33;
	private const int MaximumChunkBytes = 16 * 1024;
	private const int WhdrDone = 0x00000001;
	private static readonly int WaveHeaderSize = Marshal.SizeOf<WaveHeader>();
	private static readonly int WaveHeaderFlagsOffset = Marshal.OffsetOf<WaveHeader>(nameof(WaveHeader.Flags)).ToInt32();
	private readonly object _gate = new();
	private readonly AudioFormat _format;
	private readonly int _capacity;
	private readonly int _chunkBytes;
	private readonly nint _handle;
	private readonly byte[][] _buffers;
	private readonly WaveHeader[] _headers;
	private readonly GCHandle _headerArray;
	private readonly GCHandle[] _bufferHandles;
	private readonly bool[] _prepared;
	private readonly int[] _chunkLengths;
	private readonly Queue<int> _freeChunks;
	private readonly Queue<int> _inFlight;
	private readonly List<byte> _pending = [];
	private int _inFlightBytes;
	private bool _playing;
	private float _volume = 1f;
	private bool _disposed;

	internal WindowsAudioOutput(AudioFormat format, int capacityBytes)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The buffer must hold a positive whole number of sample frames.");
		_format = format;
		_capacity = capacityBytes;
		_chunkBytes = ComputeChunkBytes(capacityBytes, format.BlockAlign);
		int chunkCount = (capacityBytes + _chunkBytes - 1) / _chunkBytes;
		WaveFormat waveFormat = new()
		{
			FormatTag = WaveFormatPcm,
			Channels = (ushort)format.Channels,
			SamplesPerSecond = (uint)format.SampleRate,
			AverageBytesPerSecond = (uint)format.AverageBytesPerSecond,
			BlockAlign = (ushort)format.BlockAlign,
			BitsPerSample = (ushort)format.BitsPerSample,
			ExtraSize = 0,
		};
		int result = NativeMethods.WaveOutOpen(out nint handle, WaveMapper, ref waveFormat, 0, 0, 0);
		if (result != 0)
			throw new InvalidOperationException($"The default audio output device could not be opened (waveOutOpen returned {result}).");
		_handle = handle;
		_headers = new WaveHeader[chunkCount];
		_buffers = new byte[chunkCount][];
		_bufferHandles = new GCHandle[chunkCount];
		_prepared = new bool[chunkCount];
		_chunkLengths = new int[chunkCount];
		_freeChunks = new Queue<int>(chunkCount);
		_inFlight = new Queue<int>(chunkCount);
		_headerArray = GCHandle.Alloc(_headers, GCHandleType.Pinned);
		try
		{
			for (int index = 0; index < chunkCount; index++)
			{
				_buffers[index] = new byte[_chunkBytes];
				_bufferHandles[index] = GCHandle.Alloc(_buffers[index], GCHandleType.Pinned);
				_headers[index] = new WaveHeader { Data = _bufferHandles[index].AddrOfPinnedObject(), BufferLength = (uint)_chunkBytes };
				_freeChunks.Enqueue(index);
			}
			result = NativeMethods.WaveOutPause(_handle);
			if (result != 0)
				throw new InvalidOperationException($"The audio output could not be paused before playback (waveOutPause returned {result}).");
		}
		catch
		{
			ReleaseResources();
			throw;
		}
	}

	/// <inheritdoc/>
	public AudioFormat Format => _format;

	/// <inheritdoc/>
	public int Capacity => _capacity;

	/// <inheritdoc/>
	public int FreeBytes
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				Reap();
				return FreeBytesCore();
			}
		}
	}

	/// <inheritdoc/>
	public bool IsPlaying
	{
		get
		{
			lock (_gate)
			{
				ThrowIfDisposed();
				return _playing;
			}
		}
	}

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> pcm)
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			Reap();
			if (pcm.IsEmpty)
				return;
			int free = FreeBytesCore();
			if (pcm.Length > free)
				throw new InvalidOperationException($"A {pcm.Length}-byte write exceeds the {free} free bytes of the {_capacity}-byte output.");
			_pending.AddRange(pcm.ToArray());
			Fill();
		}
	}

	/// <inheritdoc/>
	public void Play()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			int result = NativeMethods.WaveOutRestart(_handle);
			if (result != 0)
				throw new InvalidOperationException($"The audio output could not start (waveOutRestart returned {result}).");
			_playing = true;
		}
	}

	/// <inheritdoc/>
	public void Stop()
	{
		lock (_gate)
		{
			ThrowIfDisposed();
			int result = NativeMethods.WaveOutPause(_handle);
			if (result != 0)
				throw new InvalidOperationException($"The audio output could not pause (waveOutPause returned {result}).");
			_playing = false;
		}
	}

	/// <inheritdoc/>
	public void SetVolume(float volume)
	{
		if (!(volume >= 0f && volume <= 1f))
			throw new ArgumentOutOfRangeException(nameof(volume), volume, "The volume is between 0 and 1.");
		lock (_gate)
		{
			ThrowIfDisposed();
			uint level = (uint)MathF.Round(volume * 65535f);
			int result = NativeMethods.WaveOutSetVolume(_handle, level | (level << 16));
			if (result != 0)
				throw new InvalidOperationException($"The audio output volume could not be changed (waveOutSetVolume returned {result}).");
			_volume = volume;
		}
	}

	/// <summary>
	/// Gets the last volume applied to the device.
	/// </summary>
	public float Volume => _volume;

	/// <inheritdoc/>
	public void Dispose()
	{
		lock (_gate)
		{
			if (_disposed)
				return;
			_disposed = true;
			_pending.Clear();
			ReleaseResources();
		}
	}

	private void Fill()
	{
		int blockAlign = _format.BlockAlign;
		while (_freeChunks.Count > 0 && _pending.Count >= blockAlign)
		{
			int index = _freeChunks.Dequeue();
			int length = Math.Min(_chunkBytes, _pending.Count);
			length -= length % blockAlign;
			if (length <= 0)
			{
				_freeChunks.Enqueue(index);
				return;
			}
			_pending.CopyTo(0, _buffers[index], 0, length);
			_pending.RemoveRange(0, length);
			nint header = HeaderAddress(index);
			_headers[index] = new WaveHeader { Data = _bufferHandles[index].AddrOfPinnedObject(), BufferLength = (uint)length };
			int result = NativeMethods.WaveOutPrepareHeader(_handle, header, WaveHeaderSize);
			if (result != 0)
			{
				_freeChunks.Enqueue(index);
				throw new InvalidOperationException($"An audio chunk could not be prepared (waveOutPrepareHeader returned {result}).");
			}
			result = NativeMethods.WaveOutWrite(_handle, header, WaveHeaderSize);
			if (result != 0)
			{
				NativeMethods.WaveOutUnprepareHeader(_handle, header, WaveHeaderSize);
				_freeChunks.Enqueue(index);
				throw new InvalidOperationException($"An audio chunk could not be queued (waveOutWrite returned {result}).");
			}
			_prepared[index] = true;
			_chunkLengths[index] = length;
			_inFlightBytes += length;
			_inFlight.Enqueue(index);
		}
	}

	private void Reap()
	{
		while (_inFlight.Count > 0)
		{
			int index = _inFlight.Peek();
			nint header = HeaderAddress(index);
			if ((Marshal.ReadInt32(header, WaveHeaderFlagsOffset) & WhdrDone) == 0)
				return;
			int result = NativeMethods.WaveOutUnprepareHeader(_handle, header, WaveHeaderSize);
			if (result == WaveErrStillPlaying)
				return;
			if (result != 0)
				throw new InvalidOperationException($"An audio chunk could not be released (waveOutUnprepareHeader returned {result}).");
			_inFlight.Dequeue();
			_prepared[index] = false;
			_inFlightBytes -= _chunkLengths[index];
			_chunkLengths[index] = 0;
			_freeChunks.Enqueue(index);
		}
	}

	private int FreeBytesCore() => Math.Max(0, _capacity - _inFlightBytes - _pending.Count);

	private nint HeaderAddress(int index) => _headerArray.AddrOfPinnedObject() + index * WaveHeaderSize;

	private void ReleaseResources()
	{
		if (_handle != 0)
		{
			NativeMethods.WaveOutReset(_handle);
			for (int index = 0; index < _headers.Length; index++)
			{
				if (_prepared[index])
				{
					NativeMethods.WaveOutUnprepareHeader(_handle, HeaderAddress(index), WaveHeaderSize);
					_prepared[index] = false;
				}
				if (_bufferHandles[index].IsAllocated)
					_bufferHandles[index].Free();
			}
			NativeMethods.WaveOutClose(_handle);
		}
		if (_headerArray.IsAllocated)
			_headerArray.Free();
	}

	private static int ComputeChunkBytes(int capacityBytes, int blockAlign)
	{
		int chunk = Math.Min(MaximumChunkBytes, Math.Max(blockAlign, capacityBytes / 4));
		chunk -= chunk % blockAlign;
		return chunk <= 0 ? blockAlign : chunk;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	[StructLayout(LayoutKind.Sequential)]
	private struct WaveFormat
	{
		internal ushort FormatTag;
		internal ushort Channels;
		internal uint SamplesPerSecond;
		internal uint AverageBytesPerSecond;
		internal ushort BlockAlign;
		internal ushort BitsPerSample;
		internal ushort ExtraSize;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct WaveHeader
	{
		internal nint Data;
		internal uint BufferLength;
		internal uint BytesRecorded;
		internal nint User;
		internal uint Flags;
		internal uint Loops;
		internal nint Next;
		internal nint Reserved;
	}

	private static class NativeMethods
	{
		[DllImport("winmm.dll", EntryPoint = "waveOutOpen")]
		internal static extern int WaveOutOpen(out nint handle, uint deviceId, ref WaveFormat format, nint callback, nint instance, uint flags);

		[DllImport("winmm.dll", EntryPoint = "waveOutClose")]
		internal static extern int WaveOutClose(nint handle);

		[DllImport("winmm.dll", EntryPoint = "waveOutPrepareHeader")]
		internal static extern int WaveOutPrepareHeader(nint handle, nint header, int headerSize);

		[DllImport("winmm.dll", EntryPoint = "waveOutUnprepareHeader")]
		internal static extern int WaveOutUnprepareHeader(nint handle, nint header, int headerSize);

		[DllImport("winmm.dll", EntryPoint = "waveOutWrite")]
		internal static extern int WaveOutWrite(nint handle, nint header, int headerSize);

		[DllImport("winmm.dll", EntryPoint = "waveOutPause")]
		internal static extern int WaveOutPause(nint handle);

		[DllImport("winmm.dll", EntryPoint = "waveOutRestart")]
		internal static extern int WaveOutRestart(nint handle);

		[DllImport("winmm.dll", EntryPoint = "waveOutReset")]
		internal static extern int WaveOutReset(nint handle);

		[DllImport("winmm.dll", EntryPoint = "waveOutSetVolume")]
		internal static extern int WaveOutSetVolume(nint handle, uint volume);
	}
}
