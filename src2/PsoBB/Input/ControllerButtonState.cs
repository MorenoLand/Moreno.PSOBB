namespace PsoBB.Input;

/// <summary>
/// The controller button masks and the remap at <c>0x007C0C14</c>.
/// </summary>
/// <remarks>
/// The four clear masks at <c>0x00A0F644</c> through <c>0x00A0F650</c> remove the shoulder bits,
/// and the four source/destination pairs map <c>0x10000</c>, <c>0x20000</c>, <c>0x400</c> and
/// <c>0x800</c> to the low bits one, two, four and eight. <c>0x007C1160</c> tests the mapped
/// mask against the controller word at offset <c>0x4C</c>.
/// </remarks>
public sealed class ControllerButtonState
{
	/// <summary>The first mask <c>0x007C0C14</c> clears.</summary>
	[OriginalGlobal(0x00A0F644)]
	public static uint ClearMask0 { get; set; } = 0x00100000;

	/// <summary>The second mask <c>0x007C0C14</c> clears.</summary>
	[OriginalGlobal(0x00A0F648)]
	public static uint ClearMask1 { get; set; } = 0x00200000;

	/// <summary>The third mask <c>0x007C0C14</c> clears.</summary>
	[OriginalGlobal(0x00A0F64C)]
	public static uint ClearMask2 { get; set; } = 0x00400000;

	/// <summary>The fourth mask <c>0x007C0C14</c> clears.</summary>
	[OriginalGlobal(0x00A0F650)]
	public static uint ClearMask3 { get; set; } = 0x00800000;

	/// <summary>The first destination bit.</summary>
	[OriginalGlobal(0x00A0F654)]
	public static uint MapBit0 { get; set; } = 1;

	/// <summary>The second destination bit.</summary>
	[OriginalGlobal(0x00A0F658)]
	public static uint MapBit1 { get; set; } = 2;

	/// <summary>The third destination bit.</summary>
	[OriginalGlobal(0x00A0F65C)]
	public static uint MapBit2 { get; set; } = 4;

	/// <summary>The fourth destination bit.</summary>
	[OriginalGlobal(0x00A0F660)]
	public static uint MapBit3 { get; set; } = 8;

	/// <summary>The first source bit.</summary>
	[OriginalGlobal(0x00A0F664)]
	public static uint SourceBit0 { get; set; } = 0x00010000;

	/// <summary>The second source bit.</summary>
	[OriginalGlobal(0x00A0F668)]
	public static uint SourceBit1 { get; set; } = 0x00020000;

	/// <summary>The third source bit.</summary>
	[OriginalGlobal(0x00A0F66C)]
	public static uint SourceBit2 { get; set; } = 0x00000400;

	/// <summary>The fourth source bit.</summary>
	[OriginalGlobal(0x00A0F670)]
	public static uint SourceBit3 { get; set; } = 0x00000800;

	/// <summary>Gets or sets the controller button word at offset <c>0x4C</c>.</summary>
	public uint Buttons { get; set; }

	/// <summary>Restores the shipped mapping values.</summary>
	public static void Reset()
	{
		ClearMask0 = 0x00100000;
		ClearMask1 = 0x00200000;
		ClearMask2 = 0x00400000;
		ClearMask3 = 0x00800000;
		MapBit0 = 1;
		MapBit1 = 2;
		MapBit2 = 4;
		MapBit3 = 8;
		SourceBit0 = 0x00010000;
		SourceBit1 = 0x00020000;
		SourceBit2 = 0x00000400;
		SourceBit3 = 0x00000800;
	}

	/// <summary>
	/// Removes the clear masks and maps the four source bits to their destination bits.
	/// </summary>
	/// <param name="value">The raw button mask.</param>
	/// <returns>The mapped mask.</returns>
	[Original(0x007C0C14)]
	public static uint Map(uint value)
	{
		uint result = value & ~(ClearMask0 | ClearMask1 | ClearMask2 | ClearMask3);
		if ((result & SourceBit0) != 0)
			result |= MapBit0;
		if ((result & SourceBit1) != 0)
			result |= MapBit1;
		if ((result & SourceBit2) != 0)
			result |= MapBit2;
		if ((result & SourceBit3) != 0)
			result |= MapBit3;
		return result;
	}

	/// <summary>
	/// Returns whether the mapped mask intersects the controller word.
	/// </summary>
	/// <param name="mask">The raw button mask.</param>
	/// <returns><see langword="true"/> when a mapped bit is held.</returns>
	[Original(0x007C1160)]
	public bool IsPressed(uint mask) => (Map(mask) & Buttons) != 0;
}
