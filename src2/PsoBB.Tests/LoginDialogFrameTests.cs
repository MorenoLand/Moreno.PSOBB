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
	public void HeaderUsesTheOrangeStripWithMirroredCaps()
	{
		CountingTexture page = new();
		using LoginDialogFrame frame = new() { PanelTexture = page };
		UiDrawList list = new();

		frame.Draw(list, -1);

		UiQuad left = list.Quads[9];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition, left.Position);
		Assert.Equal(new Vector2(12f, 20f), left.Size);
		Assert.Equal(new Vector4(76f / 256f, 128f / 256f, 64f / 256f, 147f / 256f), left.TextureCoordinates);
		UiQuad right = list.Quads[10];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition + new Vector2(208f, 0f), right.Position);
		Assert.Equal(new Vector4(64f / 256f, 128f / 256f, 76f / 256f, 147f / 256f), right.TextureCoordinates);
		UiQuad middle = list.Quads[11];
		Assert.Equal(LoginDialogFrame.TitlePanelPosition + new Vector2(12f, 0f), middle.Position);
		Assert.Equal(new Vector2(196f, 20f), middle.Size);
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
		Assert.Equal(new Vector2(208f, 308f), left.Position);
		Assert.Equal(new Vector2(16f, 16f), left.Size);
		Assert.Equal(new Vector4(151f / 256f, 57f / 256f, 167f / 256f, 73f / 256f), left.TextureCoordinates);
		Assert.Same(page, left.Texture);
		UiQuad right = list.Quads[13];
		Assert.Equal(new Vector2(416f, 308f), right.Position);
		Assert.Equal(new Vector4(183f / 256f, 57f / 256f, 199f / 256f, 73f / 256f), right.TextureCoordinates);
		UiQuad middle = list.Quads[14];
		Assert.Equal(new Vector2(224f, 308f), middle.Position);
		Assert.Equal(new Vector2(192f, 16f), middle.Size);
		Assert.Equal(new Vector4(167f / 256f, 57f / 256f, 183f / 256f, 73f / 256f), middle.TextureCoordinates);
	}

	[Fact]
	public void HoveredRowUsesTheSecondVerticalBand()
	{
		using LoginDialogFrame frame = new();
		UiDrawList list = new();

		frame.Draw(list, 1, hovered: true);

		UiQuad left = list.Quads[12];
		Assert.Equal(new Vector2(208f, 328f), left.Position);
		Assert.Equal(new Vector4(151f / 256f, 76f / 256f, 167f / 256f, 92f / 256f), left.TextureCoordinates);
	}

	[Fact]
	public void SelectedRowIndexOffsetsTheStripAndMinusOneDrawsNoStrip()
	{
		using LoginDialogFrame frame = new();
		UiDrawList list = new();

		frame.Draw(list, 3);
		Assert.Equal(15, list.Quads.Count);
		Assert.Equal(new Vector2(208f, 368f), list.Quads[12].Position);

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
