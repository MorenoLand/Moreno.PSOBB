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
| 5 | `Scenes.CharacterMakingScene` | No audio pipeline is supplied |
| 10 | `Scenes.OfflineScene` | Loads `lightentry.bin` and the character save |
| 11 | `Scenes.OnlineScene` | Loading-only, or connected through `SceneNetworkOptions` |
| 13 | `Scenes.SaveGameScene` | Menu and title track; no save serializer |

Scene 2 has only the shared-screen transition `Scene2.SelectSharedScreenState`; it has no ported
initialiser, update or release, so the director stops at scene 2 with
`Scene 2 has no ported screen.` Scene 14 is an empty baked row and stops the same way.

## Online connection

`SceneNetworkOptions` supplies a `ServerHostTable`, a `ClientLoginPacket` and an
`IGameConnection` factory. When it is present, entering scene 11 constructs a `GameSession` and
`LoginFlow`, applies `OnlineScene.CompleteLoading(0)` (the port has no download transport, so only
the zero result is available), selects the login endpoint through `ServerEndpoints.SelectLoginEndpoint`
and calls `OnlineScene.Connect`. The scene then pumps the flow from its update path.

The endpoint inputs are the original selector inputs: client mode, alternate-endpoint-set flag,
configuration-test result, and the mode-1 runtime host and port. Command `0x19` stops at
`LoginFlowState.Redirected` and is exposed through `SceneDirectory.OnlineScene.Redirect`; the
director does not open the redirected game connection or invent a scene change.

## Host integration

`ClientHost.StartSceneDirector` creates the director over the host file system, renderer and input
layer, and `ClientHost.AttachDirector` accepts a supplied director. The host calls `Update` after
input and deferred work, draws the director's quads inside its frame, stops its loop when the
director stops, and disposes the director before the renderer. The director never creates a
renderer, input device, clock, dispatcher or file system of its own.

## Verification

`SceneDirectorTests` uses synthetic screens for entry, update, draw, release order, transitions 1
through 3, a transition outside that range, initialiser and release overrides, the pre-init clear,
scene zero, missing and out-of-table numbers, and disposal. `SceneDirectoryTests` uses synthetic GSL
data, a synthetic connection and a synthetic host table for the three login endpoint selections,
the login phases through character selection, the redirect boundary, a rejected login, cancel, exit,
loading without a host table, and release. `ClientHostTests` covers host ownership of an attached
director.

## Limits

- Scene 2 and every scene without a ported screen stop at the diagnostic boundary.
- The download transport and its nonzero loading results are not ported; only result zero is used.
- The redirected game connection, ship/block/lobby lists and the in-game scene are not ported.
- Scene 5 runs without music, scene 13 without the save-file state machine, and scene 10 without the
  field systems its release path normally tears down.
- Scene arguments are consumed only through the existing `GameState` fields; no new flow uses them.
