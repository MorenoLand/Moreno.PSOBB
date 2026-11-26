# Scene 11: online mode

Scene 11 is the online-mode entry screen. The baked table row is `0x007BD97C` (init),
`0x007BCBC4` (update) and `0x007BCB04` (release).

## Evidence

- `0x007BD97C` clears `0x00AAE6D0` and `0x00AAECBC`, resets the scene renderer through
  `0x0082ACD8(0,0,0)`, stores scene parameter 2 through `0x007A6198` and stores root scene 11
  through `0x007A618C`. It then runs the 23-entry initialiser table at `0x00A0F460` through
  `0x0078B184`.
- The same initialiser starts the loading object through `0x00407B74` and pumps
  `0x0083ADBC`, `0x007BECD4`, `0x007BFBA0`, `0x0081745C`, `0x00817604`, `0x00818F80`,
  `0x00814168` and `0x0080030C` until `0x0040821C` reports a result. A result of 3 stores root
  scene 0, every other nonzero result stores root 2, and both request scene 2. A zero result keeps
  scene 11 and initialises the network manager through `0x00797908`, `0x00800674` and `0x0079B698`.
- `0x007BCBC4` calls `0x007BD2F0` when `0x00A95624` is nonzero and `0x007BCBF0` otherwise.
  `0x007BCBF0` requests scene 2 when the download-completion flag `0x00AAB20C` is 1, requests
  scene 0 when the cancel check `0x007BFEDC` fires, and clears its page flags through
  `0x007A6154`, `0x007A6128` and `0x007A6108`. The loading cancel helper `0x007BD764` and the
  connected cancel helper `0x007BD2DC` both end in `RequestScene(0)`; `0x007BD764` also clears
  `0x00A95624`.
- `0x007BCB04` releases the scene systems with `0x007BCA98`, `0x005BADD0`, `0x0079F1D8`,
  `0x006FFA24`, `0x00815434`, `0x008148E4` and the two `0x0078B0A0` tables, then clears
  `0x00AAECBC`, `0x00A9C4F4` and `0x00A8D4E0`.
- The download window `0x00407F6C` draws the upper panel from the pair at `0x008F8EA4`
  (`0,28` and `640,84`), the lower panel from `0x008F8EB4` (`0,310` and `640,136`) through the
  four-vertex fan at `0x00407FD8`, and the UTF-16 label `Connecting...` from `0x008F8F2C` at
  `(23,331)` through `0x007AB534`. `0x00407458` selects the `f256_slot_eng`, `f256_slot` or
  `f256_slot_cs` surface from the language byte at `0x00A9CD44`.
- Scene 10 is the offline sibling. `0x007BC27C` stores scene parameter 2 and root 10, runs the
  character load at `0x006C324C`, sets `0x00A95624` and dispatches `0x007BB6D8` to
  `0x007BB6F0` or `0x007BBBA8`; `0x007BBFB0` is its release. Scene 11 replaces that game start
  with the network-manager initialisation and keeps the same scene parameter and transition shape.
  The scene-10 port is described in `scene-10-offline.md`.

## Ported surface

`PsoBB.Scenes.OnlineScene` starts in `Loading`, stores scene parameter 2 and root 11, and loads the
selected progress-bar surface through `IDataFiles`. `CompleteLoading` applies the `0x007BD97C` tail:
zero keeps the scene, 3 stores root 0 and requests scene 2, and any other nonzero result stores
root 2 and requests scene 2.

The two download panels are submitted to `UiDrawList` at their original positions and sizes with
`0x8F000000` and no texture. The connecting label and its `(23,331)` position are exposed for the
merged `TextRenderer` through `DrawStatus`. `Cancel` closes the connection and requests scene 0.

The network exchange is the merged `PsoBB.Net.LoginFlow` over `GameSession`. The scene exposes the
flow, pumps it during `Update`, maps its states, delegates the 0xE3 character preview request to
`RequestCharacterSelection`, and records the 0xE4 approval and the 0x19 redirect. It does not send
a packet itself and does not duplicate the session. Once command 0x19 arrives, the scene hands the
same session to `GameServerFlow`, reopens the redirect target, sends the stored 0x93 login after the
second welcome, and feeds the game and lobby replies into `LobbyWorld`; the scene reports
`OnlineSceneState.GameServer` while that flow is healthy. `SceneDirector` supplies the flow and the
selected login endpoint when `SceneNetworkOptions` carries a host table; see `scene-director.md`.

## Unported boundary

- The shared lobby and game update `0x007BCBF0`/`0x007BD2F0`, its page flags, the 3D rings at
  `0x007BC4E8`/`0x007BC508`, the frame timer `0x007BD288`, the network manager at `0x00797908`
  and the scene-2 hand-off are not ported. The redirected game-server phase stops at the first
  command outside the 0x64/0x67, 0x81/0x83 and subcommand set: command 0x1A only copies its
  fixed-size payload at `0x007C8854` and has no record codec in the lift. The 0x81 handler at
  `0x007C8DC4` forwards a simple-mail entry to the callback at `0x0081384C`, and the 0x83 handler at
  `0x007C89EC` stores a header-counted lobby-menu list at `this+0x13CB8`; `SimpleMailPacket` and
  `LobbyMenuPacket` decode those records into `LobbyWorld.SimpleMails` and `LobbyWorld.LobbyMenu`.
- The progress-window state bit that gates the two panels in `0x00407FB0` and `0x0040808C` is not
  reproduced; the port draws them while the scene is loading or connecting.
- The 23-entry initialiser table, the allocator, the download transport and the message-table
  strings behind `0x00792FE8` are not ported.

## Verification

`OnlineSceneTests` builds a synthetic GSL archive with the English and neutral progress-bar
surfaces. It covers scene parameter and root, all loading results, cancel input, the two panel
quads and their renderer submission, the neutral fallback, a missing surface, merged-flow states,
the 0xE3/0xE4 character exchange, the 0x19 redirect, the redirected connection and second login,
the 0x64 and 0x67 lists, cancel and release after the redirect, a rejected login and idempotent
release. `GameServerFlowTests` and the packet codec tests cover the 0x81 mail and 0x83 lobby-menu
lists and the unsupported 0x1A command.
