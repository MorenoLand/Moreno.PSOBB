namespace PsoBB.Audio;

/// <summary>
/// A thread-safe byte ring that a producer fills and a consumer drains without overwriting unread audio.
/// </summary>
/// <remarks>
/// Writes and reads copy only the bytes that fit; a full ring truncates a write and an empty ring truncates a read. The streaming thread writes decoded PCM and the output thread reads it, matching the original's lock, copy and unlock sequence without blocking either side.
/// </remarks>
public sealed class AudioRingBuffer
{
	private readonly object _gate = new();
	private readonly byte[] _bytes;
	private int _readIndex;
	private int _writeIndex;
	private int _count;

	/// <summary>
	/// Creates a ring with the requested capacity.
	/// </summary>
	/// <param name="capacity">The ring size in bytes.</param>
	/// <exception cref="ArgumentOutOfRangeException">The capacity is not positive.</exception>
	public AudioRingBuffer(int capacity)
	{
		if (capacity <= 0)
			throw new ArgumentOutOfRangeException(nameof(capacity), capacity, "The ring capacity must be positive.");
		_bytes = new byte[capacity];
	}

	/// <summary>
	/// Gets the ring size in bytes.
	/// </summary>
	public int Capacity => _bytes.Length;

	/// <summary>
	/// Gets the bytes that can be read.
	/// </summary>
	public int AvailableBytes
	{
		get
		{
			lock (_gate)
				return _count;
		}
	}

	/// <summary>
	/// Gets the bytes that can be written without overwriting unread audio.
	/// </summary>
	public int FreeBytes
	{
		get
		{
			lock (_gate)
				return Capacity - _count;
		}
	}

	/// <summary>
	/// Gets a value indicating whether the ring holds no bytes.
	/// </summary>
	public bool IsEmpty
	{
		get
		{
			lock (_gate)
				return _count == 0;
		}
	}

	/// <summary>
	/// Copies as many bytes as fit and returns the number written.
	/// </summary>
	/// <param name="source">The bytes to enqueue.</param>
	/// <returns>The number of bytes written, which may be less than the source length.</returns>
	public int Write(ReadOnlySpan<byte> source)
	{
		lock (_gate)
		{
			int count = Math.Min(source.Length, Capacity - _count);
			if (count == 0)
				return 0;
			int first = Math.Min(count, Capacity - _writeIndex);
			source[..first].CopyTo(_bytes.AsSpan(_writeIndex, first));
			if (count > first)
				source.Slice(first, count - first).CopyTo(_bytes.AsSpan(0, count - first));
			_writeIndex = (_writeIndex + count) % Capacity;
			_count += count;
			return count;
		}
	}

	/// <summary>
	/// Copies as many buffered bytes as fit and returns the number read.
	/// </summary>
	/// <param name="destination">The destination buffer.</param>
	/// <returns>The number of bytes read, which may be less than the destination length.</returns>
	public int Read(Span<byte> destination)
	{
		lock (_gate)
		{
			int count = Math.Min(destination.Length, _count);
			if (count == 0)
				return 0;
			int first = Math.Min(count, Capacity - _readIndex);
			_bytes.AsSpan(_readIndex, first).CopyTo(destination[..first]);
			if (count > first)
				_bytes.AsSpan(0, count - first).CopyTo(destination.Slice(first, count - first));
			_readIndex = (_readIndex + count) % Capacity;
			_count -= count;
			return count;
		}
	}

	/// <summary>
	/// Removes buffered bytes without copying them.
	/// </summary>
	/// <param name="count">The maximum number of bytes to discard.</param>
	/// <returns>The number of bytes discarded.</returns>
	public int Discard(int count)
	{
		if (count < 0)
			throw new ArgumentOutOfRangeException(nameof(count), count, "The count cannot be negative.");
		lock (_gate)
		{
			int discarded = Math.Min(count, _count);
			_readIndex = (_readIndex + discarded) % Capacity;
			_count -= discarded;
			return discarded;
		}
	}

	/// <summary>
	/// Discards every buffered byte.
	/// </summary>
	public void Clear()
	{
		lock (_gate)
		{
			_readIndex = 0;
			_writeIndex = 0;
			_count = 0;
		}
	}
}
