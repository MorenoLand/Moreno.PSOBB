#include "protos.h"

void f_008b2920(void) /* ?x3d_D3DXMatrixInverse_K7@@YGPAUD3DXMATRIX@@PAU1@PAMPBU1@@Z */
{
    FN_ENTER(0x008b2920);
    /* 008b2920: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b2924: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b2927: movq mm1, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b292b: movq mm2, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b292f: pswapd mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2933: movq mm3, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2937: pswapd mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b293b: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b293e: pswapd mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2942: pswapd mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2946: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008b294a: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b294e: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b2952: pswapd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2956: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b295a: pfnacc mm5, mm4 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b295e: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b2962: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2966: pfnacc mm6, mm7 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b296a: pfnacc mm1, mm2 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b296e: movq mm0, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2972: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2975: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2978: movq mm7, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b297c: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b297f: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2982: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2985: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2989: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b298c: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2991: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b2995: pfadd mm2, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b2999: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b299c: pfsub mm2, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b29a0: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b29a3: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b29a6: movq qword ptr [esp + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b29ab: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b29ae: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b29b1: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b29b4: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b29b9: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b29bd: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b29c1: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b29c5: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b29c9: movq qword ptr [esp + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b29ce: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b29d1: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b29d4: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b29d7: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b29da: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b29dd: pfmul mm1, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b29e2: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b29e6: pfmul mm3, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b29eb: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b29ef: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b29f3: movq qword ptr [esp + 0x28], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008b29f8: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b29fb: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b29fe: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a02: pfmul mm5, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x18u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2a07: movq mm0, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2a0b: pfmul mm6, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx+0x8u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2a10: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a14: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a18: movq qword ptr [esp + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008b2a1d: movq mm1, qword ptr [edx + 0x18] */ { MM64 r; r.q = R64((u32)(r_edx+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2a21: movq mm2, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2a25: movq mm3, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2a29: pswapd mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2a2d: pswapd mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2a31: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008b2a35: pswapd mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2a39: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2a3d: pswapd mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2a41: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b2a45: pswapd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2a49: pfnacc mm5, mm4 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2a4d: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b2a51: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b2a55: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a59: pfnacc mm6, mm7 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b2a5d: pfnacc mm1, mm2 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b2a61: movq mm0, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2a65: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2a68: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2a6b: movq mm7, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2a6f: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2a72: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2a75: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2a78: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2a7b: pfmul mm4, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x10u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2a80: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a84: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b2a88: pfadd mm2, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a8c: pfsub mm2, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b2a90: movq qword ptr [esp], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp), r.q); }
    /* 008b2a94: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2a97: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2a9a: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2a9d: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2aa0: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2aa3: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2aa6: pfmul mm3, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx))); fpr[3] = (long double)(i64)(r); }
    /* 008b2aaa: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2aae: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b2ab2: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b2ab6: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b2aba: movq qword ptr [esp + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b2abf: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2ac2: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2ac5: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2ac8: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2acb: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2ace: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2ad1: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008b2ad5: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ad9: pfmul mm3, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x10u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2ade: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ae2: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ae6: movq qword ptr [esp + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008b2aeb: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2aee: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2af1: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b2af5: pfmul mm5, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x10u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2afa: pfmul mm6, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx))); fpr[6] = (long double)(i64)(r); }
    /* 008b2afe: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b2b02: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b2b06: movq qword ptr [esp + 0x30], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008b2b0b: punpckhdq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2b0e: punpckldq mm7, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2b11: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2b14: movq mm1, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2b18: punpckldq mm3, dword ptr [edx + 0x10] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_edx+0x10u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2b1c: punpckhdq mm1, qword ptr [esp + 0x10] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_esp+0x10u)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2b21: pfmul mm0, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[7]); fpr[0] = (long double)(i64)(r); }
    /* 008b2b25: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b2b29: pfnacc mm0, mm3 */ { u64 r = rt_pf_nacc((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b2b2d: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008b2b31: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b2b35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b2b37: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2b3a: je 0x8b2b3f */ if (fZ) goto L_008b2b3f;
L_008b2b3c:; BB(0x008b2b3c);
    /* 008b2b3c: movd dword ptr [eax], mm0 */ W32((u32)(r_eax), (u32)(u64)(i64)fpr[0]);
L_008b2b3f:; BB(0x008b2b3f);
    /* 008b2b3f: pfrcp mm1, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b2b43: pxor mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2b46: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2b49: pfcmpeq mm3, mm4 */ { u64 r = rt_pf_cmpeq((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b2b4d: pfrcpit1 mm0, mm1 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2b51: pfrcpit2 mm0, mm1 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2b55: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008b2b58: pfmul mm0, qword ptr [0x99dc10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc10u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2b60: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b2b62: pswapd mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2b66: jne 0x8b2bfa */ if (!fZ) goto L_008b2bfa;
L_008b2b6c:; BB(0x008b2b6c);
    /* 008b2b6c: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008b2b70: movq mm2, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2b74: movq mm5, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2b79: movq mm3, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2b7e: movq mm6, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2b83: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2b87: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b2b8b: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b2b8f: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b2b93: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2b96: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2b99: punpckhdq mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2b9c: punpckldq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2b9f: punpckhdq mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2ba2: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2ba5: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b2ba8: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2bac: movq qword ptr [eax + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2bb0: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2bb4: movq mm2, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2bb9: movq mm5, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2bbe: movq mm3, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2bc3: movq mm6, qword ptr [esp + 0x38] */ { MM64 r; r.q = R64((u32)(r_esp+0x38u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2bc8: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2bcc: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b2bd0: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b2bd4: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b2bd8: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2bdb: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2bde: punpckhdq mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2be1: punpckldq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2be4: punpckhdq mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2be7: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2bea: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b2bee: movq qword ptr [eax + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2bf2: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2bf6: movq qword ptr [eax + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x38u), r.q); }
L_008b2bfa:; BB(0x008b2bfa);
    /* 008b2bfa: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b2bfc: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b2bff: ret 0xc */ FN_RET(0x008b2920); r_esp += 16; return;
}

void f_008b2c02(void) /* ?x3d_D3DXMatrixMultiplyTranspose@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008b2c02);
    /* 008b2c02: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b2c04: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b2c07: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008b2c0b: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 008b2c0f: mov ebp, esp */ r_ebp = r_esp;
    /* 008b2c11: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008b2c14: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2c17: movq mm1, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2c1b: movq mm3, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2c1f: movq mm4, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2c23: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2c26: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2c29: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2c2c: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2c2f: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008b2c33: movq qword ptr [esp + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b2c38: movq mm6, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2c3c: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2c3f: movq mm7, qword ptr [edx + 0x18] */ { MM64 r; r.q = R64((u32)(r_edx+0x18u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2c43: movq mm0, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2c47: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2c4a: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2c4d: movq qword ptr [esp + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008b2c52: movq qword ptr [esp + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008b2c57: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 008b2c5a: cmp ecx, dword ptr [ebp + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b2c5d: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2c60: movq mm4, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2c64: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2c67: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2c6a: movq qword ptr [esp + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008b2c6f: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2c72: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2c75: movq qword ptr [esp + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008b2c7a: movq qword ptr [esp + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b2c7f: movq qword ptr [esp + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b2c84: je 0x8b2e25 */ if (fZ) goto L_008b2e25;
L_008b2c8a:; BB(0x008b2c8a);
    /* 008b2c8a: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008b2c8d: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2c91: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2c96: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2c99: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2c9c: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2c9f: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2ca2: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2ca6: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2cab: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2cae: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2cb1: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2cb6: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2cbb: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2cc0: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2cc5: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2cca: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2ccf: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2cd3: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2cd7: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2cdb: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2cdf: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ce3: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2ce7: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b2cea: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b2cee: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2cf3: movq mm1, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2cf8: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2cfb: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2cfe: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2d01: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2d04: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2d08: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2d0d: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2d10: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2d13: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2d18: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2d1d: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2d22: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2d27: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2d2c: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2d31: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2d35: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2d39: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2d3d: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2d41: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2d45: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2d49: movq qword ptr [eax + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2d4d: movq qword ptr [eax + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2d51: movq mm0, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2d56: movq mm1, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2d5b: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2d5e: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2d61: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2d64: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2d67: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2d6b: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2d70: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2d73: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2d76: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2d7b: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2d80: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2d85: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2d8a: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2d8f: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2d94: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2d98: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2d9c: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2da0: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2da4: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2da8: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2dac: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2db0: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2db4: movq mm0, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2db9: movq mm1, qword ptr [esp + 0x38] */ { MM64 r; r.q = R64((u32)(r_esp+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2dbe: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2dc1: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2dc4: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2dc7: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2dca: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2dce: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2dd3: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2dd6: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2dd9: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2dde: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2de3: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2de8: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2ded: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2df2: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2df7: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2dfb: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2dff: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2e03: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2e07: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2e0b: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2e0f: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2e13: movq qword ptr [eax + 0x38], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b2e17: mov esp, ebp */ r_esp = r_ebp;
    /* 008b2e19: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008b2e1d: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b2e20: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b2e22: ret 0xc */ FN_RET(0x008b2c02); r_esp += 16; return;
L_008b2e25:; BB(0x008b2e25);
    /* 008b2e25: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008b2e28: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2e2c: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2e31: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2e34: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2e37: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2e3a: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2e3d: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2e41: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2e46: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2e49: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2e4c: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2e51: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2e56: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2e5b: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2e60: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2e65: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2e6a: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2e6e: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2e72: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2e76: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2e7a: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2e7e: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2e82: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008b2e86: movq qword ptr [esp + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b2e8b: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2e90: movq mm1, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2e95: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2e98: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2e9b: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2e9e: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2ea1: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2ea5: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2eaa: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2ead: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2eb0: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2eb5: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2eba: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2ebf: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2ec4: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2ec9: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2ece: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ed2: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2ed6: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2eda: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2ede: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2ee2: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2ee6: movq qword ptr [esp + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b2eeb: movq qword ptr [esp + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b2ef0: movq mm0, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2ef5: movq mm1, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2efa: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2efd: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2f00: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2f03: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2f06: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2f0a: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2f0f: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2f12: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2f15: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2f1a: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2f1f: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2f24: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2f29: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2f2e: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2f33: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2f37: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2f3b: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2f3f: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2f43: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2f47: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2f4b: movq qword ptr [esp + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008b2f50: movq qword ptr [esp + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008b2f55: movq mm0, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2f5a: movq mm1, qword ptr [esp + 0x38] */ { MM64 r; r.q = R64((u32)(r_esp+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2f5f: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2f62: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2f65: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2f68: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2f6b: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b2f6f: pfmul mm1, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2f74: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2f77: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b2f7a: pfmul mm2, qword ptr [ecx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2f7f: pfmul mm3, qword ptr [ecx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2f84: pfmul mm4, qword ptr [ecx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_ecx+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b2f89: pfmul mm5, qword ptr [ecx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b2f8e: pfmul mm6, qword ptr [ecx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_ecx+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008b2f93: pfmul mm7, qword ptr [ecx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_ecx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b2f98: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2f9c: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2fa0: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b2fa4: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b2fa8: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b2fac: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b2fb0: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2fb4: movq qword ptr [eax + 0x38], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b2fb8: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2fbc: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2fc1: movq mm2, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2fc6: movq mm3, qword ptr [esp + 0x18] */ { MM64 r; r.q = R64((u32)(r_esp+0x18u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b2fcb: movq mm4, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2fd0: movq mm5, qword ptr [esp + 0x28] */ { MM64 r; r.q = R64((u32)(r_esp+0x28u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2fd5: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b2fd8: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b2fdc: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2fe0: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2fe4: movq qword ptr [eax + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2fe8: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2fec: mov esp, ebp */ r_esp = r_ebp;
    /* 008b2fee: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008b2ff2: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b2ff5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b2ff7: ret 0xc */ FN_RET(0x008b2c02); r_esp += 16; return;
}

