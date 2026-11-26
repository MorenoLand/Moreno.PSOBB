#include "protos.h"

void f_008b0fda(void) /* ?x3d_D3DXMatrixRotationYawPitchRoll@@YGPAUD3DXMATRIX@@PAU1@MMM@Z */
{
    FN_ENTER(0x008b0fda);
    /* 008b0fda: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b0fdd: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008b0fe1: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 008b0fe5: movq mm0, qword ptr [0x99dcb0] */ { MM64 r; r.q = R64((u32)(0x99dcb0u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0fec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b0fef: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008b0ff3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008b0ff6: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ff9: pfmul mm0, qword ptr [ebp + 0x14] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ebp+0x14u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0ffe: pfmul mm1, qword ptr [ebp + 0xc] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ebp+0xcu))); fpr[1] = (long double)(i64)(r); }
    /* 008b1003: movq qword ptr [esp + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b1008: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8b100du); f_008bb660();
    /* 008b100d: movq qword ptr [esp + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b1012: movq mm0, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1017: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b101a: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8b101fu); f_008bb660();
    /* 008b101f: movq qword ptr [esp + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b1024: movq mm0, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1029: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8b102eu); f_008bb660();
    /* 008b102e: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1033: movq mm2, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b1038: movq mm7, qword ptr [0x99dc40] */ { MM64 r; r.q = R64((u32)(0x99dc40u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b103f: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1042: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1045: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1048: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b104b: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b104e: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1051: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1054: pxor mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1057: psrlq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008b105b: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b105e: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1061: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1064: pxor mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1067: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008b106b: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b106f: pfmul mm4, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008b1073: pfmul mm5, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b1077: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b107a: punpckhdq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b107d: punpckldq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1080: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b1084: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b1088: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b108c: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b1090: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b1094: pfadd mm3, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b1098: movq qword ptr [ebp - 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xfffffff0u), r.q); }
    /* 008b109c: movq qword ptr [ebp - 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ebp+0xfffffff8u), r.q); }
    /* 008b10a0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008b10a3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008b10a7: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b10aa: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b10ad: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b10b1: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b10b6: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b10b9: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b10bc: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b10c0: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b10c3: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b10c6: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b10ca: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b10cd: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b10d0: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b10d3: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b10d7: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b10da: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b10dd: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b10e1: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b10e4: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b10e8: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b10ec: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b10ef: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b10f3: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b10f6: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b10f9: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b10fc: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b10ff: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1103: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1107: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b110b: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b110e: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1111: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1119: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008b1121: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1124: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b1128: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b112c: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b1130: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1133: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b1137: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b113b: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b113e: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1141: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1144: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1147: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b114a: movq qword ptr [eax + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b114e: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1151: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1158: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b115c: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b115f: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b1163: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1166: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1169: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b116c: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b1170: movq qword ptr [eax + 0x38], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b1174: lea esp, [ebp + 4] */ r_esp = (u32)(r_ebp+0x4u);
    /* 008b1177: mov ebp, dword ptr [ebp] */ r_ebp = R32((u32)(r_ebp));
    /* 008b117a: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b117c: ret 0x10 */ FN_RET(0x008b0fda); r_esp += 20; return;
}

