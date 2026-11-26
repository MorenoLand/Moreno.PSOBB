# Data files

`PsoBB.Data.DataFileRegistry` is the client's logical data-file registry. It reads the archive containers the client owns at start-up and exposes one narrow `IDataFiles` surface for named reads. `DataArchiveFile` exposes unnamed AFS sections and GSL entries by directory index.

## Lookup order

A named read checks a loose file under the data root first and then each registered archive in order. This is the order of the original stream loader: it probes a loose file's length, and only when the file is absent or empty does it search the `data.gsl` directory and extract the entry. The original file opener rejects an empty file, so an empty loose file never shadows an archive entry. Registering `data.gsl` first preserves the original precedence.

The first archive entry that matches a name wins when a directory repeats a name. Archive order decides between two archives that carry the same entry.

## Names

Names compare without case. The archive lookup lowercases the requested name and compares it ordinally with the stored name, matching the original directory search. Loose-file lookup follows the platform file system, which resolves segments without regard to case on every host.

AFS has no names; call `GetArchive` and `ReadEntry` with a section index.

## Sizes and caching

`GetLength` returns the loose file's stored length or the archive entry's decoded length. `Read` decodes a PRS entry once and caches the result until `Dispose`, so later reads of the same name, including different casings, reuse the same bytes. A file or entry whose bytes end before its declared length raises `IOException` or `ArchiveFormatException` instead of returning a short buffer.

The registry is single-threaded, matching the client's main loop, and holds no operating-system file handles after construction.
