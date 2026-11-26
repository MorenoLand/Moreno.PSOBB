using Silk.NET.SDL;

namespace PsoBB.Linux;

/// <summary>
/// The SDL window the Linux client presents into.
/// </summary>
/// <remarks>
/// The window is created with an OpenGL 3.3 core profile so the renderer can create its context, and it owns the video and event subsystems until disposal.
/// </remarks>
internal sealed unsafe class SdlGameWindow : IDisposable
{
	private static readonly uint Subsystems = Sdl.InitVideo | Sdl.InitEvents;
	private readonly Sdl _sdl;
	private Window* _window;
	private bool _closeRequested;
	private bool _disposed;

	/// <summary>
	/// Starts SDL video and creates the visible game window.
	/// </summary>
	/// <param name="title">The window title.</param>
	/// <param name="width">Client width in pixels.</param>
	/// <param name="height">Client height in pixels.</param>
	/// <exception cref="InvalidOperationException">SDL video or the window could not start.</exception>
	public SdlGameWindow(string title, int width, int height)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(title);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		_sdl = Sdl.GetApi();
		if (_sdl.InitSubSystem(Subsystems) != 0)
			throw new InvalidOperationException($"SDL video could not start: {_sdl.GetErrorS()}");
		try
		{
			ConfigureOpenGL(_sdl);
			_window = _sdl.CreateWindow(title, Sdl.WindowposCentered, Sdl.WindowposCentered, width, height, (uint)(WindowFlags.Opengl | WindowFlags.Shown));
			if (_window is null)
				throw new InvalidOperationException($"SDL could not create the game window: {_sdl.GetErrorS()}");
		}
		catch
		{
			_sdl.QuitSubSystem(Subsystems);
			throw;
		}
	}

	/// <summary>Gets the <c>SDL_Window</c> pointer the renderer and input present through.</summary>
	public nint Handle => (nint)_window;

	/// <summary>
	/// Processes pending SDL events and reports whether the window is still open.
	/// </summary>
	/// <returns><see langword="true"/> while no close has been requested.</returns>
	public bool Pump()
	{
		ThrowIfDisposed();
		_sdl.PumpEvents();
		Event @event;
		while (_sdl.PollEvent(&@event) != 0)
		{
			if (@event.Type == (uint)EventType.Quit || (@event.Type == (uint)EventType.Windowevent && @event.Window.Event == (byte)WindowEventID.Close))
				_closeRequested = true;
		}
		return !_closeRequested;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		if (_window is not null)
		{
			_sdl.DestroyWindow(_window);
			_window = null;
		}
		_sdl.QuitSubSystem(Subsystems);
	}

	private static void ConfigureOpenGL(Sdl sdl)
	{
		sdl.GLResetAttributes();
		SetAttribute(sdl, GLattr.ContextMajorVersion, 3);
		SetAttribute(sdl, GLattr.ContextMinorVersion, 3);
		SetAttribute(sdl, GLattr.ContextProfileMask, (int)GLprofile.Core);
		SetAttribute(sdl, GLattr.Doublebuffer, 1);
		SetAttribute(sdl, GLattr.RedSize, 8);
		SetAttribute(sdl, GLattr.GreenSize, 8);
		SetAttribute(sdl, GLattr.BlueSize, 8);
		SetAttribute(sdl, GLattr.AlphaSize, 8);
		SetAttribute(sdl, GLattr.DepthSize, 24);
		SetAttribute(sdl, GLattr.StencilSize, 8);
	}

	private static void SetAttribute(Sdl sdl, GLattr attribute, int value)
	{
		if (sdl.GLSetAttribute(attribute, value) != 0)
			throw new InvalidOperationException($"SDL could not set the {attribute} OpenGL attribute: {sdl.GetErrorS()}");
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);
}
