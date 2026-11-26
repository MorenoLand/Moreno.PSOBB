using System.Runtime.InteropServices;

namespace PsoBB.Windows;

/// <summary>
/// The Win32 window the Windows client presents into.
/// </summary>
internal sealed class GameWindow : IDisposable
{
	private const uint WindowStyleOverlapped = 0x00CF0000;
	private const uint WindowStyleVisible = 0x10000000;
	private const uint WindowStyleClipSiblings = 0x04000000;
	private const uint WindowStyleClipChildren = 0x02000000;
	private const uint WindowMessageClose = 0x0010;
	private const uint WindowMessageDestroy = 0x0002;
	private const uint WindowMessageQuit = 0x0012;
	private const uint WindowMessageSetIcon = 0x0080;
	private const int ApplicationIconResource = 32512;
	private const int IconSmall = 0;
	private const int IconBig = 1;
	private const int BlackBrush = 4;
	private readonly string _className;
	private readonly WindowMessageHandler _windowProcedure;
	private readonly nint _instance;
	private nint _handle;
	private bool _closeRequested;
	private bool _disposed;

	/// <summary>
	/// Registers the window class and creates the visible game window.
	/// </summary>
	/// <param name="title">The window title.</param>
	/// <param name="width">Client width in pixels.</param>
	/// <param name="height">Client height in pixels.</param>
	public GameWindow(string title, int width, int height)
	{
		_className = $"PsoBB.Windows.{Guid.NewGuid():N}";
		_windowProcedure = WindowProcedure;
		_instance = GetModuleHandle(null);
		nint icon = LoadIcon(_instance, ApplicationIconResource);
		WindowClass windowClass = new()
		{
			Size = (uint)Marshal.SizeOf<WindowClass>(),
			Procedure = Marshal.GetFunctionPointerForDelegate(_windowProcedure),
			Instance = _instance,
			ClassName = _className,
			Cursor = LoadCursor(0, 32512),
			Background = GetStockObject(BlackBrush),
			Icon = icon,
			SmallIcon = icon,
		};
		if (RegisterClassEx(ref windowClass) == 0)
			throw new InvalidOperationException($"RegisterClassEx failed with error {Marshal.GetLastWin32Error()}.");
		uint style = WindowStyleOverlapped | WindowStyleVisible | WindowStyleClipSiblings | WindowStyleClipChildren;
		Rect outer = new() { Left = 0, Top = 0, Right = width, Bottom = height };
		AdjustWindowRect(ref outer, style, false);
		_handle = CreateWindowEx(0, _className, title, style,
			unchecked((int)0x80000000), unchecked((int)0x80000000), outer.Right - outer.Left, outer.Bottom - outer.Top, 0, 0, _instance, 0);
		if (_handle == 0)
		{
			UnregisterClass(_className, _instance);
			throw new InvalidOperationException($"CreateWindowEx failed with error {Marshal.GetLastWin32Error()}.");
		}
		Rect client = new();
		if (GetClientRect(_handle, ref client))
		{
			ClientWidth = client.Right - client.Left;
			ClientHeight = client.Bottom - client.Top;
		}
		else
		{
			ClientWidth = width;
			ClientHeight = height;
		}
		ShowWindow(_handle, 5);
		UpdateWindow(_handle);
		SendMessage(_handle, WindowMessageSetIcon, IconBig, icon);
		SendMessage(_handle, WindowMessageSetIcon, IconSmall, icon);
	}

	/// <summary>Gets the native window handle.</summary>
	public nint Handle => _handle;

	/// <summary>Gets the client-area width in pixels.</summary>
	public int ClientWidth { get; }

	/// <summary>Gets the client-area height in pixels.</summary>
	public int ClientHeight { get; }

	/// <summary>
	/// Processes pending window messages and reports whether the window is still open.
	/// </summary>
	/// <returns><see langword="true"/> while the window has not been closed.</returns>
	public bool Pump()
	{
		while (PeekMessage(out Message message, 0, 0, 0, 1))
		{
			if (message.Value == WindowMessageQuit)
				return false;
			TranslateMessage(ref message);
			DispatchMessage(ref message);
		}
		return !_closeRequested;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		if (_handle != 0)
		{
			DestroyWindow(_handle);
			_handle = 0;
		}
		UnregisterClass(_className, _instance);
	}

	private nint WindowProcedure(nint window, uint message, nint wParam, nint lParam)
	{
		switch (message)
		{
			case WindowMessageClose:
				_closeRequested = true;
				return 0;
			case WindowMessageDestroy:
				PostQuitMessage(0);
				return 0;
			default:
				return DefWindowProc(window, message, wParam, lParam);
		}
	}

	[UnmanagedFunctionPointer(CallingConvention.StdCall)]
	private delegate nint WindowMessageHandler(nint window, uint message, nint wParam, nint lParam);

	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
	private struct WindowClass
	{
		public uint Size;
		public uint Style;
		public nint Procedure;
		public int ClassExtra;
		public int WindowExtra;
		public nint Instance;
		public nint Icon;
		public nint Cursor;
		public nint Background;
		public string? MenuName;
		public string ClassName;
		public nint SmallIcon;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct Message
	{
		public nint Window;
		public uint Value;
		public nint WParam;
		public nint LParam;
		public uint Time;
		public int X;
		public int Y;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct Rect
	{
		public int Left;
		public int Top;
		public int Right;
		public int Bottom;
	}

	[DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern nint GetModuleHandle(string? moduleName);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern ushort RegisterClassEx(ref WindowClass windowClass);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern nint CreateWindowEx(uint extendedStyle, string className, string windowName, uint style, int x, int y, int width, int height, nint parent, nint menu, nint instance, nint parameter);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool AdjustWindowRect(ref Rect rect, uint style, [MarshalAs(UnmanagedType.Bool)] bool menu);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool GetClientRect(nint window, ref Rect rect);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool ShowWindow(nint window, int command);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool UpdateWindow(nint window);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool PeekMessage(out Message message, nint window, uint filterMin, uint filterMax, uint remove);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool TranslateMessage(ref Message message);

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern nint DispatchMessage(ref Message message);

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern nint DefWindowProc(nint window, uint message, nint wParam, nint lParam);

	[DllImport("user32.dll")]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool DestroyWindow(nint window);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool UnregisterClass(string className, nint instance);

	[DllImport("user32.dll")]
	private static extern void PostQuitMessage(int exitCode);

	[DllImport("user32.dll")]
	private static extern nint LoadCursor(nint instance, int cursorName);

	[DllImport("gdi32.dll")]
	private static extern nint GetStockObject(int index);

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern nint LoadIcon(nint instance, nint iconName);

	[DllImport("user32.dll", CharSet = CharSet.Unicode)]
	private static extern nint SendMessage(nint window, uint message, nint wParam, nint lParam);
}
