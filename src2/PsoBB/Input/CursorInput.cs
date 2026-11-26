using PsoBB.Platform;

namespace PsoBB.Input;

/// <summary>
/// Tracks the polled pointer position and the requested pointer visibility.
/// </summary>
/// <remarks>
/// Position is the value reported by the last poll. Visibility is the last request sent to the host, because the platform contract does not read it back.
/// </remarks>
public sealed class CursorInput
{
	private readonly IGameInput _input;

	/// <summary>
	/// Creates cursor tracking over a platform input source.
	/// </summary>
	/// <param name="input">The source that receives pointer requests.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	public CursorInput(IGameInput input) => _input = input ?? throw new ArgumentNullException(nameof(input));

	/// <summary>
	/// Gets the horizontal client-area position from the last poll.
	/// </summary>
	public int X { get; private set; }

	/// <summary>
	/// Gets the vertical client-area position from the last poll.
	/// </summary>
	public int Y { get; private set; }

	/// <summary>
	/// Gets a value indicating whether the last request asked the host to show the pointer.
	/// </summary>
	public bool Visible { get; private set; } = true;

	/// <summary>
	/// Requests a pointer position from the host.
	/// </summary>
	/// <param name="x">The horizontal client-area coordinate.</param>
	/// <param name="y">The vertical client-area coordinate.</param>
	public void SetPosition(int x, int y) => _input.SetCursorPosition(x, y);

	/// <summary>
	/// Requests pointer visibility from the host.
	/// </summary>
	/// <param name="visible">Whether the pointer should be visible.</param>
	public void SetVisible(bool visible)
	{
		Visible = visible;
		_input.SetCursorVisible(visible);
	}

	internal void Update(MouseState state)
	{
		X = state.X;
		Y = state.Y;
	}
}
