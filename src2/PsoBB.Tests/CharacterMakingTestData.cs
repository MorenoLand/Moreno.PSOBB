using System.Buffers.Binary;
using System.Text;
using PsoBB.Data;
using PsoBB.Imaging;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic character-making archives so the scene tests never use retail data.
/// </summary>
internal static class CharacterMakingTestData
{
	/// <summary>
	/// Builds a GSL archive with the model, both surfaces and the optional music entry.
	/// </summary>
	/// <param name="includeModel">Whether the model archive is present.</param>
	/// <param name="includeAd">Whether the advertisement surface is present.</param>
	/// <param name="includeBackground">Whether the background surface is present.</param>
	/// <param name="includeMusic">Whether the music entry is present.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeModel = true, bool includeAd = true, bool includeBackground = true, bool includeMusic = true)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeModel)
			entries.Add(("charamakingmot.bml", Model(), 0));
		if (includeAd)
			entries.Add(("f256_ad_pic_2.prs", ArchiveSamples.Compress(Xvm()), 0));
		if (includeBackground)
			entries.Add(("f256_backtext.prs", ArchiveSamples.Compress(Xvm()), 0));
		if (includeMusic)
			entries.Add(("data/ogg/chara.ogg", [0x4F, 0x67, 0x67, 0x53], 0));
		byte[] gsl = ArchiveSamples.Gsl([.. entries]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}

	/// <summary>
	/// Builds a minimal BML header with one empty file descriptor.
	/// </summary>
	/// <returns>The complete archive bytes.</returns>
	internal static byte[] Model()
	{
		byte[] data = new byte[0x800];
		BinaryPrimitives.WriteUInt32LittleEndian(data, 1);
		BinaryPrimitives.WriteUInt32LittleEndian(data.AsSpan(4), 1);
		data[8] = 0;
		data[9] = 0;
		Encoding.ASCII.GetBytes("charamakingmot.bml").CopyTo(data, 0x40);
		return data;
	}

	/// <summary>
	/// Builds one 64 by 64 DXT1 texture archive.
	/// </summary>
	/// <returns>The complete XVM archive.</returns>
	internal static byte[] Xvm() => TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 64, 64, new byte[64 * 64 / 2])]);
}
