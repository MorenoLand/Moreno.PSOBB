using PsoBB.Platform;

namespace PsoBB.Net.Patch;

/// <summary>
/// The client's standard reflected CRC-32 used for patch checksums.
/// </summary>
public static class PatchCrc32
{
	private const uint Polynomial = 0xEDB88320;
	private static readonly uint[] Table = BuildTable();

	/// <summary>
	/// Computes the checksum of a byte span.
	/// </summary>
	/// <param name="data">The bytes to checksum.</param>
	/// <returns>The reflected CRC-32.</returns>
	public static uint Compute(ReadOnlySpan<byte> data)
	{
		uint crc = uint.MaxValue;
		foreach (byte value in data)
			crc = (crc >> 8) ^ Table[(crc ^ value) & 0xFF];
		return ~crc;
	}

	/// <summary>
	/// Checksums one file, returning zero and a zero length when it cannot be opened.
	/// </summary>
	/// <param name="files">The host file system.</param>
	/// <param name="path">The file to read.</param>
	/// <param name="size">Receives the file length.</param>
	/// <returns>The reflected CRC-32, or zero when the file is missing.</returns>
	[Original(0x0070B64C)]
	public static uint ComputeFile(IGameFileSystem files, GamePath path, out uint size)
	{
		ArgumentNullException.ThrowIfNull(files);
		size = 0;
		using IGameFile? file = files.Open(path, GameFileAccess.Read, GameFileMode.Open);
		if (file is null)
			return 0;
		uint crc = uint.MaxValue;
		byte[] buffer = new byte[0x8000];
		int read;
		while ((read = file.Read(buffer)) > 0)
		{
			size += (uint)read;
			for (int index = 0; index < read; index++)
				crc = (crc >> 8) ^ Table[(crc ^ buffer[index]) & 0xFF];
		}
		return ~crc;
	}

	/// <summary>
	/// Builds the original 256-entry lookup table.
	/// </summary>
	/// <returns>The table indexed by the low checksum byte.</returns>
	[Original(0x0070B7CC)]
	private static uint[] BuildTable()
	{
		uint[] table = new uint[256];
		for (uint index = 0; index < table.Length; index++)
		{
			uint value = index;
			for (int bit = 0; bit < 8; bit++)
				value = (value & 1) != 0 ? (value >> 1) ^ Polynomial : value >> 1;
			table[index] = value;
		}
		return table;
	}
}
