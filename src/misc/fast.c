#include "protos.h"

void f_0085ab18(void) /* _fast_error_exit */
{
    FN_ENTER(0x0085ab18);
    /* 0085ab18: cmp dword ptr [0xae7a5c], 1 */ {  u32 a = R32((u32)(0xae7a5cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ab1f: jne 0x85ab26 */ if (!fZ) goto L_0085ab26;
L_0085ab21:; BB(0x0085ab21);
    /* 0085ab21: call 0x864cef */ r_esp -= 4; W32(r_esp, 0x85ab26u); f_00864cef();
L_0085ab26:; BB(0x0085ab26);
    /* 0085ab26: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ab2a: call 0x864b78 */ r_esp -= 4; W32(r_esp, 0x85ab2fu); f_00864b78();
    /* 0085ab2f: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ab34: call 0x859eab */ r_esp -= 4; W32(r_esp, 0x85ab39u); f_00859eab();
    /* 0085ab39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ab3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ab3b: ret  */ FN_RET(0x0085ab18); r_esp += 4; return;
}

