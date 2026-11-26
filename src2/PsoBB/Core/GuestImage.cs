using System.Collections.ObjectModel;

namespace PsoBB.Core;

/// <summary>
/// Read-only view of the original client's data image, addressed by guest virtual address.
/// </summary>
/// <remarks>
/// The image is the piece table written by <c>pipeline/gen.py</c>: a 32-bit piece count, one
/// 32-bit address, length and file offset per piece, then the piece bytes. Addresses in the
/// pieces are guest virtual addresses and every multi-byte value is little-endian.
/// </remarks>
public sealed class GuestImage
{
	private const int PieceCountSize = 4;
	private const int PieceEntrySize = 12;
	private readonly byte[] _bytes;
	private readonly GuestImagePiece[] _pieces;
	private readonly ReadOnlyCollection<GuestImagePiece> _pieceView;

	private GuestImage(byte[] bytes, GuestImagePiece[] pieces)
	{
		_bytes = bytes;
		_pieces = pieces;
		_pieceView = Array.AsReadOnly(pieces);
	}

	/// <summary>
	/// Gets the mapped pieces, ordered by guest address and never overlapping.
	/// </summary>
	public IReadOnlyList<GuestImagePiece> Pieces => _pieceView;

	/// <summary>
	/// Reads the whole data image from <paramref name="stream"/>.
	/// </summary>
	/// <param name="stream">Stream positioned at the first byte of the image.</param>
	/// <returns>The parsed image.</returns>
	public static GuestImage Load(Stream stream)
	{
		ArgumentNullException.ThrowIfNull(stream);
		using MemoryStream buffer = new();
		stream.CopyTo(buffer);
		return FromBytes(buffer.ToArray());
	}

	/// <summary>
	/// Parses a data image that is already in memory.
	/// </summary>
	/// <param name="image">Complete image file contents.</param>
	/// <returns>The parsed image.</returns>
	public static GuestImage Parse(ReadOnlySpan<byte> image) => FromBytes(image.ToArray());

	/// <summary>
	/// Returns <see langword="true"/> when every byte of the range is mapped by one or more
	/// contiguous pieces.
	/// </summary>
	/// <param name="address">First guest address.</param>
	/// <param name="length">Number of bytes; zero is always mapped.</param>
	/// <returns><see langword="true"/> when the complete range is present in the image.</returns>
	public bool IsMapped(uint address, int length)
	{
		ArgumentOutOfRangeException.ThrowIfNegative(length);
		if (length == 0)
			return true;
		ulong end = (ulong)address + (uint)length;
		if (end > (ulong)uint.MaxValue + 1)
			return false;
		int index = FindPiece(address);
		if (index < 0)
			return false;
		ulong cursor = address;
		while (cursor < end && index < _pieces.Length)
		{
			GuestImagePiece piece = _pieces[index];
			if (piece.Address > cursor)
				return false;
			cursor = Math.Min(end, piece.EndAddress);
			index++;
		}
		return cursor == end;
	}

	/// <summary>
	/// Copies the requested guest range into <paramref name="destination"/>.
	/// </summary>
	/// <param name="address">First guest address.</param>
	/// <param name="destination">Buffer that receives the bytes.</param>
	/// <exception cref="GuestImageAddressException">The range is not completely mapped.</exception>
	public void ReadBytes(uint address, Span<byte> destination)
	{
		if (destination.IsEmpty)
			return;
		ulong end = (ulong)address + (uint)destination.Length;
		if (end > (ulong)uint.MaxValue + 1)
			throw new GuestImageAddressException(address, destination.Length);
		int index = FindPiece(address);
		if (index < 0)
			throw new GuestImageAddressException(address, destination.Length);
		ulong cursor = address;
		int written = 0;
		while (cursor < end)
		{
			if (index >= _pieces.Length)
				throw new GuestImageAddressException(address, destination.Length);
			GuestImagePiece piece = _pieces[index];
			if (piece.Address > cursor)
				throw new GuestImageAddressException(address, destination.Length);
			int count = (int)Math.Min(end - cursor, piece.EndAddress - cursor);
			_bytes.AsSpan(piece.Offset + (int)(cursor - piece.Address), count).CopyTo(destination[written..]);
			cursor += (uint)count;
			written += count;
			index++;
		}
	}

	/// <summary>
	/// Reads one byte at a guest address.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The byte.</returns>
	public byte ReadByte(uint address)
	{
		Span<byte> bytes = stackalloc byte[1];
		ReadBytes(address, bytes);
		return bytes[0];
	}

	/// <summary>
	/// Reads a little-endian 16-bit unsigned integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public ushort ReadUInt16(uint address)
	{
		Span<byte> bytes = stackalloc byte[2];
		ReadBytes(address, bytes);
		return (ushort)(bytes[0] | bytes[1] << 8);
	}

	/// <summary>
	/// Reads a little-endian 16-bit signed integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public short ReadInt16(uint address) => unchecked((short)ReadUInt16(address));

	/// <summary>
	/// Reads a little-endian 32-bit unsigned integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public uint ReadUInt32(uint address)
	{
		Span<byte> bytes = stackalloc byte[4];
		ReadBytes(address, bytes);
		return (uint)(bytes[0] | bytes[1] << 8 | bytes[2] << 16 | bytes[3] << 24);
	}

	/// <summary>
	/// Reads a little-endian 32-bit signed integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public int ReadInt32(uint address) => unchecked((int)ReadUInt32(address));

	/// <summary>
	/// Reads a little-endian 64-bit unsigned integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public ulong ReadUInt64(uint address)
	{
		Span<byte> bytes = stackalloc byte[8];
		ReadBytes(address, bytes);
		return (ulong)bytes[0]
			| (ulong)bytes[1] << 8
			| (ulong)bytes[2] << 16
			| (ulong)bytes[3] << 24
			| (ulong)bytes[4] << 32
			| (ulong)bytes[5] << 40
			| (ulong)bytes[6] << 48
			| (ulong)bytes[7] << 56;
	}

	/// <summary>
	/// Reads a little-endian 64-bit signed integer.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public long ReadInt64(uint address) => unchecked((long)ReadUInt64(address));

	/// <summary>
	/// Reads a little-endian 32-bit floating-point value.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public float ReadSingle(uint address) => BitConverter.Int32BitsToSingle(unchecked((int)ReadUInt32(address)));

	/// <summary>
	/// Reads a little-endian 64-bit floating-point value.
	/// </summary>
	/// <param name="address">Guest address.</param>
	/// <returns>The decoded value.</returns>
	public double ReadDouble(uint address) => BitConverter.Int64BitsToDouble(unchecked((long)ReadUInt64(address)));

	private static GuestImage FromBytes(byte[] image)
	{
		if (image.Length < PieceCountSize)
			throw new InvalidDataException($"The data image is {image.Length} bytes; the piece count needs {PieceCountSize}.");
		uint count = ReadHeaderUInt32(image, 0);
		long tableEnd = PieceCountSize + (long)count * PieceEntrySize;
		if (tableEnd > image.Length)
			throw new InvalidDataException($"The data image declares {count} pieces but is only {image.Length} bytes long.");
		GuestImagePiece[] pieces = new GuestImagePiece[count];
		for (int index = 0; index < pieces.Length; index++)
		{
			int entry = PieceCountSize + PieceEntrySize * index;
			uint address = ReadHeaderUInt32(image, entry);
			uint length = ReadHeaderUInt32(image, entry + 4);
			uint offset = ReadHeaderUInt32(image, entry + 8);
			if (length == 0)
				throw new InvalidDataException($"Data image piece {index} at 0x{address:X8} has zero length.");
			if (length > int.MaxValue)
				throw new InvalidDataException($"Data image piece {index} at 0x{address:X8} is {length} bytes; the maximum is {int.MaxValue}.");
			if (offset < tableEnd || (ulong)offset + length > (ulong)image.Length)
				throw new InvalidDataException($"Data image piece {index} at 0x{address:X8} has bytes outside the {image.Length}-byte file.");
			if ((ulong)address + length > (ulong)uint.MaxValue + 1)
				throw new InvalidDataException($"Data image piece {index} at 0x{address:X8} is {length} bytes and passes the 32-bit address space.");
			pieces[index] = new GuestImagePiece(address, (int)length, (int)offset);
		}
		Array.Sort(pieces, static (left, right) => left.Address.CompareTo(right.Address));
		for (int index = 1; index < pieces.Length; index++)
		{
			GuestImagePiece previous = pieces[index - 1];
			GuestImagePiece current = pieces[index];
			if (current.Address < previous.EndAddress)
				throw new InvalidDataException($"Data image pieces 0x{previous.Address:X8}-0x{previous.EndAddress:X8} and 0x{current.Address:X8}-0x{current.EndAddress:X8} overlap.");
		}
		return new GuestImage(image, pieces);
	}

	private static uint ReadHeaderUInt32(byte[] bytes, int offset)
		=> (uint)(bytes[offset] | bytes[offset + 1] << 8 | bytes[offset + 2] << 16 | bytes[offset + 3] << 24);

	private int FindPiece(uint address)
	{
		for (int index = 0; index < _pieces.Length; index++)
		{
			GuestImagePiece piece = _pieces[index];
			if (address < piece.Address)
				return -1;
			if (address < piece.EndAddress)
				return index;
		}
		return -1;
	}
}
