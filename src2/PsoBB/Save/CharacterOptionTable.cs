using System.Buffers.Binary;

namespace PsoBB.Save;

/// <summary>
/// The system-record option index and the four-entry value table at <c>0x0097E4CC</c>.
/// </summary>
/// <remarks>
/// <c>0x007BE1D4</c> returns bits 8 and 9 of the dword at offset 16 of the system record, or one
/// when the record is absent. <c>0x007BE1BC</c> returns the table entry for that index.
/// </remarks>
public static class CharacterOptionTable
{
	/// <summary>The table values.</summary>
	public static ReadOnlySpan<float> Values => [34f, 51f, 68f, 0f];

	/// <summary>
	/// Returns the option index from the system record.
	/// </summary>
	/// <returns>The index from zero through three.</returns>
	[Original(0x007BE1D4)]
	public static int Index()
	{
		byte[]? system = CharacterSaveLoad.SystemRecord;
		if (system is null || system.Length < 20)
			return 1;
		return (BinaryPrimitives.ReadInt32LittleEndian(system.AsSpan(16)) & 0x300) >> 8;
	}

	/// <summary>
	/// Returns the table value for the current index.
	/// </summary>
	/// <returns>The stored value.</returns>
	[Original(0x007BE1BC)]
	public static float Value() => Values[Index()];
}
