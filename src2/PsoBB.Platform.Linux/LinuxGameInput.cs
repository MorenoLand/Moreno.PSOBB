using System.Diagnostics.CodeAnalysis;
using Silk.NET.SDL;

namespace PsoBB.Platform.Linux;

/// <summary>
/// Keyboard and mouse state filled from SDL's event pump and translated to the client's DirectInput scan codes.
/// </summary>
/// <remarks>
/// SDL reports USB usage codes while the contract uses PC scan-code-set-one values; the lookup table converts every key the client names. The wheel arrives through an SDL event watch so polling does not consume events that the window and renderer hosts still need.
/// </remarks>
public sealed unsafe class LinuxGameInput : IGameInput, IDisposable
{
	private static readonly uint Subsystems = Sdl.InitVideo | Sdl.InitEvents;
	private static readonly Sdl Api = Sdl.GetApi();
	private readonly KeyboardState _keyboard = new();
	private readonly object _gate = new();
	private readonly nint _windowHandle;
	private readonly EventFilter _wheelFilter;
	private readonly PfnEventFilter _wheelFilterPointer;
	private MouseState _mouse = MouseState.Empty;
	private int _wheelDelta;
	private bool _cursorVisible = true;
	private bool _disposed;

	/// <summary>
	/// Starts SDL input for the host window.
	/// </summary>
	/// <param name="windowHandle">The <c>SDL_Window</c> pointer used for pointer warping, or zero to warp the global pointer.</param>
	/// <exception cref="InvalidOperationException">SDL input could not start.</exception>
	public LinuxGameInput(nint windowHandle = 0)
	{
		_windowHandle = windowHandle;
		_wheelFilter = OnSdlEvent;
		_wheelFilterPointer = _wheelFilter;
		if (Api.InitSubSystem(Subsystems) != 0)
			throw new InvalidOperationException($"SDL input could not start: {Api.GetErrorS()}");
		try
		{
			Api.AddEventWatch(_wheelFilterPointer, (void*)0);
		}
		catch
		{
			_wheelFilterPointer.Dispose();
			Api.QuitSubSystem(Subsystems);
			throw;
		}
	}

	/// <inheritdoc/>
	public KeyboardState Keyboard => _keyboard;

	/// <inheritdoc/>
	public MouseState Mouse => _mouse;

	/// <summary>
	/// Gets a value indicating whether the host currently shows the pointer.
	/// </summary>
	public bool CursorVisible => _cursorVisible;

	/// <summary>
	/// Tries to start SDL input, reporting why the device is unavailable instead of throwing.
	/// </summary>
	/// <param name="windowHandle">The <c>SDL_Window</c> pointer used for pointer warping, or zero to warp the global pointer.</param>
	/// <param name="input">The started input when SDL is available.</param>
	/// <param name="unavailableReason">The SDL failure text when the device is unavailable.</param>
	/// <returns><see langword="true"/> when SDL input started.</returns>
	public static bool TryCreate(nint windowHandle, [NotNullWhen(true)] out LinuxGameInput? input, out string? unavailableReason)
	{
		try
		{
			input = new LinuxGameInput(windowHandle);
			unavailableReason = null;
			return true;
		}
		catch (Exception exception) when (exception is InvalidOperationException or DllNotFoundException or TypeInitializationException or BadImageFormatException or PlatformNotSupportedException or EntryPointNotFoundException)
		{
			input = null;
			unavailableReason = exception.Message;
			return false;
		}
	}

	/// <inheritdoc/>
	public void Poll()
	{
		ThrowIfDisposed();
		Api.PumpEvents();
		byte* keys = Api.GetKeyboardState((int*)0);
		if (keys is not null)
			for (int scancode = 0; scancode < DirectInputScanCodes.Length; scancode++)
			{
				int scanCode = DirectInputScanCodes[scancode];
				if (scanCode >= 0)
					_keyboard.SetKey(scanCode, keys[scancode] != 0);
			}
		int mouseX;
		int mouseY;
		int deltaX;
		int deltaY;
		uint mask = Api.GetMouseState(&mouseX, &mouseY);
		Api.GetRelativeMouseState(&deltaX, &deltaY);
		lock (_gate)
		{
			int wheel = _wheelDelta;
			_wheelDelta = 0;
			_mouse = new MouseState(mouseX, mouseY, deltaX, deltaY, wheel, TranslateButtons(mask));
		}
	}

	/// <inheritdoc/>
	public void SetCursorPosition(int x, int y)
	{
		ThrowIfDisposed();
		if (_windowHandle == 0)
			Api.WarpMouseGlobal(x, y);
		else
			Api.WarpMouseInWindow((Window*)_windowHandle, x, y);
	}

	/// <inheritdoc/>
	public void SetCursorVisible(bool visible)
	{
		ThrowIfDisposed();
		Api.ShowCursor(visible ? Sdl.Enable : Sdl.Disable);
		_cursorVisible = visible;
	}

	/// <summary>
	/// Translates an SDL scan code to the DirectInput scan code used by the contract.
	/// </summary>
	/// <param name="scancode">The SDL scan code.</param>
	/// <returns>The DirectInput scan code, or -1 when the key has no named client mapping.</returns>
	internal static int DirectInputScanCode(Scancode scancode)
	{
		int index = (int)scancode;
		return (uint)index < (uint)DirectInputScanCodes.Length ? DirectInputScanCodes[index] : -1;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		Api.DelEventWatch(_wheelFilterPointer, (void*)0);
		_wheelFilterPointer.Dispose();
		Api.QuitSubSystem(Subsystems);
	}

	private int OnSdlEvent(void* userdata, Event* @event)
	{
		if (@event->Type == (uint)EventType.Mousewheel)
		{
			int delta = @event->Wheel.Y * 120;
			if (@event->Wheel.Direction == 1)
				delta = -delta;
			lock (_gate)
				_wheelDelta = unchecked(_wheelDelta + delta);
		}
		return 1;
	}

	private static MouseButtons TranslateButtons(uint mask)
	{
		MouseButtons buttons = MouseButtons.None;
		if ((mask & 1u) != 0)
			buttons |= MouseButtons.Left;
		if ((mask & 2u) != 0)
			buttons |= MouseButtons.Middle;
		if ((mask & 4u) != 0)
			buttons |= MouseButtons.Right;
		if ((mask & 8u) != 0)
			buttons |= MouseButtons.Button4;
		if ((mask & 16u) != 0)
			buttons |= MouseButtons.Button5;
		if ((mask & 32u) != 0)
			buttons |= MouseButtons.Button6;
		if ((mask & 64u) != 0)
			buttons |= MouseButtons.Button7;
		if ((mask & 128u) != 0)
			buttons |= MouseButtons.Button8;
		return buttons;
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	private static readonly int[] DirectInputScanCodes = BuildDirectInputScanCodes();

	private static int[] BuildDirectInputScanCodes()
	{
		int[] map = new int[(int)Scancode.NumScancodes];
		Array.Fill(map, -1);
		void Set(Scancode scancode, GameKey key) => map[(int)scancode] = (int)key;
		Set(Scancode.ScancodeEscape, GameKey.Escape);
		Set(Scancode.Scancode1, GameKey.Digit1);
		Set(Scancode.Scancode2, GameKey.Digit2);
		Set(Scancode.Scancode3, GameKey.Digit3);
		Set(Scancode.Scancode4, GameKey.Digit4);
		Set(Scancode.Scancode5, GameKey.Digit5);
		Set(Scancode.Scancode6, GameKey.Digit6);
		Set(Scancode.Scancode7, GameKey.Digit7);
		Set(Scancode.Scancode8, GameKey.Digit8);
		Set(Scancode.Scancode9, GameKey.Digit9);
		Set(Scancode.Scancode0, GameKey.Digit0);
		Set(Scancode.ScancodeMinus, GameKey.Minus);
		Set(Scancode.ScancodeEquals, GameKey.Equals);
		Set(Scancode.ScancodeBackspace, GameKey.Backspace);
		Set(Scancode.ScancodeTab, GameKey.Tab);
		Set(Scancode.ScancodeQ, GameKey.Q);
		Set(Scancode.ScancodeW, GameKey.W);
		Set(Scancode.ScancodeE, GameKey.E);
		Set(Scancode.ScancodeR, GameKey.R);
		Set(Scancode.ScancodeT, GameKey.T);
		Set(Scancode.ScancodeY, GameKey.Y);
		Set(Scancode.ScancodeU, GameKey.U);
		Set(Scancode.ScancodeI, GameKey.I);
		Set(Scancode.ScancodeO, GameKey.O);
		Set(Scancode.ScancodeP, GameKey.P);
		Set(Scancode.ScancodeLeftbracket, GameKey.LeftBracket);
		Set(Scancode.ScancodeRightbracket, GameKey.RightBracket);
		Set(Scancode.ScancodeReturn, GameKey.Return);
		Set(Scancode.ScancodeLctrl, GameKey.LeftControl);
		Set(Scancode.ScancodeA, GameKey.A);
		Set(Scancode.ScancodeS, GameKey.S);
		Set(Scancode.ScancodeD, GameKey.D);
		Set(Scancode.ScancodeF, GameKey.F);
		Set(Scancode.ScancodeG, GameKey.G);
		Set(Scancode.ScancodeH, GameKey.H);
		Set(Scancode.ScancodeJ, GameKey.J);
		Set(Scancode.ScancodeK, GameKey.K);
		Set(Scancode.ScancodeL, GameKey.L);
		Set(Scancode.ScancodeSemicolon, GameKey.Semicolon);
		Set(Scancode.ScancodeApostrophe, GameKey.Apostrophe);
		Set(Scancode.ScancodeGrave, GameKey.Grave);
		Set(Scancode.ScancodeLshift, GameKey.LeftShift);
		Set(Scancode.ScancodeBackslash, GameKey.Backslash);
		Set(Scancode.ScancodeZ, GameKey.Z);
		Set(Scancode.ScancodeX, GameKey.X);
		Set(Scancode.ScancodeC, GameKey.C);
		Set(Scancode.ScancodeV, GameKey.V);
		Set(Scancode.ScancodeB, GameKey.B);
		Set(Scancode.ScancodeN, GameKey.N);
		Set(Scancode.ScancodeM, GameKey.M);
		Set(Scancode.ScancodeComma, GameKey.Comma);
		Set(Scancode.ScancodePeriod, GameKey.Period);
		Set(Scancode.ScancodeSlash, GameKey.Slash);
		Set(Scancode.ScancodeRshift, GameKey.RightShift);
		Set(Scancode.ScancodeKPMultiply, GameKey.NumpadMultiply);
		Set(Scancode.ScancodeLalt, GameKey.LeftAlt);
		Set(Scancode.ScancodeSpace, GameKey.Space);
		Set(Scancode.ScancodeCapslock, GameKey.CapsLock);
		Set(Scancode.ScancodeF1, GameKey.F1);
		Set(Scancode.ScancodeF2, GameKey.F2);
		Set(Scancode.ScancodeF3, GameKey.F3);
		Set(Scancode.ScancodeF4, GameKey.F4);
		Set(Scancode.ScancodeF5, GameKey.F5);
		Set(Scancode.ScancodeF6, GameKey.F6);
		Set(Scancode.ScancodeF7, GameKey.F7);
		Set(Scancode.ScancodeF8, GameKey.F8);
		Set(Scancode.ScancodeF9, GameKey.F9);
		Set(Scancode.ScancodeF10, GameKey.F10);
		Set(Scancode.ScancodeNumlockclear, GameKey.NumLock);
		Set(Scancode.ScancodeScrolllock, GameKey.ScrollLock);
		Set(Scancode.ScancodeKP7, GameKey.Numpad7);
		Set(Scancode.ScancodeKP8, GameKey.Numpad8);
		Set(Scancode.ScancodeKP9, GameKey.Numpad9);
		Set(Scancode.ScancodeKPMinus, GameKey.NumpadSubtract);
		Set(Scancode.ScancodeKP4, GameKey.Numpad4);
		Set(Scancode.ScancodeKP5, GameKey.Numpad5);
		Set(Scancode.ScancodeKP6, GameKey.Numpad6);
		Set(Scancode.ScancodeKPPlus, GameKey.NumpadAdd);
		Set(Scancode.ScancodeKP1, GameKey.Numpad1);
		Set(Scancode.ScancodeKP2, GameKey.Numpad2);
		Set(Scancode.ScancodeKP3, GameKey.Numpad3);
		Set(Scancode.ScancodeKP0, GameKey.Numpad0);
		Set(Scancode.ScancodeKPPeriod, GameKey.NumpadDecimal);
		Set(Scancode.ScancodeF11, GameKey.F11);
		Set(Scancode.ScancodeF12, GameKey.F12);
		Set(Scancode.ScancodeKPEnter, GameKey.NumpadEnter);
		Set(Scancode.ScancodeRctrl, GameKey.RightControl);
		Set(Scancode.ScancodeKPDivide, GameKey.NumpadDivide);
		Set(Scancode.ScancodePrintscreen, GameKey.PrintScreen);
		Set(Scancode.ScancodeRalt, GameKey.RightAlt);
		Set(Scancode.ScancodePause, GameKey.Pause);
		Set(Scancode.ScancodeHome, GameKey.Home);
		Set(Scancode.ScancodeUp, GameKey.Up);
		Set(Scancode.ScancodePageup, GameKey.PageUp);
		Set(Scancode.ScancodeLeft, GameKey.Left);
		Set(Scancode.ScancodeRight, GameKey.Right);
		Set(Scancode.ScancodeEnd, GameKey.End);
		Set(Scancode.ScancodeDown, GameKey.Down);
		Set(Scancode.ScancodePagedown, GameKey.PageDown);
		Set(Scancode.ScancodeInsert, GameKey.Insert);
		Set(Scancode.ScancodeDelete, GameKey.Delete);
		Set(Scancode.ScancodeLgui, GameKey.LeftWindows);
		Set(Scancode.ScancodeRgui, GameKey.RightWindows);
		Set(Scancode.ScancodeApplication, GameKey.Applications);
		return map;
	}
}
