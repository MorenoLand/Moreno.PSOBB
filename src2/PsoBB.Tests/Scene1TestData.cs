using PsoBB.Data;
using PsoBB.Imaging;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic logo archives so the scene 1 tests never use retail data.
/// </summary>
internal static class Scene1TestData
{
	/// <summary>The number of sprites the simple logo descriptor names.</summary>
	internal const int SimpleCount = 8;

	/// <summary>The number of sprites the cinematic logo descriptor names.</summary>
	internal const int CinematicCount = 24;

	/// <summary>
	/// Builds a GSL archive with the logo entry and the requested number of sprites.
	/// </summary>
	/// <param name="includeLogo">Whether the logo archive is present.</param>
	/// <param name="count">The number of sprites in the archive.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeLogo = true, int count = SimpleCount)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeLogo)
			entries.Add(("logo.prs", ArchiveSamples.Compress(Logo(count)), 0));
		byte[] gsl = ArchiveSamples.Gsl([.. entries]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}

	/// <summary>
	/// Builds an XVM archive with the requested number of 64 by 64 DXT1 sprites.
	/// </summary>
	/// <param name="count">The number of sprites.</param>
	/// <returns>The complete archive bytes.</returns>
	internal static byte[] Logo(int count)
	{
		byte[][] chunks = new byte[count][];
		for (int index = 0; index < count; index++)
			chunks[index] = TextureTestData.Xvr(
				XvmTextureFormat.Dxt1,
				(uint)(0x100 + index),
				64,
				64,
				new byte[64 * 64 / 2]);
		return TextureTestData.Xvm(chunks);
	}

}
