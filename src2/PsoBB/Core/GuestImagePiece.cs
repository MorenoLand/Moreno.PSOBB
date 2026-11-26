namespace PsoBB.Core;

/// <summary>
/// One contiguous block of the data image at a guest virtual address.
/// </summary>
public readonly struct GuestImagePiece
{
	internal GuestImagePiece(uint address, int length, int offset)
	{
		Address = address;
		Length = length;
		Offset = offset;
	}

	/// <summary>
	/// Gets the guest virtual address of the first byte.
	/// </summary>
	public uint Address { get; }

	/// <summary>
	/// Gets the number of bytes in the piece.
	/// </summary>
	public int Length { get; }

	/// <summary>
	/// Gets the guest address one past the last byte, as an exclusive bound.
	/// </summary>
	public ulong EndAddress => (ulong)Address + (uint)Length;

	/// <summary>
	/// Gets the position of the first byte in the image file.
	/// </summary>
	internal int Offset { get; }
}
