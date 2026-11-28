using Silk.NET.SDL;

namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Checks the SDL input backend and the SDL-to-DirectInput scan-code translation.
/// </summary>
public sealed class LinuxGameInputTests
{
	[Fact]
	public void NamedKeysMapToDirectInputScanCodes()
	{
		Assert.Equal(0x01, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeEscape));
		Assert.Equal(0x1E, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeA));
		Assert.Equal(0x2A, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeLshift));
		Assert.Equal(0xC8, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeUp));
		Assert.Equal(0x9C, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeKPEnter));
		Assert.Equal(0xB5, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeKPDivide));
		Assert.Equal(0xDD, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeApplication));
		Assert.Equal(-1, LinuxGameInput.DirectInputScanCode(Scancode.ScancodeMode));
	}

	[SdlInputFact]
	public void PollExposesKeyboardAndMouseState()
	{
		using LinuxGameInput input = new();
		IGameInput contract = input;
		contract.Poll();
		Assert.NotNull(contract.Keyboard);
		Assert.False(contract.Keyboard.IsKeyDown(0xFE));
		contract.SetCursorPosition(10, 20);
		contract.SetCursorVisible(false);
		Assert.False(input.CursorVisible);
		contract.SetCursorVisible(true);
		Assert.True(input.CursorVisible);
		contract.Poll();
	}

	[SdlInputFact]
	public void TryCreateReportsAvailability()
	{
		Assert.True(LinuxGameInput.TryCreate(0, out LinuxGameInput? input, out string? reason), reason);
		Assert.NotNull(input);
		input.Dispose();
	}

	[SdlInputFact]
	public void DisposingRejectsPolling()
	{
		LinuxGameInput input = new();
		input.Poll();
		input.Dispose();
		Assert.Throws<ObjectDisposedException>(() => input.Poll());
		Assert.Throws<ObjectDisposedException>(() => input.SetCursorPosition(0, 0));
		Assert.Throws<ObjectDisposedException>(() => input.SetCursorVisible(true));
		input.Dispose();
	}
}
