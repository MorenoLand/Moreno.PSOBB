using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Net.Patch;
using PsoBB.Scenes;
using PsoBB.Text;
using Xunit;

namespace PsoBB.Tests;

public sealed class PatchStatusScreenTests
{
	[Fact]
	public void FormatsTheTwoProgressLinesLikeTheOriginal()
	{
		Assert.Equal("data.bin (1234byte)...  7%", PatchStatusScreen.FormatFileLine("data.bin", 1234, 7));
		Assert.Equal("( 3 / 12)...100%", PatchStatusScreen.FormatTotalLine(3, 12, 100));
	}

	[Fact]
	public void DrawsSixBarStripsSixHousingsAndTheLabels()
	{
		using PatchStatusScreen screen = new(new Texture(), new Texture());
		UiDrawList draw = new();
		RecordingTextSurface surface = new();

		screen.Draw(draw, new PatchProgress(0, 0, 0, 0, 0, null, 0, 0, 0), CreateText(), surface);

		Assert.Equal(13, draw.Quads.Count);
		Assert.Equal(new Vector2(0f, 226f), draw.Quads[1].Position);
		Assert.Equal(new Vector2(256f, 26f), draw.Quads[1].Size);
		Assert.Equal(new Vector4(0f, 0.125f, 1f, 0.125f + 26f / 256f), draw.Quads[2].TextureCoordinates);
		Assert.Equal(new Vector2(512f, 330f), draw.Quads[6].Position);
		Assert.Equal(new Vector2(131f, 255f), draw.Quads[8].Position);
		Assert.Equal(new Vector2(352f, 32f), draw.Quads[8].Size);
		Assert.Equal(new Vector2(99f, 359f), draw.Quads[10].Position);
		Assert.Equal(["Current", "All"], surface.Draws.Select(entry => entry.Text));
		Assert.Equal(new Vector2(100f, 230f), surface.Draws[0].Position);
		Assert.Equal(new Vector2(100f, 334f), surface.Draws[1].Position);
	}

	[Fact]
	public void FillsFollowThePercentOnceTheFileIsNamed()
	{
		using PatchStatusScreen screen = new(new Texture(), new Texture());
		UiDrawList draw = new();
		RecordingTextSurface surface = new();

		screen.Draw(draw, new PatchProgress(0, 0, 50, 4, 2, "a.dat", 10, 5, 25), CreateText(), surface);

		Assert.Equal(13 + 3 + 3, draw.Quads.Count);
		UiQuad fileMiddle = draw.Quads[15];
		Assert.Equal(new Vector2(116f, 260f), fileMiddle.Position);
		Assert.Equal(new Vector2(84f, 16f), fileMiddle.Size);
		Assert.Equal(new Vector2(200f, 260f), draw.Quads[14].Position);
		UiQuad totalMiddle = draw.Quads[18];
		Assert.Equal(new Vector2(116f, 364f), totalMiddle.Position);
		Assert.Equal(new Vector2(184f, 16f), totalMiddle.Size);
		Assert.Equal(4, surface.Draws.Count);
		Assert.Equal("a.dat (10byte)... 25%", surface.Draws[2].Text);
		Assert.Equal("( 2 /  4)... 50%", surface.Draws[3].Text);
	}

	[Fact]
	public void BackgroundCyclesThroughFiveFramesOfThreeTicks()
	{
		Assert.Equal(0, PatchStatusScreen.GetBackgroundFrame(0));
		Assert.Equal(0, PatchStatusScreen.GetBackgroundFrame(3));
		Assert.Equal(1, PatchStatusScreen.GetBackgroundFrame(4));
		Assert.Equal(4, PatchStatusScreen.GetBackgroundFrame(15));
		Assert.Equal(0, PatchStatusScreen.GetBackgroundFrame(16));
	}

	[Fact]
	public void BackgroundIsAFullScreenAdditiveQuadDrawnFirst()
	{
		Texture[] frames = [new(), new(), new(), new(), new()];
		using PatchStatusScreen screen = new(new Texture(), new Texture(), frames);
		UiDrawList draw = new();

		screen.Draw(draw, new PatchProgress(0, 0, 0, 0, 0, null, 0, 0, 0), CreateText(), new RecordingTextSurface(), 4);

		Assert.Equal(14, draw.Quads.Count);
		Assert.Null(draw.Quads[0].Texture);
		Assert.Equal(0xFF000000u, draw.Quads[0].Color);
		UiQuad background = draw.Quads[1];
		Assert.Same(frames[1], background.Texture);
		Assert.Equal(Vector2.Zero, background.Position);
		Assert.Equal(new Vector2(640f, 480f), background.Size);
		Assert.Equal(UiBlendMode.AdditiveAlpha, background.BlendMode);
	}

	[Fact]
	public void GridStripsUseTheTitleStripLayoutAdditively()
	{
		Texture[] grid = [new(), new(), new(), new(), new(), new(), new(), new()];
		using PatchStatusScreen screen = new(new Texture(), new Texture(), null, grid);
		UiDrawList draw = new();

		screen.Draw(draw, new PatchProgress(0, 0, 0, 0, 0, null, 0, 0, 0), CreateText(), new RecordingTextSurface());

		Assert.Equal(1 + 8 + 12, draw.Quads.Count);
		Assert.Equal(new Vector2(512f, 384f), draw.Quads[1].Position);
		Assert.Same(grid[7], draw.Quads[1].Texture);
		Assert.Equal(UiBlendMode.AdditiveAlpha, draw.Quads[1].BlendMode);
		Assert.Equal(new Vector2(0f, 0f), draw.Quads[6].Position);
		Assert.Same(grid[0], draw.Quads[6].Texture);
	}

	[Fact]
	public void ShortFillsAreSkipped()
	{
		using PatchStatusScreen screen = new(new Texture(), new Texture());
		UiDrawList draw = new();

		screen.Draw(draw, new PatchProgress(0, 0, 4, 1, 1, null, 0, 0, 0), CreateText(), new RecordingTextSurface());

		Assert.Equal(13, draw.Quads.Count);
	}

	[Fact]
	public void DisposeReleasesBothTextures()
	{
		Texture bars = new();
		Texture parts = new();
		PatchStatusScreen screen = new(bars, parts);

		screen.Dispose();
		screen.Dispose();

		Assert.Equal(1, bars.DisposeCount);
		Assert.Equal(1, parts.DisposeCount);
	}

	private static GameText CreateText()
	{
		int[] sizes = new int[42];
		sizes[PatchStatusScreen.LabelList] = 30;
		string[] values = [.. Enumerable.Repeat(string.Empty, 15)];
		values[PatchStatusScreen.CurrentStatusLabel] = "Current";
		values[PatchStatusScreen.AllStatusLabel] = "All";
		Dictionary<int, string[]> strings = new() { [PatchStatusScreen.LabelList] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
	}

	private sealed class Texture : ITexture
	{
		public int Width => 256;

		public int Height => 256;

		public int DisposeCount { get; private set; }

		public void Update(ReadOnlySpan<byte> pixels, int stride)
		{
		}

		public void Dispose() => DisposeCount++;
	}
}
