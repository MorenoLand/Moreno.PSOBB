using PsoBB.Core;

namespace PsoBB.Game;

/// <summary>
/// The fixed scene descriptor table the scene loop indexes by scene number.
/// </summary>
/// <remarks>
/// Each descriptor occupies twenty-four bytes; the loop calls the first three function pointers in
/// order. The table is read from the data image rather than transcribed.
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
    public const int DescriptorSize = 24;

    /// <summary>
    /// The number of descriptors, covering scene numbers 0 through 18.
    /// </summary>
    public const int SceneCount = 0x13;

    /// <summary>
    /// The number of bytes the table occupies.
    /// </summary>
    public const int TableLength = SceneCount * DescriptorSize;
    private readonly IReadOnlyList<SceneDescriptor> _view;

    private SceneLibrary(SceneDescriptor[] scenes)
    {
        _view = Array.AsReadOnly(scenes);
    }

    /// <summary>
    /// Gets the descriptors ordered by scene number.
    /// </summary>
    public IReadOnlyList<SceneDescriptor> Scenes => _view;

    /// <summary>
    /// Reads every descriptor from the data image.
    /// </summary>
    /// <param name="image">The data image that maps the whole table.</param>
    /// <returns>The loaded library.</returns>
    /// <exception cref="ArgumentNullException"><paramref name="image"/> is null.</exception>
    public static SceneLibrary Load(GuestImage image)
    {
        ArgumentNullException.ThrowIfNull(image);
        SceneDescriptor[] scenes = new SceneDescriptor[SceneCount];
        for (int index = 0; index < scenes.Length; index++)
        {
            uint entry = TableAddress + (uint)(index * DescriptorSize);
            scenes[index] = new(index, image.ReadUInt32(entry), image.ReadUInt32(entry + 4), image.ReadUInt32(entry + 8));
        }
        return new(scenes);
    }

    /// <summary>
    /// One scene's descriptor.
    /// </summary>
    /// <param name="Index">The scene number.</param>
    /// <param name="Callback0">The first function pointer the loop calls.</param>
    /// <param name="Callback1">The second function pointer the loop calls.</param>
    /// <param name="Callback2">The third function pointer the loop calls.</param>
    public sealed record SceneDescriptor(int Index, uint Callback0, uint Callback1, uint Callback2);
}
