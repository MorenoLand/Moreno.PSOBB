namespace PsoBB.Audio;

/// <summary>
/// The data paths the client uses for sound banks and streamed music.
/// </summary>
public static class SoundAssetPaths
{
	/// <summary>
	/// The directory that holds the sound-bank files.
	/// </summary>
	public const string SoundDirectory = "data/sound";

	/// <summary>
	/// The directory that holds the streamed music files.
	/// </summary>
	public const string MusicDirectory = "data/ogg";

	/// <summary>
	/// Builds the data path of a sound bank.
	/// </summary>
	/// <param name="fileName">The bank file name from the fixed table.</param>
	/// <returns>The path relative to the data root.</returns>
	/// <exception cref="ArgumentNullException">The file name is null.</exception>
	/// <exception cref="ArgumentException">The file name is empty.</exception>
	public static string SoundBank(string fileName)
	{
		ArgumentNullException.ThrowIfNull(fileName);
		if (fileName.Length == 0)
			throw new ArgumentException("A bank file name is required.", nameof(fileName));
		return $"{SoundDirectory}/{fileName}";
	}

	/// <summary>
	/// Builds the data path of a streamed music track.
	/// </summary>
	/// <param name="trackName">The track name passed to the client, normally ending in <c>.adx</c>.</param>
	/// <returns>The path relative to the data root, ending in <c>.ogg</c>.</returns>
	/// <exception cref="ArgumentNullException">The track name is null.</exception>
	/// <exception cref="ArgumentException">The track name is shorter than the three-character extension it replaces.</exception>
	/// <remarks>
	/// The client's track names carry the legacy <c>.adx</c> suffix; it builds <c>data/ogg/&lt;name&gt;</c> and overwrites the final three characters with <c>ogg</c>, so the actual file is OGG Vorbis.
	/// </remarks>
	public static string MusicTrack(string trackName)
	{
		ArgumentNullException.ThrowIfNull(trackName);
		if (trackName.Length < 3)
			throw new ArgumentException("A track name is at least three characters.", nameof(trackName));
		return $"{MusicDirectory}/{trackName[..^3]}ogg";
	}
}
