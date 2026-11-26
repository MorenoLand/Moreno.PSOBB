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
	/// <param name="model">The model archive bytes, or the minimal one-file archive when omitted.</param>
	/// <returns>The opened registry.</returns>
	internal static DataFileRegistry Registry(bool includeModel = true, bool includeAd = true, bool includeBackground = true, bool includeMusic = true, byte[]? model = null)
	{
		MemoryFileSystem fileSystem = new();
		fileSystem.CreateDirectory(GamePath.Parse("data"));
		List<(string Name, byte[] Stored, int UncompressedSize)> entries = [];
		if (includeModel)
			entries.Add(("charamakingmot.bml", model ?? Model(), 0));
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
	/// Duplicates the synthetic model entry into the requested number of BML descriptors.
	/// </summary>
	/// <param name="count">The number of model entries.</param>
	/// <returns>The complete BML archive.</returns>
	internal static byte[] PlayerModel(int count)
	{
		byte[] single = ModelTestData.Bml();
		int modelSize = BinaryPrimitives.ReadInt32LittleEndian(single.AsSpan(0x60));
		int textureStored = BinaryPrimitives.ReadInt32LittleEndian(single.AsSpan(0x6C));
		int textureSize = BinaryPrimitives.ReadInt32LittleEndian(single.AsSpan(0x70));
		int modelOffset = 0x800;
		int textureOffset = Align(modelOffset + modelSize, 0x20);
		int entryLength = Align(textureOffset + textureStored, 0x20) - modelOffset;
		byte[] archive = new byte[modelOffset + entryLength * count];
		BinaryPrimitives.WriteUInt32LittleEndian(archive, 4);
		BinaryPrimitives.WriteUInt32LittleEndian(archive.AsSpan(4), (uint)count);
		archive[9] = 1;
		int position = modelOffset;
		for (int index = 0; index < count; index++)
		{
			int descriptor = 0x40 + index * 0x40;
			Encoding.ASCII.GetBytes($"player{index}.bml").CopyTo(archive, descriptor);
			BinaryPrimitives.WriteInt32LittleEndian(archive.AsSpan(descriptor + 0x20), modelSize);
			BinaryPrimitives.WriteInt32LittleEndian(archive.AsSpan(descriptor + 0x28), modelSize);
			BinaryPrimitives.WriteInt32LittleEndian(archive.AsSpan(descriptor + 0x2C), textureStored);
			BinaryPrimitives.WriteInt32LittleEndian(archive.AsSpan(descriptor + 0x30), textureSize);
			single.AsSpan(modelOffset, modelSize).CopyTo(archive.AsSpan(position));
			position = Align(position + modelSize, 0x20);
			single.AsSpan(textureOffset, textureStored).CopyTo(archive.AsSpan(position));
			position = Align(position + textureStored, 0x20);
		}
		return archive;
	}

	/// <summary>
	/// Builds one 64 by 64 DXT1 texture archive.
	/// </summary>
	/// <returns>The complete XVM archive.</returns>
	internal static byte[] Xvm() => TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 64, 64, new byte[64 * 64 / 2])]);

	private static int Align(int value, int alignment) => (value + alignment - 1) & ~(alignment - 1);
}
