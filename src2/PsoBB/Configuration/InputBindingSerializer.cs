using System.Diagnostics.CodeAnalysis;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Configuration;

/// <summary>
/// Serializes the portable keyboard, pointer and gamepad binding map.
/// </summary>
/// <remarks>
/// The original client has no persisted binding value; this compact format is a portable addition stored under <see cref="LegacyOptionNames.PortableKeyBindings"/>. A malformed value leaves the default map in place.
/// </remarks>
internal static class InputBindingSerializer
{
	private const byte Version = 1;

	/// <summary>Writes the binding map in action order.</summary>
	internal static byte[] Write(InputBindings bindings)
	{
		ArgumentNullException.ThrowIfNull(bindings);
		List<byte> bytes = [Version];
		for (int action = (int)InputAction.MoveForward; action <= (int)InputAction.Action10; action++)
		{
			IReadOnlyList<GameKey> keys = bindings.GetKeys((InputAction)action);
			bytes.Add((byte)keys.Count);
			foreach (GameKey key in keys)
				bytes.Add((byte)key);
			IReadOnlyList<MouseButtons> buttons = bindings.GetMouseButtons((InputAction)action);
			bytes.Add((byte)buttons.Count);
			foreach (MouseButtons button in buttons)
				bytes.Add((byte)button);
			IReadOnlyList<GamepadButtons> controls = bindings.GetGamepadControls((InputAction)action);
			bytes.Add((byte)controls.Count);
			foreach (GamepadButtons control in controls)
			{
				int value = (int)control;
				bytes.Add((byte)value);
				bytes.Add((byte)(value >> 8));
				bytes.Add((byte)(value >> 16));
				bytes.Add((byte)(value >> 24));
			}
		}
		return [.. bytes];
	}

	/// <summary>Reads a binding map, rejecting a truncated, trailing or invalid value.</summary>
	internal static bool TryRead(ReadOnlySpan<byte> data, [NotNullWhen(true)] out InputBindings? bindings)
	{
		bindings = null;
		if (data.Length < 1 || data[0] != Version)
			return false;
		int offset = 1;
		InputBindings result = new();
		try
		{
			for (int action = (int)InputAction.MoveForward; action <= (int)InputAction.Action10; action++)
			{
				if (!TryReadByte(data, ref offset, out int keyCount))
					return false;
				for (int index = 0; index < keyCount; index++)
				{
					if (!TryReadByte(data, ref offset, out int key) || key == 0)
						return false;
					result.Bind((InputAction)action, (GameKey)key);
				}
				if (!TryReadByte(data, ref offset, out int buttonCount))
					return false;
				for (int index = 0; index < buttonCount; index++)
				{
					if (!TryReadByte(data, ref offset, out int button) || button == 0)
						return false;
					result.Bind((InputAction)action, (MouseButtons)button);
				}
				if (!TryReadByte(data, ref offset, out int controlCount))
					return false;
				for (int index = 0; index < controlCount; index++)
				{
					if (!TryReadInt32(data, ref offset, out int control) || control == 0 || (control & (control - 1)) != 0 || (control & ~(int)GamepadButtons.All) != 0)
						return false;
					result.Bind((InputAction)action, (GamepadButtons)control);
				}
			}
		}
		catch (ArgumentException)
		{
			return false;
		}
		if (offset != data.Length)
			return false;
		bindings = result;
		return true;
	}

	private static bool TryReadByte(ReadOnlySpan<byte> data, ref int offset, out int value)
	{
		if (offset >= data.Length)
		{
			value = 0;
			return false;
		}
		value = data[offset++];
		return true;
	}

	private static bool TryReadInt32(ReadOnlySpan<byte> data, ref int offset, out int value)
	{
		if (offset + 3 >= data.Length)
		{
			value = 0;
			return false;
		}
		value = data[offset] | (data[offset + 1] << 8) | (data[offset + 2] << 16) | (data[offset + 3] << 24);
		offset += 4;
		return true;
	}
}
