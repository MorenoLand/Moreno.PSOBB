#include "protos.h"

void f_0085a4b3(void) /* ___towlower_mt */
{
    FN_ENTER(0x0085a4b3);
    /* 0085a4b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4b4: mov ebp, esp */ r_ebp = r_esp;
    /* 0085a4b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4b7: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0085a4bc: cmp word ptr [ebp + 0xc], ax */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0085a4c0: je 0x85a512 */ if (fZ) goto L_0085a512;
L_0085a4c2:; BB(0x0085a4c2);
    /* 0085a4c2: cmp word ptr [ebp + 0xc], 0x100 */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085a4c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4c9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085a4cc: jae 0x85a4e6 */ if (!fC) goto L_0085a4e6;
L_0085a4ce:; BB(0x0085a4ce);
    /* 0085a4ce: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4d0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a4d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4d4: call 0x858b4c */ r_esp -= 4; W32(r_esp, 0x85a4d9u); f_00858b4c();
    /* 0085a4d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a4dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a4de: jne 0x85a4e6 */ if (!fZ) goto L_0085a4e6;
L_0085a4e0:; BB(0x0085a4e0);
    /* 0085a4e0: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0085a4e4: jmp 0x85a511 */ goto L_0085a511;
L_0085a4e6:; BB(0x0085a4e6);
    /* 0085a4e6: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a4e9: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0085a4ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4f1: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0085a4f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4f5: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0085a4fa: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085a4fd: call 0x86251e */ r_esp -= 4; W32(r_esp, 0x85a502u); f_0086251e();
    /* 0085a502: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085a505: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085a507: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 0085a50b: je 0x85a511 */ if (fZ) goto L_0085a511;
L_0085a50d:; BB(0x0085a50d);
    /* 0085a50d: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_0085a511:; BB(0x0085a511);
    /* 0085a511: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085a512:; BB(0x0085a512);
    /* 0085a512: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085a513: ret  */ FN_RET(0x0085a4b3); r_esp += 4; return;
}

