using System.Text.Json;
using PsoBB.Net.Crypto;

namespace PsoBB.Tests;

/// <summary>
/// Checks the Blue Burst cipher against vectors produced by the original machine code.
/// </summary>
public sealed class PsoCipherTests
{
	/// <summary>
	/// Loads the complete initialized contexts recorded from the original key schedule.
	/// </summary>
	/// <returns>One row per key.</returns>
	public static List<object[]> ScheduleVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "00763FD0.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				Convert.FromHexString(vector.GetProperty("key").GetString()!),
				Convert.FromHexString(vector.GetProperty("context").GetString()!),
			]);
		return rows;
	}

	/// <summary>
	/// Loads the encrypt vectors, each with a complete input and output buffer.
	/// </summary>
	/// <returns>One row per key and length.</returns>
	public static List<object[]> EncryptVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "00763D08.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				Convert.FromHexString(vector.GetProperty("key").GetString()!),
				vector.GetProperty("length").GetInt32(),
				Convert.FromHexString(vector.GetProperty("input").GetString()!),
				Convert.FromHexString(vector.GetProperty("output").GetString()!),
				vector.GetProperty("written").GetInt32(),
			]);
		return rows;
	}

	/// <summary>
	/// Loads the decrypt vectors, each with a complete input and output buffer.
	/// </summary>
	/// <returns>One row per key and length.</returns>
	public static List<object[]> DecryptVectors()
	{
		string path = Path.Combine(AppContext.BaseDirectory, "Golden", "00763E70.json");
		using JsonDocument document = JsonDocument.Parse(File.ReadAllBytes(path));
		List<object[]> rows = [];
		foreach (JsonElement vector in document.RootElement.EnumerateArray())
			rows.Add(
			[
				Convert.FromHexString(vector.GetProperty("key").GetString()!),
				vector.GetProperty("length").GetInt32(),
				Convert.FromHexString(vector.GetProperty("input").GetString()!),
				Convert.FromHexString(vector.GetProperty("output").GetString()!),
				vector.GetProperty("blocks").GetInt32(),
			]);
		return rows;
	}

	/// <summary>
	/// The ported key schedule produces the same subkeys and S-boxes as the original.
	/// </summary>
	/// <param name="key">The key bytes.</param>
	/// <param name="expected">The complete context the original produced.</param>
	[Theory]
	[MemberData(nameof(ScheduleVectors))]
	public void InitMatchesTheMachineCode(byte[] key, byte[] expected)
	{
		PsoCipher cipher = new();
		cipher.Init(key);
		byte[] context = new byte[PsoCipher.ContextSize];
		cipher.CopyContext(context);
		Assert.Equal(expected, context);
	}

	/// <summary>
	/// The ported multi-block encrypt reproduces the original bytes and return value.
	/// </summary>
	/// <param name="key">The key bytes.</param>
	/// <param name="length">The number of bytes the original was asked to encrypt.</param>
	/// <param name="input">The complete buffer before the call.</param>
	/// <param name="expected">The complete buffer after the call.</param>
	/// <param name="written">The number of bytes the original reported.</param>
	[Theory]
	[MemberData(nameof(EncryptVectors))]
	public void EncryptMatchesTheMachineCode(byte[] key, int length, byte[] input, byte[] expected, int written)
	{
		PsoCipher cipher = new();
		cipher.Init(key);
		byte[] buffer = (byte[])input.Clone();
		int actual = cipher.EncryptBlocks(buffer.AsSpan(0, length));
		Assert.Equal(written, actual);
		Assert.Equal(expected, buffer);
	}

	/// <summary>
	/// The ported multi-block decrypt reproduces the original bytes and block count.
	/// </summary>
	/// <param name="key">The key bytes.</param>
	/// <param name="length">The number of bytes the original was asked to decrypt.</param>
	/// <param name="input">The complete buffer before the call.</param>
	/// <param name="expected">The complete buffer after the call.</param>
	/// <param name="blocks">The number of blocks the original reported.</param>
	[Theory]
	[MemberData(nameof(DecryptVectors))]
	public void DecryptMatchesTheMachineCode(byte[] key, int length, byte[] input, byte[] expected, int blocks)
	{
		PsoCipher cipher = new();
		cipher.Init(key);
		byte[] buffer = (byte[])input.Clone();
		int actual = cipher.DecryptBlocks(buffer.AsSpan(0, length));
		Assert.Equal(blocks, actual);
		Assert.Equal(expected, buffer);
	}

	/// <summary>
	/// The single-block forms transform exactly one block and leave later bytes untouched.
	/// </summary>
	[Fact]
	public void SingleBlockFormsTouchOneBlock()
	{
		byte[] key = CreateKey();
		PsoCipher cipher = new();
		cipher.Init(key);
		byte[] block = CreatePlaintext(16);
		byte[] original = (byte[])block.Clone();
		byte[] expected = (byte[])block.Clone();
		cipher.EncryptBlocks(expected.AsSpan(0, PsoCipher.BlockSize));
		cipher.EncryptBlock(block);
		Assert.Equal(expected, block);
		cipher.DecryptBlock(block);
		Assert.Equal(original, block);
	}

	/// <summary>
	/// Encrypting and decrypting complete blocks restores the plaintext.
	/// </summary>
	[Fact]
	public void RoundTripRestoresEveryCompleteBlock()
	{
		byte[] plaintext = CreatePlaintext(24);
		PsoCipher cipher = new();
		cipher.Init(CreateKey());
		byte[] buffer = (byte[])plaintext.Clone();
		Assert.Equal(plaintext.Length, cipher.EncryptBlocks(buffer));
		Assert.Equal(plaintext.Length / PsoCipher.BlockSize, cipher.DecryptBlocks(buffer));
		Assert.Equal(plaintext, buffer);
	}

	/// <summary>
	/// An empty key cannot initialise the key schedule.
	/// </summary>
	[Fact]
	public void EmptyKeyIsRejected()
	{
		PsoCipher cipher = new();
		Assert.Throws<ArgumentException>(() => cipher.Init([]));
	}

	/// <summary>
	/// A block shorter than eight bytes cannot be transformed.
	/// </summary>
	[Fact]
	public void ShortBlockIsRejected()
	{
		PsoCipher cipher = new();
		cipher.Init(CreateKey());
		Assert.Throws<ArgumentException>(() => cipher.EncryptBlock(new byte[7]));
		Assert.Throws<ArgumentException>(() => cipher.DecryptBlock(new byte[7]));
	}

	private static byte[] CreateKey() => [.. Enumerable.Range(0, 48).Select(index => (byte)((index * 37 + 11) & 0xFF))];

	private static byte[] CreatePlaintext(int length) => [.. Enumerable.Range(0, length).Select(index => (byte)((index * 7 + 3) & 0xFF))];
}
