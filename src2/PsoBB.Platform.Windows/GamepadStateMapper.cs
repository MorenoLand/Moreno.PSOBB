namespace PsoBB.Platform.Windows;

/// <summary>
/// Converts a DirectInput gamepad reading into the client's standard-layout gamepad state.
/// </summary>
/// <remarks>
/// The first ten buttons follow the DirectInput order used by Xbox-compatible pads and the first point-of-view hat becomes the directional pad. X and Y are the left stick, and the right stick uses Rx and Ry or, when those axes are missing, Z and Rz. When Rx and Ry exist, a pair of Z and Rz axes is a pair of triggers and a lone Z axis is a combined trigger; two sliders are preferred as triggers.
/// </remarks>
internal static class GamepadStateMapper
{
	private static readonly GamepadButtons[] ButtonOrder =
	[
		GamepadButtons.A,
		GamepadButtons.B,
		GamepadButtons.X,
		GamepadButtons.Y,
		GamepadButtons.LeftShoulder,
		GamepadButtons.RightShoulder,
		GamepadButtons.Back,
		GamepadButtons.Start,
		GamepadButtons.LeftStick,
		GamepadButtons.RightStick,
	];

	/// <summary>
	/// Maps one absolute gamepad reading to the client's state.
	/// </summary>
	/// <param name="layout">The axes the device exposes and the range each one reports.</param>
	/// <param name="reading">The values read from the device.</param>
	/// <returns>The connected gamepad state.</returns>
	internal static GamepadState Map(GamepadAxisLayout layout, GamepadReading reading)
	{
		bool hasRightStick = layout.RotationX.Present && layout.RotationY.Present;
		float leftTrigger = 0;
		float rightTrigger = 0;
		float rightStickX = layout.RotationX.ToStick(reading.RotationX);
		float rightStickY = layout.RotationY.ToStick(reading.RotationY);
		if (layout.Slider0.Present && layout.Slider1.Present)
		{
			leftTrigger = layout.Slider0.ToTrigger(reading.Slider0);
			rightTrigger = layout.Slider1.ToTrigger(reading.Slider1);
			if (!hasRightStick)
			{
				rightStickX = layout.Z.ToStick(reading.Z);
				rightStickY = layout.RotationZ.ToStick(reading.RotationZ);
			}
		}
		else if (hasRightStick)
		{
			if (layout.Z.Present && layout.RotationZ.Present)
			{
				leftTrigger = layout.Z.ToTrigger(reading.Z);
				rightTrigger = layout.RotationZ.ToTrigger(reading.RotationZ);
			}
			else if (layout.Z.Present)
			{
				float combined = layout.Z.ToStick(reading.Z);
				leftTrigger = Math.Max(0, combined);
				rightTrigger = Math.Max(0, -combined);
			}
			else
			{
				rightTrigger = layout.RotationZ.ToTrigger(reading.RotationZ);
			}
		}
		else
		{
			rightStickX = layout.Z.ToStick(reading.Z);
			rightStickY = layout.RotationZ.ToStick(reading.RotationZ);
		}
		return new GamepadState(
			true,
			MapButtons(reading.Buttons) | MapPointOfView(reading.PointOfView, layout.HasPointOfView),
			layout.X.ToStick(reading.X),
			layout.Y.ToStick(reading.Y),
			rightStickX,
			rightStickY,
			leftTrigger,
			rightTrigger);
	}

	private static GamepadButtons MapButtons(bool[] buttons)
	{
		GamepadButtons result = GamepadButtons.None;
		if (buttons is null)
			return result;
		for (int index = 0; index < ButtonOrder.Length && index < buttons.Length; index++)
			if (buttons[index])
				result |= ButtonOrder[index];
		return result;
	}

	private static GamepadButtons MapPointOfView(int value, bool present)
	{
		if (!present || value is < 0 or >= 36000)
			return GamepadButtons.None;
		int direction = ((value + 2250) / 4500) % 8;
		return direction switch
		{
			0 => GamepadButtons.DPadUp,
			1 => GamepadButtons.DPadUp | GamepadButtons.DPadRight,
			2 => GamepadButtons.DPadRight,
			3 => GamepadButtons.DPadDown | GamepadButtons.DPadRight,
			4 => GamepadButtons.DPadDown,
			5 => GamepadButtons.DPadDown | GamepadButtons.DPadLeft,
			6 => GamepadButtons.DPadLeft,
			_ => GamepadButtons.DPadUp | GamepadButtons.DPadLeft,
		};
	}
}

/// <summary>
/// The range one DirectInput gamepad axis reports.
/// </summary>
/// <param name="Present">Whether the device exposes the axis.</param>
/// <param name="Minimum">The lowest value the axis reports.</param>
/// <param name="Maximum">The highest value the axis reports.</param>
internal readonly record struct AxisCalibration(bool Present, int Minimum, int Maximum)
{
	/// <summary>
	/// Converts an axis value to -1 through 1 with zero at the centre of its range.
	/// </summary>
	/// <param name="value">The absolute axis value.</param>
	/// <returns>The normalised stick value.</returns>
	internal float ToStick(int value)
	{
		if (!Present || Maximum <= Minimum || value == (Minimum + (double)Maximum) / 2)
			return 0;
		double centre = (Minimum + (double)Maximum) / 2;
		double extent = value > centre ? Maximum - centre : centre - Minimum;
		return extent <= 0 ? 0 : (float)Math.Clamp((value - centre) / extent, -1, 1);
	}

	/// <summary>
	/// Converts an axis value to 0 through 1.
	/// </summary>
	/// <param name="value">The absolute axis value.</param>
	/// <returns>The normalised trigger value.</returns>
	internal float ToTrigger(int value)
	{
		if (!Present || Maximum <= Minimum)
			return 0;
		return (float)Math.Clamp((value - Minimum) / (double)(Maximum - Minimum), 0, 1);
	}
}

/// <summary>
/// The axes one DirectInput gamepad exposes and their reported ranges.
/// </summary>
/// <param name="X">The X axis, the left stick's horizontal movement.</param>
/// <param name="Y">The Y axis, the left stick's vertical movement.</param>
/// <param name="Z">The Z axis, either a trigger or a combined trigger axis.</param>
/// <param name="RotationX">The Rx axis, the right stick's horizontal movement.</param>
/// <param name="RotationY">The Ry axis, the right stick's vertical movement.</param>
/// <param name="RotationZ">The Rz axis, a trigger when Z is also present.</param>
/// <param name="Slider0">The first slider, the left trigger when both sliders are present.</param>
/// <param name="Slider1">The second slider, the right trigger when both sliders are present.</param>
/// <param name="HasPointOfView">Whether the device exposes the first directional-pad hat.</param>
internal sealed record GamepadAxisLayout(AxisCalibration X, AxisCalibration Y, AxisCalibration Z, AxisCalibration RotationX, AxisCalibration RotationY, AxisCalibration RotationZ, AxisCalibration Slider0, AxisCalibration Slider1, bool HasPointOfView)
{
	/// <summary>
	/// Gets a layout with no axes.
	/// </summary>
	internal static GamepadAxisLayout Empty => new(default, default, default, default, default, default, default, default, false);
}

/// <summary>
/// The values read from one DirectInput gamepad in one poll.
/// </summary>
/// <param name="X">The X axis value.</param>
/// <param name="Y">The Y axis value.</param>
/// <param name="Z">The Z axis value.</param>
/// <param name="RotationX">The Rx axis value.</param>
/// <param name="RotationY">The Ry axis value.</param>
/// <param name="RotationZ">The Rz axis value.</param>
/// <param name="Slider0">The first slider value.</param>
/// <param name="Slider1">The second slider value.</param>
/// <param name="PointOfView">The first point-of-view hat in hundredths of a degree, or -1 when centred.</param>
/// <param name="Buttons">The device buttons in DirectInput order.</param>
internal readonly record struct GamepadReading(int X, int Y, int Z, int RotationX, int RotationY, int RotationZ, int Slider0, int Slider1, int PointOfView, bool[] Buttons);
