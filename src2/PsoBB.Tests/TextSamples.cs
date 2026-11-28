using System.Buffers.Binary;
using PsoBB.Data;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic unitxt, PR2 and PR3 payloads for the text-container tests.
/// </summary>
internal static class TextSamples
{
	/// <summary>
	/// Builds a decompressed unitxt bundle with the given list sizes and optional strings.
	/// </summary>
	/// <param name="sizes">The number of strings in each list.</param>
	/// <param name="strings">Strings to place at selected list indices; every other string is empty.</param>
	/// <param name="padAfterTerminator">Whether to add one zero code unit of padding after every string.</param>
	/// <returns>The decompressed bundle.</returns>
	public static byte[] Unitxt(int[] sizes, IReadOnlyDictionary<int, string[]>? strings = null, bool padAfterTerminator = false)
	{
		int total = sizes.Sum();
		int textStart = sizeof(uint) + sizes.Length * sizeof(uint) + total * sizeof(uint);
		int[] offsets = new int[total];
		List<byte> text = [];
		int position = 0;
		for (int list = 0; list < sizes.Length; list++)
		{
			string[]? values = null;
			strings?.TryGetValue(list, out values);
			for (int index = 0; index < sizes[list]; index++)
			{
				offsets[position++] = textStart + text.Count;
				string value = values is not null && index < values.Length ? values[index] : string.Empty;
				foreach (char character in value)
				{
					text.Add((byte)character);
					text.Add((byte)(character >> 8));
				}
				text.Add(0);
				text.Add(0);
				if (padAfterTerminator)
				{
					text.Add(0);
					text.Add(0);
				}
			}
		}
		byte[] bundle = new byte[sizeof(uint) + sizes.Length * sizeof(uint) + total * sizeof(uint) + text.Count];
		BinaryPrimitives.WriteInt32LittleEndian(bundle, sizes.Length);
		for (int list = 0; list < sizes.Length; list++)
			BinaryPrimitives.WriteUInt32LittleEndian(bundle.AsSpan(sizeof(uint) + list * sizeof(uint)), (uint)sizes[list]);
		for (int index = 0; index < total; index++)
			BinaryPrimitives.WriteUInt32LittleEndian(bundle.AsSpan(sizeof(uint) + sizes.Length * sizeof(uint) + index * sizeof(uint)), (uint)offsets[index]);
		text.CopyTo(bundle, sizeof(uint) + sizes.Length * sizeof(uint) + total * sizeof(uint));
		return bundle;
	}

	/// <summary>
	/// Builds a PR2 file from a payload and key seed.
	/// </summary>
	/// <param name="payload">The bytes the file should decompress to.</param>
	/// <param name="seed">The PRC key seed.</param>
	/// <returns>The complete PR2 file.</returns>
	public static byte[] Pr2(ReadOnlySpan<byte> payload, uint seed)
	{
		byte[] compressed = ArchiveSamples.Compress(payload);
		PrcCipher cipher = new();
		cipher.Initialize(seed);
		cipher.Decrypt(compressed);
		byte[] file = new byte[Pr2Container.HeaderSize + compressed.Length];
		BinaryPrimitives.WriteUInt32LittleEndian(file, (uint)payload.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(file.AsSpan(4), seed);
		compressed.AsSpan().CopyTo(file.AsSpan(Pr2Container.HeaderSize));
		return file;
	}

	/// <summary>
	/// Builds a PR3 relocation table for pointer fields in ascending byte order.
	/// </summary>
	/// <param name="rootFieldOffset">The root field's byte offset in the payload.</param>
	/// <param name="fieldOffsets">The inline pointer field offsets in ascending order.</param>
	/// <returns>The complete PR3 payload.</returns>
	public static byte[] Pr3(int rootFieldOffset, params int[] fieldOffsets)
	{
		byte[] table = new byte[Pr3RelocationTable.HeaderSize + fieldOffsets.Length * sizeof(ushort)];
		BinaryPrimitives.WriteUInt32LittleEndian(table, Pr3RelocationTable.HeaderSize);
		BinaryPrimitives.WriteUInt32LittleEndian(table.AsSpan(4), (uint)fieldOffsets.Length);
		BinaryPrimitives.WriteUInt32LittleEndian(table.AsSpan(8), 1);
		BinaryPrimitives.WriteUInt32LittleEndian(table.AsSpan(0x10), (uint)rootFieldOffset);
		int previous = 0;
		for (int index = 0; index < fieldOffsets.Length; index++)
		{
			int distance = fieldOffsets[index] - previous;
			if (distance < 0 || distance % 4 != 0 || distance / 4 > ushort.MaxValue)
				throw new ArgumentException("Pointer field offsets must be ascending multiples of four.", nameof(fieldOffsets));
			BinaryPrimitives.WriteUInt16LittleEndian(table.AsSpan(Pr3RelocationTable.HeaderSize + index * sizeof(ushort)), (ushort)(distance / 4));
			previous = fieldOffsets[index];
		}
		return table;
	}
}
