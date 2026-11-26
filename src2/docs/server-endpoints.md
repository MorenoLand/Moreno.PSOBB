# Server endpoints

The client does not read a configuration file for its server address. The address and port are chosen by small functions under `0x00708xxx`, and the host strings live in the data image at `0x0096EB00`-`0x0096EBA4`.

## Runtime host table

The image region `0x0096EB00`-`0x0096EB88` is host-patched and the retail executable is not part of this repository, so the port never embeds a host name. `PsoBB.Net.ServerHostTable` supplies the seven slots:

| Slot | Image address | Selected by |
| --- | --- | --- |
| `PatchService` | `0x0096EB40` | `0x007082DC` and `0x00708318` for mode 1 |
| `PatchAlternate` | `0x0096EB50` | `0x007082DC` and `0x00708318` for mode 3 |
| `PatchFallback` | `0x0096EB6C` | `0x007082DC` for every other mode |
| `LoginService` | `0x0096EB00` | `0x007085D0` and `0x007085F4` for mode 1 |
| `LoginAlternate` | `0x0096EB0C` | `0x007085D0` and `0x007085F4` for mode 3 |
| `LoginFallback` | `0x0096EB24` | `0x007085D0` for every other mode |
| `LoginSecondary` | `0x0096EB88` | `0x007085F4` for an alternate set or any other mode |

The empty host at `0x0096EBA4` is not a slot; `0x00708318` returns an empty string for an alternate endpoint set or for a mode other than 1 or 3.

## Selectors

`PsoBB.Net.ServerEndpoints` reproduces each function:

| Function | Method | Result |
| --- | --- | --- |
| `0x007082DC` | `GetPatchHost` | mode 1 `PatchService`, mode 3 `PatchAlternate`, otherwise `PatchFallback` |
| `0x00708300` | `GetPatchPort` | mode 1 `11000`, otherwise `13000` |
| `0x00708318` | `GetDownloadHost` | alternate set empty, mode 1 `PatchService`, mode 3 `PatchAlternate`, otherwise empty |
| `0x00708348` | `GetDownloadPort` | alternate set `11200`, mode 1 or 3 `11000`, otherwise `11100` |
| `0x007084A4` | `GetLoginConnectionHost` | mode 1 the runtime host, otherwise `0x007085F4` or `0x007085D0` |
| `0x007085D0` | `GetLoginHost` | mode 1 `LoginService`, mode 3 `LoginAlternate`, otherwise `LoginFallback` |
| `0x007085F4` | `GetSecondaryLoginHost` | alternate set `LoginSecondary`, mode 1 `LoginService`, mode 3 `LoginAlternate`, otherwise `LoginSecondary` |
| `0x00708624` | `GetLoginPort` | mode 1 the runtime port, otherwise `12000` or `14000` |
| `0x00708658` | `GetGamePort` | always `12000` |
| `0x00708670` | `GetAlternateGamePort` | always `12000` |

The port immediates are `0x2AF8` (11000), `0x2B5C` (11100), `0x2BC0` (11200), `0x2EE0` (12000), `0x32C8` (13000) and `0x36B0` (14000). `GetLoginPort` returns the low 16 bits of the runtime dword at `0x00A43670` for mode 1. `SelectPatchEndpoint` and `SelectLoginEndpoint` apply the caller-level choice: mode 1 uses the runtime host and port, the patch caller switches between the patch and download selectors, and the login caller switches between the first and secondary login selectors.

## Boundaries

- `0x006DC358` is a constant zero in the lift; the real client mode is a selector input and only the values 1 and 3 differ from the rest.
- `0x0082D2F8` reads the process global at `0x00ACBE90`; its nonzero result is a selector input.
- `0x00708514` builds a string, encrypts it with the image bytes at `0x0096EAD8`, and compares the result with `0x0096EAF4`. That configuration check is not ported; its nonzero result is a selector input, and the original already forces that result to 1 for mode 3 and for an alternate endpoint set.
- The redirected game connection uses the runtime host and port carried by command `0x19`, not this table.
