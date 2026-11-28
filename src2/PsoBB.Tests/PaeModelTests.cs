using PsoBB.Imaging;
using PsoBB.Models;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PAE model section, its relocated pointers and its texture references.
/// </summary>
public sealed class PaeModelTests
{
	/// <summary>
	/// The model section yields a node tree, mesh and named texture references.
	/// </summary>
	[Fact]
	public void ModelSectionIsParsedAndTexturesArePaired()
	{
		PaeContainer archive = PaeContainer.Parse(ModelTestData.Pae());
		PaeModel model = archive.Model;
		Assert.Same(model, archive.Model);
		Assert.Equal(2, model.Model.Nodes.Count);
		Assert.Single(model.Model.Meshes);
		Assert.NotNull(model.TextureList);
		Assert.Equal(["tex0"], model.TextureList.Names);
		Assert.Same(model.TextureList, model.Model.Textures);
		NinjaTextureReference reference = Assert.Single(model.Textures);
		Assert.Equal("tex0", reference.Name);
		Assert.Equal(0x1234u, reference.GlobalIndex);
		Assert.Equal(4, reference.Width);
		Assert.Equal(4, reference.Height);
		Assert.Equal([0], model.Model.Meshes[0].TextureIndices.ToArray());
	}

	/// <summary>
	/// Raw NJCM and NJTL sections parse when no relocation trailer is present.
	/// </summary>
	[Fact]
	public void RawSectionsAreParsed()
	{
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae(ModelTestData.ModelCore(), ModelTestData.TextureListCore("tex0"), xvm));
		PaeModel model = archive.Model;
		Assert.Equal(2, model.Model.Nodes.Count);
		Assert.NotNull(model.TextureList);
		Assert.Equal(["tex0"], model.TextureList.Names);
	}

	/// <summary>
	/// A model section without a relocation trailer is rejected.
	/// </summary>
	[Fact]
	public void TruncatedModelSectionIsRejected()
	{
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae([1, 2, 3, 4], [0], xvm));
		Assert.Throws<ModelFormatException>(() => archive.Model);
	}

	/// <summary>
	/// A model section whose node pointer lies outside the chunk is rejected.
	/// </summary>
	[Fact]
	public void InvalidNodePointerIsRejected()
	{
		byte[] model = ModelTestData.WithRelocationTable(ModelTestData.ModelCore());
		byte[] badPointer = model.ToArray();
		System.Buffers.Binary.BinaryPrimitives.WriteUInt32LittleEndian(badPointer.AsSpan(4), 0xFFFF);
		byte[] xvm = TextureTestData.Xvm([TextureTestData.Xvr(XvmTextureFormat.Dxt1, 1, 4, 4, TextureTestData.Dxt1Block(0xF800, 0x07E0, new byte[16]))]);
		PaeContainer archive = PaeContainer.Parse(TextureTestData.Pae(badPointer, [0], xvm));
		Assert.Throws<ModelFormatException>(() => archive.Model);
	}
}
