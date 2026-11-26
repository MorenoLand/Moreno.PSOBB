using PsoBB.Client;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the client options' defaults and the portable image name validation.
/// </summary>
public sealed class ClientOptionsTests
{
	[Fact]
	public void DefaultsToTheRetailImageName()
	{
		ClientOptions options = new("data");
		Assert.Equal("data", options.DataFolder);
		Assert.Equal("image.bin", options.ImageFileName);
		Assert.Equal(GamePath.Parse("image.bin"), options.ImagePath);
	}

	[Fact]
	public void AcceptsAnExplicitImageName()
	{
		ClientOptions options = new("/srv/psobb", "Image.BIN");
		Assert.Equal("Image.BIN", options.ImageFileName);
		Assert.Equal(GamePath.Parse("Image.BIN"), options.ImagePath);
	}

	[Theory]
	[InlineData("")]
	[InlineData(" ")]
	[InlineData("data\0folder")]
	public void RejectsAnInvalidDataFolder(string dataFolder)
	{
		Assert.Throws<ArgumentException>(() => new ClientOptions(dataFolder));
	}

	[Fact]
	public void RejectsANullDataFolder()
	{
		Assert.Throws<ArgumentNullException>(() => new ClientOptions(null!));
	}

	[Theory]
	[InlineData("")]
	[InlineData(" ")]
	[InlineData(".")]
	[InlineData("..")]
	[InlineData("/image.bin")]
	[InlineData("images/image.bin")]
	[InlineData("images\\image.bin")]
	[InlineData("C:image.bin")]
	[InlineData("image?.bin")]
	[InlineData("image.bin ")]
	public void RejectsAnInvalidImageFileName(string imageFileName)
	{
		Assert.Throws<ArgumentException>(() => new ClientOptions("data", imageFileName));
	}

	[Fact]
	public void RejectsANullImageFileName()
	{
		Assert.Throws<ArgumentNullException>(() => new ClientOptions("data", null!));
	}
}
