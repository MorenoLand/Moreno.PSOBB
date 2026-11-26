using PsoBB.Mathematics;

namespace PsoBB.Game;

/// <summary>
/// Queries the ground between two positions.
/// </summary>
public interface IGroundCollision
{
	/// <summary>
	/// Returns the first ground contact between two positions.
	/// </summary>
	/// <param name="from">Start of the sweep.</param>
	/// <param name="to">End of the sweep.</param>
	/// <param name="mask">Layer mask passed by the caller.</param>
	/// <returns>The contact, or <see langword="null"/> when the sweep misses.</returns>
	GroundContact? Sweep(Vector3 from, Vector3 to, int mask);
}
