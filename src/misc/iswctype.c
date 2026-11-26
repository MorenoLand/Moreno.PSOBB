#include "protos.h"

void f_00858b4c(void) /* ___iswctype_mt */
{
    FN_ENTER(0x00858b4c);
    /* 00858b4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858b4d: mov ebp, esp */ r_ebp = r_esp;
    /* 00858b4f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00858b50: cmp word ptr [ebp + 0xc], 0xffff */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00858b56: je 0x858b91 */ if (fZ) goto L_00858b91;
L_00858b58:; BB(0x00858b58);
    /* 00858b58: cmp word ptr [ebp + 0xc], 0x100 */ {  u32 a = R16((u32)(r_ebp+0xcu)); u32 b = 0x100u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 00858b5e: jae 0x858b70 */ if (!fC) goto L_00858b70;
L_00858b60:; BB(0x00858b60);
    /* 00858b60: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 00858b64: mov ecx, dword ptr [0xa23fa4] */ r_ecx = R32((u32)(0xa23fa4u));
    /* 00858b6a: mov ax, word ptr [ecx + eax*2] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx+r_eax*2))) & 0xffffu);
    /* 00858b6e: jmp 0x858b98 */ goto L_00858b98;
L_00858b70:; BB(0x00858b70);
    /* 00858b70: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858b73: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858b76: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858b79: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 00858b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858b7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00858b7f: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 00858b82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858b83: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00858b85: call 0x8604bf */ r_esp -= 4; W32(r_esp, 0x858b8au); f_008604bf();
    /* 00858b8a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00858b8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858b8f: jne 0x858b95 */ if (!fZ) goto L_00858b95;
L_00858b91:; BB(0x00858b91);
    /* 00858b91: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858b93: jmp 0x858b98 */ goto L_00858b98;
L_00858b95:; BB(0x00858b95);
    /* 00858b95: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_00858b98:; BB(0x00858b98);
    /* 00858b98: movzx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)R16((u32)(r_ebp+0x10u));
    /* 00858b9c: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00858b9f: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00858ba1: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00858ba2: ret  */ FN_RET(0x00858b4c); r_esp += 4; return;
}

