using System.Buffers.Binary;
using PsoBB.Audio;

namespace PsoBB.Tests;

/// <summary>
/// One sample placed in a generated sound bank.
/// </summary>
internal sealed record PacSoundSpec(int SoundEffectId, int SampleRate, int Channels, int BitsPerSample, short[] Samples, byte LoopFlags = 0, int StartLoop = 0, int EndLoop = 0);

/// <summary>
/// Builds sound banks and their fixed metadata for the loader tests.
/// </summary>
internal static class SyntheticPacBank
{
	internal const int HeaderSize = PacSoundHeader.SizeInBytes;

	/// <summary>
	/// Builds a bank whose samples are stored back to back and whose metadata describes every header.
	/// </summary>
	/// <param name="fileName">The bank file name for its definition.</param>
	/// <param name="specs">The samples in bank order.</param>
	/// <returns>The bank bytes and the matching definition.</returns>
	internal static (byte[] Data, SoundBankDefinition Definition) Build(string fileName, params PacSoundSpec[] specs)
	{
		int length = 0;
		foreach (PacSoundSpec spec in specs)
			length += HeaderSize + spec.Samples.Length * (spec.BitsPerSample / 8);
		byte[] data = new byte[length];
		int[] ids = new int[specs.Length];
		PacSoundMetadata[] metadata = new PacSoundMetadata[specs.Length];
		int offset = 0;
		for (int index = 0; index < specs.Length; index++)
		{
			PacSoundSpec spec = specs[index];
			int bytesPerSample = spec.BitsPerSample / 8;
			int blockAlign = spec.Channels * bytesPerSample;
			int audioLength = spec.Samples.Length * bytesPerSample;
			Span<byte> header = data.AsSpan(offset, HeaderSize);
			WriteHeader(header, 1, (ushort)spec.Channels, (uint)spec.SampleRate, (ushort)blockAlign, (ushort)spec.BitsPerSample, (uint)audioLength);
			Span<byte> audio = data.AsSpan(offset + HeaderSize, audioLength);
			for (int sample = 0; sample < spec.Samples.Length; sample++)
			{
				short value = spec.Samples[sample];
				if (bytesPerSample == 1)
					audio[sample] = (byte)value;
				else if (bytesPerSample == 2)
					BinaryPrimitives.WriteInt16LittleEndian(audio[(sample * 2)..], value);
				else if (bytesPerSample == 3)
					audio[(sample * 3)..].Slice(0, 3).Clear();
				else
					BinaryPrimitives.WriteInt32LittleEndian(audio[(sample * 4)..], value);
			}
			ids[index] = spec.SoundEffectId;
			metadata[index] = new((byte)index, 0, spec.LoopFlags, 0, offset, spec.StartLoop, spec.EndLoop);
			offset += HeaderSize + audioLength;
		}
		return (data, new SoundBankDefinition(fileName, ids, metadata));
	}

	/// <summary>
	/// Writes a sound-bank header.
	/// </summary>
	/// <param name="destination">The 0x20-byte destination.</param>
	/// <param name="formatTag">The wave format tag.</param>
	/// <param name="channels">The channel count.</param>
	/// <param name="sampleRate">The samples per second.</param>
	/// <param name="blockAlign">The bytes per frame.</param>
	/// <param name="bitsPerSample">The bits per sample.</param>
	/// <param name="audioDataSize">The stored audio byte count.</param>
	internal static void WriteHeader(Span<byte> destination, ushort formatTag, ushort channels, uint sampleRate, ushort blockAlign, ushort bitsPerSample, uint audioDataSize)
	{
		BinaryPrimitives.WriteUInt16LittleEndian(destination, formatTag);
		BinaryPrimitives.WriteUInt16LittleEndian(destination[2..], channels);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[4..], sampleRate);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[8..], sampleRate * blockAlign);
		BinaryPrimitives.WriteUInt16LittleEndian(destination[12..], blockAlign);
		BinaryPrimitives.WriteUInt16LittleEndian(destination[14..], bitsPerSample);
		"data"u8.CopyTo(destination[16..]);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[20..], audioDataSize);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[28..], audioDataSize);
	}
}
