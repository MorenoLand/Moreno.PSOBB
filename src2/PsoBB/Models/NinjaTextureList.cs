using System.Buffers.Binary;
using System.Text;

namespace PsoBB.Models;

/// <summary>
/// The ordered texture names from an NJTL chunk.
/// </summary>
public sealed class NinjaTextureList
{
	private NinjaTextureList(string[] names)
	{
		Names = names;
	}

	/// <summary>Gets the texture names in render-state index order.</summary>
	public IReadOnlyList<string> Names { get; }

	/// <summary>
	/// Reads the texture-list header, entry array and null-terminated names.
	/// </summary>
	/// <param name="body">The NJTL body after pointer relocation.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The texture names.</returns>
	/// <exception cref="ModelFormatException">The list header, entries or names are invalid.</exception>
	internal static NinjaTextureList Parse(ReadOnlySpan<byte> body, int sourceOffset)
	{
		if (body.Length < 8)
			throw new ModelFormatException("The NJTL header is truncated.", sourceOffset);
		uint entriesOffset = BinaryPrimitives.ReadUInt32LittleEndian(body);
		uint count = BinaryPrimitives.ReadUInt32LittleEndian(body[4..]);
		if (count > int.MaxValue || count > (uint)body.Length / 0x0C)
			throw new ModelFormatException("The NJTL entry count is invalid.", sourceOffset + 4);
		if (entriesOffset > body.Length || count * 0x0C > body.Length - entriesOffset)
			throw new ModelFormatException("The NJTL entry array lies outside the chunk.", sourceOffset);
		string[] names = new string[(int)count];
		for (int index = 0; index < names.Length; index++)
		{
			int entryOffset = (int)entriesOffset + index * 0x0C;
			uint nameOffset = BinaryPrimitives.ReadUInt32LittleEndian(body[entryOffset..]);
			if (nameOffset >= body.Length)
				throw new ModelFormatException("The NJTL name pointer lies outside the chunk.", sourceOffset + entryOffset);
			int end = (int)nameOffset;
			while (end < body.Length && body[end] != 0)
				end++;
			if (end == body.Length)
				throw new ModelFormatException("The NJTL name is not terminated.", sourceOffset + (int)nameOffset);
			names[index] = Encoding.Latin1.GetString(body[(int)nameOffset..end]);
		}
		return new NinjaTextureList(names);
	}
}
