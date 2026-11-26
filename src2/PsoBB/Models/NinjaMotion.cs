using System.Buffers.Binary;

namespace PsoBB.Models;

/// <summary>
/// An NMDM motion chunk: a frame count, motion flags and one keyframe table per animated bone.
/// </summary>
public sealed class NinjaMotion
{
	private NinjaMotion(uint frameCount, ushort motionFlags, ushort factorCount, int interpolationMode, NinjaBoneAnimation[] bones)
	{
		FrameCount = frameCount;
		MotionFlags = motionFlags;
		FactorCount = factorCount;
		InterpolationMode = interpolationMode;
		Bones = bones;
	}

	/// <summary>Gets the motion length in frames.</summary>
	public uint FrameCount { get; }

	/// <summary>Gets the motion flag word.</summary>
	public ushort MotionFlags { get; }

	/// <summary>Gets the number of channel tracks stored for each bone.</summary>
	public ushort FactorCount { get; }

	/// <summary>Gets the two-bit interpolation mode.</summary>
	public int InterpolationMode { get; }

	/// <summary>Gets the bone tracks in model-node order.</summary>
	public IReadOnlyList<NinjaBoneAnimation> Bones { get; }

	/// <summary>
	/// Reads a motion chunk body.
	/// </summary>
	/// <param name="body">The NMDM body after pointer relocation.</param>
	/// <param name="boneCount">The model node count that the motion animates, or zero to derive a bound from the body length.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The parsed motion.</returns>
	/// <exception cref="ModelFormatException">A pointer, count or keyframe range is invalid.</exception>
	[Original(0x008303DC, "NJM_InitializeAnimationContext_008303dc")]
	public static NinjaMotion Parse(ReadOnlyMemory<byte> body, int boneCount, int sourceOffset = 0)
	{
		ReadOnlySpan<byte> data = body.Span;
		if (data.Length < 0x0C)
			throw new ModelFormatException("The NMDM header is truncated.", sourceOffset);
		uint recordsOffset = BinaryPrimitives.ReadUInt32LittleEndian(data);
		uint frameCount = BinaryPrimitives.ReadUInt32LittleEndian(data[4..]);
		ushort motionFlags = BinaryPrimitives.ReadUInt16LittleEndian(data[8..]);
		ushort factorWord = BinaryPrimitives.ReadUInt16LittleEndian(data[10..]);
		int factorCount = factorWord & 0x3F;
		int interpolationMode = (factorWord >> 6) & 3;
		if (factorCount == 0)
			throw new ModelFormatException("The NMDM factor count is zero.", sourceOffset + 10);
		if (recordsOffset > data.Length)
			throw new ModelFormatException("The NMDM record array lies outside the chunk.", sourceOffset);
		int recordSize = factorCount * 8;
		int available = (data.Length - (int)recordsOffset) / recordSize;
		if (boneCount == 0)
			boneCount = available;
		else if (boneCount < 0 || boneCount > available)
			throw new ModelFormatException("The NMDM bone count lies outside the chunk.", sourceOffset);
		NinjaBoneAnimation[] bones = new NinjaBoneAnimation[boneCount];
		for (int bone = 0; bone < boneCount; bone++)
		{
			int recordOffset = (int)recordsOffset + bone * recordSize;
			NinjaAnimationTrack[] tracks = new NinjaAnimationTrack[factorCount];
			for (int track = 0; track < factorCount; track++)
			{
				uint trackOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + track * 4)..]);
				uint keyCount = BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + factorCount * 4 + track * 4)..]);
				tracks[track] = ReadTrack(data, trackOffset, keyCount, track, sourceOffset);
			}
			bones[bone] = new NinjaBoneAnimation(tracks);
		}
		return new NinjaMotion(frameCount, motionFlags, (ushort)factorCount, interpolationMode, bones);
	}

	/// <summary>
	/// Reads one keyframe track.
	/// </summary>
	/// <param name="data">The NMDM body.</param>
	/// <param name="offset">The keyframe-array offset.</param>
	/// <param name="count">The keyframe count.</param>
	/// <param name="index">The track index inside its bone record.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The parsed track.</returns>
	private static NinjaAnimationTrack ReadTrack(ReadOnlySpan<byte> data, uint offset, uint count, int index, int sourceOffset)
	{
		NinjaAnimationChannel channel = index switch
		{
			0 => NinjaAnimationChannel.Translation,
			1 => NinjaAnimationChannel.Rotation,
			2 => NinjaAnimationChannel.Scale,
			_ => NinjaAnimationChannel.Other,
		};
		if (count > int.MaxValue || count > (uint)data.Length / 0x10)
			throw new ModelFormatException("The NMDM keyframe count is invalid.", sourceOffset);
		if (offset > data.Length || count * 0x10 > data.Length - offset)
			throw new ModelFormatException("The NMDM keyframe array lies outside the chunk.", sourceOffset);
		NinjaKeyframe[] keyframes = new NinjaKeyframe[(int)count];
		for (int key = 0; key < keyframes.Length; key++)
		{
			int keyOffset = (int)offset + key * 0x10;
			uint frame = BinaryPrimitives.ReadUInt32LittleEndian(data[keyOffset..]);
			float x;
			float y;
			float z;
			if (channel == NinjaAnimationChannel.Rotation)
			{
				x = AngleToRadians(BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 4)..]));
				y = AngleToRadians(BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 8)..]));
				z = AngleToRadians(BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 12)..]));
			}
			else
			{
				x = BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 4)..]);
				y = BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 8)..]);
				z = BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 12)..]);
			}
			keyframes[key] = new NinjaKeyframe(frame, x, y, z);
		}
		return new NinjaAnimationTrack(channel, keyframes);
	}

	/// <summary>
	/// Converts a 1/65536-turn angle to radians.
	/// </summary>
	/// <param name="angle">The original angle unit.</param>
	/// <returns>The angle in radians.</returns>
	private static float AngleToRadians(int angle) => (float)(angle * (Math.Tau / 65536.0));
}
