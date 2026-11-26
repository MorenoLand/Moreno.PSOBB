namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// The render-state identifiers and default values the original Direct3D 8 client used.
/// </summary>
internal static class Direct3D8RenderState
{
	public const uint ZEnable = 7;
	public const uint FillMode = 8;
	public const uint ZWriteEnable = 14;
	public const uint AlphaTestEnable = 15;
	public const uint SourceBlend = 19;
	public const uint DestinationBlend = 20;
	public const uint CullMode = 22;
	public const uint ZFunction = 23;
	public const uint AlphaReference = 24;
	public const uint AlphaFunction = 25;
	public const uint AlphaBlendEnable = 27;
	public const uint FogEnable = 28;
	public const uint SpecularEnable = 29;
	public const uint FogColor = 34;
	public const uint FogTableMode = 35;
	public const uint FogStart = 36;
	public const uint FogEnd = 37;
	public const uint FogDensity = 38;
	public const uint RangeFogEnable = 48;
	public const uint StencilEnable = 52;
	public const uint StencilFail = 53;
	public const uint StencilDepthFail = 54;
	public const uint StencilPass = 55;
	public const uint StencilFunction = 56;
	public const uint StencilReference = 57;
	public const uint StencilMask = 58;
	public const uint StencilWriteMask = 59;
	public const uint TextureFactor = 60;
	public const uint Clipping = 136;
	public const uint Lighting = 137;
	public const uint Ambient = 139;
	public const uint FogVertexMode = 140;
	public const uint ColorVertex = 141;
	public const uint LocalViewer = 142;
	public const uint NormalizeNormals = 143;
	public const uint DiffuseMaterialSource = 145;
	public const uint SpecularMaterialSource = 146;
	public const uint AmbientMaterialSource = 147;
	public const uint EmissiveMaterialSource = 148;
	public const uint VertexBlend = 151;
	public const uint IndexedVertexBlendEnable = 167;
	public const uint ColorWriteEnable = 168;
	public const uint TweenFactor = 170;
	public const uint BlendOperation = 171;
	public const uint ScissorTestEnable = 174;
	public const uint SeparateAlphaBlendEnable = 206;
	public const uint SourceBlendAlpha = 207;
	public const uint DestinationBlendAlpha = 208;
	public const uint BlendOperationAlpha = 209;

	public const uint MaterialColorMaterial = 0;
	public const uint MaterialColorDiffuse = 1;
	public const uint MaterialColorSpecular = 2;

	public const uint VertexBlendDisable = 0;
	public const uint VertexBlendOneWeight = 1;
	public const uint VertexBlendTwoWeights = 2;
	public const uint VertexBlendThreeWeights = 3;
	public const uint VertexBlendTweening = 255;
	public const uint VertexBlendZeroWeights = 256;

	public const uint CullNone = 1;
	public const uint CullClockwise = 2;
	public const uint CullCounterClockwise = 3;

	public const uint ComparisonNever = 1;
	public const uint ComparisonAlways = 8;

	public const uint BlendZero = 1;
	public const uint BlendOne = 2;
}
