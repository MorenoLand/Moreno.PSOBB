using PsoBB.Mathematics;

namespace PsoBB.Models;

/// <summary>
/// Samples NMDM keyframe tracks with the original locator and interpolation functions.
/// </summary>
internal static class NinjaMotionEvaluator
{
	/// <summary>
	/// Samples a translation track.
	/// </summary>
	/// <param name="bone">The bone animation.</param>
	/// <param name="motion">The motion that supplies the interpolation mode.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="value">The sampled translation.</param>
	/// <returns>True when the bone stores a translation track.</returns>
	internal static bool TrySampleTranslation(NinjaBoneAnimation bone, NinjaMotion motion, float frame, out Vector3 value)
	{
		NinjaAnimationTrack? track = Find(bone, NinjaAnimationChannel.Translation);
		if (track is null || track.Keyframes.Count == 0)
		{
			value = default;
			return false;
		}
		value = EvaluateFloat3(track, motion.InterpolationMode, frame);
		return true;
	}

	/// <summary>
	/// Samples a scale track.
	/// </summary>
	/// <param name="bone">The bone animation.</param>
	/// <param name="motion">The motion that supplies the interpolation mode.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="value">The sampled scale.</param>
	/// <returns>True when the bone stores a scale track.</returns>
	internal static bool TrySampleScale(NinjaBoneAnimation bone, NinjaMotion motion, float frame, out Vector3 value)
	{
		NinjaAnimationTrack? track = Find(bone, NinjaAnimationChannel.Scale);
		if (track is null || track.Keyframes.Count == 0)
		{
			value = default;
			return false;
		}
		value = EvaluateFloat3(track, motion.InterpolationMode, frame);
		return true;
	}

	/// <summary>
	/// Samples an Euler rotation track.
	/// </summary>
	/// <param name="bone">The bone animation.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="x">The first turn angle.</param>
	/// <param name="y">The second turn angle.</param>
	/// <param name="z">The third turn angle.</param>
	/// <returns>True when the bone stores an Euler rotation track.</returns>
	internal static bool TrySampleEuler(NinjaBoneAnimation bone, float frame, out int x, out int y, out int z)
	{
		NinjaAnimationTrack? track = Find(bone, NinjaAnimationChannel.Rotation);
		if (track is null || track.Keyframes.Count == 0 || track.Kind == NinjaAnimationTrackKind.Quaternion)
		{
			x = 0;
			y = 0;
			z = 0;
			return false;
		}
		if (track.Kind == NinjaAnimationTrackKind.Angle16)
			EvaluateAngle16(track, frame, out x, out y, out z);
		else
			EvaluateAngle32(track, frame, out x, out y, out z);
		return true;
	}

	/// <summary>
	/// Samples a quaternion rotation track.
	/// </summary>
	/// <param name="bone">The bone animation.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="value">The sampled quaternion.</param>
	/// <returns>True when the bone stores a quaternion track.</returns>
	internal static bool TrySampleQuaternion(NinjaBoneAnimation bone, float frame, out NinjaQuaternion value)
	{
		NinjaAnimationTrack? track = Find(bone, NinjaAnimationChannel.Rotation);
		if (track is null || track.Keyframes.Count == 0 || track.Kind != NinjaAnimationTrackKind.Quaternion)
		{
			value = default;
			return false;
		}
		value = EvaluateQuaternion(track, frame);
		return true;
	}

	private static NinjaAnimationTrack? Find(NinjaBoneAnimation bone, NinjaAnimationChannel channel)
	{
		foreach (NinjaAnimationTrack track in bone.Tracks)
			if (track.Channel == channel)
				return track;
		return null;
	}

	/// <summary>
	/// Locates the two keyframes around a frame position and returns their blend fraction.
	/// </summary>
	/// <param name="keyframes">The keyframes in frame order.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The lower key, upper key and fraction.</returns>
	[Original(0x0084AE50)]
	private static (int Lower, int Upper, double Fraction) LocateKeyframes(IReadOnlyList<NinjaKeyframe> keyframes, float frame)
	{
		int count = keyframes.Count;
		int lower = 0;
		int upper = count;
		if (count > 1)
		{
			while (upper - lower > 1)
			{
				int middle = (lower + upper) >> 1;
				if ((int)frame < (int)keyframes[middle].Frame)
					upper = middle;
				else
					lower = middle;
			}
		}
		int upperIndex = lower < count - 1 ? lower + 1 : 0;
		int frameDelta = (int)keyframes[upperIndex].Frame - (int)keyframes[lower].Frame;
		double fraction = frameDelta <= 0
			? (double)frame - keyframes[lower].Frame
			: ((double)frame - keyframes[lower].Frame) / frameDelta;
		return (lower, upperIndex, fraction);
	}

	/// <summary>
	/// Binary-searches an unsigned 16-bit keyframe timeline and returns the bracketing indices and blend fraction.
	/// </summary>
	/// <param name="frames">Sorted 16-bit frame timestamps.</param>
	/// <param name="frame">The sampled frame time.</param>
	/// <returns>The lower index, upper index, and single-precision blend fraction.</returns>
	[Original(0x0084AD80)]
	internal static (int Lower, int Upper, float Fraction) LocateKeyframes16(ReadOnlySpan<ushort> frames, float frame)
	{
		int target = unchecked((ushort)FloatingPointMath.TruncateToInt32(frame));
		int upper = unchecked((ushort)frames.Length);
		int lower = 0;
		if (upper > 1)
		{
			while (upper - lower > 1)
			{
				int middle = unchecked((ushort)((lower + upper) >> 1));
				if (target < frames[middle])
					upper = middle;
				else
					lower = middle;
			}
		}

		int upperIndex = lower < frames.Length - 1 ? lower + 1 : 0;
		int lowerFrame = frames[lower];
		int frameDelta = frames[upperIndex] - lowerFrame;
		double fraction = frameDelta <= 0
			? (double)frame - lowerFrame
			: ((double)frame - lowerFrame) / frameDelta;
		return (lower, upperIndex, (float)fraction);
	}

	/// <summary>
	/// Returns the index of the keyframe at or before a frame position.
	/// </summary>
	/// <param name="keyframes">The keyframes in frame order.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The lower keyframe index.</returns>
	[Original(0x0084AD10)]
	private static int LocateIndex(IReadOnlyList<NinjaKeyframe> keyframes, float frame)
	{
		int lower = 0;
		int upper = keyframes.Count;
		if (upper > 1)
		{
			while (upper - lower > 1)
			{
				int middle = (lower + upper) >> 1;
				if ((int)frame < (int)keyframes[middle].Frame)
					upper = middle;
				else
					lower = middle;
			}
		}
		return lower;
	}

	/// <summary>
	/// Interpolates a float track with the original linear sampler.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="mode">The motion interpolation mode.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The sampled vector.</returns>
	private static Vector3 EvaluateFloat3(NinjaAnimationTrack track, int mode, float frame) => mode switch
	{
		1 => EvaluateSpline(track, frame),
		2 => EvaluateLinear2(track, frame),
		3 => throw new ModelFormatException("The NMDM angle interpolation mode cannot drive a float track.", 0),
		_ => EvaluateLinear(track, frame),
	};

	/// <summary>
	/// Interpolates a three-float track linearly.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The sampled vector.</returns>
	[Original(0x00842D04)]
	private static Vector3 EvaluateLinear(NinjaAnimationTrack track, float frame)
	{
		(int lower, int upper, double fraction) = LocateKeyframes(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[lower];
		NinjaKeyframe second = track.Keyframes[upper];
		return new Vector3(
			(float)(first.X + ((double)second.X - first.X) * fraction),
			(float)(first.Y + ((double)second.Y - first.Y) * fraction),
			(float)(first.Z + ((double)second.Z - first.Z) * fraction));
	}

	/// <summary>
	/// Interpolates a two-float track linearly and leaves the third component zero.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The sampled vector.</returns>
	[Original(0x00842D7C)]
	private static Vector3 EvaluateLinear2(NinjaAnimationTrack track, float frame)
	{
		(int lower, int upper, double fraction) = LocateKeyframes(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[lower];
		NinjaKeyframe second = track.Keyframes[upper];
		return new Vector3(
			(float)(first.X + ((double)second.X - first.X) * fraction),
			(float)(first.Y + ((double)second.Y - first.Y) * fraction),
			0.0f);
	}

	/// <summary>
	/// Interpolates a float track with the original four-point spline.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The sampled vector.</returns>
	[Original(0x0084303C)]
	private static Vector3 EvaluateSpline(NinjaAnimationTrack track, float frame)
	{
		int count = track.Keyframes.Count;
		int lower = LocateIndex(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[((lower - 1) % count + count) % count];
		NinjaKeyframe second = track.Keyframes[lower];
		NinjaKeyframe third = track.Keyframes[(lower + 1) % count];
		NinjaKeyframe fourth = track.Keyframes[(lower + 2) % count];
		double delta = (double)third.Frame - second.Frame;
		double time = delta > 0.0 ? ((double)frame - second.Frame) / delta : (double)frame - second.Frame;
		double squared = time * time;
		double cubed = squared * time;
		double firstWeight = (squared - time + squared - cubed) * 0.5;
		double fourthWeight = (cubed - squared) * 0.5;
		double secondWeight = -2.5 * squared + 1.0 + 1.5 * cubed;
		double thirdWeight = time * 0.5 + 2.0 * squared - 1.5 * cubed;
		return new Vector3(
			(float)(first.X * firstWeight + second.X * secondWeight + third.X * thirdWeight + fourth.X * fourthWeight),
			(float)(first.Y * firstWeight + second.Y * secondWeight + third.Y * thirdWeight + fourth.Y * fourthWeight),
			(float)(first.Z * firstWeight + second.Z * secondWeight + third.Z * thirdWeight + fourth.Z * fourthWeight));
	}

	/// <summary>
	/// Interpolates three 32-bit turn angles with the original 16-bit wrap delta.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="x">The first angle.</param>
	/// <param name="y">The second angle.</param>
	/// <param name="z">The third angle.</param>
	[Original(0x00842E50)]
	private static void EvaluateAngle32(NinjaAnimationTrack track, float frame, out int x, out int y, out int z)
	{
		(int lower, int upper, double fraction) = LocateKeyframes(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[lower];
		NinjaKeyframe second = track.Keyframes[upper];
		x = (int)(first.AngleX + (double)(short)((ushort)second.AngleX - (ushort)first.AngleX) * fraction);
		y = (int)(first.AngleY + (double)(short)((ushort)second.AngleY - (ushort)first.AngleY) * fraction);
		z = (int)(first.AngleZ + (double)(short)((ushort)second.AngleZ - (ushort)first.AngleZ) * fraction);
	}

	/// <summary>
	/// Interpolates three 16-bit turn angles.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <param name="x">The first angle.</param>
	/// <param name="y">The second angle.</param>
	/// <param name="z">The third angle.</param>
	[Original(0x00842F3C)]
	private static void EvaluateAngle16(NinjaAnimationTrack track, float frame, out int x, out int y, out int z)
	{
		(int lower, int upper, double fraction) = LocateKeyframes(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[lower];
		NinjaKeyframe second = track.Keyframes[upper];
		x = (int)((short)first.AngleX + (double)(short)((ushort)second.AngleX - (ushort)first.AngleX) * fraction);
		y = (int)((short)first.AngleY + (double)(short)((ushort)second.AngleY - (ushort)first.AngleY) * fraction);
		z = (int)((short)first.AngleZ + (double)(short)((ushort)second.AngleZ - (ushort)first.AngleZ) * fraction);
	}

	/// <summary>
	/// Interpolates a quaternion with the original shortest-path normalized linear blend.
	/// </summary>
	/// <param name="track">The track to sample.</param>
	/// <param name="frame">The frame position.</param>
	/// <returns>The sampled quaternion.</returns>
	[Original(0x0084713C)]
	private static NinjaQuaternion EvaluateQuaternion(NinjaAnimationTrack track, float frame)
	{
		(int lower, int upper, double fraction) = LocateKeyframes(track.Keyframes, frame);
		NinjaKeyframe first = track.Keyframes[lower];
		NinjaKeyframe second = track.Keyframes[upper];
		double dot = (double)second.W * first.W + (double)first.Y * second.Y + (double)first.X * second.X + (double)first.Z * second.Z;
		double sign = dot <= 0.0 ? -1.0 : 1.0;
		double inverse = 1.0 - fraction;
		double x = (double)first.X * inverse + (double)second.X * sign * fraction;
		double y = (double)first.Y * inverse + (double)second.Y * sign * fraction;
		double z = (double)first.Z * inverse + (double)second.Z * sign * fraction;
		double w = (double)first.W * inverse + (double)second.W * sign * fraction;
		double length = Math.Sqrt(x * x + y * y + z * z + w * w);
		double scale = 1.0 / length;
		return new NinjaQuaternion((float)(x * scale), (float)(y * scale), (float)(z * scale), (float)(w * scale));
	}
}
