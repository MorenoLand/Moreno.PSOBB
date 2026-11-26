using PsoBB.Models;

namespace PsoBB.Player;

/// <summary>
/// The current player motion and its clock.
/// </summary>
/// <remarks>
/// The original selects a motion from the player's animation table and then advances it once per
/// frame in <c>Player__Animate</c>. The table lookup and the per-type transition flags are not
/// ported; this type reproduces the frame advance and wrap over a motion supplied by the caller.
/// </remarks>
public sealed class PlayerAnimation
{
	/// <summary>Gets the current parsed motion, or <see langword="null"/> when none is selected.</summary>
	public NinjaMotion? Motion { get; private set; }

	/// <summary>Gets the current clip, or <see langword="null"/> when none is selected.</summary>
	public PlayerAnimationClip? Clip { get; private set; }

	/// <summary>Gets the elapsed motion time.</summary>
	public float Elapsed { get; private set; }

	/// <summary>Gets the time added to the motion clock on every update.</summary>
	public float FrameStride { get; private set; }

	/// <summary>Gets the motion length in frames.</summary>
	public uint FrameCount => Motion?.FrameCount ?? 0;

	/// <summary>Gets a value indicating whether the motion restarts at its frame count.</summary>
	public bool Looping { get; private set; }

	/// <summary>
	/// Selects a motion and resets its clock to zero.
	/// </summary>
	/// <param name="clip">The clip to play.</param>
	/// <exception cref="ArgumentNullException"><paramref name="clip"/> is null.</exception>
	[Original(0x007A9A6C, "Player::StartNpcAnimation")]
	public void Play(PlayerAnimationClip clip)
	{
		ArgumentNullException.ThrowIfNull(clip);
		Clip = clip;
		Motion = clip.Motion;
		FrameStride = clip.FrameStride;
		Looping = clip.Looping;
		Elapsed = 0.0f;
	}

	/// <summary>
	/// Adds one frame stride to the motion clock and wraps or clamps at the motion length.
	/// </summary>
	[Original(0x007AA094, "Player::Animate")]
	public void Advance()
	{
		if (Motion is null)
			return;
		Elapsed += FrameStride;
		uint frameCount = FrameCount;
		if (frameCount == 0 || !(Elapsed >= frameCount))
			return;
		if (Looping)
			Elapsed -= frameCount;
		else
			Elapsed = frameCount;
	}
}
