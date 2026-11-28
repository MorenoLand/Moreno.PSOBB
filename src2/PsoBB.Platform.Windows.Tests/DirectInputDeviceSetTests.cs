using PsoBB.Platform;
using Xunit.Abstractions;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks the DirectInput mouse-button and keyboard conversions and reports the attached device inventory.
/// </summary>
public sealed class DirectInputDeviceSetTests
{
	private readonly ITestOutputHelper _output;

	public DirectInputDeviceSetTests(ITestOutputHelper output) => _output = output;

	[Fact]
	public void AllEightMouseButtonsMapInDirectInputOrder()
	{
		bool[] buttons = [true, true, true, true, true, true, true, true];
		Assert.Equal(MouseButtons.All, DirectInputDeviceSet.TranslateButtons(buttons));
	}

	[Fact]
	public void MouseButtonArrayFollowsTheDirectInputOrder()
	{
		bool[] buttons = [false, true, false, true, false, true, false, true];
		Assert.Equal(MouseButtons.Right | MouseButtons.Button4 | MouseButtons.Button6 | MouseButtons.Button8, DirectInputDeviceSet.TranslateButtons(buttons));
	}

	[Fact]
	public void ShortMouseButtonArraysReportOnlyTheButtonsTheyContain()
	{
		bool[] buttons = [true, false, true];
		Assert.Equal(MouseButtons.Left | MouseButtons.Middle, DirectInputDeviceSet.TranslateButtons(buttons));
		Assert.Equal(MouseButtons.None, DirectInputDeviceSet.TranslateButtons([]));
	}

	[Fact]
	public void ScanCodesReplaceThePreviousKeyboardState()
	{
		KeyboardState keyboard = new();
		DirectInputDeviceSet.ApplyScanCodes([(int)GameKey.W, (int)GameKey.Digit1, 300, -1], keyboard);
		Assert.True(keyboard.IsKeyDown(GameKey.W));
		Assert.True(keyboard.IsKeyDown(GameKey.Digit1));
		DirectInputDeviceSet.ApplyScanCodes([(int)GameKey.A], keyboard);
		Assert.True(keyboard.IsKeyDown(GameKey.A));
		Assert.False(keyboard.IsKeyDown(GameKey.W));
		Assert.False(keyboard.IsKeyDown(GameKey.Digit1));
	}

	[Fact]
	public void EnumerateAttachedReportsTheInventoryOrTheUnavailableReason()
	{
		DirectInputInventory inventory = DirectInputDeviceSet.EnumerateAttached(out string? unavailableReason);
		_output.WriteLine($"DirectInput unavailable: {unavailableReason ?? "<none>"}");
		_output.WriteLine($"Keyboards: {inventory.KeyboardCount}, mice: {inventory.MouseCount}, game controllers: {inventory.GamepadCount}, gamepad: {inventory.GamepadName ?? "<none>"}");
		if (unavailableReason is null)
			Assert.Equal(inventory.GamepadCount == 0, inventory.GamepadName is null);
		else
			Assert.Equal(DirectInputInventory.Empty, inventory);
	}
}
