using PsoBB.Game;

namespace PsoBB.Scenes;

/// <summary>
/// The shared scene-2 state transition that follows the title selector's confirmation.
/// </summary>
/// <remarks>
/// Scene 2's initialiser, update and release at <c>0x00824934</c>, <c>0x0081AA00</c> and
/// <c>0x0081E160</c> call renderer, interface, input and asset systems that are not ported, so no
/// member claims those addresses. The one complete function on this path is the selector transition
/// at <c>0x00824860</c>: it saves the current shared screen state, selects state 9 and starts fade 1.
/// </remarks>
public static class Scene2
{
	/// <summary>The original scene number.</summary>
	public const uint SceneNumber = 2;

	/// <summary>The shared screen state the selector transition enters.</summary>
	public const uint SharedScreenState = 9;

	/// <summary>The fade state the selector transition starts.</summary>
	public const uint SharedFadeState = 1;

	/// <summary>
	/// Saves the current shared screen state, selects state 9 and starts fade 1.
	/// </summary>
	[Original(0x00824860)]
	public static void SelectSharedScreenState()
	{
		uint previous = GameState.SceneScreenState;
		GameState.SceneScreenState = SharedScreenState;
		GameState.PreviousSceneScreenState = previous;
		GameState.SceneFadeState = SharedFadeState;
	}
}
