namespace PsoBB.Save;

/// <summary>
/// The reflected CRC-32 both the character and system save images store at offset zero.
/// </summary>
public static class SaveChecksum
{
	/// <summary>The polynomial the original uses.</summary>
	public const uint Polynomial = 0xEDB88320;

	/// <summary>
	/// Computes the CRC-32 with the first four bytes treated as zero.
	/// </summary>
	/// <param name="data">The image bytes.</param>
	/// <returns>The checksum stored at offset zero.</returns>
	public static uint Compute(ReadOnlySpan<byte> data)
	{
		uint crc = 0xFFFFFFFFu;
		for (int index = 0; index < data.Length; index++)
		{
			byte value = index < 4 ? (byte)0 : data[index];
			crc ^= value;
			for (int bit = 0; bit < 8; bit++)
				crc = (crc & 1u) != 0 ? (crc >> 1) ^ Polynomial : crc >> 1;
		}
		return ~crc;
	}
}
