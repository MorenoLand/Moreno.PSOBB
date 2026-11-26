using System.Diagnostics.CodeAnalysis;
using System.Text.Json;
using System.Text.Json.Serialization;

namespace PsoBB.Platform.Linux;

/// <summary>
/// Settings stored as typed values in a JSON file under a caller-provided folder.
/// </summary>
/// <remarks>
/// Names ignore case, a value has exactly one type, and every change is written through an atomic replacement of <see cref="FilePath"/>. The folder is created on the first write; a missing file reads as an empty store, while a malformed file is reported instead of being silently discarded.
/// </remarks>
public sealed class LinuxGameSettings : IGameSettings
{
	/// <summary>
	/// The settings file name inside the configured folder.
	/// </summary>
	public const string FileName = "settings.json";
	private static readonly JsonSerializerOptions Options = new()
	{
		WriteIndented = true,
		Converters = { new JsonStringEnumConverter() },
	};
	private readonly object _gate = new();
	private readonly string _directory;
	private Dictionary<string, Setting> _entries;

	/// <summary>
	/// Creates a settings store that reads and writes <see cref="FileName"/> in <paramref name="directory"/>.
	/// </summary>
	/// <param name="directory">The folder that holds the configuration file.</param>
	/// <exception cref="ArgumentException"><paramref name="directory"/> is empty or whitespace.</exception>
	/// <exception cref="InvalidDataException">The configuration file is malformed.</exception>
	public LinuxGameSettings(string directory)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(directory);
		_directory = Path.GetFullPath(directory);
		FilePath = Path.Combine(_directory, FileName);
		_entries = Load();
	}

	/// <summary>
	/// Gets the full path of the configuration file.
	/// </summary>
	public string FilePath { get; }

	/// <inheritdoc/>
	public bool TryGetString(string name, [NotNullWhen(true)] out string? value)
	{
		lock (_gate)
		{
			if (_entries.TryGetValue(ValidateName(name), out Setting? setting) && setting.Kind == SettingKind.String)
			{
				value = setting.Text!;
				return true;
			}
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetInt32(string name, out int value)
	{
		lock (_gate)
		{
			if (_entries.TryGetValue(ValidateName(name), out Setting? setting) && setting.Kind == SettingKind.Integer)
			{
				value = setting.Number;
				return true;
			}
		}
		value = 0;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetBinary(string name, [NotNullWhen(true)] out byte[]? value)
	{
		lock (_gate)
		{
			if (_entries.TryGetValue(ValidateName(name), out Setting? setting) && setting.Kind == SettingKind.Binary)
			{
				value = (byte[])setting.Bytes!.Clone();
				return true;
			}
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public void SetString(string name, string value)
	{
		ArgumentNullException.ThrowIfNull(value);
		lock (_gate)
			Commit(ValidateName(name), new Setting(SettingKind.String, value, 0, null));
	}

	/// <inheritdoc/>
	public void SetInt32(string name, int value)
	{
		lock (_gate)
			Commit(ValidateName(name), new Setting(SettingKind.Integer, null, value, null));
	}

	/// <inheritdoc/>
	public void SetBinary(string name, ReadOnlySpan<byte> value)
	{
		lock (_gate)
			Commit(ValidateName(name), new Setting(SettingKind.Binary, null, 0, value.ToArray()));
	}

	/// <inheritdoc/>
	public bool Remove(string name)
	{
		lock (_gate)
		{
			if (!_entries.ContainsKey(ValidateName(name)))
				return false;
			Commit(name, null);
			return true;
		}
	}

	/// <inheritdoc/>
	public IReadOnlyList<string> GetNames()
	{
		lock (_gate)
		{
			string[] names = new string[_entries.Count];
			_entries.Keys.CopyTo(names, 0);
			Array.Sort(names, StringComparer.OrdinalIgnoreCase);
			return names;
		}
	}

	private static string ValidateName(string name)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(name);
		return name;
	}

	private void Commit(string name, Setting? setting)
	{
		Dictionary<string, Setting> updated = new(_entries, StringComparer.OrdinalIgnoreCase);
		if (setting is null)
			updated.Remove(name);
		else
			updated[name] = setting;
		Save(updated);
		_entries = updated;
	}

	private Dictionary<string, Setting> Load()
	{
		Dictionary<string, Setting> entries = new(StringComparer.OrdinalIgnoreCase);
		if (!File.Exists(FilePath))
			return entries;
		string text = File.ReadAllText(FilePath);
		if (string.IsNullOrWhiteSpace(text))
			return entries;
		SettingsDocument document;
		try
		{
			document = JsonSerializer.Deserialize<SettingsDocument>(text, Options) ?? throw new InvalidDataException($"The settings file '{FilePath}' is empty or not a settings document.");
		}
		catch (JsonException exception)
		{
			throw new InvalidDataException($"The settings file '{FilePath}' is malformed.", exception);
		}
		foreach (StoredSetting stored in document.Values ?? [])
		{
			if (string.IsNullOrWhiteSpace(stored.Name))
				throw new InvalidDataException($"The settings file '{FilePath}' contains a value without a name.");
			if (stored.Kind is null || !Enum.IsDefined(stored.Kind.Value))
				throw new InvalidDataException($"The settings file '{FilePath}' contains an unknown value type.");
			Setting setting;
			switch (stored.Kind.Value)
			{
				case SettingKind.String:
					if (stored.Text is null)
						throw new InvalidDataException($"The settings file '{FilePath}' contains a string value without text.");
					setting = new Setting(SettingKind.String, stored.Text, 0, null);
					break;
				case SettingKind.Integer:
					setting = new Setting(SettingKind.Integer, null, stored.Integer, null);
					break;
				case SettingKind.Binary:
					if (stored.Base64 is null)
						throw new InvalidDataException($"The settings file '{FilePath}' contains a binary value without data.");
					byte[] bytes;
					try
					{
						bytes = Convert.FromBase64String(stored.Base64);
					}
					catch (FormatException exception)
					{
						throw new InvalidDataException($"The settings file '{FilePath}' contains invalid binary data.", exception);
					}
					setting = new Setting(SettingKind.Binary, null, 0, bytes);
					break;
				default:
					throw new InvalidDataException($"The settings file '{FilePath}' contains an unknown value type.");
			}
			if (!entries.TryAdd(stored.Name!, setting))
				throw new InvalidDataException($"The settings file '{FilePath}' contains the value '{stored.Name}' more than once.");
		}
		return entries;
	}

	private void Save(Dictionary<string, Setting> entries)
	{
		Directory.CreateDirectory(_directory);
		SettingsDocument document = new()
		{
			Values = [.. entries.OrderBy(pair => pair.Key, StringComparer.OrdinalIgnoreCase).Select(pair => new StoredSetting
			{
				Name = pair.Key,
				Kind = pair.Value.Kind,
				Text = pair.Value.Text,
				Integer = pair.Value.Number,
				Base64 = pair.Value.Bytes is null ? null : Convert.ToBase64String(pair.Value.Bytes),
			})],
		};
		string temporary = FilePath + ".tmp";
		using (FileStream stream = new(temporary, FileMode.Create, FileAccess.Write, FileShare.None))
		{
			JsonSerializer.Serialize(stream, document, Options);
			stream.Flush(true);
		}
		File.Move(temporary, FilePath, true);
	}
}

internal enum SettingKind
{
	String,
	Integer,
	Binary,
}

internal sealed record Setting(SettingKind Kind, string? Text, int Number, byte[]? Bytes);

internal sealed class SettingsDocument
{
	public List<StoredSetting>? Values { get; set; }
}

internal sealed class StoredSetting
{
	public string? Name { get; set; }
	public SettingKind? Kind { get; set; }
	public string? Text { get; set; }
	public int Integer { get; set; }
	public string? Base64 { get; set; }
}
