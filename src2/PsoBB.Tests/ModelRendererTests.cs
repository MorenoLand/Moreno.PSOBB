using System.Buffers.Binary;
using PsoBB.Graphics;
using PsoBB.Graphics.Textures;
using PsoBB.Imaging;
using PsoBB.Mathematics;
using PsoBB.Models;
using PsoBB.Rendering;

namespace PsoBB.Tests;

/// <summary>
/// Checks model surface extraction, node hierarchy transforms, NMDM motion poses, texture binding and
/// scene draw submission.
/// </summary>
public sealed class ModelRendererTests
{
	/// <summary>
	/// A mesh becomes one triangle-strip surface that keeps the stored vertex bytes, flexible vertex
	/// format and strip indices.
	/// </summary>
	[Fact]
	public void MeshBecomesAStripSurfaceWithTheOriginalVertexLayout()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.ModelCore());
		using ModelRenderer renderer = new();
		ModelSurface surface = Assert.Single(renderer.Build(model, Matrix4x4.Identity));
		Assert.Equal(0x112u, surface.VertexFormat);
		Assert.Equal(32, surface.VertexBuffer.Stride);
		Assert.Equal(64, surface.VertexBuffer.Data.Length);
		Assert.Equal(new ushort[] { 0, 1, 0 }, surface.Indices.ToArray());
		Assert.False(surface.IsAlpha);
		Assert.Equal(0, surface.Material.TextureIndex);
		Assert.Equal(ExpectedRootTransform(), surface.Transform);
	}

	/// <summary>
	/// A type-seven node draws its mesh without applying its own stored transform.
	/// </summary>
	[Fact]
	public void TypeSevenNodeKeepsTheParentTransform()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.RootOffset), 7);
		NinjaModel model = NinjaModelReader.Read(body);
		using ModelRenderer renderer = new();
		Matrix4x4 world = new(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 2, 3, 4, 1);
		ModelSurface surface = Assert.Single(renderer.Build(model, world));
		Assert.Equal(world, surface.Transform);
	}

	/// <summary>
	/// A child mesh receives the parent transform before its own local transform.
	/// </summary>
	[Fact]
	public void ChildMeshReceivesTheCombinedNodeTransform()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.ChildOffset + 4), ModelTestData.MeshOffset);
		NinjaModel model = NinjaModelReader.Read(body);
		using ModelRenderer renderer = new();
		IReadOnlyList<ModelSurface> surfaces = renderer.Build(model, Matrix4x4.Identity);
		Assert.Equal(2, surfaces.Count);
		Assert.Equal(ExpectedRootTransform(), surfaces[0].Transform);
		TransformationStack stack = new();
		stack.Push(Matrix4x4.Identity);
		stack.PushCopy();
		ApplyNode(stack, model.RootNodes[0]);
		stack.PushCopy();
		ApplyNode(stack, model.RootNodes[0].Children[0]);
		Assert.Equal(stack.Current, surfaces[1].Transform);
	}

	/// <summary>
	/// The root node consumes the first motion bone record and its sampled translation, rotation and
	/// scale reach the world transform.
	/// </summary>
	[Fact]
	public void MotionPoseReachesTheNodeTransform()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.ModelCore());
		NinjaMotion motion = NinjaMotion.Parse(ModelTestData.MotionCore(), 1);
		using ModelRenderer renderer = new();
		ModelSurface surface = Assert.Single(renderer.Build(model, Matrix4x4.Identity, motion, 5.0f));
		TransformationStack stack = new();
		stack.Push(Matrix4x4.Identity);
		stack.PushCopy();
		stack.Translate(new Vector3(5.0f, 10.0f, 15.0f));
		stack.RotateEuler(0x1000, 0x2000, -0x1000, false);
		stack.Scale(new Vector3(1.5f, 2.0f, 2.5f));
		Assert.Equal(stack.Current, surface.Transform);
	}

	/// <summary>
	/// A frame before the first motion keyframe samples the first keyframe, not the static node pose.
	/// </summary>
	[Fact]
	public void MotionFrameZeroReplacesTheStaticPose()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.ModelCore());
		NinjaMotion motion = NinjaMotion.Parse(ModelTestData.MotionCore(), 1);
		using ModelRenderer renderer = new();
		ModelSurface surface = Assert.Single(renderer.Build(model, Matrix4x4.Identity, motion, 0.0f));
		TransformationStack stack = new();
		stack.Push(Matrix4x4.Identity);
		stack.PushCopy();
		stack.Translate(new Vector3(0, 0, 0));
		stack.RotateEuler(0, 0, 0, false);
		stack.Scale(new Vector3(1.0f, 1.0f, 1.0f));
		Assert.Equal(stack.Current, surface.Transform);
	}

	/// <summary>
	/// Opaque and translucent index buffers become separate scene passes.
	/// </summary>
	[Fact]
	public void OpaqueAndTranslucentBuffersSplitIntoScenePasses()
	{
		NinjaModel model = NinjaModelReader.Read(ModelTestData.AlphaModelCore());
		using ModelRenderer renderer = new();
		IReadOnlyList<ModelSurface> surfaces = renderer.Build(model, Matrix4x4.Identity);
		Assert.Equal(2, surfaces.Count);
		RenderScene scene = renderer.BuildScene(model, Matrix4x4.Identity, SceneCamera.Default);
		Assert.Single(scene.Opaque);
		Assert.Single(scene.Transparent);
		Assert.False(surfaces[0].IsAlpha);
		Assert.True(surfaces[1].IsAlpha);
	}

	/// <summary>
	/// The material texture index resolves through the texture list and the uploaded texture reaches
	/// the renderer before the indexed strip is drawn.
	/// </summary>
	[Fact]
	public void MaterialTextureIsBoundThroughTheCache()
	{
		using RecordingRenderer recording = new(RenderSettings.Default);
		using TextureCache cache = new(recording);
		XvmTexture texture = Assert.Single(XvmTextureReader.Read(TextureTestData.Xvm(
		[
			TextureTestData.Xvr(XvmTextureFormat.Bgra8888, 0x101, 2, 2, [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]),
		])));
		Assert.True(cache.Register(texture));
		using ModelRenderer renderer = new(cache);
		NinjaModel model = NinjaModelReader.Read(ModelTestData.ModelCore());
		IReadOnlyList<SceneSurface> surfaces = renderer.BuildSceneSurfaces(
			model,
			Matrix4x4.Identity,
			null,
			0.0f,
			[new NinjaTextureReference("astark", texture.GlobalIndex, texture.Width, texture.Height)]);
		SceneSurface surface = Assert.Single(surfaces);
		Assert.NotNull(surface.Texture);
		Assert.Equal(1, cache.LoadedCount);
		SceneRenderer sceneRenderer = new();
		recording.BeginFrame();
		sceneRenderer.Render(recording, new RenderScene { Opaque = surfaces });
		recording.EndFrame();
		Assert.Contains("Texture 0:2x2", recording.Commands);
		Assert.Contains("TextureStage 0:13:1", recording.Commands);
		Assert.Contains("TextureStage 0:14:1", recording.Commands);
		Assert.Contains("Draw TriangleStrip 1 32 112", recording.Commands);
		Assert.Equal(3 * 32, Assert.Single(recording.DrawVertices).Length);
	}

	/// <summary>
	/// Address-mode render-state commands reach the scene surface.
	/// </summary>
	[Fact]
	public void TextureAddressStateReachesTheSceneSurface()
	{
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.RenderStateOffset), 4);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.RenderStateOffset + 4), 3);
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.RenderStateOffset + 8), 2);
		NinjaModel model = NinjaModelReader.Read(body);
		using ModelRenderer renderer = new();
		ModelSurface surface = Assert.Single(renderer.Build(model, Matrix4x4.Identity));
		Assert.Equal(3u, surface.Material.AddressU);
		Assert.Equal(2u, surface.Material.AddressV);
		SceneSurface sceneSurface = surface.CreateSceneSurface(null);
		Assert.Equal(3u, sceneSurface.AddressU);
		Assert.Equal(2u, sceneSurface.AddressV);
	}

	/// <summary>
	/// A model without index data produces no surfaces, and a null model is rejected.
	/// </summary>
	[Fact]
	public void EmptyAndMalformedModelsDoNotSubmitDraws()
	{
		using ModelRenderer renderer = new();
		Assert.Throws<ArgumentNullException>(() => renderer.Build(null!, Matrix4x4.Identity));
		byte[] body = ModelTestData.ModelCore();
		BinaryPrimitives.WriteUInt32LittleEndian(body.AsSpan(ModelTestData.IndexDescriptorOffset + 12), 0);
		NinjaModel model = NinjaModelReader.Read(body);
		Assert.Empty(renderer.Build(model, Matrix4x4.Identity));
		renderer.Dispose();
		Assert.Throws<ObjectDisposedException>(() => renderer.Build(model, Matrix4x4.Identity));
	}

	/// <summary>
	/// The original quaternion matrix places the second basis row on the third row for a quarter turn
	/// around the first axis.
	/// </summary>
	[Fact]
	public void QuaternionRotationBuildsTheOriginalBasis()
	{
		TransformationStack stack = new();
		double half = Math.Sqrt(0.5);
		stack.RotateQuaternion(new NinjaQuaternion((float)half, 0, 0, (float)half));
		Matrix4x4 matrix = stack.Current;
		Assert.Equal(1.0f, matrix.M11, 6);
		Assert.Equal(0.0f, matrix.M12, 6);
		Assert.Equal(0.0f, matrix.M13, 6);
		Assert.Equal(0.0f, matrix.M21, 6);
		Assert.Equal(0.0f, matrix.M22, 6);
		Assert.Equal(1.0f, matrix.M23, 6);
		Assert.Equal(0.0f, matrix.M31, 6);
		Assert.Equal(-1.0f, matrix.M32, 6);
		Assert.Equal(0.0f, matrix.M33, 6);
	}

	private static Matrix4x4 ExpectedRootTransform()
	{
		TransformationStack stack = new();
		stack.Push(Matrix4x4.Identity);
		stack.PushCopy();
		stack.Translate(new Vector3(1, 2, 3));
		stack.RotateEuler(0x1000, 0x2000, 0x3000, false);
		stack.Scale(new Vector3(1, 1, 1));
		return stack.Current;
	}

	private static void ApplyNode(TransformationStack stack, NinjaNode node)
	{
		stack.Translate(node.Position);
		stack.RotateEuler(node.RotationX, node.RotationY, node.RotationZ, (node.EvaluationFlags & 0x20) != 0);
		stack.Scale(node.Scale);
	}
}
