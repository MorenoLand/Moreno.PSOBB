#define STB_VORBIS_HEADER_ONLY
#include "stb_vorbis.c"
#include "api.h"
#include <stdio.h>
#include <string.h>

int rt_audio_music = 1;

extern const char *rt_ogg_path(u32 handle);
int rt_readable(u32 addr, u32 n);

typedef struct { u32 vf; stb_vorbis *v; } HostOgg;
static HostOgg host_ogg[32];

static stb_vorbis *host_ogg_for(u32 vf)
{
    for (int i = 0; i < 32; ++i)
        if (host_ogg[i].vf == vf) return host_ogg[i].v;
    if (vf < 0x10000 || !rt_readable(vf, 8)) return NULL;
    u32 datasource = R32(vf);
    if (datasource < 0x10000 || !rt_readable(datasource, 4)) return NULL;
    u32 handle = R32(datasource);
    const char *path = handle ? rt_ogg_path(handle) : NULL;
    if (!path) return NULL;
    int err = 0;
    stb_vorbis *v = stb_vorbis_open_filename(path, &err, NULL);
    if (!v) {
        if (getenv("RECOMP_AUDIODBG")) fprintf(stderr, "[audio] open failed for %s (err %d)\n", path, err);
        return NULL;
    }
    for (int i = 0; i < 32; ++i) {
        if (!host_ogg[i].vf) {
            host_ogg[i].vf = vf;
            host_ogg[i].v = v;
            if (getenv("RECOMP_AUDIODBG")) fprintf(stderr, "[audio] host decoder for %s (vf %08x)\n", path, vf);
            break;
        }
    }
    return v;
}

void __real_f_00873508(void);

void __wrap_f_00873508(void)
{
    u32 vf = R32(r_esp + 4);
    u32 buffer = R32(r_esp + 8);
    stb_vorbis *v = host_ogg_for(vf);
    __real_f_00873508();                   /* advances the guest decoder's position and bitstream fields */
    int guest_bytes = (int)r_eax;
    if (!v || guest_bytes <= 0 || !buffer) return;
    int frames = guest_bytes / 4;
    if (frames <= 0) return;
    int got = stb_vorbis_get_samples_short_interleaved(v, 2, (short *)(uintptr_t)buffer, frames * 2);
    if (got <= 0) {
        stb_vorbis_seek_start(v);
        got = stb_vorbis_get_samples_short_interleaved(v, 2, (short *)(uintptr_t)buffer, frames * 2);
    }
    if (got > 0) r_eax = (u32)(got * 4);
}
