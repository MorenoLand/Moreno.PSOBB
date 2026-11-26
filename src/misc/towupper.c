#include "protos.h"

void f_00859ad6(void) /* ___towupper_mt */
{
    FN_ENTER(0x00859ad6);
    /* 00859ad6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00859ad7: mov ebp, esp */ r_ebp = r_esp;
    /* 00859ad9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00859ada: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00859adf: cmp word ptr [ebp + 0xc], ax */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00859ae3: je 0x859b35 */ if (fZ) goto L_00859b35;
L_00859ae5:; BB(0x00859ae5);
    /* 00859ae5: cmp word ptr [ebp + 0xc], 0x100 */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00859aeb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859aec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859aef: jae 0x859b09 */ if (!fC) goto L_00859b09;
L_00859af1:; BB(0x00859af1);
    /* 00859af1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00859af3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859af6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859af7: call 0x858b4c */ r_esp -= 4; W32(r_esp, 0x859afcu); f_00858b4c();
    /* 00859afc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859aff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859b01: jne 0x859b09 */ if (!fZ) goto L_00859b09;
L_00859b03:; BB(0x00859b03);
    /* 00859b03: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00859b07: jmp 0x859b34 */ goto L_00859b34;
L_00859b09:; BB(0x00859b09);
    /* 00859b09: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859b0c: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00859b0f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00859b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859b12: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00859b14: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00859b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00859b18: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00859b1d: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859b20: call 0x86251e */ r_esp -= 4; W32(r_esp, 0x859b25u); f_0086251e();
    /* 00859b25: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00859b28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859b2a: mov ax, word ptr [ebp + 0xc] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xcu))) & 0xffffu);
    /* 00859b2e: je 0x859b34 */ if (fZ) goto L_00859b34;
L_00859b30:; BB(0x00859b30);
    /* 00859b30: mov ax, word ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
L_00859b34:; BB(0x00859b34);
    /* 00859b34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00859b35:; BB(0x00859b35);
    /* 00859b35: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00859b36: ret  */ FN_RET(0x00859ad6); r_esp += 4; return;
}

