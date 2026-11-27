using System.Buffers.Binary;

namespace PsoBB.Save;

/// <summary>
/// The character-record copy and inventory reset helpers used after a PSO_CHARACTER apply.
/// </summary>
/// <remarks>
/// <c>0x006BB754</c> copies 512 bytes from the system record at offset 24 into
/// <c>0x00A95680</c>. <c>0x006CA370</c> clears the 4808-byte item block through the 24-byte
/// <c>0x006CA398</c> reset, which itself uses the 20-byte <c>0x005D6A3C</c> reset.
/// The class-stat fixups at <c>0x006C7754</c>/<c>0x006AB1B4</c> need the 0x009CC4BC class table and
/// the 0x006931F8/0x00695730/0x006AC5CC stat functions, which are not ported here.
/// </remarks>
public static class CharacterSaveFixup
{
	/// <summary>The name buffer at <c>0x00A95680</c>.</summary>
	[OriginalGlobal(0x00A95680)]
	public static byte[]? NameBuffer { get; set; }

	/// <summary>The offset the system record supplies the name from.</summary>
	public const int NameOffset = 24;

	/// <summary>The number of bytes the name copy moves.</summary>
	public const int NameLength = 512;

	/// <summary>The length of one item block.</summary>
	public const int ItemBlockLength = 24;

	/// <summary>The number of bytes <c>0x006CA370</c> clears.</summary>
	public const int ItemBlockSpan = 4808;

	/// <summary>Clears the state for a test or a new session.</summary>
	public static void Reset() => NameBuffer = null;

	/// <summary>
	/// Copies the 512-byte system name into the name buffer.
	/// </summary>
	/// <exception cref="InvalidOperationException">The name or system buffer is not attached.</exception>
	[Original(0x006BB754)]
	public static void CopySystemName()
	{
		byte[] system = CharacterSaveLoad.SystemRecord ?? throw new InvalidOperationException("The system record buffer is not attached.");
		byte[] name = NameBuffer ?? throw new InvalidOperationException("The name buffer is not attached.");
		system.AsSpan(NameOffset, NameLength).CopyTo(name);
	}

	/// <summary>
	/// Clears the first eight bytes and every 24-byte item block in the 4808-byte span.
	/// </summary>
	/// <param name="block">The item block span.</param>
	/// <exception cref="ArgumentException">The span is smaller than 4808 bytes.</exception>
	[Original(0x006CA370)]
	public static void ClearItemBlock(Span<byte> block)
	{
		if (block.Length < ItemBlockSpan)
			throw new ArgumentException("The item block needs 4808 bytes.", nameof(block));
		block[..8].Clear();
		for (int offset = 8; offset < ItemBlockSpan; offset += ItemBlockLength)
			ClearItemBlockEntry(block.Slice(offset, ItemBlockLength));
	}

	/// <summary>
	/// Resets one 24-byte item block.
	/// </summary>
	/// <param name="item">The item block.</param>
	/// <exception cref="ArgumentException">The span is smaller than 24 bytes.</exception>
	[Original(0x006CA398)]
	public static void ClearItemBlockEntry(Span<byte> item)
	{
		if (item.Length < ItemBlockLength)
			throw new ArgumentException("An item block needs 24 bytes.", nameof(item));
		ClearItem(item);
		BinaryPrimitives.WriteUInt16LittleEndian(item[20..], 0);
		BinaryPrimitives.WriteUInt16LittleEndian(item[22..], 0);
	}

	/// <summary>
	/// Resets the 20-byte item fields: a -1 at offset 12 and zeros everywhere else.
	/// </summary>
	/// <param name="item">The item fields.</param>
	/// <exception cref="ArgumentException">The span is smaller than 20 bytes.</exception>
	[Original(0x005D6A3C)]
	public static void ClearItem(Span<byte> item)
	{
		if (item.Length < 20)
			throw new ArgumentException("An item needs 20 bytes.", nameof(item));
		item[..12].Clear();
		BinaryPrimitives.WriteInt32LittleEndian(item[12..], -1);
		BinaryPrimitives.WriteInt32LittleEndian(item[16..], 0);
	}
}
