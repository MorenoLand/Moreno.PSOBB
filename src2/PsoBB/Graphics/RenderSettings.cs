namespace PsoBB.Graphics;

/// <summary>
/// The resolution, presentation and anti-aliasing options a host gives its renderer.
/// </summary>
public readonly record struct RenderSettings
{
	/// <summary>
	/// Creates validated render settings.
	/// </summary>
	/// <param name="width">Backbuffer width in pixels.</param>
	/// <param name="height">Backbuffer height in pixels.</param>
	/// <param name="windowed">Whether the host presents in a window.</param>
	/// <param name="multisampleCount">Samples per pixel: 0, 2, 4 or 8.</param>
	/// <param name="vsync">Whether presentation waits for the display refresh.</param>
	/// <exception cref="ArgumentOutOfRangeException">A size or sample count is invalid.</exception>
	public RenderSettings(int width, int height, bool windowed, int multisampleCount, bool vsync)
	{
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(width);
		ArgumentOutOfRangeException.ThrowIfNegativeOrZero(height);
		if (multisampleCount is not (0 or 2 or 4 or 8))
			throw new ArgumentOutOfRangeException(nameof(multisampleCount), multisampleCount, "Use 0, 2, 4 or 8 samples.");
		Width = width;
		Height = height;
		Windowed = windowed;
		MultisampleCount = multisampleCount;
		VSync = vsync;
	}

	/// <summary>
	/// Gets the default settings for a desktop window: 1024x768, no multisampling and vertical sync.
	/// </summary>
	public static RenderSettings Default => new(1024, 768, true, 0, true);

	/// <summary>Gets the backbuffer width in pixels.</summary>
	public int Width { get; }

	/// <summary>Gets the backbuffer height in pixels.</summary>
	public int Height { get; }

	/// <summary>Gets whether the host presents in a window.</summary>
	public bool Windowed { get; }

	/// <summary>Gets the number of samples per pixel, or zero.</summary>
	public int MultisampleCount { get; }

	/// <summary>Gets whether presentation waits for the display refresh.</summary>
	public bool VSync { get; }
}
