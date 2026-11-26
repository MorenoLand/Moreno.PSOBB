namespace PsoBB.Models;

/// <summary>
/// One keyframe track from a bone's NMDM motion data.
/// </summary>
public sealed class NinjaAnimationTrack
{
	internal NinjaAnimationTrack(NinjaAnimationChannel channel, NinjaAnimationTrackKind kind, int recordSize, NinjaKeyframe[] keyframes)
	{
		Channel = channel;
		Kind = kind;
		RecordSize = recordSize;
		Keyframes = keyframes;
	}

	/// <summary>Gets the channel this track drives.</summary>
	public NinjaAnimationChannel Channel { get; }

	/// <summary>Gets the stored keyframe record.</summary>
	public NinjaAnimationTrackKind Kind { get; }

	/// <summary>Gets the number of bytes per keyframe record.</summary>
	public int RecordSize { get; }

	/// <summary>Gets the keyframes in frame order.</summary>
	public IReadOnlyList<NinjaKeyframe> Keyframes { get; }
}
