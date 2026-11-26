#include "protos.h"

void f_008ad792(void)
{
    FN_ENTER(0x008ad792);
    /* 008ad792: movlps qword ptr [eax + 0x20], xmm6 */ W64((u32)(r_eax+0x20u), xmm[6].q[0]);
    /* 008ad796: movhps qword ptr [eax + 0x28], xmm6 */ W64((u32)(r_eax+0x28u), xmm[6].q[1]);
    /* 008ad79a: mulps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 008ad79d: movlps qword ptr [eax + 0x30], xmm5 */ W64((u32)(r_eax+0x30u), xmm[5].q[0]);
    /* 008ad7a1: movhps qword ptr [eax + 0x38], xmm5 */ W64((u32)(r_eax+0x38u), xmm[5].q[1]);
    /* 008ad7a5: mov esp, ebx */ r_esp = r_ebx;
    /* 008ad7a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ad7a8: ret 0xc */ FN_RET(0x008ad792); r_esp += 16; return;
}

