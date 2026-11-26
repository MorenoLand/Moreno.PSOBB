namespace PsoBB.Platform.Windows.Tests;

/// <summary>
/// A unique folder under the repository build directory that is removed after the test.
/// </summary>
internal sealed class TestDirectory : IDisposable
{
	private TestDirectory(string directoryPath) => DirectoryPath = directoryPath;

	internal string DirectoryPath { get; }

	internal static TestDirectory Create()
	{
		string directoryPath = Path.Combine(FindRepositoryRoot(), "build", "platform-tests", Guid.NewGuid().ToString("N"));
		Directory.CreateDirectory(directoryPath);
		return new TestDirectory(directoryPath);
	}

	public void Dispose()
	{
		try
		{
			Directory.Delete(DirectoryPath, recursive: true);
		}
		catch (DirectoryNotFoundException)
		{
		}
	}

	private static string FindRepositoryRoot()
	{
		DirectoryInfo? directory = new(AppContext.BaseDirectory);
		while (directory is not null)
		{
			if (File.Exists(Path.Combine(directory.FullName, "src2", "PsoBB.slnx")))
				return directory.FullName;
			directory = directory.Parent;
		}
		throw new InvalidOperationException("The repository root was not found from the test output folder.");
	}
}
