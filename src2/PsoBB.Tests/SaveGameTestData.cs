using PsoBB.Data;
using PsoBB.Imaging;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic save-screen archives so the scene tests never use retail data.
/// </summary>
internal static class SaveGameTestData
{
	/// <summary>
	/// Builds a GSL archive with both surfaces and the optional title track.
	/// </summary>
	/// <param name="includeAd">Whether the advertisement surface is present.</param>
	/// <param name="includeBackground">Whether the background surface is present.</param>
	/// <param name="includeMusic">Whether the title track is present.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeAd = true, bool includeBackground = true, bool includeMusic = true)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeAd)
			entries.Add(("f256_ad_pic_2.prs", ArchiveSamples.Compress(TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 64, 64, new byte[64 * 64 / 2])])), 0));
		if (includeBackground)
			entries.Add(("f256_backtext.prs", ArchiveSamples.Compress(TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 64, 64, new byte[64 * 64 / 2])])), 0));
		if (includeMusic)
			entries.Add(("data/ogg/title.ogg", Convert.FromBase64String(SyntheticOggTone.Samples), 0));
		byte[] gsl = ArchiveSamples.Gsl([.. entries]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}
}
