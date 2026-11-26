namespace PsoBB.Models;

/// <summary>
/// A texture name paired with the decoded archive texture that fills its slot.
/// </summary>
/// <param name="Name">The NJTL name.</param>
/// <param name="GlobalIndex">The texture cache index, or zero when no texture is present.</param>
/// <param name="Width">The texture width, or zero when no texture is present.</param>
/// <param name="Height">The texture height, or zero when no texture is present.</param>
public readonly record struct NinjaTextureReference(string Name, uint GlobalIndex, int Width, int Height);
