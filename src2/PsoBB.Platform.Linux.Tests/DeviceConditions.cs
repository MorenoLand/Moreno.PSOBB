namespace PsoBB.Platform.Linux.Tests;

/// <summary>
/// Marks a test that needs a working SDL input device and reports the device condition as its skip reason.
/// </summary>
[AttributeUsage(AttributeTargets.Method)]
internal sealed class SdlInputFactAttribute : FactAttribute
{
	public SdlInputFactAttribute()
	{
		string? reason = DeviceConditions.SdlInputUnavailable;
		if (reason is not null)
			Skip = reason;
	}
}

/// <summary>
/// Marks a test that needs a working OpenAL output device and reports the device condition as its skip reason.
/// </summary>
[AttributeUsage(AttributeTargets.Method)]
internal sealed class OpenAlFactAttribute : FactAttribute
{
	public OpenAlFactAttribute()
	{
		string? reason = DeviceConditions.OpenAlUnavailable;
		if (reason is not null)
			Skip = reason;
	}
}

/// <summary>
/// Probes optional devices once per test run and keeps the exact reason they are unavailable.
/// </summary>
internal static class DeviceConditions
{
	private static readonly Lazy<string?> SdlInputReason = new(ProbeSdlInput);
	private static readonly Lazy<string?> OpenAlReason = new(ProbeOpenAl);

	public static string? SdlInputUnavailable => SdlInputReason.Value;

	public static string? OpenAlUnavailable => OpenAlReason.Value;

	private static string? ProbeSdlInput()
	{
		if (LinuxGameInput.TryCreate(0, out LinuxGameInput? input, out string? reason))
		{
			input.Dispose();
			return null;
		}
		return $"SDL input unavailable: {reason}";
	}

	private static string? ProbeOpenAl()
	{
		if (OpenAlAudioDevice.TryCreate(out OpenAlAudioDevice? device, out string? reason))
		{
			device.Dispose();
			return null;
		}
		return $"OpenAL output unavailable: {reason}";
	}
}
