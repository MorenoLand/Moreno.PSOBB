using PsoBB.Graphics;
using Silk.NET.OpenGL;

namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// The render-state values set by the client, with the original Direct3D 8 defaults.
/// </summary>
internal sealed class RenderStateValues
{
	private readonly Dictionary<uint, uint> _values = [];

	/// <summary>Gets a state value or the supplied default when the client never set it.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="fallback">The original default.</param>
	/// <returns>The current value.</returns>
	public uint Get(uint state, uint fallback) => _values.TryGetValue(state, out uint value) ? value : fallback;

	/// <summary>Sets a state value.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="value">The new value.</param>
	public void Set(uint state, uint value) => _values[state] = value;

	/// <summary>Gets whether alpha blending is enabled.</summary>
	public bool BlendEnabled => Get(RenderStateId.AlphaBlendEnable, 0) != 0;

	/// <summary>Gets whether alpha blending uses separate alpha factors.</summary>
	public bool SeparateAlphaBlendEnabled => Get(RenderStateId.SeparateAlphaBlendEnable, 0) != 0;

	/// <summary>Gets the source colour blend factor.</summary>
	public BlendingFactor SourceBlend => MapBlend(Get(RenderStateId.SourceBlend, RenderStateId.BlendOne));

	/// <summary>Gets the destination colour blend factor.</summary>
	public BlendingFactor DestinationBlend => MapBlend(Get(RenderStateId.DestinationBlend, RenderStateId.BlendZero));

	/// <summary>Gets the colour blend operation.</summary>
	public BlendEquationModeEXT BlendOperation => MapBlendOperation(Get(RenderStateId.BlendOperation, 1));

	/// <summary>Gets the source alpha blend factor.</summary>
	public BlendingFactor SourceBlendAlpha => MapBlend(Get(RenderStateId.SourceBlendAlpha, RenderStateId.BlendOne));

	/// <summary>Gets the destination alpha blend factor.</summary>
	public BlendingFactor DestinationBlendAlpha => MapBlend(Get(RenderStateId.DestinationBlendAlpha, RenderStateId.BlendZero));

	/// <summary>Gets the alpha blend operation.</summary>
	public BlendEquationModeEXT BlendOperationAlpha => MapBlendOperation(Get(RenderStateId.BlendOperationAlpha, 1));

	/// <summary>Gets the colour write mask.</summary>
	public uint ColorWriteMask => Get(RenderStateId.ColorWriteEnable, 0xF) & 0xF;

	/// <summary>Gets whether depth testing is enabled.</summary>
	public bool DepthEnabled => Get(RenderStateId.ZEnable, 1) != 0;

	/// <summary>Gets whether depth writes are enabled.</summary>
	public bool DepthWriteEnabled => Get(RenderStateId.ZWriteEnable, 1) != 0;

	/// <summary>Gets the depth comparison function.</summary>
	public DepthFunction DepthFunction => MapComparison(Get(RenderStateId.ZFunction, 4));

	/// <summary>Gets whether the fill mode is wireframe.</summary>
	public bool Wireframe => Get(RenderStateId.FillMode, 3) == 2;

	/// <summary>Gets the original cull mode value.</summary>
	public uint CullMode => Get(RenderStateId.CullMode, RenderStateId.CullCounterClockwise);

	/// <summary>Gets whether scissor testing is enabled.</summary>
	public bool ScissorEnabled => Get(RenderStateId.ScissorTestEnable, 0) != 0;

	/// <summary>Gets whether stencil testing is enabled.</summary>
	public bool StencilEnabled => Get(RenderStateId.StencilEnable, 0) != 0;

	/// <summary>Gets the stencil comparison function.</summary>
	public StencilFunction StencilFunction => MapStencilComparison(Get(RenderStateId.StencilFunction, RenderStateId.ComparisonAlways));

	/// <summary>Gets the stencil reference value.</summary>
	public int StencilReference => (int)(Get(RenderStateId.StencilReference, 0) & 0xFF);

	/// <summary>Gets the stencil read mask.</summary>
	public uint StencilReadMask => (byte)Get(RenderStateId.StencilMask, 0xFFFFFFFF);

	/// <summary>Gets the stencil write mask.</summary>
	public uint StencilWriteMask => (byte)Get(RenderStateId.StencilWriteMask, 0xFFFFFFFF);

	/// <summary>Gets the operation run when the stencil test fails.</summary>
	public StencilOp StencilFail => MapStencilOperation(Get(RenderStateId.StencilFail, 1));

	/// <summary>Gets the operation run when the depth test fails.</summary>
	public StencilOp StencilDepthFail => MapStencilOperation(Get(RenderStateId.StencilDepthFail, 1));

	/// <summary>Gets the operation run when the stencil and depth tests pass.</summary>
	public StencilOp StencilPass => MapStencilOperation(Get(RenderStateId.StencilPass, 1));

	/// <summary>Gets the fog mode the shader should evaluate, or zero when fog is disabled.</summary>
	/// <returns>The fog mode.</returns>
	public uint GetFogMode()
	{
		if (Get(RenderStateId.FogEnable, 0) == 0)
			return 0;
		uint mode = Get(RenderStateId.FogTableMode, 0);
		return mode != 0 ? mode : Get(RenderStateId.FogVertexMode, 0);
	}

	/// <summary>Gets the alpha reference converted to a normalized value.</summary>
	/// <returns>The alpha reference in the range zero to one.</returns>
	public float GetAlphaReference() => Math.Clamp(Get(RenderStateId.AlphaReference, 0), 0, 255) / 255.0f;

	/// <summary>Gets whether alpha testing is enabled.</summary>
	/// <returns>True when the pixel shader must reject failing samples.</returns>
	public bool IsAlphaTestEnabled() => Get(RenderStateId.AlphaTestEnable, 0) != 0;

	/// <summary>Gets the alpha comparison function identifier.</summary>
	/// <returns>The Direct3D 8 comparison identifier.</returns>
	public uint GetAlphaFunction() => Get(RenderStateId.AlphaFunction, RenderStateId.ComparisonAlways);

	private static BlendingFactor MapBlend(uint value) => value switch
	{
		1 => BlendingFactor.Zero,
		2 => BlendingFactor.One,
		3 => BlendingFactor.SrcColor,
		4 => BlendingFactor.OneMinusSrcColor,
		5 => BlendingFactor.SrcAlpha,
		6 => BlendingFactor.OneMinusSrcAlpha,
		7 => BlendingFactor.DstAlpha,
		8 => BlendingFactor.OneMinusDstAlpha,
		9 => BlendingFactor.DstColor,
		10 => BlendingFactor.OneMinusDstColor,
		11 => BlendingFactor.SrcAlphaSaturate,
		12 => BlendingFactor.SrcAlpha,
		13 => BlendingFactor.OneMinusSrcAlpha,
		14 => BlendingFactor.ConstantColor,
		15 => BlendingFactor.OneMinusConstantColor,
		_ => BlendingFactor.One,
	};

	private static BlendEquationModeEXT MapBlendOperation(uint value) => value switch
	{
		2 => BlendEquationModeEXT.FuncSubtract,
		3 => BlendEquationModeEXT.FuncReverseSubtract,
		4 => BlendEquationModeEXT.Min,
		5 => BlendEquationModeEXT.Max,
		_ => BlendEquationModeEXT.FuncAdd,
	};

	private static DepthFunction MapComparison(uint value) => value switch
	{
		1 => DepthFunction.Never,
		2 => DepthFunction.Less,
		3 => DepthFunction.Equal,
		4 => DepthFunction.Lequal,
		5 => DepthFunction.Greater,
		6 => DepthFunction.Notequal,
		7 => DepthFunction.Gequal,
		_ => DepthFunction.Always,
	};

	private static StencilFunction MapStencilComparison(uint value) => value switch
	{
		1 => StencilFunction.Never,
		2 => StencilFunction.Less,
		3 => StencilFunction.Equal,
		4 => StencilFunction.Lequal,
		5 => StencilFunction.Greater,
		6 => StencilFunction.Notequal,
		7 => StencilFunction.Gequal,
		_ => StencilFunction.Always,
	};

	private static StencilOp MapStencilOperation(uint value) => value switch
	{
		2 => StencilOp.Zero,
		3 => StencilOp.Replace,
		4 => StencilOp.Incr,
		5 => StencilOp.Decr,
		6 => StencilOp.Invert,
		7 => StencilOp.IncrWrap,
		8 => StencilOp.DecrWrap,
		_ => StencilOp.Keep,
	};
}
