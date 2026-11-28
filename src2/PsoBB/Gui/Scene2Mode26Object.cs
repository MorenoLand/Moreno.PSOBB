namespace PsoBB.Gui;

/// <summary>
/// The 0x244-byte object created at <c>0x0070CC78</c> for the mode-26 entry.
/// </summary>
/// <remarks>
/// The constructor registers the object with the owner at <c>0x00ACA338</c>, writes the vtable
/// <c>0x00B3EEF0</c>, clears the 0x208-byte block at offset <c>0x1C</c> and clears the seven state
/// words at offsets <c>0x228</c> through <c>0x240</c>. The parent may be null when no owner exists.
/// </remarks>
public sealed class Scene2Mode26Object
{
	/// <summary>The allocation size.</summary>
	public const int AllocationSize = 0x244;

	/// <summary>The vtable address.</summary>
	public const uint Vtable = 0x00B3EEF0;

	/// <summary>The zeroed block offset.</summary>
	public const int BlockOffset = 0x1C;

	/// <summary>The zeroed block length.</summary>
	public const int BlockLength = 0x208;

	/// <summary>Gets the 0x244-byte backing store.</summary>
	public byte[] Data { get; } = new byte[AllocationSize];

	/// <summary>Gets the owner the constructor registered, or <see langword="null"/>.</summary>
	public object? Owner { get; }

	/// <summary>
	/// Creates and registers the object.
	/// </summary>
	/// <param name="owner">The owner at <c>0x00ACA338</c>, or <see langword="null"/>.</param>
	[Original(0x0070CC78)]
	public Scene2Mode26Object(object? owner)
	{
		Owner = owner;
		Data.AsSpan(BlockOffset, BlockLength).Clear();
		for (int offset = 0x228; offset <= 0x240; offset += 4)
			System.Buffers.Binary.BinaryPrimitives.WriteInt32LittleEndian(Data.AsSpan(offset), 0);
	}

	/// <summary>Returns the state word at <paramref name="offset"/>.</summary>
	/// <param name="offset">The byte offset.</param>
	/// <returns>The stored word.</returns>
	public int State(int offset) => System.Buffers.Binary.BinaryPrimitives.ReadInt32LittleEndian(Data.AsSpan(offset));
}
