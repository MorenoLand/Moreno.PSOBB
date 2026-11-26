#include "protos.h"

void f_00859c29(void) /* __nh_malloc */
{
    FN_ENTER(0x00859c29);
    /* 00859c29: cmp dword ptr [esp + 4], -0x20 */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = 0xffffffe0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00859c2e: ja 0x859c52 */ if ((!fC&&!fZ)) goto L_00859c52;
L_00859c30:; BB(0x00859c30);
    /* 00859c30: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859c34: call 0x859bae */ r_esp -= 4; W32(r_esp, 0x859c39u); f_00859bae();
    /* 00859c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00859c3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c3c: jne 0x859c54 */ if (!fZ) goto L_00859c54;
L_00859c3e:; BB(0x00859c3e);
    /* 00859c3e: cmp dword ptr [esp + 8], eax */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00859c42: je 0x859c54 */ if (fZ) goto L_00859c54;
L_00859c44:; BB(0x00859c44);
    /* 00859c44: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00859c48: call 0x85f4f4 */ r_esp -= 4; W32(r_esp, 0x859c4du); f_0085f4f4();
    /* 00859c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859c4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859c50: jne 0x859c30 */ if (!fZ) goto L_00859c30;
L_00859c52:; BB(0x00859c52);
    /* 00859c52: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00859c54:; BB(0x00859c54);
    /* 00859c54: ret  */ FN_RET(0x00859c29); r_esp += 4; return;
}

