namespace PsoBB.Rendering;

/// <summary>
/// A 3D scene's camera and its opaque, alpha-tested and blended surface lists in the original draw-pass order.
/// </summary>
public sealed class RenderScene
{
	/// <summary>Gets the camera that supplies the view and projection transforms.</summary>
	public SceneCamera Camera { get; init; } = SceneCamera.Default;

	/// <summary>Gets the opaque surfaces, drawn in list order.</summary>
	public IReadOnlyList<SceneSurface> Opaque { get; init; } = [];

	/// <summary>Gets the alpha-tested surfaces, drawn in list order after the opaque pass.</summary>
	public IReadOnlyList<SceneSurface> AlphaTested { get; init; } = [];

	/// <summary>Gets the blended surfaces, drawn back to front after the alpha-tested pass.</summary>
	public IReadOnlyList<SceneSurface> Transparent { get; init; } = [];
}
