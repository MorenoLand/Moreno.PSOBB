#include "protos.h"

void f_007a9700(void) /* ??0big_integer@__crt_strtox@@QAE@XZ */
{
    FN_ENTER(0x007a9700);
    /* 007a9700: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007a9706: mov eax, ecx */ r_eax = r_ecx;
    /* 007a9708: ret  */ FN_RET(0x007a9700); r_esp += 4; return;
}

