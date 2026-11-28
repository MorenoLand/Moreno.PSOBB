using PsoBB.Input;

namespace PsoBB.Player;

/// <summary>
/// Adapts the portable input manager's movement vector to a player movement intent.
/// </summary>
public sealed class InputManagerPlayerInput : IPlayerInput
{
	private readonly InputManager _input;

	/// <summary>
	/// Creates the adapter over an input manager.
	/// </summary>
	/// <param name="input">The input manager to read.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	public InputManagerPlayerInput(InputManager input)
	{
		_input = input ?? throw new ArgumentNullException(nameof(input));
	}

	/// <summary>Gets or sets the camera heading in 16-bit turn units.</summary>
	public int CameraHeading { get; set; }

	/// <summary>Gets or sets a value indicating whether walking was explicitly requested.</summary>
	public bool Walk { get; set; }

	/// <summary>
	/// Reads the current movement vector and the configured camera heading.
	/// </summary>
	/// <returns>The movement input.</returns>
	public PlayerMovementIntent ReadIntent() => new(_input.MoveVector, CameraHeading, Walk);
}
