using System.Buffers.Binary;
using PsoBB.Imaging;
using Xunit;

namespace PsoBB.Tests;

public sealed class ExecutableCursorReaderTests
{
	private const int SectionRva = 0x1000;
	private const int SectionOffset = 0x200;

	[Fact]
	public void ReadsTheCursorImageThroughItsGroup()
	{
		byte[] image = [1, 0, 2, 0, 0xAA, 0xBB, 0xCC, 0xDD];
		byte[] executable = BuildExecutable(0x66, 7, image);

		bool found = ExecutableCursorReader.TryRead(executable, 0x66, out byte[] cursor);

		Assert.True(found);
		Assert.Equal(image, cursor);
	}

	[Fact]
	public void ReportsAMissingGroup()
	{
		byte[] executable = BuildExecutable(0x66, 7, [0, 0, 0, 0]);

		Assert.False(ExecutableCursorReader.TryRead(executable, 0x67, out byte[] cursor));
		Assert.Empty(cursor);
	}

	[Fact]
	public void RejectsDataThatIsNotAnExecutable()
	{
		Assert.False(ExecutableCursorReader.TryRead(new byte[16], 0x66, out _));
		Assert.False(ExecutableCursorReader.TryRead(new byte[0x400], 0x66, out _));
	}

	private static byte[] BuildExecutable(int groupId, int imageId, byte[] image)
	{
		byte[] file = new byte[SectionOffset + 0x400];
		file[0] = (byte)'M';
		file[1] = (byte)'Z';
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(0x3C), 0x40);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(0x40), 0x00004550);
		BinaryPrimitives.WriteUInt16LittleEndian(file.AsSpan(0x40 + 6), 1);
		BinaryPrimitives.WriteUInt16LittleEndian(file.AsSpan(0x40 + 20), 224);
		int optional = 0x40 + 24;
		BinaryPrimitives.WriteUInt16LittleEndian(file.AsSpan(optional), 0x10B);
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(optional + 96 + 16), SectionRva);
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(optional + 96 + 20), 0x400);
		int section = optional + 224;
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(section + 8), 0x400);
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(section + 12), SectionRva);
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(section + 16), 0x400);
		BinaryPrimitives.WriteInt32LittleEndian(file.AsSpan(section + 20), SectionOffset);

		Span<byte> resources = file.AsSpan(SectionOffset);
		WriteDirectory(resources, 0, [(1, 0x80000000 | 0x20), (12, 0x80000000 | 0x80)]);
		WriteDirectory(resources, 0x20, [(imageId, 0x80000000 | 0x40)]);
		WriteDirectory(resources, 0x40, [(1033, 0x60)]);
		WriteDirectory(resources, 0x80, [(groupId, 0x80000000 | 0xA0)]);
		WriteDirectory(resources, 0xA0, [(1033, 0xC0)]);
		WriteData(resources, 0x60, SectionRva + 0x100, image.Length);
		image.CopyTo(resources[0x100..]);
		byte[] group = new byte[6 + 14];
		BinaryPrimitives.WriteUInt16LittleEndian(group.AsSpan(2), 2);
		BinaryPrimitives.WriteUInt16LittleEndian(group.AsSpan(4), 1);
		BinaryPrimitives.WriteUInt16LittleEndian(group.AsSpan(6 + 12), (ushort)imageId);
		WriteData(resources, 0xC0, SectionRva + 0x140, group.Length);
		group.CopyTo(resources[0x140..]);
		return file;
	}

	private static void WriteDirectory(Span<byte> resources, int offset, (int Id, uint Target)[] entries)
	{
		BinaryPrimitives.WriteUInt16LittleEndian(resources[(offset + 14)..], (ushort)entries.Length);
		for (int index = 0; index < entries.Length; index++)
		{
			BinaryPrimitives.WriteInt32LittleEndian(resources[(offset + 16 + index * 8)..], entries[index].Id);
			BinaryPrimitives.WriteUInt32LittleEndian(resources[(offset + 20 + index * 8)..], entries[index].Target);
		}
	}

	private static void WriteData(Span<byte> resources, int offset, int rva, int size)
	{
		BinaryPrimitives.WriteInt32LittleEndian(resources[offset..], rva);
		BinaryPrimitives.WriteInt32LittleEndian(resources[(offset + 4)..], size);
	}
}
