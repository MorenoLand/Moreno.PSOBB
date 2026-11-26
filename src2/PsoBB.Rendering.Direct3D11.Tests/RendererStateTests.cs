using System.Numerics;
using System.Runtime.InteropServices;
using PsoBB.Graphics;
using Vortice.Direct3D11;

namespace PsoBB.Rendering.Direct3D11.Tests;

/// <summary>
/// Checks the renderer's documented state mapping and its vertex-format parsing without a device.
/// </summary>
public sealed class RendererStateTests
{
	/// <summary>
	/// A packed last beta is a four-byte matrix index, leaving three float weights.
	/// </summary>
	[Fact]
	public void FlexibleVertexFormatParsesPackedIndices()
	{
		FlexibleVertexFormat format = FlexibleVertexFormat.Parse(0x100C | 0x0100, 36);
		Assert.Equal(4, format.BlendValueCount);
		Assert.Equal(3, format.ExplicitWeightCount);
		Assert.True(format.PackedIndices);
		Assert.Equal(36, format.Size);
		Assert.Equal(2, format.GetTextureCoordinateSize(0));
	}

	/// <summary>
	/// Each texture coordinate set records its own component count.
	/// </summary>
	[Fact]
	public void FlexibleVertexFormatParsesPerSetCoordinates()
	{
		uint code = 0x0002 | (4u << 8) | (3u << 16) | (0u << 18) | (1u << 20) | (2u << 22);
		FlexibleVertexFormat format = FlexibleVertexFormat.Parse(code, 52);
		Assert.Equal(1, format.GetTextureCoordinateSize(0));
		Assert.Equal(2, format.GetTextureCoordinateSize(1));
		Assert.Equal(3, format.GetTextureCoordinateSize(2));
		Assert.Equal(4, format.GetTextureCoordinateSize(3));
		Assert.Equal(52, format.Size);
	}

	/// <summary>
	/// The first stage defaults to modulate and later stages are disabled.
	/// </summary>
	[Fact]
	public void TextureStageDefaultsMatchDirect3D8()
	{
		TextureStageValues stages = new();
		Assert.Equal(Direct3D8TextureStageState.ColorOpModulate, stages.GetColorOperation(0));
		Assert.Equal(Direct3D8TextureStageState.ColorOpSelectArgument1, stages.GetAlphaOperation(0));
		Assert.Equal(Direct3D8TextureStageState.ColorOpDisable, stages.GetColorOperation(1));
		Assert.Equal(0, stages.GetTextureCoordinateIndex(0));
		Assert.Equal(3, stages.GetTextureCoordinateIndex(3));
		Assert.Equal(Direct3D8TextureStageState.AddressWrap, stages.Get(2, Direct3D8TextureStageState.AddressU));
		Assert.Equal(Direct3D8TextureStageState.FilterPoint, stages.Get(2, Direct3D8TextureStageState.MagnificationFilter));
		Assert.Equal(Direct3D8TextureStageState.TransformDisable, stages.GetTextureTransformFlags(1));
	}

	/// <summary>
	/// Address, filter, anisotropy and border states reach the sampler description.
	/// </summary>
	[Fact]
	public void TextureStageSamplerMapsStates()
	{
		TextureStageValues stages = new();
		stages.Set(1, Direct3D8TextureStageState.AddressU, Direct3D8TextureStageState.AddressClamp);
		stages.Set(1, Direct3D8TextureStageState.AddressV, Direct3D8TextureStageState.AddressMirror);
		stages.Set(1, Direct3D8TextureStageState.AddressW, Direct3D8TextureStageState.AddressBorder);
		stages.Set(1, Direct3D8TextureStageState.MinificationFilter, Direct3D8TextureStageState.FilterLinear);
		stages.Set(1, Direct3D8TextureStageState.MagnificationFilter, Direct3D8TextureStageState.FilterLinear);
		stages.Set(1, Direct3D8TextureStageState.MipmapFilter, Direct3D8TextureStageState.FilterLinear);
		stages.Set(1, Direct3D8TextureStageState.MaximumAnisotropy, 8);
		stages.Set(1, Direct3D8TextureStageState.BorderColor, 0x80112233);
		SamplerDescription sampler = stages.CreateSamplerDescription(1);
		Assert.Equal(Filter.MinMagMipLinear, sampler.Filter);
		Assert.Equal(Vortice.Direct3D11.TextureAddressMode.Clamp, sampler.AddressU);
		Assert.Equal(Vortice.Direct3D11.TextureAddressMode.Mirror, sampler.AddressV);
		Assert.Equal(Vortice.Direct3D11.TextureAddressMode.Border, sampler.AddressW);
		Assert.Equal(8u, sampler.MaxAnisotropy);
		Assert.Equal(0x11 / 255.0f, sampler.BorderColor.R, 3);
		Assert.Equal(0x22 / 255.0f, sampler.BorderColor.G, 3);
		Assert.Equal(0x33 / 255.0f, sampler.BorderColor.B, 3);
		Assert.Equal(0x80 / 255.0f, sampler.BorderColor.A, 3);
	}

	/// <summary>
	/// Colors, floats and booleans read the packed render-state value the client supplied.
	/// </summary>
	[Fact]
	public void RenderStateValuesReadPackedValues()
	{
		RenderStateValues states = new();
		states.Set(Direct3D8RenderState.FogColor, 0x80112233);
		states.Set(Direct3D8RenderState.FogStart, BitConverter.SingleToUInt32Bits(0.25f));
		states.Set(Direct3D8RenderState.FogEnable, 1);
		Vector4 color = states.GetColor(Direct3D8RenderState.FogColor, Vector4.Zero);
		Assert.Equal(0x11 / 255.0f, color.X, 3);
		Assert.Equal(0x22 / 255.0f, color.Y, 3);
		Assert.Equal(0x33 / 255.0f, color.Z, 3);
		Assert.Equal(0x80 / 255.0f, color.W, 3);
		Assert.Equal(0.25f, states.GetSingle(Direct3D8RenderState.FogStart, 0));
		Assert.True(states.GetBool(Direct3D8RenderState.FogEnable, false));
	}
}
