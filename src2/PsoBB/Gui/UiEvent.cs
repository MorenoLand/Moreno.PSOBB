using System.Numerics;
using PsoBB.Platform;

namespace PsoBB.Gui;

/// <summary>
/// One keyboard, mouse or command event offered to the control tree.
/// </summary>
/// <remarks>
/// The event is immutable so one synthetic event can be routed to several controls while the
/// tree decides which element handles it.
/// </remarks>
public sealed class UiEvent
{
	private UiEvent(UiEventKind kind, GameKey key, char character, Vector2 position, MouseButtons buttons, int wheelDelta, int command)
	{
		Kind = kind;
		Key = key;
		Character = character;
		Position = position;
		Buttons = buttons;
		WheelDelta = wheelDelta;
		Command = command;
	}

	/// <summary>Gets the event family.</summary>
	public UiEventKind Kind { get; }

	/// <summary>Gets the keyboard key, or <see cref="GameKey.None"/>.</summary>
	public GameKey Key { get; }

	/// <summary>Gets the typed character, or <see langword="'\0'"/>.</summary>
	public char Character { get; }

	/// <summary>Gets the client-area pointer position.</summary>
	public Vector2 Position { get; }

	/// <summary>Gets the mouse buttons involved in the event.</summary>
	public MouseButtons Buttons { get; }

	/// <summary>Gets the wheel movement in 120-unit notches.</summary>
	public int WheelDelta { get; }

	/// <summary>Gets the numeric command identifier.</summary>
	public int Command { get; }

	/// <summary>Creates a key-down event.</summary>
	/// <param name="key">The keyboard key.</param>
	/// <returns>The event.</returns>
	public static UiEvent KeyDown(GameKey key) => new(UiEventKind.KeyDown, key, '\0', Vector2.Zero, MouseButtons.None, 0, 0);

	/// <summary>Creates a key-up event.</summary>
	/// <param name="key">The keyboard key.</param>
	/// <returns>The event.</returns>
	public static UiEvent KeyUp(GameKey key) => new(UiEventKind.KeyUp, key, '\0', Vector2.Zero, MouseButtons.None, 0, 0);

	/// <summary>Creates a typed-character event.</summary>
	/// <param name="character">The character.</param>
	/// <returns>The event.</returns>
	public static UiEvent Text(char character) => new(UiEventKind.TextInput, GameKey.None, character, Vector2.Zero, MouseButtons.None, 0, 0);

	/// <summary>Creates a pointer-move event.</summary>
	/// <param name="position">The client-area pointer position.</param>
	/// <returns>The event.</returns>
	public static UiEvent MouseMove(Vector2 position) => new(UiEventKind.MouseMove, GameKey.None, '\0', position, MouseButtons.None, 0, 0);

	/// <summary>Creates a mouse-button-down event.</summary>
	/// <param name="position">The client-area pointer position.</param>
	/// <param name="button">The button that went down.</param>
	/// <returns>The event.</returns>
	public static UiEvent MouseDown(Vector2 position, MouseButtons button) => new(UiEventKind.MouseDown, GameKey.None, '\0', position, button, 0, 0);

	/// <summary>Creates a mouse-button-up event.</summary>
	/// <param name="position">The client-area pointer position.</param>
	/// <param name="button">The button that went up.</param>
	/// <returns>The event.</returns>
	public static UiEvent MouseUp(Vector2 position, MouseButtons button) => new(UiEventKind.MouseUp, GameKey.None, '\0', position, button, 0, 0);

	/// <summary>Creates a wheel event.</summary>
	/// <param name="position">The client-area pointer position.</param>
	/// <param name="delta">The movement in 120-unit notches.</param>
	/// <returns>The event.</returns>
	public static UiEvent MouseWheel(Vector2 position, int delta) => new(UiEventKind.MouseWheel, GameKey.None, '\0', position, MouseButtons.None, delta, 0);

	/// <summary>Creates a command event.</summary>
	/// <param name="command">The numeric command identifier.</param>
	/// <returns>The event.</returns>
	public static UiEvent CommandEvent(int command) => new(UiEventKind.Command, GameKey.None, '\0', Vector2.Zero, MouseButtons.None, 0, command);
}
