namespace PsoBB.Platform.Web;

/// <summary>
/// The browser operations behind cursor changes.
/// </summary>
public interface IBrowserInputHost
{
	/// <summary>
	/// Requests a client-area pointer position.
	/// </summary>
	/// <param name="x">The horizontal client-area coordinate.</param>
	/// <param name="y">The vertical client-area coordinate.</param>
	void SetPointerPosition(int x, int y);

	/// <summary>
	/// Requests that the host show or hide the pointer.
	/// </summary>
	/// <param name="visible">Whether the pointer should be visible.</param>
	void SetPointerVisible(bool visible);
}
