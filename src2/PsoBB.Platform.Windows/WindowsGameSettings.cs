using System.Diagnostics.CodeAnalysis;
using Microsoft.Win32;

namespace PsoBB.Platform.Windows;

/// <summary>
/// Settings stored as named values under one Windows registry key.
/// </summary>
/// <remarks>
/// Registry value names ignore case, values keep exactly one type, and the key is created on construction so the client can persist a fresh installation.
/// </remarks>
public sealed class WindowsGameSettings : IGameSettings, IDisposable
{
	private readonly RegistryKey _root;
	private readonly RegistryKey _key;
	private bool _disposed;

	/// <summary>
	/// Opens or creates the settings key at <paramref name="keyPath"/>.
	/// </summary>
	/// <param name="keyPath">The key path beneath <paramref name="hive"/>.</param>
	/// <param name="hive">The registry hive that holds the settings; the current user by default.</param>
	/// <exception cref="ArgumentNullException"><paramref name="keyPath"/> is null or empty.</exception>
	/// <exception cref="IOException">The key could not be created.</exception>
	/// <exception cref="UnauthorizedAccessException">The key is not writable.</exception>
	public WindowsGameSettings(string keyPath, RegistryHive hive = RegistryHive.CurrentUser)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(keyPath);
		RegistryKey root = RegistryKey.OpenBaseKey(hive, RegistryView.Default);
		RegistryKey key;
		try
		{
			key = root.CreateSubKey(keyPath, writable: true) ?? throw new IOException($"The registry key '{keyPath}' could not be created.");
		}
		catch
		{
			root.Dispose();
			throw;
		}
		_root = root;
		_key = key;
	}

	/// <inheritdoc/>
	public bool TryGetString(string name, [NotNullWhen(true)] out string? value)
	{
		object? stored = Read(name);
		if (stored is string text && _key.GetValueKind(name) is RegistryValueKind.String or RegistryValueKind.ExpandString)
		{
			value = text;
			return true;
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetInt32(string name, out int value)
	{
		object? stored = Read(name);
		if (stored is int integer && _key.GetValueKind(name) == RegistryValueKind.DWord)
		{
			value = integer;
			return true;
		}
		value = 0;
		return false;
	}

	/// <inheritdoc/>
	public bool TryGetBinary(string name, [NotNullWhen(true)] out byte[]? value)
	{
		object? stored = Read(name);
		if (stored is byte[] bytes && _key.GetValueKind(name) == RegistryValueKind.Binary)
		{
			value = (byte[])bytes.Clone();
			return true;
		}
		value = null;
		return false;
	}

	/// <inheritdoc/>
	public void SetString(string name, string value)
	{
		ArgumentNullException.ThrowIfNull(value);
		ThrowIfDisposed();
		_key.SetValue(ValidateName(name), value, RegistryValueKind.String);
	}

	/// <inheritdoc/>
	public void SetInt32(string name, int value)
	{
		ThrowIfDisposed();
		_key.SetValue(ValidateName(name), value, RegistryValueKind.DWord);
	}

	/// <inheritdoc/>
	public void SetBinary(string name, ReadOnlySpan<byte> value)
	{
		ThrowIfDisposed();
		_key.SetValue(ValidateName(name), value.ToArray(), RegistryValueKind.Binary);
	}

	/// <inheritdoc/>
	public bool Remove(string name)
	{
		ThrowIfDisposed();
		string validated = ValidateName(name);
		foreach (string storedName in _key.GetValueNames())
		{
			if (!string.Equals(storedName, validated, StringComparison.OrdinalIgnoreCase))
				continue;
			_key.DeleteValue(storedName, throwOnMissingValue: false);
			return true;
		}
		return false;
	}

	/// <inheritdoc/>
	public IReadOnlyList<string> GetNames()
	{
		ThrowIfDisposed();
		string[] names = _key.GetValueNames();
		Array.Sort(names, StringComparer.OrdinalIgnoreCase);
		return names;
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_key.Dispose();
		_root.Dispose();
	}

	private object? Read(string name)
	{
		ThrowIfDisposed();
		string validated = ValidateName(name);
		return _key.GetValue(validated, null, RegistryValueOptions.DoNotExpandEnvironmentNames);
	}

	private void ThrowIfDisposed() => ObjectDisposedException.ThrowIf(_disposed, this);

	private static string ValidateName(string name)
	{
		ArgumentException.ThrowIfNullOrWhiteSpace(name);
		return name;
	}
}
