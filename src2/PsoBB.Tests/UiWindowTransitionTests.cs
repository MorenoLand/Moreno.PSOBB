using System.Numerics;
using PsoBB.Gui;
using Xunit;

namespace PsoBB.Tests;

public sealed class UiWindowTransitionTests
{
	[Fact]
	public void ShowFadesInForSevenAndAHalfTicksAndPlaysTheOpenSound()
	{
		List<int> played = [];
		UiWindowTransition window = new() { SoundPlayer = played.Add };

		window.Show();

		Assert.True(window.IsVisible);
		Assert.False(window.IsOpen);
		Assert.Equal(0, window.Alpha);
		Assert.Equal([UiWindowTransition.OpenSound], played);
		for (int tick = 0; tick < 4; tick++)
			window.Update();
		Assert.Equal(136, window.Alpha);
		for (int tick = 0; tick < 4; tick++)
			window.Update();
		Assert.True(window.IsOpen);
		Assert.Equal(255, window.Alpha);
	}

	[Fact]
	public void CloseStretchesAndCollapsesForFiveFramesThenHides()
	{
		List<int> played = [];
		UiWindowTransition window = new() { SoundPlayer = played.Add };
		window.Show();
		for (int tick = 0; tick < 8; tick++)
			window.Update();
		played.Clear();

		window.Close();

		Assert.Equal([UiWindowTransition.CloseSound], played);
		Assert.True(window.IsVisible);
		Assert.Equal(1f, window.ScaleX);
		window.Update();
		Assert.Equal(1.5111111f, window.ScaleX, 4);
		Assert.Equal(0.7777778f, window.ScaleY, 4);
		for (int frame = 0; frame < 3; frame++)
			window.Update();
		Assert.Equal(3.0444443f, window.ScaleX, 4);
		Assert.Equal(0.1111111f, window.ScaleY, 4);
		Assert.True(window.IsVisible);
		window.Update();
		Assert.False(window.IsVisible);
	}

	[Fact]
	public void SilentWindowsPlayNoSounds()
	{
		List<int> played = [];
		UiWindowTransition window = new() { SoundPlayer = played.Add, IsSilent = true };

		window.Show();
		for (int tick = 0; tick < 8; tick++)
			window.Update();
		window.Close();

		Assert.Empty(played);
	}

	[Fact]
	public void ShowDuringTheCloseReopensTheWindowWhenTheCloseEnds()
	{
		UiWindowTransition window = new();
		window.Show();
		for (int tick = 0; tick < 8; tick++)
			window.Update();
		window.Close();
		window.Show();
		for (int frame = 0; frame < 5; frame++)
			window.Update();

		Assert.True(window.IsVisible);
		Assert.Equal(0, window.Alpha);
	}

	[Fact]
	public void CloseDuringTheOpenWaitsForTheFadeToFinish()
	{
		UiWindowTransition window = new();
		window.Show();
		window.Update();
		window.Close();
		Assert.Equal(1f, window.ScaleX);
		for (int tick = 0; tick < 7; tick++)
			window.Update();
		window.Update();
		Assert.True(window.ScaleX > 1f);
	}

	[Fact]
	public void ApplyScalesAboutTheCenterAndFadesTheColour()
	{
		UiWindowTransition window = new();
		window.Show();
		for (int tick = 0; tick < 4; tick++)
			window.Update();
		UiDrawList draw = new();
		draw.Add(new UiQuad(new Vector2(100f, 100f), new Vector2(40f, 20f), new Vector4(0f, 0f, 1f, 1f), null, 0xFFFFFFFFu));

		window.Apply(draw, 0, new Vector2(120f, 110f));

		Assert.Equal(0x88FFFFFFu, draw.Quads[0].Color);
		Assert.Equal(new Vector2(100f, 100f), draw.Quads[0].Position);
	}
}
