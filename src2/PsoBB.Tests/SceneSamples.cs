using System.Buffers.Binary;
using System.Text;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic scene, collision, event, object, light and BML bytes for the loader tests.
/// </summary>
public static class SceneSamples
{
	/// <summary>Wraps a body in a REL trailer and pointer table.</summary>
	/// <param name="body">The body with pointer fields already holding file offsets.</param>
	/// <param name="rootOffset">The root offset stored in the trailer.</param>
	/// <param name="pointers">Sorted pointer-slot offsets.</param>
	/// <returns>The complete REL file.</returns>
	public static byte[] Rel(byte[] body, int rootOffset, params int[] pointers)
	{
		int[] sorted = [.. pointers];
		Array.Sort(sorted);
		byte[] table = new byte[sorted.Length * 2];
		int previousWord = 0;
		for (int index = 0; index < sorted.Length; index++)
		{
			if (sorted[index] < 0 || sorted[index] % 4 != 0)
				throw new ArgumentException("A REL pointer slot must be a positive multiple of four.", nameof(pointers));
			int word = sorted[index] / 4;
			BinaryPrimitives.WriteUInt16LittleEndian(table.AsSpan(index * 2), checked((ushort)(word - previousWord)));
			previousWord = word;
		}
		byte[] image = new byte[body.Length + table.Length + 0x24];
		body.CopyTo(image, 0);
		table.CopyTo(image, body.Length);
		int trailer = image.Length - 0x24;
		BinaryPrimitives.WriteUInt32LittleEndian(image.AsSpan(trailer + 4), (uint)body.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(image.AsSpan(trailer + 8), (uint)sorted.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(image.AsSpan(trailer + 0x0C), 1);
		BinaryPrimitives.WriteUInt32LittleEndian(image.AsSpan(trailer + 0x14), (uint)rootOffset);
		return image;
	}

	/// <summary>Builds a one-chunk <c>fmt2</c> geometry body and wraps it in a REL container.</summary>
	/// <returns>The complete REL file.</returns>
	public static byte[] RenderGeometry() => Rel(RenderGeometryBody(), 0, 0x10, 0x14, 0x38, 0x4C, 0x60, 0x94, 0x9C, 0xB0, 0xC4);

	/// <summary>Builds a one-section collision body and wraps it in a REL container.</summary>
	/// <returns>The complete REL file.</returns>
	public static byte[] Collision() => Rel(CollisionBody(), 0, 0, 4, 0x24, 0x2C);

	/// <summary>Builds a two-section big-endian room table.</summary>
	/// <returns>The complete <c>bm.bin</c> file.</returns>
	public static byte[] RoomGraph()
	{
		byte[] data = new byte[8 + 2 * 12 + 8];
		"vr1b"u8.CopyTo(data);
		BinaryPrimitives.WriteUInt32BigEndian(data.AsSpan(4), 2);
		WriteUInt32BigEndian(data, 8, 1);
		WriteUInt32BigEndian(data, 12, 2);
		WriteUInt32BigEndian(data, 16, 0);
		WriteUInt32BigEndian(data, 20, 2);
		WriteUInt32BigEndian(data, 24, 2);
		WriteUInt32BigEndian(data, 28, 2);
		BinaryPrimitives.WriteUInt16BigEndian(data.AsSpan(0x20), 1);
		BinaryPrimitives.WriteUInt16BigEndian(data.AsSpan(0x22), 2);
		BinaryPrimitives.WriteUInt16BigEndian(data.AsSpan(0x24), 1);
		BinaryPrimitives.WriteUInt16BigEndian(data.AsSpan(0x26), 2);
		return data;
	}

	/// <summary>Builds a two-section little-endian room table.</summary>
	/// <returns>The complete <c>bm.bin</c> file.</returns>
	public static byte[] LittleEndianRoomGraph()
	{
		byte[] data = new byte[8 + 2 * 12 + 8];
		"vr2b"u8.CopyTo(data);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 2);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(8), 10);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(12), 2);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(16), 0);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(20), 20);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(24), 2);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(28), 2);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x20), 10);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x22), 20);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x24), 10);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x26), 20);
		return data;
	}

	/// <summary>Builds an event table with one wave event and a four-byte clear-event tail.</summary>
	/// <returns>The complete <c>.evt</c> file.</returns>
	public static byte[] Events()
	{
		byte[] data = new byte[0x28];
		BinaryPrimitives.WriteUInt32LittleEndian(data, 0x28);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 0x10);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(8), 1);
		WriteUInt32(data, 0x10, 0x44E);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x14), 0x1A00);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x16), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x18), 3);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x1A), 2);
		WriteUInt32(data, 0x1C, 30);
		WriteUInt32(data, 0x20, 0);
		data[0x24] = 0xAA;
		data[0x25] = 0xBB;
		data[0x26] = 0xCC;
		data[0x27] = 0xDD;
		return data;
	}

	/// <summary>Builds a two-record object placement table.</summary>
	/// <returns>The complete object table.</returns>
	public static byte[] Objects()
	{
		byte[] data = new byte[2 * 0x44];
		WriteObject(data, 0, 0x1234, 5, -1.5f, 2.5f, 3.5f);
		WriteObject(data, 0x44, 0x5678, 9, 10.0f, 20.0f, 30.0f);
		return data;
	}

	/// <summary>Builds a one-entry light table.</summary>
	/// <returns>The complete light table.</returns>
	public static byte[] Lights()
	{
		byte[] data = new byte[0x44];
		WriteFloats(data, 0, 1, 0, 0, 0, 1, 0, 0.5f, 0.75f, 0.25f);
		WriteFloats(data, 0x28, 0.1f, 0.2f, 0.3f);
		WriteFloats(data, 0x38, 0.4f, 0.5f, 0.6f);
		return data;
	}

	/// <summary>Builds an uncompressed one-entry BML archive with one NJCM chunk.</summary>
	/// <returns>The complete BML archive.</returns>
	public static byte[] ModelArchive()
	{
		byte[] chunk = Chunk(0x4E4A434D, [1, 2, 3, 4, 5, 6, 7, 8]);
		return Bml("model.xj", chunk, false);
	}

	/// <summary>Builds an uncompressed one-entry BML archive with a texture stream.</summary>
	/// <returns>The complete BML archive.</returns>
	public static byte[] TexturedModelArchive()
	{
		byte[] chunk = Chunk(0x4E4A434D, [1, 2, 3, 4, 5, 6, 7, 8]);
		const int headerSize = 0x800;
		byte[] texture = [9, 8, 7, 6, 5];
		int textureOffset = (headerSize + chunk.Length + 0x1F) & ~0x1F;
		byte[] data = new byte[textureOffset + texture.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 1);
		data[9] = 1;
		Encoding.Latin1.GetBytes("model.xj").CopyTo(data, 0x40);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x60), (uint)chunk.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x68), (uint)chunk.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x6C), (uint)texture.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x70), (uint)texture.Length);
		chunk.CopyTo(data, headerSize);
		texture.CopyTo(data, textureOffset);
		return data;
	}

	/// <summary>Builds a compressed one-entry BML archive with one NJCM chunk.</summary>
	/// <returns>The complete BML archive.</returns>
	public static byte[] CompressedModelArchive()
	{
		byte[] chunk = Chunk(0x4E4A434D, [1, 2, 3, 4, 5, 6, 7, 8]);
		return Bml("model.xj", ArchiveSamples.Compress(chunk), true, chunk.Length);
	}

	/// <summary>Adds a loose file to an in-memory file system.</summary>
	/// <param name="files">The file system to write to.</param>
	/// <param name="path">The data-relative path.</param>
	/// <param name="bytes">The file contents.</param>
	public static void AddFile(MemoryFileSystem files, string path, byte[] bytes)
	{
		GamePath filePath = GamePath.Parse(path);
		if (!files.DirectoryExists(filePath.Parent))
			files.CreateDirectory(filePath.Parent);
		using IGameFile file = files.Open(filePath, GameFileAccess.ReadWrite, GameFileMode.Create) ?? throw new InvalidOperationException($"Could not create '{path}'.");
		file.Write(bytes);
	}

	private static byte[] Bml(string name, byte[] storedGeometry, bool compressed, int uncompressedSize = 0)
	{
		int headerSize = 0x40 + 0x40;
		headerSize = (headerSize + 0x7FF) & ~0x7FF;
		byte[] data = new byte[headerSize + storedGeometry.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 1);
		data[8] = compressed ? (byte)'P' : (byte)0;
		Encoding.Latin1.GetBytes(name).CopyTo(data, 0x40);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x60), (uint)storedGeometry.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(0x68), (uint)(compressed ? uncompressedSize : storedGeometry.Length));
		storedGeometry.CopyTo(data, headerSize);
		return data;
	}

	private static byte[] Chunk(uint fourCc, byte[] body)
	{
		byte[] chunk = new byte[8 + body.Length];
		BinaryPrimitives.WriteUInt32BigEndian(chunk, fourCc);
		BinaryPrimitives.WriteUInt32LittleEndian(chunk.AsSpan(4), (uint)body.Length);
		body.CopyTo(chunk, 8);
		return chunk;
	}

	public static byte[] RenderGeometryBody()
	{
		byte[] data = new byte[0x110];
		"fmt2"u8.CopyTo(data);
		WriteUInt32(data, 4, 0x40);
		BinaryPrimitives.WriteInt16LittleEndian(data.AsSpan(8), 1);
		WriteF32(data, 0x0C, 100.0f);
		WriteUInt32(data, 0x10, 0x18);
		WriteUInt32(data, 0x14, 0x108);
		WriteUInt32(data, 0x18, 7);
		WriteFloats(data, 0x1C, 10, 20, 30);
		WriteUInt32(data, 0x28, 1);
		WriteUInt32(data, 0x2C, 2);
		WriteUInt32(data, 0x30, 3);
		WriteF32(data, 0x34, 400.0f);
		WriteUInt32(data, 0x38, 0x4C);
		WriteUInt32(data, 0x40, 1);
		WriteUInt32(data, 0x48, 0x10000);
		WriteUInt32(data, 0x4C, 0x5C);
		WriteUInt32(data, 0x5C, 0x16);
		WriteUInt32(data, 0x60, 0x90);
		WriteFloats(data, 0x64, 1, 2, 3);
		WriteUInt32(data, 0x70, 4);
		WriteUInt32(data, 0x74, 5);
		WriteUInt32(data, 0x78, 6);
		WriteFloats(data, 0x7C, 1, 1, 1);
		WriteUInt32(data, 0x90, 0);
		WriteUInt32(data, 0x94, 0xAC);
		WriteUInt32(data, 0x98, 1);
		WriteUInt32(data, 0x9C, 0xBC);
		WriteUInt32(data, 0xA0, 1);
		WriteUInt32(data, 0xAC, 5);
		WriteUInt32(data, 0xB0, 0xD0);
		WriteUInt32(data, 0xB4, 0x18);
		WriteUInt32(data, 0xB8, 2);
		WriteUInt32(data, 0xBC, 0);
		WriteUInt32(data, 0xC0, 0);
		WriteUInt32(data, 0xC4, 0x100);
		WriteUInt32(data, 0xC8, 3);
		WriteFloats(data, 0xD0, 1, 2, 3);
		WriteFloats(data, 0xE8, 4, 5, 6);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x100), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x102), 1);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x104), 0);
		WriteUInt32(data, 0x108, 0xDEADBEEF);
		return data;
	}

	public static byte[] CollisionBody()
	{
		byte[] data = new byte[0x78];
		WriteUInt32(data, 0, 4);
		WriteUInt32(data, 4, 0x20);
		WriteFloats(data, 8, 5, 6, 7);
		WriteF32(data, 0x14, 8.0f);
		WriteUInt32(data, 0x18, 0x921);
		WriteUInt32(data, 0x24, 0x30);
		WriteUInt32(data, 0x28, 1);
		WriteUInt32(data, 0x2C, 0x54);
		WriteFloats(data, 0x30, 1, 2, 3, 4, 5, 6, 7, 8, 9);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x54), 0);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x56), 1);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x58), 2);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(0x5A), 0x0101);
		WriteFloats(data, 0x5C, 0, 1, 0, 4.5f, 5.5f, 6.5f, 7.5f);
		return data;
	}

	private static void WriteObject(byte[] data, int offset, ushort objectId, ushort section, float x, float y, float z)
	{
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset), objectId);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset + 2), 2);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset + 4), 0x1111);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset + 6), 8);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset + 8), 0x2222);
		BinaryPrimitives.WriteUInt16LittleEndian(data.AsSpan(offset + 0x0C), section);
		WriteFloats(data, offset + 0x10, x, y, z);
		WriteUInt32(data, offset + 0x1C, 10);
		WriteUInt32(data, offset + 0x20, 20);
		WriteUInt32(data, offset + 0x24, 30);
		for (int index = 0; index < 6; index++)
			WriteUInt32(data, offset + 0x28 + index * 4, (uint)(index + 1));
	}

	private static void WriteUInt32(byte[] data, int offset, uint value) => BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(offset), value);

	private static void WriteUInt32BigEndian(byte[] data, int offset, uint value) => BinaryPrimitives.WriteUInt32BigEndian(data.AsSpan(offset), value);

	private static void WriteF32(byte[] data, int offset, float value) => BinaryPrimitives.WriteSingleLittleEndian(data.AsSpan(offset), value);

	private static void WriteFloats(byte[] data, int offset, params float[] values)
	{
		for (int index = 0; index < values.Length; index++)
			WriteF32(data, offset + index * 4, values[index]);
	}
}
