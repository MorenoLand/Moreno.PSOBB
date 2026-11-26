using PsoBB.Data;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds the synthetic progress-bar archives and a data registry for the online-scene tests.
/// </summary>
internal static class OnlineTestData
{
	/// <summary>
	/// Builds a GSL archive with the requested progress-bar archives and opens the registry.
	/// </summary>
	/// <param name="includeEnglish">Whether the English progress-bar archive is present.</param>
	/// <param name="includeStandalone">Whether the language-neutral progress-bar archive is present.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeEnglish = true, bool includeStandalone = false)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeEnglish)
			entries.Add(("f256_slot_eng.prs", ArchiveSamples.Compress(TitleTestData.Xvm((256, 256))), 0));
		if (includeStandalone)
			entries.Add(("f256_slot.prs", ArchiveSamples.Compress(TitleTestData.Xvm((256, 256))), 0));
		byte[] gsl = ArchiveSamples.Gsl([.. entries]);
		using (IGameFile? file = fileSystem.Open(GamePath.Parse("data/data.gsl"), GameFileAccess.Write, GameFileMode.Create))
		{
			Assert.NotNull(file);
			file.Write(gsl);
		}
		return new DataFileRegistry(fileSystem, DataArchiveSource.Gsl("data/data.gsl"));
	}
}
