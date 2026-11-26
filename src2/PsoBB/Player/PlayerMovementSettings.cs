namespace PsoBB.Player;

/// <summary>
/// The original movement speeds and thresholds that the portable player uses.
/// </summary>
/// <remarks>
/// The values are read from the shipped image. The original also stores a per-frame forward
/// speed at <c>0x00A94324</c>, which lies in the uninitialised-data gap and is not used here;
/// the player uses the run and walk values instead.
/// </remarks>
public static class PlayerMovementSettings
{
	/// <summary>The speed of a walking character.</summary>
	[OriginalGlobal(0x0096ED84)]
	public const float WalkSpeed = 64.0f;

	/// <summary>The speed of a running character.</summary>
	[OriginalGlobal(0x0096ED88)]
	public const float RunSpeed = 128.0f;

	/// <summary>The movement input below which the character stands still.</summary>
	[OriginalGlobal(0x0093DA84)]
	public const float InputThreshold = 0.1f;

	/// <summary>The normalized speed above which the character runs.</summary>
	[OriginalGlobal(0x0093DA70)]
	public const float RunThreshold = 0.75f;

	/// <summary>The consecutive blocked-step count that makes the original switch to a continuous move.</summary>
	[OriginalGlobal(0x0093DA74)]
	public const float CollisionStuckThreshold = 6.0f;

	/// <summary>The divisor that turns a squared speed into the original normalized speed.</summary>
	[OriginalGlobal(0x0093DA78)]
	public const float SpeedNormalization = 16384.0f;

	/// <summary>The turn value of a full circle.</summary>
	public const int TurnUnits = 65536;

	/// <summary>The radian value of a full circle, as the original stores it.</summary>
	public const double TurnRadians = 6.283184051513672;

	/// <summary>The difference below which heading interpolation applies its extra quarter step.</summary>
	public const int SmallHeadingDifference = 0x3000;
}
