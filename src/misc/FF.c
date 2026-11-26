#include "protos.h"

void f_00864cef(void) /* __FF_MSGBANNER */
{
    FN_ENTER(0x00864cef);
    /* 00864cef: mov eax, dword ptr [0xae7a5c] */ r_eax = R32((u32)(0xae7a5cu));
    /* 00864cf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864cf7: je 0x864d06 */ if (fZ) goto L_00864d06;
L_00864cf9:; BB(0x00864cf9);
    /* 00864cf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00864cfb: jne 0x864d27 */ if (!fZ) goto L_00864d27;
L_00864cfd:; BB(0x00864cfd);
    /* 00864cfd: cmp dword ptr [0xa239dc], 1 */ {  u32 a = R32((u32)(0xa239dcu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00864d04: jne 0x864d27 */ if (!fZ) goto L_00864d27;
L_00864d06:; BB(0x00864d06);
    /* 00864d06: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 00864d0b: call 0x864b78 */ r_esp -= 4; W32(r_esp, 0x864d10u); f_00864b78();
    /* 00864d10: mov eax, dword ptr [0xae7cf8] */ r_eax = R32((u32)(0xae7cf8u));
    /* 00864d15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00864d17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00864d18: je 0x864d1c */ if (fZ) goto L_00864d1c;
L_00864d1a:; BB(0x00864d1a);
    /* 00864d1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x864d1cu); call_ind(t); }
L_00864d1c:; BB(0x00864d1c);
    /* 00864d1c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 00864d21: call 0x864b78 */ r_esp -= 4; W32(r_esp, 0x864d26u); f_00864b78();
    /* 00864d26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00864d27:; BB(0x00864d27);
    /* 00864d27: ret  */ FN_RET(0x00864cef); r_esp += 4; return;
}

