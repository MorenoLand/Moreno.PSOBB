using System.Buffers.Binary;
using System.Numerics;
using PsoBB.Compression;
using PsoBB.Data;
using PsoBB.Graphics;
using PsoBB.Gui;
using PsoBB.Imaging;
using PsoBB.Input;

namespace PsoBB.Game;

/// <summary>
/// The original title scene: the Sonic Team logo, the press-start prompt and the title menu it leads to.
/// </summary>
/// <remarks>
/// The scene loads the title, logo and select-game texture archives through the data registry. The
/// first confirmation requests scene 2 exactly as the original does; the preview keeps the menu
/// surface visible because scene 2's own systems are outside this port.
/// </remarks>
public sealed class TitleScene : IDisposable
{
	/// <summary>The original scene number.</summary>
	public const uint SceneNumber = 1;

	/// <summary>The scene the original requests after the press-start confirmation.</summary>
	public const uint MenuSceneNumber = 2;

	/// <summary>The original viewport width.</summary>
	public const float ViewportWidth = 640f;

	/// <summary>The original viewport height.</summary>
	public const float ViewportHeight = 480f;

	/// <summary>The press-start label position derived from the 256x256 title atlas.</summary>
	public static readonly Vector2 PressStartPosition = new(192f, 96f);

	/// <summary>The press-start label size derived from the 256x256 title atlas.</summary>
	public static readonly Vector2 PressStartSize = new(256f, 24f);

	/// <summary>The logo origin the original start screen draws from.</summary>
	public const float LogoOriginX = -150f;

	private static readonly string[] TitleNames = ["title.prs", "title_eng.prs", "title2_eng.xvm", "title2.xvm"];
	private static readonly string[] SelectNames = ["f256_selectgamen_a_eng.prs", "f256_selectgamen_a.prs"];
	private readonly TitleMenu _menu;
	private readonly ITexture _pressStart;
	private readonly ITexture? _selectLabels;
	private readonly List<ITexture> _logos = [];
	private readonly Vector4 _pressStartCoordinates;
	private int _startState;
	private bool _menuVisible;
	private bool _previewComplete;
	private bool _disposed;

	/// <summary>
	/// Loads the title archives and creates the press-start and menu surfaces.
	/// </summary>
	/// <param name="files">The data registry that resolves the retail archives.</param>
	/// <param name="renderer">The renderer that owns the created textures.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="FileNotFoundException">None of the title archives is present.</exception>
	/// <exception cref="TextureFormatException">An archive is malformed.</exception>
	[Original(0x007A45D0)]
	public TitleScene(IDataFiles files, IRenderer renderer)
	{
		ArgumentNullException.ThrowIfNull(files);
		ArgumentNullException.ThrowIfNull(renderer);
		XvmTexture title = ReadFirstTexture(files, TitleNames);
		_pressStartCoordinates = new Vector4(0f, 4f / 256f, 1f, 28f / 256f);
		_pressStart = CreateTexture(renderer, title);
		XvmTexture? select = ReadSelectTexture(files);
		_selectLabels = select is null ? null : CreateTexture(renderer, select);
		_menu = new TitleMenu(CreateTexture(renderer, title), CreateEntries(false));
		foreach (XvmTexture logo in ReadTextures(files, "logo.prs"))
			_logos.Add(CreateTexture(renderer, logo));
		SceneManager.SetSceneParameter(SceneNumber);
	}

	/// <summary>Gets the title menu surface.</summary>
	public TitleMenu Menu => _menu;

	/// <summary>Gets the press-start texture.</summary>
	public ITexture PressStartTexture => _pressStart;

	/// <summary>Gets the loaded logo textures in archive order.</summary>
	public IReadOnlyList<ITexture> LogoTextures => _logos;

	/// <summary>Gets the optional select-game label texture.</summary>
	public ITexture? SelectLabels => _selectLabels;

	/// <summary>Gets a value indicating whether the menu surface is visible.</summary>
	public bool IsMenuVisible => _menuVisible;

	/// <summary>Gets a value indicating whether the preview has requested its final transition.</summary>
	public bool IsPreviewComplete => _previewComplete;

	/// <summary>Gets a value indicating whether the scene has been released.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Advances the press-start state or the menu for one frame.
	/// </summary>
	/// <param name="input">The input layer already polled for this frame.</param>
	/// <exception cref="ArgumentNullException"><paramref name="input"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	[Original(0x007A4418)]
	public void Update(InputManager input)
	{
		ArgumentNullException.ThrowIfNull(input);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_menuVisible)
		{
			_menu.Update(input);
			if (input.WasActionPressed(InputAction.Confirm))
			{
				_menu.Confirm();
				_previewComplete = true;
			}
			else if (input.WasActionPressed(InputAction.Cancel))
			{
				_menu.Cancel();
				_previewComplete = true;
			}
			return;
		}
		if (input.WasActionPressed(InputAction.Cancel))
		{
			SceneManager.RequestRestart();
			_previewComplete = true;
			return;
		}
		AdvanceStartScreen(input);
	}

	[Original(0x007A44F0)]
	private void AdvanceStartScreen(InputManager input)
	{
		if (_startState == 3)
		{
			SceneManager.RequestScene(MenuSceneNumber);
			_menuVisible = true;
			return;
		}
		if (input.WasActionPressed(InputAction.Confirm))
			_startState = 3;
	}

	/// <summary>
	/// Adds the press-start or menu quads to the draw list.
	/// </summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <exception cref="ArgumentNullException"><paramref name="draw"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The scene is released.</exception>
	public void Draw(UiDrawList draw)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ObjectDisposedException.ThrowIf(_disposed, this);
		if (_menuVisible)
			_menu.Draw(draw);
		else if (_startState == 0)
			DrawStartScreen(draw);
	}

	[Original(0x00411E30)]
	private void DrawStartScreen(UiDrawList draw)
	{
		for (int index = 0; index < _logos.Count; index++)
		{
			bool top = index < 4;
			int piece = top ? index : index - 4;
			float size = top ? 256f : 128f;
			float x = LogoOriginX + piece * size;
			float y = top ? 0f : 256f;
			draw.Add(new UiQuad(new Vector2(x, y), new Vector2(size, size), new Vector4(0f, 0f, 1f, 1f), _logos[index], 0xFFFFFFFF));
		}
		draw.Add(new UiQuad(PressStartPosition, PressStartSize, _pressStartCoordinates, _pressStart, 0xFFFFFFFF));
	}

	/// <summary>
	/// Releases the scene textures. Repeated calls do nothing.
	/// </summary>
	[Original(0x007A44D0)]
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_menu.Dispose();
		_pressStart.Dispose();
		_selectLabels?.Dispose();
		foreach (ITexture texture in _logos)
			texture.Dispose();
		_logos.Clear();
	}

	private static ITexture CreateTexture(IRenderer renderer, XvmTexture texture) =>
		renderer.CreateTexture(texture.Width, texture.Height, texture.Image.Pixels.Span, texture.Image.Stride);

	private static XvmTexture ReadFirstTexture(IDataFiles files, string[] names)
	{
		foreach (string name in names)
		{
			if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
				continue;
			IReadOnlyList<XvmTexture> textures = ReadXvm(data, name);
			if (textures.Count == 0)
				throw new TextureFormatException($"The title archive '{name}' has no textures.", 0);
			return textures[0];
		}
		throw new FileNotFoundException("No title texture archive is present.", names[0]);
	}

	private static IEnumerable<XvmTexture> ReadTextures(IDataFiles files, string name)
	{
		if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
			yield break;
		foreach (XvmTexture texture in ReadXvm(data, name))
			yield return texture;
	}

	private static XvmTexture? ReadSelectTexture(IDataFiles files)
	{
		foreach (string name in SelectNames)
		{
			if (!files.TryRead(name, out ReadOnlyMemory<byte> data))
				continue;
			IReadOnlyList<XvmTexture> textures = ReadXvm(data, name);
			if (textures.Count != 0)
				return textures[^1];
		}
		return null;
	}

	private static IReadOnlyList<XvmTexture> ReadXvm(ReadOnlyMemory<byte> data, string name)
	{
		ReadOnlyMemory<byte> xvm = data;
		if (data.Length < 4 || BinaryPrimitives.ReadUInt32LittleEndian(data.Span) != 0x484D5658)
			xvm = Decompress(data, name);
		return XvmArchive.Read(xvm.Span);
	}

	private static ReadOnlyMemory<byte> Decompress(ReadOnlyMemory<byte> data, string name)
	{
		int capacity = Math.Max(0x10000, data.Length * 4);
		while (capacity <= 0x4000000)
		{
			byte[] destination = new byte[capacity];
			try
			{
				int written = PrsDecompressor.Decompress(data.Span, destination);
				return destination.AsMemory(0, written);
			}
			catch (ArgumentException)
			{
				capacity *= 2;
			}
		}
		throw new TextureFormatException($"The archive '{name}' is neither XVM nor a supported PRS stream.", 0);
	}

	private static TitleMenuEntry[] CreateEntries(bool fromSelect)
	{
		string[] names = ["ONLINE GAME", "OFFLINE GAME", "OPTIONS", "HOME PAGES"];
		TitleMenuAction[] actions = [TitleMenuAction.OnlineGame, TitleMenuAction.OfflineGame, TitleMenuAction.Options, TitleMenuAction.HomePages];
		TitleMenuEntry[] entries = new TitleMenuEntry[names.Length];
		for (int index = 0; index < entries.Length; index++)
		{
			float top = fromSelect ? 28f * index : 36f + 32f * index;
			float height = fromSelect ? 28f : 24f;
			entries[index] = new TitleMenuEntry(names[index], actions[index], new Vector4(0f, top / 256f, 1f, (top + height) / 256f));
		}
		return entries;
	}
}
