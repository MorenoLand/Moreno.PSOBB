using PsoBB.Models;

namespace PsoBB.Player;

/// <summary>
/// One animation that can be selected for a player movement state.
/// </summary>
public sealed class PlayerAnimationClip
{
	/// <summary>
	/// Creates a clip over a parsed motion.
	/// </summary>
	/// <param name="name">The diagnostic clip name.</param>
	/// <param name="motion">The parsed motion that supplies the frame count.</param>
	/// <param name="frameStride">The time added to the motion clock on every update.</param>
	/// <param name="animationId">The original animation-table index, when known.</param>
	/// <param name="looping">Whether the motion restarts at its frame count.</param>
	/// <exception cref="ArgumentNullException"><paramref name="name"/> or <paramref name="motion"/> is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="frameStride"/> is negative.</exception>
	public PlayerAnimationClip(string name, NinjaMotion motion, float frameStride, int animationId = 0, bool looping = true)
	{
		ArgumentNullException.ThrowIfNull(name);
		ArgumentNullException.ThrowIfNull(motion);
		if (frameStride < 0)
			throw new ArgumentOutOfRangeException(nameof(frameStride), frameStride, "An animation stride cannot be negative.");
		Name = name;
		Motion = motion;
		FrameStride = frameStride;
		AnimationId = animationId;
		Looping = looping;
	}

	/// <summary>Gets the diagnostic clip name.</summary>
	public string Name { get; }

	/// <summary>Gets the parsed motion.</summary>
	public NinjaMotion Motion { get; }

	/// <summary>Gets the time added to the motion clock on every update.</summary>
	public float FrameStride { get; }

	/// <summary>Gets the original animation-table index, when known.</summary>
	public int AnimationId { get; }

	/// <summary>Gets a value indicating whether the motion restarts at its frame count.</summary>
	public bool Looping { get; }
}
