# Scene director

`PsoBB.Client.SceneDirector` runs the ported scene loop. `PsoBB.Client.SceneDirectory` maps the baked
scene numbers to the ported scene classes. The loop is the port of `0x007A5E84`; the C lift is
`src/unnamed/unnamed_07a5.c` (`f_007a5e84`).

## Loop contract

The original loop reads `0x00AAB384` (current scene). While it is nonzero it:

1. clears `0x00AAB394` (transition) before the scene initialiser;
2. calls descriptor column 0 (initialiser) when it is nonzero;
3. calls column 1 (update) repeatedly while the transition is zero;
4. calls column 2 (release) after the update pass;
5. copies the current scene to `0x00AAB398` and switches to `0x00AAB388` only when the transition
   is 1, 2 or 3.

`SceneDirector.Update` performs one host-frame pass of that protocol. A scene entered in a pass
initialises and updates in the same pass. A transition requested by an update releases the screen at
the start of the next update, after the host has drawn the frame, so scene-owned textures remain
valid through rendering. An initialiser transition releases immediately and skips the update.
`SceneDirector.Draw` only submits the active screen; it never advances or releases the loop.

Scene zero stops the loop normally (`IsExited`). A number outside the 19-row baked table, or a
number with no ported screen, stops with `Diagnostic` and no substitute screen. Transition values
outside 1 through 3 reinitialise the same scene, as the original does.

## Scene mapping

| Scene | Ported screen | Notes |
|---|---|---|
| 1 | `Scenes.Scene1` | Shared `TextureCache`; optional cinematic descriptor |
| 2 | `Scenes.Scene2` | Needs a supplied `Scene2Interface` factory; `Start`/`Update`/`Draw`/`Release` |
| 5 | `Scenes.CharacterMakingScene` | No audio pipeline is supplied |
| 10 | `Scenes.OfflineScene` | Loads `lightentry.bin` and the character save |
| 11 | `Scenes.OnlineScene` | Loading-only, or connected through `SceneNetworkOptions` |
| 13 | `Scenes.SaveGameScene` | Menu and title track; no save serializer |

Scene 2's title skin and login list are separate ports. The caller supplies
`SceneDirectorOptions.Scene2Factory` (or the directory's `scene2Factory`); the directory builds a
fresh `Scene2Interface`, constructs `Scene2`, calls `Start`, then drives `Update`/`Draw` and calls
`Release` on exit. Without a factory the director stops with
`Scene 2 has no supplied interface.` Scene 14 is an empty baked row and stops with the generic
diagnostic.

## Online connection

`SceneNetworkOptions` supplies a `ServerHostTable`, a `ClientLoginPacket` and an
`IGameConnection` factory. When it is present, entering scene 11 constructs a `GameSession` and
`LoginFlow`, applies `OnlineScene.CompleteLoading(0)` (the port has no download transport, so only
the zero result is available), selects the login endpoint through `ServerEndpoints.SelectLoginEndpoint`
and calls `OnlineScene.Connect`. The scene then pumps the flow from its update path.

The endpoint inputs are the original selector inputs: client mode, alternate-endpoint-set flag,
configuration-test result, and the mode-1 runtime host and port. Command `0x19` opens the named
target through `GameServerFlow` on the next update and is exposed through
`SceneDirectory.OnlineScene.Redirect`. The director does not invent a scene change: the scene
reports `OnlineSceneState.GameServer` when the 0x64/0x67 replies arrive, and an unsupported list
command stops with a diagnostic.

`SceneDirectorOptions.LobbyHostFactory` supplies the field resources for scene 11. When it is
present, `SceneDirectory` wraps the same `OnlineScene` and `GameSession` in `LobbyScene`; when the
game server reaches the lobby or game phase, `LobbyScene` promotes its `LobbyWorld` into a
`FieldScene` over the host's scene-10 shell. Scene 11 stays current, matching the original scene
update, and no scene 10 transition is requested. The host supplies the map, camera, texture cache,
player, ground query and player model; `SceneDirector.DrawWorld` submits the field map before the
player models. A missing field host or a failed game-server step stops the director with a
diagnostic.

## Host integration

`ClientHost.StartSceneDirector` creates the director over the host file system, renderer and input
layer, and `ClientHost.AttachDirector` accepts a supplied director. The host calls `Update` after
input and deferred work, draws the director's quads inside its frame, stops its loop when the
director stops, and disposes the director before the renderer. The director never creates a
renderer, input device, clock, dispatcher or file system of its own.

## Verification

`SceneDirectorTests` uses synthetic screens for entry, update, draw, release order, transitions 1
through 3, a transition outside that range, initialiser and release overrides, the pre-init clear,
scene zero, missing and out-of-table numbers, and disposal. `LobbySceneTests` covers the Start Game
request, the host endpoint table, the redirect, lobby creation, controller movement, map then player
draw order, the missing field host and release. `SceneDirectoryTests` uses synthetic GSL
data, a synthetic connection and a synthetic host table for the three login endpoint selections,
the login phases through character selection, the redirect and redirected connection, a rejected
login, cancel, exit, loading without a host table, and release; it also runs scene 2's
`Start`/`Update`/`Draw`/`Release`
through the director in order, checks the missing-factory diagnostic, and asserts the scene 1→2
request uses transition 1. `ClientHostTests` covers host ownership of an attached director.

## Limits

- Scene 2 stops when no interface factory is supplied; every other scene without a ported screen
  stops at the diagnostic boundary.
- The download transport and its nonzero loading results are not ported; only result zero is used.
- The 0x1A list payload has no record codec; the redirected game connection handles the 0x64/0x67
  game and lobby lists and the 0x81/0x83 mail and lobby-menu lists, and stops at command 0x1A with
  a diagnostic. The in-game scene is not ported.
- Scene 5 runs without music, scene 13 without the save-file state machine, and scene 10 without the
  field systems its release path normally tears down.
- Scene arguments are consumed only through the existing `GameState` fields; no new flow uses them.
