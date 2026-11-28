using System.Text;
using Vortice.D3DCompiler;
using Vortice.Direct3D11;
using Vortice.DXGI;

namespace PsoBB.Rendering.Direct3D11;

/// <summary>
/// Compiles and caches the vertex pipeline for each flexible vertex format and the shared pixel pipeline.
/// </summary>
internal sealed class ShaderPipeline : IDisposable
{
	private const int LightCount = 8;
	private const int StageCount = 4;

	private const string ConstantBufferDeclaration = """
		cbuffer SceneConstants : register(b0)
		{
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
		    float4 FogFlags;
		};

		cbuffer LightStateConstants : register(b1)
		{
		    float4 MaterialDiffuse;
		    float4 MaterialAmbient;
		    float4 MaterialSpecular;
		    float4 MaterialEmissive;
		    float4 MaterialPower;
		    float4 LightingFlags;
		    float4 MaterialSources;
		    float4 VertexBlend;
		    float4 GlobalAmbient;
		    float4 TextureFactor;
		    float4 StageColor[4];
		    float4 StageAlpha[4];
		    float4 StageFlags[4];
		};

		cbuffer LightDataConstants : register(b3)
		{
		    struct LightData
		    {
		        float4 Type;
		        float4 Diffuse;
		        float4 Specular;
		        float4 Ambient;
		        float4 Position;
		        float4 Direction;
		        float4 Attenuation;
		        float4 Spot;
		    };
		    LightData Lights[8];
		};

		cbuffer PaletteConstants : register(b2)
		{
		    row_major float4x4 WorldPalette[256];
		};
		""";

	private const string FogFunction = """
		float ComputeFog(uint mode, float distance)
		{
		    if (mode == 1)
		        return exp(-FogParameters.z * distance);
		    if (mode == 2)
		    {
		        float scaled = FogParameters.z * distance;
		        return exp(-scaled * scaled);
		    }
		    if (mode == 3)
		        return (FogParameters.y - distance) / max(FogParameters.y - FogParameters.x, 0.000001);
		    return 1.0;
		}
		""";

	private const string SafeNormalizeFunction = """
		float3 SafeNormalize(float3 value)
		{
		    float lengthSquared = dot(value, value);
		    return lengthSquared > 0.000001 ? value * rsqrt(lengthSquared) : float3(0.0, 0.0, 0.0);
		}
		""";

	private const string PixelShaderSource = ConstantBufferDeclaration + FogFunction + """
		Texture2D StageTexture0 : register(t0);
		Texture2D StageTexture1 : register(t1);
		Texture2D StageTexture2 : register(t2);
		Texture2D StageTexture3 : register(t3);
		SamplerState StageSampler0 : register(s0);
		SamplerState StageSampler1 : register(s1);
		SamplerState StageSampler2 : register(s2);
		SamplerState StageSampler3 : register(s3);

		struct VSOutput
		{
		    float4 position : SV_POSITION;
		    float4 diffuse : COLOR0;
		    float4 specular : COLOR1;
		    float4 texcoord0 : TEXCOORD0;
		    float4 texcoord1 : TEXCOORD1;
		    float4 texcoord2 : TEXCOORD2;
		    float4 texcoord3 : TEXCOORD3;
		    float2 fog : TEXCOORD4;
		};

		float4 GetArgument(uint argument, float4 current, float4 diffuse, float4 specular, float4 stageTexture, float4 temporary)
		{
		    uint source = argument & 0x0F;
		    float4 value;
		    if (source == 0) value = diffuse;
		    else if (source == 1) value = current;
		    else if (source == 2) value = stageTexture;
		    else if (source == 3) value = TextureFactor;
		    else if (source == 4) value = specular;
		    else if (source == 5) value = temporary;
		    else value = float4(0.0, 0.0, 0.0, 0.0);
		    if ((argument & 0x40) != 0) value = value.aaaa;
		    if ((argument & 0x10) != 0) value = 1.0 - value;
		    return value;
		}

		float GetAlphaArgument(uint argument, float4 current, float4 diffuse, float4 specular, float4 stageTexture, float4 temporary)
		{
		    return GetArgument(argument, current, diffuse, specular, stageTexture, temporary).a;
		}

		float4 EvaluateColorOperation(uint operation, float4 argument0, float4 argument1, float4 argument2, float4 stageTexture, float4 diffuse, float4 current)
		{
		    float4 result;
		    if (operation == 2) result = argument1;
		    else if (operation == 3) result = argument2;
		    else if (operation == 4) result = argument1 * argument2;
		    else if (operation == 5) result = argument1 * argument2 * 2.0;
		    else if (operation == 6) result = argument1 * argument2 * 4.0;
		    else if (operation == 7) result = argument1 + argument2;
		    else if (operation == 8) result = argument1 + argument2 - 0.5;
		    else if (operation == 9) result = (argument1 + argument2 - 0.5) * 2.0;
		    else if (operation == 10) result = argument1 - argument2;
		    else if (operation == 11) result = argument1 + argument2 - argument1 * argument2;
		    else if (operation == 12) result = lerp(argument2, argument1, diffuse.a);
		    else if (operation == 13) result = lerp(argument2, argument1, stageTexture.a);
		    else if (operation == 14) result = lerp(argument2, argument1, TextureFactor.a);
		    else if (operation == 15) result = argument1 + argument2 * (1.0 - stageTexture.a);
		    else if (operation == 16) result = lerp(argument2, argument1, current.a);
		    else if (operation == 17) result = argument1;
		    else if (operation == 18) result = float4(argument1.rgb + argument1.a * argument2.rgb, argument1.a);
		    else if (operation == 19) result = float4(argument1.rgb * argument2.rgb + argument1.a, argument1.a);
		    else if (operation == 20) result = float4(argument1.rgb + (1.0 - argument1.a) * argument2.rgb, argument1.a);
		    else if (operation == 21) result = float4((1.0 - argument1.rgb) * argument2.rgb + argument1.a, argument1.a);
		    else if (operation == 24)
		    {
		        float product = dot(argument1.rgb * 2.0 - 1.0, argument2.rgb * 2.0 - 1.0);
		        result = float4(product, product, product, product);
		    }
		    else if (operation == 25) result = argument1 + argument2 * argument0;
		    else if (operation == 26) result = argument0 * argument1 + (1.0 - argument0) * argument2;
		    else result = argument1;
		    return result;
		}

		float EvaluateAlphaOperation(uint operation, float argument0, float argument1, float argument2, float textureAlpha, float diffuseAlpha, float currentAlpha)
		{
		    float result;
		    if (operation == 2) result = argument1;
		    else if (operation == 3) result = argument2;
		    else if (operation == 4) result = argument1 * argument2;
		    else if (operation == 5) result = argument1 * argument2 * 2.0;
		    else if (operation == 6) result = argument1 * argument2 * 4.0;
		    else if (operation == 7) result = argument1 + argument2;
		    else if (operation == 8) result = argument1 + argument2 - 0.5;
		    else if (operation == 9) result = (argument1 + argument2 - 0.5) * 2.0;
		    else if (operation == 10) result = argument1 - argument2;
		    else if (operation == 11) result = argument1 + argument2 - argument1 * argument2;
		    else if (operation == 12) result = lerp(argument2, argument1, diffuseAlpha);
		    else if (operation == 13) result = lerp(argument2, argument1, textureAlpha);
		    else if (operation == 14) result = lerp(argument2, argument1, TextureFactor.a);
		    else if (operation == 15) result = argument1 + argument2 * (1.0 - textureAlpha);
		    else if (operation == 16) result = lerp(argument2, argument1, currentAlpha);
		    else if (operation == 17) result = argument1;
		    else if (operation == 25) result = argument1 + argument2 * argument0;
		    else if (operation == 26) result = argument0 * argument1 + (1.0 - argument0) * argument2;
		    else result = argument1;
		    return result;
		}

		bool StageActive(uint index)
		{
		    if (StageColor[index].x == 1.0) return false;
		    if (StageFlags[index].w < 0.5 && (((uint)StageColor[index].y) & 0x0F) == 2) return false;
		    return true;
		}

		void ApplyStage(uint index, float4 stageTexture, float4 diffuse, float4 specular, bool premultiplyCurrent, inout float4 current, inout float4 temporary)
		{
		    float4 currentArgument = premultiplyCurrent ? current * stageTexture : current;
		    float4 argument0 = GetArgument((uint)StageColor[index].w, currentArgument, diffuse, specular, stageTexture, temporary);
		    float4 argument1 = GetArgument((uint)StageColor[index].y, currentArgument, diffuse, specular, stageTexture, temporary);
		    float4 argument2 = GetArgument((uint)StageColor[index].z, currentArgument, diffuse, specular, stageTexture, temporary);
		    float alpha0 = GetAlphaArgument((uint)StageAlpha[index].w, currentArgument, diffuse, specular, stageTexture, temporary);
		    float alpha1 = GetAlphaArgument((uint)StageAlpha[index].y, currentArgument, diffuse, specular, stageTexture, temporary);
		    float alpha2 = GetAlphaArgument((uint)StageAlpha[index].z, currentArgument, diffuse, specular, stageTexture, temporary);
		    float4 color = EvaluateColorOperation((uint)StageColor[index].x, argument0, argument1, argument2, stageTexture, diffuse, current);
		    float alpha = StageAlpha[index].x == 1.0 ? current.a : EvaluateAlphaOperation((uint)StageAlpha[index].x, alpha0, alpha1, alpha2, stageTexture.a, diffuse.a, current.a);
		    color = saturate(float4(color.rgb, alpha));
		    if (((uint)StageFlags[index].z & 0x0F) == 5) temporary = color;
		    else current = color;
		}

		float4 PSMain(VSOutput input) : SV_TARGET
		{
		    float4 current = input.diffuse;
		    float4 temporary = float4(0.0, 0.0, 0.0, 0.0);
		    float4 specular = input.specular;
		    float4 texture0 = StageTexture0.Sample(StageSampler0, input.texcoord0.xy);
		    float4 texture1 = StageTexture1.Sample(StageSampler1, input.texcoord1.xy);
		    float4 texture2 = StageTexture2.Sample(StageSampler2, input.texcoord2.xy);
		    float4 texture3 = StageTexture3.Sample(StageSampler3, input.texcoord3.xy);
		    if (StageActive(0))
		    {
		        ApplyStage(0, texture0, input.diffuse, specular, false, current, temporary);
		        if (StageActive(1))
		        {
		            ApplyStage(1, texture1, input.diffuse, specular, StageColor[0].x == 17.0, current, temporary);
		            if (StageActive(2))
		            {
		                ApplyStage(2, texture2, input.diffuse, specular, StageColor[1].x == 17.0, current, temporary);
		                if (StageActive(3))
		                    ApplyStage(3, texture3, input.diffuse, specular, StageColor[2].x == 17.0, current, temporary);
		            }
		        }
		    }
		    if (LightingFlags.y > 0.5)
		        current.rgb += specular.rgb;
		    if (AlphaTest.z > 0.5)
		    {
		        uint function = (uint)AlphaTest.y;
		        bool accepted;
		        if (function == 1) accepted = false;
		        else if (function == 2) accepted = current.a < AlphaTest.x;
		        else if (function == 3) accepted = current.a == AlphaTest.x;
		        else if (function == 4) accepted = current.a <= AlphaTest.x;
		        else if (function == 5) accepted = current.a > AlphaTest.x;
		        else if (function == 6) accepted = current.a != AlphaTest.x;
		        else if (function == 7) accepted = current.a >= AlphaTest.x;
		        else accepted = true;
		        if (!accepted)
		            discard;
		    }
		    uint fogMode = (uint)FogParameters.w;
		    if (fogMode != 0)
		    {
		        float fog = FogFlags.y > 0.5 ? ComputeFog(fogMode, input.fog.y) : input.fog.x;
		        current.rgb = lerp(FogColor.rgb, current.rgb, saturate(fog));
		    }
		    return current;
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
		source.AppendLine(FogFunction);
		source.AppendLine(SafeNormalizeFunction);
		source.AppendLine("struct VSInput");
		source.AppendLine("{");
		source.AppendLine(format.IsPreTransformed ? "    float4 position : POSITION;" : "    float3 position : POSITION;");
		int weightCount = Math.Min(format.ExplicitWeightCount, 3);
		for (int index = 0; index < weightCount; index++)
			source.AppendLine($"    float weight{index} : BLENDWEIGHT{index};");
		if (format.PackedIndices)
			source.AppendLine("    uint4 indices : BLENDINDICES0;");
		if (format.HasNormal)
			source.AppendLine("    float3 normal : NORMAL;");
		if (format.HasDiffuse)
			source.AppendLine("    float4 diffuse : COLOR0;");
		if (format.HasSpecular)
			source.AppendLine("    float4 specular : COLOR1;");
		for (int index = 0; index < Math.Min(format.TextureCoordinateCount, StageCount); index++)
			source.AppendLine($"    {TextureCoordinateType(format.GetTextureCoordinateSize(index))} texcoord{index} : TEXCOORD{index};");
		source.AppendLine("};");
		source.AppendLine("""
			struct VSOutput
			{
			    float4 position : SV_POSITION;
			    float4 diffuse : COLOR0;
			    float4 specular : COLOR1;
			    float4 texcoord0 : TEXCOORD0;
			    float4 texcoord1 : TEXCOORD1;
			    float4 texcoord2 : TEXCOORD2;
			    float4 texcoord3 : TEXCOORD3;
			    float2 fog : TEXCOORD4;
			};
			""");
		AppendTextureCoordinateSelector(source, format);
		AppendMaterialSelector(source, format);
		source.AppendLine("VSOutput VSMain(VSInput input)");
		source.AppendLine("{");
		source.AppendLine("    VSOutput output;");
		if (format.IsPreTransformed)
			AppendPreTransformedVertex(source, format);
		else
			AppendTransformedVertex(source, format, weightCount);
		AppendTextureCoordinates(source, format);
		source.AppendLine("    return output;");
		source.AppendLine("}");
		return source.ToString();
	}

	private static void AppendTextureCoordinateSelector(StringBuilder source, FlexibleVertexFormat format)
	{
		source.AppendLine("float4 SelectTextureCoordinate(VSInput vertex, uint index)");
		source.AppendLine("{");
		for (int index = 0; index < Math.Min(format.TextureCoordinateCount, StageCount); index++)
		{
			int size = format.GetTextureCoordinateSize(index);
			string value = size switch
			{
				1 => $"float4(vertex.texcoord{index}, 0.0, 0.0, 1.0)",
				2 => $"float4(vertex.texcoord{index}, 0.0, 1.0)",
				3 => $"float4(vertex.texcoord{index}, 1.0)",
				_ => $"vertex.texcoord{index}",
			};
			source.AppendLine($"    if (index == {index}) return {value};");
		}
		source.AppendLine("    return float4(0.0, 0.0, 0.0, 1.0);");
		source.AppendLine("}");
	}

	private static void AppendMaterialSelector(StringBuilder source, FlexibleVertexFormat format)
	{
		source.AppendLine("float4 SelectMaterial(uint source, float4 material, float4 vertexDiffuse, float4 vertexSpecular)");
		source.AppendLine("{");
		source.AppendLine("    if (LightingFlags.z < 0.5) return material;");
		if (format.HasDiffuse)
			source.AppendLine("    if (source == 1) return vertexDiffuse;");
		if (format.HasSpecular)
			source.AppendLine("    if (source == 2) return vertexSpecular;");
		source.AppendLine("    return material;");
		source.AppendLine("}");
	}

	private static void AppendPreTransformedVertex(StringBuilder source, FlexibleVertexFormat format)
	{
		source.AppendLine("    float4 position = input.position;");
		source.AppendLine("    output.position = float4(position.x * ScreenSize.z * 2.0 - 1.0, 1.0 - position.y * ScreenSize.w * 2.0, position.z, 1.0);");
		source.AppendLine("    float reciprocalW = abs(position.w) > 0.000001 ? 1.0 / position.w : 1.0;");
		source.AppendLine("    output.fog = float2(ComputeFog((uint)FogParameters.w, reciprocalW), reciprocalW);");
		source.AppendLine("    float4 vertexDiffuse = " + (format.HasDiffuse ? "input.diffuse.zyxw" : "float4(1.0, 1.0, 1.0, 1.0)") + ";");
		source.AppendLine("    float4 vertexSpecular = " + (format.HasSpecular ? "input.specular.zyxw" : "float4(1.0, 1.0, 1.0, 1.0)") + ";");
		source.AppendLine("    output.diffuse = vertexDiffuse;");
		source.AppendLine("    output.specular = vertexSpecular;");
		source.AppendLine("    float4 viewPosition = float4(position.xyz, 1.0);");
		source.AppendLine("    float3 viewNormal = float3(0.0, 0.0, 0.0);");
	}

	private static void AppendTransformedVertex(StringBuilder source, FlexibleVertexFormat format, int weightCount)
	{
		source.AppendLine("    float4x4 blendedWorld = WorldPalette[0];");
		if (weightCount > 0)
		{
			source.AppendLine("    uint blendMode = (uint)VertexBlend.x;");
			source.AppendLine("    if (blendMode >= 1 && blendMode <= 3)");
			source.AppendLine("    {");
			source.AppendLine("        float weight0 = input.weight0;");
			source.AppendLine("        float weight1 = 0.0;");
			source.AppendLine("        float weight2 = 0.0;");
			source.AppendLine("        float weight3 = 0.0;");
			if (weightCount > 1)
				source.AppendLine("        weight1 = input.weight1;");
			if (weightCount > 2)
				source.AppendLine("        weight2 = input.weight2;");
			source.AppendLine("        uint index0 = 0;");
			source.AppendLine("        uint index1 = 1;");
			source.AppendLine("        uint index2 = 2;");
			source.AppendLine("        uint index3 = 3;");
			if (format.PackedIndices)
			{
				source.AppendLine("        if (VertexBlend.z > 0.5)");
				source.AppendLine("        {");
				source.AppendLine("            index0 = input.indices.x;");
				source.AppendLine("            index1 = input.indices.y;");
				source.AppendLine("            index2 = input.indices.z;");
				source.AppendLine("            index3 = input.indices.w;");
				source.AppendLine("        }");
			}
			source.AppendLine("        if (blendMode == 1) weight1 = 1.0 - weight0;");
			source.AppendLine("        else if (blendMode == 2) weight2 = 1.0 - weight0 - weight1;");
			source.AppendLine("        else weight3 = 1.0 - weight0 - weight1 - weight2;");
			source.AppendLine("        blendedWorld = weight0 * WorldPalette[index0] + weight1 * WorldPalette[index1] + weight2 * WorldPalette[index2] + weight3 * WorldPalette[index3];");
			source.AppendLine("    }");
			source.AppendLine("    else if (blendMode == 255)");
			source.AppendLine("    {");
			source.AppendLine("        float tween = VertexBlend.y;");
			source.AppendLine("        blendedWorld = (1.0 - tween) * WorldPalette[0] + tween * WorldPalette[1];");
			source.AppendLine("    }");
		}
		source.AppendLine("    float4 worldPosition = mul(float4(input.position, 1.0), blendedWorld);");
		source.AppendLine("    float4 viewPosition = mul(worldPosition, View);");
		source.AppendLine("    output.position = mul(viewPosition, Projection);");
		source.AppendLine("    float3 viewNormal = float3(0.0, 0.0, 0.0);");
		if (format.HasNormal)
		{
			source.AppendLine("    viewNormal = mul(mul(input.normal, (float3x3)blendedWorld), (float3x3)View);");
			source.AppendLine("    if (VertexBlend.w > 0.5) viewNormal = SafeNormalize(viewNormal);");
		}
		source.AppendLine("    float tableDepth = FogFlags.z > 0.5 ? viewPosition.z : output.position.w;");
		source.AppendLine("    float vertexDistance = FogFlags.x > 0.5 ? length(viewPosition.xyz) : abs(viewPosition.z);");
		source.AppendLine("    output.fog = float2(ComputeFog((uint)FogParameters.w, vertexDistance), tableDepth);");
		source.AppendLine("    float4 vertexDiffuse = " + (format.HasDiffuse ? "input.diffuse.zyxw" : "float4(1.0, 1.0, 1.0, 1.0)") + ";");
		source.AppendLine("    float4 vertexSpecular = " + (format.HasSpecular ? "input.specular.zyxw" : "float4(1.0, 1.0, 1.0, 1.0)") + ";");
		AppendLighting(source, format);
		source.AppendLine("    output.diffuse = lightingDiffuse;");
		source.AppendLine("    output.specular = lightingSpecular;");
	}

	private static void AppendLighting(StringBuilder source, FlexibleVertexFormat format)
	{
		source.AppendLine("    float4 materialAmbient = SelectMaterial((uint)MaterialSources.x, MaterialAmbient, vertexDiffuse, vertexSpecular);");
		source.AppendLine("    float4 materialDiffuse = SelectMaterial((uint)MaterialSources.y, MaterialDiffuse, vertexDiffuse, vertexSpecular);");
		source.AppendLine("    float4 materialSpecular = SelectMaterial((uint)MaterialSources.z, MaterialSpecular, vertexDiffuse, vertexSpecular);");
		source.AppendLine("    float4 materialEmissive = SelectMaterial((uint)MaterialSources.w, MaterialEmissive, vertexDiffuse, vertexSpecular);");
		source.AppendLine("    float4 lightingDiffuse;");
		source.AppendLine("    float4 lightingSpecular;");
		source.AppendLine("    if (LightingFlags.x < 0.5)");
		source.AppendLine("    {");
		source.AppendLine("        lightingDiffuse = " + (format.HasDiffuse ? "vertexDiffuse" : "MaterialDiffuse") + ";");
		source.AppendLine("        lightingSpecular = vertexSpecular;");
		source.AppendLine("    }");
		source.AppendLine("    else");
		source.AppendLine("    {");
		source.AppendLine("        float3 ambient = GlobalAmbient.rgb;");
		source.AppendLine("        float3 diffuse = float3(0.0, 0.0, 0.0);");
		source.AppendLine("        float3 specular = float3(0.0, 0.0, 0.0);");
		source.AppendLine("        [unroll]");
		source.AppendLine("        for (int lightIndex = 0; lightIndex < 8; lightIndex++)");
		source.AppendLine("        {");
		source.AppendLine("            uint lightType = (uint)Lights[lightIndex].Type.x;");
		source.AppendLine("            if (lightType == 0) continue;");
		source.AppendLine("            float3 lightAmbient = Lights[lightIndex].Ambient.rgb;");
		source.AppendLine("            float3 lightDiffuse = Lights[lightIndex].Diffuse.rgb;");
		source.AppendLine("            float3 lightSpecular = Lights[lightIndex].Specular.rgb;");
		source.AppendLine("            float attenuation = 1.0;");
		source.AppendLine("            float3 direction;");
		source.AppendLine("            if (lightType == 3)");
		source.AppendLine("            {");
		source.AppendLine("                direction = -SafeNormalize(Lights[lightIndex].Direction.xyz);");
		source.AppendLine("            }");
		source.AppendLine("            else");
		source.AppendLine("            {");
		source.AppendLine("                float3 toLight = Lights[lightIndex].Position.xyz - viewPosition.xyz;");
		source.AppendLine("                float distanceToLight = length(toLight);");
		source.AppendLine("                if (distanceToLight > Lights[lightIndex].Position.w) continue;");
		source.AppendLine("                direction = toLight / max(distanceToLight, 0.000001);");
		source.AppendLine("                float3 attenuationFactors = Lights[lightIndex].Attenuation.xyz;");
		source.AppendLine("                attenuation = 1.0 / max(dot(attenuationFactors, float3(1.0, distanceToLight, distanceToLight * distanceToLight)), 0.000001);");
		source.AppendLine("                if (lightType == 2)");
		source.AppendLine("                {");
		source.AppendLine("                    float cone = dot(-direction, SafeNormalize(Lights[lightIndex].Direction.xyz));");
		source.AppendLine("                    float inner = Lights[lightIndex].Attenuation.w;");
		source.AppendLine("                    float outer = Lights[lightIndex].Spot.x;");
		source.AppendLine("                    if (cone <= outer) continue;");
		source.AppendLine("                    if (cone < inner) attenuation *= pow(max((cone - outer) / max(inner - outer, 0.000001), 0.000001), Lights[lightIndex].Spot.y);");
		source.AppendLine("                }");
		source.AppendLine("            }");
		source.AppendLine("            ambient += lightAmbient * attenuation;");
		if (format.HasNormal)
		{
			source.AppendLine("            float normalDotLight = dot(viewNormal, direction);");
			source.AppendLine("            diffuse += saturate(normalDotLight) * lightDiffuse * attenuation;");
			source.AppendLine("            if (LightingFlags.y > 0.5 && normalDotLight > 0.0)");
			source.AppendLine("            {");
			source.AppendLine("                float3 halfway = LightingFlags.w > 0.5 ? SafeNormalize(SafeNormalize(-viewPosition.xyz) + direction) : SafeNormalize(float3(0.0, 0.0, 1.0) + direction);");
			source.AppendLine("                specular += pow(max(saturate(dot(viewNormal, halfway)), 0.000001), MaterialPower.x) * lightSpecular * attenuation;");
			source.AppendLine("            }");
		}
		source.AppendLine("        }");
		source.AppendLine("        lightingDiffuse = float4(saturate(materialAmbient.rgb * ambient + materialDiffuse.rgb * diffuse + materialEmissive.rgb), materialDiffuse.a);");
		source.AppendLine("        lightingSpecular = LightingFlags.y > 0.5 ? float4(saturate(materialSpecular.rgb * specular), materialSpecular.a) : vertexSpecular;");
		source.AppendLine("    }");
	}

	private static void AppendTextureCoordinates(StringBuilder source, FlexibleVertexFormat format)
	{
		for (int stage = 0; stage < StageCount; stage++)
		{
			source.AppendLine($"    float4 stageCoordinate{stage} = SelectTextureCoordinate(input, (uint)StageFlags[{stage}].y & 0xFFFF);");
			source.AppendLine($"    uint generation{stage} = (uint)StageFlags[{stage}].y & 0xFFFF0000;");
			if (format.HasNormal)
			{
				source.AppendLine($"    if (generation{stage} == 0x10000) stageCoordinate{stage} = float4(SafeNormalize(viewNormal), 1.0);");
				source.AppendLine($"    else if (generation{stage} == 0x30000) stageCoordinate{stage} = float4(reflect(SafeNormalize(viewPosition.xyz), SafeNormalize(viewNormal)), 1.0);");
			}
			source.AppendLine($"    if (generation{stage} == 0x20000) stageCoordinate{stage} = viewPosition;");
			source.AppendLine($"    uint transformFlags{stage} = (uint)StageFlags[{stage}].x;");
			source.AppendLine($"    if ((transformFlags{stage} & 0xFF) != 0) stageCoordinate{stage} = mul(stageCoordinate{stage}, TextureTransform{stage});");
			source.AppendLine($"    if ((transformFlags{stage} & 0x100) != 0) stageCoordinate{stage}.xyz /= (abs(stageCoordinate{stage}.w) > 0.000001 ? stageCoordinate{stage}.w : 1.0);");
			source.AppendLine($"    if ((transformFlags{stage} & 0xFF) == 1) stageCoordinate{stage}.y = 0.0;");
			source.AppendLine($"    output.texcoord{stage} = stageCoordinate{stage};");
		}
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
		int weightCount = Math.Min(format.ExplicitWeightCount, 3);
		for (int index = 0; index < weightCount; index++)
		{
			elements.Add(new InputElementDescription("BLENDWEIGHT", (uint)index, Format.R32_Float, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		offset += (format.BlendValueCount - weightCount - (format.PackedIndices ? 1 : 0)) * 4;
		if (format.PackedIndices)
		{
			elements.Add(new InputElementDescription("BLENDINDICES", 0, Format.R8G8B8A8_UInt, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		if (format.HasNormal)
		{
			elements.Add(new InputElementDescription("NORMAL", 0, Format.R32G32B32_Float, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 12;
		}
		if (format.HasPointSize)
			offset += 4;
		if (format.HasDiffuse)
		{
			elements.Add(new InputElementDescription("COLOR", 0, Format.R8G8B8A8_UNorm, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		if (format.HasSpecular)
		{
			elements.Add(new InputElementDescription("COLOR", 1, Format.R8G8B8A8_UNorm, (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += 4;
		}
		for (int index = 0; index < Math.Min(format.TextureCoordinateCount, StageCount); index++)
		{
			elements.Add(new InputElementDescription("TEXCOORD", (uint)index, TextureCoordinateFormat(format.GetTextureCoordinateSize(index)), (uint)offset, 0, InputClassification.PerVertexData, 0));
			offset += format.GetTextureCoordinateSize(index) * 4;
		}
		return [.. elements];
	}

	private static Format TextureCoordinateFormat(int size) => size switch
	{
		1 => Format.R32_Float,
		3 => Format.R32G32B32_Float,
		4 => Format.R32G32B32A32_Float,
		_ => Format.R32G32_Float,
	};

	private static string TextureCoordinateType(int size) => size switch
	{
		1 => "float",
		3 => "float3",
		4 => "float4",
		_ => "float2",
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
