# Known differences

Deliberate differences from the original client, with the reason and the evidence.

## Start-up runs the hook registrations before the engine chain

`GameStartup.Start` runs `0x0082CB00` and `0x0082D330` directly. The original reaches them near
the end of `0x007A64B0`, after the allocator and subsystem initialisers from `0x0082E940` onward.
Those initialisers are not ported, and the two hook functions only write the process globals
`0xACBEB0`/`0xACBEB8` and `0xACBEE0`, so the port performs them and reports the unported chain as
the boundary instead of inventing the missing work.

## The initial scene is chosen explicitly

`0x007A6454` has no call site in the lift, but `0x007A5E84` reads `0xAAB384` before any visible
initialiser. `SceneManager.SelectInitialScene` therefore runs during start-up; the flag at
`0x00ACBEC0` is read from the data image exactly as the function expects.

## The display mode comes from the renderer settings

The original reads the mode from `0x00482AA0`, `0x004829E0` and `0x004829E8` inside `0x007A6080`,
after the configuration stage `0x0082D650` and the registry reads at `0x00482EAC`. The port takes
the same three values from `IRenderer.Settings`, the seam the host already applied, because the
configuration stage is not ported.

## Writable-data initial values are not checked in

`GameState.Reset` restores zero. The scene selection flag is the only start-up input read from the
data image; the remaining members are outputs of the ported stages. The retail image's initial
values for the writable-data range must be verified before whole-program comparison.
