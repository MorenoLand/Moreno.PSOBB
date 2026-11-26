namespace PsoBB.Platform.Windows;

/// <summary>
/// An open Windows file handle with its own position.
/// </summary>
/// <remarks>
/// The handle shares its bytes with every other handle to the same file, while the access flags decide which operations are permitted.
/// </remarks>
internal sealed class WindowsGameFile(GamePath path, GameFileAccess access, FileStream stream) : IGameFile
{
	private bool _disposed;

	/// <inheritdoc/>
	public GamePath Path => path;

	/// <inheritdoc/>
	public long Length
	{
		get
		{
			ThrowIfDisposed();
			return stream.Length;
		}
	}

	/// <inheritdoc/>
	public long Position
	{
		get
		{
			ThrowIfDisposed();
			return stream.Position;
		}
	}

	/// <inheritdoc/>
	public int Read(Span<byte> buffer)
	{
		ThrowIfDisposed();
		if ((access & GameFileAccess.Read) == 0)
			throw new InvalidOperationException($"The file '{path}' was opened without read access.");
		return stream.Read(buffer);
	}

	/// <inheritdoc/>
	public void Write(ReadOnlySpan<byte> buffer)
	{
		ThrowIfDisposed();
		if ((access & GameFileAccess.Write) == 0)
			throw new InvalidOperationException($"The file '{path}' was opened without write access.");
		stream.Write(buffer);
	}

	/// <inheritdoc/>
	public long Seek(long offset, GameSeekOrigin origin)
	{
		ThrowIfDisposed();
		SeekOrigin seekOrigin = origin switch
		{
			GameSeekOrigin.Begin => SeekOrigin.Begin,
			GameSeekOrigin.Current => SeekOrigin.Current,
			GameSeekOrigin.End => SeekOrigin.End,
			_ => throw new ArgumentOutOfRangeException(nameof(origin), origin, "Unknown seek origin."),
		};
		return stream.Seek(offset, seekOrigin);
	}

	/// <inheritdoc/>
	public void SetLength(long length)
	{
		ThrowIfDisposed();
		if ((access & GameFileAccess.Write) == 0)
			throw new InvalidOperationException($"The file '{path}' was opened without write access.");
		stream.SetLength(length);
	}

	/// <inheritdoc/>
	public void Flush()
	{
		ThrowIfDisposed();
		if ((access & GameFileAccess.Write) != 0)
			stream.Flush(flushToDisk: true);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		stream.Dispose();
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
