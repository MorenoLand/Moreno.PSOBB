using System.Numerics;
using PsoBB.Gui;
using PsoBB.Text;

namespace PsoBB.Chat;

/// <summary>
/// Scrolls and draws a message log with the merged font renderer, including word wrapping and clipping.
/// </summary>
/// <remarks>
/// The log opens at its newest line. A new entry keeps the view at the bottom only when it was already there, so reading older lines does not jump. Arrow scrolling uses six pixels and page scrolling uses the original 380-pixel step.
/// </remarks>
public sealed class ChatLogView : IDisposable
{
	/// <summary>The original arrow-key scroll step in pixels.</summary>
	public const float ArrowScroll = 6f;

	/// <summary>The original page-key scroll step in pixels.</summary>
	public const float PageScroll = 380f;

	private readonly ChatLog _log;
	private readonly TextRenderer _renderer;
	private float _scrollOffset;
	private float _contentHeight;
	private float _width;
	private float _height;
	private bool _disposed;

	/// <summary>
	/// Creates a view for a log and a font renderer.
	/// </summary>
	/// <param name="log">The log to display.</param>
	/// <param name="renderer">The merged font renderer.</param>
	/// <param name="width">The visible width in pixels.</param>
	/// <param name="height">The visible height in pixels.</param>
	/// <param name="wordWrap">Whether words move to the next line instead of crossing the limit.</param>
	/// <exception cref="ArgumentNullException">A parameter is null.</exception>
	/// <exception cref="ArgumentOutOfRangeException">A size is negative.</exception>
	public ChatLogView(ChatLog log, TextRenderer renderer, float width, float height, bool wordWrap = true)
	{
		ArgumentNullException.ThrowIfNull(log);
		ArgumentNullException.ThrowIfNull(renderer);
		ArgumentOutOfRangeException.ThrowIfNegative(width);
		ArgumentOutOfRangeException.ThrowIfNegative(height);
		_log = log;
		_renderer = renderer;
		_width = width;
		_height = height;
		WordWrap = wordWrap;
		_log.Changed += OnLogChanged;
		_contentHeight = ContentHeight;
		ScrollToBottom();
	}

	/// <summary>Gets the displayed log.</summary>
	public ChatLog Log => _log;

	/// <summary>Gets the visible width in pixels.</summary>
	public float Width
	{
		get => _width;
		set
		{
			ArgumentOutOfRangeException.ThrowIfNegative(value);
			_width = value;
			_contentHeight = ContentHeight;
			ScrollBy(0f);
		}
	}

	/// <summary>Gets the visible height in pixels.</summary>
	public float Height
	{
		get => _height;
		set
		{
			ArgumentOutOfRangeException.ThrowIfNegative(value);
			_height = value;
			ScrollBy(0f);
		}
	}

	/// <summary>Gets or sets whether words wrap.</summary>
	public bool WordWrap { get; set; }

	/// <summary>Gets or sets whether new lines keep the view at the bottom while it is there.</summary>
	public bool AutoScroll { get; set; } = true;

	/// <summary>Gets or sets the tab colour command table.</summary>
	public TextColorTable? Colors { get; set; }

	/// <summary>Gets the vertical scroll offset from the top of the content in pixels.</summary>
	public float ScrollOffset => _scrollOffset;

	/// <summary>Gets the total content height in pixels.</summary>
	public float ContentHeight
	{
		get
		{
			float total = 0f;
			foreach (ChatLogEntry entry in _log.Entries)
				total += Measure(entry).Height;
			return total;
		}
	}

	/// <summary>Gets the largest valid scroll offset.</summary>
	public float MaximumScrollOffset => MathF.Max(0f, ContentHeight - Height);

	/// <summary>Gets a value indicating whether the view has been disposed.</summary>
	public bool IsDisposed => _disposed;

	/// <summary>
	/// Scrolls one arrow step upward.
	/// </summary>
	public void ScrollUp() => ScrollBy(-ArrowScroll);

	/// <summary>
	/// Scrolls one arrow step downward.
	/// </summary>
	public void ScrollDown() => ScrollBy(ArrowScroll);

	/// <summary>
	/// Scrolls one page upward.
	/// </summary>
	public void PageUp() => ScrollBy(-PageScroll);

	/// <summary>
	/// Scrolls one page downward.
	/// </summary>
	public void PageDown() => ScrollBy(PageScroll);

	/// <summary>
	/// Moves the scroll offset and clamps it to the content.
	/// </summary>
	/// <param name="delta">The distance in pixels; positive values move toward newer lines.</param>
	[Original(0x00752238, "ChallengePlayerListWindow_HandleInput_00752238")]
	public void ScrollBy(float delta) => _scrollOffset = Math.Clamp(_scrollOffset + delta, 0f, MaximumScrollOffset);

	/// <summary>
	/// Scrolls to the oldest line.
	/// </summary>
	public void ScrollToTop() => _scrollOffset = 0f;

	/// <summary>
	/// Scrolls to the newest line.
	/// </summary>
	public void ScrollToBottom() => _scrollOffset = MaximumScrollOffset;

	/// <summary>
	/// Returns the entries whose measured lines intersect the visible area.
	/// </summary>
	/// <returns>The visible entries with their content-relative offsets.</returns>
	public IReadOnlyList<ChatLogLine> GetVisibleLines()
	{
		ObjectDisposedException.ThrowIf(_disposed, this);
		List<ChatLogLine> lines = [];
		float top = 0f;
		float bottom = _scrollOffset + Height;
		foreach (ChatLogEntry entry in _log.Entries)
		{
			TextLayout layout = Measure(entry);
			if (top + layout.Height > _scrollOffset && top < bottom)
				lines.Add(new ChatLogLine(entry, top, layout));
			top += layout.Height;
		}
		return lines;
	}

	/// <summary>
	/// Draws the visible log lines into a draw list.
	/// </summary>
	/// <param name="drawList">The list that receives the glyph quads.</param>
	/// <param name="position">The top-left client-area position of the view.</param>
	/// <param name="clip">The optional clip rectangle; the view rectangle is used when omitted.</param>
	/// <exception cref="ArgumentNullException"><paramref name="drawList"/> is null.</exception>
	/// <exception cref="ObjectDisposedException">The view has been disposed.</exception>
	[Original(0x0073AE14, "ListWindowObject_Render_0073ae14")]
	public void Render(UiDrawList drawList, Vector2 position, Vector4? clip = null)
	{
		ArgumentNullException.ThrowIfNull(drawList);
		ObjectDisposedException.ThrowIf(_disposed, this);
		Vector4 bounds = clip ?? new Vector4(position.X, position.Y, position.X + Width, position.Y + Height);
		foreach (ChatLogLine line in GetVisibleLines())
		{
			float y = position.Y + line.Top - _scrollOffset;
			_renderer.DrawLayout(drawList, line.Layout, new Vector2(position.X, y), bounds);
		}
	}

	/// <summary>
	/// Stops listening to the log and clears the view.
	/// </summary>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_log.Changed -= OnLogChanged;
		_scrollOffset = 0f;
	}

	private TextLayout Measure(ChatLogEntry entry)
	{
		TextLayout layout = TextLayout.Create(
			_renderer.Font,
			entry.DisplayText,
			new TextLayoutOptions(Width, TextAlignment.Left, WordWrap, entry.Color, true, Colors));
		return layout;
	}

	private void OnLogChanged()
	{
		if (_disposed)
			return;
		float previousMaximum = MathF.Max(0f, _contentHeight - Height);
		_contentHeight = ContentHeight;
		bool atBottom = _scrollOffset >= previousMaximum - 0.5f;
		if (AutoScroll && atBottom)
			ScrollToBottom();
		else
			ScrollBy(0f);
	}
}
