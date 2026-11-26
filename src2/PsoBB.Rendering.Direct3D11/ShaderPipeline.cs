using System.Text;
using Vortice.D3DCompiler;
using Vortice.Direct3D11;
using Vortice.DXGI;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// Compiles and caches the vertex pipeline for each flexible vertex format.
/// </summary>
internal sealed class ShaderPipeline : IDisposable
{
	private const string ConstantBufferDeclaration = """
		cbuffer SceneConstants : register(b0)
		{
		    row_major float4x4 World;
		    row_major float4x4 View;
		    row_major float4x4 Projection;
		    row_major float4x4 TextureTransform0;
		    row_major float4x4 TextureTransform1;
		    row_major float4x4 TextureTransform2;
		    row_major float4x4 TextureTransform3;
		    float4 FogColor;
		    float4 FogParameters;
		    float4 AlphaTest;
		    float4 ScreenSize;
		    float4 FogRange;
		};
		""";

	private const string OutputStruct = """
		struct VSOutput
		{
		    float4 position : SV_POSITION;
		    float4 color : COLOR0;
		    float2 texcoord : TEXCOORD0;
		    float fogDepth : TEXCOORD1;
		};
		""";

	private const string PixelShaderSource = ConstantBufferDeclaration + """
		Texture2D DiffuseTexture : register(t0);
		SamplerState DiffuseSampler : register(s0);

		""" + OutputStruct + """

		float4 PSMain(VSOutput input) : SV_TARGET
		{
		    float4 color = input.color * DiffuseTexture.Sample(DiffuseSampler, input.texcoord);
		    if (AlphaTest.z > 0.5)
		    {
		        uint function = (uint)AlphaTest.y;
		        bool accepted;
		        if (function == 1) accepted = false;
		        else if (function == 2) accepted = color.a < AlphaTest.x;
		        else if (function == 3) accepted = color.a == AlphaTest.x;
		        else if (function == 4) accepted = color.a <= AlphaTest.x;
		        else if (function == 5) accepted = color.a > AlphaTest.x;
		        else if (function == 6) accepted = color.a != AlphaTest.x;
		        else if (function == 7) accepted = color.a >= AlphaTest.x;
		        else accepted = true;
		        if (!accepted)
		            discard;
		    }
		    if (FogParameters.w > 0.5)
		    {
		        float fog;
		        if (FogParameters.w < 1.5)
		            fog = exp(-FogParameters.z * input.fogDepth);
		        else if (FogParameters.w < 2.5)
		        {
		            float density = FogParameters.z * input.fogDepth;
		            fog = exp(-density * density);
		        }
		        else
		            fog = (FogParameters.y - input.fogDepth) / max(FogParameters.y - FogParameters.x, 0.000001);
		        color.rgb = lerp(color.rgb, FogColor.rgb, saturate(fog));
		    }
		    return color;
		}
		""";

	private readonly ID3D11Device _device;
	private readonly ID3D11PixelShader _pixelShader;
	private readonly Dictionary<uint, VertexPipeline> _cache = [];
	private bool _disposed;

	/// <summary>
	/// Creates the pipeline cache and compiles the shared pixel shader.
	/// </summary>
	/// <param name="device">The device that creates the shaders and input layouts.</param>
	public ShaderPipeline(ID3D11Device device)
	{
		ArgumentNullException.ThrowIfNull(device);
		_device = device;
		byte[] bytecode = Compile(PixelShaderSource, "PSMain", "ps_4_0");
		_pixelShader = _device.CreatePixelShader(bytecode);
	}

	/// <summary>Gets the shared pixel shader.</summary>
	public ID3D11PixelShader PixelShader => _pixelShader;

	/// <summary>
	/// Gets or creates the vertex shader and input layout for a flexible vertex format.
	/// </summary>
	/// <param name="vertexFormat">The original flexible vertex format code.</param>
	/// <param name="format">The parsed format.</param>
	/// <returns>The vertex pipeline.</returns>
	public VertexPipeline Get(uint vertexFormat, FlexibleVertexFormat format)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_cache.TryGetValue(vertexFormat, out VertexPipeline? pipeline))
			return pipeline;
		byte[] bytecode = Compile(CreateVertexShaderSource(format), "VSMain", "vs_4_0");
		pipeline = new VertexPipeline(_device.CreateVertexShader(bytecode), _device.CreateInputLayout(CreateInputElements(format), bytecode));
		_cache.Add(vertexFormat, pipeline);
		return pipeline;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		foreach (VertexPipeline pipeline in _cache.Values)
		{
			pipeline.Layout.Dispose();
			pipeline.Shader.Dispose();
		}
		_cache.Clear();
		_pixelShader.Dispose();
	}

	private static string CreateVertexShaderSource(FlexibleVertexFormat format)
	{
		StringBuilder source = new();
		source.AppendLine(ConstantBufferDeclaration);
		source.AppendLine("struct VSInput");
		source.AppendLine("{");
		source.AppendLine(format.IsPreTransformed ? "    float4 position : POSITION;" : "    float3 position : POSITION;");
		for (int index = 0; index < format.BlendWeightCount; index++)
			source.AppendLine($"    float weight{index} : BLENDWEIGHT{index};");
		if (format.HasDiffuse)
			source.AppendLine("    float4 color : COLOR0;");
		if (format.TextureCoordinateCount > 0)
			source.AppendLine("    float4 texcoord : TEXCOORD0;");
		source.AppendLine("};");
		source.AppendLine(OutputStruct);
		source.AppendLine("VSOutput VSMain(VSInput input)");
		source.AppendLine("{");
		source.AppendLine("    VSOutput output;");
		source.AppendLine("    float3 position = input.position;");
		if (format.BlendWeightCount > 0)
		{
			source.Append("    float weightSum = input.weight0");
			for (int index = 1; index < format.BlendWeightCount; index++)
				source.Append($" + input.weight{index}");
			source.AppendLine(";");
			source.AppendLine("    position *= weightSum;");
		}
		if (format.IsPreTransformed)
		{
			source.AppendLine("    output.position = float4(position.x * ScreenSize.z * 2.0 - 1.0, 1.0 - position.y * ScreenSize.w * 2.0, position.z, 1.0);");
			source.AppendLine("    output.fogDepth = 0.0;");
		}
		else
		{
			source.AppendLine("    float4 worldPosition = mul(float4(position, 1.0), World);");
			source.AppendLine("    float4 viewPosition = mul(worldPosition, View);");
			source.AppendLine("    output.position = mul(viewPosition, Projection);");
			source.AppendLine("    output.fogDepth = FogRange.x > 0.5 ? length(viewPosition.xyz) : viewPosition.z;");
		}
		source.AppendLine(format.HasDiffuse ? "    output.color = input.color.zyxw;" : "    output.color = float4(1.0, 1.0, 1.0, 1.0);");
		source.AppendLine(format.TextureCoordinateCount > 0 ? "    float2 texcoord = input.texcoord.xy;" : "    float2 texcoord = float2(0.0, 0.0);");
		source.AppendLine("    float4 transformed = mul(float4(texcoord, 0.0, 1.0), TextureTransform0);");
		source.AppendLine("    output.texcoord = transformed.xy / (abs(transformed.w) > 0.000001 ? transformed.w : 1.0);");
		source.AppendLine("    return output;");
		source.AppendLine("}");
		return source.ToString();
	}

	private static InputElementDescription[] CreateInputElements(FlexibleVertexFormat format)
	{
		List<InputElementDescription> elements = [];
		int offset = 0;
		if (format.IsPreTransformed)
		{
			elements.Add(new InputElementDescription("POSITION", 0, Format.R32G32B32A32_Float, 0, 0, InputClassification.PerVertexData, 0));
			offset += 16;
		}
		else
		{
			elements.Add(new InputElementDescription("POSITION", 0, Format.R32G32B32_Float, 0, 0, InputClassification.PerVertexData, 0));
			offset += 12;
		}
		for (int index = 0; index < format.BlendWeightCount; index++)
		{
			Format weightFormat = index == format.BlendWeightCount - 1 && format.PackedLastWeight ? Format.R8G8B8A8_UNorm : Format.R32_Float;
			elements.Add(new InputElementDescription("BLENDWEIGHT", (uint)index, weightFormat, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		if (format.HasNormal)
			offset += 12;
		if (format.HasPointSize)
			offset += 4;
		if (format.HasDiffuse)
		{
			elements.Add(new InputElementDescription("COLOR", 0, Format.R8G8B8A8_UNorm, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		if (format.HasSpecular)
			offset += 4;
		if (format.TextureCoordinateCount > 0)
			elements.Add(new InputElementDescription("TEXCOORD", 0, TextureCoordinateFormat(format.TextureCoordinateSize), (uint)offset, 0, InputClassification.PerVertexData, 0));
		return [.. elements];
	}

	private static Format TextureCoordinateFormat(int size) => size switch
	{
		1 => Format.R32_Float,
		3 => Format.R32G32B32_Float,
		4 => Format.R32G32B32A32_Float,
		_ => Format.R32G32_Float,
	};

	private static byte[] Compile(string source, string entryPoint, string profile)
	{
		try
		{
			return Compiler.Compile(source, entryPoint, "PsoBB.Rendering.Direct3D11", profile, ShaderFlags.OptimizationLevel3 | ShaderFlags.PackMatrixRowMajor, EffectFlags.None).ToArray();
		}
		catch (Exception exception) when (exception is not OutOfMemoryException)
		{
			throw new InvalidOperationException($"The {profile} shader could not be compiled.", exception);
		}
	}

	/// <summary>A vertex shader and its input layout for one flexible vertex format.</summary>
	internal sealed record VertexPipeline(ID3D11VertexShader Shader, ID3D11InputLayout Layout);
}
