namespace PsoBB.Core;

/// <summary>
/// Typed storage for the original client's process-wide globals, initialised from the data image.
/// </summary>
/// <remarks>
/// The pointer globals live in uninitialised data, which the loader zero-fills before the CRT
/// start-up assigns them. The security cookie starts at the linker's sentinel, which
/// <c>___security_init_cookie</c> replaces when the process starts. <see cref="Reset"/> restores
/// both groups to their pre-start-up values so tests never share state.
/// </remarks>
public static class GlobalState
{
	/// <summary>
	/// Value the data image holds in the security cookie before the process randomises it.
	/// </summary>
	public const uint SecurityCookieInitialValue = 0xBB40E64E;

	/// <summary>
	/// Gets or sets the command line string pointer copied from the operating system at start-up.
	/// </summary>
	[OriginalGlobal(0x00AF1BC4)]
	public static uint CommandLine { get; set; }

	/// <summary>
	/// Gets or sets the number of parsed user arguments.
	/// </summary>
	[OriginalGlobal(0x00AE7A24)]
	public static int ArgumentCount { get; set; }

	/// <summary>
	/// Gets or sets the parsed argument vector pointer.
	/// </summary>
	[OriginalGlobal(0x00AE7A28)]
	public static uint ArgumentVector { get; set; }

	/// <summary>
	/// Gets or sets the pointer to the parsed environment variable array.
	/// </summary>
	[OriginalGlobal(0x00AE7A30)]
	public static uint Environment { get; set; }

	/// <summary>
	/// Gets or sets the pointer to the operating system environment string block.
	/// </summary>
	[OriginalGlobal(0x00AE7A54)]
	public static uint EnvironmentBlock { get; set; }

	/// <summary>
	/// Gets or sets the stack guard cookie checked by the original security epilogues.
	/// </summary>
	[OriginalGlobal(0x00A23C64)]
	public static uint SecurityCookie { get; set; }

	/// <summary>
	/// Restores every global to its data-image initial value.
	/// </summary>
	public static void Reset()
	{
		CommandLine = 0;
		ArgumentCount = 0;
		ArgumentVector = 0;
		Environment = 0;
		EnvironmentBlock = 0;
		SecurityCookie = SecurityCookieInitialValue;
	}
}
