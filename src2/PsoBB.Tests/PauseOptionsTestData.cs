using System.Buffers.Binary;
using System.Numerics;
using System.Text;
using PsoBB.Configuration;
using PsoBB.Game;
using PsoBB.Gui;
using PsoBB.Platform;
using PsoBB.Scenes;
using PsoBB.Text;

namespace PsoBB.Tests;

/// <summary>
/// Builds the original two-level text container and the panel dependencies for the pause option tests.
/// </summary>
internal static class PauseOptionsTestData
{
	internal static UiTextTable CreateTextTable()
	{
		Dictionary<(int Table, int Index), string> entries = new()
		{
			[(0, 0)] = "Keyboard Config",
			[(0, 6)] = "Function Key Setting",
			[(0, 7)] = "Menu Shortcuts",
			[(0, 8)] = "Chat Shortcuts",
			[(0, 9)] = "Keyboard Controls",
			[(0, 10)] = "Mouse Controls",
			[(0, 11)] = "Off",
			[(0, 12)] = "Drag",
			[(0, 13)] = "Hold",
			[(0, 17)] = "Pad Button Config",
			[(0, 84)] = "Custom",
			[(0, 85)] = "Return to default.",
			[(0, 86)] = "May I return the present setup to a default setup?",
			[(11, 61)] = "Options",
			[(11, 121)] = "Map Direction",
			[(11, 123)] = "Cursor Position",
			[(11, 124)] = "Message Speed",
			[(11, 125)] = "Vibration ",
			[(11, 129)] = "Auto Disconnect",
			[(11, 130)] = "Brightness",
			[(11, 131)] = "Fixed",
			[(11, 132)] = "Non-fixed",
			[(11, 133)] = "L trigger:Camera\nR trigger:Action Menu",
			[(11, 134)] = "L trigger:Action Menu\nR trigger:Camera",
			[(11, 135)] = "Saved",
			[(11, 136)] = "Non-Saved",
			[(11, 137)] = "Slow",
			[(11, 138)] = "Normal",
			[(11, 139)] = "Fast",
			[(11, 140)] = "Very Fast",
			[(11, 141)] = "15 minutes",
			[(11, 142)] = "30 minutes",
			[(11, 143)] = "45 minutes",
			[(11, 144)] = "60 minutes",
			[(11, 146)] = "+2 level",
			[(11, 147)] = "+1 level",
			[(11, 148)] = "Normal",
			[(11, 149)] = "-1 level",
			[(11, 150)] = "-2 level",
			[(11, 196)] = "On",
			[(11, 197)] = "Off",
		};
		return UiTextTable.Parse(BuildContainer(entries));
	}

	internal static PauseOptionsPanel CreatePanel(
		out MemoryGameSettings settings,
		out GameOptions options,
		out PauseOptionState state,
		out RecordingTextSurface textSurface,
		bool padButtonConfigAvailable = false,
		Action<int>? applyBrightness = null)
	{
		settings = new MemoryGameSettings();
		options = new GameOptions();
		state = new PauseOptionState();
		textSurface = new RecordingTextSurface();
		return new PauseOptionsPanel(
			options,
			settings,
			CreateTextTable(),
			state,
			new Vector2(400f, 220f),
			padButtonConfigAvailable,
			textSurface,
			applyBrightness);
	}

	internal static void OpenRow(PauseOptionsPanel panel, int optionId)
	{
		panel.List.SelectedIndex = panel.OptionIds.ToList().IndexOf(optionId);
		panel.Update(0f);
		panel.List.ActivateSelected();
		panel.Update(0f);
		panel.Update(0f);
	}

	private static byte[] BuildContainer(IReadOnlyDictionary<(int Table, int Index), string> entries)
	{
		const int tableCount = 12;
		int[] counts = new int[tableCount];
		foreach (KeyValuePair<(int Table, int Index), string> entry in entries)
			counts[entry.Key.Table] = Math.Max(counts[entry.Key.Table], entry.Key.Index + 1);
		string[][] values = new string[tableCount][];
		for (int table = 0; table < tableCount; table++)
		{
			values[table] = new string[counts[table]];
			Array.Fill(values[table], "");
		}
		foreach (KeyValuePair<(int Table, int Index), string> entry in entries)
			values[entry.Key.Table][entry.Key.Index] = entry.Value;
		int pointerStart = 4 + (tableCount * 4);
		int stringOffset = pointerStart + (counts.Sum() * 4);
		byte[] data = new byte[stringOffset + values.Sum(table => table.Sum(text => Encoding.Unicode.GetByteCount(text) + 2))];
		BinaryPrimitives.WriteInt32LittleEndian(data, tableCount);
		int cursor = 4;
		foreach (int count in counts)
		{
			BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(cursor), count);
			cursor += 4;
		}
		cursor = pointerStart;
		foreach (string[] table in values)
		{
			foreach (string text in table)
			{
				BinaryPrimitives.WriteInt32LittleEndian(data.AsSpan(cursor), stringOffset);
				cursor += 4;
				int written = Encoding.Unicode.GetBytes(text, data.AsSpan(stringOffset));
				stringOffset += written;
				data[stringOffset++] = 0;
				data[stringOffset++] = 0;
			}
		}
		Array.Resize(ref data, stringOffset);
		return data;
	}
}

/// <summary>
/// Records the text a control draws without requiring a font or a graphics device.
/// </summary>
internal sealed class RecordingTextSurface : IUiTextSurface
{
	internal List<TextDraw> Draws { get; } = [];

	public float Measure(string? text) => (text?.Length ?? 0) * 8f;

	public void Draw(UiDrawList drawList, string? text, Vector2 position, uint color, float maxWidth = 0f)
		=> Draws.Add(new TextDraw(text ?? string.Empty, position, color, maxWidth));

	internal readonly record struct TextDraw(string Text, Vector2 Position, uint Color, float MaxWidth);
}
