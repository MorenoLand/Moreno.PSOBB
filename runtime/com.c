/* com.c: guest-side vtable wrapper for host COM objects (Direct3D 8 and friends).
 *
 * The guest calls interface methods through the object's vtable, so the pointer it holds must lead to
 * guest addresses. Each wrapper allocates a vtable of import sentinels; a sentinel dispatches to the
 * real method with the object's this pointer and the method's known argument count.
 */
#include "api.h"
#include "com_gen.h"
#include <string.h>
#include <stdlib.h>

typedef struct { u32 proxy; u32 real; } ComMap;
typedef struct { u32 real; u32 iface; u32 proxy; } ComCache;
#define COM_MAP_CAP 262144
#define COM_CACHE_CAP 65536
static ComMap com_maps[COM_MAP_CAP];
static ComCache com_cache[COM_CACHE_CAP];

static u32 com_map_slot(u32 proxy) { return (proxy * 2654435761u) & (COM_MAP_CAP - 1); }
static u32 com_cache_slot(u32 real, u32 iface) { return ((real * 2654435761u) ^ (iface * 40503u)) & (COM_CACHE_CAP - 1); }

static u32 com_cache_get(u32 real, u32 iface)
{
    u32 h = com_cache_slot(real, iface);
    for (u32 i = 0; i < COM_CACHE_CAP; ++i) {
        u32 j = (h + i) & (COM_CACHE_CAP - 1);
        if (!com_cache[j].proxy) return 0;
        if (com_cache[j].real == real && com_cache[j].iface == iface) return com_cache[j].proxy;
    }
    return 0;
}

static void com_cache_put(u32 real, u32 iface, u32 proxy)
{
    u32 h = com_cache_slot(real, iface);
    for (u32 i = 0; i < COM_CACHE_CAP; ++i) {
        u32 j = (h + i) & (COM_CACHE_CAP - 1);
        if (!com_cache[j].proxy || (com_cache[j].real == real && com_cache[j].iface == iface)) {
            com_cache[j].real = real; com_cache[j].iface = iface; com_cache[j].proxy = proxy; return;
        }
    }
}

static void com_map_add(u32 proxy, u32 real)
{
    u32 h = com_map_slot(proxy);
    for (u32 i = 0; i < COM_MAP_CAP; ++i) {
        u32 j = (h + i) & (COM_MAP_CAP - 1);
        if (!com_maps[j].proxy || com_maps[j].proxy == proxy) { com_maps[j].proxy = proxy; com_maps[j].real = real; return; }
    }
}

u32 com_real_this(u32 proxy)
{
    u32 h = com_map_slot(proxy);
    for (u32 i = 0; i < COM_MAP_CAP; ++i) {
        u32 j = (h + i) & (COM_MAP_CAP - 1);
        if (!com_maps[j].proxy) break;
        if (com_maps[j].proxy == proxy) return com_maps[j].real;
    }
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
    int offset = 0, count = 0, iface_index = -1;
    const signed char *nargs = NULL;
    for (int i = 0; i < com_iface_count; ++i) {
        if (!strcmp(com_ifaces[i].name, iface)) {
            name = com_ifaces[i].name;
            offset = com_ifaces[i].offset;
            count = com_ifaces[i].count;
            nargs = com_ifaces[i].nargs;
            iface_index = i;
            break;
        }
    }
    if (!name) return (u32)(uintptr_t)real;
    static int cache_on = -1;
    if (cache_on < 0) cache_on = getenv("RECOMP_NO_COMCACHE") == NULL;
    u32 cached = cache_on ? com_cache_get((u32)(uintptr_t)real, (u32)iface_index) : 0;
    if (cached) return cached;
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
    com_map_add(obj, (u32)(uintptr_t)real);
    if (cache_on) com_cache_put((u32)(uintptr_t)real, (u32)iface_index, obj);
    return obj;
}
