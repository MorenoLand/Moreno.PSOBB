namespace PsoBB.Compression;

/// <summary>
/// Decompresses the LZSS stream used by a patch file whose 0x06 header flag is one.
/// </summary>
/// <remarks>
/// The stream has no end marker. A flag byte supplies eight decisions, least significant bit first; one copies the next
/// literal byte, and zero copies from the 0x1000-byte ring at the absolute 12-bit position in the next two bytes. The
/// low nibble plus three is the copy length. The stream ends at input exhaustion.
/// </remarks>
public static class LzssDecompressor
{
	private const int RingLength = 0x1000;
	private const int InitialPosition = 0xFEE;

	/// <summary>
	/// Expands one complete compressed stream.
	/// </summary>
	/// <param name="compressed">The complete LZSS stream.</param>
	/// <returns>The decompressed bytes.</returns>
	/// <exception cref="InvalidDataException">A literal or match header is truncated.</exception>
	[Original(0x007A5C80)]
	public static byte[] Decompress(ReadOnlySpan<byte> compressed)
	{
		byte[] ring = new byte[RingLength];
		using MemoryStream output = new();
		int position = InitialPosition;
		int input = 0;
		int flags = 0;
		int flagBits = 0;
		while (input < compressed.Length)
		{
			if (flagBits == 0)
			{
				flags = compressed[input++];
				flagBits = 8;
			}
			if ((flags & 1) != 0)
			{
				if (input >= compressed.Length)
					throw new InvalidDataException("The LZSS stream ends inside a literal.");
				byte value = compressed[input++];
				ring[position & (RingLength - 1)] = value;
				position++;
				output.WriteByte(value);
			}
			else
			{
				if (input + 2 > compressed.Length)
					throw new InvalidDataException("The LZSS stream ends inside a match header.");
				int source = compressed[input] | ((compressed[input + 1] & 0xF0) << 4);
				int length = (compressed[input + 1] & 0x0F) + 2;
				input += 2;
				for (int count = 0; count <= length; count++)
				{
					byte value = ring[source & (RingLength - 1)];
					ring[position & (RingLength - 1)] = value;
					position++;
					source++;
					output.WriteByte(value);
				}
			}
			flags >>= 1;
			flagBits--;
		}
		return output.ToArray();
	}
}
