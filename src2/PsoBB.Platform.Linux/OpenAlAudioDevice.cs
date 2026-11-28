using System.Diagnostics.CodeAnalysis;
using Silk.NET.OpenAL;

namespace PsoBB.Platform.Linux;

/// <summary>
/// An audio device backed by OpenAL Soft's default output device.
/// </summary>
/// <remarks>
/// One OpenAL context serves every output, and each output is a streaming source whose queued buffers mirror the contract's ring buffer. OpenAL's core buffer formats cover mono and stereo PCM at 8 or 16 bits; wider or multichannel formats are rejected when the output is opened.
/// </remarks>
public sealed class OpenAlAudioDevice : IAudioDevice, IDisposable
{
	private readonly AL _al;
	private readonly object _gate = new();
	private readonly AudioContext _context;
	private bool _disposed;

	/// <summary>
	/// Opens the default OpenAL output device and creates a mixing context.
	/// </summary>
	/// <exception cref="AudioDeviceException">No audio device is available.</exception>
	/// <exception cref="AudioContextException">The mixing context could not be created.</exception>
	public OpenAlAudioDevice()
	{
		_al = AL.GetApi();
		_context = new AudioContext();
	}

	internal object Gate => _gate;

	internal AL Api => _al;

	/// <summary>
	/// Tries to open the default OpenAL device, reporting why the device is unavailable instead of throwing.
	/// </summary>
	/// <param name="device">The opened device when audio output is available.</param>
	/// <param name="unavailableReason">The OpenAL failure text when the device is unavailable.</param>
	/// <returns><see langword="true"/> when the device opened.</returns>
	public static bool TryCreate([NotNullWhen(true)] out OpenAlAudioDevice? device, out string? unavailableReason)
	{
		try
		{
			device = new OpenAlAudioDevice();
			unavailableReason = null;
			return true;
		}
		catch (Exception exception) when (exception is AudioDeviceException or AudioContextException or DllNotFoundException or FileNotFoundException or TypeInitializationException or BadImageFormatException or PlatformNotSupportedException or EntryPointNotFoundException)
		{
			device = null;
			unavailableReason = exception.InnerException?.Message ?? exception.Message;
			return false;
		}
	}

	/// <inheritdoc/>
	public IAudioOutput OpenOutput(AudioFormat format, int capacityBytes)
	{
		ArgumentNullException.ThrowIfNull(format);
		if (capacityBytes <= 0 || capacityBytes % format.BlockAlign != 0)
			throw new ArgumentOutOfRangeException(nameof(capacityBytes), capacityBytes, "The buffer must hold a positive whole number of sample frames.");
		BufferFormat bufferFormat = TranslateFormat(format);
		lock (_gate)
		{
			ThrowIfDisposed();
			_context.MakeCurrent();
			uint[] sources = _al.GenSources(1);
			CheckError("creating an output source");
			if (sources.Length != 1 || sources[0] == 0)
				throw new InvalidOperationException("OpenAL did not create an output source.");
			return new OpenAlAudioOutput(this, format, capacityBytes, sources[0], bufferFormat);
		}
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		lock (_gate)
		{
			if (_disposed)
				return;
			_disposed = true;
			_context.Dispose();
		}
	}

	internal void MakeCurrent()
	{
		ThrowIfDisposed();
		_context.MakeCurrent();
	}

	internal void CheckError(string operation)
	{
		AudioError error = _al.GetError();
		if (error != AudioError.NoError)
			throw new InvalidOperationException($"OpenAL failed while {operation}: {error}.");
	}

	private static BufferFormat TranslateFormat(AudioFormat format) => format.Channels switch
	{
		1 when format.BitsPerSample == 8 => BufferFormat.Mono8,
		1 when format.BitsPerSample == 16 => BufferFormat.Mono16,
		2 when format.BitsPerSample == 8 => BufferFormat.Stereo8,
		2 when format.BitsPerSample == 16 => BufferFormat.Stereo16,
		_ => throw new NotSupportedException($"OpenAL output does not support {format}."),
	};

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
