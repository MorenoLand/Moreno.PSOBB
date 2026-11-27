# ida_facts.py: headless IDA pass over an analysed database. For every function it records the
# functions that call it (callers), the functions it calls (callees) and the imported APIs it
# calls (apis), in facts.json next to the function table. Run it on a copy of the database:
# IDA may save changes to the file it opens.
import json
import os
import sys
import time

import ida_auto
import ida_funcs
import ida_idp
import idautils
import idc

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import cfg

out = os.environ.get("SS_IDA_OUT") or cfg.ida_dump()
os.makedirs(out, exist_ok=True)
log = open(os.path.join(out, "facts.log"), "w", encoding="utf-8")


def say(text):
    log.write(text + "\n")
    log.flush()


def read_imports():
    """Import slots from the export (imports.txt: module, slot address, name, ordinal) -> API name."""
    iat = {}
    with open(os.path.join(out, "imports.txt"), encoding="utf-8") as f:
        for line in f:
            parts = line.split()
            if len(parts) >= 3:
                iat[int(parts[1], 16)] = parts[2]
    return iat


def import_slot(ea):
    """The import slot a call or jump goes through: 'call dword ptr [slot]' is FF 15, 'jmp dword ptr [slot]' is FF 25."""
    code = idc.get_bytes(ea, 6)
    if code and code[:2] in (b"\xff\x15", b"\xff\x25"):
        return int.from_bytes(code[2:6], "little")
    return None


iat = read_imports()
start = time.time()
ida_auto.auto_wait()

callees = {}
apis = {}
for fn in idautils.Functions():
    callees[fn] = set()
    apis[fn] = set()
    for ea in idautils.FuncItems(fn):
        if not ida_idp.is_call_insn(ea):
            continue
        slot = import_slot(ea)
        if slot in iat:
            apis[fn].add(iat[slot])
        for to in idautils.CodeRefsFrom(ea, False):
            target = ida_funcs.get_func(to)
            if target is None or target.start_ea == fn:
                continue
            slot = import_slot(target.start_ea)
            if slot in iat:
                # a thunk is a jump through an import slot: record the API, not the thunk
                apis[fn].add(iat[slot])
            else:
                callees[fn].add(target.start_ea)

callers = {}
for fn, targets in callees.items():
    for target in targets:
        callers.setdefault(target, set()).add(fn)

facts = {}
for fn in callees:
    facts["0x%x" % fn] = {
        "callers": ["0x%x" % c for c in sorted(callers.get(fn, ()))],
        "callees": ["0x%x" % c for c in sorted(callees[fn])],
        "apis": sorted(apis[fn]),
    }
with open(os.path.join(out, "facts.json"), "w", encoding="utf-8") as f:
    json.dump(facts, f)

say("functions=%d with_callees=%d with_apis=%d seconds=%.1f" % (
    len(facts),
    sum(1 for v in facts.values() if v["callees"]),
    sum(1 for v in facts.values() if v["apis"]),
    time.time() - start))
log.close()
idc.qexit(0)
