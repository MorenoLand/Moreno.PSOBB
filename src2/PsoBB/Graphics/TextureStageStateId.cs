namespace PsoBB.Graphics;

/// <summary>
/// The texture-stage state identifiers used by the original fixed-function texture setters.
/// </summary>
public static class TextureStageStateId
{
	public const uint AddressU = 13;
	public const uint AddressV = 14;

	public const uint AddressWrap = 1;
	public const uint AddressMirror = 2;
	public const uint AddressClamp = 3;
	public const uint AddressBorder = 4;
	public const uint AddressMirrorOnce = 5;
}
