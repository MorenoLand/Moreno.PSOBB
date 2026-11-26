namespace PsoBB.Platform;

/// <summary>
/// An open file with its own position, shared data and the access requested at open time.
/// </summary>
/// <remarks>
/// This replaces the handle and byte operations of <c>ReadFile</c>, <c>WriteFile</c>, <c>SetFilePointer</c>, <c>GetFileSize</c>, <c>SetEndOfFile</c> and <c>FlushFileBuffers</c>.
/// </remarks>
public interface IGameFile : IDisposable
{
	/// <summary>
	/// Gets the normalised path of the file.
	/// </summary>
	GamePath Path { get; }

	/// <summary>
	/// Gets the current size of the file in bytes.
	/// </summary>
	long Length { get; }

	/// <summary>
	/// Gets the current byte position.
	/// </summary>
	long Position { get; }

	/// <summary>
	/// Reads up to the requested number of bytes and advances the position.
	/// </summary>
	/// <param name="buffer">The destination buffer.</param>
	/// <returns>The number of bytes read, zero at the end of the file.</returns>
	int Read(Span<byte> buffer);

	/// <summary>
	/// Writes all bytes and advances the position, extending the file when necessary.
	/// </summary>
	/// <param name="buffer">The bytes to write.</param>
	void Write(ReadOnlySpan<byte> buffer);

	/// <summary>
	/// Moves the position and returns the new absolute position.
	/// </summary>
	/// <param name="offset">The signed byte offset.</param>
	/// <param name="origin">The reference point.</param>
	/// <returns>The new position.</returns>
	long Seek(long offset, GameSeekOrigin origin);

	/// <summary>
	/// Sets the file size without moving the current position.
	/// </summary>
	/// <param name="length">The new size in bytes.</param>
	void SetLength(long length);

	/// <summary>
	/// Flushes pending writes to the host.
	/// </summary>
	void Flush();
}
