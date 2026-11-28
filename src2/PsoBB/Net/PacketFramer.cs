namespace PsoBB.Net;

/// <summary>
/// Reassembles complete <see cref="Packet"/> values from a byte stream that may split or combine packets arbitrarily.
/// </summary>
public sealed class PacketFramer
{
	private byte[] _buffer = new byte[PacketHeader.Size];
	private int _length;

	/// <summary>Gets the number of bytes buffered but not yet returned as a packet.</summary>
	public int BufferedLength => _length;

	/// <summary>Gets the currently buffered bytes.</summary>
	public ReadOnlySpan<byte> Buffered => _buffer.AsSpan(0, _length);

	/// <summary>
	/// Appends received bytes to the buffer.
	/// </summary>
	/// <param name="data">The bytes to append; an empty span does nothing.</param>
	public void Append(ReadOnlySpan<byte> data)
	{
		if (data.IsEmpty)
			return;
		EnsureCapacity(_length + data.Length);
		data.CopyTo(_buffer.AsSpan(_length));
		_length += data.Length;
	}

	/// <summary>
	/// Attempts to remove one complete packet from the front of the buffer.
	/// </summary>
	/// <param name="packet">The packet, or <see langword="null"/> when more bytes are needed.</param>
	/// <returns><see langword="true"/> when a packet was returned.</returns>
	/// <exception cref="InvalidDataException">The buffered header declares a length smaller than the header.</exception>
	public bool TryRead(out Packet? packet)
	{
		packet = null;
		if (_length < PacketHeader.Size)
			return false;
		PacketHeader header = PacketHeader.Read(_buffer);
		if (header.Length < PacketHeader.Size)
			throw new InvalidDataException($"Packet length 0x{header.Length:X4} is smaller than the {PacketHeader.Size}-byte header.");
		if (_length < header.Length)
			return false;
		packet = Packet.Read(_buffer.AsSpan(0, header.Length));
		int remaining = _length - header.Length;
		if (remaining > 0)
			Buffer.BlockCopy(_buffer, header.Length, _buffer, 0, remaining);
		_length = remaining;
		return true;
	}

	/// <summary>Discards every buffered byte.</summary>
	public void Clear() => _length = 0;

	private void EnsureCapacity(int required)
	{
		if (required <= _buffer.Length)
			return;
		int capacity = Math.Max(required, _buffer.Length * 2);
		Array.Resize(ref _buffer, capacity);
	}
}
