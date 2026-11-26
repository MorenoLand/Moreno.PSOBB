using System.Buffers.Binary;

namespace PsoBB.Save;

/// <summary>
/// The 0xBAA4-byte PSO_CHARACTER image: a checksum followed by four 0x2EA4-byte character records.
/// </summary>
/// <remarks>
/// The record count and stride come from the constructor at <c>0x006C17F0</c>, the four-record
/// construction at <c>0x006C1C9C</c>, the 0x4DC/0x29C8 merge at <c>0x006C3B1D</c> and the checksum
/// at <c>0x006C26F8</c>. Bytes whose meaning is not proven stay opaque and round-trip unchanged.
/// </remarks>
public sealed class CharacterSave
{
	/// <summary>The fixed image length the loader allocates and reads.</summary>
	public const int Length = 0xBAA4;

	/// <summary>The number of 0x2EA4-byte character records.</summary>
	public const int SlotCount = 4;

	/// <summary>The fixed length of one character record.</summary>
	public const int SlotLength = 0x2EA4;

	/// <summary>The offset of the first character record.</summary>
	public const int SlotOffset = 0x04;

	/// <summary>The offset of the eight-byte flag word set by <c>0x0077BE58</c>.</summary>
	public const int FlagsOffset = 0xBA94;

	/// <summary>The offset of the save counter incremented by <c>0x006C26E4</c>.</summary>
	public const int SaveCountOffset = 0xBA9C;

	/// <summary>The offset of the reserved word the checksum routine clears.</summary>
	public const int ReservedOffset = 0xBAA0;

	/// <summary>The number of flag bits <c>0x0077BE58</c> accepts (indices zero through 0x30).</summary>
	public const int FlagCount = 0x31;

	private readonly byte[] _data;
	private readonly CharacterSaveSlot[] _slots;

	internal CharacterSave(byte[] data)
	{
		_data = data;
		_slots = new CharacterSaveSlot[SlotCount];
		for (int slot = 0; slot < _slots.Length; slot++)
			_slots[slot] = new CharacterSaveSlot(this, slot);
	}

	/// <summary>Gets the complete image bytes.</summary>
	public ReadOnlySpan<byte> Bytes => _data;

	/// <summary>Gets the four character records in file order.</summary>
	public IReadOnlyList<CharacterSaveSlot> Slots => _slots;

	/// <summary>Gets the stored CRC-32 at offset zero.</summary>
	public uint Checksum => BinaryPrimitives.ReadUInt32LittleEndian(_data);

	/// <summary>Gets or sets the save counter at <see cref="SaveCountOffset"/>.</summary>
	/// <remarks>Changing the counter invalidates the checksum until <see cref="Seal"/> runs.</remarks>
	public uint SaveCount
	{
		get => BinaryPrimitives.ReadUInt32LittleEndian(_data.AsSpan(SaveCountOffset));
		set => BinaryPrimitives.WriteUInt32LittleEndian(_data.AsSpan(SaveCountOffset), value);
	}

	/// <summary>Gets or sets the eight flag bytes at <see cref="FlagsOffset"/>.</summary>
	/// <remarks>Changing the flags invalidates the checksum until <see cref="Seal"/> runs.</remarks>
	public ulong Flags
	{
		get => BinaryPrimitives.ReadUInt64LittleEndian(_data.AsSpan(FlagsOffset));
		set => BinaryPrimitives.WriteUInt64LittleEndian(_data.AsSpan(FlagsOffset), value);
	}

	/// <summary>Gets a value indicating whether the stored checksum matches the image.</summary>
	public bool ChecksumValid => Checksum == CharacterSaveCodec.ComputeChecksum(Bytes);

	/// <summary>
	/// Gets one character record.
	/// </summary>
	/// <param name="slot">Record index from zero through three.</param>
	/// <returns>The character record.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The index is outside the four records.</exception>
	public CharacterSaveSlot this[int slot] => (uint)slot < (uint)_slots.Length
		? _slots[slot]
		: throw new ArgumentOutOfRangeException(nameof(slot), slot, "The save has four character records.");

	/// <summary>
	/// Gets one flag bit in the range <c>0x0077BE58</c> accepts.
	/// </summary>
	/// <param name="bit">Bit index from zero through 0x30.</param>
	/// <returns>Whether the bit is set.</returns>
	/// <exception cref="ArgumentOutOfRangeException">The bit is outside the accepted range.</exception>
	public bool IsFlagSet(int bit) => (ReadFlagWord(bit) & FlagMask(bit)) != 0;

	/// <summary>
	/// Sets one flag bit in the range <c>0x0077BE58</c> accepts.
	/// </summary>
	/// <param name="bit">Bit index from zero through 0x30.</param>
	/// <param name="value">Whether the bit becomes set.</param>
	/// <exception cref="ArgumentOutOfRangeException">The bit is outside the accepted range.</exception>
	public void SetFlag(int bit, bool value)
	{
		int offset = FlagsOffset + (bit >> 5) * 4;
		uint word = ReadFlagWord(bit);
		uint mask = FlagMask(bit);
		BinaryPrimitives.WriteUInt32LittleEndian(_data.AsSpan(offset), value ? word | mask : word & ~mask);
	}

	/// <summary>Recomputes and stores the image checksum.</summary>
	/// <returns>The checksum written at offset zero.</returns>
	public uint Seal() => CharacterSaveCodec.Seal(_data);

	/// <summary>Validates the checksum and the four record signatures.</summary>
	/// <returns>The original validation status.</returns>
	public CharacterSaveStatus Validate() => CharacterSaveCodec.Validate(Bytes);

	/// <summary>Copies the complete image, including its current checksum and opaque bytes.</summary>
	/// <returns>A new 0xBAA4-byte array.</returns>
	public byte[] ToArray() => (byte[])_data.Clone();

	/// <summary>
	/// Copies the complete image into a caller-owned buffer.
	/// </summary>
	/// <param name="destination">A buffer of exactly 0xBAA4 bytes.</param>
	/// <exception cref="ArgumentException">The destination length is not 0xBAA4.</exception>
	public void WriteTo(Span<byte> destination)
	{
		if (destination.Length != Length)
			throw new ArgumentException($"A character save is exactly 0x{Length:X} bytes.", nameof(destination));
		_data.CopyTo(destination);
	}

	private uint ReadFlagWord(int bit)
	{
		if ((uint)bit >= FlagCount)
			throw new ArgumentOutOfRangeException(nameof(bit), bit, "The save exposes bits zero through 0x30.");
		return BinaryPrimitives.ReadUInt32LittleEndian(_data.AsSpan(FlagsOffset + (bit >> 5) * 4));
	}

	private static uint FlagMask(int bit)
	{
		if ((uint)bit >= FlagCount)
			throw new ArgumentOutOfRangeException(nameof(bit), bit, "The save exposes bits zero through 0x30.");
		return 1u << (bit & 31);
	}
}
