using System.Numerics;

namespace PsoBB.Gui;

/// <summary>
/// The open and close transition every skinned window plays: a fade in while the open timer runs and a
/// horizontal stretch with a vertical collapse while the close counter runs.
/// </summary>
/// <remarks>
/// The flag machine is the one in <c>0x00710DBC</c>, with show at <c>0x00712714</c> and close at <c>0x007127C8</c>.
/// The fade is <c>0x0071BC8C</c> and the stretch is <c>0x0071BCEC</c>; both scale about the window centre.
/// </remarks>
public sealed class UiWindowTransition
{
	/// <summary>The number of timer ticks the fade-in lasts.</summary>
	public const float OpenTicks = 7.5f;

	/// <summary>The close counter value at which the close animation finishes.</summary>
	public const float CloseCounterLimit = 4.5f;

	/// <summary>The sound played when a window opens.</summary>
	public const int OpenSound = 1394;

	/// <summary>The sound played when a window closes.</summary>
	public const int CloseSound = 1395;

	private const int Shown = 1;
	private const int Active = 2;
	private const int CloseRequested = 4;
	private const int Silent = 0x20;
	private const int TimerLimit = 0x1000000;
	private const float StretchStep = 0.2222222238779068f;
	private const float StretchGain = 2.299999952316284f;
	private int _flags;
	private int _timer = TimerLimit;
	private int _closeCounter;

	/// <summary>Gets or sets the callback that plays a sound-effect identifier.</summary>
	public Action<int>? SoundPlayer { get; set; }

	/// <summary>Gets or sets whether the open and close sounds are suppressed.</summary>
	public bool IsSilent
	{
		get => (_flags & Silent) != 0;
		set => _flags = value ? _flags | Silent : _flags & ~Silent;
	}

	/// <summary>Gets a value indicating whether the window is shown or still animating, and so must be drawn.</summary>
	public bool IsVisible => (_flags & (Shown | Active)) != 0;

	/// <summary>Gets a value indicating whether the window is fully shown with no transition running.</summary>
	public bool IsOpen => (_flags & (Shown | Active)) == Shown;

	/// <summary>Gets the fade-in alpha, from zero to 255.</summary>
	public int Alpha => _timer >= OpenTicks ? 255 : (int)(_timer / OpenTicks * 255f);

	/// <summary>Gets the horizontal scale about the window centre.</summary>
	public float ScaleX => _closeCounter == 0 ? 1f : StretchStep * _closeCounter * StretchGain + 1f;

	/// <summary>Gets the vertical scale about the window centre.</summary>
	public float ScaleY => _closeCounter == 0 ? 1f : 1f + _closeCounter * -StretchStep;

	/// <summary>Opens the window, or cancels or queues a pending close.</summary>
	[Original(0x00712714)]
	public void Show()
	{
		if ((_flags & Shown) != 0)
		{
			_flags &= ~CloseRequested;
		}
		else if ((_flags & Active) != 0)
		{
			_flags |= CloseRequested;
		}
		else
		{
			_timer = 0;
			_flags |= Shown | Active;
			if ((_flags & Silent) == 0)
				SoundPlayer?.Invoke(OpenSound);
		}
	}

	/// <summary>Starts closing the window, or queues the close until the open finishes.</summary>
	[Original(0x007127C8)]
	public void Close()
	{
		if ((_flags & Shown) != 0)
		{
			if ((_flags & Active) != 0)
			{
				_flags |= CloseRequested;
				return;
			}
			if ((_flags & Silent) == 0)
				SoundPlayer?.Invoke(CloseSound);
			_flags = (_flags & ~(Shown | CloseRequested)) | Active;
		}
		else
		{
			_flags &= ~CloseRequested;
		}
	}

	/// <summary>Advances the transition by one frame.</summary>
	[Original(0x00710DBC)]
	public void Update()
	{
		if (_timer < TimerLimit)
			_timer++;
		if ((_flags & Active) == 0)
			return;
		if ((_flags & Shown) != 0)
		{
			if (_timer < OpenTicks)
				return;
			if ((_flags & CloseRequested) != 0)
			{
				if ((_flags & Silent) == 0)
					SoundPlayer?.Invoke(CloseSound);
				_flags &= ~(Shown | CloseRequested);
			}
			else
			{
				_flags &= ~Active;
			}
			return;
		}
		int counter = _closeCounter + 1;
		if (counter < CloseCounterLimit)
		{
			_closeCounter = counter;
			return;
		}
		_closeCounter = 0;
		if ((_flags & CloseRequested) != 0)
		{
			if ((_flags & Silent) == 0)
				SoundPlayer?.Invoke(OpenSound);
			_timer = 0;
			_flags = (_flags & ~(Shown | CloseRequested)) | Shown;
		}
		else
		{
			_flags &= ~Active;
		}
	}

	/// <summary>
	/// Scales and fades the quads a window added to a draw list.
	/// </summary>
	/// <param name="draw">The draw list that holds the window's quads.</param>
	/// <param name="start">The index of the window's first quad.</param>
	/// <param name="center">The window centre the scale is applied about.</param>
	public void Apply(UiDrawList draw, int start, Vector2 center)
	{
		ArgumentNullException.ThrowIfNull(draw);
		int alpha = Alpha;
		float scaleX = ScaleX;
		float scaleY = ScaleY;
		if (alpha == 255 && scaleX == 1f && scaleY == 1f)
			return;
		draw.Transform(start, quad =>
		{
			Vector2 position = new((quad.Position.X - center.X) * scaleX + center.X, (quad.Position.Y - center.Y) * scaleY + center.Y);
			uint color = quad.Color;
			uint faded = (uint)((color >> 24) * alpha / 255) << 24 | color & 0x00FFFFFFu;
			return quad with { Position = position, Size = new Vector2(quad.Size.X * scaleX, quad.Size.Y * scaleY), Color = faded };
		});
	}
}
