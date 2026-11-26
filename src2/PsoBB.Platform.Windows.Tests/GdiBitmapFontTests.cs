using Microsoft.Win32;
using PsoBB.Graphics;
using PsoBB.Text;

namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// Checks the five GDI face records, the registry face name, one-character rasterisation, alpha thresholds,
/// advances, wide-character face selection, atlas construction and release.
/// </summary>
public sealed class GdiBitmapFontTests
{
	[Fact]
	public void DescriptorsMatchTheFiveImageRecords()
	{
		IReadOnlyList<FontDescriptor> faces = GdiFontFaces.CreateDescriptors("Configured");

		Assert.Equal(5, faces.Count);
		Assert.Equal(new FontDescriptor(600, 0x00, 7, 0, 4, 2, "Configured"), faces[0]);
		Assert.Equal(new FontDescriptor(600, 0x80, 7, 0, 4, 1, "Configured"), faces[1]);
		Assert.Equal(new FontDescriptor(600, 0x86, 7, 0, 4, 1, "Configured"), faces[2]);
		Assert.Equal(new FontDescriptor(600, 0x88, 7, 0, 4, 1, "Configured"), faces[3]);
		Assert.Equal(new FontDescriptor(600, 0x81, 7, 0, 4, 1, "Configured"), faces[4]);
	}

	[Fact]
	public void FaceNameComesFromTheConfiguredRegistryValue()
	{
		string keyPath = UniqueKeyPath();
		try
		{
			using (RegistryKey key = Registry.CurrentUser.CreateSubKey(keyPath))
				key.SetValue(GdiFontFaces.FaceValueName, "Tahoma", RegistryValueKind.String);
			Assert.Equal("Tahoma", GdiFontFaces.ReadFaceName(keyPath));
		}
		finally
		{
			Registry.CurrentUser.DeleteSubKeyTree(keyPath, throwOnMissingSubKey: false);
		}
	}

	[Fact]
	public void MissingRegistryKeyLeavesTheFaceNameEmpty()
	{
		Assert.Equal(string.Empty, GdiFontFaces.ReadFaceName(UniqueKeyPath()));
	}

	[Fact]
	public void RasterizedGlyphUsesOnlyTheFourAlphaLevels()
	{
		using GdiGlyphRasterizer rasterizer = new(GdiFontFaces.CreateDescriptors(string.Empty));
		GdiRasterizedGlyph glyph = rasterizer.Rasterize('A');

		Assert.Equal(GdiGlyphRasterizer.GlyphSize * GdiGlyphRasterizer.GlyphSize, glyph.Coverage.Length);
		Assert.InRange(glyph.Extent, 1, GdiGlyphRasterizer.GlyphSize);
		Assert.Contains(glyph.Coverage, value => value == 0x00);
		Assert.Contains(glyph.Coverage, value => value == 0xFF);
		Assert.All(glyph.Coverage, value => Assert.Contains(value, new byte[] { 0x00, 0x55, 0xAA, 0xFF }));
	}

	[Theory]
	[InlineData(0x000000u, 0x00)]
	[InlineData(0x555555u, 0x55)]
	[InlineData(0x555556u, 0xAA)]
	[InlineData(0xAAAAAAu, 0xAA)]
	[InlineData(0xAAAAABu, 0xFF)]
	[InlineData(0xFFFFFFu, 0xFF)]
	public void ThresholdMatchesTheOriginalThreeWayComparison(uint bgr, byte expected) => Assert.Equal(expected, GdiGlyphRasterizer.Threshold(bgr));

	[Theory]
	[InlineData('\uDFFF', '\uDFFF')]
	[InlineData('\uE000', '\u00E0')]
	[InlineData('\uFFFF', '\u20DF')]
	public void CodeUnitsAboveDFFFUseTheOriginalGlyphCacheMapping(char value, char expected) => Assert.Equal(expected, GdiGlyphRasterizer.MapRasterCode(value));

	[Fact]
	public void MappedCodeUnitsRasteriseTheAdjustedCharacter()
	{
		using GdiGlyphRasterizer rasterizer = new(GdiFontFaces.CreateDescriptors(string.Empty));
		GdiRasterizedGlyph high = rasterizer.Rasterize('\uE000');
		GdiRasterizedGlyph mapped = rasterizer.Rasterize('\u00E0');

		Assert.Equal(mapped.Extent, high.Extent);
		Assert.Equal(mapped.Coverage, high.Coverage);
	}

	[Fact]
	public void AdvanceIsTheMeasuredExtentCappedAtFourteen()
	{
		using GdiGlyphRasterizer rasterizer = new(GdiFontFaces.CreateDescriptors(string.Empty));

		foreach (char value in "Wim .")
		{
			int extent = rasterizer.MeasureCharacter(value);
			Assert.InRange(extent, 0, GdiGlyphRasterizer.GlyphSize);
			Assert.Equal(Math.Min(GdiGlyphRasterizer.GlyphSize, extent), rasterizer.GetAdvance(value));
		}
		Assert.Equal(GdiGlyphRasterizer.GlyphSize, rasterizer.GetAdvance('\t'));
		Assert.Equal(GdiGlyphRasterizer.GlyphSize, rasterizer.GetAdvance('\u3042'));
		Assert.Equal(GdiGlyphRasterizer.GlyphSize, rasterizer.GetAdvance('\uD83D'));
	}

	[Fact]
	public void WideCodeUnitsSelectTheConfiguredFace()
	{
		using GdiGlyphRasterizer rasterizer = new(GdiFontFaces.CreateDescriptors(string.Empty), wideAlphabetType: 2);

		Assert.Equal(0, rasterizer.GetFaceIndex('A'));
		Assert.Equal(0, rasterizer.GetFaceIndex('\u00E9'));
		Assert.Equal(2, rasterizer.GetFaceIndex('\u3042'));
		Assert.Equal(2, rasterizer.GetFaceIndex('\uD83D'));
	}

	[Fact]
	public void BuilderPacksTheRasterizedGlyphAndTheFactoryReusesThePortableTypes()
	{
		GdiTestRenderer renderer = new();
		char[] characters = ['A', 'B', ' ', '[', ']', 'd'];
		using GdiBitmapFont gdiFont = GdiBitmapFont.Create(renderer, GdiFontFaces.CreateDescriptors(string.Empty), characters);

		Assert.Equal(3, gdiFont.Textures.Count);
		Assert.Equal(5, gdiFont.Faces.Count);
		Assert.Same(gdiFont.Font, gdiFont.Textures.Font);
		Assert.Same(gdiFont.Font, gdiFont.Text.Font);
		Assert.Equal(3, renderer.Textures.Count);
		Assert.All(renderer.Textures, texture => Assert.Equal(BitmapFont.PageSize, texture.Width));
		FontGlyph a = gdiFont.Font.GetGlyph('A');
		Assert.InRange(a.Width, 1, BitmapFont.GlyphHeight);
		Assert.Equal(a.Width, a.Advance);
		Assert.Equal(characters.Length, gdiFont.Font.Glyphs.Count);
		Assert.Contains(gdiFont.Font.Pages[0].Pixels.Span.ToArray(), value => value == 0xFF);
	}

	[Fact]
	public void DefaultFactoryBuildsThePrintableAsciiFont()
	{
		using GdiBitmapFont gdiFont = GdiBitmapFont.Create(new GdiTestRenderer());

		Assert.Equal(0x5F, gdiFont.Font.Glyphs.Count);
		Assert.Equal(GdiFontFaces.ReadFaceName(), gdiFont.Faces[0].FaceName);
		Assert.Equal(0, gdiFont.Font.GetAlphabetType('A'));
		Assert.InRange(gdiFont.Font.GetGlyph('A').Width, 1, BitmapFont.GlyphHeight);
	}

	[Fact]
	public void DisposeReleasesTheRasterizerAndTheUploadedTextures()
	{
		GdiTestRenderer renderer = new();
		GdiBitmapFont gdiFont = GdiBitmapFont.Create(renderer, GdiFontFaces.CreateDescriptors(string.Empty), ['A']);
		gdiFont.Dispose();
		gdiFont.Dispose();
		Assert.Equal(3, renderer.Textures.Sum(texture => texture.DisposeCount));

		GdiGlyphRasterizer rasterizer = new(GdiFontFaces.CreateDescriptors(string.Empty));
		rasterizer.Dispose();
		rasterizer.Dispose();
		Assert.Throws<ObjectDisposedException>(() => rasterizer.Rasterize('A'));
		Assert.Throws<ObjectDisposedException>(() => rasterizer.MeasureCharacter('A'));
	}

	private static string UniqueKeyPath() => $"PsoBB.Tests.{Guid.NewGuid():N}";

	private sealed class GdiTestRenderer : IRenderer
	{
		internal List<GdiTestTexture> Textures { get; } = [];

		public RenderSettings Settings => RenderSettings.Default;

		public void BeginFrame()
		{
		}

		public void SetViewport(int x, int y, int width, int height)
		{
		}

		public void Clear(uint color)
		{
		}

		public void SetTransform(TransformKind kind, in System.Numerics.Matrix4x4 transform)
		{
		}

		public void SetRenderState(uint state, uint value)
		{
		}

		public void SetTexture(int stage, ITexture? texture)
		{
		}

		public void Draw(PrimitiveType primitive, int primitiveCount, ReadOnlySpan<byte> vertices, int stride, uint vertexFormat)
		{
		}

		public void EndFrame()
		{
		}

		public ITexture CreateTexture(int width, int height, ReadOnlySpan<byte> pixels, int stride)
		{
			GdiTestTexture texture = new(width, height);
			Textures.Add(texture);
			return texture;
		}

		public void Dispose()
		{
		}
	}

	private sealed class GdiTestTexture : ITexture
	{
		internal GdiTestTexture(int width, int height)
		{
			Width = width;
			Height = height;
		}

		public int Width { get; }

		public int Height { get; }

		internal int DisposeCount { get; private set; }

		public void Update(ReadOnlySpan<byte> pixels, int stride)
		{
		}

		public void Dispose() => DisposeCount++;
	}
}
