#include "protos.h"

void f_00438fd8(void) /* sub_438FD8 */
{
    FN_ENTER(0x00438fd8);
    /* 00438fd8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00438fdb: mov edx, dword ptr [0xa44218] */ r_edx = R32((u32)(0xa44218u));
    /* 00438fe1: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00438fe4: fld dword ptr [ecx + 0x114] */ FPUSH(R_F32((u32)(r_ecx+0x114u)));
    /* 00438fea: fadd dword ptr [ecx + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x118u));
    /* 00438ff0: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00438ff3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00438ff6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00438ff9: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00438ffc: fadd dword ptr [eax*4 + 0x8fd6a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x8fd6a8u));
    /* 00439003: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00439005: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00439007: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00439008: ja 0x439016 */ if ((!fC&&!fZ)) goto L_00439016;
L_0043900a:; BB(0x0043900a);
    /* 0043900a: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0043900c: fstp dword ptr [ecx + 0x114] */ W_F32((u32)(r_ecx+0x114u), ST(0)); FPOP();
    /* 00439012: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00439015: ret  */ FN_RET(0x00438fd8); r_esp += 4; return;
L_00439016:; BB(0x00439016);
    /* 00439016: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00439018: fstp dword ptr [ecx + 0x114] */ W_F32((u32)(r_ecx+0x114u), ST(0)); FPOP();
    /* 0043901e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00439021: ret  */ FN_RET(0x00438fd8); r_esp += 4; return;
}

