using System.Numerics;
using PsoBB.Graphics;
using Vortice.Direct3D11;

namespace PsoBB.Rendering.Direct3D11;

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

	/// <summary>Gets a state value read as a packed 0xAARRGGBB color.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="fallback">The original default color.</param>
	/// <returns>The color with components in the range zero to one.</returns>
	public Vector4 GetColor(uint state, Vector4 fallback)
	{
		if (!_values.TryGetValue(state, out uint value))
			return fallback;
		return new Vector4(((value >> 16) & 0xFF) / 255.0f, ((value >> 8) & 0xFF) / 255.0f, (value & 0xFF) / 255.0f, ((value >> 24) & 0xFF) / 255.0f);
	}

	/// <summary>Gets a state value read as a single-precision float.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="fallback">The original default.</param>
	/// <returns>The stored float.</returns>
	public float GetSingle(uint state, float fallback) => _values.TryGetValue(state, out uint value) ? BitConverter.Int32BitsToSingle((int)value) : fallback;

	/// <summary>Gets a state value read as a boolean.</summary>
	/// <param name="state">The render-state identifier.</param>
	/// <param name="fallback">The original default.</param>
	/// <returns><see langword="true"/> when the value is nonzero.</returns>
	public bool GetBool(uint state, bool fallback) => _values.TryGetValue(state, out uint value) ? value != 0 : fallback;

	/// <summary>Builds the Direct3D 11 blend state for the current values.</summary>
	/// <returns>The blend description.</returns>
	public BlendDescription CreateBlendDescription()
	{
		bool enabled = Get(RenderStateId.AlphaBlendEnable, 0) != 0;
		bool separateAlpha = Get(RenderStateId.SeparateAlphaBlendEnable, 0) != 0;
		BlendDescription description = new()
		{
			AlphaToCoverageEnable = false,
			IndependentBlendEnable = false,
		};
		description.RenderTarget[0] = new RenderTargetBlendDescription
		{
			BlendEnable = enabled,
			SourceBlend = MapBlend(Get(RenderStateId.SourceBlend, RenderStateId.BlendOne)),
			DestinationBlend = MapBlend(Get(RenderStateId.DestinationBlend, RenderStateId.BlendZero)),
			BlendOperation = MapBlendOperation(Get(RenderStateId.BlendOperation, 1)),
			SourceBlendAlpha = MapBlend(Get(RenderStateId.SourceBlendAlpha, RenderStateId.BlendOne)),
			DestinationBlendAlpha = MapBlend(Get(RenderStateId.DestinationBlendAlpha, RenderStateId.BlendZero)),
			BlendOperationAlpha = MapBlendOperation(Get(RenderStateId.BlendOperationAlpha, 1)),
			RenderTargetWriteMask = (ColorWriteEnable)((byte)(Get(RenderStateId.ColorWriteEnable, 0xF) & 0xF)),
		};
		if (enabled && !separateAlpha)
		{
			RenderTargetBlendDescription target = description.RenderTarget[0];
			target.SourceBlendAlpha = target.SourceBlend;
			target.DestinationBlendAlpha = target.DestinationBlend;
			target.BlendOperationAlpha = target.BlendOperation;
			description.RenderTarget[0] = target;
		}
		return description;
	}

	/// <summary>Builds the Direct3D 11 rasterizer state for the current values.</summary>
	/// <param name="multisampled">Whether the render target uses multisampling.</param>
	/// <returns>The rasterizer description.</returns>
	public RasterizerDescription CreateRasterizerDescription(bool multisampled)
	{
		uint cull = Get(RenderStateId.CullMode, RenderStateId.CullCounterClockwise);
		return new RasterizerDescription
		{
			FillMode = Get(RenderStateId.FillMode, 3) == 2 ? FillMode.Wireframe : FillMode.Solid,
			CullMode = cull switch
			{
				RenderStateId.CullNone => CullMode.None,
				RenderStateId.CullClockwise => CullMode.Front,
				_ => CullMode.Back,
			},
			FrontCounterClockwise = false,
			DepthBias = 0,
			DepthBiasClamp = 0,
			SlopeScaledDepthBias = 0,
			DepthClipEnable = true,
			ScissorEnable = Get(RenderStateId.ScissorTestEnable, 0) != 0,
			MultisampleEnable = multisampled,
			AntialiasedLineEnable = false,
		};
	}

	/// <summary>Builds the Direct3D 11 depth and stencil state for the current values.</summary>
	/// <returns>The depth and stencil description.</returns>
	public DepthStencilDescription CreateDepthStencilDescription()
	{
		bool depthEnabled = Get(RenderStateId.ZEnable, 1) != 0;
		bool depthWrite = Get(RenderStateId.ZWriteEnable, 1) != 0;
		bool stencilEnabled = Get(RenderStateId.StencilEnable, 0) != 0;
		DepthStencilOperationDescription frontFace = new(
			MapStencilOperation(Get(RenderStateId.StencilFail, 1)),
			MapStencilOperation(Get(RenderStateId.StencilDepthFail, 1)),
			MapStencilOperation(Get(RenderStateId.StencilPass, 1)),
			MapComparison(Get(RenderStateId.StencilFunction, RenderStateId.ComparisonAlways)));
		return new DepthStencilDescription
		{
			DepthEnable = depthEnabled,
			DepthWriteMask = depthEnabled && depthWrite ? DepthWriteMask.All : DepthWriteMask.Zero,
			DepthFunc = MapComparison(Get(RenderStateId.ZFunction, 4)),
			StencilEnable = stencilEnabled,
			StencilReadMask = (byte)Get(RenderStateId.StencilMask, 0xFFFFFFFF),
			StencilWriteMask = (byte)Get(RenderStateId.StencilWriteMask, 0xFFFFFFFF),
			FrontFace = frontFace,
			BackFace = frontFace,
		};
	}

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

	private static Blend MapBlend(uint value) => value switch
	{
		1 => Blend.Zero,
		2 => Blend.One,
		3 => Blend.SourceColor,
		4 => Blend.InverseSourceColor,
		5 => Blend.SourceAlpha,
		6 => Blend.InverseSourceAlpha,
		7 => Blend.DestinationAlpha,
		8 => Blend.InverseDestinationAlpha,
		9 => Blend.DestinationColor,
		10 => Blend.InverseDestinationColor,
		11 => Blend.SourceAlphaSaturate,
		12 => Blend.SourceAlpha,
		13 => Blend.InverseSourceAlpha,
		14 => Blend.BlendFactor,
		15 => Blend.InverseBlendFactor,
		_ => Blend.One,
	};

	private static BlendOperation MapBlendOperation(uint value) => value switch
	{
		2 => BlendOperation.Subtract,
		3 => BlendOperation.ReverseSubtract,
		4 => BlendOperation.Min,
		5 => BlendOperation.Max,
		_ => BlendOperation.Add,
	};

	private static ComparisonFunction MapComparison(uint value) => value switch
	{
		1 => ComparisonFunction.Never,
		2 => ComparisonFunction.Less,
		3 => ComparisonFunction.Equal,
		4 => ComparisonFunction.LessEqual,
		5 => ComparisonFunction.Greater,
		6 => ComparisonFunction.NotEqual,
		7 => ComparisonFunction.GreaterEqual,
		_ => ComparisonFunction.Always,
	};

	private static StencilOperation MapStencilOperation(uint value) => value switch
	{
		2 => StencilOperation.Zero,
		3 => StencilOperation.Replace,
		4 => StencilOperation.IncrementSaturate,
		5 => StencilOperation.DecrementSaturate,
		6 => StencilOperation.Invert,
		7 => StencilOperation.Increment,
		8 => StencilOperation.Decrement,
		_ => StencilOperation.Keep,
	};
}
