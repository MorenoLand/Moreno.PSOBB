# Field camera controller object

Facts read from the lifted code and disassembly. Names are not assigned to fields that no method
has been read for.

- The global at `0x00A48A54` holds the camera controller. `0x004D2B18` constructs it: vtable
  `0x00AFC590`, field of view `0x3555` at `+0x19C`, and `[global+4]` loaded from `0x009ACB64`.
- The constructor zeroes about a hundred dword fields between `+0x1C` and `+0x1D0`
  (for example `+0x8C..+0xAC`, `+0x134..+0x160`, `+0x164..+0x198`, `+0x1A0..+0x1C0`).
- `0x004D2FB4` sets the active camera mode. It reads the mode byte at `0x00A489F4`, takes the
  mode object from the table at `0x00A48A00` (indexed by that byte), stores its argument at
  `+0x1C` and `+0x20` of that object, calls the object's vtable slot `+0x1C`, and sets bit
  `0x800` in the flags word at `0x00A489FC`. It then calls the same slot on the default object
  at `[0x00A48A00]` and copies fields `+0x3C..+0x50` of that object to `+0xD4..+0xDC` and
  `+0x104..+0x10C` of the camera controller.
- The port's `FieldCamera` models modes and position only; it carries no `[Original]` addresses
  for this object yet.

## Methods and update structure

- The vtable at `0x00AFC590` has three real slots: `0x004D2610` (scalar-deleting destructor, absorbed),
  `0x004D386C` (per-frame update, 263 bytes) and `0x004D4048` (282 bytes, not read yet).
- The destructor clears `0x00A48A54`, destroys the 13 objects of the mode table at `0x00A48A00`
  (matching `FieldCamera.ModeCount`) and clears `0x00A489F8`.
- `0x004D386C` sets byte `+0x1C`, runs the steps `0x004D3974` (mode switch from the flags word at
  `0x00A489FC`, using the local player looked up by `0x0068D5A8(0x00A9C4F4)`), `0x004D3ABC` and
  `0x004D3EF4`, derives a viewing direction from camera fields `+0x178..+0x18C` plus `+0x68..+0x70`
  of the active mode object, normalises it with the ported `Vector3` helpers (`0x0082DEF4`,
  `0x0082DF08`, `0x0083173C`), stores eye and direction in the globals `0x00A48780..0x00A48794`,
  builds the view matrix with `0x00782984(0x00A48780, 0x00A48980)` and finishes with `0x004D3FB0`.
- Still to read before the controller can be ported: `0x004D3ABC`, `0x004D3EF4`, `0x004D3FB0`,
  `0x004D4048`, `0x0068D5A8`, `0x004D3AA0` and the 13 mode objects.

## Update steps read so far

- `0x004D3ABC` runs the active mode object (`[0x00A48A00 + 4 * byte 0x00A489F4]`): vtable slot `+4` unless flag `0x800`
  is set in `0x00A489FC`, slot `+0x10` with argument 1 when flag `0x80` is set and 0 when flag `2` is set, then
  `0x004D1FF4`. With flags `0x820` it runs `0x004D3E90`; otherwise it branches on the mode object's flags word `+0x38`
  (bit 1 `0x004D3BA8` and `0x004D3D6C`; bit 4 `0x004D3D14`; bit 8 `0x004D3C98`; else `0x004D3E90`) and then `0x004D3DF4`.
  It sets the field of view through `0x0082EBC8(fov at +0x19C, 1.1333334, 1.0, 21000.0)` (the values the handoff notes
  give for `FieldCamera`), calls the mode object's slot `+0x24`, and copies `+0x194` to `+0x94`.
- `0x004D3FB0` builds two rotation matrices on the matrix stack from the camera's `+0x194` and `+0x190` angles and
  stores the results in the globals `0x00A489E8` and `0x00A489DC`.
- Remaining work: the 13 concrete mode subclasses at `0x00A48A00` (`0x004D7E70`, `0x004D62BC`, `0x004D665C`, `0x004D71C4`, `0x004D1D48`, `0x004EB2C0`, `0x004D5A14`, `0x004D6E88`, `0x004D16B0`, `0x004D1A3C`).

## Ported members

`FieldCameraController` (`src2/PsoBB/Rendering/FieldCameraController.cs`), `FieldCameraMode` (`src2/PsoBB/Rendering/FieldCameraMode.cs`)
and `FieldCameraOverrideRequest` (`src2/PsoBB/Rendering/FieldCameraOverrideRequest.cs`) name the proven fields and globals:
- Globals: `0x00A48A54` (`Current`), `0x00A489FC` (`Flags`), `0x00A48A44` (`SnapRequested`), `0x00A489E8` (`RightAxis`),
  `0x00A489DC` (`UpAxis`), `0x00A489F4` (`ActiveModeIndex`), `0x00A489F5` (`PreviousModeIndex`), `0x00A48A00` (`Modes`),
  `0x00A48780` (`GlobalEye`), `0x00A4878C` (`GlobalForward`), `0x00A48980` (`GlobalInverseViewMatrix`),
  `0x00A489CC` (`GlobalUpAxis`), `0x00A16380` (`RenderRefreshDisabled`), `0x00A48B24` (`StoredMode5FieldOfView`),
  `0x00A94254` (`PlayerCharacter.Slots`), `0x00A9C4F4` (`Scene2TransitionOverlay.DisplayId`).
- Controller fields: `IsActiveFrame` at `+0x1C`, the override request at `+0x20..+0x64` (`ModeOffset` at `+0x20`, `Smoothing` at `+0x30`, `FieldOfViewDegrees` at `+0x34`,
  `Eye` at `+0x3C`, `Target` at `+0x48`), the shake offset at `+0x68..+0x70`, `TargetEntity` at `+0x90`, `AppliedYawAngle` at `+0x94`,
  `SlotEyes` at `+0xD4..+0xF8`, `SlotTargets` at `+0x104..+0x128`, `HasCollisionHit` at `+0x174`, the eye at `+0x178`, the target at `+0x184`
  (the update subtracts the eye from the target to get the viewing direction), `PitchAngle` at `+0x190`, `YawAngle` at `+0x194`,
  `FieldOfView` at `+0x19C`, the eye and target the active mode asks for at `+0x1A0` and `+0x1AC`, `EyeSmoothing` at `+0x1B8`,
  `TargetSmoothing` at `+0x1BC`, the offset countdown at `+0x1C0`, the offset amplitude at `+0x1C4`, and the eye recorded at `+0x1C8`.
- Ported helpers: `StepTowards` (`0x004D63B0`), `SmoothFollowDesired` (`0x004D3D14`), `SnapEyeAndSmoothTarget` (`0x004D3C98`),
  `StepOffsetCountdown` (`0x004D3DF4`), `SnapToDesired` (`0x004D3E90`), `AdvanceFlagsAndClearOverride` (`0x004D3EF4`),
  `UpdateOrientationAxes` (`0x004D3FB0`), `SelectMode` (`0x004D3AA0`), `UpdateModeSelection` (`0x004D3974`),
  `ResolveSnappedCollision` (`0x004D3BA8`), `ResolveTargetCollision` (`0x004D3D6C`), `UpdateActiveMode` (`0x004D3ABC`),
  `Update` (`0x004D386C`), `RenderRefresh` (`0x004D4048`), `ApplyViewOffset` (`0x004D4164`),
  `BindTargetEntity` (`0x004D2FB4`), `LockModeToTarget` (`0x004D307C`), `GetCurrentDisplaySlot` (`0x004D30CC`),
  `GetCurrentTargetClientId` (`0x004D30D4`), `GetCurrentModeIndex` (`0x004D30F4`), `RequestTemporaryMode` (`0x004D3180`),
  `ReleaseTemporaryMode` (`0x004D31DC`), `RestoreDefaultTargetAndMode` (`0x004D3250`),
  `ApplyOverrideRequestToActiveMode` (`0x004D3374`), `TriggerPresetShake` (`0x004D4288`),
  `TriggerCustomShake` (`0x004D430C`), `GetOffset` (`0x004D433C`), `GetOverrideRequest` (`0x004D4344`),
  `ComputeAnglesFromDirection` (`0x004D6448`), `FieldCameraMode.ApplyToController` (`0x004D1FF4`),
  `CameraView.ApplyLookAt` (`0x0082F108`), `CameraProjection.CreateViewportProjection` (`0x00836100`),
  `CameraProjection.CreateFieldProjection` (`0x0082EBC8`), `TransformationStack.CaptureInverseCurrent` (`0x00782984`),
  `TransformationStack.CopyCurrentTo` (`0x00831650`), `TransformationStack.ReplaceCurrent` (`0x0083B410`),
  `Matrix4x4.Determinant` (`0x0084A778`), `Matrix4x4.TryInvert` (`0x0083C670`),
  `PlayerCharacter.GetSlot` (`0x0068D5A8`), and `Scene2TransitionOverlay.GetDisplayId` (`0x007BB6D0`).
- Mode base (`FieldCameraMode`, ctor `0x004D1F68`, vtable `0x00AFC4E8`): `TargetEntity` at `+0x1C`, `TargetClientId` at `+0x20`,
  `Flags` at `+0x38`, `Eye` at `+0x3C`, `Target` at `+0x48`, `FieldOfView` at `+0x54`, `EyeSmoothing` at `+0x58`, `TargetSmoothing` at `+0x5C`.
