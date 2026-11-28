using System.Text.Json;
using PsoBB.Net.Crypto;

namespace PsoBB.Tests;

/// <summary>
/// Checks the PC patch cipher against vectors produced by the original machine code.
/// </summary>
public sealed class PatchCipherTests
{
	/// <summary>
	/// The ported key schedule reproduces the original counter, stream words and seed.
	/// </summary>
	[Fact]
	public void InitMatchesTheMachineCode()
	{
		foreach (JsonElement vector in GoldenVectors.Load("0084C390.json"))
		{
			uint seed = vector.GetProperty("seed").GetUInt32();
			byte[] expected = Convert.FromHexString(vector.GetProperty("context").GetString()!);
			PsoV2Cipher cipher = new(seed);
			byte[] actual = new byte[PsoV2Cipher.ContextSize];
			cipher.CopyContext(actual);
			Assert.Equal(expected[..4], actual[..4]);
			Assert.Equal(expected[8..], actual[8..]);
		}
	}

	/// <summary>
	/// The ported stream reproduces the original bytes for complete and split calls.
	/// </summary>
	[Fact]
	public void StreamMatchesTheMachineCode()
	{
		foreach (JsonElement vector in GoldenVectors.Load("00763054.json"))
		{
			PsoV2Cipher cipher = new(vector.GetProperty("seed").GetUInt32());
			if (vector.TryGetProperty("chunks", out JsonElement chunks))
			{
				JsonElement outputs = vector.GetProperty("outputs");
				for (int index = 0; index < chunks.GetArrayLength(); index++)
				{
					byte[] data = Convert.FromHexString(chunks[index].GetString()!);
					cipher.Xor(data);
					Assert.Equal(Convert.FromHexString(outputs[index].GetString()!), data);
				}
			}
			else
			{
				byte[] data = Convert.FromHexString(vector.GetProperty("input").GetString()!);
				cipher.Xor(data);
				Assert.Equal(Convert.FromHexString(vector.GetProperty("output").GetString()!), data);
			}
		}
	}

	/// <summary>
	/// A final partial word consumes one key word without changing bytes beyond the buffer.
	/// </summary>
	[Fact]
	public void PartialWordUsesOneKeyWord()
	{
		PsoV2Cipher first = new(0);
		byte[] shortBuffer = [0x07, 0x14, 0x21];
		first.Xor(shortBuffer);
		PsoV2Cipher second = new(0);
		byte[] longBuffer = [0x07, 0x14, 0x21, 0, 0x2E];
		second.Xor(longBuffer);
		Assert.Equal(shortBuffer, longBuffer[..3]);
	}
}
