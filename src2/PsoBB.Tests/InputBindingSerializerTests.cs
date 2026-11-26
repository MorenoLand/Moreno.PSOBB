using PsoBB.Configuration;
using PsoBB.Input;
using PsoBB.Platform;

namespace PsoBB.Tests;

/// <summary>
/// Checks the portable binding format that supports the option surface's control map.
/// </summary>
public sealed class InputBindingSerializerTests
{
	[Fact]
	public void RoundTripsTheDefaultMap()
	{
		InputBindings original = InputBindings.CreateDefault();
		byte[] data = InputBindingSerializer.Write(original);
		Assert.True(InputBindingSerializer.TryRead(data, out InputBindings? loaded));
		Assert.Equal(original.GetKeys(InputAction.Confirm), loaded.GetKeys(InputAction.Confirm));
		Assert.Equal(original.GetMouseButtons(InputAction.Cancel), loaded.GetMouseButtons(InputAction.Cancel));
		Assert.Equal(original.GetGamepadControls(InputAction.Action1), loaded.GetGamepadControls(InputAction.Action1));
		Assert.Equal(original.GetKeys(InputAction.Action10), loaded.GetKeys(InputAction.Action10));
	}

	[Fact]
	public void AcceptsAnEmptyMap()
	{
		Assert.True(InputBindingSerializer.TryRead(EmptyMap(), out InputBindings? loaded));
		Assert.Empty(loaded.GetKeys(InputAction.Confirm));
		Assert.Empty(loaded.GetMouseButtons(InputAction.Confirm));
		Assert.Empty(loaded.GetGamepadControls(InputAction.Confirm));
	}

	[Fact]
	public void RejectsAnUnknownVersion()
	{
		byte[] data = EmptyMap();
		data[0] = 2;
		Assert.False(InputBindingSerializer.TryRead(data, out InputBindings? loaded));
		Assert.Null(loaded);
	}

	[Fact]
	public void RejectsTruncatedAndTrailingValues()
	{
		byte[] empty = EmptyMap();
		Assert.False(InputBindingSerializer.TryRead(empty.AsSpan(0, empty.Length - 1), out _));
		byte[] trailing = [.. empty, 0];
		Assert.False(InputBindingSerializer.TryRead(trailing, out _));
	}

	[Fact]
	public void RejectsAnUnnamedKey()
	{
		byte[] data = EmptyMap();
		data[1] = 1;
		data[2] = 0;
		Assert.False(InputBindingSerializer.TryRead(data, out _));
	}

	private static byte[] EmptyMap()
	{
		byte[] data = new byte[1 + ((int)InputAction.Action10 * 3)];
		data[0] = 1;
		return data;
	}
}
