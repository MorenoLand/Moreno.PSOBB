using PsoBB.Platform;

namespace PsoBB.Audio;

/// <summary>
/// One decoded-format sample and its fixed bank metadata.
/// </summary>
/// <remarks>
/// The audio bytes are a view into the loaded bank, so the bank must stay alive while a clip is created. <see cref="ToClip"/> copies the samples and can outlive it.
/// </remarks>
public sealed class PacSoundSample
{
	internal PacSoundSample(int soundEffectId, PacSoundMetadata metadata, PacSoundHeader header, ReadOnlyMemory<byte> audioData, AudioFormat format)
	{
		SoundEffectId = soundEffectId;
		Metadata = metadata;
		Header = header;
		AudioData = audioData;
		Format = format;
	}

	/// <summary>
	/// Gets the loaded slot this sample answers.
	/// </summary>
	public int SoundEffectId { get; }

	/// <summary>
	/// Gets the fixed bank metadata.
	/// </summary>
	public PacSoundMetadata Metadata { get; }

	/// <summary>
	/// Gets the parsed sample header.
	/// </summary>
	public PacSoundHeader Header { get; }

	/// <summary>
	/// Gets the stored PCM bytes.
	/// </summary>
	public ReadOnlyMemory<byte> AudioData { get; }

	/// <summary>
	/// Gets the PCM layout.
	/// </summary>
	public AudioFormat Format { get; }

	/// <summary>
	/// Gets the number of whole frames in the sample.
	/// </summary>
	public int FrameCount => AudioData.Length / Format.BlockAlign;

	/// <summary>
	/// Gets a value indicating whether the sample has a loop region.
	/// </summary>
	public bool IsLooping => Metadata.IsLooping;

	/// <summary>
	/// Decodes the sample into a playable clip, keeping the loop region when the metadata marks one.
	/// </summary>
	/// <returns>The clip.</returns>
	public AudioClip ToClip() => AudioClip.FromPcm(AudioData.Span, Format, IsLooping ? Metadata.StartLoop : 0, IsLooping ? Metadata.EndLoop : -1);
}
