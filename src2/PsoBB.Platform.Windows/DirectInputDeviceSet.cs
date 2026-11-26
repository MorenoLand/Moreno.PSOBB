using SharpGen.Runtime;
using Vortice.DirectInput;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Enumerates the DirectInput8 keyboard, mouse and gamepad and reads their state for the client.
/// </summary>
/// <remarks>
/// DirectInput supplies the eight mouse buttons, every named keyboard scan code and the standard gamepad controls. A device that is absent or cannot be acquired is left to the Win32 fallback in <see cref="WindowsGameInput"/>.
/// </remarks>
internal sealed class DirectInputDeviceSet : IDisposable
{
	private static readonly MouseButtons[] MouseButtonOrder =
	[
		MouseButtons.Left,
		MouseButtons.Right,
		MouseButtons.Middle,
		MouseButtons.Button4,
		MouseButtons.Button5,
		MouseButtons.Button6,
		MouseButtons.Button7,
		MouseButtons.Button8,
	];
	private readonly nint _window;
	private readonly IDirectInput8 _directInput;
	private readonly List<int> _pressedScanCodes = new(16);
	private IDirectInputDevice8? _keyboard;
	private IDirectInputDevice8? _mouse;
	private IDirectInputDevice8? _gamepad;
	private Guid? _gamepadGuid;
	private GamepadAxisLayout _gamepadLayout = GamepadAxisLayout.Empty;
	private bool _disposed;

	private DirectInputDeviceSet(nint window, IDirectInput8 directInput)
	{
		_window = window;
		_directInput = directInput;
	}

	/// <summary>
	/// Starts DirectInput and opens the keyboard, mouse and preferred gamepad.
	/// </summary>
	/// <param name="window">The window used for the keyboard and mouse cooperative level.</param>
	/// <param name="unavailableReason">The failure text when DirectInput could not start.</param>
	/// <returns>The device set, or <see langword="null"/> when DirectInput is unavailable.</returns>
	internal static DirectInputDeviceSet? TryCreate(nint window, out string? unavailableReason)
	{
		try
		{
			IDirectInput8 directInput = DInput.DirectInput8Create();
			DirectInputDeviceSet? set = null;
			try
			{
				IList<DeviceInstance> keyboards = directInput.GetDevices(DeviceClass.Keyboard, DeviceEnumerationFlags.AttachedOnly);
				IList<DeviceInstance> mice = directInput.GetDevices(DeviceClass.Pointer, DeviceEnumerationFlags.AttachedOnly);
				IList<DeviceInstance> gamepads = directInput.GetDevices(DeviceClass.GameControl, DeviceEnumerationFlags.AttachedOnly);
				set = new DirectInputDeviceSet(window, directInput);
				set.OpenDevices(keyboards, mice, gamepads);
				unavailableReason = null;
				return set;
			}
			catch
			{
				if (set is null)
					directInput.Dispose();
				else
					set.Dispose();
				throw;
			}
		}
		catch (Exception exception) when (exception is SharpGenException or DllNotFoundException or EntryPointNotFoundException or BadImageFormatException or PlatformNotSupportedException)
		{
			unavailableReason = exception.Message;
			return null;
		}
	}

	/// <summary>
	/// Counts the attached DirectInput devices without opening them.
	/// </summary>
	/// <param name="unavailableReason">The failure text when DirectInput could not be queried.</param>
	/// <returns>The attached device counts and the preferred gamepad name.</returns>
	internal static DirectInputInventory EnumerateAttached(out string? unavailableReason)
	{
		try
		{
			using IDirectInput8 directInput = DInput.DirectInput8Create();
			IList<DeviceInstance> keyboards = directInput.GetDevices(DeviceClass.Keyboard, DeviceEnumerationFlags.AttachedOnly);
			IList<DeviceInstance> mice = directInput.GetDevices(DeviceClass.Pointer, DeviceEnumerationFlags.AttachedOnly);
			IList<DeviceInstance> gamepads = directInput.GetDevices(DeviceClass.GameControl, DeviceEnumerationFlags.AttachedOnly);
			unavailableReason = null;
			return new DirectInputInventory(keyboards.Count, mice.Count, gamepads.Count, SelectGamepad(gamepads)?.ProductName);
		}
		catch (Exception exception) when (exception is SharpGenException or DllNotFoundException or EntryPointNotFoundException or BadImageFormatException or PlatformNotSupportedException)
		{
			unavailableReason = exception.Message;
			return DirectInputInventory.Empty;
		}
	}

	/// <summary>
	/// Acquires every open device and replaces a gamepad that was unplugged while the client was unfocused.
	/// </summary>
	internal void Acquire()
	{
		if (_disposed)
			return;
		TryAcquire(_keyboard);
		TryAcquire(_mouse);
		if (_gamepadGuid is { } gamepadGuid && !IsAttached(gamepadGuid))
			DropGamepad();
		if (_gamepad is null)
			TryOpenGamepad();
		TryAcquire(_gamepad);
	}

	/// <summary>
	/// Releases every open device so DirectInput stops tracking it while the client is unfocused.
	/// </summary>
	internal void Release()
	{
		if (_disposed)
			return;
		_keyboard?.Unacquire();
		_mouse?.Unacquire();
		_gamepad?.Unacquire();
	}

	/// <summary>
	/// Reads the DirectInput keyboard into the client state.
	/// </summary>
	/// <param name="keyboard">The state to replace.</param>
	/// <returns><see langword="true"/> when the device supplied a complete state.</returns>
	internal bool TryReadKeyboard(KeyboardState keyboard)
	{
		if (_keyboard is null)
		{
			ClearKeyboard(keyboard);
			return false;
		}
		try
		{
			ReadKeyboard(_keyboard, keyboard);
			return true;
		}
		catch (SharpGenException)
		{
			if (!TryAcquire(_keyboard))
			{
				ClearKeyboard(keyboard);
				return false;
			}
			try
			{
				ReadKeyboard(_keyboard, keyboard);
				return true;
			}
			catch (SharpGenException)
			{
				ClearKeyboard(keyboard);
				return false;
			}
		}
	}

	/// <summary>
	/// Reads the DirectInput mouse buttons.
	/// </summary>
	/// <param name="buttons">The buttons held at the poll.</param>
	/// <returns><see langword="true"/> when the device supplied a complete state.</returns>
	internal bool TryReadMouseButtons(out MouseButtons buttons)
	{
		buttons = MouseButtons.None;
		if (_mouse is null)
			return false;
		try
		{
			buttons = TranslateButtons(_mouse.GetCurrentMouseState().Buttons);
			return true;
		}
		catch (SharpGenException)
		{
			if (!TryAcquire(_mouse))
				return false;
			try
			{
				buttons = TranslateButtons(_mouse.GetCurrentMouseState().Buttons);
				return true;
			}
			catch (SharpGenException)
			{
				return false;
			}
		}
	}

	/// <summary>
	/// Reads and maps the DirectInput gamepad.
	/// </summary>
	/// <param name="state">The gamepad state, or <see cref="GamepadState.Empty"/> when none is connected.</param>
	/// <returns><see langword="true"/> when a gamepad supplied a complete state.</returns>
	internal bool TryReadGamepad(out GamepadState state)
	{
		state = GamepadState.Empty;
		if (_gamepad is null)
			return false;
		try
		{
			state = ReadGamepad(_gamepad);
			return true;
		}
		catch (SharpGenException)
		{
			if (!TryAcquire(_gamepad))
				return false;
			try
			{
				state = ReadGamepad(_gamepad);
				return true;
			}
			catch (SharpGenException)
			{
				return false;
			}
		}
	}

	/// <summary>
	/// Converts the eight DirectInput mouse button flags to the client's buttons.
	/// </summary>
	/// <param name="buttons">The device buttons in DirectInput order.</param>
	/// <returns>The buttons held.</returns>
	internal static MouseButtons TranslateButtons(IReadOnlyList<bool> buttons)
	{
		MouseButtons result = MouseButtons.None;
		for (int index = 0; index < MouseButtonOrder.Length && index < buttons.Count; index++)
			if (buttons[index])
				result |= MouseButtonOrder[index];
		return result;
	}

	/// <summary>
	/// Replaces a keyboard state with the supplied DirectInput scan codes.
	/// </summary>
	/// <param name="scanCodes">The scan codes held at the poll.</param>
	/// <param name="keyboard">The state to replace.</param>
	internal static void ApplyScanCodes(IReadOnlyList<int> scanCodes, KeyboardState keyboard)
	{
		ClearKeyboard(keyboard);
		foreach (int scanCode in scanCodes)
			if ((uint)scanCode < KeyboardState.KeyCount)
				keyboard.SetKey(scanCode, true);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		Release();
		_disposed = true;
		_keyboard?.Dispose();
		_mouse?.Dispose();
		_gamepad?.Dispose();
		_directInput.Dispose();
	}

	private static void ClearKeyboard(KeyboardState keyboard)
	{
		for (int scanCode = 0; scanCode < KeyboardState.KeyCount; scanCode++)
			keyboard.SetKey(scanCode, false);
	}

	private static bool TryAcquire(IDirectInputDevice8? device)
	{
		if (device is null)
			return false;
		try
		{
			return device.Acquire().Success;
		}
		catch (SharpGenException)
		{
			return false;
		}
	}

	private static DeviceInstance? SelectGamepad(IList<DeviceInstance> gamepads)
	{
		foreach (DeviceInstance device in OrderGamepads(gamepads))
			return device;
		return null;
	}

	private static IEnumerable<DeviceInstance> OrderGamepads(IList<DeviceInstance> gamepads)
	{
		foreach (DeviceInstance device in gamepads)
			if (device.Type == DeviceType.Gamepad)
				yield return device;
		foreach (DeviceInstance device in gamepads)
			if (device.Type is DeviceType.Joystick or DeviceType.FirstPerson or DeviceType.Driving or DeviceType.Flight)
				yield return device;
		foreach (DeviceInstance device in gamepads)
			if (device.Type is not (DeviceType.Gamepad or DeviceType.Joystick or DeviceType.FirstPerson or DeviceType.Driving or DeviceType.Flight))
				yield return device;
	}

	private static InputRange ReadRange(IDirectInputDevice8 device, DeviceObjectInstance axis)
	{
		try
		{
			InputRange range = device.GetObjectPropertiesById(axis.ObjectId).Range;
			return range.Minimum == InputRange.NoMinimum || range.Maximum == InputRange.NoMaximum || range.Maximum <= range.Minimum ? new InputRange(-1000, 1000) : range;
		}
		catch (SharpGenException)
		{
			return new InputRange(-1000, 1000);
		}
	}

	private static GamepadAxisLayout ReadGamepadLayout(IDirectInputDevice8 device)
	{
		AxisCalibration x = default;
		AxisCalibration y = default;
		AxisCalibration z = default;
		AxisCalibration rotationX = default;
		AxisCalibration rotationY = default;
		AxisCalibration rotationZ = default;
		AxisCalibration slider0 = default;
		AxisCalibration slider1 = default;
		foreach (DeviceObjectInstance axis in device.GetObjects(DeviceObjectTypeFlags.Axis))
		{
			if ((axis.Aspect & ObjectAspect.Position) == 0)
				continue;
			InputRange range = ReadRange(device, axis);
			AxisCalibration calibration = new(true, range.Minimum, range.Maximum);
			if (axis.ObjectType == ObjectGuid.XAxis)
				x = calibration;
			else if (axis.ObjectType == ObjectGuid.YAxis)
				y = calibration;
			else if (axis.ObjectType == ObjectGuid.ZAxis)
				z = calibration;
			else if (axis.ObjectType == ObjectGuid.RxAxis)
				rotationX = calibration;
			else if (axis.ObjectType == ObjectGuid.RyAxis)
				rotationY = calibration;
			else if (axis.ObjectType == ObjectGuid.RzAxis)
				rotationZ = calibration;
			else if (axis.ObjectType == ObjectGuid.Slider)
			{
				if (axis.ObjectId.InstanceNumber == 0)
					slider0 = calibration;
				else if (axis.ObjectId.InstanceNumber == 1)
					slider1 = calibration;
			}
		}
		return new GamepadAxisLayout(x, y, z, rotationX, rotationY, rotationZ, slider0, slider1, HasPointOfView(device));
	}

	private static bool HasPointOfView(IDirectInputDevice8 device)
	{
		foreach (DeviceObjectInstance pointOfView in device.GetObjects(DeviceObjectTypeFlags.PointOfViewController))
			if (pointOfView.ObjectId.InstanceNumber == 0)
				return true;
		return false;
	}

	private void OpenDevices(IList<DeviceInstance> keyboards, IList<DeviceInstance> mice, IList<DeviceInstance> gamepads)
	{
		if (keyboards.Count > 0)
			_keyboard = CreateKeyboard(keyboards[0]);
		if (mice.Count > 0)
			_mouse = CreateMouse(mice[0]);
		OpenGamepad(gamepads);
	}

	private IDirectInputDevice8? CreateKeyboard(DeviceInstance instance)
	{
		IDirectInputDevice8? device = null;
		try
		{
			device = _directInput.CreateDevice(instance.InstanceGuid);
			if (device.SetDataFormat<RawKeyboardState>().Failure)
			{
				device.Dispose();
				return null;
			}
			if (device.SetCooperativeLevel(_window, CooperativeLevel.NonExclusive | CooperativeLevel.Foreground).Failure)
			{
				device.Dispose();
				return null;
			}
			return device;
		}
		catch (SharpGenException)
		{
			device?.Dispose();
			return null;
		}
	}

	private IDirectInputDevice8? CreateMouse(DeviceInstance instance)
	{
		IDirectInputDevice8? device = null;
		try
		{
			device = _directInput.CreateDevice(instance.InstanceGuid);
			if (device.SetDataFormat<RawMouseState>().Failure)
			{
				device.Dispose();
				return null;
			}
			if (device.SetCooperativeLevel(_window, CooperativeLevel.NonExclusive | CooperativeLevel.Foreground).Failure)
			{
				device.Dispose();
				return null;
			}
			return device;
		}
		catch (SharpGenException)
		{
			device?.Dispose();
			return null;
		}
	}

	private void OpenGamepad(IList<DeviceInstance> gamepads)
	{
		foreach (DeviceInstance instance in OrderGamepads(gamepads))
		{
			IDirectInputDevice8? device = CreateGamepad(instance);
			if (device is null)
				continue;
			_gamepadGuid = instance.InstanceGuid;
			_gamepad = device;
			return;
		}
	}

	private IDirectInputDevice8? CreateGamepad(DeviceInstance instance)
	{
		_gamepadLayout = GamepadAxisLayout.Empty;
		IDirectInputDevice8? device = null;
		try
		{
			device = _directInput.CreateDevice(instance.InstanceGuid);
			if (device.SetDataFormat<RawJoystickState>().Failure)
			{
				device.Dispose();
				return null;
			}
			_gamepadLayout = ReadGamepadLayout(device);
			return device;
		}
		catch (SharpGenException)
		{
			device?.Dispose();
			_gamepadLayout = GamepadAxisLayout.Empty;
			return null;
		}
	}

	private bool TryOpenGamepad()
	{
		try
		{
			OpenGamepad(_directInput.GetDevices(DeviceClass.GameControl, DeviceEnumerationFlags.AttachedOnly));
			return _gamepad is not null;
		}
		catch (SharpGenException)
		{
			return false;
		}
	}

	private bool IsAttached(Guid instanceGuid)
	{
		try
		{
			return _directInput.IsDeviceAttached(instanceGuid);
		}
		catch (SharpGenException)
		{
			return false;
		}
	}

	private void DropGamepad()
	{
		_gamepad?.Unacquire();
		_gamepad?.Dispose();
		_gamepad = null;
		_gamepadGuid = null;
		_gamepadLayout = GamepadAxisLayout.Empty;
	}

	private void ReadKeyboard(IDirectInputDevice8 device, KeyboardState keyboard)
	{
		Vortice.DirectInput.KeyboardState state = device.GetCurrentKeyboardState();
		_pressedScanCodes.Clear();
		foreach (Key key in state.PressedKeys)
			_pressedScanCodes.Add((int)key);
		ApplyScanCodes(_pressedScanCodes, keyboard);
	}

	private GamepadState ReadGamepad(IDirectInputDevice8 device)
	{
		device.Poll();
		JoystickState state = device.GetCurrentJoystickState();
		GamepadReading reading = new(state.X, state.Y, state.Z, state.RotationX, state.RotationY, state.RotationZ, state.Sliders[0], state.Sliders[1], state.PointOfViewControllers[0], state.Buttons);
		return GamepadStateMapper.Map(_gamepadLayout, reading);
	}
}

/// <summary>
/// The DirectInput devices found on the host.
/// </summary>
/// <param name="KeyboardCount">The attached keyboards.</param>
/// <param name="MouseCount">The attached mice or pointing devices.</param>
/// <param name="GamepadCount">The attached game controllers.</param>
/// <param name="GamepadName">The product name of the preferred game controller, or null when none is attached.</param>
internal readonly record struct DirectInputInventory(int KeyboardCount, int MouseCount, int GamepadCount, string? GamepadName)
{
	/// <summary>
	/// Gets an inventory with no devices.
	/// </summary>
	internal static DirectInputInventory Empty => default;
}
