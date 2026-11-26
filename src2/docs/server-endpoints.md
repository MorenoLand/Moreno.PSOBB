# Server endpoint selection

The retail client does not read `PSO.ini` for its server address. The patch, download, login and
game endpoints are hard-coded strings and 16-bit port constants selected by functions under
`0x00708xxx`.

## Selectors

| Address | Result |
|---|---|
| `0x007082DC` | Patch host: mode 1 selects `0x0096EB40`; mode 3 selects `0x0096EB50`; other selects `0x0096EB6C`. |
| `0x00708300` | Patch port: mode 1 selects `0x2AF8`; other selects `0x32C8`. |
| `0x00708318` | Alternate host: non-zero `0x0082D2F8` selects `0x0096EBA4`; mode 1 selects `0x0096EB40`; mode 3 selects `0x0096EB50`; other selects `0x0096EBA4`. |
| `0x00708348` | Alternate port: non-zero `0x0082D2F8` selects `0x2BC0`; mode 1 or 3 selects `0x2AF8`; other selects `0x2B5C`. |
| `0x007085D0` | Second host: mode 1 selects `0x0096EB00`; mode 3 selects `0x0096EB0C`; other selects `0x0096EB24`. |
| `0x007085F4` | Second host variant: non-zero `0x0082D2F8` selects `0x0096EB88`; mode 1 selects `0x0096EB00`; mode 3 selects `0x0096EB0C`; other selects `0x0096EB88`. |
| `0x00708624` | Second port: mode 1 reads `0x00A43670`; otherwise `0x00708514` chooses `0x2EE0` or `0x36B0`. |
| `0x00708658`, `0x00708670` | Second port: `0x2EE0`. |

`0x006DC358` supplies the mode compared against 1 and 3; `0x0082D2F8` selects the alternate
endpoint set.

## Port constants

| Constant | Decimal | Use |
|---|---:|---|
| `0x2AF8` | 11000 | Patch, and alternate in mode 1/3 |
| `0x2B5C` | 11100 | Alternate fallback |
| `0x2BC0` | 11200 | Alternate when `0x0082D2F8` is non-zero |
| `0x2EE0` | 12000 | Second endpoint |
| `0x32C8` | 13000 | Patch fallback |
| `0x36B0` | 14000 | Second endpoint fallback |

## Host strings

The shipped image has been host-patched at five sites in `0x0096EB00`-`0x0096EB88`, so those bytes
are not retail values. The unpatched executable is required to recover the original strings; the
selection logic and ports above are unchanged. The image also contains unreferenced strings at
`0x00989CFC` and `0x00989D10`, but no selector reads them.

## Portable status

`IGameConnection.Connect`, `GameSession.Connect` and `LoginFlow.Connect` accept a host and port, but
no program supplies one. The selector functions and endpoint table are not yet ported.
