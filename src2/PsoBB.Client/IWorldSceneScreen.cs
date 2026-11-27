using PsoBB.Graphics;

namespace PsoBB.Client;

/// <summary>
/// A scene screen that also submits a three-dimensional world and can stop the director with a diagnostic.
/// </summary>
public interface IWorldSceneScreen : ISceneScreen
{
	/// <summary>Gets the reason the world step stopped, or <see langword="null"/>.</summary>
	string? Diagnostic { get; }

	/// <summary>Gets a value indicating whether the world step stopped.</summary>
	bool IsStopped { get; }

	/// <summary>
	/// Submits the world for the current frame through the host renderer.
	/// </summary>
	/// <param name="renderer">The renderer that receives the frame commands.</param>
	/// <returns>The number of surfaces submitted.</returns>
	int DrawWorld(IRenderer renderer);
}
