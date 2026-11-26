namespace PsoBB.Game;

/// <summary>
/// The fixed scene descriptor table the scene loop indexes by scene number.
/// </summary>
/// <remarks>
/// Copied from the shipped image piece at <c>0x009A2000</c>: 19 rows of three function pointers,
/// 12 bytes per row, starting at <c>0x009FF7C0</c>. The loop calls the three pointers in order.
/// </remarks>
public sealed class SceneLibrary
{
    /// <summary>
    /// The guest address of the first descriptor.
    /// </summary>
    public const uint TableAddress = 0x009FF7C0;

    /// <summary>
    /// The distance between descriptors.
    /// </summary>
    public const int DescriptorSize = 12;

    /// <summary>
    /// The number of descriptors, covering scene numbers 0 through 18.
    /// </summary>
    public const int SceneCount = 0x13;

    /// <summary>
    /// The number of bytes the table occupies.
    /// </summary>
    public const int TableLength = SceneCount * DescriptorSize;
    private static readonly SceneDescriptor[] BakedScenes =
    [
        new(0, 0x00000000, 0x00000000, 0x00000000),
        new(1, 0x007A45D0, 0x007A4418, 0x007A44D0),
        new(2, 0x00824934, 0x0081AA00, 0x0081E160),
        new(3, 0x007C1714, 0x007C1588, 0x007C161C),
        new(4, 0x00824914, 0x0081AA00, 0x0081E160),
        new(5, 0x004E9C74, 0x004E9BD4, 0x004E9C58),
        new(6, 0x00824904, 0x0081AA00, 0x0081E160),
        new(7, 0x005119F8, 0x00511940, 0x005119A4),
        new(8, 0x00785540, 0x0078510C, 0x00785178),
        new(9, 0x00824924, 0x0081AA00, 0x0081E160),
        new(10, 0x007BC27C, 0x007BB6D8, 0x007BBFB0),
        new(11, 0x007BD97C, 0x007BCBC4, 0x007BCB04),
        new(12, 0x007853F4, 0x0078510C, 0x00785178),
        new(13, 0x006C8408, 0x006C81A0, 0x006C8268),
        new(14, 0x00000000, 0x00000000, 0x00000000),
        new(15, 0x008248F4, 0x0081AA00, 0x0081E160),
        new(16, 0x008248E4, 0x0081AA00, 0x0081E160),
        new(17, 0x008248D4, 0x0081AA00, 0x0081E160),
        new(18, 0x0070AE9C, 0x0070AD94, 0x0070ADE8),
    ];

    /// <summary>
    /// Gets the baked descriptor table.
    /// </summary>
    [OriginalGlobal(0x009FF7C0)]
    public static IReadOnlyList<SceneDescriptor> Table { get; } = Array.AsReadOnly(BakedScenes);

    private SceneLibrary()
    {
    }

    /// <summary>
    /// Gets the descriptors ordered by scene number.
    /// </summary>
    public IReadOnlyList<SceneDescriptor> Scenes => Table;

    /// <summary>
    /// Creates the library over the baked table.
    /// </summary>
    /// <returns>The scene library.</returns>
    public static SceneLibrary Load() => new();

    /// <summary>
    /// One scene's descriptor.
    /// </summary>
    /// <param name="Index">The scene number.</param>
    /// <param name="Callback0">The first function pointer the loop calls.</param>
    /// <param name="Callback1">The second function pointer the loop calls.</param>
    /// <param name="Callback2">The third function pointer the loop calls.</param>
    public sealed record SceneDescriptor(int Index, uint Callback0, uint Callback1, uint Callback2);
}
