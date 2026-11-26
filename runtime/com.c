/* com.c: guest-side vtable wrapper for host COM objects (Direct3D 8 and friends).
 *
 * The guest calls interface methods through the object's vtable, so the pointer it holds must lead to
 * guest addresses. Each wrapper allocates a vtable of import sentinels; a sentinel dispatches to the
 * real method with the object's this pointer and the method's known argument count.
 */
#include "api.h"
#include "com_gen.h"
#include <string.h>

typedef struct { u32 proxy; u32 real; } ComMap;
static ComMap com_maps[1024];
static int com_map_n;

u32 com_real_this(u32 proxy)
{
    for (int i = 0; i < com_map_n; ++i)
        if (com_maps[i].proxy == proxy) return com_maps[i].real;
    return proxy;
}

const char *com_iface_for_iid(const void *guid)
{
    for (int i = 0; i < com_iid_count; ++i)
        if (!memcmp(com_iids[i].guid, guid, 16)) return com_iids[i].iface;
    return NULL;
}

u32 com_wrap(void *real, const char *iface)
{
    if (!real) return 0;
    const char *name = NULL;
    int offset = 0, count = 0;
    const signed char *nargs = NULL;
    for (int i = 0; i < com_iface_count; ++i) {
        if (!strcmp(com_ifaces[i].name, iface)) {
            name = com_ifaces[i].name;
            offset = com_ifaces[i].offset;
            count = com_ifaces[i].count;
            nargs = com_ifaces[i].nargs;
            break;
        }
    }
    if (!name) return (u32)(uintptr_t)real;
    void **rvt = *(void ***)real;
    u32 *vt = (u32 *)calloc((size_t)(offset + count), sizeof(u32));
    if (!vt) return (u32)(uintptr_t)real;
    u32 obj = (u32)(uintptr_t)malloc(4);
    for (int i = 0; i < count; ++i) {
        int slot = offset + i;
        char label[96];
        snprintf(label, sizeof label, "%s#%d", name, slot);
        u32 s = api_add("com", strdup(label), (FARPROC)rvt[slot], nargs[i], 0);
        api_entry(s)->thiscall_ = 1;
        api_entry(s)->proxy = obj;
        vt[slot] = s;
    }
    W32(obj, (u32)(uintptr_t)vt);
    if (com_map_n < (int)(sizeof com_maps / sizeof com_maps[0])) {
        com_maps[com_map_n].proxy = obj;
        com_maps[com_map_n].real = (u32)(uintptr_t)real;
        ++com_map_n;
    }
    return obj;
}
