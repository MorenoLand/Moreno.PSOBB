namespace PsoBB.Net.Patch;

/// <summary>
/// A snapshot of the patch counters the original client maintains.
/// </summary>
/// <param name="TotalBytes">The total download size announced by command 0x11.</param>
/// <param name="ReceivedBytes">The bytes received across the session.</param>
/// <param name="Percent">The rounded session percentage.</param>
/// <param name="TotalFiles">The file count announced by command 0x11.</param>
/// <param name="FileNumber">The number of files opened so far.</param>
/// <param name="FileName">The current target path, or <see langword="null"/> when no file is open.</param>
/// <param name="FileLength">The current file's announced length.</param>
/// <param name="FileBytes">The bytes received for the current file.</param>
/// <param name="FilePercent">The rounded current-file percentage.</param>
public readonly record struct PatchProgress(
	uint TotalBytes,
	uint ReceivedBytes,
	uint Percent,
	uint TotalFiles,
	uint FileNumber,
	string? FileName,
	long FileLength,
	long FileBytes,
	uint FilePercent)
{
	/// <summary>
	/// Truncates one counter to the original client's integer percentage.
	/// </summary>
	/// <param name="value">The completed bytes or files.</param>
	/// <param name="total">The announced total; zero is treated as one.</param>
	/// <returns>The truncated percentage.</returns>
	[Original(0x0070BB1C)]
	public static uint PercentOf(uint value, uint total)
	{
		double denominator = total == 0 ? 1 : total;
		return (uint)((double)value / denominator * 100.0);
	}
}
