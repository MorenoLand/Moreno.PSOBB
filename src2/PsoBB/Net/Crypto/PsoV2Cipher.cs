using System.Buffers.Binary;

namespace PsoBB.Net.Crypto;

/// <summary>
/// Encrypts and decrypts the PC patch server's 57-word lagged Fibonacci stream.
/// </summary>
/// <remarks>
/// The state is a counter, 56 words and the original seed. The stream is XORed over little-endian 32-bit words; a
/// public and a private instance are created from the two keys in the patch welcome.
/// </remarks>
public sealed class PsoV2Cipher
{
	internal const int ContextSize = 0xE8;
	private const int ValueCount = 56;
	private const int EndOffset = 0x37;
	private readonly uint[] _values = new uint[ValueCount];
	private uint _counter;
	private uint _seed;

	/// <summary>
	/// Builds the initial state for a seed.
	/// </summary>
	/// <param name="seed">The 32-bit key from the patch welcome.</param>
	[Original(0x00763040)]
	public PsoV2Cipher(uint seed) => Init(seed);

	/// <summary>
	/// Rebuilds the state for a seed and leaves it ready for the first word.
	/// </summary>
	/// <param name="seed">The 32-bit key.</param>
	public void Init(uint seed)
	{
		_seed = seed;
		Array.Clear(_values);
		uint a = 1;
		uint b = seed;
		_values[EndOffset] = b;
		for (int first = 0x15, second = 0x2A; second < 0x484; first += 0x2A, second += 0x2A)
		{
			_values[first % EndOffset] = a;
			b -= a;
			_values[second % EndOffset] = b;
			a -= b;
		}
		for (int round = 0; round < 4; round++)
			Update();
		_counter = EndOffset;
	}

	/// <summary>
	/// XORs the stream over a byte buffer, consuming one word for the final partial word.
	/// </summary>
	/// <param name="data">The bytes to encrypt or decrypt in place.</param>
	public void Xor(Span<byte> data)
	{
		int words = (data.Length + 3) / 4;
		for (int word = 0; word < words; word++)
		{
			uint key = Next();
			int offset = word * 4;
			int count = Math.Min(4, data.Length - offset);
			for (int index = 0; index < count; index++)
				data[offset + index] ^= (byte)(key >> (index * 8));
		}
	}

	/// <summary>
	/// Writes the counter, the unused first word, the 55 stream words and the seed.
	/// </summary>
	/// <param name="destination">A buffer of at least <see cref="ContextSize"/> bytes.</param>
	internal void CopyContext(Span<byte> destination)
	{
		BinaryPrimitives.WriteUInt32LittleEndian(destination, _counter);
		for (int index = 0; index < ValueCount; index++)
			BinaryPrimitives.WriteUInt32LittleEndian(destination[(4 + index * 4)..], _values[index]);
		BinaryPrimitives.WriteUInt32LittleEndian(destination[0xE4..], _seed);
	}

	private uint Next()
	{
		_counter++;
		if (_counter > EndOffset)
		{
			Update();
			_counter = 1;
		}
		return _values[_counter];
	}

	private void Update()
	{
		for (int index = 1; index < 0x19; index++)
			_values[index] -= _values[index + 0x1F];
		for (int index = 0x19; index <= EndOffset; index++)
			_values[index] -= _values[index - 0x18];
	}
}
