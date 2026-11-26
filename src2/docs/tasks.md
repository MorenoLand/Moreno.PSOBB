# Task scheduler

The client's per-frame task tree is `TObject`, rooted at the `TMainTask` object the start-up code
constructs. Each node owns a parent, a previous and next sibling, and a first child. `TaskScheduler`
is the portable root; `GameTask` is a node. The scheduler is not attached to `ClientHost` yet, so a
host can add and order its own tasks before connecting the update pass.

Evidence: `src/unnamed/unnamed_0817.c` (`f_008170d8` onward), `src/unnamed/unnamed_0819.c`
(`f_00819210`, `f_008193cc`, `f_00819438`) and the matching `TObject`/`TMainTask` reference names.

## Ported members

| Member | Original | Behaviour |
|---|---|---|
| `GameTask` constructor | `0x008193CC` | Stores the name, clears the flags and starts detached with a self-referential previous link |
| `GameTask.SetParent` | `0x008172D4` | Unlinks the node, then appends it to the new parent's child list |
| `GameTask.RunTasks` | `0x00817574` | Remembers the next sibling before each update, then runs children depth first |
| `GameTask.DeleteChildren` | `0x00817284` | Disposes the direct children |
| `GameTask.Dispose` | `0x008170D8` | Marks the node, deletes its children and unlinks it |
| `GameTask.NodeCount` | `0x0081737C` | Recursively counts descendants |
| `GameTask.AllParentsUnqueuedForDestruction` | `0x008173B4` | Walks the parent chain for a queued node |
| `GameTask.DeferRender` | `0x008173D0` | Toggles the deferred-render flag |
| `TaskScheduler` constructor | `0x00819210` | Creates the root and stores the frame clock |
| `TaskScheduler.RunTask` | `0x0081745C` | Applies the child pause mask, runs the tree and records the update phase |

## Ordering and flags

`scheduler.Add(task)` appends to the child list, so siblings run in insertion order. The pump runs a
node's own update before its children. It caches the next sibling first, which is why a task may
add, remove or queue another task during an update without disturbing the current pass.

`GameTaskFlags` keeps the original bits: queued destruction, child queued destruction, suspended
update, external pause, render and shadow suppression, deferred render and no-defer render.
`UpdateFlags` is a bit-per-child pause mask for whole layers, matching the original
`PAUSE_OR_RESUME_CHILD` handling.

## Frame time

The original `run_task` samples process globals for the frame interval. `TaskScheduler.Update`
reads the same interval from `IGameClock`, exposes it as `FrameDelta` and `FrameDeltaSeconds`, then
runs one update pass. The interval covers only the time since the previous `Update`; it never
accumulates.

## Limits

- The render, shadow and deferred-object traversals are not ported; only the update pump and node
  lifetime are in this batch.
- `TMainTask::init_main_task` is not ported: the allocator heaps and the fixed task-layer children
  are created by the host when it attaches.
- Managed exceptions propagate out of `Update`; the original has no exception path between tasks.
- Disposal replaces the original heap delete. A cached sibling that was disposed by another task is
  skipped instead of being dereferenced after free.
