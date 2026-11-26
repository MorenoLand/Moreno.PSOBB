namespace PsoBB.Models;

/// <summary>
/// The channel tracks for one animated bone.
/// </summary>
public sealed class NinjaBoneAnimation
{
	internal NinjaBoneAnimation(NinjaAnimationTrack[] tracks)
	{
		Tracks = tracks;
	}

	/// <summary>Gets the tracks in factor order.</summary>
	public IReadOnlyList<NinjaAnimationTrack> Tracks { get; }
}
