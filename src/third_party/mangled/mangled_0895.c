#include "protos.h"

void f_00895e89(void) /* ??0CD3DXBlt@@QAE@XZ */
{
    FN_ENTER(0x00895e89);
    /* 00895e89: mov eax, ecx */ r_eax = r_ecx;
    /* 00895e8b: and dword ptr [eax + 4], 0 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00895e8f: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00895e92: ret  */ FN_RET(0x00895e89); r_esp += 4; return;
}

void f_00895ebe(void) /* ??1_Timevec@std@@QAE@XZ */
{
    FN_ENTER(0x00895ebe);
    /* 00895ebe: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 00895ec0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x895ec5u); f_00857e98();
    /* 00895ec5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00895ec6: ret  */ FN_RET(0x00895ebe); r_esp += 4; return;
}

