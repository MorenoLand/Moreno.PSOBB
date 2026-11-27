using System.Buffers.Binary;

namespace PsoBB.Imaging;

/// <summary>
/// Reads a cursor from the resource section of the retail executable.
/// </summary>
public static class ExecutableCursorReader
{
	/// <summary>The resource id of the client's own cursor, loaded at start-up.</summary>
	public const int ClientCursorId = 0x66;

	private const int ResourceTypeCursor = 1;
	private const int ResourceTypeGroupCursor = 12;
	private const int ResourceDirectoryIndex = 2;

	/// <summary>
	/// Finds a cursor group by id and returns the image the system needs to create the cursor.
	/// </summary>
	/// <param name="executable">The bytes of the PE executable.</param>
	/// <param name="groupId">The cursor group id.</param>
	/// <param name="cursor">The hotspot header followed by the device-independent bitmap, as stored in the resource.</param>
	/// <returns><see langword="true"/> when the group and its image exist.</returns>
	[Original(0x0082CB18)]
	public static bool TryRead(ReadOnlySpan<byte> executable, int groupId, out byte[] cursor)
	{
		cursor = [];
		if (!TryFindResourceDirectory(executable, out int rootOffset, out int sectionRva, out int sectionOffset, out int sectionSize))
			return false;
		if (!TryFindLeaf(executable, rootOffset, ResourceTypeGroupCursor, groupId, out int groupRva, out int groupSize))
			return false;
		int groupOffset = sectionOffset + groupRva - sectionRva;
		if (groupSize < 6 + 14 || groupOffset < 0 || groupOffset + groupSize > executable.Length)
			return false;
		ReadOnlySpan<byte> group = executable.Slice(groupOffset, groupSize);
		if (BinaryPrimitives.ReadUInt16LittleEndian(group[4..]) == 0)
			return false;
		int imageId = BinaryPrimitives.ReadUInt16LittleEndian(group[(6 + 12)..]);
		if (!TryFindLeaf(executable, rootOffset, ResourceTypeCursor, imageId, out int imageRva, out int imageSize))
			return false;
		int imageOffset = sectionOffset + imageRva - sectionRva;
		if (imageSize < 4 || imageOffset < 0 || imageOffset + imageSize > executable.Length || imageRva - sectionRva + imageSize > sectionSize)
			return false;
		cursor = executable.Slice(imageOffset, imageSize).ToArray();
		return true;
	}

	private static bool TryFindResourceDirectory(ReadOnlySpan<byte> executable, out int rootOffset, out int sectionRva, out int sectionOffset, out int sectionSize)
	{
		rootOffset = 0;
		sectionRva = 0;
		sectionOffset = 0;
		sectionSize = 0;
		if (executable.Length < 0x40 || BinaryPrimitives.ReadUInt16LittleEndian(executable) != 0x5A4D)
			return false;
		int peOffset = BinaryPrimitives.ReadInt32LittleEndian(executable[0x3C..]);
		if (peOffset < 0 || peOffset + 24 > executable.Length || BinaryPrimitives.ReadUInt32LittleEndian(executable[peOffset..]) != 0x00004550)
			return false;
		int sectionCount = BinaryPrimitives.ReadUInt16LittleEndian(executable[(peOffset + 6)..]);
		int optionalSize = BinaryPrimitives.ReadUInt16LittleEndian(executable[(peOffset + 20)..]);
		int optional = peOffset + 24;
		bool pe32Plus = BinaryPrimitives.ReadUInt16LittleEndian(executable[optional..]) == 0x20B;
		int directory = optional + (pe32Plus ? 112 : 96) + ResourceDirectoryIndex * 8;
		if (directory + 8 > executable.Length)
			return false;
		int resourceRva = BinaryPrimitives.ReadInt32LittleEndian(executable[directory..]);
		if (resourceRva == 0)
			return false;
		int table = optional + optionalSize;
		for (int index = 0; index < sectionCount; index++)
		{
			int entry = table + index * 40;
			if (entry + 40 > executable.Length)
				return false;
			int virtualSize = BinaryPrimitives.ReadInt32LittleEndian(executable[(entry + 8)..]);
			int virtualAddress = BinaryPrimitives.ReadInt32LittleEndian(executable[(entry + 12)..]);
			int rawSize = BinaryPrimitives.ReadInt32LittleEndian(executable[(entry + 16)..]);
			int rawOffset = BinaryPrimitives.ReadInt32LittleEndian(executable[(entry + 20)..]);
			if (resourceRva < virtualAddress || resourceRva >= virtualAddress + Math.Max(virtualSize, rawSize))
				continue;
			sectionRva = virtualAddress;
			sectionOffset = rawOffset;
			sectionSize = Math.Max(virtualSize, rawSize);
			rootOffset = rawOffset + resourceRva - virtualAddress;
			return rootOffset >= 0 && rootOffset + 16 <= executable.Length;
		}
		return false;
	}

	private static bool TryFindLeaf(ReadOnlySpan<byte> executable, int rootOffset, int type, int id, out int dataRva, out int dataSize)
	{
		dataRva = 0;
		dataSize = 0;
		if (!TryFindEntry(executable, rootOffset, type, out int typeOffset) || (typeOffset & 0x80000000) == 0)
			return false;
		if (!TryFindEntry(executable, rootOffset + (typeOffset & 0x7FFFFFFF), id, out int idOffset) || (idOffset & 0x80000000) == 0)
			return false;
		int languages = rootOffset + (idOffset & 0x7FFFFFFF);
		if (languages + 20 > executable.Length)
			return false;
		int count = BinaryPrimitives.ReadUInt16LittleEndian(executable[(languages + 12)..]) + BinaryPrimitives.ReadUInt16LittleEndian(executable[(languages + 14)..]);
		if (count == 0)
			return false;
		int leafOffset = BinaryPrimitives.ReadInt32LittleEndian(executable[(languages + 20)..]);
		int leaf = rootOffset + leafOffset;
		if ((leafOffset & 0x80000000) != 0 || leaf + 16 > executable.Length)
			return false;
		dataRva = BinaryPrimitives.ReadInt32LittleEndian(executable[leaf..]);
		dataSize = BinaryPrimitives.ReadInt32LittleEndian(executable[(leaf + 4)..]);
		return dataSize > 0;
	}

	private static bool TryFindEntry(ReadOnlySpan<byte> executable, int directoryOffset, int id, out int target)
	{
		target = 0;
		if (directoryOffset < 0 || directoryOffset + 16 > executable.Length)
			return false;
		int named = BinaryPrimitives.ReadUInt16LittleEndian(executable[(directoryOffset + 12)..]);
		int ids = BinaryPrimitives.ReadUInt16LittleEndian(executable[(directoryOffset + 14)..]);
		for (int index = named; index < named + ids; index++)
		{
			int entry = directoryOffset + 16 + index * 8;
			if (entry + 8 > executable.Length)
				return false;
			if (BinaryPrimitives.ReadInt32LittleEndian(executable[entry..]) != id)
				continue;
			target = BinaryPrimitives.ReadInt32LittleEndian(executable[(entry + 4)..]);
			return true;
		}
		return false;
	}
}
