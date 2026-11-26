namespace PsoBB.Client;

/// <summary>
/// The data folder the client boots from.
/// </summary>
/// <remarks>
/// The data folder is the host path a platform file system is rooted at. The portable client
/// never opens the folder itself, so the folder string is passed through unchanged for the host
/// that creates the file system.
/// </remarks>
public sealed class ClientOptions
{
	/// <summary>
	/// Creates validated client options.
	/// </summary>
	/// <param name="dataFolder">The host folder that contains the game data.</param>
	/// <exception cref="ArgumentException">The folder is blank or contains a null character.</exception>
	public ClientOptions(string dataFolder)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(dataFolder);
		if (dataFolder.Contains('\0'))
			throw new ArgumentException("The data folder cannot contain a null character.", nameof(dataFolder));
		DataFolder = dataFolder;
	}

	/// <summary>
	/// Gets the host folder that contains the game data.
	/// </summary>
	public string DataFolder { get; }
}
