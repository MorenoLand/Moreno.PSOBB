using PsoBB.Graphics;

namespace PsoBB.Rendering.OpenGL.Tests;

/// <summary>
/// Marks a test that needs a working SDL OpenGL context and reports the device condition as its skip reason.
/// </summary>
[AttributeUsage(AttributeTargets.Method)]
internal sealed class OpenGLFactAttribute : FactAttribute
{
	public OpenGLFactAttribute()
	{
		string? reason = DeviceConditions.OpenGLUnavailable;
		if (reason is not null)
			Skip = reason;
	}
}

/// <summary>
/// Probes the optional SDL OpenGL context once per test run and keeps the exact reason it is unavailable.
/// </summary>
internal static class DeviceConditions
{
	private static readonly Lazy<string?> OpenGLReason = new(ProbeOpenGL);

	public static string? OpenGLUnavailable => OpenGLReason.Value;

	private static string? ProbeOpenGL()
	{
		if (!SdlHiddenWindow.TryCreate(out SdlHiddenWindow? window, out string? reason))
			return reason;
		using (window)
		{
			try
			{
				using OpenGLRenderer renderer = new(window.Handle, new RenderSettings(1, 1, true, 0, false));
				return null;
			}
			catch (OpenGLUnavailableException exception)
			{
				return exception.Message;
			}
		}
	}
}
