using PsoBB.Data;

namespace PsoBB.Audio;

/// <summary>
/// Opens the client's streamed music tracks as seekable OGG Vorbis sample sources.
/// </summary>
/// <remarks>
/// Track names carry the original's legacy <c>.adx</c> suffix; <see cref="SoundAssetPaths.MusicTrack"/> resolves them under <c>data/ogg</c> with an <c>ogg</c> suffix. The returned source owns its decoder and the in-memory copy of the entry, and the caller owns the source.
/// </remarks>
public sealed class MusicLibrary
{
	private readonly IDataFiles _files;

	/// <summary>
	/// Creates a music library over the client's data files.
	/// </summary>
	/// <param name="files">The data files that supply the OGG entries.</param>
	/// <exception cref="ArgumentNullException">The data files are null.</exception>
	public MusicLibrary(IDataFiles files)
	{
		ArgumentNullException.ThrowIfNull(files);
		_files = files;
	}

	/// <summary>
	/// Gets the data path a track name resolves to.
	/// </summary>
	/// <param name="trackName">The track name passed to the client.</param>
	/// <returns>The path relative to the data root.</returns>
	/// <exception cref="ArgumentNullException">The track name is null.</exception>
	/// <exception cref="ArgumentException">The track name is shorter than its three-character suffix.</exception>
	[Original(0x00814C00)]
	public static string GetTrackPath(string trackName) => SoundAssetPaths.MusicTrack(trackName);

	/// <summary>
	/// Opens a music track as a seekable sample source.
	/// </summary>
	/// <param name="trackName">The track name passed to the client.</param>
	/// <returns>The OGG Vorbis source; the caller owns it.</returns>
	/// <exception cref="FileNotFoundException">The track is absent.</exception>
	/// <exception cref="ArgumentException">The entry is not a readable OGG Vorbis stream.</exception>
	[Original(0x0086DF38)]
	public IAudioSampleSource OpenSource(string trackName)
	{
		ReadOnlyMemory<byte> data = _files.Read(GetTrackPath(trackName));
		return new NVorbisOggDecoder(new MemoryStream(data.ToArray(), writable: false));
	}

	/// <summary>
	/// Opens a music track with loop and seek state.
	/// </summary>
	/// <param name="trackName">The track name passed to the client.</param>
	/// <returns>The wrapped music stream; the caller owns it.</returns>
	/// <exception cref="FileNotFoundException">The track is absent.</exception>
	/// <exception cref="ArgumentException">The entry is not a readable OGG Vorbis stream.</exception>
	public MusicStream Open(string trackName) => new(OpenSource(trackName));
}
