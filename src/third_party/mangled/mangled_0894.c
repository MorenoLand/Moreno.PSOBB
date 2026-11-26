#include "protos.h"

void f_008941db(void) /* ??0CD3DXImage@@QAE@XZ */
{
    FN_ENTER(0x008941db);
    /* 008941db: mov eax, ecx */ r_eax = r_ecx;
    /* 008941dd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008941df: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008941e1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008941e4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008941e7: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 008941ea: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 008941ed: mov dword ptr [eax + 0x4c], ecx */ W32((u32)(r_eax+0x4cu), r_ecx);
    /* 008941f0: mov dword ptr [eax + 0x50], ecx */ W32((u32)(r_eax+0x50u), r_ecx);
    /* 008941f3: ret  */ FN_RET(0x008941db); r_esp += 4; return;
}

void f_0089424d(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z */
{
    FN_ENTER(0x0089424d);
    /* 0089424d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089424e: mov esi, ecx */ r_esi = r_ecx;
    /* 00894250: call 0x8941f4 */ r_esp -= 4; W32(r_esp, 0x894255u); f_008941f4();
    /* 00894255: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089425a: je 0x894263 */ if (fZ) goto L_00894263;
L_0089425c:; BB(0x0089425c);
    /* 0089425c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089425d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x894262u); f_00857e98();
    /* 00894262: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00894263:; BB(0x00894263);
    /* 00894263: mov eax, esi */ r_eax = r_esi;
    /* 00894265: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00894266: ret 4 */ FN_RET(0x0089424d); r_esp += 8; return;
}

