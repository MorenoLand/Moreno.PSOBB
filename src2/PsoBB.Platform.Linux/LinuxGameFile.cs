using Microsoft.Win32.SafeHandles;

namespace PsoBB.Platform.Linux;

/// <summary>
/// An open game file whose reads and writes use a shared host handle and an independent position.
/// </summary>
/// <remarks>
/// Positions are per handle while the bytes are shared with every other handle to the same file. Writes beyond the current end leave a zero-filled gap, and a length change never moves the position.
/// </remarks>
internal sealed class LinuxGameFile : IGameFile
{
	private readonly SafeFileHandle _handle;
	private readonly bool _readable;
	private readonly bool _writable;
	private long _position;
	private bool _disposed;

	internal LinuxGameFile(SafeFileHandle handle, GamePath path, GameFileAccess access)
	{
		_handle = handle;
		_readable = (access & GameFileAccess.Read) != 0;
		_writable = (access & GameFileAccess.Write) != 0;
		Path = path;
	}

	/// <inheritdoc/>
	public GamePath Path { get; }

	/// <inheritdoc/>
	public long Length
	{
		get
		{
			ThrowIfDisposed();
			return RandomAccess.GetLength(_handle);
		}
	}

	/// <inheritdoc/>
	public long Position
	{
		get
		{
			ThrowIfDisposed();
			return _position;
		}
	}

	/// <inheritdoc/>
	public int Read(Span<byte> buffer)
	{
		ThrowIfDisposed();
		if (!_readable)
			throw new InvalidOperationException($"The file '{Path}' was opened without read access.");
		if (buffer.IsEmpty)
			return 0;
		int total = 0;
		while (total < buffer.Length)
		{
			int read = RandomAccess.Read(_handle, buffer[total..], _position + total);
			if (read == 0)
				break;
			total += read;
		}
		_position += total;
		return total;
	}

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> buffer)
	{
		ThrowIfDisposed();
		if (!_writable)
			throw new InvalidOperationException($"The file '{Path}' was opened without write access.");
		if (buffer.IsEmpty)
			return;
		if (_position > long.MaxValue - buffer.Length)
			throw new IOException($"The write at position {_position} would exceed the addressable file range.");
		RandomAccess.Write(_handle, buffer, _position);
		_position += buffer.Length;
	}

	/// <inheritdoc/>
	public long Seek(long offset, GameSeekOrigin origin)
	{
		ThrowIfDisposed();
		long reference = origin switch
		{
			GameSeekOrigin.Begin => 0,
			GameSeekOrigin.Current => _position,
			GameSeekOrigin.End => RandomAccess.GetLength(_handle),
			_ => throw new ArgumentOutOfRangeException(nameof(origin), origin, "Unknown seek origin."),
		};
		Int128 target = (Int128)reference + offset;
		if (target < 0 || target > long.MaxValue)
			throw new IOException($"The seek from {reference} by {offset} leaves the addressable file range.");
		_position = (long)target;
		return _position;
	}

	/// <inheritdoc/>
	public void SetLength(long length)
	{
		ThrowIfDisposed();
		if (!_writable)
			throw new InvalidOperationException($"The file '{Path}' was opened without write access.");
		ArgumentOutOfRangeException.ThrowIfNegative(length);
		RandomAccess.SetLength(_handle, length);
	}

	/// <inheritdoc/>
	public void Flush()
	{
		ThrowIfDisposed();
		if (_writable)
			RandomAccess.FlushToDisk(_handle);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_handle.Dispose();
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
