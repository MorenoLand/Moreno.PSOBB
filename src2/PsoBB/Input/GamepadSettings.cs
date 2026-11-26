namespace PsoBB.Input;

/// <summary>
/// The stick dead zone and trigger press point used to turn raw gamepad axes into client controls.
/// </summary>
/// <remarks>
/// The stick dead zone is one tenth of the axis range, matching the DirectInput default of 1000 out of 10000 that the original reads for each joystick axis. The trigger point is half travel because the original has no separate trigger axis.
/// </remarks>
public readonly record struct GamepadSettings
{
	/// <summary>
	/// Creates gamepad thresholds.
	/// </summary>
	/// <param name="stickDeadZone">The per-axis dead zone from zero through one, exclusive of one.</param>
	/// <param name="triggerThreshold">The trigger press point from zero through one, exclusive of one.</param>
	/// <exception cref="ArgumentOutOfRangeException">A threshold is outside its permitted range.</exception>
	public GamepadSettings(float stickDeadZone, float triggerThreshold)
	{
		if (!(stickDeadZone >= 0 && stickDeadZone < 1))
			throw new ArgumentOutOfRangeException(nameof(stickDeadZone), stickDeadZone, "A stick dead zone is between zero and one, exclusive of one.");
		if (!(triggerThreshold >= 0 && triggerThreshold < 1))
			throw new ArgumentOutOfRangeException(nameof(triggerThreshold), triggerThreshold, "A trigger threshold is between zero and one, exclusive of one.");
		StickDeadZone = stickDeadZone;
		TriggerThreshold = triggerThreshold;
	}

	/// <summary>
	/// Gets the per-axis dead zone.
	/// </summary>
	public float StickDeadZone { get; }

	/// <summary>
	/// Gets the trigger press point.
	/// </summary>
	public float TriggerThreshold { get; }

	/// <summary>
	/// Gets the default settings of a 0.1 stick dead zone and a 0.5 trigger point.
	/// </summary>
	public static GamepadSettings Default => new(0.1f, 0.5f);
}
