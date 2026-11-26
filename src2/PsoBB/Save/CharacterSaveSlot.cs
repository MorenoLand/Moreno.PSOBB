using System.Buffers.Binary;
using System.Text;

namespace PsoBB.Save;

/// <summary>
/// One 0x2EA4-byte character record inside a <see cref="CharacterSave"/>.
/// </summary>
/// <remarks>
/// The split at 0x4DC is proven by <c>0x006C1B1D</c> and <c>0x006C3B1D</c>, which copy a 0x4DC
/// player chunk and a 0x29C8 system chunk into a slot. Level and display name are read by
/// <c>0x006C44D0</c>, the signature by <c>0x006C1BDC</c>, and the class byte by <c>0x006C77D3</c>.
/// Section and team offsets come from the cross-referenced PSOBB character-file map.
/// </remarks>
public sealed class CharacterSaveSlot
{
	/// <summary>The fixed length of one character record.</summary>
	public const int Length = 0x2EA4;

	/// <summary>The offset of the 0x4DC-byte player chunk.</summary>
	public const int PlayerRecordOffset = 0x0000;

	/// <summary>The length of the player chunk copied by <c>0x006C3B1D</c>.</summary>
	public const int PlayerRecordLength = 0x04DC;

	/// <summary>The offset of the 0x29C8-byte system chunk.</summary>
	public const int SystemRecordOffset = 0x04DC;

	/// <summary>The length of the system chunk copied by <c>0x006C3B1D</c>.</summary>
	public const int SystemRecordLength = 0x29C8;

	/// <summary>The offset of the character validity marker compared by <c>0x006C2608</c>.</summary>
	public const int TimestampOffset = 0x04E0;

	/// <summary>The offset of the <c>0xC87ED5B1</c> character signature.</summary>
	public const int SignatureOffset = 0x04E4;

	/// <summary>The offset of the zero-based character level.</summary>
	public const int LevelOffset = 0x0364;

	/// <summary>The offset of the carried meseta value.</summary>
	public const int MesetaOffset = 0x036C;

	/// <summary>The offset of the section identifier.</summary>
	public const int SectionIdOffset = 0x03A0;

	/// <summary>The offset of the character class.</summary>
	public const int ClassOffset = 0x03A1;

	/// <summary>The offset of the fixed 0x20-byte UTF-16 display name.</summary>
	public const int NameOffset = 0x03C0;

	/// <summary>The length of the fixed UTF-16 display name.</summary>
	public const int NameLength = 0x20;

	/// <summary>The offset of the fixed 0x20-byte UTF-16 team name.</summary>
	public const int TeamNameOffset = 0x19F4;

	/// <summary>The length of the fixed UTF-16 team name.</summary>
	public const int TeamNameLength = 0x20;

	private readonly CharacterSave _save;
	private readonly int _slot;

	internal CharacterSaveSlot(CharacterSave save, int slot)
	{
		_save = save;
		_slot = slot;
	}

	/// <summary>Gets the record index from zero through three.</summary>
	public int Slot => _slot;

	/// <summary>Gets the complete fixed-length record bytes.</summary>
	public ReadOnlySpan<byte> Bytes => _save.Bytes.Slice(CharacterSave.SlotOffset + _slot * Length, Length);

	/// <summary>Gets the player chunk copied into the slot at <c>0x006C3B1D</c>.</summary>
	public ReadOnlySpan<byte> PlayerRecord => Bytes[..PlayerRecordLength];

	/// <summary>Gets the system chunk compared by <c>0x006C2608</c>.</summary>
	public ReadOnlySpan<byte> SystemRecord => Bytes[SystemRecordOffset..];

	/// <summary>Gets the stored <c>0xC87ED5B1</c> signature.</summary>
	public uint Signature => BinaryPrimitives.ReadUInt32LittleEndian(Bytes[SignatureOffset..]);

	/// <summary>Gets the validity marker at <see cref="TimestampOffset"/>.</summary>
	public uint Timestamp => BinaryPrimitives.ReadUInt32LittleEndian(Bytes[TimestampOffset..]);

	/// <summary>Gets the zero-based character level.</summary>
	public ushort Level => BinaryPrimitives.ReadUInt16LittleEndian(Bytes[LevelOffset..]);

	/// <summary>Gets the carried meseta value.</summary>
	public uint Meseta => BinaryPrimitives.ReadUInt32LittleEndian(Bytes[MesetaOffset..]);

	/// <summary>Gets the section identifier.</summary>
	public byte SectionId => Bytes[SectionIdOffset];

	/// <summary>Gets the character class.</summary>
	public byte Class => Bytes[ClassOffset];

	/// <summary>Gets the display name decoded from UTF-16LE up to the first zero unit.</summary>
	public string Name => ReadText(NameOffset, NameLength);

	/// <summary>Gets the team name decoded from UTF-16LE up to the first zero unit.</summary>
	public string TeamName => ReadText(TeamNameOffset, TeamNameLength);

	/// <summary>Gets the raw fixed-length display name bytes.</summary>
	public ReadOnlySpan<byte> NameBytes => Bytes.Slice(NameOffset, NameLength);

	/// <summary>Gets the raw fixed-length team name bytes.</summary>
	public ReadOnlySpan<byte> TeamNameBytes => Bytes.Slice(TeamNameOffset, TeamNameLength);

	private string ReadText(int offset, int length)
	{
		ReadOnlySpan<byte> bytes = Bytes.Slice(offset, length);
		int end = 0;
		while (end + 1 < bytes.Length && (bytes[end] | bytes[end + 1]) != 0)
			end += 2;
		string text = Encoding.Unicode.GetString(bytes[..end]);
		return text.Length != 0 && text[0] == '\uFEFF' ? text[1..] : text;
	}
}
