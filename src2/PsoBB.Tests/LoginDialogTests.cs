using System.Numerics;
using PsoBB.Archives;
using PsoBB.Core;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Input;
using PsoBB.Platform;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Checks the account panel's four text rows, disabled hint, navigation, confirmation mapping, draw order and release.
/// </summary>
public sealed class LoginDialogTests
{
	[Fact]
	public void CreatesFourRowsAndTheYellowHintFromTheTextTable()
	{
		using LoginDialog dialog = new(CreateText(), "[d]", new RecordingTextSurface());

		Assert.Equal(5, dialog.Menu.Items.Count);
		Assert.Equal("Start Game", dialog.Menu.Items[0].Text);
		Assert.Equal("Exit Game", dialog.Menu.Items[1].Text);
		Assert.Equal("Patch Download", dialog.Menu.Items[2].Text);
		Assert.Equal("Register UserID", dialog.Menu.Items[3].Text);
		Assert.Equal("[d]", dialog.Menu.Items[4].Text);
		Assert.Equal(new[] { 0, 1, 2, 3, 4 }, dialog.Menu.Items.Select(item => item.Data));
		Assert.True(dialog.Menu.Items[0].Enabled);
		Assert.True(dialog.Menu.Items[3].Enabled);
		Assert.False(dialog.Menu.Items[4].Enabled);
		Assert.Equal(LoginDialog.HintColor, dialog.Menu.Items[4].Color);
		Assert.Equal(0, dialog.Menu.SelectedIndex);
		Assert.Equal(new Vector2(120f, 100f), dialog.Menu.Size);
	}

	[Fact]
	public void SelectionWrapsOverTheFourRowsAndNeverReachesTheHint()
	{
		using LoginDialog dialog = new(CreateText(), "[d]");

		Assert.True(dialog.Menu.SelectPrevious());
		Assert.Equal(3, dialog.Menu.SelectedIndex);
		Assert.True(dialog.Menu.SelectNext());
		Assert.Equal(0, dialog.Menu.SelectedIndex);
		Assert.True(dialog.Menu.SelectNext());
		Assert.Equal(1, dialog.Menu.SelectedIndex);
		Assert.True(dialog.Menu.SelectNext());
		Assert.Equal(2, dialog.Menu.SelectedIndex);
		Assert.True(dialog.Menu.SelectNext());
		Assert.Equal(3, dialog.Menu.SelectedIndex);
		Assert.True(dialog.Menu.SelectNext());
		Assert.Equal(0, dialog.Menu.SelectedIndex);
	}

	[Fact]
	public void ConfirmMapsEachRowDataValueToItsAction()
	{
		using LoginDialog dialog = new(CreateText());

		dialog.Menu.SelectedIndex = 1;
		Assert.Equal(LoginDialogAction.ExitGame, dialog.ConfirmSelected());
		Assert.Equal(LoginDialogAction.ExitGame, dialog.RequestedAction);
		Assert.False(dialog.IsClosed);

		dialog.Menu.SelectedIndex = 2;
		Assert.Equal(LoginDialogAction.PatchDownload, dialog.ConfirmSelected());
		dialog.Menu.SelectedIndex = 3;
		Assert.Equal(LoginDialogAction.RegisterUserId, dialog.ConfirmSelected());
		dialog.Menu.SelectedIndex = 0;
		Assert.Equal(LoginDialogAction.StartGame, dialog.ConfirmSelected());
		Assert.Equal(LoginDialogAction.StartGame, dialog.RequestedAction);
		Assert.True(dialog.IsClosed);
		Assert.Null(dialog.ConfirmSelected());
	}

	[Fact]
	public void InputMovesTheSelectionConfirmsAndCancels()
	{
		using LoginDialog dialog = new(CreateText());
		MemoryGameInput source = new();
		InputManager input = new(source);

		Press(source, input, dialog, GameKey.Down);
		Assert.Equal(1, dialog.Menu.SelectedIndex);
		Press(source, input, dialog, GameKey.Up);
		Assert.Equal(0, dialog.Menu.SelectedIndex);
		Press(source, input, dialog, GameKey.Return);
		Assert.Equal(LoginDialogAction.StartGame, dialog.RequestedAction);
		Assert.True(dialog.IsClosed);
	}

	[Fact]
	public void CancelClosesWithoutRequestingAnAction()
	{
		using LoginDialog dialog = new(CreateText());
		MemoryGameInput source = new();
		InputManager input = new(source);

		Press(source, input, dialog, GameKey.Escape);

		Assert.True(dialog.IsClosed);
		Assert.Null(dialog.RequestedAction);
	}

	[Fact]
	public void DrawAddsTheSelectionThenEveryRowInTableOrder()
	{
		RecordingTextSurface text = new();
		using LoginDialog dialog = new(CreateText(), "[d]", text);
		UiDrawList drawList = new();

		dialog.Draw(drawList);

		UiQuad selection = Assert.Single(drawList.Quads);
		Assert.Equal(Vector2.Zero, selection.Position);
		Assert.Equal(new Vector2(120f, 20f), selection.Size);
		Assert.Equal(dialog.Menu.SelectionColor, selection.Color);
		Assert.Equal(5, text.Draws.Count);
		Assert.Equal("Start Game", text.Draws[0].Text);
		Assert.Equal(new Vector2(0f, 0f), text.Draws[0].Position);
		Assert.Equal(0xFFFFFFFFu, text.Draws[0].Color);
		Assert.Equal("[d]", text.Draws[4].Text);
		Assert.Equal(new Vector2(0f, 80f), text.Draws[4].Position);
		Assert.Equal(LoginDialog.HintColor, text.Draws[4].Color);

		dialog.Menu.SelectedIndex = 3;
		drawList.Clear();
		text.Draws.Clear();
		dialog.Draw(drawList);
		selection = Assert.Single(drawList.Quads);
		Assert.Equal(new Vector2(0f, 60f), selection.Position);
		Assert.Equal("Register UserID", text.Draws[3].Text);
	}

	[Fact]
	public void TextureFontSurfaceDrawsTheRowsThroughTheList()
	{
		using RecordingRenderer renderer = new(RenderSettings.Default);
		byte[] pixels = new byte[256 * 256 * 4];
		ITexture page = renderer.CreateTexture(256, 256, pixels, 256 * 4);
		using TextureFont font = new([page], TextureFontMetrics.Default);
		using LoginDialog dialog = new(CreateText(), "[d]", new TextureFontSurface(font));
		UiDrawList drawList = new();

		dialog.Draw(drawList);

		Assert.Equal(48, drawList.Quads.Count);
		Assert.Equal(dialog.Menu.SelectionColor, drawList.Quads[0].Color);
		Assert.Same(font.Pages[0], drawList.Quads[1].Texture);
		Assert.Equal(0xFFFFFFFFu, drawList.Quads[1].Color);
		Assert.Equal(LoginDialog.HintColor, drawList.Quads[^1].Color);
	}

	[Fact]
	public void CloseStopsDrawingAndDisposeReleasesTheList()
	{
		using LoginDialog dialog = new(CreateText());
		UiDrawList drawList = new();

		dialog.Close();
		dialog.Draw(drawList);
		Assert.Empty(drawList.Quads);

		dialog.Dispose();
		Assert.True(dialog.IsDisposed);
		Assert.True(dialog.Menu.IsDisposed);
	}

	[Fact]
	public void DefaultHintUsesTheDataImageLiteral()
	{
		using LoginDialog dialog = new(CreateText());
		Assert.Equal("[%s]", dialog.Menu.Items[4].Text);
		Assert.Equal(LoginDialog.HintFormat, dialog.Menu.Items[4].Text);
	}

	[Fact]
	public void RetailImageCarriesTheHintAndAtlasConstants()
	{
		string? path = FindImage();
		if (path is null)
			return;
		using FileStream stream = File.OpenRead(path);
		GuestImage image = GuestImage.Load(stream);

		Assert.Equal("[%s]", ReadWide(image, 0x00974EBC, 4));
		Assert.Equal("TextureEnglish.gvm", ReadAscii(image, 0x0097C844, 18));
		Assert.Equal(6f, image.ReadSingle(0x009FCE80));
		Assert.Equal(13f, image.ReadSingle(0x009FCE80 + (0x41 - 0x20) * 8));
		Assert.Equal(3f, image.ReadSingle(0x009FCE80 + (0x67 - 0x20) * 8 + 4));
	}

	[Fact]
	public void RetailEnglishAtlasCarriesFiveDxt2Pages()
	{
		string? path = FindDataFile(Path.Combine("bin", "data", "data.gsl"));
		if (path is null)
			return;
		using FileStream stream = File.OpenRead(path);
		byte[] data = new byte[stream.Length];
		stream.ReadExactly(data);
		GslArchive archive = GslArchive.Open(data);
		ArchiveEntry? entry = archive.Find("textureenglish.xvm");
		Assert.NotNull(entry);
		IReadOnlyList<XvmTexture> pages = XvmArchive.Read(archive.Read(entry).Span);
		Assert.Equal(5, pages.Count);
		Assert.Equal(new[] { 256, 256, 256, 128, 64 }, pages.Select(page => page.Width));
		Assert.All(pages, page => Assert.Equal(XvmTextureFormat.Dxt2, page.Format));
	}

	private static GameText CreateText()
	{
		int[] sizes = new int[42];
		sizes[GameText.LoginScreenList] = 22;
		string[] values =
		[
			"Cancel", "Confirm", "Login", "Start Game", "Exit Game", "Patch Download",
			"Register UserID", string.Empty, string.Empty, string.Empty, string.Empty,
		];
		Dictionary<int, string[]> strings = new() { [GameText.LoginScreenList] = values };
		return new GameText(UnitxtTable.Open(TextSamples.Unitxt(sizes, strings)));
	}

	private static void Press(MemoryGameInput source, InputManager input, LoginDialog dialog, GameKey key)
	{
		source.SetKey(key, true);
		input.Update(TimeSpan.Zero);
		dialog.Update(input);
		source.SetKey(key, false);
		input.Update(TimeSpan.Zero);
	}

	private static string ReadAscii(GuestImage image, uint address, int length)
	{
		byte[] bytes = new byte[length];
		image.ReadBytes(address, bytes);
		return System.Text.Encoding.ASCII.GetString(bytes);
	}

	private static string ReadWide(GuestImage image, uint address, int units)
	{
		byte[] bytes = new byte[units * 2];
		image.ReadBytes(address, bytes);
		return System.Text.Encoding.Unicode.GetString(bytes);
	}

	private static string? FindImage()
	{
		string? configured = Environment.GetEnvironmentVariable("PSOBB_IMAGE");
		if (!string.IsNullOrEmpty(configured))
			return File.Exists(configured) ? configured : null;
		return FindDataFile(Path.Combine("src", "image.bin"), requireRecomp: true);
	}

	private static string? FindDataFile(string relativePath, bool requireRecomp = false)
	{
		for (DirectoryInfo? directory = new(AppContext.BaseDirectory); directory is not null; directory = directory.Parent)
		{
			string candidate = Path.Combine(directory.FullName, relativePath);
			if (File.Exists(candidate) && (!requireRecomp || Directory.Exists(Path.Combine(directory.FullName, "recomp"))))
				return candidate;
		}
		return null;
	}

	private sealed class RecordingTextSurface : IUiTextSurface
	{
		public List<(string? Text, Vector2 Position, uint Color)> Draws { get; } = [];

		public float Measure(string? text) => (text?.Length ?? 0) * 8f;

		public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
			=> Draws.Add((text, position, color));
	}
}
