using Vortice.Direct3D11;
using Vortice.Mathematics;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// The texture-stage states the client set, with the original Direct3D 8 defaults.
/// </summary>
internal sealed class TextureStageValues
{
	private readonly uint[,] _values = new uint[Direct3D8TextureStageState.StageCount, 32];
	private readonly bool[,] _assigned = new bool[Direct3D8TextureStageState.StageCount, 32];

	/// <summary>Gets a stage value or the original default when the client never set it.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <param name="state">The texture-stage state identifier.</param>
	/// <returns>The current value.</returns>
	public uint Get(int stage, uint state)
	{
		if (_assigned[stage, state])
			return _values[stage, state];
		return Default(stage, state);
	}

	/// <summary>Sets a stage value.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <param name="state">The texture-stage state identifier.</param>
	/// <param name="value">The new value.</param>
	public void Set(int stage, uint state, uint value)
	{
		_values[stage, state] = value;
		_assigned[stage, state] = true;
	}

	/// <summary>Gets the color operation for a stage.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The original color-operation identifier.</returns>
	public uint GetColorOperation(int stage) => Get(stage, Direct3D8TextureStageState.ColorOp);

	/// <summary>Gets the alpha operation for a stage.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The original alpha-operation identifier.</returns>
	public uint GetAlphaOperation(int stage) => Get(stage, Direct3D8TextureStageState.AlphaOp);

	/// <summary>Gets the texture-coordinate set a stage reads.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The coordinate set index, without the generation flags.</returns>
	public int GetTextureCoordinateIndex(int stage) => (int)(Get(stage, Direct3D8TextureStageState.TextureCoordinateIndex) & 0xFFFF);

	/// <summary>Gets the texture-coordinate generation mode a stage requests.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The generation flags, or zero for pass-through coordinates.</returns>
	public uint GetTextureCoordinateGeneration(int stage) => Get(stage, Direct3D8TextureStageState.TextureCoordinateIndex) & 0xFFFF0000;

	/// <summary>Gets the texture transform flags for a stage.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The original transform flags.</returns>
	public uint GetTextureTransformFlags(int stage) => Get(stage, Direct3D8TextureStageState.TextureTransformFlags);

	/// <summary>Gets whether the stage writes its result to the temporary register.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns><see langword="true"/> when the result goes to the temporary register.</returns>
	public bool WritesToTemp(int stage) => (Get(stage, Direct3D8TextureStageState.ResultArgument) & 0xF) == Direct3D8TextureStageState.ArgumentTemp;

	/// <summary>Builds the sampler state for a stage.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <returns>The sampler description.</returns>
	public SamplerDescription CreateSamplerDescription(int stage)
	{
		uint minification = Get(stage, Direct3D8TextureStageState.MinificationFilter);
		uint magnification = Get(stage, Direct3D8TextureStageState.MagnificationFilter);
		bool mipLinear = IsLinear(Get(stage, Direct3D8TextureStageState.MipmapFilter));
		Filter filter = minification == Direct3D8TextureStageState.FilterAnisotropic || magnification == Direct3D8TextureStageState.FilterAnisotropic
			? Filter.Anisotropic
			: IsLinear(minification) || IsLinear(magnification)
				? mipLinear ? Filter.MinMagMipLinear : Filter.MinMagLinearMipPoint
				: mipLinear ? Filter.MinMagPointMipLinear : Filter.MinMagMipPoint;
		return new SamplerDescription
		{
			Filter = filter,
			AddressU = MapAddress(Get(stage, Direct3D8TextureStageState.AddressU)),
			AddressV = MapAddress(Get(stage, Direct3D8TextureStageState.AddressV)),
			AddressW = MapAddress(Get(stage, Direct3D8TextureStageState.AddressW)),
			MipLODBias = BitConverter.Int32BitsToSingle((int)Get(stage, Direct3D8TextureStageState.MipmapLevelOfDetailBias)),
			MaxAnisotropy = (uint)Math.Clamp(Get(stage, Direct3D8TextureStageState.MaximumAnisotropy), 1, 16),
			ComparisonFunc = ComparisonFunction.Always,
			BorderColor = ToColor(Get(stage, Direct3D8TextureStageState.BorderColor)),
			MinLOD = 0,
			MaxLOD = float.MaxValue,
		};
	}

	/// <summary>Gets the default value of a stage state.</summary>
	/// <param name="stage">The texture stage.</param>
	/// <param name="state">The texture-stage state identifier.</param>
	/// <returns>The original Direct3D 8 default.</returns>
	public static uint Default(int stage, uint state) => state switch
	{
		Direct3D8TextureStageState.ColorOp => stage == 0 ? Direct3D8TextureStageState.ColorOpModulate : Direct3D8TextureStageState.ColorOpDisable,
		Direct3D8TextureStageState.AlphaOp => stage == 0 ? Direct3D8TextureStageState.ColorOpSelectArgument1 : Direct3D8TextureStageState.ColorOpDisable,
		Direct3D8TextureStageState.ColorArgument1 or Direct3D8TextureStageState.AlphaArgument1 => Direct3D8TextureStageState.ArgumentTexture,
		Direct3D8TextureStageState.ColorArgument2 or Direct3D8TextureStageState.AlphaArgument2 => Direct3D8TextureStageState.ArgumentCurrent,
		Direct3D8TextureStageState.ColorArgument0 or Direct3D8TextureStageState.AlphaArgument0 => Direct3D8TextureStageState.ArgumentCurrent,
		Direct3D8TextureStageState.ResultArgument => Direct3D8TextureStageState.ArgumentCurrent,
		Direct3D8TextureStageState.TextureCoordinateIndex => (uint)stage,
		Direct3D8TextureStageState.AddressU or Direct3D8TextureStageState.AddressV or Direct3D8TextureStageState.AddressW => Direct3D8TextureStageState.AddressWrap,
		Direct3D8TextureStageState.MagnificationFilter or Direct3D8TextureStageState.MinificationFilter or Direct3D8TextureStageState.MipmapFilter => Direct3D8TextureStageState.FilterPoint,
		Direct3D8TextureStageState.MaximumAnisotropy => 1,
		_ => 0,
	};

	private static bool IsLinear(uint filter) => filter is Direct3D8TextureStageState.FilterLinear or Direct3D8TextureStageState.FilterAnisotropic or Direct3D8TextureStageState.FilterFlatCubic or Direct3D8TextureStageState.FilterGaussianCubic;

	private static TextureAddressMode MapAddress(uint address) => address switch
	{
		Direct3D8TextureStageState.AddressMirror => TextureAddressMode.Mirror,
		Direct3D8TextureStageState.AddressClamp => TextureAddressMode.Clamp,
		Direct3D8TextureStageState.AddressBorder => TextureAddressMode.Border,
		Direct3D8TextureStageState.AddressMirrorOnce => TextureAddressMode.MirrorOnce,
		_ => TextureAddressMode.Wrap,
	};

	private static Color4 ToColor(uint color) => new(((color >> 16) & 0xFF) / 255.0f, ((color >> 8) & 0xFF) / 255.0f, (color & 0xFF) / 255.0f, ((color >> 24) & 0xFF) / 255.0f);
}
