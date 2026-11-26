namespace PsoBB.Platform;

/// <summary>
/// A path inside the client's data root, always relative and written with forward slashes.
/// </summary>
/// <remarks>
/// The original opens files by Win32 paths relative to its working folder; this type keeps drive letters, backslashes and host separators out of the portable client, and comparisons ignore case because the client shipped on case-insensitive file systems.
/// </remarks>
public readonly struct GamePath : IEquatable<GamePath>
{
	private const string InvalidNameCharacters = "<>:\"|?*";
	private readonly string? _value;

	/// <summary>
	/// Gets the data root, which is the empty path.
	/// </summary>
	public static GamePath Root => default;

	/// <summary>
	/// Gets a value indicating whether this path is the data root.
	/// </summary>
	public bool IsRoot => string.IsNullOrEmpty(_value);

	/// <summary>
	/// Gets the last segment of the path, or the empty string for the root.
	/// </summary>
	public string Name
	{
		get
		{
			if (IsRoot)
				return string.Empty;
			int slash = _value!.LastIndexOf('/');
			return slash < 0 ? _value : _value[(slash + 1)..];
		}
	}

	/// <summary>
	/// Gets the directory that contains this path, or the root for a top-level path.
	/// </summary>
	public GamePath Parent
	{
		get
		{
			if (IsRoot)
				return Root;
			int slash = _value!.LastIndexOf('/');
			return slash < 0 ? Root : new GamePath(_value[..slash]);
		}
	}

	/// <summary>
	/// Parses a path, normalising empty segments, <c>.</c> and <c>..</c>.
	/// </summary>
	/// <param name="path">The path to parse.</param>
	/// <returns>The normalised path.</returns>
	/// <exception cref="ArgumentNullException"><paramref name="path"/> is null.</exception>
	/// <exception cref="FormatException"><paramref name="path"/> is not a relative portable path.</exception>
	public static GamePath Parse(string path)
	{
		ArgumentNullException.ThrowIfNull(path);
		if (!TryParse(path, out GamePath result))
			throw new FormatException($"'{path}' is not a relative path inside the data root.");
		return result;
	}

	/// <summary>
	/// Tries to parse a path, returning the root for an empty path.
	/// </summary>
	/// <param name="path">The path to parse; null fails.</param>
	/// <param name="result">The normalised path when parsing succeeds.</param>
	/// <returns><see langword="true"/> when the path is relative and portable.</returns>
	public static bool TryParse(string? path, out GamePath result)
	{
		result = Root;
		if (path is null)
			return false;
		if (path.Length == 0)
			return true;
		if (path.Contains('\0') || path.Contains('\\') || path.Contains(':'))
			return false;
		if (path[0] == '/')
			return false;
		List<string> segments = [];
		int start = 0;
		while (start <= path.Length)
		{
			int slash = path.IndexOf('/', start);
			int end = slash < 0 ? path.Length : slash;
			string segment = path[start..end];
			if (segment.Length != 0 && segment != ".")
			{
				if (segment == "..")
				{
					if (segments.Count == 0)
						return false;
					segments.RemoveAt(segments.Count - 1);
				}
				else
				{
					foreach (char character in segment)
						if (character < ' ' || InvalidNameCharacters.Contains(character))
							return false;
					if (segment[^1] is ' ' or '.')
						return false;
					segments.Add(segment);
				}
			}
			if (slash < 0)
				break;
			start = slash + 1;
		}
		result = segments.Count == 0 ? Root : new GamePath(string.Join('/', segments));
		return true;
	}

	/// <summary>
	/// Appends a relative path to an existing directory path.
	/// </summary>
	/// <param name="parent">The directory path that receives the child.</param>
	/// <param name="relative">The relative child path, which may contain <c>..</c>.</param>
	/// <returns>The combined and normalised path.</returns>
	public static GamePath Combine(GamePath parent, string relative)
	{
		ArgumentNullException.ThrowIfNull(relative);
		if (relative.StartsWith('/'))
			throw new FormatException($"'{relative}' is not a relative child path.");
		return parent.IsRoot ? Parse(relative) : Parse($"{parent}/{relative}");
	}

	/// <inheritdoc/>
	public bool Equals(GamePath other) => string.Equals(_value ?? string.Empty, other._value ?? string.Empty, StringComparison.OrdinalIgnoreCase);

	/// <inheritdoc/>
	public override bool Equals(object? obj) => obj is GamePath other && Equals(other);

	/// <inheritdoc/>
	public override int GetHashCode() => StringComparer.OrdinalIgnoreCase.GetHashCode(ToString());

	/// <inheritdoc/>
	public override string ToString() => _value ?? string.Empty;

	/// <summary>
	/// Returns whether both paths name the same location, ignoring case.
	/// </summary>
	/// <param name="left">The first path.</param>
	/// <param name="right">The second path.</param>
	/// <returns><see langword="true"/> when the paths are equal.</returns>
	public static bool operator ==(GamePath left, GamePath right) => left.Equals(right);

	/// <summary>
	/// Returns whether the paths name different locations.
	/// </summary>
	/// <param name="left">The first path.</param>
	/// <param name="right">The second path.</param>
	/// <returns><see langword="true"/> when the paths differ.</returns>
	public static bool operator !=(GamePath left, GamePath right) => !left.Equals(right);

	private GamePath(string value)
	{
		_value = value;
	}
}
