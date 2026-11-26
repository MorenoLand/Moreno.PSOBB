using System.Buffers.Binary;
using System.Text;
using PsoBB.Data;
using PsoBB.Imaging;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds the synthetic title, particle-entry and effect archives used by the scene-2 title tests.
/// </summary>
internal static class Scene2TitleTestData
{
	/// <summary>
	/// Builds a GSL archive with the title and effect files and opens the registry.
	/// </summary>
	/// <param name="includeTitle">Whether the twenty-one-texture title archive is present.</param>
	/// <param name="includeEffects">Whether the particle-entry table and effect archive are present.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeTitle = true, bool includeEffects = true)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeTitle)
			entries.Add(("title_eng.prs", TitleXvm(), 0));
		if (includeEffects)
		{
			entries.Add(("particleentry.dat", ParticleEntryTable(), 0));
			entries.Add(("effect_nt.xvm", EffectXvm(), 0));
		}
		byte[] gsl = ArchiveSamples.Gsl([.. entries]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}

	/// <summary>
	/// Builds the twenty-one title textures with the retail dimensions.
	/// </summary>
	/// <returns>The complete title archive.</returns>
	internal static byte[] TitleXvm() => TitleTestData.Xvm(
		(256, 256), (256, 256), (256, 256),
		(256, 256), (256, 256), (256, 256), (256, 256),
		(128, 128), (128, 128), (128, 128), (128, 128),
		(512, 512), (512, 512),
		(256, 256), (256, 256), (256, 256), (256, 256),
		(128, 128), (128, 128), (128, 128), (128, 128));

	/// <summary>
	/// Builds the 512-record particle entry table with records 483 through 485 filled in.
	/// </summary>
	/// <returns>The complete table.</returns>
	internal static byte[] ParticleEntryTable()
	{
		byte[] table = new byte[512 * 152];
		WriteRecord(table, 483, "title_a", "ontaib", 2, 0xAB02Cu, 50, 10);
		WriteRecord(table, 484, "title_b", string.Empty, 2, 0xAB02Cu, 100, 20);
		WriteRecord(table, 485, "title_seiunn", "ki", 0, 0xAAEF7u, 350, 300);
		return table;
	}

	/// <summary>
	/// Builds a fifty-four-texture effect archive containing the two referenced global indices.
	/// </summary>
	/// <returns>The complete effect archive.</returns>
	internal static byte[] EffectXvm()
	{
		byte[][] chunks = new byte[54][];
		for (int index = 0; index < chunks.Length; index++)
		{
			uint id = (uint)(900 + index);
			int width = 8;
			int height = 8;
			if (index == 5)
			{
				id = 0xAB02Cu;
				width = 32;
				height = 32;
			}
			else if (index == 43)
			{
				id = 0xAAEF7u;
				width = 128;
				height = 128;
			}
			chunks[index] = TextureTestData.Xvr(XvmTextureFormat.Dxt1, id, width, height, new byte[width * height / 2]);
		}
		return TextureTestData.Xvm(chunks);
	}

	private static void WriteRecord(byte[] table, int index, string name, string secondaryName, int type, uint textureId, int field48, int field4C)
	{
		int offset = index * 152;
		Encoding.ASCII.GetBytes(name).CopyTo(table, offset);
		Encoding.ASCII.GetBytes(secondaryName).CopyTo(table, offset + Encoding.ASCII.GetByteCount(name) + 1);
		BinaryPrimitives.WriteInt32LittleEndian(table.AsSpan(offset + 0x10), type);
		BinaryPrimitives.WriteUInt32LittleEndian(table.AsSpan(offset + 0x14), textureId);
		BinaryPrimitives.WriteInt32LittleEndian(table.AsSpan(offset + 0x48), field48);
		BinaryPrimitives.WriteInt32LittleEndian(table.AsSpan(offset + 0x4C), field4C);
	}
}
