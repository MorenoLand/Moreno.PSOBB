using PsoBB.Game.Tasks;
using PsoBB.Mathematics;

namespace PsoBB.Rendering;

/// <summary>
/// Per-frame task that drives scripted cutscene camera movement along polyline eye and target paths.
/// </summary>
public sealed class FieldCameraPathTask : GameTask
{
	/// <summary>
	/// Initializes a scripted polyline cutscene camera task and applies the initial cutscene view when valid.
	/// </summary>
	/// <param name="eyeNodes">Polyline nodes for camera eye positions.</param>
	/// <param name="targetNodes">Polyline nodes for camera target positions when <paramref name="targetClientId"/> is <see cref="ushort.MaxValue"/>.</param>
	/// <param name="nodeCount">Active node count across the supplied paths.</param>
	/// <param name="speed">Traversal distance per frame.</param>
	/// <param name="targetClientId">Target player client slot, or <see cref="ushort.MaxValue"/> to sample <paramref name="targetNodes"/>.</param>
	/// <param name="loop">Nonzero to loop the polyline back to the start node.</param>
	/// <param name="parent">Optional parent task node.</param>
	[Original(0x004D5D5C)]
	public FieldCameraPathTask(
		PathNode[]? eyeNodes,
		PathNode[]? targetNodes,
		short nodeCount,
		float speed,
		ushort targetClientId,
		ushort loop,
		GameTask? parent = null)
	{
		if (parent is not null)
			SetParent(parent);

		EyeNodes = eyeNodes;
		TargetNodes = targetNodes;
		PathNodeCount = nodeCount;
		Speed = speed;
		TargetClientId = targetClientId;
		Frame = 0;
		Loop = loop;

		if (nodeCount > 1 && eyeNodes is not null)
		{
			if (targetClientId != ushort.MaxValue)
				FieldCameraFollowMode.SetCutscenePlayerView(eyeNodes[0].Position, unchecked((short)targetClientId));
			else if (targetNodes is not null)
				FieldCameraFollowMode.SetCutsceneFixedView(eyeNodes[0].Position, targetNodes[0].Position);
		}
		else
		{
			QueueDestruction();
		}
	}

	/// <summary>Gets or sets the polyline nodes sampled for camera eye positions.</summary>
	public PathNode[]? EyeNodes { get; set; }

	/// <summary>Gets or sets the polyline nodes sampled for look-at targets when <see cref="TargetClientId"/> is unassigned.</summary>
	public PathNode[]? TargetNodes { get; set; }

	/// <summary>Gets or sets the speed in path units per frame.</summary>
	public float Speed { get; set; }

	/// <summary>Gets or sets the number of nodes in the path arrays.</summary>
	public short PathNodeCount { get; set; }

	/// <summary>Gets or sets the tracked player slot or <see cref="ushort.MaxValue"/> for a target path.</summary>
	public ushort TargetClientId { get; set; }

	/// <summary>Gets or sets the current frame index along the path.</summary>
	public short Frame { get; set; }

	/// <summary>Gets or sets whether path playback loops at the final node.</summary>
	public ushort Loop { get; set; }

	/// <inheritdoc />
	[Original(0x004D5E88)]
	public override void RunTask()
	{
		if (EyeNodes is null && TargetNodes is null)
		{
			QueueDestruction();
			return;
		}

		Frame = unchecked((short)(Frame + 1));
		int count = PathNodeCount;
		ReadOnlySpan<PathNode> eyeSpan = EyeNodes is null ? ReadOnlySpan<PathNode>.Empty : EyeNodes.AsSpan(0, Math.Min(count, EyeNodes.Length));
		if (TargetClientId == ushort.MaxValue)
		{
			ReadOnlySpan<PathNode> targetSpan = TargetNodes is null ? ReadOnlySpan<PathNode>.Empty : TargetNodes.AsSpan(0, Math.Min(count, TargetNodes.Length));
			CurvePath.SamplePolyline(eyeSpan, Speed, Frame, Loop != 0, out Vector3 eye);
			CurvePath.SamplePolyline(targetSpan, Speed, Frame, Loop != 0, out Vector3 target);
			FieldCameraFollowMode.SetCutsceneFixedView(eye, target);
		}
		else
		{
			CurvePath.SamplePolyline(eyeSpan, Speed, Frame, Loop != 0, out Vector3 eye);
			FieldCameraFollowMode.SetCutscenePlayerView(eye, unchecked((short)TargetClientId));
		}
	}
}
