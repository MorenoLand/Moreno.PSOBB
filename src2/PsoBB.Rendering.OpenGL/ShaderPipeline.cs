using System.Text;
using Silk.NET.OpenGL;

namespace PsoBB.Rendering.OpenGL;

/// <summary>
/// Compiles and caches the vertex pipeline for each flexible vertex format.
/// </summary>
internal sealed class ShaderPipeline : IDisposable
{
	private const string PixelShaderSource = """
		#version 330 core

		uniform sampler2D diffuseTexture;
		uniform vec4 fogColor;
		uniform vec4 fogParameters;
		uniform vec4 alphaTest;

		in vec4 vertexColor;
		in vec2 textureCoordinate;
		in float fogDepth;
		out vec4 fragmentColor;

		void main()
		{
		    vec4 color = vertexColor * texture(diffuseTexture, textureCoordinate);
		    if (alphaTest.z > 0.5)
		    {
		        uint function = uint(alphaTest.y);
		        bool accepted;
		        if (function == 1u) accepted = false;
		        else if (function == 2u) accepted = color.a < alphaTest.x;
		        else if (function == 3u) accepted = color.a == alphaTest.x;
		        else if (function == 4u) accepted = color.a <= alphaTest.x;
		        else if (function == 5u) accepted = color.a > alphaTest.x;
		        else if (function == 6u) accepted = color.a != alphaTest.x;
		        else if (function == 7u) accepted = color.a >= alphaTest.x;
		        else accepted = true;
		        if (!accepted)
		            discard;
		    }
		    if (fogParameters.w > 0.5)
		    {
		        float fog;
		        if (fogParameters.w < 1.5)
		            fog = exp(-fogParameters.z * fogDepth);
		        else if (fogParameters.w < 2.5)
		        {
		            float density = fogParameters.z * fogDepth;
		            fog = exp(-density * density);
		        }
		        else
		            fog = (fogParameters.y - fogDepth) / max(fogParameters.y - fogParameters.x, 0.000001);
		        color.rgb = mix(color.rgb, fogColor.rgb, clamp(fog, 0.0, 1.0));
		    }
		    fragmentColor = color;
		}
		""";

	private readonly GL _gl;
	private readonly Dictionary<uint, VertexPipeline> _cache = [];
	private bool _disposed;

	/// <summary>
	/// Creates the pipeline cache.
	/// </summary>
	/// <param name="gl">The context that creates the shaders and programs.</param>
	public ShaderPipeline(GL gl)
	{
		ArgumentNullException.ThrowIfNull(gl);
		_gl = gl;
	}

	/// <summary>
	/// Gets or creates the vertex shader and program for a flexible vertex format.
	/// </summary>
	/// <param name="vertexFormat">The original flexible vertex format code.</param>
	/// <param name="format">The parsed format.</param>
	/// <returns>The vertex pipeline.</returns>
	public VertexPipeline Get(uint vertexFormat, FlexibleVertexFormat format)
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_cache.TryGetValue(vertexFormat, out VertexPipeline? pipeline))
			return pipeline;
		pipeline = Create(CreateVertexShaderSource(format), format);
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
			_gl.DeleteProgram(pipeline.Program);
		_cache.Clear();
	}

	private static VertexAttribute[] CreateAttributes(FlexibleVertexFormat format)
	{
		List<VertexAttribute> attributes = [];
		int offset = 0;
		if (format.IsPreTransformed)
		{
			attributes.Add(new VertexAttribute(0, 4, VertexAttribPointerType.Float, false, offset));
			offset += 16;
		}
		else
		{
			attributes.Add(new VertexAttribute(0, 3, VertexAttribPointerType.Float, false, offset));
			offset += 12;
		}
		for (int index = 0; index < format.BlendWeightCount; index++)
		{
			bool packed = index == format.BlendWeightCount - 1 && format.PackedLastWeight;
			attributes.Add(new VertexAttribute((uint)(index + 1), packed ? 4 : 1, packed ? VertexAttribPointerType.UnsignedByte : VertexAttribPointerType.Float, packed, offset));
			offset += 4;
		}
		if (format.HasNormal)
			offset += 12;
		if (format.HasPointSize)
			offset += 4;
		if (format.HasDiffuse)
		{
			attributes.Add(new VertexAttribute(6, 4, VertexAttribPointerType.UnsignedByte, true, offset));
			offset += 4;
		}
		if (format.HasSpecular)
			offset += 4;
		if (format.TextureCoordinateCount > 0)
			attributes.Add(new VertexAttribute(7, format.TextureCoordinateSize, VertexAttribPointerType.Float, false, offset));
		return [.. attributes];
	}

	private VertexPipeline Create(string vertexSource, FlexibleVertexFormat format)
	{
		uint vertexShader = CompileStage(ShaderType.VertexShader, vertexSource);
		uint fragmentShader;
		try
		{
			fragmentShader = CompileStage(ShaderType.FragmentShader, PixelShaderSource);
		}
		catch
		{
			_gl.DeleteShader(vertexShader);
			throw;
		}
		uint program = _gl.CreateProgram();
		try
		{
			_gl.AttachShader(program, vertexShader);
			_gl.AttachShader(program, fragmentShader);
			_gl.LinkProgram(program);
			_gl.GetProgram(program, ProgramPropertyARB.LinkStatus, out int status);
			if (status == 0)
				throw new InvalidOperationException($"The OpenGL program could not be linked: {_gl.GetProgramInfoLog(program)}");
			return new VertexPipeline(
				program,
				_gl.GetUniformLocation(program, "World"),
				_gl.GetUniformLocation(program, "View"),
				_gl.GetUniformLocation(program, "Projection"),
				_gl.GetUniformLocation(program, "TextureTransform0"),
				_gl.GetUniformLocation(program, "screenSize"),
				_gl.GetUniformLocation(program, "fogColor"),
				_gl.GetUniformLocation(program, "fogParameters"),
				_gl.GetUniformLocation(program, "alphaTest"),
				_gl.GetUniformLocation(program, "fogRange"),
				_gl.GetUniformLocation(program, "diffuseTexture"),
				CreateAttributes(format));
		}
		catch
		{
			_gl.DeleteProgram(program);
			throw;
		}
		finally
		{
			_gl.DetachShader(program, vertexShader);
			_gl.DetachShader(program, fragmentShader);
			_gl.DeleteShader(vertexShader);
			_gl.DeleteShader(fragmentShader);
		}
	}

	private uint CompileStage(ShaderType stage, string source)
	{
		uint shader = _gl.CreateShader(stage);
		_gl.ShaderSource(shader, source);
		_gl.CompileShader(shader);
		_gl.GetShader(shader, ShaderParameterName.CompileStatus, out int status);
		if (status == 0)
		{
			string log = _gl.GetShaderInfoLog(shader);
			_gl.DeleteShader(shader);
			throw new InvalidOperationException($"The OpenGL {stage} shader could not be compiled: {log}");
		}
		return shader;
	}

	private static string CreateVertexShaderSource(FlexibleVertexFormat format)
	{
		StringBuilder source = new();
		source.AppendLine("#version 330 core");
		source.AppendLine("uniform mat4 World;");
		source.AppendLine("uniform mat4 View;");
		source.AppendLine("uniform mat4 Projection;");
		source.AppendLine("uniform mat4 TextureTransform0;");
		source.AppendLine("uniform vec4 screenSize;");
		source.AppendLine("uniform vec4 fogRange;");
		source.AppendLine(format.IsPreTransformed ? "layout(location = 0) in vec4 position;" : "layout(location = 0) in vec3 position;");
		for (int index = 0; index < format.BlendWeightCount; index++)
			source.AppendLine($"layout(location = {index + 1}) in float weight{index};");
		if (format.HasDiffuse)
			source.AppendLine("layout(location = 6) in vec4 color;");
		if (format.TextureCoordinateCount > 0)
			source.AppendLine("layout(location = 7) in vec4 texcoord;");
		source.AppendLine("out vec4 vertexColor;");
		source.AppendLine("out vec2 textureCoordinate;");
		source.AppendLine("out float fogDepth;");
		source.AppendLine("void main()");
		source.AppendLine("{");
		source.AppendLine("    vec3 positionValue = position.xyz;");
		if (format.BlendWeightCount > 0)
		{
			source.Append("    float weightSum = weight0");
			for (int index = 1; index < format.BlendWeightCount; index++)
				source.Append($" + weight{index}");
			source.AppendLine(";");
			source.AppendLine("    positionValue *= weightSum;");
		}
		if (format.IsPreTransformed)
		{
			source.AppendLine("    gl_Position = vec4(positionValue.x * screenSize.z * 2.0 - 1.0, 1.0 - positionValue.y * screenSize.w * 2.0, positionValue.z * 2.0 - 1.0, 1.0);");
			source.AppendLine("    fogDepth = 0.0;");
		}
		else
		{
			source.AppendLine("    vec4 worldPosition = World * vec4(positionValue, 1.0);");
			source.AppendLine("    vec4 viewPosition = View * worldPosition;");
			source.AppendLine("    vec4 clipPosition = Projection * viewPosition;");
			source.AppendLine("    gl_Position = vec4(clipPosition.x, clipPosition.y, clipPosition.z * 2.0 - clipPosition.w, clipPosition.w);");
			source.AppendLine("    fogDepth = fogRange.x > 0.5 ? length(viewPosition.xyz) : viewPosition.z;");
		}
		source.AppendLine(format.HasDiffuse ? "    vertexColor = color.zyxw;" : "    vertexColor = vec4(1.0, 1.0, 1.0, 1.0);");
		source.AppendLine(format.TextureCoordinateCount > 0 ? "    vec2 coordinate = texcoord.xy;" : "    vec2 coordinate = vec2(0.0, 0.0);");
		source.AppendLine("    vec4 transformed = TextureTransform0 * vec4(coordinate, 0.0, 1.0);");
		source.AppendLine("    textureCoordinate = transformed.xy / (abs(transformed.w) > 0.000001 ? transformed.w : 1.0);");
		source.AppendLine("}");
		return source.ToString();
	}
}

/// <summary>A vertex program and the uniforms and attributes one flexible vertex format uses.</summary>
internal sealed record VertexPipeline(
	uint Program,
	int World,
	int View,
	int Projection,
	int TextureTransform0,
	int ScreenSize,
	int FogColor,
	int FogParameters,
	int AlphaTest,
	int FogRange,
	int DiffuseTexture,
	VertexAttribute[] Attributes);

/// <summary>One vertex attribute read from the client's vertex bytes.</summary>
internal readonly record struct VertexAttribute(uint Location, int ComponentCount, VertexAttribPointerType Type, bool Normalized, int Offset);
