using PsoBB.Platform;

namespace PsoBB.Client;

/// <summary>
/// The data folder and data image the client boots from.
/// </summary>
/// <remarks>
/// The data folder is the host path a platform file system is rooted at; the image name is a
/// relative file inside that root. The portable client never opens the folder itself, so the
/// folder string is passed through unchanged for the host that creates the file system.
/// </remarks>
public sealed class ClientOptions
{
	/// <summary>
	/// The image file name used when none is supplied.
	/// </summary>
	public const string DefaultImageFileName = "image.bin";

	/// <summary>
	/// Creates validated client options.
	/// </summary>
	/// <param name="dataFolder">The host folder that contains the game data.</param>
	/// <param name="imageFileName">The data image file name inside the folder.</param>
	/// <exception cref="ArgumentException">The folder is blank or contains a null character.</exception>
	/// <exception cref="ArgumentException">The image name is not a portable relative file name.</exception>
	public ClientOptions(string dataFolder, string imageFileName = DefaultImageFileName)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(dataFolder);
		if (dataFolder.Contains('\0'))
			throw new ArgumentException("The data folder cannot contain a null character.", nameof(dataFolder));
		ArgumentException.ThrowIfNullOrWhiteSpace(imageFileName);
		if (!GamePath.TryParse(imageFileName, out GamePath imagePath) || imagePath.Name != imageFileName)
			throw new ArgumentException("The image file name must be a portable relative file name in the data folder.", nameof(imageFileName));
		DataFolder = dataFolder;
		ImageFileName = imageFileName;
		ImagePath = imagePath;
	}

	/// <summary>
	/// Gets the host folder that contains the game data.
	/// </summary>
	public string DataFolder { get; }

	/// <summary>
	/// Gets the data image file name inside <see cref="DataFolder"/>.
	/// </summary>
	public string ImageFileName { get; }

	/// <summary>
	/// Gets the normalised image path inside the platform file system's root.
	/// </summary>
	public GamePath ImagePath { get; }
}
