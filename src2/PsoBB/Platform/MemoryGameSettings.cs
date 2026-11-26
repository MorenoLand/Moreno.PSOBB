using System.Diagnostics.CodeAnalysis;

namespace PsoBB.Platform;

/// <summary>
/// An in-memory settings store for tests and headless hosts.
/// </summary>
/// <remarks>
/// Values are copied on write and on read, names ignore case, and a stored value has exactly one type.
/// </remarks>
public sealed class MemoryGameSettings : IGameSettings
{
	private readonly object _gate = new();
	private readonly Dictionary<string, Entry> _entries = new(StringComparer.OrdinalIgnoreCase);

	/// <inheritdoc/>
	public bool TryGetString(string name, [NotNullWhen(true)] out string? value)
	{
		lock (_gate)
		{
			if (_entries.TryGetValue(ValidateName(name), out Entry? entry) && entry.Kind == SettingKind.String)
			{
				value = entry.Text!;
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
			if (_entries.TryGetValue(ValidateName(name), out Entry? entry) && entry.Kind == SettingKind.Integer)
			{
				value = entry.Integer;
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
			if (_entries.TryGetValue(ValidateName(name), out Entry? entry) && entry.Kind == SettingKind.Binary)
			{
				value = (byte[])entry.Bytes!.Clone();
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
			_entries[ValidateName(name)] = new Entry(SettingKind.String, value, 0, null);
	}

	/// <inheritdoc/>
	public void SetInt32(string name, int value)
	{
		lock (_gate)
			_entries[ValidateName(name)] = new Entry(SettingKind.Integer, null, value, null);
	}

	/// <inheritdoc/>
	public void SetBinary(string name, ReadOnlySpan<byte> value)
	{
		lock (_gate)
			_entries[ValidateName(name)] = new Entry(SettingKind.Binary, null, 0, value.ToArray());
	}

	/// <inheritdoc/>
	public bool Remove(string name)
	{
		lock (_gate)
			return _entries.Remove(ValidateName(name));
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

	private enum SettingKind
	{
		String,
		Integer,
		Binary,
	}

	private sealed record Entry(SettingKind Kind, string? Text, int Integer, byte[]? Bytes);
}
