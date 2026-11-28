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

	/// <summary>Gets a value indicating whether the motion drives translation.</summary>
	public bool HasTranslation => (MotionFlags & 0x1) != 0;

	/// <summary>Gets a value indicating whether the motion drives Euler rotation.</summary>
	public bool HasEulerRotation => (MotionFlags & 0x2) != 0;

	/// <summary>Gets a value indicating whether the motion drives scale.</summary>
	public bool HasScale => (MotionFlags & 0x4) != 0;

	/// <summary>Gets a value indicating whether the motion drives quaternion rotation.</summary>
	public bool HasQuaternionRotation => (MotionFlags & 0x2000) != 0;

	/// <summary>
	/// Reads a motion chunk body.
	/// </summary>
	/// <param name="body">The NMDM body after pointer relocation.</param>
	/// <param name="boneCount">The model node count that the motion animates, or zero to derive a bound from the body length.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The parsed motion.</returns>
	/// <exception cref="ModelFormatException">A pointer, count or keyframe range is invalid.</exception>
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
		TrackSpan[] spans = new TrackSpan[boneCount * factorCount];
		for (int bone = 0; bone < boneCount; bone++)
		{
			int recordOffset = (int)recordsOffset + bone * recordSize;
			for (int track = 0; track < factorCount; track++)
			{
				uint trackOffset = BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + track * 4)..]);
				uint keyCount = BinaryPrimitives.ReadUInt32LittleEndian(data[(recordOffset + factorCount * 4 + track * 4)..]);
				spans[bone * factorCount + track] = new TrackSpan(trackOffset, keyCount);
			}
		}
		for (int index = 0; index < spans.Length; index++)
			spans[index] = DescribeTrack(data, spans, index, index % factorCount, recordsOffset, motionFlags, frameCount, sourceOffset);
		NinjaBoneAnimation[] bones = new NinjaBoneAnimation[boneCount];
		for (int bone = 0; bone < boneCount; bone++)
		{
			NinjaAnimationTrack[] tracks = new NinjaAnimationTrack[factorCount];
			for (int track = 0; track < factorCount; track++)
			{
				TrackSpan span = spans[bone * factorCount + track];
				NinjaAnimationChannel channel = ChannelFor(track, motionFlags);
				tracks[track] = new NinjaAnimationTrack(channel, span.Kind, span.RecordSize, ReadTrack(data, span));
			}
			bones[bone] = new NinjaBoneAnimation(tracks);
		}
		return new NinjaMotion(frameCount, motionFlags, (ushort)factorCount, interpolationMode, bones);
	}

	/// <summary>
	/// Returns the pose channel for a track index using the motion flag order.
	/// </summary>
	/// <param name="track">The track index.</param>
	/// <param name="flags">The motion flags.</param>
	/// <returns>The channel the track drives.</returns>
	private static NinjaAnimationChannel ChannelFor(int track, ushort flags)
	{
		int slot = 0;
		if ((flags & 0x1) != 0)
		{
			if (track == slot)
				return NinjaAnimationChannel.Translation;
			slot++;
		}
		if ((flags & 0x2002) != 0)
		{
			if (track == slot)
				return NinjaAnimationChannel.Rotation;
			slot++;
		}
		if ((flags & 0x4) != 0)
		{
			if (track == slot)
				return NinjaAnimationChannel.Scale;
			slot++;
		}
		return track switch
		{
			0 => NinjaAnimationChannel.Translation,
			1 => NinjaAnimationChannel.Rotation,
			2 => NinjaAnimationChannel.Scale,
			_ => NinjaAnimationChannel.Other,
		};
	}

	/// <summary>
	/// Determines the stored record size and kind of one keyframe track.
	/// </summary>
	/// <param name="data">The NMDM body.</param>
	/// <param name="spans">Every track span in the motion.</param>
	/// <param name="index">The span to describe.</param>
	/// <param name="track">The track index within its bone record.</param>
	/// <param name="recordsOffset">The motion record array offset.</param>
	/// <param name="flags">The motion flags.</param>
	/// <param name="frameCount">The animation frame count.</param>
	/// <param name="sourceOffset">The body offset for error messages.</param>
	/// <returns>The described span.</returns>
	private static TrackSpan DescribeTrack(ReadOnlySpan<byte> data, TrackSpan[] spans, int index, int track, uint recordsOffset, ushort flags, uint frameCount, int sourceOffset)
	{
		TrackSpan span = spans[index];
		NinjaAnimationChannel channel = ChannelFor(track, flags);
		bool quaternion = (flags & 0x2000) != 0 && channel == NinjaAnimationChannel.Rotation;
		if (span.Count == 0)
			return span with { Kind = quaternion ? NinjaAnimationTrackKind.Quaternion : NinjaAnimationTrackKind.Float3, RecordSize = 0 };
		if (span.Count > int.MaxValue)
			throw new ModelFormatException("The NMDM keyframe count is invalid.", sourceOffset);
		if (span.Offset > data.Length)
			throw new ModelFormatException("The NMDM keyframe array lies outside the chunk.", sourceOffset);
		uint next = recordsOffset > span.Offset ? recordsOffset : (uint)data.Length;
		foreach (TrackSpan other in spans)
			if (other.Offset > span.Offset && other.Offset < next)
				next = other.Offset;
		long available = (long)next - span.Offset;
		if (available <= 0)
			available = data.Length - span.Offset;
		NinjaAnimationTrackKind kind;
		int recordSize;
		if (quaternion)
		{
			kind = NinjaAnimationTrackKind.Quaternion;
			recordSize = 20;
		}
		else if (channel == NinjaAnimationChannel.Rotation)
		{
			if (available % span.Count == 0 && available / span.Count == 8)
			{
				kind = NinjaAnimationTrackKind.Angle16;
				recordSize = 8;
			}
			else if (available % span.Count == 0 && available / span.Count == 16)
			{
				kind = NinjaAnimationTrackKind.Angle32;
				recordSize = 16;
			}
			else if (available >= (long)span.Count * 16 && LooksLike32BitFrames(data, span.Offset, span.Count, frameCount))
			{
				kind = NinjaAnimationTrackKind.Angle32;
				recordSize = 16;
			}
			else
			{
				kind = NinjaAnimationTrackKind.Angle16;
				recordSize = 8;
			}
		}
		else
		{
			kind = NinjaAnimationTrackKind.Float3;
			recordSize = 16;
		}
		if (recordSize != 0 && (long)span.Offset + (long)span.Count * recordSize > data.Length)
			throw new ModelFormatException("The NMDM keyframe array lies outside the chunk.", sourceOffset);
		return span with { Kind = kind, RecordSize = recordSize };
	}

	/// <summary>
	/// Returns true when a 32-bit-frame rotation track has increasing frame values in range.
	/// </summary>
	/// <param name="data">The NMDM body.</param>
	/// <param name="offset">The track offset.</param>
	/// <param name="count">The keyframe count.</param>
	/// <param name="frameCount">The animation frame count.</param>
	/// <returns>True when the records look like 32-bit frames.</returns>
	private static bool LooksLike32BitFrames(ReadOnlySpan<byte> data, uint offset, uint count, uint frameCount)
	{
		long end = (long)offset + (long)count * 16;
		if (end > data.Length)
			return false;
		uint previous = 0;
		for (int index = 0; index < count; index++)
		{
			uint frame = BinaryPrimitives.ReadUInt32LittleEndian(data[(int)(offset + index * 16)..]);
			if (index == 0 ? frame > frameCount : frame < previous)
				return false;
			previous = frame;
		}
		return true;
	}

	/// <summary>
	/// Reads one keyframe track in its detected record layout.
	/// </summary>
	/// <param name="data">The NMDM body.</param>
	/// <param name="span">The described track.</param>
	/// <returns>The keyframes.</returns>
	private static NinjaKeyframe[] ReadTrack(ReadOnlySpan<byte> data, TrackSpan span)
	{
		NinjaKeyframe[] keyframes = new NinjaKeyframe[(int)span.Count];
		for (int key = 0; key < keyframes.Length; key++)
		{
			int keyOffset = (int)span.Offset + key * span.RecordSize;
			switch (span.Kind)
			{
				case NinjaAnimationTrackKind.Angle16:
				{
					int x = BinaryPrimitives.ReadInt16LittleEndian(data[(keyOffset + 2)..]);
					int y = BinaryPrimitives.ReadInt16LittleEndian(data[(keyOffset + 4)..]);
					int z = BinaryPrimitives.ReadInt16LittleEndian(data[(keyOffset + 6)..]);
					keyframes[key] = new NinjaKeyframe(
						BinaryPrimitives.ReadUInt16LittleEndian(data[keyOffset..]),
						AngleToRadians(x), AngleToRadians(y), AngleToRadians(z), 0, x, y, z);
					break;
				}
				case NinjaAnimationTrackKind.Angle32:
				{
					int x = BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 4)..]);
					int y = BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 8)..]);
					int z = BinaryPrimitives.ReadInt32LittleEndian(data[(keyOffset + 12)..]);
					keyframes[key] = new NinjaKeyframe(
						BinaryPrimitives.ReadUInt32LittleEndian(data[keyOffset..]),
						AngleToRadians(x), AngleToRadians(y), AngleToRadians(z), 0, x, y, z);
					break;
				}
				case NinjaAnimationTrackKind.Quaternion:
					keyframes[key] = new NinjaKeyframe(
						BinaryPrimitives.ReadUInt32LittleEndian(data[keyOffset..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 4)..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 8)..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 12)..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 16)..]));
					break;
				default:
					keyframes[key] = new NinjaKeyframe(
						BinaryPrimitives.ReadUInt32LittleEndian(data[keyOffset..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 4)..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 8)..]),
						BinaryPrimitives.ReadSingleLittleEndian(data[(keyOffset + 12)..]));
					break;
			}
		}
		return keyframes;
	}

	/// <summary>
	/// Converts a 1/65536-turn angle to radians.
	/// </summary>
	/// <param name="angle">The original angle unit.</param>
	/// <returns>The angle in radians.</returns>
	private static float AngleToRadians(int angle) => (float)(angle * (Math.Tau / 65536.0));

	private readonly record struct TrackSpan(uint Offset, uint Count, NinjaAnimationTrackKind Kind = NinjaAnimationTrackKind.Float3, int RecordSize = 0);
}
