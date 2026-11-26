using System.Buffers.Binary;

namespace PsoBB.Audio;

/// <summary>
/// The 0x20-byte header that precedes one sample inside a sound bank.
/// </summary>
/// <remarks>
/// The first 16 bytes are a <c>WAVEFORMATEX</c> PCM format without its extension size, followed by an opaque four-byte tag, a size word, two reserved words and the stored audio byte count. The original passes this block to DirectSound as the buffer format and reads the audio count from its last field.
/// </remarks>
/// <param name="FormatTag">The wave format tag; one is integer PCM.</param>
/// <param name="Channels">The interleaved channel count.</param>
/// <param name="SampleRate">The samples per second.</param>
/// <param name="AverageBytesPerSecond">The declared average byte rate.</param>
/// <param name="BlockAlign">The declared bytes per frame.</param>
/// <param name="BitsPerSample">The bits per sample.</param>
/// <param name="Tag">The opaque four-byte chunk tag.</param>
/// <param name="Size">The first size word.</param>
/// <param name="Reserved1">The first reserved word.</param>
/// <param name="Reserved2">The second reserved word.</param>
/// <param name="AudioDataSize">The number of stored sample bytes that follow the header.</param>
public readonly record struct PacSoundHeader(ushort FormatTag, ushort Channels, uint SampleRate, uint AverageBytesPerSecond, ushort BlockAlign, ushort BitsPerSample, uint Tag, uint Size, ushort Reserved1, ushort Reserved2, uint AudioDataSize)
{
	/// <summary>
	/// The size of a sample header.
	/// </summary>
	public const int SizeInBytes = 0x20;

	/// <summary>
	/// Reads one sample header.
	/// </summary>
	/// <param name="source">The complete 0x20-byte header.</param>
	/// <returns>The parsed header.</returns>
	/// <exception cref="ArgumentException">The source is shorter than a header.</exception>
	public static PacSoundHeader Read(ReadOnlySpan<byte> source)
	{
		if (source.Length < SizeInBytes)
			throw new ArgumentException($"A sound header needs {SizeInBytes} bytes but only {source.Length} are available.", nameof(source));
		return new(
			BinaryPrimitives.ReadUInt16LittleEndian(source),
			BinaryPrimitives.ReadUInt16LittleEndian(source[2..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[4..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[8..]),
			BinaryPrimitives.ReadUInt16LittleEndian(source[12..]),
			BinaryPrimitives.ReadUInt16LittleEndian(source[14..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[16..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[20..]),
			BinaryPrimitives.ReadUInt16LittleEndian(source[24..]),
			BinaryPrimitives.ReadUInt16LittleEndian(source[26..]),
			BinaryPrimitives.ReadUInt32LittleEndian(source[28..]));
	}
}
