using System.Text;
using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Integration checks for <see cref="GuestImage"/> against the generated data image when it is present.
/// </summary>
public sealed class GuestImageRealDataTests
{
	/// <summary>
	/// The image carries the NowLoading resource name at its original guest address.
	/// </summary>
	[Fact]
	public void ReadsTheNowLoadingNameFromTheRealImage()
	{
		string? path = FindImage();
		if (path is null)
			return;
		using FileStream stream = File.OpenRead(path);
		GuestImage image = GuestImage.Load(stream);
		byte[] name = new byte[14];
		image.ReadBytes(0x0097AB54, name);
		Assert.Equal(Encoding.ASCII.GetBytes("NowLoading.prs"), name);
		Assert.True(image.IsMapped(0x0097AB54, name.Length));
		Assert.False(image.IsMapped(0x00000000, 1));
	}

	/// <summary>
	/// Finds the generated image from the environment or from the repository layout.
	/// </summary>
	/// <returns>The image path, or null when the image is not available.</returns>
	private static string? FindImage()
	{
		string? configured = Environment.GetEnvironmentVariable("PSOBB_IMAGE");
		if (!string.IsNullOrEmpty(configured))
			return File.Exists(configured) ? configured : null;
		for (DirectoryInfo? directory = new(AppContext.BaseDirectory); directory is not null; directory = directory.Parent)
		{
			string candidate = Path.Combine(directory.FullName, "src", "image.bin");
			if (File.Exists(candidate) && Directory.Exists(Path.Combine(directory.FullName, "recomp")))
				return candidate;
		}
		return null;
	}
}
