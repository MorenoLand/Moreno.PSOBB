using PsoBB.Core;

namespace PsoBB.Tests;

/// <summary>
/// Builds synthetic data images that map the game start-up flag and the scene table.
/// </summary>
internal static class TestGameImage
{
    /// <summary>
    /// The guest address of the scene selection flag.
    /// </summary>
    public const uint SceneSelectionAddress = 0x00ACBEC0;

    /// <summary>
    /// The guest address of the first scene descriptor.
    /// </summary>
    public const uint SceneTableAddress = 0x009FF7C0;

    /// <summary>
    /// The number of scene descriptors.
    /// </summary>
    public const int SceneCount = 0x13;

    /// <summary>
    /// The distance between scene descriptors.
    /// </summary>
    public const int DescriptorSize = 24;

    /// <summary>
    /// Builds a complete start-up image.
    /// </summary>
    /// <param name="sceneSelection">The value stored in the scene selection flag.</param>
    /// <param name="includeFlag">Whether the flag piece is present.</param>
    /// <param name="includeTable">Whether the scene table piece is present.</param>
    /// <returns>The image file bytes.</returns>
    public static byte[] Create(uint sceneSelection = 0, bool includeFlag = true, bool includeTable = true)
    {
        List<(uint Address, byte[] Bytes)> pieces = [];
        if (includeFlag)
            pieces.Add((SceneSelectionAddress, UInt32(sceneSelection)));
        if (includeTable)
            pieces.Add((SceneTableAddress, SceneTable()));
        return Build([.. pieces]);
    }

    /// <summary>
    /// Builds the scene descriptor table with distinguishable function pointers.
    /// </summary>
    /// <returns>The table bytes.</returns>
    public static byte[] SceneTable()
    {
        byte[] table = new byte[SceneCount * DescriptorSize];
        for (int index = 0; index < SceneCount; index++)
        {
            uint first = 0x00100000u + (uint)(index * 3);
            UInt32(first).CopyTo(table, index * DescriptorSize);
            UInt32(first + 1).CopyTo(table, index * DescriptorSize + 4);
            UInt32(first + 2).CopyTo(table, index * DescriptorSize + 8);
        }
        return table;
    }

    /// <summary>
    /// Builds a data image from pieces in the order given.
    /// </summary>
    /// <param name="pieces">One guest address and byte block per piece.</param>
    /// <returns>The image file bytes.</returns>
    public static byte[] Build(params (uint Address, byte[] Bytes)[] pieces)
    {
        int header = 4 + pieces.Length * 12;
        int total = header + pieces.Sum(piece => piece.Bytes.Length);
        byte[] image = new byte[total];
        UInt32((uint)pieces.Length).CopyTo(image, 0);
        int offset = header;
        for (int index = 0; index < pieces.Length; index++)
        {
            int entry = 4 + index * 12;
            UInt32(pieces[index].Address).CopyTo(image, entry);
            UInt32((uint)pieces[index].Bytes.Length).CopyTo(image, entry + 4);
            UInt32((uint)offset).CopyTo(image, entry + 8);
            pieces[index].Bytes.CopyTo(image, offset);
            offset += pieces[index].Bytes.Length;
        }
        return image;
    }

    /// <summary>
    /// Encodes a little-endian 32-bit integer.
    /// </summary>
    /// <param name="value">The value to encode.</param>
    /// <returns>The four bytes.</returns>
    public static byte[] UInt32(uint value) => [(byte)value, (byte)(value >> 8), (byte)(value >> 16), (byte)(value >> 24)];
}
