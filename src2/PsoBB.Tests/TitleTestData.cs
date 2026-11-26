using PsoBB.Data;
using PsoBB.Imaging;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic title archives and a data registry so the title tests never use retail data.
/// </summary>
internal static class TitleTestData
{
	/// <summary>
	/// Builds the four title archives inside a synthetic GSL archive and opens the registry.
	/// </summary>
	/// <param name="includeSelect">Whether the select-game archive is present.</param>
	/// <param name="includeTitle">Whether the title archive is present.</param>
	/// <param name="includeStandalone">Whether the standalone title atlas is present.</param>
	/// <param name="logo">Optional logo archive bytes.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeSelect = true, bool includeTitle = true, bool includeStandalone = true, byte[]? logo = null)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeTitle)
			entries.Add(("title.prs", Xvm((256, 256)), 0));
		entries.Add(("logo.prs", logo ?? LogoXvm(), 0));
		if (includeStandalone)
			entries.Add(("title2_eng.xvm", Xvm((256, 256)), 0));
		if (includeSelect)
		{
			byte[] select = Xvm((256, 256), (256, 256), (256, 256));
			entries.Add(("f256_selectgamen_a_eng.prs", ArchiveSamples.Compress(select), select.Length));
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
	/// Builds one or more DXT1 textures in an XVM archive.
	/// </summary>
	/// <param name="sizes">The width and height of each texture.</param>
	/// <returns>The complete archive.</returns>
	internal static byte[] Xvm(params (int Width, int Height)[] sizes)
	{
		byte[][] chunks = new byte[sizes.Length][];
		for (int index = 0; index < sizes.Length; index++)
		{
			int width = sizes[index].Width;
			int height = sizes[index].Height;
			chunks[index] = TextureTestData.Xvr(XvmTextureFormat.Dxt1, (uint)(900 + index), width, height, new byte[width * height / 2]);
		}
		return TextureTestData.Xvm(chunks);
	}

	/// <summary>
	/// Builds the eight logo textures with the retail dimensions.
	/// </summary>
	/// <returns>The complete logo archive.</returns>
	internal static byte[] LogoXvm() => Xvm((256, 256), (256, 256), (256, 256), (256, 256), (128, 128), (128, 128), (128, 128), (128, 128));

	/// <summary>
	/// Builds an eight-texture logo archive whose first texture has one white and one blue pixel.
	/// </summary>
	/// <returns>The complete logo archive.</returns>
	internal static byte[] ColorKeyLogoXvm()
	{
		byte[][] chunks = new byte[8][];
		chunks[0] = TextureTestData.Xvr(XvmTextureFormat.Bgra8888, 0, 2, 2, [255, 255, 255, 255, 0, 0, 255, 255, 255, 255, 255, 255, 0, 0, 255, 255]);
		for (int index = 1; index < chunks.Length; index++)
			chunks[index] = TextureTestData.Xvr(XvmTextureFormat.Bgra8888, (uint)index, 1, 1, [0, 0, 0, 255]);
		return TextureTestData.Xvm(chunks);
	}
}
