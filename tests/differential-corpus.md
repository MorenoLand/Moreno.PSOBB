# Differential corpus

## Corpus

The corpus is the 30 retail oracle frames `t00` to `t29` in `build/oracle-captures`. They come from one
`PsoBBHost.exe` session at one frame per second, 1024x768 client, retail data folder, no input injected.
The folder's `README.txt` lists the states: logos (`t00`-`t06`), title (`t07`-`t10`), status (`t11`,
`t12`), and connection (`t13`-`t29`).

## Procedure

1. Run `bin/PsoBBHost.exe` with the retail data folder and no input. Capture one frame per second for
   30 seconds. The retail flow reaches the menu at about nine seconds without input.
2. Run the Windows publish (`build/publish-windows`) with the same data folder and no input. Capture the
   same frames.
3. Compare frame `i` with oracle frame `t(i)`, state by state: startup, title, status, connection.
4. The corpus passes when each state matches in layout and text. The `DLL ERROR` marker in `t07` comes
   from the host, not the design, and is excluded from the comparison.

## Limits

- The frames verify layout and state only. Ports still follow the machine code and never rebuild a screen
  from the screenshots.
- Input-driven states (menu selection, register dialog, exit confirmation) are not in this corpus. They
  need a recorded input corpus, which needs approval.

## Status

Defined. Not run. Running it means capturing both windows, which is a desktop action; the oracle frames
are already on disk and the README asks not to relaunch the oracle unless a state is missing.
