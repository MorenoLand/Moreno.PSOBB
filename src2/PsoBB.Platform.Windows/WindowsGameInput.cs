using System.ComponentModel;
using System.Runtime.InteropServices;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Polls the Windows keyboard, pointer and gamepad and converts them to the client's state.
/// </summary>
/// <remarks>
/// The instance subclasses the supplied window to collect wheel movement, so it must be created, polled and disposed on the thread that owns the window. DirectInput supplies the devices when it is available; the asynchronous Win32 state calls remain the fallback, and focus loss releases every device and clears its state.
/// </remarks>
public sealed class WindowsGameInput : IGameInput, IDisposable
{
	private const int GwlWndProc = -4;
	private const int GaRoot = 2;
	private const uint WmMouseWheel = 0x020A;
	private const uint MapVkToVscEx = 4;
	private const int VkLeftButton = 0x01;
	private const int VkRightButton = 0x02;
	private const int VkMiddleButton = 0x04;
	private const int VkXButton1 = 0x05;
	private const int VkXButton2 = 0x06;
	private readonly KeyboardState _keyboard = new();
	private readonly int[] _scanCodes = new int[KeyboardState.KeyCount];
	private readonly nint _window;
	private readonly WindowMessageHandler _windowProcedure;
	private readonly nint _previousWindowProcedure;
	private readonly object _gate = new();
	private readonly DirectInputDeviceSet? _directInput;
	private MouseState _mouse = MouseState.Empty;
	private GamepadState _gamepad = GamepadState.Empty;
	private int _wheelDelta;
	private int _previousX;
	private int _previousY;
	private bool _hasPosition;
	private bool _focused;
	private bool _cursorVisible = true;
	private bool _disposed;

	/// <summary>
	/// Starts reading the input of <paramref name="windowHandle"/>.
	/// </summary>
	/// <param name="windowHandle">The game window that owns the client-area pointer coordinates and receives wheel messages.</param>
	/// <exception cref="ArgumentOutOfRangeException"><paramref name="windowHandle"/> is zero.</exception>
	/// <exception cref="ArgumentException">The handle is not a window.</exception>
	/// <exception cref="Win32Exception">The window procedure could not be subclassed.</exception>
	public WindowsGameInput(nint windowHandle)
	{
		if (windowHandle == 0)
			throw new ArgumentOutOfRangeException(nameof(windowHandle), windowHandle, "A window handle is required.");
		if (!NativeMethods.IsWindow(windowHandle))
			throw new ArgumentException("The handle does not name a window.", nameof(windowHandle));
		_window = windowHandle;
		BuildScanCodeMap();
		_windowProcedure = WindowProcedure;
		Marshal.SetLastPInvokeError(0);
		_previousWindowProcedure = SetWindowProcedure(windowHandle, Marshal.GetFunctionPointerForDelegate(_windowProcedure));
		if (_previousWindowProcedure == 0)
		{
			int error = Marshal.GetLastPInvokeError();
			if (error != 0)
				throw new Win32Exception(error, "The window procedure could not be subclassed.");
		}
		_directInput = DirectInputDeviceSet.TryCreate(windowHandle, out _);
		_focused = IsForeground();
		if (_focused)
			_directInput?.Acquire();
	}

	/// <inheritdoc/>
	public KeyboardState Keyboard => _keyboard;

	/// <inheritdoc/>
	public MouseState Mouse => _mouse;

	/// <inheritdoc/>
	public GamepadState Gamepad => _gamepad;

	/// <inheritdoc/>
	public bool IsFocused => _focused;

	/// <inheritdoc/>
	public void Poll()
	{
		ThrowIfDisposed();
		bool foreground = IsForeground();
		if (foreground != _focused)
		{
			_focused = foreground;
			if (foreground)
				_directInput?.Acquire();
			else
				_directInput?.Release();
		}
		if (foreground)
		{
			if (_directInput is null || !_directInput.TryReadKeyboard(_keyboard))
			{
				ClearKeyboard();
				ReadAsyncKeyboard();
			}
		}
		else
		{
			ClearKeyboard();
		}
		int x = _mouse.X;
		int y = _mouse.Y;
		int deltaX = 0;
		int deltaY = 0;
		NativeMethods.Point point;
		if (NativeMethods.GetCursorPos(out point) && NativeMethods.ScreenToClient(_window, ref point))
		{
			x = point.X;
			y = point.Y;
			if (_hasPosition)
			{
				deltaX = unchecked(x - _previousX);
				deltaY = unchecked(y - _previousY);
			}
			_previousX = x;
			_previousY = y;
			_hasPosition = true;
		}
		MouseButtons buttons = foreground ? ReadMouseButtons() : MouseButtons.None;
		int wheel;
		lock (_gate)
		{
			wheel = _wheelDelta;
			_wheelDelta = 0;
		}
		_mouse = new MouseState(x, y, deltaX, deltaY, wheel, buttons);
		_gamepad = foreground && _directInput is not null && _directInput.TryReadGamepad(out GamepadState gamepad) ? gamepad : GamepadState.Empty;
	}

	/// <inheritdoc/>
	public void SetCursorPosition(int x, int y)
	{
		ThrowIfDisposed();
		NativeMethods.Point point = new() { X = x, Y = y };
		if (NativeMethods.ClientToScreen(_window, ref point))
			NativeMethods.SetCursorPos(point.X, point.Y);
	}

	/// <inheritdoc/>
	public void SetCursorVisible(bool visible)
	{
		ThrowIfDisposed();
		if (_cursorVisible == visible)
			return;
		if (visible)
		{
			int count;
			do
			{
				count = NativeMethods.ShowCursor(true);
			}
			while (count < 0);
		}
		else
		{
			int count;
			do
			{
				count = NativeMethods.ShowCursor(false);
			}
			while (count >= 0);
		}
		_cursorVisible = visible;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_directInput?.Dispose();
		if (NativeMethods.IsWindow(_window))
			SetWindowProcedure(_window, _previousWindowProcedure);
	}

	private nint WindowProcedure(nint window, uint message, nint wParam, nint lParam)
	{
		if (message == WmMouseWheel)
		{
			int delta = (short)((long)wParam >> 16);
			lock (_gate)
				_wheelDelta = unchecked(_wheelDelta + delta);
		}
		return NativeMethods.CallWindowProcW(_previousWindowProcedure, window, message, wParam, lParam);
	}

	private void BuildScanCodeMap()
	{
		Array.Fill(_scanCodes, -1);
		nint layout = NativeMethods.GetKeyboardLayout(0);
		for (int virtualKey = 1; virtualKey < KeyboardState.KeyCount; virtualKey++)
		{
			uint scanCode = NativeMethods.MapVirtualKeyExW((uint)virtualKey, MapVkToVscEx, layout);
			if ((scanCode & 0xFF) == 0)
				continue;
			_scanCodes[virtualKey] = (int)(scanCode & 0xFF) | ((scanCode & 0xFF00) != 0 ? 0x80 : 0);
		}
	}

	private bool IsForeground()
	{
		nint foreground = NativeMethods.GetForegroundWindow();
		return foreground != 0 && NativeMethods.GetAncestor(_window, GaRoot) == foreground;
	}

	private void ClearKeyboard()
	{
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
			_keyboard.SetKey(scanCode, false);
	}

	private void ReadAsyncKeyboard()
	{
		for (int virtualKey = 1; virtualKey < KeyboardState.KeyCount; virtualKey++)
		{
			int scanCode = _scanCodes[virtualKey];
			if (scanCode < 0)
				continue;
			_keyboard.SetKey(scanCode, (NativeMethods.GetAsyncKeyState(virtualKey) & 0x8000) != 0);
		}
	}

	private MouseButtons ReadMouseButtons()
	{
		if (_directInput is not null && _directInput.TryReadMouseButtons(out MouseButtons buttons))
			return buttons;
		return ReadAsyncButtons();
	}

	private static MouseButtons ReadAsyncButtons()
	{
		MouseButtons buttons = MouseButtons.None;
		if ((NativeMethods.GetAsyncKeyState(VkLeftButton) & 0x8000) != 0)
			buttons |= MouseButtons.Left;
		if ((NativeMethods.GetAsyncKeyState(VkRightButton) & 0x8000) != 0)
			buttons |= MouseButtons.Right;
		if ((NativeMethods.GetAsyncKeyState(VkMiddleButton) & 0x8000) != 0)
			buttons |= MouseButtons.Middle;
		if ((NativeMethods.GetAsyncKeyState(VkXButton1) & 0x8000) != 0)
			buttons |= MouseButtons.Button4;
		if ((NativeMethods.GetAsyncKeyState(VkXButton2) & 0x8000) != 0)
			buttons |= MouseButtons.Button5;
		return buttons;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	private static nint SetWindowProcedure(nint window, nint windowProcedure) => Environment.Is64BitProcess
		? NativeMethods.SetWindowLongPtrW(window, GwlWndProc, windowProcedure)
		: NativeMethods.SetWindowLongW(window, GwlWndProc, windowProcedure);

	[UnmanagedFunctionPointer(CallingConvention.Winapi)]
	private delegate nint WindowMessageHandler(nint window, uint message, nint wParam, nint lParam);

	private static class NativeMethods
	{
		[StructLayout(LayoutKind.Sequential)]
		internal struct Point
		{
			internal int X;
			internal int Y;
		}

		[DllImport("user32.dll", EntryPoint = "IsWindow")]
		[return: MarshalAs(UnmanagedType.Bool)]
		internal static extern bool IsWindow(nint window);

		[DllImport("user32.dll", EntryPoint = "GetForegroundWindow")]
		internal static extern nint GetForegroundWindow();

		[DllImport("user32.dll", EntryPoint = "GetAncestor")]
		internal static extern nint GetAncestor(nint window, int flags);

		[DllImport("user32.dll", EntryPoint = "GetAsyncKeyState")]
		internal static extern short GetAsyncKeyState(int virtualKey);

		[DllImport("user32.dll", EntryPoint = "GetKeyboardLayout")]
		internal static extern nint GetKeyboardLayout(uint threadId);

		[DllImport("user32.dll", EntryPoint = "MapVirtualKeyExW")]
		internal static extern uint MapVirtualKeyExW(uint code, uint mapType, nint keyboardLayout);

		[DllImport("user32.dll", EntryPoint = "GetCursorPos", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		internal static extern bool GetCursorPos(out Point point);

		[DllImport("user32.dll", EntryPoint = "ScreenToClient", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		internal static extern bool ScreenToClient(nint window, ref Point point);

		[DllImport("user32.dll", EntryPoint = "ClientToScreen", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		internal static extern bool ClientToScreen(nint window, ref Point point);

		[DllImport("user32.dll", EntryPoint = "SetCursorPos", SetLastError = true)]
		[return: MarshalAs(UnmanagedType.Bool)]
		internal static extern bool SetCursorPos(int x, int y);

		[DllImport("user32.dll", EntryPoint = "ShowCursor")]
		internal static extern int ShowCursor([MarshalAs(UnmanagedType.Bool)] bool show);

		[DllImport("user32.dll", EntryPoint = "CallWindowProcW")]
		internal static extern nint CallWindowProcW(nint previousWindowProcedure, nint window, uint message, nint wParam, nint lParam);

		[DllImport("user32.dll", EntryPoint = "SetWindowLongW", SetLastError = true)]
		internal static extern nint SetWindowLongW(nint window, int index, nint newValue);

		[DllImport("user32.dll", EntryPoint = "SetWindowLongPtrW", SetLastError = true)]
		internal static extern nint SetWindowLongPtrW(nint window, int index, nint newValue);
	}
}
