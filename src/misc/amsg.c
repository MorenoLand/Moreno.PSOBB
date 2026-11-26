#include "protos.h"

void f_0085aaf3(void) /* __amsg_exit */
{
    FN_ENTER(0x0085aaf3);
    /* 0085aaf3: cmp dword ptr [0xae7a5c], 1 */ {  u32 a = R32((u32)(0xae7a5cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085aafa: jne 0x85ab01 */ if (!fZ) goto L_0085ab01;
L_0085aafc:; BB(0x0085aafc);
    /* 0085aafc: call 0x864cef */ r_esp -= 4; W32(r_esp, 0x85ab01u); f_00864cef();
L_0085ab01:; BB(0x0085ab01);
    /* 0085ab01: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ab05: call 0x864b78 */ r_esp -= 4; W32(r_esp, 0x85ab0au); f_00864b78();
    /* 0085ab0a: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085ab0f: call dword ptr [0xa239d8] */ { u32 t = R32((u32)(0xa239d8u)); r_esp -= 4; W32(r_esp, 0x85ab15u); call_ind(t); }
    /* 0085ab15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ab16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ab17: ret  */ FN_RET(0x0085aaf3); r_esp += 4; return;
}

