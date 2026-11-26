#include "protos.h"

void f_0083a57c(void) /* ?sse_D3DXInitFastTable@@YAXPAUD3DXFASTTABLE@@@Z */
{
    FN_ENTER(0x0083a57c);
    /* 0083a57c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0083a580: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 0083a586: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 0083a58d: mov dword ptr [eax + 8], 0 */ W32((u32)(r_eax+0x8u), 0x0u);
    /* 0083a594: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 0083a59b: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0083a5a2: mov dword ptr [eax + 0x14], 0xbf800000 */ W32((u32)(r_eax+0x14u), 0xbf800000u);
    /* 0083a5a9: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 0083a5b0: mov dword ptr [eax + 0x1c], 0x2aaa */ W32((u32)(r_eax+0x1cu), 0x2aaau);
    /* 0083a5b7: mov dword ptr [eax + 0x20], 0xbf800000 */ W32((u32)(r_eax+0x20u), 0xbf800000u);
    /* 0083a5be: mov dword ptr [eax + 0x24], 0xc76a6000 */ W32((u32)(r_eax+0x24u), 0xc76a6000u);
    /* 0083a5c5: mov dword ptr [eax + 0x28], 0x3f800000 */ W32((u32)(r_eax+0x28u), 0x3f800000u);
    /* 0083a5cc: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
    /* 0083a5d3: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
    /* 0083a5da: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
    /* 0083a5e1: mov dword ptr [eax + 0x38], 0x3f800000 */ W32((u32)(r_eax+0x38u), 0x3f800000u);
    /* 0083a5e8: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 0083a5ef: ret  */ FN_RET(0x0083a57c); r_esp += 4; return;
}

