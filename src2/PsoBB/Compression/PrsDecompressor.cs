namespace PsoBB.Compression;

/// <summary>
/// Decompresses the run-length and back-reference format used by the client's compressed files.
/// </summary>
/// <remarks>
/// Each control byte holds eight flags, least significant bit first. A set flag introduces one
/// literal byte. A clear flag is followed by a second bit. When that bit is set, a 16-bit
/// little-endian reference follows: the high 13 bits are the negated distance and the low three
/// bits select the length, with zero deferring the length to the following byte. A zero reference
/// ends the stream. When the second bit is clear, a compact reference follows: two bits select a
/// length of 2 to 5 and one byte holds the distance subtracted from 256. References copy one byte
/// at a time, so a length may exceed its distance and repeat the bytes it is producing.
/// </remarks>
public static class PrsDecompressor
{
	/// <summary>
	/// Decompresses a complete stream into the destination.
	/// </summary>
	/// <param name="source">The compressed stream, including its terminator.</param>
	/// <param name="destination">The buffer that receives the decompressed bytes.</param>
	/// <returns>The number of bytes written to <paramref name="destination"/>.</returns>
	/// <exception cref="PrsFormatException">The stream is empty, truncated or refers behind the start of the output.</exception>
	/// <exception cref="ArgumentException"><paramref name="destination"/> is too small for the decompressed stream.</exception>
	[Original(0x00788154)]
	public static int Decompress(ReadOnlySpan<byte> source, Span<byte> destination)
	{
		if (source.IsEmpty)
			throw new PrsFormatException("The compressed stream is empty.", 0);
		int position = 1;
		uint control = source[0];
		int controlBits = 8;
		int written = 0;
		while (true)
		{
			if (ReadControlBit(source, ref position, ref control, ref controlBits) == 1)
			{
				if (position >= source.Length)
					throw new PrsFormatException("The compressed stream ends before a literal byte.", position);
				if (written >= destination.Length)
					throw SmallerDestination();
				destination[written++] = source[position++];
				continue;
			}
			int offset;
			int length;
			if (ReadControlBit(source, ref position, ref control, ref controlBits) == 1)
			{
				if (source.Length - position < 2)
					throw new PrsFormatException("The compressed stream ends before a reference.", position);
				int reference = source[position] | source[position + 1] << 8;
				position += 2;
				if (reference == 0)
					return written;
				offset = (reference >> 3) | unchecked((int)0xFFFFE000);
				length = reference & 7;
				if (length != 0)
					length += 2;
				else
				{
					if (position >= source.Length)
						throw new PrsFormatException("The compressed stream ends before a reference length.", position);
					length = source[position++] + 1;
				}
			}
			else
			{
				int highLengthBit = ReadControlBit(source, ref position, ref control, ref controlBits);
				int lowLengthBit = ReadControlBit(source, ref position, ref control, ref controlBits);
				length = 2 * highLengthBit + lowLengthBit + 2;
				if (position >= source.Length)
					throw new PrsFormatException("The compressed stream ends before a reference distance.", position);
				offset = source[position++] | unchecked((int)0xFFFFFF00);
			}
			int start = written + offset;
			if (start < 0)
				throw new PrsFormatException("The reference points behind the start of the decompressed output.", position);
			if (length > destination.Length - written)
				throw SmallerDestination();
			for (int index = 0; index < length; index++)
				destination[written + index] = destination[start + index];
			written += length;
		}
	}

	/// <summary>
	/// Returns the next flag bit, loading another control byte when the current one is exhausted.
	/// </summary>
	/// <param name="source">The compressed stream being decoded.</param>
	/// <param name="position">Offset of the next unread source byte.</param>
	/// <param name="control">The control byte whose bits are being consumed.</param>
	/// <param name="controlBits">Number of bits still available in <paramref name="control"/>.</param>
	/// <returns>The next flag bit, least significant first.</returns>
	/// <exception cref="PrsFormatException">The stream ends before a control byte.</exception>
	private static int ReadControlBit(ReadOnlySpan<byte> source, ref int position, ref uint control, ref int controlBits)
	{
		if (controlBits == 0)
		{
			if (position >= source.Length)
				throw new PrsFormatException("The compressed stream ends before a control byte.", position);
			control = source[position++];
			controlBits = 8;
		}
		int bit = (int)(control & 1);
		control >>= 1;
		controlBits--;
		return bit;
	}

	/// <summary>
	/// Creates the exception for a destination that cannot hold the decompressed stream.
	/// </summary>
	/// <returns>The exception to throw.</returns>
	private static ArgumentException SmallerDestination() => new("The destination is too small for the decompressed stream.", "destination");
}
