using PsoBB.Client;

namespace PsoBB.Tests;

/// <summary>
/// Checks the client options' data folder validation.
/// </summary>
public sealed class ClientOptionsTests
{
	[Fact]
	public void KeepsTheDataFolder()
	{
		ClientOptions options = new("data");
		Assert.Equal("data", options.DataFolder);
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
}
