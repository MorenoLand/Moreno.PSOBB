namespace PsoBB.Core;

/// <summary>
/// The small memory helpers the client calls directly.
/// </summary>
public static class MemoryPrimitives
{
	/// <summary>
	/// Sets two 32-bit values to zero.
	/// </summary>
	/// <param name="first">The first value to clear.</param>
	/// <param name="second">The second value to clear.</param>
	[Original(0x0082E930)]
	public static void ClearPair(ref int first, ref int second)
	{
		first = 0;
		second = 0;
	}
}
