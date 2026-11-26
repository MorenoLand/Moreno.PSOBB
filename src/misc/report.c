#include "protos.h"

void f_0085e3e8(void) /* _report_failure */
{
    FN_ENTER(0x0085e3e8);
    /* 0085e3e8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e3ea: push 0x9983b0 */ { u32 v = 0x9983b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e3ef: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85e3f4u); f_0085e5ac();
    /* 0085e3f4: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e3f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e3fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e3fc: call 0x868936 */ r_esp -= 4; W32(r_esp, 0x85e401u); f_00868936();
    /* 0085e401: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e402: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e403: jmp 0x85e40c */ goto L_0085e40c;
L_0085e40c:; BB(0x0085e40c);
    /* 0085e40c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085e410: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e412: call dword ptr [0x8f816c] */ { u32 t = R32((u32)(0x8f816cu)); r_esp -= 4; W32(r_esp, 0x85e418u); call_ind(t); }
    /* 0085e418: int3  */ UNSUP(0x0085e418, "int3");
}

