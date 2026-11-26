namespace PsoBB.Game;

/// <summary>
/// The graphics option bits the pause options panel reads and writes.
/// </summary>
/// <remarks>
/// The original keeps these bits in the client structure returned by <c>0x006C1BD4</c> and accesses them through the small helpers at <c>0x007BE17C</c> through <c>0x007BE250</c>. The bits are session state; the only value the panel persists is <c>EXT0</c>.
/// </remarks>
public sealed class PauseOptionState
{
	/// <summary>Gets or sets the complete option bit word.</summary>
	public int Flags { get; set; }

	/// <summary>Stores selected bits while preserving the bits outside the mask.</summary>
	/// <param name="value">The bits to store.</param>
	/// <param name="mask">The bits the value replaces.</param>
	[Original(0x007BE17C)]
	public void SetFlagBits(int value, int mask) => Flags = value | (mask & Flags);

	/// <summary>Returns whether any bit in a mask is set.</summary>
	/// <param name="mask">The bits to test.</param>
	/// <returns><see langword="true"/> when at least one masked bit is set.</returns>
	[Original(0x007BE19C)]
	public bool HasFlagBits(int mask) => (Flags & mask) != 0;

	/// <summary>Gets the message-speed index from bits 8 and 9.</summary>
	[Original(0x007BE1D0)]
	public int MessageSpeed => (Flags & 0x300) >> 8;

	/// <summary>Gets the auto-disconnect index from bits 10 through 12.</summary>
	[Original(0x007BE210)]
	public int AutoDisconnect => (Flags & 0x1C00) >> 10;

	/// <summary>Gets the mouse-control index from bits 20 through 22.</summary>
	[Original(0x007BE250)]
	public int MouseControls => (Flags & 0x700000) >> 20;
}
