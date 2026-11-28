using PsoBB.Input;

namespace PsoBB.Tests;

/// <summary>
/// Checks the controller mask remap at 0x007C0C14 and the keyboard list at 0x007BFE60.
/// </summary>
[Collection("Game state")]
public sealed class InputStateHelperTests : IDisposable
{
	public InputStateHelperTests()
	{
		ControllerButtonState.Reset();
		KeyboardKeyState.Reset();
	}

	public void Dispose()
	{
		ControllerButtonState.Reset();
		KeyboardKeyState.Reset();
	}

	[Fact]
	public void TheControllerMapClearsTheShoulderBitsAndMapsTheFourSources()
	{
		Assert.Equal(0u, ControllerButtonState.Map(0x00100000));
		Assert.Equal(0x00010001u, ControllerButtonState.Map(0x00010000));
		Assert.Equal(0x00020002u, ControllerButtonState.Map(0x00020000));
		Assert.Equal(0x00000404u, ControllerButtonState.Map(0x00000400));
		Assert.Equal(0x00000808u, ControllerButtonState.Map(0x00000800));
		Assert.Equal(0x00010003u, ControllerButtonState.Map(0x00010002));
	}

	[Fact]
	public void TheControllerMaskTestsTheMappedBitsAgainstTheButtonWord()
	{
		ControllerButtonState state = new() { Buttons = 1 };

		Assert.True(state.IsPressed(0x00010000));
		Assert.False(state.IsPressed(0x00020000));

		state.Buttons = 0x10;
		Assert.False(state.IsPressed(0x00100000));
	}

	[Fact]
	public void TheControllerMappingUsesTheShippedGlobals()
	{
		ControllerButtonState.SourceBit0 = 0x40;
		ControllerButtonState.MapBit0 = 0x20;

		Assert.Equal(0x60u, ControllerButtonState.Map(0x40));
	}

	[Fact]
	public void TheKeyboardListRejectsTheMenuGlobalAndImeFlags()
	{
		KeyboardKeyState state = new();
		Assert.True(state.IsActive);

		state.Flags = 0x100000;
		Assert.False(state.IsActive);
		state.Flags = 0x200000;
		Assert.False(state.IsActive);
		state.Flags = 0x400000;
		Assert.False(state.IsActive);

		state.Flags = 0x8000000;
		Assert.True(state.IsActive);
		KeyboardKeyState.ImeFlag = 1;
		Assert.False(state.IsActive);

		KeyboardKeyState.ImeFlag = 0;
		KeyboardKeyState.GlobalScanFlag = 0x100;
		state.Flags = 0x100;
		Assert.False(state.IsActive);
	}

	[Fact]
	public void TheKeyboardListScansTheStoredCount()
	{
		KeyboardKeyState state = new() { Count = 2 };
		state.Keys[0] = 8;
		state.Keys[1] = 9;

		Assert.Equal(2, state.KeyCount);
		Assert.True(state.IsKeyDown(8));
		Assert.True(state.IsKeyDown(9));
		Assert.False(state.IsKeyDown(7));
		Assert.Equal(0, state.GetKey(2));

		state.Count = 0;
		Assert.False(state.IsKeyDown(8));
	}

	[Fact]
	public void AnInactiveKeyboardListReportsNoKeys()
	{
		KeyboardKeyState state = new() { Count = 1, Flags = 0x100000 };
		state.Keys[0] = 8;

		Assert.False(state.IsKeyDown(8));
	}
}
