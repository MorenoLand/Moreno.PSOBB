namespace PsoBB.Client;

/// <summary>
/// Creates the screen for one scene number, or returns <see langword="null"/> when no ported screen exists.
/// </summary>
public interface ISceneScreenFactory : IDisposable
{
	/// <summary>
	/// Creates the scene screen.
	/// </summary>
	/// <param name="scene">The scene number from the baked table.</param>
	/// <returns>The screen, or <see langword="null"/> when the number has no ported screen.</returns>
	ISceneScreen? Create(uint scene);
}
