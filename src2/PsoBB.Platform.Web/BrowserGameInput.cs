namespace PsoBB.Platform.Web;

/// <summary>
/// Keyboard and mouse state assembled from a browser event queue at each poll.
/// </summary>
public sealed class BrowserGameInput : IGameInput
{
	private readonly IBrowserInputHost _host;
	private readonly MemoryGameInput _input = new();
	private readonly Queue<BrowserInputEvent> _events = new();

	/// <summary>
	/// Creates an input device over the supplied browser cursor host.
	/// </summary>
	/// <param name="host">The browser cursor host.</param>
	public BrowserGameInput(IBrowserInputHost host)
	{
		ArgumentNullException.ThrowIfNull(host);
		_host = host;
	}

	/// <inheritdoc/>
	public KeyboardState Keyboard => _input.Keyboard;

	/// <inheritdoc/>
	public MouseState Mouse => _input.Mouse;

	/// <summary>
	/// Gets a value indicating whether the host currently shows the pointer.
	/// </summary>
	public bool CursorVisible { get; private set; } = true;

	/// <summary>
	/// Queues an input change for the next poll.
	/// </summary>
	/// <param name="inputEvent">The change to queue.</param>
	public void Push(BrowserInputEvent inputEvent) => _events.Enqueue(inputEvent);

	/// <inheritdoc/>
	public void Poll()
	{
		while (_events.Count > 0)
			Apply(_events.Dequeue());
		_input.Poll();
	}

	/// <inheritdoc/>
	public void SetCursorPosition(int x, int y)
	{
		_input.SetCursorPosition(x, y);
		_host.SetPointerPosition(x, y);
	}

	/// <inheritdoc/>
	public void SetCursorVisible(bool visible)
	{
		CursorVisible = visible;
		_host.SetPointerVisible(visible);
	}

	private void Apply(BrowserInputEvent inputEvent)
	{
		switch (inputEvent.Kind)
		{
			case BrowserInputEventKind.Key:
				if ((uint)inputEvent.ScanCode < KeyboardState.KeyCount)
					_input.SetKey(inputEvent.ScanCode, inputEvent.Down);
				break;
			case BrowserInputEventKind.PointerMove:
				_input.SetCursorPosition(inputEvent.X, inputEvent.Y);
				_input.AddMouseMovement(inputEvent.DeltaX, inputEvent.DeltaY);
				break;
			case BrowserInputEventKind.PointerButtons:
				_input.SetButtons(inputEvent.Buttons & MouseButtons.All);
				break;
			case BrowserInputEventKind.Wheel:
				_input.AddWheelMovement(inputEvent.WheelDelta);
				break;
			case BrowserInputEventKind.FocusLost:
				for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
					_input.SetKey(scanCode, false);
				_input.SetButtons(MouseButtons.None);
				break;
			default:
				throw new ArgumentOutOfRangeException(nameof(inputEvent), inputEvent.Kind, "Unknown browser input event.");
		}
	}
}
