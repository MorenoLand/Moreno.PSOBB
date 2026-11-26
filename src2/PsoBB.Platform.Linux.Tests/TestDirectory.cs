namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// A unique disposable folder under the repository build directory for a platform test.
/// </summary>
internal sealed class TestDirectory : IDisposable
{
	private TestDirectory(string path) => Path = path;

	public string Path { get; }

	public static TestDirectory Create()
	{
		string root = FindSolutionRoot(new DirectoryInfo(AppContext.BaseDirectory));
		string path = System.IO.Path.Combine(root, "build", "platform-tests", Guid.NewGuid().ToString("N"));
		Directory.CreateDirectory(path);
		return new TestDirectory(path);
	}

	public void Dispose() => Directory.Delete(Path, true);

	private static string FindSolutionRoot(DirectoryInfo start)
	{
		for (DirectoryInfo? directory = start; directory is not null; directory = directory.Parent)
			if (File.Exists(System.IO.Path.Combine(directory.FullName, "src2", "PsoBB.slnx")))
				return directory.FullName;
		throw new InvalidOperationException($"No solution root above '{start.FullName}'.");
	}
}
