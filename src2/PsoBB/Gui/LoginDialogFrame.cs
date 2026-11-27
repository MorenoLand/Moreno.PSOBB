using System.Numerics;
using PsoBB.Graphics;

namespace PsoBB.Gui;

/// <summary>
/// Draws the title-menu skin: the window body, the orange header bar and the selected-row strip.
/// </summary>
/// <remarks>
/// The row strip is the three-slice from <c>f256_hyoujismall_c</c>, with sixteen-pixel caps, a
/// stretched middle and the second vertical band for the hovered row. The panel and header source
/// rectangles are observed from page <c>_b</c> and the retail capture; the full <c>0x00710F80</c>
/// UV set is not reconstructed.
/// </remarks>
public sealed class LoginDialogFrame : IDisposable
{
	/// <summary>The title-menu panel position observed in the oracle capture.</summary>
	public static readonly Vector2 TitlePanelPosition = new(210f, 300f);

	/// <summary>The title-menu panel size from the account dialog's size constant.</summary>
	public static readonly Vector2 TitlePanelSize = new(220f, 120f);

	/// <summary>The header height, equal to one list row.</summary>
	public const float HeaderHeight = 20f;

	/// <summary>The row step of the four action rows.</summary>
	public const float RowHeight = 20f;

	/// <summary>The selected-row height.</summary>
	public const float RowStripHeight = 16f;

	/// <summary>The title-menu panel top-left in the skin atlas.</summary>
	public static readonly Vector4 PanelSource = new(0f, 0f, 80f, 80f);

	/// <summary>The panel nine-slice corner size.</summary>
	public const float PanelInset = 8f;

	/// <summary>The orange header strip in the skin atlas.</summary>
	public static readonly Vector4 HeaderSource = new(0f, 126f, 80f, 151f);

	/// <summary>The header three-slice cap width.</summary>
	public const float HeaderCap = 12f;

	/// <summary>The header pill width observed in the reference capture.</summary>
	public const float HeaderWidth = 160f;

	/// <summary>The drawn height of the header pill, equal to its source rows.</summary>
	public const float HeaderDrawHeight = 25f;

	/// <summary>How far the header pill overhangs the panel's top edge.</summary>
	public const float HeaderOverhang = 11f;

	/// <summary>The row strip left cap in the skin atlas.</summary>
	public static readonly Vector4 RowLeftSource = new(151f, 57f, 167f, 73f);

	/// <summary>The row strip middle in the skin atlas.</summary>
	public static readonly Vector4 RowMiddleSource = new(167f, 57f, 183f, 73f);

	/// <summary>The row strip right cap in the skin atlas.</summary>
	public static readonly Vector4 RowRightSource = new(183f, 57f, 199f, 73f);

	/// <summary>The hovered-row vertical offset in the skin atlas.</summary>
	public const float HoverRowV = 76f;

	/// <summary>The white diffuse colour used by the row draw.</summary>
	public const uint SkinColor = 0xFFFFFFFF;

	/// <summary>Gets or sets the diffuse colour applied to the selected-row slices.</summary>
	public uint RowColor { get; set; } = SkinColor;

	/// <summary>Gets or sets the panel origin.</summary>
	public Vector2 Position { get; set; } = TitlePanelPosition;

	/// <summary>Gets or sets the panel size.</summary>
	public Vector2 Size { get; set; } = TitlePanelSize;

	/// <summary>Gets or sets the orange header width.</summary>
	public float PanelHeaderWidth { get; set; } = HeaderWidth;

	/// <summary>Gets or sets whether the frame releases its installed textures.</summary>
	public bool OwnsTextures { get; set; } = true;

	/// <summary>The skin page that holds the panel body and the header strip.</summary>
	public ITexture? PanelTexture { get; set; }

	/// <summary>The skin page that holds the row strips.</summary>
	public ITexture? RowTexture { get; set; }

	/// <summary>Gets a value indicating whether the frame has been released.</summary>
	public bool IsDisposed { get; private set; }

	/// <summary>Adds the panel body, header and selected-row strip to the draw list.</summary>
	/// <param name="drawList">The draw list that receives the quads.</param>
	/// <param name="selectedIndex">The selected row, or minus one when no row is selected.</param>
	/// <param name="hovered">Whether the selected row uses the hover band.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The frame is released.</exception>
	public void Draw(UiDrawList drawList, int selectedIndex, bool hovered = false)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ObjectDisposedException.ThrowIf(IsDisposed, this);
		DrawPanel(drawList);
		DrawHeader(drawList);
		if (selectedIndex >= 0)
			DrawRow(drawList, selectedIndex, hovered);
	}

	private void DrawPanel(UiDrawList drawList)
	{
		Vector2 position = Position;
		Vector2 size = Size;
		float inset = PanelInset;
		Vector4 source = PanelSource;
		float left = Atlas(source.X);
		float top = Atlas(source.Y);
		float centerLeft = Atlas(source.X + inset);
		float centerTop = Atlas(source.Y + inset);
		float centerRight = Atlas(source.Z - inset);
		float centerBottom = Atlas(source.W - inset);
		float mirror = Atlas(source.X + inset);
		Add(drawList, position + new Vector2(inset, inset), size - new Vector2(inset * 2f), centerLeft, centerTop, centerRight, centerBottom, PanelTexture);
		Add(drawList, position + new Vector2(inset, 0f), new Vector2(size.X - inset * 2f, inset), centerLeft, top, centerRight, centerTop, PanelTexture);
		Add(drawList, position + new Vector2(inset, size.Y - inset), new Vector2(size.X - inset * 2f, inset), centerLeft, centerTop, centerRight, top, PanelTexture);
		Add(drawList, position + new Vector2(0f, inset), new Vector2(inset, size.Y - inset * 2f), left, centerTop, centerLeft, centerBottom, PanelTexture);
		Add(drawList, position + new Vector2(size.X - inset, inset), new Vector2(inset, size.Y - inset * 2f), mirror, centerTop, left, centerBottom, PanelTexture);
		Add(drawList, position, new Vector2(inset), left, top, centerLeft, centerTop, PanelTexture);
		Add(drawList, position + new Vector2(size.X - inset, 0f), new Vector2(inset), mirror, top, left, centerTop, PanelTexture);
		Add(drawList, position + new Vector2(0f, size.Y - inset), new Vector2(inset), left, centerTop, centerLeft, top, PanelTexture);
		Add(drawList, position + new Vector2(size.X - inset, size.Y - inset), new Vector2(inset), mirror, centerTop, left, top, PanelTexture);
	}

	private void DrawHeader(UiDrawList drawList)
	{
		Vector4 source = HeaderSource;
		float cap = HeaderCap;
		float v0 = Atlas(source.Y);
		float v1 = Atlas(source.W);
		float right = Atlas(source.Z);
		float capLeft = Atlas(source.X + cap);
		float capRight = Atlas(source.Z - cap);
		Vector2 position = Position - new Vector2(0f, HeaderOverhang);
		float width = PanelHeaderWidth;
		Add(drawList, position, new Vector2(cap, HeaderDrawHeight), Atlas(source.X), v0, capLeft, v1, PanelTexture);
		Add(drawList, position + new Vector2(width - cap, 0f), new Vector2(cap, HeaderDrawHeight), capRight, v0, right, v1, PanelTexture);
		Add(drawList, position + new Vector2(cap, 0f), new Vector2(width - cap * 2f, HeaderDrawHeight), capLeft, v0, capRight, v1, PanelTexture);
	}

	private void DrawRow(UiDrawList drawList, int selectedIndex, bool hovered)
	{
		Vector2 position = new(Position.X, Position.Y + HeaderHeight + selectedIndex * RowHeight);
		float width = Size.X;
		float v0 = hovered ? HoverRowV : RowLeftSource.Y;
		float v1 = v0 + RowStripHeight;
		AddRow(drawList, position - new Vector2(2f, 0f), new Vector2(16f, RowStripHeight), Atlas(RowLeftSource.X), Atlas(v0), Atlas(RowLeftSource.Z), Atlas(v1));
		AddRow(drawList, position + new Vector2(width - 14f, 0f), new Vector2(16f, RowStripHeight), Atlas(RowRightSource.X), Atlas(v0), Atlas(RowRightSource.Z), Atlas(v1));
		AddRow(drawList, position + new Vector2(14f, 0f), new Vector2(width - 28f, RowStripHeight), Atlas(RowMiddleSource.X), Atlas(v0), Atlas(RowMiddleSource.Z), Atlas(v1));
	}

	private void AddRow(UiDrawList drawList, Vector2 position, Vector2 size, float u0, float v0, float u1, float v1)
		=> drawList.Add(new UiQuad(position, size, new Vector4(u0, v0, u1, v1), RowTexture, RowColor) { BlendMode = UiBlendMode.AdditiveAlpha });

	private static void Add(UiDrawList drawList, Vector2 position, Vector2 size, float u0, float v0, float u1, float v1, ITexture? texture)
		=> drawList.Add(new UiQuad(position, size, new Vector4(u0, v0, u1, v1), texture, SkinColor));

	private static float Atlas(float pixel) => pixel / UiElement.TextureAtlasSize;

	/// <summary>Releases the installed skin pages. Repeated calls do nothing.</summary>
	public void Dispose()
	{
		if (IsDisposed)
			return;
		IsDisposed = true;
		ITexture? panel = PanelTexture;
		ITexture? rows = RowTexture;
		PanelTexture = null;
		RowTexture = null;
		if (!OwnsTextures)
			return;
		panel?.Dispose();
		if (!ReferenceEquals(panel, rows))
			rows?.Dispose();
	}
}
