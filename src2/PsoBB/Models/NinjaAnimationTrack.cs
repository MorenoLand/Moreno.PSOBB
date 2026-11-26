namespace PsoBB.Models;

/// <summary>
/// One keyframe track from a bone's NMDM motion data.
/// </summary>
public sealed class NinjaAnimationTrack
{
	internal NinjaAnimationTrack(NinjaAnimationChannel channel, NinjaKeyframe[] keyframes)
	{
		Channel = channel;
		Keyframes = keyframes;
	}

	/// <summary>Gets the channel this track drives.</summary>
	public NinjaAnimationChannel Channel { get; }

	/// <summary>Gets the keyframes in frame order.</summary>
	public IReadOnlyList<NinjaKeyframe> Keyframes { get; }
}
