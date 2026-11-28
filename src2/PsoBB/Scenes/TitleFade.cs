namespace PsoBB.Scenes;

/// <summary>
/// The shared screen fade state machine applied by <c>0x0081AA00</c>: state 1 hides the current
/// screen, state 2 clears the state and creates the requested screen, and state 0 is steady.
/// </summary>
public static class TitleFade
{
	/// <summary>The state the scene initialiser and the selector start with.</summary>
	public const uint Initial = 1;

	/// <summary>Gets a value indicating whether the state keeps the screen hidden for this frame.</summary>
	/// <param name="state">The current fade state.</param>
	/// <returns><see langword="true"/> for state 1 and state 2.</returns>
	public static bool IsHidden(uint state) => state == 1 || state == 2;

	/// <summary>Advances the fade state once in the order the update applies it.</summary>
	/// <param name="state">The current fade state; replaced with the next state.</param>
	/// <returns><see langword="true"/> when the screen stays hidden for this frame.</returns>
	public static bool Advance(ref uint state)
	{
		bool hidden = IsHidden(state);
		state = state switch
		{
			1 => 2,
			2 => 0,
			_ => 0,
		};
		return hidden;
	}
}
