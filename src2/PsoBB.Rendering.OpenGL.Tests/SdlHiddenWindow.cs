using System.Diagnostics.CodeAnalysis;
using Silk.NET.SDL;

namespace PsoBB.Rendering.OpenGL.Tests;

/// <summary>
/// A hidden SDL window that provides an OpenGL context for a renderer smoke test.
/// </summary>
internal sealed unsafe class SdlHiddenWindow : IDisposable
{
	private readonly Sdl _sdl;
	private Window* _window;
	private bool _disposed;

	private SdlHiddenWindow(Sdl sdl, Window* window)
	{
		_sdl = sdl;
		_window = window;
	}

	/// <summary>Gets the <c>SDL_Window</c> pointer.</summary>
	public nint Handle => (nint)_window;

	/// <summary>
	/// Tries to create a hidden SDL window configured for OpenGL 3.3 core.
	/// </summary>
	/// <param name="window">The created window when SDL is available.</param>
	/// <param name="unavailableReason">The exact SDL, driver or native-library condition when it is not.</param>
	/// <returns><see langword="true"/> when the window was created.</returns>
	public static bool TryCreate([NotNullWhen(true)] out SdlHiddenWindow? window, out string? unavailableReason)
	{
		window = null;
		unavailableReason = null;
		try
		{
			Sdl sdl = Sdl.GetApi();
			if (sdl.InitSubSystem(Sdl.InitVideo | Sdl.InitEvents) != 0)
			{
				unavailableReason = $"SDL video could not start: {sdl.GetErrorS()}";
				return false;
			}
			string? attributeFailure = ConfigureOpenGL(sdl);
			if (attributeFailure is not null)
			{
				sdl.QuitSubSystem(Sdl.InitVideo | Sdl.InitEvents);
				unavailableReason = attributeFailure;
				return false;
			}
			Window* handle = sdl.CreateWindow("PsoBB OpenGL smoke test", 0, 0, 8, 8, (uint)(WindowFlags.Hidden | WindowFlags.Opengl));
			if (handle is null)
			{
				sdl.QuitSubSystem(Sdl.InitVideo | Sdl.InitEvents);
				unavailableReason = $"SDL could not create a hidden OpenGL window: {sdl.GetErrorS()}";
				return false;
			}
			window = new SdlHiddenWindow(sdl, handle);
			return true;
		}
		catch (Exception exception) when (exception is FileNotFoundException or DllNotFoundException or EntryPointNotFoundException or TypeInitializationException or BadImageFormatException or PlatformNotSupportedException)
		{
			unavailableReason = $"SDL could not be loaded: {exception.Message}";
			return false;
		}
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
		_sdl.QuitSubSystem(Sdl.InitVideo | Sdl.InitEvents);
	}

	private static string? ConfigureOpenGL(Sdl sdl)
	{
		sdl.GLResetAttributes();
		return SetAttribute(sdl, GLattr.ContextMajorVersion, 3)
			?? SetAttribute(sdl, GLattr.ContextMinorVersion, 3)
			?? SetAttribute(sdl, GLattr.ContextProfileMask, (int)GLprofile.Core)
			?? SetAttribute(sdl, GLattr.Doublebuffer, 1)
			?? SetAttribute(sdl, GLattr.RedSize, 8)
			?? SetAttribute(sdl, GLattr.GreenSize, 8)
			?? SetAttribute(sdl, GLattr.BlueSize, 8)
			?? SetAttribute(sdl, GLattr.AlphaSize, 8)
			?? SetAttribute(sdl, GLattr.DepthSize, 24)
			?? SetAttribute(sdl, GLattr.StencilSize, 8);
	}

	private static string? SetAttribute(Sdl sdl, GLattr attribute, int value)
		=> sdl.GLSetAttribute(attribute, value) == 0 ? null : $"SDL could not set the {attribute} OpenGL attribute: {sdl.GetErrorS()}";
}
