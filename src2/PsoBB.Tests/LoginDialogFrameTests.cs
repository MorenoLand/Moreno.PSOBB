using System.Numerics;
using PsoBB.Graphics;
using PsoBB.Gui;

namespace PsoBB.Tests;

/// <summary>
/// Checks the panel nine-slice, the header three-slice, the row strip and release order.
/// </summary>
public sealed class LoginDialogFrameTests
{
	[Fact]
	public void PanelNineSliceCoversTheWholeSkinRect()
	{
		CountingTexture page = new();
		using LoginDialogFrame frame = new() { PanelTexture = page };
		UiDrawList list = new();

		frame.Draw(list, -1);

		Assert.Equal(12, list.Quads.Count);
		UiQuad center = list.Quads[0];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition + new Vector2(LoginDialogFrame.PanelInset), center.Position);
		Assert.Equal(LoginDialogFrame.TitlePanelSize - new Vector2(LoginDialogFrame.PanelInset * 2f), center.Size);
		Assert.Equal(new Vector4(8f / 256f, 8f / 256f, 72f / 256f, 72f / 256f), center.TextureCoordinates);
		Assert.Same(page, center.Texture);
		UiQuad topLeft = list.Quads[5];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition, topLeft.Position);
		Assert.Equal(new Vector2(LoginDialogFrame.PanelInset), topLeft.Size);
		Assert.Equal(new Vector4(0f, 0f, 8f / 256f, 8f / 256f), topLeft.TextureCoordinates);
		UiQuad bottomRight = list.Quads[8];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition + LoginDialogFrame.TitlePanelSize - new Vector2(LoginDialogFrame.PanelInset), bottomRight.Position);
		Assert.Equal(new Vector4(8f / 256f, 8f / 256f, 0f, 0f), bottomRight.TextureCoordinates);
	}

	[Fact]
	public void HeaderUsesTheOrangeStripWithTheObservedWidthAndCaps()
	{
		CountingTexture page = new();
		using LoginDialogFrame frame = new() { PanelTexture = page };
		UiDrawList list = new();

		frame.Draw(list, -1);

		UiQuad left = list.Quads[9];
		Vector2 top = LoginDialogFrame.TitlePanelPosition - new Vector2(0f, LoginDialogFrame.HeaderOverhang);
		Assert.Equal(top, left.Position);
		Assert.Equal(new Vector2(12f, 25f), left.Size);
		Assert.Equal(new Vector4(0f, 126f / 256f, 12f / 256f, 151f / 256f), left.TextureCoordinates);
		UiQuad right = list.Quads[10];
		Assert.Equal(top + new Vector2(148f, 0f), right.Position);
		Assert.Equal(new Vector4(68f / 256f, 126f / 256f, 80f / 256f, 151f / 256f), right.TextureCoordinates);
		UiQuad middle = list.Quads[11];
		Assert.Equal(top + new Vector2(12f, 0f), middle.Position);
		Assert.Equal(new Vector2(136f, 25f), middle.Size);
	}

	[Fact]
	public void SelectedRowUsesThreeSixteenPixelSlices()
	{
		CountingTexture page = new();
		using LoginDialogFrame frame = new() { RowTexture = page };
		UiDrawList list = new();

		frame.Draw(list, 0);

		Assert.Equal(15, list.Quads.Count);
		UiQuad left = list.Quads[12];
		Assert.Equal(new Vector2(208f, 320f), left.Position);
		Assert.Equal(new Vector2(16f, 16f), left.Size);
		Assert.Equal(new Vector4(151f / 256f, 57f / 256f, 167f / 256f, 73f / 256f), left.TextureCoordinates);
		Assert.Same(page, left.Texture);
		Assert.Equal(UiBlendMode.AdditiveAlpha, left.BlendMode);
		UiQuad right = list.Quads[13];
		Assert.Equal(new Vector2(416f, 320f), right.Position);
		Assert.Equal(new Vector4(183f / 256f, 57f / 256f, 199f / 256f, 73f / 256f), right.TextureCoordinates);
		UiQuad middle = list.Quads[14];
		Assert.Equal(new Vector2(224f, 320f), middle.Position);
		Assert.Equal(new Vector2(192f, 16f), middle.Size);
		Assert.Equal(new Vector4(167f / 256f, 57f / 256f, 183f / 256f, 73f / 256f), middle.TextureCoordinates);
	}

	[Fact]
	public void SelectedRowUsesAdditiveAlphaAndRestoresTheDefaultBlend()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		using LoginDialogFrame frame = new() { RowTexture = new CountingTexture() };
		UiDrawList list = new() { DefaultBlendMode = UiBlendMode.Alpha };
		frame.Draw(list, 0);
		list.Render(renderer);
		Assert.Contains("State 19:5", renderer.Commands);
		Assert.Contains("State 20:2", renderer.Commands);
		Assert.Equal("State 20:6", renderer.Commands[^1]);
	}

	[Fact]
	public void HoveredRowUsesTheSecondVerticalBand()
	{
		using LoginDialogFrame frame = new();
		UiDrawList list = new();

		frame.Draw(list, 1, hovered: true);

		UiQuad left = list.Quads[12];
		Assert.Equal(new Vector2(208f, 340f), left.Position);
		Assert.Equal(new Vector4(151f / 256f, 76f / 256f, 167f / 256f, 92f / 256f), left.TextureCoordinates);
	}

	[Fact]
	public void SelectedRowIndexOffsetsTheStripAndMinusOneDrawsNoStrip()
	{
		using LoginDialogFrame frame = new();
		UiDrawList list = new();

		frame.Draw(list, 3);
		Assert.Equal(15, list.Quads.Count);
		Assert.Equal(new Vector2(208f, 380f), list.Quads[12].Position);

		list.Clear();
		frame.Draw(list, -1);
		Assert.Equal(12, list.Quads.Count);
	}

	[Fact]
	public void DisposeReleasesBothSkinPages()
	{
		CountingTexture panel = new();
		CountingTexture rows = new();
		LoginDialogFrame frame = new() { PanelTexture = panel, RowTexture = rows };

		frame.Dispose();
		frame.Dispose();

		Assert.True(frame.IsDisposed);
		Assert.Equal(1, panel.DisposeCount);
		Assert.Equal(1, rows.DisposeCount);
		Assert.Throws<ObjectDisposedException>(() => frame.Draw(new UiDrawList(), 0));
	}

	private sealed class CountingTexture : ITexture
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
