namespace PsoBB.Mathematics;

/// <summary>
/// A four-float curve control node carrying a 3D position and an optional polyline segment length.
/// </summary>
/// <param name="Position">The node position in 3D space.</param>
/// <param name="SegmentLength">The scalar path distance across the segment starting at this node.</param>
public readonly record struct PathNode(Vector3 Position, float SegmentLength = 0.0f);

/// <summary>
/// Polyline and Bezier spline evaluation helpers used by cutscene and scripted camera paths.
/// </summary>
public static class CurvePath
{
	/// <summary>
	/// Samples <paramref name="position"/> along a piecewise-linear sequence of <paramref name="nodes"/> at <paramref name="frame"/> * <paramref name="speed"/>.
	/// </summary>
	/// <param name="nodes">Sequence of path nodes storing positions and segment lengths.</param>
	/// <param name="speed">Distance traveled per frame.</param>
	/// <param name="frame">Frame index along the path.</param>
	/// <param name="loop">Whether playback wraps back to the first node at the end of the path.</param>
	/// <param name="position">Receives the sampled world-space position.</param>
	/// <returns><see langword="true"/> when a non-looping path reached its final node; otherwise <see langword="false"/>.</returns>
	[Original(0x007BE414)]
	public static bool SamplePolyline(
		ReadOnlySpan<PathNode> nodes,
		float speed,
		int frame,
		bool loop,
		out Vector3 position)
	{
		position = default;
		if (nodes.Length <= 1)
			return false;

		double totalLength = 0.0;
		for (int i = 0; i < nodes.Length; i++)
			totalLength += nodes[i].SegmentLength;

		if (totalLength == 0.0)
			return false;

		float distance = (float)((double)frame * speed);
		int cycleLength = loop
			? FloatingPointMath.TruncateToInt32(totalLength)
			: FloatingPointMath.TruncateToInt32(totalLength - nodes[^1].SegmentLength);

		int cycles = FloatingPointMath.TruncateToInt32(distance) / cycleLength;
		distance = (float)(-totalLength * cycles + distance);
		if (!loop && cycles != 0)
		{
			position = nodes[^1].Position;
			return true;
		}

		double accumulated = 0.0;
		int segmentIndex = 0;
		for (int i = 0; i < nodes.Length; i++)
		{
			double nextAccumulated = accumulated + nodes[i].SegmentLength;
			if (nextAccumulated >= distance)
			{
				distance = (float)((double)distance - accumulated);
				segmentIndex = i;
				break;
			}
			accumulated = nextAccumulated;
		}

		Vector3 start = nodes[segmentIndex].Position;
		Vector3 end = segmentIndex == nodes.Length - 1 ? nodes[0].Position : nodes[segmentIndex + 1].Position;
		Vector3 direction = Vector3.Subtract(end, start);
		Vector3.Normalize(ref direction);
		position = new Vector3(
			(float)((double)direction.X * distance + start.X),
			(float)((double)direction.Y * distance + start.Y),
			(float)((double)direction.Z * distance + start.Z));
		return false;
	}

	/// <summary>
	/// Computes the binomial coefficient C(<paramref name="n"/>, <paramref name="k"/>).
	/// </summary>
	/// <param name="n">Total item count.</param>
	/// <param name="k">Subset selection size.</param>
	/// <returns>The integer binomial coefficient.</returns>
	[Original(0x00844858)]
	public static int BinomialCoefficient(int n, int k)
	{
		int denominator = 1;
		int numerator = 1;
		if (k != 0)
		{
			int offset = -k;
			do
			{
				denominator *= k;
				int term = numerator * offset + numerator * n;
				offset++;
				numerator += term;
				k--;
			}
			while (k != 0);
		}
		return numerator / denominator;
	}

	/// <summary>
	/// Evaluates an open or closed Bernstein-Bezier curve over <paramref name="controlPoints"/> at normalized parameter <paramref name="t"/>.
	/// </summary>
	/// <param name="controlPoints">Control points along the curve (requires at least three points).</param>
	/// <param name="t">Normalized curve parameter in [0, 1].</param>
	/// <param name="closed">Whether the curve wraps back to the initial control point.</param>
	/// <param name="position">Receives the evaluated position along the curve.</param>
	/// <returns><see langword="true"/> when <paramref name="controlPoints"/> has at least three points and <paramref name="t"/> equals one.</returns>
	[Original(0x007BE6B8)]
	public static bool EvaluateBezier(
		ReadOnlySpan<PathNode> controlPoints,
		float t,
		bool closed,
		out Vector3 position)
	{
		position = default;
		if (controlPoints.Length <= 2)
			return false;

		float oneMinusT = (float)(1.0f - (double)t);
		int degree = controlPoints.Length - 1;
		if (closed)
		{
			for (int i = 0; i <= degree; i++)
			{
				int coeff = BinomialCoefficient(controlPoints.Length, i);
				double tPow = Math.Pow(t, i);
				double oneMinusPow = Math.Pow(oneMinusT, degree - i + 1);
				double weight = (double)coeff * tPow * oneMinusPow;
				Vector3 point = i == degree ? controlPoints[0].Position : controlPoints[i].Position;
				position = new Vector3(
					(float)(point.X * weight + position.X),
					(float)(point.Y * weight + position.Y),
					(float)(point.Z * weight + position.Z));
			}
		}
		else
		{
			for (int i = 0; i <= degree; i++)
			{
				int coeff = BinomialCoefficient(degree, i);
				double tPow = Math.Pow(t, i);
				double oneMinusPow = Math.Pow(oneMinusT, degree - i);
				double weight = (double)coeff * tPow * oneMinusPow;
				Vector3 point = controlPoints[i].Position;
				position = new Vector3(
					(float)(point.X * weight + position.X),
					(float)(point.Y * weight + position.Y),
					(float)(point.Z * weight + position.Z));
			}
		}

		return 1.0f == (double)t;
	}
}
