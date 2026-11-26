using System.Runtime.InteropServices;
using Silk.NET.OpenGL;
using Silk.NET.SDL;

namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// An OpenGL context owned by the renderer, created through SDL or GLX.
/// </summary>
internal sealed unsafe class OpenGLContext : IDisposable
{
	private readonly Sdl? _sdl;
	private readonly Window* _sdlWindow;
	private readonly nint _x11Display;
	private readonly nint _x11Window;
	private readonly nint _context;
	private readonly bool _ownsDisplay;
	private readonly int _drawableWidth;
	private readonly int _drawableHeight;
	private bool _disposed;

	private OpenGLContext(Sdl? sdl, Window* sdlWindow, nint x11Display, nint x11Window, nint context, bool ownsDisplay, int drawableWidth, int drawableHeight, GL gl)
	{
		_sdl = sdl;
		_sdlWindow = sdlWindow;
		_x11Display = x11Display;
		_x11Window = x11Window;
		_context = context;
		_ownsDisplay = ownsDisplay;
		_drawableWidth = drawableWidth;
		_drawableHeight = drawableHeight;
		Gl = gl;
	}

	/// <summary>Gets the loaded OpenGL API.</summary>
	public GL Gl { get; }

	/// <summary>
	/// Creates a context for an existing SDL window.
	/// </summary>
	/// <param name="windowHandle">The <c>SDL_Window</c> pointer.</param>
	/// <param name="vsync">Whether presentation waits for the display refresh.</param>
	/// <returns>The created context.</returns>
	/// <exception cref="OpenGLUnavailableException">SDL could not create an OpenGL 3.3 context.</exception>
	public static OpenGLContext CreateSdl(nint windowHandle, bool vsync)
	{
		Sdl sdl = Sdl.GetApi();
		Window* window = (Window*)windowHandle;
		nint context = (nint)sdl.GLCreateContext(window);
		if (context == 0)
			throw new OpenGLUnavailableException($"SDL could not create an OpenGL context: {sdl.GetErrorS()}");
		try
		{
			if (sdl.GLMakeCurrent(window, (void*)context) != 0)
				throw new OpenGLUnavailableException($"SDL could not make the OpenGL context current: {sdl.GetErrorS()}");
			sdl.GLSetSwapInterval(vsync ? 1 : 0);
			GL gl = GL.GetApi(name => (nint)sdl.GLGetProcAddress(name));
			return new OpenGLContext(sdl, window, 0, 0, context, false, 0, 0, gl);
		}
		catch
		{
			sdl.GLMakeCurrent(window, null);
			sdl.GLDeleteContext((void*)context);
			throw;
		}
	}

	/// <summary>
	/// Creates a GLX context for an existing X11 window.
	/// </summary>
	/// <param name="displayHandle">The X11 <c>Display</c> pointer, or zero to open the default display.</param>
	/// <param name="windowHandle">The X11 window identifier.</param>
	/// <param name="vsync">Whether presentation waits for the display refresh.</param>
	/// <returns>The created context.</returns>
	/// <exception cref="OpenGLUnavailableException">The display, visual or GLX context could not be created.</exception>
	public static OpenGLContext CreateX11(nint displayHandle, nint windowHandle, bool vsync)
	{
		bool ownsDisplay = displayHandle == 0;
		nint display = ownsDisplay ? Glx.OpenDisplay(null) : displayHandle;
		if (display == 0)
			throw new OpenGLUnavailableException("The X11 display could not be opened for the OpenGL context.");
		try
		{
			if (Glx.GetWindowAttributes(display, windowHandle, out XWindowAttributes attributes) == 0)
				throw new OpenGLUnavailableException("The X11 window attributes could not be read for the OpenGL context.");
			nint config = FindFramebufferConfig(display, attributes.Visual);
			if (config == 0)
				throw new OpenGLUnavailableException("The X11 window visual has no matching GLX framebuffer configuration.");
			nint context = CreateGlxContext(display, config);
			if (context == 0)
				throw new OpenGLUnavailableException("GLX could not create an OpenGL 3.3 context.");
			try
			{
				if (Glx.MakeCurrent(display, windowHandle, context) == 0)
					throw new OpenGLUnavailableException("GLX could not make the OpenGL context current.");
				ApplyVsync(display, windowHandle, vsync);
				GL gl = GL.GetApi(name => Glx.GetProcAddress(name));
				return new OpenGLContext(null, null, display, windowHandle, context, ownsDisplay, attributes.Width, attributes.Height, gl);
			}
			catch
			{
				Glx.MakeCurrent(display, 0, 0);
				Glx.DestroyContext(display, context);
				throw;
			}
		}
		catch
		{
			if (ownsDisplay)
				Glx.CloseDisplay(display);
			throw;
		}
	}

	/// <summary>Gets the size of the window surface the renderer presents into.</summary>
	/// <returns>The drawable width and height in pixels.</returns>
	public (int Width, int Height) GetDrawableSize()
	{
		if (_sdl is not null)
		{
			int width = 0;
			int height = 0;
			_sdl.GLGetDrawableSize(_sdlWindow, ref width, ref height);
			return (width, height);
		}
		if (Glx.GetWindowAttributes(_x11Display, _x11Window, out XWindowAttributes attributes) != 0)
			return (attributes.Width, attributes.Height);
		return (_drawableWidth, _drawableHeight);
	}

	/// <summary>Presents the rendered backbuffer.</summary>
	public void SwapBuffers()
	{
		if (_sdl is not null)
			_sdl.GLSwapWindow(_sdlWindow);
		else
			Glx.SwapBuffers(_x11Display, _x11Window);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		if (_sdl is not null)
		{
			_sdl.GLMakeCurrent(_sdlWindow, null);
			_sdl.GLDeleteContext((void*)_context);
			return;
		}
		Glx.MakeCurrent(_x11Display, 0, 0);
		Glx.DestroyContext(_x11Display, _context);
		if (_ownsDisplay)
			Glx.CloseDisplay(_x11Display);
	}

	private static nint FindFramebufferConfig(nint display, nint visual)
	{
		if (visual == 0)
			return 0;
		nint configs = Glx.GetFramebufferConfigs(display, Glx.DefaultScreen(display), out int count);
		if (configs == 0 || count == 0)
			return 0;
		nuint visualId = Glx.VisualIdFromVisual(visual);
		nint selected = 0;
		nint fallback = 0;
		nint* entries = (nint*)configs;
		for (int index = 0; index < count; index++)
		{
			nint config = entries[index];
			if (Glx.GetFramebufferConfigAttrib(display, config, Glx.DrawableType, out int drawableType) != 0 || (drawableType & Glx.WindowBit) == 0)
				continue;
			if (Glx.GetFramebufferConfigAttrib(display, config, Glx.RenderType, out int renderType) != 0 || (renderType & Glx.RgbaBit) == 0)
				continue;
			nint info = Glx.GetVisualFromFramebufferConfig(display, config);
			if (info == 0)
				continue;
			bool matches = ((XVisualInfo*)info)->VisualId == visualId;
			Glx.Free(info);
			if (!matches)
				continue;
			if (fallback == 0)
				fallback = config;
			if (Glx.GetFramebufferConfigAttrib(display, config, Glx.DoubleBuffer, out int doubleBuffered) == 0 && doubleBuffered != 0)
			{
				selected = config;
				break;
			}
		}
		Glx.Free(configs);
		return selected != 0 ? selected : fallback;
	}

	private static nint CreateGlxContext(nint display, nint config)
	{
		nint create = Glx.GetProcAddress("glXCreateContextAttribsARB");
		if (create != 0)
		{
			CreateContextAttribs attribs = Marshal.GetDelegateForFunctionPointer<CreateContextAttribs>(create);
			int* attributes = stackalloc int[7];
			attributes[0] = Glx.ContextMajorVersion;
			attributes[1] = 3;
			attributes[2] = Glx.ContextMinorVersion;
			attributes[3] = 3;
			attributes[4] = Glx.ContextProfileMask;
			attributes[5] = Glx.ContextCoreProfile;
			attributes[6] = 0;
			nint context = attribs(display, config, 0, 1, attributes);
			if (context != 0)
				return context;
			context = attribs(display, config, 0, 0, attributes);
			if (context != 0)
				return context;
		}
		nint fallback = Glx.CreateNewContext(display, config, Glx.RgbaType, 0, 1);
		return fallback != 0 ? fallback : Glx.CreateNewContext(display, config, Glx.RgbaType, 0, 0);
	}

	private static void ApplyVsync(nint display, nint window, bool vsync)
	{
		nint extensionsPointer = Glx.QueryExtensionsString(display, Glx.DefaultScreen(display));
		string extensions = extensionsPointer == 0 ? string.Empty : Marshal.PtrToStringUTF8(extensionsPointer) ?? string.Empty;
		int interval = vsync ? 1 : 0;
		if (extensions.Contains("GLX_EXT_swap_control", StringComparison.Ordinal))
		{
			nint swapInterval = Glx.GetProcAddress("glXSwapIntervalEXT");
			if (swapInterval != 0)
			{
				SwapIntervalExtension setInterval = Marshal.GetDelegateForFunctionPointer<SwapIntervalExtension>(swapInterval);
				setInterval(display, window, interval);
				return;
			}
		}
		if (extensions.Contains("GLX_MESA_swap_control", StringComparison.Ordinal))
		{
			nint swapInterval = Glx.GetProcAddress("glXSwapIntervalMESA");
			if (swapInterval != 0)
			{
				SwapIntervalMesa setInterval = Marshal.GetDelegateForFunctionPointer<SwapIntervalMesa>(swapInterval);
				setInterval((uint)interval);
			}
		}
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct XWindowAttributes
	{
		public int X;
		public int Y;
		public int Width;
		public int Height;
		public int BorderWidth;
		public int Depth;
		public nint Visual;
		public nint Root;
		public int Class;
		public int BitGravity;
		public int WinGravity;
		public int BackingStore;
		public nuint BackingPlanes;
		public nuint BackingPixel;
		public int SaveUnder;
		public nint Colormap;
		public int MapInstalled;
		public int MapState;
		public nint AllEventMasks;
		public nint YourEventMask;
		public nint DoNotPropagateMask;
		public int OverrideRedirect;
		public nint Screen;
	}

	[StructLayout(LayoutKind.Sequential)]
	private struct XVisualInfo
	{
		public nint Visual;
		public nuint VisualId;
		public int Screen;
		public int Depth;
		public int Class;
		public nuint RedMask;
		public nuint GreenMask;
		public nuint BlueMask;
		public int ColormapSize;
		public int BitsPerRgb;
	}

	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate nint CreateContextAttribs(nint display, nint config, nint shareContext, int direct, int* attributes);

	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate void SwapIntervalExtension(nint display, nint drawable, int interval);

	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	private delegate int SwapIntervalMesa(uint interval);

	private static unsafe class Glx
	{
		private const string GlLibrary = "libGL.so.1";
		private const string X11Library = "libX11.so.6";

		public const int DrawableType = 0x8010;
		public const int WindowBit = 0x0001;
		public const int RenderType = 0x8011;
		public const int RgbaBit = 0x0001;
		public const int DoubleBuffer = 5;
		public const int RgbaType = 0x8014;
		public const int ContextMajorVersion = 0x2091;
		public const int ContextMinorVersion = 0x2092;
		public const int ContextProfileMask = 0x9126;
		public const int ContextCoreProfile = 0x0001;

		[DllImport(X11Library)]
		public static extern nint OpenDisplay(byte* name);

		[DllImport(X11Library)]
		public static extern int CloseDisplay(nint display);

		[DllImport(X11Library, EntryPoint = "XDefaultScreen")]
		public static extern int DefaultScreen(nint display);

		[DllImport(X11Library)]
		public static extern int GetWindowAttributes(nint display, nint window, out XWindowAttributes attributes);

		[DllImport(X11Library)]
		public static extern int Free(nint memory);

		[DllImport(X11Library, EntryPoint = "XVisualIDFromVisual")]
		public static extern nuint VisualIdFromVisual(nint visual);

		[DllImport(GlLibrary, EntryPoint = "glXGetFBConfigs")]
		public static extern nint GetFramebufferConfigs(nint display, int screen, out int count);

		[DllImport(GlLibrary, EntryPoint = "glXGetFBConfigAttrib")]
		public static extern int GetFramebufferConfigAttrib(nint display, nint config, int attribute, out int value);

		[DllImport(GlLibrary, EntryPoint = "glXGetVisualFromFBConfig")]
		public static extern nint GetVisualFromFramebufferConfig(nint display, nint config);

		[DllImport(GlLibrary, EntryPoint = "glXCreateNewContext")]
		public static extern nint CreateNewContext(nint display, nint config, int renderType, nint shareContext, int direct);

		[DllImport(GlLibrary, EntryPoint = "glXMakeCurrent")]
		public static extern int MakeCurrent(nint display, nint drawable, nint context);

		[DllImport(GlLibrary, EntryPoint = "glXSwapBuffers")]
		public static extern void SwapBuffers(nint display, nint drawable);

		[DllImport(GlLibrary, EntryPoint = "glXDestroyContext")]
		public static extern void DestroyContext(nint display, nint context);

		[DllImport(GlLibrary, EntryPoint = "glXQueryExtensionsString")]
		public static extern nint QueryExtensionsString(nint display, int screen);

		[DllImport(GlLibrary, EntryPoint = "glXGetProcAddressARB")]
		public static extern nint GetProcAddress([MarshalAs(UnmanagedType.LPStr)] string name);
	}
}
