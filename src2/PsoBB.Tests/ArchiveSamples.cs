using System.Buffers.Binary;
using System.Text;
using PsoBB.Archives;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic AFS and GSL archives for the container tests.
/// </summary>
internal static class ArchiveSamples
{
	/// <summary>
	/// Builds a valid AFS archive from byte-offset sections.
	/// </summary>
	/// <param name="sections">Each section's byte offset and contents.</param>
	/// <returns>The archive bytes.</returns>
	public static byte[] Afs(params (int Offset, byte[] Data)[] sections)
	{
		int length = AfsArchive.HeaderSize + sections.Length * AfsArchive.SectionRecordSize;
		foreach ((int offset, byte[] data) in sections)
			length = Math.Max(length, offset + data.Length);
		byte[] archive = new byte[length];
		BinaryPrimitives.WriteUInt32LittleEndian(archive, (uint)sections.Length);
		for (int index = 0; index < sections.Length; index++)
		{
			(int offset, byte[] data) = sections[index];
			int record = AfsArchive.HeaderSize + index * AfsArchive.SectionRecordSize;
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record), (uint)offset);
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record + 4), (uint)data.Length);
			data.CopyTo(archive.AsSpan(offset));
		}
		return archive;
	}

	/// <summary>
	/// Builds an AFS archive with an explicit header and section table.
	/// </summary>
	/// <param name="count">The declared section count.</param>
	/// <param name="reserved">The header's reserved word.</param>
	/// <param name="records">The records physically present in the table.</param>
	/// <returns>The archive bytes.</returns>
	public static byte[] AfsTable(uint count, uint reserved, params (uint Offset, uint Size)[] records)
	{
		byte[] archive = new byte[AfsArchive.HeaderSize + records.Length * AfsArchive.SectionRecordSize];
		BinaryPrimitives.WriteUInt32LittleEndian(archive, count);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(4), reserved);
		for (int index = 0; index < records.Length; index++)
		{
			(uint offset, uint size) = records[index];
			int record = AfsArchive.HeaderSize + index * AfsArchive.SectionRecordSize;
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record), offset);
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record + 4), size);
		}
		return archive;
	}

	/// <summary>
	/// Builds a GSL archive with a terminator slot after the entries.
	/// </summary>
	/// <param name="entries">Each entry's name, stored bytes and declared decompressed size.</param>
	/// <returns>The archive bytes.</returns>
	public static byte[] Gsl(params (string Name, byte[] Stored, int UncompressedSize)[] entries)
	{
		int directoryLength = (entries.Length + 1) * GslArchive.EntrySize;
		int sector = (directoryLength + GslArchive.SectorSize - 1) / GslArchive.SectorSize;
		int[] sectors = new int[entries.Length];
		int length = directoryLength;
		for (int index = 0; index < entries.Length; index++)
		{
			sectors[index] = sector;
			length = Math.Max(length, sector * GslArchive.SectorSize + entries[index].Stored.Length);
			sector += (entries[index].Stored.Length + GslArchive.SectorSize - 1) / GslArchive.SectorSize;
		}
		byte[] archive = new byte[length];
		for (int index = 0; index < entries.Length; index++)
		{
			(string name, byte[] stored, int uncompressedSize) = entries[index];
			int record = index * GslArchive.EntrySize;
			Encoding.Latin1.GetBytes(name).AsSpan(0, Math.Min(name.Length, GslArchive.NameLength)).CopyTo(archive.AsSpan(record));
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record + 0x20), (uint)sectors[index]);
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record + 0x24), (uint)stored.Length);
			BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(record + 0x28), (uint)uncompressedSize);
			stored.CopyTo(archive.AsSpan(sectors[index] * GslArchive.SectorSize));
		}
		return archive;
	}

	/// <summary>
	/// Compresses bytes as a PRS stream made only of literals.
	/// </summary>
	/// <param name="data">The bytes to encode.</param>
	/// <returns>A complete PRS stream that decodes to <paramref name="data"/>.</returns>
	public static byte[] Compress(ReadOnlySpan<byte> data)
	{
		List<byte> stream = [];
		int offset = 0;
		while (offset < data.Length)
		{
			int count = Math.Min(8, data.Length - offset);
			if (count < 8)
			{
				if (count <= 6)
				{
					int control = ((1 << count) - 1) | (1 << (count + 1));
					stream.Add((byte)control);
					foreach (byte value in data.Slice(offset, count))
						stream.Add(value);
					stream.Add(0);
					stream.Add(0);
				}
				else
				{
					stream.Add(0x7F);
					foreach (byte value in data.Slice(offset, 7))
						stream.Add(value);
					stream.Add(0x01);
					stream.Add(0);
					stream.Add(0);
				}
				return [.. stream];
			}
			stream.Add(0xFF);
			foreach (byte value in data.Slice(offset, 8))
				stream.Add(value);
			offset += 8;
		}
		stream.Add(0x02);
		stream.Add(0);
		stream.Add(0);
		return [.. stream];
	}
}
