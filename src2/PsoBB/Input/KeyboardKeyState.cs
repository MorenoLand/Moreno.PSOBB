namespace PsoBB.Input;

/// <summary>
/// The pressed-key list and its block flags used by <c>0x007BFE60</c>.
/// </summary>
/// <remarks>
/// The original list at <c>0x00A9CAA0</c> holds the count at offset two and the codes from offset
/// 133. <c>0x0078F414</c> rejects the list when the flag word at offset 152 carries either menu bit
/// <c>0x100000</c> or <c>0x200000</c>, the global bit at <c>0x00800000</c>, the IME bit
/// <c>0x400000</c>, or <c>0x8000000</c> while <c>0x00A9CAA1</c> is set.
/// </remarks>
public sealed class KeyboardKeyState
{
	/// <summary>The global scan flag at <c>0x00800000</c>.</summary>
	[OriginalGlobal(0x00800000)]
	public static uint GlobalScanFlag { get; set; }

	/// <summary>The IME flag at <c>0x00A9CAA1</c>.</summary>
	[OriginalGlobal(0x00A9CAA1)]
	public static byte ImeFlag { get; set; }

	/// <summary>The offset of the first key code in the original structure.</summary>
	public const int KeyOffset = 133;

	/// <summary>Gets or sets the flag word at offset 152.</summary>
	public uint Flags { get; set; }

	/// <summary>Gets or sets the key count at offset two.</summary>
	public byte Count { get; set; }

	/// <summary>Gets the key codes from offset 133.</summary>
	public byte[] Keys { get; } = new byte[256];

	/// <summary>Restores the two shared flags.</summary>
	public static void Reset()
	{
		GlobalScanFlag = 0;
		ImeFlag = 0;
	}

	/// <summary>Returns whether either menu bit is set.</summary>
	/// <returns><see langword="true"/> when the list is blocked by the menu.</returns>
	[Original(0x0078F44C)]
	public bool HasMenuModifier => (Flags & 0x300000) != 0;

	/// <summary>Returns whether the global scan flag intersects the flag word.</summary>
	/// <returns><see langword="true"/> when the global flag blocks the list.</returns>
	[Original(0x0078F46C)]
	public bool HasGlobalModifier => (GlobalScanFlag & Flags) != 0;

	/// <summary>Returns whether the IME bits block the list.</summary>
	/// <returns><see langword="true"/> when the list is blocked by the IME state.</returns>
	[Original(0x0078F484)]
	public bool HasImeModifier => (Flags & 0x400000) != 0 || (ImeFlag != 0 && (Flags & 0x8000000) != 0);

	/// <summary>Returns whether the key list is usable.</summary>
	/// <returns><see langword="true"/> when no block flag is set.</returns>
	[Original(0x0078F414)]
	public bool IsActive => !HasMenuModifier && !HasGlobalModifier && !HasImeModifier;

	/// <summary>Returns the key count.</summary>
	/// <returns>The byte at offset two.</returns>
	[Original(0x0078F3B8)]
	public int KeyCount => Count;

	/// <summary>
	/// Returns the key code at an index, or zero past the count.
	/// </summary>
	/// <param name="index">The zero-based index.</param>
	/// <returns>The stored code or zero.</returns>
	[Original(0x0078F3C0)]
	public byte GetKey(int index) => (uint)index < Count ? Keys[index] : (byte)0;

	/// <summary>
	/// Returns whether the key code is in the usable list.
	/// </summary>
	/// <param name="key">The key code to find.</param>
	/// <returns><see langword="true"/> when the code is present.</returns>
	[Original(0x007BFE60)]
	public bool IsKeyDown(byte key)
	{
		if (!IsActive)
			return false;
		int count = KeyCount;
		if (count == 0)
			return false;
		for (int index = 0; index < count; index++)
		{
			if (GetKey(index) == key)
				return true;
		}
		return false;
	}
}
