namespace PsoBB.Graphics;

/// <summary>
/// A renderer whose backbuffer and renderer-owned targets can change size while it is running.
/// </summary>
public interface IResizableRenderer : IRenderer
{
	/// <summary>Changes the backbuffer size and rebuilds the renderer-owned targets.</summary>
	/// <param name="width">The new width in pixels.</param>
	/// <param name="height">The new height in pixels.</param>
	void Resize(int width, int height);
}
