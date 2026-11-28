namespace PsoBB.Data;

/// <summary>
/// Produces and applies the 56-word key stream that protects PR2 and other PRC containers.
/// </summary>
/// <remarks>
/// The state holds one counter and fifty-six words, but the counter and the lookups use only words 1 through 55; word 0 is never read. Initialization fills the words with a lagged seed recurrence, mixes the state four times and leaves the counter at 55, so the first requested word mixes once more. Decryption XORs each little-endian 32-bit word with the next stream word; a trailing partial word uses the low bytes of its stream word.
/// </remarks>
public sealed class PrcCipher
{
	/// <summary>Number of words in the key stream state.</summary>
	public const int StateSize = 56;

	private readonly uint[] _values = new uint[StateSize];
	private int _counter;

	/// <summary>
	/// Initializes the key stream from a seed.
	/// </summary>
	/// <param name="seed">The 32-bit seed stored in the container header.</param>
	[Original(0x0084C390, "init_rng")]
	public void Initialize(uint seed)
	{
		Array.Clear(_values);
		_values[55] = seed;
		uint value = 1;
		int first = 21;
		int second = 42;
		while (second <= 1155)
		{
			_values[first % 55] = value;
			seed = unchecked(seed - value);
			_values[second % 55] = seed;
			value = unchecked(value - seed);
			first += 42;
			second += 42;
		}
		for (int index = 0; index < 4; index++)
			Advance();
		_counter = 55;
	}

	/// <summary>
	/// Returns the next key stream word.
	/// </summary>
	/// <returns>The next little-endian 32-bit key word.</returns>
	[Original(0x00763498, "get_random_int")]
	public uint NextWord()
	{
		_counter++;
		if (_counter >= StateSize)
		{
			Advance();
			_counter = 1;
		}
		return _values[_counter];
	}

	/// <summary>
	/// XORs a buffer with the key stream.
	/// </summary>
	/// <param name="data">The bytes to transform in place.</param>
	[Original(0x00763054, "unknown_prc_decrypt")]
	public void Decrypt(Span<byte> data)
	{
		int words = (data.Length >> 2) + ((data.Length & 3) != 0 ? 1 : 0);
		for (int word = 0; word < words; word++)
		{
			uint key = NextWord();
			int offset = word * 4;
			int count = Math.Min(4, data.Length - offset);
			for (int index = 0; index < count; index++)
				data[offset + index] ^= (byte)(key >> (index * 8));
		}
	}

	/// <summary>
	/// Advances the subtractive state by one full cycle.
	/// </summary>
	private void Advance()
	{
		Span<uint> difference = stackalloc uint[24];
		for (int index = 0; index < difference.Length; index++)
			difference[index] = unchecked(_values[1 + index] - _values[32 + index]);
		for (int index = 0; index < difference.Length; index++)
			_values[1 + index] = difference[index];
		for (int index = 0; index < difference.Length; index++)
			_values[25 + index] = unchecked(_values[25 + index] - difference[index]);
		for (int index = 0; index < 7; index++)
			_values[49 + index] = unchecked(_values[49 + index] - _values[25 + index]);
	}
}
