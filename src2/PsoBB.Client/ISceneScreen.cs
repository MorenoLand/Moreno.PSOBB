using PsoBB.Gui;
using PsoBB.Input;

namespace PsoBB.Client;

/// <summary>
/// A ported scene the director can enter, update, draw and release.
/// </summary>
public interface ISceneScreen : IDisposable
{
	/// <summary>
	/// Advances the scene by one host frame.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	void Update(InputManager input);

	/// <summary>
	/// Adds the scene's interface geometry for the current frame.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	void Draw(UiDrawList draw);
}
