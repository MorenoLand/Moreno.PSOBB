#include "protos.h"

void f_00857999(void) /* __NLG_Notify1 */
{
    FN_ENTER(0x00857999);
    /* 00857999: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085799a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085799b: mov ebx, 0xa237f4 */ r_ebx = 0xa237f4u;
    /* 008579a0: jmp 0x8579ac */ goto L_008579ac;
L_008579ac:; BB(0x008579ac);
    /* 008579ac: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 008579af: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008579b2: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 008579b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008579b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008579b7: ret 4 */ FN_RET(0x00857999); r_esp += 8; return;
}

void f_008579a2(void) /* __NLG_Notify */
{
    FN_ENTER(0x008579a2);
    /* 008579a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008579a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008579a4: mov ebx, 0xa237f4 */ r_ebx = 0xa237f4u;
    /* 008579a9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008579ac: mov dword ptr [ebx + 8], ecx */ W32((u32)(r_ebx+0x8u), r_ecx);
    /* 008579af: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 008579b2: mov dword ptr [ebx + 0xc], ebp */ W32((u32)(r_ebx+0xcu), r_ebp);
    /* 008579b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008579b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008579b7: ret 4 */ FN_RET(0x008579a2); r_esp += 8; return;
}

