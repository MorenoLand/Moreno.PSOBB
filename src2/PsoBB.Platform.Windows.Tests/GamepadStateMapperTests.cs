using PsoBB.Platform;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks the conversion from synthetic DirectInput gamepad readings to the client's gamepad contract.
/// </summary>
public sealed class GamepadStateMapperTests
{
	[Fact]
	public void MissingAxesReportNeutralSticksAndTriggers()
	{
		GamepadState state = GamepadStateMapper.Map(GamepadAxisLayout.Empty, Reading());
		Assert.True(state.Connected);
		Assert.Equal(GamepadButtons.None, state.Buttons);
		Assert.Equal(0f, state.LeftStickX);
		Assert.Equal(0f, state.LeftStickY);
		Assert.Equal(0f, state.RightStickX);
		Assert.Equal(0f, state.RightStickY);
		Assert.Equal(0f, state.LeftTrigger);
		Assert.Equal(0f, state.RightTrigger);
	}

	[Fact]
	public void StickAxesUseTheReportedRangeEndpoints()
	{
		GamepadAxisLayout layout = Layout(Axis(0, 65535), Axis(-32768, 32767), default, Axis(-1000, 1000), Axis(-1000, 1000));
		GamepadState minimum = GamepadStateMapper.Map(layout, Reading(x: 0, y: -32768, rotationX: -1000, rotationY: -1000));
		Assert.Equal(-1f, minimum.LeftStickX, 5);
		Assert.Equal(-1f, minimum.LeftStickY, 5);
		Assert.Equal(-1f, minimum.RightStickX, 5);
		Assert.Equal(-1f, minimum.RightStickY, 5);
		GamepadState maximum = GamepadStateMapper.Map(layout, Reading(x: 65535, y: 32767, rotationX: 1000, rotationY: 1000));
		Assert.Equal(1f, maximum.LeftStickX, 5);
		Assert.Equal(1f, maximum.LeftStickY, 5);
		Assert.Equal(1f, maximum.RightStickX, 5);
		Assert.Equal(1f, maximum.RightStickY, 5);
		Assert.Equal(0f, GamepadStateMapper.Map(layout, Reading(rotationX: 0, rotationY: 0)).RightStickX);
	}

	[Fact]
	public void SeparateTriggerAxesMapToTheirTriggers()
	{
		GamepadAxisLayout layout = Layout(z: Axis(0, 255), rotationX: Axis(-1000, 1000), rotationY: Axis(-1000, 1000), rotationZ: Axis(0, 255));
		GamepadState state = GamepadStateMapper.Map(layout, Reading(z: 64, rotationZ: 191));
		Assert.Equal(64f / 255f, state.LeftTrigger, 5);
		Assert.Equal(191f / 255f, state.RightTrigger, 5);
	}

	[Fact]
	public void LoneTriggerAxisSplitsAroundTheCentre()
	{
		GamepadAxisLayout layout = Layout(z: Axis(-1000, 1000), rotationX: Axis(-1000, 1000), rotationY: Axis(-1000, 1000));
		GamepadState left = GamepadStateMapper.Map(layout, Reading(z: 500));
		Assert.Equal(0.5f, left.LeftTrigger, 5);
		Assert.Equal(0f, left.RightTrigger);
		GamepadState right = GamepadStateMapper.Map(layout, Reading(z: -250));
		Assert.Equal(0f, right.LeftTrigger);
		Assert.Equal(0.25f, right.RightTrigger, 5);
	}

	[Fact]
	public void ZAndRzDriveTheRightStickWhenTheRotationAxesAreMissing()
	{
		GamepadAxisLayout layout = Layout(z: Axis(-1000, 1000), rotationZ: Axis(-1000, 1000));
		GamepadState state = GamepadStateMapper.Map(layout, Reading(z: 500, rotationZ: -250));
		Assert.Equal(0.5f, state.RightStickX, 5);
		Assert.Equal(-0.25f, state.RightStickY, 5);
		Assert.Equal(0f, state.LeftTrigger);
		Assert.Equal(0f, state.RightTrigger);
	}

	[Fact]
	public void SlidersTakePrecedenceAsTriggers()
	{
		GamepadAxisLayout layout = Layout(z: Axis(-1000, 1000), rotationZ: Axis(-1000, 1000), slider0: Axis(0, 100), slider1: Axis(0, 100));
		GamepadState state = GamepadStateMapper.Map(layout, Reading(z: 1000, rotationZ: 1000, slider0: 25, slider1: 75));
		Assert.Equal(0.25f, state.LeftTrigger, 5);
		Assert.Equal(0.75f, state.RightTrigger, 5);
		Assert.Equal(1f, state.RightStickX, 5);
		Assert.Equal(1f, state.RightStickY, 5);
	}

	[Fact]
	public void ZeroWidthAxisRangeStaysNeutral()
	{
		GamepadAxisLayout layout = Layout(Axis(5, 5));
		GamepadState state = GamepadStateMapper.Map(layout, Reading(x: 5));
		Assert.Equal(0f, state.LeftStickX);
	}

	[Theory]
	[InlineData(0, GamepadButtons.DPadUp)]
	[InlineData(4500, GamepadButtons.DPadUp | GamepadButtons.DPadRight)]
	[InlineData(9000, GamepadButtons.DPadRight)]
	[InlineData(13500, GamepadButtons.DPadDown | GamepadButtons.DPadRight)]
	[InlineData(18000, GamepadButtons.DPadDown)]
	[InlineData(22500, GamepadButtons.DPadDown | GamepadButtons.DPadLeft)]
	[InlineData(27000, GamepadButtons.DPadLeft)]
	[InlineData(31500, GamepadButtons.DPadUp | GamepadButtons.DPadLeft)]
	public void PointOfViewMapsToTheEightDirections(int value, GamepadButtons expected)
	{
		GamepadState state = GamepadStateMapper.Map(Layout(hasPointOfView: true), Reading(pointOfView: value));
		Assert.Equal(expected, state.Buttons);
	}

	[Theory]
	[InlineData(-1)]
	[InlineData(-100)]
	[InlineData(36000)]
	public void CentredOrInvalidPointOfViewReportsNoDirection(int value)
	{
		GamepadState state = GamepadStateMapper.Map(Layout(hasPointOfView: true), Reading(pointOfView: value));
		Assert.Equal(GamepadButtons.None, state.Buttons);
	}

	[Fact]
	public void MissingPointOfViewReportsNoDirection()
	{
		GamepadState state = GamepadStateMapper.Map(GamepadAxisLayout.Empty, Reading(pointOfView: 0));
		Assert.Equal(GamepadButtons.None, state.Buttons);
	}

	[Fact]
	public void ButtonsMapInDirectInputOrderAndGuideIsNotReported()
	{
		bool[] buttons = [true, true, true, true, true, true, true, true, true, true, true, true];
		GamepadButtons expected = GamepadButtons.A | GamepadButtons.B | GamepadButtons.X | GamepadButtons.Y | GamepadButtons.LeftShoulder | GamepadButtons.RightShoulder | GamepadButtons.Back | GamepadButtons.Start | GamepadButtons.LeftStick | GamepadButtons.RightStick;
		GamepadState state = GamepadStateMapper.Map(GamepadAxisLayout.Empty, Reading(buttons: buttons));
		Assert.Equal(expected, state.Buttons);
		Assert.False(state.IsButtonDown(GamepadButtons.Guide));
	}

	[Fact]
	public void ShortButtonArraysReportOnlyTheButtonsTheyContain()
	{
		GamepadState state = GamepadStateMapper.Map(GamepadAxisLayout.Empty, Reading(buttons: [true, false, true]));
		Assert.Equal(GamepadButtons.A | GamepadButtons.X, state.Buttons);
	}

	private static AxisCalibration Axis(int minimum, int maximum) => new(true, minimum, maximum);

	private static GamepadAxisLayout Layout(AxisCalibration x = default, AxisCalibration y = default, AxisCalibration z = default, AxisCalibration rotationX = default, AxisCalibration rotationY = default, AxisCalibration rotationZ = default, AxisCalibration slider0 = default, AxisCalibration slider1 = default, bool hasPointOfView = false) => new(x, y, z, rotationX, rotationY, rotationZ, slider0, slider1, hasPointOfView);

	private static GamepadReading Reading(int x = 0, int y = 0, int z = 0, int rotationX = 0, int rotationY = 0, int rotationZ = 0, int slider0 = 0, int slider1 = 0, int pointOfView = -1, bool[]? buttons = null) => new(x, y, z, rotationX, rotationY, rotationZ, slider0, slider1, pointOfView, buttons ?? []);
}
