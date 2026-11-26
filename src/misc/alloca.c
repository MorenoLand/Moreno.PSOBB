#include "protos.h"

void f_00858020(void) /* __alloca_probe */
{
    FN_ENTER(0x00858020);
    /* 00858020: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00858025: jae 0x858035 */ if (!fC) goto L_00858035;
L_00858027:; BB(0x00858027);
    /* 00858027: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00858029: add eax, esp */ {  u32 a = r_eax; u32 b = r_esp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085802b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085802e: test dword ptr [eax], eax */ {  u32 a = R32((u32)(r_eax)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858030: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 00858031: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00858033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858034: ret  */ FN_RET(0x00858020); r_esp += 4; return;
L_00858035:; BB(0x00858035);
    /* 00858035: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858036: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
L_0085803a:; BB(0x0085803a);
    /* 0085803a: sub ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858040: sub eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00858045: test dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;   }
    /* 00858047: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085804c: jae 0x85803a */ if (!fC) goto L_0085803a;
L_0085804e:; BB(0x0085804e);
    /* 0085804e: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858050: mov eax, esp */ r_eax = r_esp;
    /* 00858052: test dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858054: mov esp, ecx */ r_esp = r_ecx;
    /* 00858056: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00858058: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0085805b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085805c: ret  */ FN_RET(0x00858020); r_esp += 4; return;
}

