namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// The Direct3D 8 texture-stage state identifiers the original client used.
/// </summary>
internal static class Direct3D8TextureStageState
{
	public const uint ColorOp = 1;
	public const uint ColorArgument1 = 2;
	public const uint ColorArgument2 = 3;
	public const uint AlphaOp = 4;
	public const uint AlphaArgument1 = 5;
	public const uint AlphaArgument2 = 6;
	public const uint BumpEnvironmentMatrix00 = 7;
	public const uint BumpEnvironmentMatrix01 = 8;
	public const uint BumpEnvironmentMatrix10 = 9;
	public const uint BumpEnvironmentMatrix11 = 10;
	public const uint TextureCoordinateIndex = 11;
	public const uint AddressU = 13;
	public const uint AddressV = 14;
	public const uint BorderColor = 15;
	public const uint MagnificationFilter = 16;
	public const uint MinificationFilter = 17;
	public const uint MipmapFilter = 18;
	public const uint MipmapLevelOfDetailBias = 19;
	public const uint MaximumMipmapLevel = 20;
	public const uint MaximumAnisotropy = 21;
	public const uint BumpEnvironmentLuminanceScale = 22;
	public const uint BumpEnvironmentLuminanceOffset = 23;
	public const uint TextureTransformFlags = 24;
	public const uint AddressW = 25;
	public const uint ColorArgument0 = 26;
	public const uint AlphaArgument0 = 27;
	public const uint ResultArgument = 28;

	public const uint ColorOpDisable = 1;
	public const uint ColorOpSelectArgument1 = 2;
	public const uint ColorOpSelectArgument2 = 3;
	public const uint ColorOpModulate = 4;
	public const uint ColorOpModulate2X = 5;
	public const uint ColorOpModulate4X = 6;
	public const uint ColorOpAdd = 7;
	public const uint ColorOpAddSigned = 8;
	public const uint ColorOpAddSigned2X = 9;
	public const uint ColorOpSubtract = 10;
	public const uint ColorOpAddSmooth = 11;
	public const uint ColorOpBlendDiffuseAlpha = 12;
	public const uint ColorOpBlendTextureAlpha = 13;
	public const uint ColorOpBlendFactorAlpha = 14;
	public const uint ColorOpBlendTextureAlphaPremultiplied = 15;
	public const uint ColorOpBlendCurrentAlpha = 16;
	public const uint ColorOpPremodulate = 17;
	public const uint ColorOpModulateAlphaAddColor = 18;
	public const uint ColorOpModulateColorAddAlpha = 19;
	public const uint ColorOpModulateInverseAlphaAddColor = 20;
	public const uint ColorOpModulateInverseColorAddAlpha = 21;
	public const uint ColorOpBumpEnvironmentMap = 22;
	public const uint ColorOpBumpEnvironmentMapLuminance = 23;
	public const uint ColorOpDotProduct3 = 24;
	public const uint ColorOpMultiplyAdd = 25;
	public const uint ColorOpLerp = 26;

	public const uint ArgumentDiffuse = 0;
	public const uint ArgumentCurrent = 1;
	public const uint ArgumentTexture = 2;
	public const uint ArgumentTextureFactor = 3;
	public const uint ArgumentSpecular = 4;
	public const uint ArgumentTemp = 5;
	public const uint ArgumentComplement = 0x10;
	public const uint ArgumentAlphaReplicate = 0x40;

	public const uint AddressWrap = 1;
	public const uint AddressMirror = 2;
	public const uint AddressClamp = 3;
	public const uint AddressBorder = 4;
	public const uint AddressMirrorOnce = 5;

	public const uint FilterNone = 0;
	public const uint FilterPoint = 1;
	public const uint FilterLinear = 2;
	public const uint FilterAnisotropic = 3;
	public const uint FilterFlatCubic = 4;
	public const uint FilterGaussianCubic = 5;

	public const uint TransformDisable = 0;
	public const uint TransformCount1 = 1;
	public const uint TransformCount2 = 2;
	public const uint TransformCount3 = 3;
	public const uint TransformCount4 = 4;
	public const uint TransformProjected = 0x100;

	public const uint CoordinateCameraSpaceNormal = 0x10000;
	public const uint CoordinateCameraSpacePosition = 0x20000;
	public const uint CoordinateCameraSpaceReflection = 0x30000;

	public const uint StageCount = 4;
}
