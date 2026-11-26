#include "protos.h"

void f_00857976(void) /* __abnormal_termination */
{
    FN_ENTER(0x00857976);
    /* 00857976: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00857978: mov ecx, dword ptr fs:[0] */ r_ecx = R32((u32)(TEB));
    /* 0085797f: cmp dword ptr [ecx + 4], 0x8578ec */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x8578ecu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857986: jne 0x857998 */ if (!fZ) goto L_00857998;
L_00857988:; BB(0x00857988);
    /* 00857988: mov edx, dword ptr [ecx + 0xc] */ r_edx = R32((u32)(r_ecx+0xcu));
    /* 0085798b: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0085798e: cmp dword ptr [ecx + 8], edx */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857991: jne 0x857998 */ if (!fZ) goto L_00857998;
L_00857993:; BB(0x00857993);
    /* 00857993: mov eax, 1 */ r_eax = 0x1u;
L_00857998:; BB(0x00857998);
    /* 00857998: ret  */ FN_RET(0x00857976); r_esp += 4; return;
}

