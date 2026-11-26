using System.Runtime.InteropServices;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// A hidden Win32 window for a renderer smoke test.
/// </summary>
internal sealed class HiddenWindow : IDisposable
{
	private const uint WindowStylePopup = 0x80000000;
	private readonly string _className;
	private readonly WndProc _windowProcedure;
	private nint _instance;
	private nint _handle;
	private bool _disposed;

	/// <summary>
	/// Registers a window class and creates a hidden one-pixel window.
	/// </summary>
	public HiddenWindow()
	{
		_className = $"PsoBB.Direct3D11.Tests.{Guid.NewGuid():N}";
		_windowProcedure = WindowProcedure;
		_instance = GetModuleHandle(null);
		WNDCLASSEX windowClass = new()
		{
			cbSize = (uint)Marshal.SizeOf<WNDCLASSEX>(),
			lpfnWndProc = Marshal.GetFunctionPointerForDelegate(_windowProcedure),
			hInstance = _instance,
			lpszClassName = _className,
		};
		if (RegisterClassEx(ref windowClass) == 0)
			throw new InvalidOperationException($"RegisterClassEx failed with error {Marshal.GetLastWin32Error()}.");
		_handle = CreateWindowEx(0, _className, _className, WindowStylePopup, 0, 0, 1, 1, 0, 0, _instance, 0);
		if (_handle == 0)
		{
			UnregisterClass(_className, _instance);
			throw new InvalidOperationException($"CreateWindowEx failed with error {Marshal.GetLastWin32Error()}.");
		}
	}

	/// <summary>Gets the native window handle.</summary>
	public nint Handle => _handle;

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
		_instance = 0;
	}

	private nint WindowProcedure(nint window, uint message, nint wParam, nint lParam) => DefWindowProcW(window, message, wParam, lParam);

	[UnmanagedFunctionPointer(CallingConvention.StdCall)]
	private delegate nint WndProc(nint window, uint message, nint wParam, nint lParam);

	[StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
	private struct WNDCLASSEX
	{
		public uint cbSize;
		public uint style;
		public nint lpfnWndProc;
		public int cbClsExtra;
		public int cbWndExtra;
		public nint hInstance;
		public nint hIcon;
		public nint hCursor;
		public nint hbrBackground;
		public string? lpszMenuName;
		public string lpszClassName;
		public nint hIconSm;
	}

	[DllImport("kernel32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern nint GetModuleHandle(string? moduleName);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern ushort RegisterClassEx(ref WNDCLASSEX windowClass);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	private static extern nint CreateWindowEx(uint extendedStyle, string className, string windowName, uint style, int x, int y, int width, int height, nint parent, nint menu, nint instance, nint parameter);

	[DllImport("user32.dll", SetLastError = true)]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool DestroyWindow(nint window);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, SetLastError = true)]
	[return: MarshalAs(UnmanagedType.Bool)]
	private static extern bool UnregisterClass(string className, nint instance);

	[DllImport("user32.dll", CharSet = CharSet.Unicode, ExactSpelling = true)]
	private static extern nint DefWindowProcW(nint window, uint message, nint wParam, nint lParam);
}
