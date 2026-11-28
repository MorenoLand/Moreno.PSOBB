# Server endpoints

The client has no configuration-file reader for its server address. `PsoBB.Net.ServerEndpoints`
selects the patch, download, login and game endpoints, and `PsoBB.Net.ServerHostTable` supplies the
seven hostname slots. The shipped image's hostname region is host-patched, so the host supplies
those strings; the selector branches and ports are the original ones.

## Host table

`ServerHostTable` exposes `PatchService`, `PatchAlternate`, `PatchFallback`, `LoginService`,
`LoginAlternate`, `LoginFallback` and `LoginSecondary`. `ServerEndpoints.GetPatchHost`,
`GetDownloadHost`, `GetLoginHost`, `GetSecondaryLoginHost` and `GetLoginConnectionHost` choose
between them from the client mode, the alternate-endpoint-set flag and the configuration-test
result.

The download host is empty when the alternate set is active or the mode is neither 1 nor 3.

## Ports

`ServerEndpoints` exposes:

- `PatchServicePort` = 11000 for mode 1 patch and mode 1/3 download.
- `PatchDefaultPort` = 13000 for every other patch mode.
- `AlternateEndpointPort` = 11200 for an active alternate set.
- `DownloadDefaultPort` = 11100 for the remaining download mode.
- `GamePort` = 12000 for both game selectors.
- `LoginDefaultPort` = 14000 when the configuration-test result is zero.

`GetLoginPort` returns the low 16 bits of the runtime port for mode 1, otherwise 12000 when the
configuration test is nonzero and 14000 when it is zero.

## Caller-level selection

`SelectPatchEndpoint` uses the runtime host and port for mode 1 and otherwise switches between the
patch and download pairs. `SelectLoginEndpoint` uses the runtime host and port for mode 1 and
otherwise switches between the first and secondary login hosts. The game connections redirected by
command `0x19` carry their own runtime host and port and do not use this table.

## Inputs and boundaries

The client mode, alternate-set flag, configuration-test result and mode-1 runtime host/port are
inputs because their producers are process state or an unported configuration check. The original
already forces the configuration test for mode 3 and for an alternate endpoint set. No hostname is
embedded in the port.
