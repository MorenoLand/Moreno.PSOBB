using System.Diagnostics.CodeAnalysis;
using System.Globalization;

namespace PsoBB.Platform.Web;

/// <summary>
/// The client's persisted settings stored under typed keys in browser storage.
/// </summary>
public sealed class BrowserGameSettings : IGameSettings
{
	private const string KeyPrefix = "psobb.setting.";
	private const char FieldSeparator = '\u001f';
	private const char StringKind = 's';
	private const char IntegerKind = 'i';
	private const char BinaryKind = 'b';
	private readonly IBrowserStorage _storage;

	/// <summary>
	/// Creates a settings store over the supplied browser storage.
	/// </summary>
	/// <param name="storage">The browser storage.</param>
	public BrowserGameSettings(IBrowserStorage storage)
	{
		ArgumentNullException.ThrowIfNull(storage);
		_storage = storage;
	}

	/// <inheritdoc/>
	public bool TryGetString(string name, [NotNullWhen(true)] out string? value)
	{
		if (TryReadPayload(name, StringKind, out string payload))
		{
			value = payload;
			return true;
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetInt32(string name, out int value)
	{
		if (TryReadPayload(name, IntegerKind, out string payload) && int.TryParse(payload, NumberStyles.Integer, CultureInfo.InvariantCulture, out value))
			return true;
		value = 0;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetBinary(string name, [NotNullWhen(true)] out byte[]? value)
	{
		if (TryReadPayload(name, BinaryKind, out string payload))
		{
			try
			{
				value = Convert.FromBase64String(payload);
				return true;
			}
			catch (FormatException)
			{
			}
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public void SetString(string name, string value)
	{
		ArgumentNullException.ThrowIfNull(value);
		WritePayload(name, StringKind, value);
	}

	/// <inheritdoc/>
	public void SetInt32(string name, int value) => WritePayload(name, IntegerKind, value.ToString(CultureInfo.InvariantCulture));

	/// <inheritdoc/>
	public void SetBinary(string name, ReadOnlySpan<byte> value) => WritePayload(name, BinaryKind, Convert.ToBase64String(value));

	/// <inheritdoc/>
	public bool Remove(string name)
	{
		string key = GetKey(name);
		if (_storage.Get(key) is null)
			return false;
		_storage.Remove(key);
		return true;
	}

	/// <inheritdoc/>
	public IReadOnlyList<string> GetNames()
	{
		List<string> names = [];
		foreach (string key in _storage.GetKeys())
		{
			if (!key.StartsWith(KeyPrefix, StringComparison.OrdinalIgnoreCase))
				continue;
			string? stored = _storage.Get(key);
			if (stored is not null && TryDecodeName(stored, out string name))
				names.Add(name);
		}
		names.Sort(StringComparer.OrdinalIgnoreCase);
		return names;
	}

	private bool TryReadPayload(string name, char kind, out string payload)
	{
		string? stored = _storage.Get(GetKey(name));
		if (stored is null || stored.Length < 3 || stored[0] != kind)
		{
			payload = string.Empty;
			return false;
		}
		int separator = stored.IndexOf(FieldSeparator, 1);
		if (separator < 0)
		{
			payload = string.Empty;
			return false;
		}
		payload = stored[(separator + 1)..];
		return true;
	}

	private void WritePayload(string name, char kind, string payload) => _storage.Set(GetKey(name), $"{kind}{name}{FieldSeparator}{payload}");

	private static string GetKey(string name) => KeyPrefix + ValidateName(name).ToLowerInvariant();

	private static string ValidateName(string name)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(name);
		return name.Contains(FieldSeparator) ? throw new ArgumentException("A setting name cannot contain the storage field separator.", nameof(name)) : name;
	}

	private static bool TryDecodeName(string stored, out string name)
	{
		if (stored.Length < 3 || stored[0] is not (StringKind or IntegerKind or BinaryKind))
		{
			name = string.Empty;
			return false;
		}
		int separator = stored.IndexOf(FieldSeparator, 1);
		if (separator <= 1)
		{
			name = string.Empty;
			return false;
		}
		name = stored[1..separator];
		return true;
	}
}
