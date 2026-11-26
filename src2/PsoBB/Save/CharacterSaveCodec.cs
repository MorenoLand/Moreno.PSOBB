using System.Buffers.Binary;
using System.Diagnostics.CodeAnalysis;

namespace PsoBB.Save;

/// <summary>
/// Parses, seals and validates the fixed 0xBAA4-byte PSO_CHARACTER image.
/// </summary>
/// <remarks>
/// The loader at <c>0x006C1C9C</c> accepts the first 0xBAA4 bytes, clears the checksum and reserved
/// word, and compares a reflected CRC-32; <c>0x006C1BDC</c> then accepts a zero or
/// <c>0xC87ED5B1</c> signature in every record. <c>0x006C26F8</c> produces the checksum, and
/// <c>0x006C26E4</c> increments the save counter. No OS calls are used here.
/// </remarks>
public static class CharacterSaveCodec
{
	/// <summary>The character record signature established by the save path.</summary>
	public const uint CharacterSignature = 0xC87ED5B1;

	/// <summary>The reflected CRC-32 polynomial used at <c>0x006C26F8</c>.</summary>
	public const uint CrcPolynomial = 0xEDB88320;

	/// <summary>
	/// Parses the first 0xBAA4 bytes of a PSO_CHARACTER image.
	/// </summary>
	/// <param name="data">The file bytes; trailing bytes after the fixed image are ignored.</param>
	/// <returns>The parsed image.</returns>
	/// <exception cref="CharacterSaveFormatException">The data is shorter than 0xBAA4 bytes.</exception>
	public static CharacterSave Parse(ReadOnlySpan<byte> data)
	{
		if (!TryParse(data, out CharacterSave? save))
			throw new CharacterSaveFormatException("The character save is truncated.", data.Length);
		return save;
	}

	/// <summary>
	/// Tries to parse the first 0xBAA4 bytes of a PSO_CHARACTER image.
	/// </summary>
	/// <param name="data">The file bytes; trailing bytes after the fixed image are ignored.</param>
	/// <param name="save">The parsed image, or <see langword="null"/> when the data is short.</param>
	/// <returns>Whether a complete image was present.</returns>
	public static bool TryParse(ReadOnlySpan<byte> data, [NotNullWhen(true)] out CharacterSave? save)
	{
		if (data.Length < CharacterSave.Length)
		{
			save = null;
			return false;
		}
		save = new CharacterSave(data[..CharacterSave.Length].ToArray());
		return true;
	}

	/// <summary>
	/// Recomputes the CRC-32 over the complete image with the checksum word treated as zero.
	/// </summary>
	/// <param name="data">A buffer of exactly 0xBAA4 bytes.</param>
	/// <returns>The checksum over the bytes the loader hashes at <c>0x006C1C9C</c>.</returns>
	/// <exception cref="ArgumentException">The buffer length is not 0xBAA4.</exception>
	public static uint ComputeChecksum(ReadOnlySpan<byte> data)
	{
		if (data.Length != CharacterSave.Length)
			throw new ArgumentException($"A character save is exactly 0x{CharacterSave.Length:X} bytes.", nameof(data));
		uint crc = 0xFFFFFFFFu;
		for (int index = 0; index < data.Length; index++)
		{
			byte value = index < 4 ? (byte)0 : data[index];
			crc ^= value;
			for (int bit = 0; bit < 8; bit++)
				crc = (crc & 1u) != 0 ? (crc >> 1) ^ CrcPolynomial : crc >> 1;
		}
		return ~crc;
	}

	/// <summary>
	/// Clears the checksum and reserved words, then stores the recomputed CRC-32 at offset zero.
	/// </summary>
	/// <param name="data">A buffer of exactly 0xBAA4 bytes.</param>
	/// <returns>The checksum written at offset zero.</returns>
	/// <exception cref="ArgumentException">The buffer length is not 0xBAA4.</exception>
	[Original(0x006C26F8)]
	public static uint Seal(Span<byte> data)
	{
		if (data.Length != CharacterSave.Length)
			throw new ArgumentException($"A character save is exactly 0x{CharacterSave.Length:X} bytes.", nameof(data));
		data[..4].Clear();
		data.Slice(CharacterSave.ReservedOffset, 4).Clear();
		uint checksum = ComputeChecksum(data);
		BinaryPrimitives.WriteUInt32LittleEndian(data, checksum);
		return checksum;
	}

	/// <summary>
	/// Validates the checksum and the four character signatures.
	/// </summary>
	/// <param name="data">The image bytes; trailing bytes after the fixed image are ignored.</param>
	/// <returns>The original status: 0 absent, 1 checksum mismatch, 5 signature mismatch, 7 valid.</returns>
	/// <exception cref="CharacterSaveFormatException">The non-empty data is shorter than 0xBAA4 bytes.</exception>
	[Original(0x006C1BDC)]
	public static CharacterSaveStatus Validate(ReadOnlySpan<byte> data)
	{
		if (data.IsEmpty)
			return CharacterSaveStatus.Absent;
		if (data.Length < CharacterSave.Length)
			throw new CharacterSaveFormatException("The character save is truncated.", data.Length);
		ReadOnlySpan<byte> image = data[..CharacterSave.Length];
		if (BinaryPrimitives.ReadUInt32LittleEndian(image) != ComputeChecksum(image))
			return CharacterSaveStatus.ChecksumMismatch;
		for (int slot = 0; slot < CharacterSave.SlotCount; slot++)
		{
			int offset = CharacterSave.SlotOffset + slot * CharacterSave.SlotLength;
			uint signature = BinaryPrimitives.ReadUInt32LittleEndian(image[(offset + CharacterSaveSlot.SignatureOffset)..]);
			if (signature != 0 && signature != CharacterSignature)
				return CharacterSaveStatus.SignatureMismatch;
		}
		return CharacterSaveStatus.Valid;
	}

	/// <summary>
	/// Validates a parsed image.
	/// </summary>
	/// <param name="save">The image to validate.</param>
	/// <returns>The original status.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="save"/> is null.</exception>
	public static CharacterSaveStatus Validate(CharacterSave save)
	{
		ArgumentNullException.ThrowIfNull(save);
		return Validate(save.Bytes);
	}

	/// <summary>
	/// Compares an in-memory 0x29C8-byte system chunk with one stored slot at <c>0x006C2608</c>.
	/// </summary>
	/// <param name="systemRecord">The in-memory system chunk, or empty for the original null pointer.</param>
	/// <param name="existing">The stored image, or <see langword="null"/> for the original null pointer.</param>
	/// <param name="slot">The stored record index from zero through three.</param>
	/// <param name="saveCount">The candidate image's counter at offset 0xBA9C.</param>
	/// <returns>The original comparison status.</returns>
	/// <exception cref="ArgumentException">The system chunk is shorter than 0x18 bytes.</exception>
	/// <exception cref="ArgumentOutOfRangeException">The slot is outside the four records.</exception>
	[Original(0x006C2608)]
	public static CharacterSaveComparison CompareSystemRecord(ReadOnlySpan<byte> systemRecord, CharacterSave? existing, int slot, uint saveCount)
	{
		if (systemRecord.IsEmpty || existing is null)
			return CharacterSaveComparison.Absent;
		if (systemRecord.Length < 0x18)
			throw new ArgumentException("A system record needs at least 0x18 bytes.", nameof(systemRecord));
		ReadOnlySpan<byte> stored = existing[slot].SystemRecord;
		uint memoryCount = BinaryPrimitives.ReadUInt32LittleEndian(systemRecord[0x14..]);
		uint storedCount = BinaryPrimitives.ReadUInt32LittleEndian(stored[0x14..]);
		if (memoryCount > storedCount)
			return CharacterSaveComparison.Newer;
		if (BinaryPrimitives.ReadUInt32LittleEndian(systemRecord[0x04..]) != BinaryPrimitives.ReadUInt32LittleEndian(stored[0x04..]))
			return CharacterSaveComparison.TimestampMismatch;
		if (BinaryPrimitives.ReadUInt32LittleEndian(systemRecord[0x08..]) != CharacterSignature)
			return CharacterSaveComparison.SignatureMismatch;
		if (BinaryPrimitives.ReadUInt32LittleEndian(stored[0x08..]) != CharacterSignature)
			return CharacterSaveComparison.SignatureMismatch;
		return saveCount != existing.SaveCount ? CharacterSaveComparison.SaveCountMismatch : CharacterSaveComparison.Match;
	}
}

/// <summary>
/// The status values returned by the original save validation at <c>0x006C1BDC</c>.
/// </summary>
public enum CharacterSaveStatus
{
	/// <summary>No image was supplied.</summary>
	Absent = 0,

	/// <summary>The stored CRC-32 does not match the image.</summary>
	ChecksumMismatch = 1,

	/// <summary>A character record has a non-zero signature other than 0xC87ED5B1.</summary>
	SignatureMismatch = 5,

	/// <summary>The checksum and all character signatures are acceptable.</summary>
	Valid = 7,
}

/// <summary>
/// The status values returned by the system-record comparison at <c>0x006C2608</c>.
/// </summary>
public enum CharacterSaveComparison
{
	/// <summary>Either input was absent.</summary>
	Absent = 0,

	/// <summary>The in-memory save counter is greater than the stored counter.</summary>
	Newer = 2,

	/// <summary>The marker at 0x4E0 differs.</summary>
	TimestampMismatch = 4,

	/// <summary>Either system chunk lacks the 0xC87ED5B1 signature.</summary>
	SignatureMismatch = 5,

	/// <summary>The candidate and stored save counters differ.</summary>
	SaveCountMismatch = 6,

	/// <summary>Every compared field matches.</summary>
	Match = 7,
}
