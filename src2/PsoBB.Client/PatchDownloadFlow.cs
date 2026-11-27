using System.Numerics;
using PsoBB.Gui;
using PsoBB.Net.Patch;
using PsoBB.Platform;

namespace PsoBB.Client;

/// <summary>
/// Runs the patch-server exchange from the title menu and draws its state over the title art.
/// </summary>
public sealed class PatchDownloadFlow : IDisposable
{
	private readonly PatchSession _session;
	private readonly List<string> _messages = [];
	private bool _disposed;

	/// <summary>
	/// Creates the flow over a host connection and the data-root file system.
	/// </summary>
	/// <param name="connection">The host transport the session takes ownership of.</param>
	/// <param name="files">The data-root file system.</param>
	/// <param name="login">The account fields sent to the patch server.</param>
	public PatchDownloadFlow(IGameConnection connection, IGameFileSystem files, PatchLogin login)
	{
		_session = new PatchSession(connection, files, login);
		_session.MessageReceived += message => _messages.Add(message);
	}

	/// <summary>Gets the current patch state.</summary>
	public PatchSessionState State => _session.State;

	/// <summary>Gets the failure reason, or <see langword="null"/>.</summary>
	public string? FailureReason => _session.FailureReason;

	/// <summary>Gets the latest progress counters.</summary>
	public PatchProgress Progress => _session.Progress;

	/// <summary>Gets the last message the server sent.</summary>
	public string? LastMessage => _messages.Count == 0 ? null : _messages[^1];

	/// <summary>Opens the patch endpoint.</summary>
	/// <param name="host">The patch host.</param>
	/// <param name="port">The patch port.</param>
	/// <returns><see langword="true"/> when the transport opened.</returns>
	public bool Start(string host, int port) => _session.Connect(host, port);

	/// <summary>Pumps the patch session for one frame.</summary>
	public void Update() => _session.Pump();

	/// <summary>Draws the patch state over the title art.</summary>
	/// <param name="draw">The draw list that receives the quads.</param>
	/// <param name="surface">The surface that draws the state text.</param>
	public void Draw(UiDrawList draw, IUiTextSurface surface)
	{
		ArgumentNullException.ThrowIfNull(draw);
		ArgumentNullException.ThrowIfNull(surface);
		draw.Add(new UiQuad(new Vector2(0f, 28f), new Vector2(640f, 84f), new Vector4(0f, 0f, 1f, 1f), null, 0xC0000000u));
		string state = State switch
		{
			PatchSessionState.Disconnected => "Patch: disconnected",
			PatchSessionState.AwaitingWelcome => "Patch: waiting for welcome",
			PatchSessionState.AwaitingLogin => "Patch: waiting for login request",
			PatchSessionState.Authenticating => "Patch: authenticating",
			PatchSessionState.Downloading => $"Patch: {Progress.Percent}%",
			PatchSessionState.Completed => "Patch: complete",
			PatchSessionState.Redirected => "Patch: connecting to login server",
			PatchSessionState.Failed => "Patch: failed",
			_ => "Patch",
		};
		surface.Draw(draw, state, new Vector2(16f, 36f), 0xFFFFFFFFu);
		if (FailureReason is not null)
			surface.Draw(draw, FailureReason, new Vector2(16f, 56f), 0xFFFF8080u);
		else if (LastMessage is not null)
			surface.Draw(draw, LastMessage, new Vector2(16f, 56f), 0xFFFFFF80u);
	}

	/// <inheritdoc/>
	public void Dispose()
	{
		if (_disposed)
			return;
		_disposed = true;
		_session.Dispose();
	}
}
