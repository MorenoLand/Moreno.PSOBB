namespace PsoBB.Audio;

/// <summary>
/// The fixed table entry that places one sample inside a sound bank and describes its loop.
/// </summary>
/// <param name="SampleId">The sample's ordinal inside the bank.</param>
/// <param name="Category">The client's sample category.</param>
/// <param name="LoopFlags">The loop flags; bit zero enables the loop region.</param>
/// <param name="Flags">The remaining sample flags.</param>
/// <param name="FileOffset">The byte offset of the sample header inside the bank.</param>
/// <param name="StartLoop">The first frame of the loop region.</param>
/// <param name="EndLoop">The exclusive frame where the loop region ends.</param>
public readonly record struct PacSoundMetadata(byte SampleId, byte Category, byte LoopFlags, byte Flags, int FileOffset, int StartLoop, int EndLoop)
{
	/// <summary>
	/// Gets a value indicating whether the sample has a loop region.
	/// </summary>
	public bool IsLooping => (LoopFlags & 1) != 0;
}
