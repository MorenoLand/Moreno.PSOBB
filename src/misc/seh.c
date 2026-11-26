#include "protos.h"

void f_0085b78a(void) /* __seh_longjmp_unwind@4 */
{
    FN_ENTER(0x0085b78a);
    /* 0085b78a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085b78b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0085b78f: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0085b791: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0085b794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b795: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 0085b798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b799: call 0x85790e */ r_esp -= 4; W32(r_esp, 0x85b79eu); f_0085790e();
    /* 0085b79e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085b7a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085b7a2: ret 4 */ FN_RET(0x0085b78a); r_esp += 8; return;
}

void f_0085e5ac(void) /* __SEH_prolog */
{
    FN_ENTER(0x0085e5ac);
    /* 0085e5ac: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5b1: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0085e5b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5b8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0085e5bc: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0085e5c0: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 0085e5c4: sub esp, eax */ {  u32 a = r_esp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085e5c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5c9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085e5cc: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085e5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5d0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085e5d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0085e5da: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0085e5dd: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085e5e0: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0085e5e6: ret  */ FN_RET(0x0085e5ac); r_esp += 4; return;
}

void f_0085e5e7(void) /* __SEH_epilog */
{
    FN_ENTER(0x0085e5e7);
    /* 0085e5e7: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0085e5ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0085e5f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085e5f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085e5f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085e5f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085e5f5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085e5f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085e5f7: ret  */ FN_RET(0x0085e5e7); r_esp += 4; return;
}

