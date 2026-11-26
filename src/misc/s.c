#include "protos.h"

void f_004c8be4(void) /* s_5___2 */
{
    FN_ENTER(0x004c8be4);
    /* 004c8be4: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c8be9u); f_004c32c4();
    /* 004c8be9: jmp 0x4c8f25 */ goto L_004c8f25;
L_004c8f25:; BB(0x004c8f25);
    /* 004c8f25: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004c8f28: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004c8f2b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004c8f2e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004c8f31: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004c8f38: mov esp, ebp */ r_esp = r_ebp;
    /* 004c8f3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8f3b: ret 4 */ FN_RET(0x004c8be4); r_esp += 8; return;
}

void f_008c0b70(void) /* s_5___6 */
{
    FN_ENTER(0x008c0b70);
    /* 008c0b70: call 0x8c0b80 */ r_esp -= 4; W32(r_esp, 0x8c0b75u); f_008c0b80();
    /* 008c0b75: jmp 0x8c0b90 */ f_008c0b90(); return;
}

void f_008c9900(void) /* s_5___7 */
{
    FN_ENTER(0x008c9900);
    /* 008c9900: call 0x8c9910 */ r_esp -= 4; W32(r_esp, 0x8c9905u); f_008c9910();
    /* 008c9905: jmp 0x8c9920 */ f_008c9920(); return;
}

