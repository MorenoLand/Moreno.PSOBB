#include "protos.h"

void f_008bb080(void) /* sub_8BB080 */
{
    FN_ENTER(0x008bb080);
    /* 008bb080: movd mm6, dword ptr [0xa36918] */ { u64 v = R32((u32)(0xa36918u)); fpr[6] = (long double)(i64)v; }
    /* 008bb087: movd mm7, dword ptr [0xa3691c] */ { u64 v = R32((u32)(0xa3691cu)); fpr[7] = (long double)(i64)v; }
    /* 008bb08e: movd mm4, dword ptr [0xa3692c] */ { u64 v = R32((u32)(0xa3692cu)); fpr[4] = (long double)(i64)v; }
    /* 008bb095: pand mm6, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q & b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb098: movd mm5, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[5] = (long double)(i64)v; }
    /* 008bb09f: pand mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb0a2: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bb0a5: pcmpgtd mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = ((i32)a.d[0] > (i32)b.d[0]) ? ~0u : 0; r.d[1] = ((i32)a.d[1] > (i32)b.d[1]) ? ~0u : 0; fpr[3] = (long double)(i64)(r.q); }
    /* 008bb0a8: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb0ab: pfmul mm0, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb0af: movd mm2, dword ptr [0xa36960] */ { u64 v = R32((u32)(0xa36960u)); fpr[2] = (long double)(i64)v; }
    /* 008bb0b6: pfsubr mm0, mm4 */ { u64 r = rt_pf_subr((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb0ba: pfrsqrt mm7, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[7]); fpr[7] = (long double)(i64)(r); }
    /* 008bb0be: movq mm1, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb0c1: pfmul mm7, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[7]); fpr[7] = (long double)(i64)(r); }
    /* 008bb0c5: pcmpgtd mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = ((i32)a.d[0] > (i32)b.d[0]) ? ~0u : 0; r.d[1] = ((i32)a.d[1] > (i32)b.d[1]) ? ~0u : 0; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb0c8: pfrsqit1 mm7, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[7], (u64)(i64)fpr[0]); fpr[7] = (long double)(i64)(r); }
    /* 008bb0cc: movd mm4, dword ptr [0xa36970] */ { u64 v = R32((u32)(0xa36970u)); fpr[4] = (long double)(i64)v; }
    /* 008bb0d3: pfrcpit2 mm7, mm1 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008bb0d7: pfmul mm7, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[0]); fpr[7] = (long double)(i64)(r); }
    /* 008bb0db: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb0de: pand mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = a.q & b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb0e1: pandn mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = ~a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb0e4: movd mm7, dword ptr [0xa36968] */ { u64 v = R32((u32)(0xa36968u)); fpr[7] = (long double)(i64)v; }
    /* 008bb0eb: por mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb0ee: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb0f1: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb0f5: movd mm5, dword ptr [0xa36964] */ { u64 v = R32((u32)(0xa36964u)); fpr[5] = (long double)(i64)v; }
    /* 008bb0fc: pfmul mm7, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[0]); fpr[7] = (long double)(i64)(r); }
    /* 008bb100: pfadd mm4, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008bb104: pfadd mm7, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008bb108: movd mm5, dword ptr [0xa3696c] */ { u64 v = R32((u32)(0xa3696cu)); fpr[5] = (long double)(i64)v; }
    /* 008bb10f: pfmul mm7, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[0]); fpr[7] = (long double)(i64)(r); }
    /* 008bb113: pfmul mm0, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb117: pfadd mm0, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008bb11b: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008bb11f: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008bb123: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb127: movd mm5, dword ptr [0xa36978] */ { u64 v = R32((u32)(0xa36978u)); fpr[5] = (long double)(i64)v; }
    /* 008bb12e: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008bb132: pfmul mm0, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[7]); fpr[0] = (long double)(i64)(r); }
    /* 008bb136: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb139: pandn mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = ~a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb13c: movd mm5, dword ptr [0xa36974] */ { u64 v = R32((u32)(0xa36974u)); fpr[5] = (long double)(i64)v; }
    /* 008bb143: movq mm7, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[7] = (long double)(i64)(r.q); }
    /* 008bb146: pxor mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb149: pfadd mm1, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008bb14d: movd mm0, dword ptr [0xa36934] */ { u64 v = R32((u32)(0xa36934u)); fpr[0] = (long double)(i64)v; }
    /* 008bb154: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008bb158: pslld mm7, 0x1f */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x1fu; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[7] = (long double)(i64)(r.q); }
    /* 008bb15c: pandn mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = ~a.q & b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb15f: pxor mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008bb162: pfadd mm1, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008bb166: pand mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb169: por mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q | b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb16c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008bb170: pandn mm3, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = ~a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bb173: por mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb176: ret  */ FN_RET(0x008bb080); r_esp += 4; return;
}

void f_008bb280(void) /* sub_8BB280 */
{
    FN_ENTER(0x008bb280);
    /* 008bb280: movd mm6, dword ptr [0xa36920] */ { u64 v = R32((u32)(0xa36920u)); fpr[6] = (long double)(i64)v; }
    /* 008bb287: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb28a: movd mm2, dword ptr [0xa36924] */ { u64 v = R32((u32)(0xa36924u)); fpr[2] = (long double)(i64)v; }
    /* 008bb291: pand mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb294: movd mm3, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[3] = (long double)(i64)v; }
    /* 008bb29b: pand mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = a.q & b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb29e: por mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb2a1: movd mm3, dword ptr [0xa36990] */ { u64 v = R32((u32)(0xa36990u)); fpr[3] = (long double)(i64)v; }
    /* 008bb2a8: psrld mm4, 0x17 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x17u; r.d[0] = c >= 32 ? 0 : (a.d[0] >> c); r.d[1] = c >= 32 ? 0 : (a.d[1] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bb2ac: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb2af: pxor mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb2b2: movd mm6, dword ptr [0xa36994] */ { u64 v = R32((u32)(0xa36994u)); fpr[6] = (long double)(i64)v; }
    /* 008bb2b9: pcmpgtd mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = ((i32)a.d[0] > (i32)b.d[0]) ? ~0u : 0; r.d[1] = ((i32)a.d[1] > (i32)b.d[1]) ? ~0u : 0; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb2bc: pcmpeqd mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = (a.d[0] == b.d[0]) ? ~0u : 0; r.d[1] = (a.d[1] == b.d[1]) ? ~0u : 0; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb2bf: psubd mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb2c2: movd mm3, dword ptr [0xa36998] */ { u64 v = R32((u32)(0xa36998u)); fpr[3] = (long double)(i64)v; }
    /* 008bb2c9: pand mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb2cc: movd mm6, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[6] = (long double)(i64)v; }
    /* 008bb2d3: psubd mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb2d6: psubd mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0] - b.d[0]; r.d[1] = a.d[1] - b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb2d9: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb2dc: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008bb2e0: pfsub mm0, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008bb2e4: pi2fd mm4, mm4 */ { u64 r = rt_pi2fd((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008bb2e8: movd mm7, dword ptr [0xa3698c] */ { u64 v = R32((u32)(0xa3698cu)); fpr[7] = (long double)(i64)v; }
    /* 008bb2ef: pfrcp mm6, mm2 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008bb2f3: movd mm3, dword ptr [0xa36988] */ { u64 v = R32((u32)(0xa36988u)); fpr[3] = (long double)(i64)v; }
    /* 008bb2fa: pfrcpit1 mm2, mm6 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008bb2fe: pfmul mm7, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008bb302: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008bb306: movd mm4, dword ptr [0xa3699c] */ { u64 v = R32((u32)(0xa3699cu)); fpr[4] = (long double)(i64)v; }
    /* 008bb30d: pfrcpit2 mm2, mm6 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008bb311: movd mm1, dword ptr [0xa369a0] */ { u64 v = R32((u32)(0xa369a0u)); fpr[1] = (long double)(i64)v; }
    /* 008bb318: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008bb31c: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb31f: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb323: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008bb327: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb32a: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008bb32e: movd mm4, dword ptr [0xa369a4] */ { u64 v = R32((u32)(0xa369a4u)); fpr[4] = (long double)(i64)v; }
    /* 008bb335: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008bb339: pfmul mm2, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008bb33d: movd mm1, dword ptr [0xa369ac] */ { u64 v = R32((u32)(0xa369acu)); fpr[1] = (long double)(i64)v; }
    /* 008bb344: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008bb348: pfadd mm2, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008bb34c: pfmul mm2, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008bb350: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008bb354: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb357: pand mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q & b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb35a: pfadd mm2, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008bb35e: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008bb362: pandn mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = ~a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb365: por mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb368: ret  */ FN_RET(0x008bb280); r_esp += 4; return;
}

void f_008bb3cc(void)
{
    FN_ENTER(0x008bb3cc);
    /* 008bb3cc: fmul dword ptr [edi] */ ST(0) = ST(0) * R_F32((u32)(r_edi));
    /* 008bb3ce: outsb dx, byte ptr [esi] */ UNSUP(0x008bb3ce, "outsb dx, byte ptr [esi]");
    /* 008bb3cf: adc eax, 0xa36984 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xa36984u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 008bb3d4: por mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q | b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008bb3d7: movd mm7, dword ptr [0xa36988] */ { u64 v = R32((u32)(0xa36988u)); fpr[7] = (long double)(i64)v; }
    /* 008bb3de: pfadd mm4, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008bb3e2: movd mm1, dword ptr [0xa3698c] */ { u64 v = R32((u32)(0xa3698cu)); fpr[1] = (long double)(i64)v; }
    /* 008bb3e9: pf2id mm4, mm4 */ { u64 r = rt_pf2id((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008bb3ed: pfcmpge mm5, mm2 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008bb3f1: pi2fd mm3, mm4 */ { u64 r = rt_pi2fd((u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008bb3f5: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008bb3f9: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008bb3fd: movd mm3, dword ptr [0xa36944] */ { u64 v = R32((u32)(0xa36944u)); fpr[3] = (long double)(i64)v; }
    /* 008bb404: pfsub mm0, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[7]); fpr[0] = (long double)(i64)(r); }
    /* 008bb408: movd mm7, dword ptr [0xa36940] */ { u64 v = R32((u32)(0xa36940u)); fpr[7] = (long double)(i64)v; }
    /* 008bb40f: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb413: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb416: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb41a: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb41d: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008bb421: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008bb424: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008bb428: movd mm7, dword ptr [0xa3693c] */ { u64 v = R32((u32)(0xa3693cu)); fpr[7] = (long double)(i64)v; }
    /* 008bb42f: pfadd mm2, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008bb433: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008bb437: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bb43b: pfrcp mm1, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008bb43f: pfrcpit1 mm0, mm1 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb443: pfadd mm2, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008bb447: movd mm3, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[3] = (long double)(i64)v; }
    /* 008bb44e: pfrcpit2 mm0, mm1 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008bb452: pslld mm4, 0x17 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x17u; r.d[0] = c >= 32 ? 0 : (a.d[0] << c); r.d[1] = c >= 32 ? 0 : (a.d[1] << c); fpr[4] = (long double)(i64)(r.q); }
    /* 008bb456: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008bb45a: movd mm0, dword ptr [0xa369c8] */ { u64 v = R32((u32)(0xa369c8u)); fpr[0] = (long double)(i64)v; }
    /* 008bb461: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008bb465: pand mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb468: paddd mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0] + b.d[0]; r.d[1] = a.d[1] + b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb46b: pand mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb46e: pandn mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = ~a.q & b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb471: por mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = a.q | b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb474: ret  */ FN_RET(0x008bb3cc); r_esp += 4; return;
}

void f_008bb660(void) /* sub_8BB660 */
{
    FN_ENTER(0x008bb660);
    /* 008bb660: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008bb663: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb666: movd mm3, dword ptr [0xa3691c] */ { u64 v = R32((u32)(0xa3691cu)); fpr[3] = (long double)(i64)v; }
    /* 008bb66d: mov ebx, eax */ r_ebx = r_eax;
    /* 008bb66f: mov edx, eax */ r_edx = r_eax;
    /* 008bb671: pand mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb674: and ebx, 0x80000000 */ {  u32 a = r_ebx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bb67a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008bb67d: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bb67f: cmp eax, dword ptr [0xa369d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa369d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bb685: movd mm2, dword ptr [0xa369d0] */ { u64 v = R32((u32)(0xa369d0u)); fpr[2] = (long double)(i64)v; }
    /* 008bb68c: jl 0x8bb6a0 */ if ((fS!=fO)) goto L_008bb6a0;
L_008bb68e:; BB(0x008bb68e);
    /* 008bb68e: movd mm0, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[0] = (long double)(i64)v; }
    /* 008bb695: jmp 0x8bb777 */ goto L_008bb777;
L_008bb6a0:; BB(0x008bb6a0);
    /* 008bb6a0: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb6a3: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bb6a7: movq mm3, qword ptr [0xa368e0] */ { MM64 r; r.q = R64((u32)(0xa368e0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bb6ae: pf2id mm0, mm0 */ { u64 r = rt_pf2id((u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb6b2: movq mm7, qword ptr [0xa368e8] */ { MM64 r; r.q = R64((u32)(0xa368e8u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bb6b9: movd ecx, mm0 */ r_ecx = (u32)(u64)(i64)fpr[0];
    /* 008bb6bc: pi2fd mm0, mm0 */ { u64 r = rt_pi2fd((u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb6c0: mov esi, ecx */ r_esi = r_ecx;
    /* 008bb6c2: movq mm6, qword ptr [0xa368f8] */ { MM64 r; r.q = R64((u32)(0xa368f8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bb6c9: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb6cc: movq mm5, qword ptr [0xa36898] */ { MM64 r; r.q = R64((u32)(0xa36898u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bb6d3: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008bb6d7: movq mm3, qword ptr [0xa368f0] */ { MM64 r; r.q = R64((u32)(0xa368f0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bb6de: pfadd mm1, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008bb6e2: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008bb6e5: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb6e8: xor edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008bb6ea: pfadd mm1, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008bb6ee: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bb6f4: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb6f7: je 0x8bb6fd */ if (fZ) goto L_008bb6fd;
L_008bb6f9:; BB(0x008bb6f9);
    /* 008bb6f9: pfsubr mm1, mm3 */ { u64 r = rt_pf_subr((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
L_008bb6fd:; BB(0x008bb6fd);
    /* 008bb6fd: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb700: shl edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bb703: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb706: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008bb70a: mov esi, ecx */ r_esi = r_ecx;
    /* 008bb70c: movq mm4, qword ptr [0xa36900] */ { MM64 r; r.q = R64((u32)(0xa36900u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bb713: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008bb715: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008bb719: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008bb71b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008bb71f: shl esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008bb722: pfadd mm7, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008bb726: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008bb728: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008bb72c: pfmul mm7, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008bb730: movq mm6, qword ptr [0xa36908] */ { MM64 r; r.q = R64((u32)(0xa36908u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bb737: pfadd mm7, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008bb73b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008bb73f: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008bb743: movd mm0, edx */ { u64 v = r_edx; fpr[0] = (long double)(i64)v; }
    /* 008bb746: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb74a: punpckldq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb74d: psrlq mm5, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bb751: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008bb755: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb758: movd mm1, ebx */ { u64 v = r_ebx; fpr[1] = (long double)(i64)v; }
    /* 008bb75b: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb75f: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bb765: pfmul mm4, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008bb769: je 0x8bb771 */ if (fZ) goto L_008bb771;
L_008bb76b:; BB(0x008bb76b);
    /* 008bb76b: punpckldq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb76e: punpckhdq mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
L_008bb771:; BB(0x008bb771);
    /* 008bb771: pxor mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb774: pxor mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
L_008bb777:; BB(0x008bb777);
    /* 008bb777: nop  */ ;
    /* 008bb778: ret  */ FN_RET(0x008bb660); r_esp += 4; return;
}

void f_008bb780(void) /* sub_8BB780 */
{
    FN_ENTER(0x008bb780);
    /* 008bb780: movd eax, mm0 */ r_eax = (u32)(u64)(i64)fpr[0];
    /* 008bb783: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb786: movd mm3, dword ptr [0xa3691c] */ { u64 v = R32((u32)(0xa3691cu)); fpr[3] = (long double)(i64)v; }
    /* 008bb78d: mov ebx, eax */ r_ebx = r_eax;
    /* 008bb78f: mov edx, eax */ r_edx = r_eax;
    /* 008bb791: pand mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb794: and ebx, 0x80000000 */ {  u32 a = r_ebx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bb79a: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008bb79d: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bb79f: cmp eax, dword ptr [0xa369d4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa369d4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bb7a5: movd mm2, dword ptr [0xa369d0] */ { u64 v = R32((u32)(0xa369d0u)); fpr[2] = (long double)(i64)v; }
    /* 008bb7ac: jl 0x8bb7c0 */ if ((fS!=fO)) goto L_008bb7c0;
L_008bb7ae:; BB(0x008bb7ae);
    /* 008bb7ae: movd mm0, dword ptr [0xa36928] */ { u64 v = R32((u32)(0xa36928u)); fpr[0] = (long double)(i64)v; }
    /* 008bb7b5: jmp 0x8bb897 */ goto L_008bb897;
L_008bb7c0:; BB(0x008bb7c0);
    /* 008bb7c0: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb7c3: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008bb7c7: movq mm3, qword ptr [0xa368e0] */ { MM64 r; r.q = R64((u32)(0xa368e0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bb7ce: pf2id mm0, mm0 */ { u64 r = rt_pf2id((u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb7d2: movq mm7, qword ptr [0xa368e8] */ { MM64 r; r.q = R64((u32)(0xa368e8u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008bb7d9: movd ecx, mm0 */ r_ecx = (u32)(u64)(i64)fpr[0];
    /* 008bb7dc: pi2fd mm0, mm0 */ { u64 r = rt_pi2fd((u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008bb7e0: mov esi, ecx */ r_esi = r_ecx;
    /* 008bb7e2: movq mm6, qword ptr [0xa368f8] */ { MM64 r; r.q = R64((u32)(0xa368f8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bb7e9: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb7ec: movq mm5, qword ptr [0xa36898] */ { MM64 r; r.q = R64((u32)(0xa36898u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008bb7f3: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008bb7f7: movq mm3, qword ptr [0xa368f0] */ { MM64 r; r.q = R64((u32)(0xa368f0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008bb7fe: pfadd mm1, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008bb802: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008bb805: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb808: xor edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008bb80a: pfadd mm1, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008bb80e: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bb814: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008bb817: je 0x8bb81d */ if (fZ) goto L_008bb81d;
L_008bb819:; BB(0x008bb819);
    /* 008bb819: pfsubr mm1, mm3 */ { u64 r = rt_pf_subr((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
L_008bb81d:; BB(0x008bb81d);
    /* 008bb81d: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb820: shl edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bb823: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008bb826: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008bb82a: mov esi, ecx */ r_esi = r_ecx;
    /* 008bb82c: movq mm4, qword ptr [0xa36900] */ { MM64 r; r.q = R64((u32)(0xa36900u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008bb833: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008bb835: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008bb839: xor ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008bb83b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008bb83f: shl esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008bb842: pfadd mm7, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008bb846: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008bb848: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008bb84c: pfmul mm7, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008bb850: movq mm6, qword ptr [0xa36908] */ { MM64 r; r.q = R64((u32)(0xa36908u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008bb857: pfadd mm7, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008bb85b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008bb85f: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008bb863: movd mm0, edx */ { u64 v = r_edx; fpr[0] = (long double)(i64)v; }
    /* 008bb866: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb86a: punpckldq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008bb86d: psrlq mm5, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008bb871: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008bb875: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb878: movd mm1, ebx */ { u64 v = r_ebx; fpr[1] = (long double)(i64)v; }
    /* 008bb87b: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008bb87f: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008bb885: pfmul mm4, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008bb889: je 0x8bb891 */ if (fZ) goto L_008bb891;
L_008bb88b:; BB(0x008bb88b);
    /* 008bb88b: punpckldq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008bb88e: punpckhdq mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
L_008bb891:; BB(0x008bb891);
    /* 008bb891: pxor mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008bb894: pxor mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
L_008bb897:; BB(0x008bb897);
    /* 008bb897: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008bb89a: ret  */ FN_RET(0x008bb780); r_esp += 4; return;
}

void f_008bbb78(void) /* sub_8BBB78 */
{
    FN_ENTER(0x008bbb78);
    /* 008bbb78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bbb79: mov ebp, esp */ r_ebp = r_esp;
    /* 008bbb7b: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bbb81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bbb84: mov edx, dword ptr [eax + 0x11c] */ r_edx = R32((u32)(r_eax+0x11cu));
    /* 008bbb8a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bbb8d: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 008bbb90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bbb91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bbb92: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008bbb95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bbb96: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bbb9c: add esi, 0x60 */ {  u32 a = r_esi; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbb9f: lea edi, [ebp - 0x78] */ r_edi = (u32)(r_ebp+0xffffff88u);
    /* 008bbba2: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008bbba5: mov dword ptr [ebp + 8], 8 */ W32((u32)(r_ebp+0x8u), 0x8u);
    /* 008bbbac: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008bbbaf: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008bbbb2: add ecx, 0x60 */ {  u32 a = r_ecx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008bbbb5:; BB(0x008bbbb5);
    /* 008bbbb5: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bbbb9: je 0x8bbd27 */ if (fZ) goto L_008bbd27;
L_008bbbbf:; BB(0x008bbbbf);
    /* 008bbbbf: mov bx, word ptr [esi - 0x10] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0xfffffff0u))) & 0xffffu);
    /* 008bbbc3: mov ax, word ptr [esi + 0x10] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x10u))) & 0xffffu);
    /* 008bbbc7: mov word ptr [ebp + 0x10], ax */ W16((u32)(r_ebp+0x10u), (u16)r_eax);
    /* 008bbbcb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbcd: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008bbbd0: mov word ptr [ebp + 0xc], bx */ W16((u32)(r_ebp+0xcu), (u16)r_ebx);
    /* 008bbbd4: mov bx, word ptr [esi - 0x30] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0xffffffd0u))) & 0xffffu);
    /* 008bbbd8: mov word ptr [ebp - 4], bx */ W16((u32)(r_ebp+0xfffffffcu), (u16)r_ebx);
    /* 008bbbdc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008bbbde: mov bx, word ptr [esi - 0x50] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0xffffffb0u))) & 0xffffu);
    /* 008bbbe2: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008bbbe5: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbe7: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbea: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008bbbed: or eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbf0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008bbbf2: mov bx, word ptr [esi - 0x40] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_esi+0xffffffc0u))) & 0xffffu);
    /* 008bbbf6: or eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbf9: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbbfb: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008bbbfe: movsx eax, word ptr [ecx - 0x60] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xffffffa0u));
    /* 008bbc02: jne 0x8bbc1b */ if (!fZ) goto L_008bbc1b;
L_008bbc04:; BB(0x008bbc04);
    /* 008bbc04: movsx ebx, word ptr [esi - 0x60] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_esi+0xffffffa0u));
    /* 008bbc08: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc0b: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bbc0e: mov dword ptr [edi - 0x20], eax */ W32((u32)(r_edi+0xffffffe0u), r_eax);
    /* 008bbc11: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008bbc13: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 008bbc16: jmp 0x8bbd24 */ goto L_008bbd24;
L_008bbc1b:; BB(0x008bbc1b);
    /* 008bbc1b: movsx edx, word ptr [esi - 0x60] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xffffffa0u));
    /* 008bbc1f: mov si, word ptr [ecx] */ r_esi = (r_esi & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008bbc22: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc25: imul si, word ptr [ebp - 0x18] */ { i32 t = (i32)(i16)(u16)r_esi * (i32)(i16)R16((u32)(r_ebp+0xffffffe8u)); r_esi = (r_esi & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbc2a: mov dx, word ptr [ecx - 0x40] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0xffffffc0u))) & 0xffffu);
    /* 008bbc2e: imul dx, bx */ { i32 t = (i32)(i16)(u16)r_edx * (i32)(i16)(u16)r_ebx; r_edx = (r_edx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbc32: movsx edi, word ptr [ebp + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 008bbc36: movsx ebx, word ptr [ebp + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 008bbc3a: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bbc3d: movsx esi, si */ r_esi = (u32)(i32)(i16)(u16)r_esi;
    /* 008bbc40: imul edx, edx, 0x3b21 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x3b21u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc46: imul esi, esi, 0x187e */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x187eu; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc4c: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbc4e: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bbc51: lea esi, [edx + eax] */ r_esi = (u32)(r_edx+r_eax);
    /* 008bbc54: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bbc56: movsx edx, word ptr [ecx + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x10u));
    /* 008bbc5a: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc5d: movsx edi, word ptr [ecx - 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xfffffff0u));
    /* 008bbc61: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc64: movsx ebx, word ptr [ebp - 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffffcu));
    /* 008bbc68: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 008bbc6b: movsx edi, word ptr [ecx - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xffffffd0u));
    /* 008bbc6f: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc72: movsx ebx, word ptr [ebp - 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 008bbc76: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 008bbc79: movsx edi, word ptr [ecx - 0x50] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0xffffffb0u));
    /* 008bbc7d: imul edi, ebx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc80: movsx ebx, word ptr [ebp + 0xc] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 008bbc84: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 008bbc87: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008bbc8a: movsx edi, word ptr [ebp + 0x10] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 008bbc8e: movsx ebx, word ptr [ebp - 8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebp+0xfffffff8u));
    /* 008bbc92: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008bbc95: imul ebx, ebx, 0x21f9 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x21f9u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbc9b: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bbc9e: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008bbca1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008bbca4: imul edx, edx, 0x2e75 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x2e75u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcaa: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bbcac: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008bbcaf: imul ebx, ebx, 0x6c2 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x6c2u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcb5: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbcb7: mov ebx, edi */ r_ebx = r_edi;
    /* 008bbcb9: imul edi, edi, 0x1ccd */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x1ccdu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcbf: imul ebx, ebx, 0x4587 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x4587u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcc5: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbcc7: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008bbcca: imul ebx, ebx, 0x133e */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x133eu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcd0: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bbcd2: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008bbcd5: imul ebx, ebx, 0x1050 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1050u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbcdb: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bbcdd: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bbce0: imul ebx, ebx, 0x5203 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x5203u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbce6: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbce8: lea ebx, [esi + edi + 0x800] */ r_ebx = (u32)(r_esi+r_edi+0x800u);
    /* 008bbcef: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 008bbcf2: sub esi, dword ptr [ebp + 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bbcf5: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008bbcf8: sar ebx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bbcfb: mov dword ptr [edi - 0x20], ebx */ W32((u32)(r_edi+0xffffffe0u), r_ebx);
    /* 008bbcfe: mov ebx, 0x800 */ r_ebx = 0x800u;
    /* 008bbd03: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbd05: sar esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008bbd08: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 008bbd0b: lea esi, [eax + edx + 0x800] */ r_esi = (u32)(r_eax+r_edx+0x800u);
    /* 008bbd12: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bbd14: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008bbd17: sar esi, 0xc */ { u32 c = (12u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008bbd1a: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bbd1c: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 008bbd1e: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008bbd21: sar eax, 0xc */ { u32 c = (12u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_008bbd24:; BB(0x008bbd24);
    /* 008bbd24: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_008bbd27:; BB(0x008bbd27);
    /* 008bbd27: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbd28: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbd29: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbd2a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbd2d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbd2e: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bbd31: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bbd35: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008bbd38: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 008bbd3b: jg 0x8bbbb5 */ if ((!fZ&&fS==fO)) goto L_008bbbb5;
L_008bbd41:; BB(0x008bbd41);
    /* 008bbd41: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bbd45: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
L_008bbd4b:; BB(0x008bbd4b);
    /* 008bbd4b: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008bbd4e: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008bbd51: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 008bbd54: mov esi, dword ptr [ecx + 0xc] */ r_esi = R32((u32)(r_ecx+0xcu));
    /* 008bbd57: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 008bbd5a: mov ebx, dword ptr [ecx + 0x14] */ r_ebx = R32((u32)(r_ecx+0x14u));
    /* 008bbd5d: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bbd60: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008bbd62: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008bbd64: or edi, dword ptr [ecx + 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1cu)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008bbd67: or edi, dword ptr [ecx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008bbd6a: or edi, dword ptr [ecx + 8] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 008bbd6d: jne 0x8bbd8d */ if (!fZ) goto L_008bbd8d;
L_008bbd6f:; BB(0x008bbd6f);
    /* 008bbd6f: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008bbd71: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbd74: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 008bbd77: and esi, 0x3ff */ {  u32 a = r_esi; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008bbd7d: mov bl, byte ptr [esi + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esi+r_edx))) & 0xffu);
    /* 008bbd80: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008bbd82: mov byte ptr [eax + 1], bl */ W8((u32)(r_eax+0x1u), (u8)r_ebx);
    /* 008bbd85: mov byte ptr [eax + 3], bl */ W8((u32)(r_eax+0x3u), (u8)r_ebx);
    /* 008bbd88: jmp 0x8bbe75 */ goto L_008bbe75;
L_008bbd8d:; BB(0x008bbd8d);
    /* 008bbd8d: movsx edi, word ptr [ecx + 0x18] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x18u));
    /* 008bbd91: movsx esi, word ptr [ecx + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x8u));
    /* 008bbd95: imul edi, edi, 0x187e */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x187eu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbd9b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008bbd9d: imul esi, esi, 0x3b21 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x3b21u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbda3: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bbda5: shl edx, 0xe */ { u32 c = (14u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008bbda8: lea edi, [esi + edx] */ r_edi = (u32)(r_esi+r_edx);
    /* 008bbdab: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbdad: movsx esi, bx */ r_esi = (u32)(i32)(i16)(u16)r_ebx;
    /* 008bbdb0: movsx ebx, word ptr [ecx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x4u));
    /* 008bbdb4: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008bbdb7: movsx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x1cu));
    /* 008bbdbb: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 008bbdbe: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bbdc1: imul ebx, ebx, 0x21f9 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x21f9u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbdc7: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 008bbdca: imul esi, esi, 0x2e75 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0x2e75u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbdd0: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbdd2: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008bbdd5: imul ebx, ebx, 0x6c2 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x6c2u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbddb: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bbddd: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008bbde0: movsx edx, word ptr [ecx + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xcu));
    /* 008bbde4: mov ebx, edx */ r_ebx = r_edx;
    /* 008bbde6: imul edx, edx, 0x1ccd */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1ccdu; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbdec: imul ebx, ebx, 0x4587 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x4587u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbdf2: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bbdf4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008bbdf7: imul ebx, ebx, 0x133e */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x133eu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbdfd: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbdff: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008bbe02: imul ebx, ebx, 0x1050 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1050u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbe08: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbe0a: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bbe0d: imul ebx, ebx, 0x5203 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x5203u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbe13: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bbe15: lea ebx, [edi + edx + 0x40000] */ r_ebx = (u32)(r_edi+r_edx+0x40000u);
    /* 008bbe1c: sar ebx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bbe1f: mov dword ptr [ebp + 0x10], edx */ W32((u32)(r_ebp+0x10u), r_edx);
    /* 008bbe22: sub edi, dword ptr [ebp + 0x10] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe25: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008bbe28: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bbe2e: mov bl, byte ptr [ebx + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_edx))) & 0xffu);
    /* 008bbe31: add edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe37: sar edi, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008bbe3a: and edi, 0x3ff */ {  u32 a = r_edi; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe40: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 008bbe42: mov bl, byte ptr [edi + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_edx))) & 0xffu);
    /* 008bbe45: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bbe48: mov byte ptr [eax + 3], bl */ W8((u32)(r_eax+0x3u), (u8)r_ebx);
    /* 008bbe4b: lea ebx, [edi + esi + 0x40000] */ r_ebx = (u32)(r_edi+r_esi+0x40000u);
    /* 008bbe52: sar ebx, 0x13 */ { u32 c = (19u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bbe55: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe57: and ebx, 0x3ff */ {  u32 a = r_ebx; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bbe5d: mov bl, byte ptr [ebx + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx+r_edx))) & 0xffu);
    /* 008bbe60: add edi, 0x40000 */ {  u32 a = r_edi; u32 b = 0x40000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe66: sar edi, 0x13 */ { u32 c = (19u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 008bbe69: and edi, 0x3ff */ {  u32 a = r_edi; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008bbe6f: mov byte ptr [eax + 1], bl */ W8((u32)(r_eax+0x1u), (u8)r_ebx);
    /* 008bbe72: mov bl, byte ptr [edi + edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi+r_edx))) & 0xffu);
L_008bbe75:; BB(0x008bbe75);
    /* 008bbe75: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbe78: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bbe7b: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bbe7f: mov byte ptr [eax + 2], bl */ W8((u32)(r_eax+0x2u), (u8)r_ebx);
    /* 008bbe82: jl 0x8bbd4b */ if ((fS!=fO)) goto L_008bbd4b;
L_008bbe88:; BB(0x008bbe88);
    /* 008bbe88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bbe89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bbe8a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bbe8b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bbe8c: ret  */ FN_RET(0x008bbb78); r_esp += 4; return;
}

void f_008bbe8d(void) /* sub_8BBE8D */
{
    FN_ENTER(0x008bbe8d);
    /* 008bbe8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008bbe8e: mov ebp, esp */ r_ebp = r_esp;
    /* 008bbe90: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008bbe93: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008bbe96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008bbe97: mov ebx, dword ptr [eax + 0x11c] */ r_ebx = R32((u32)(r_eax+0x11cu));
    /* 008bbe9d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008bbea0: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 008bbea3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008bbea4: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 008bbea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008bbea8: add ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008bbeae: lea edi, [ebp - 0x48] */ r_edi = (u32)(r_ebp+0xffffffb8u);
    /* 008bbeb1: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbeb4: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008bbeb7: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008bbeba: mov dword ptr [ebp + 8], 8 */ W32((u32)(r_ebp+0x8u), 0x8u);
    /* 008bbec1: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_008bbec4:; BB(0x008bbec4);
    /* 008bbec4: cmp dword ptr [ebp + 8], 6 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bbec8: je 0x8bbf89 */ if (fZ) goto L_008bbf89;
L_008bbece:; BB(0x008bbece);
    /* 008bbece: cmp dword ptr [ebp + 8], 4 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bbed2: je 0x8bbf89 */ if (fZ) goto L_008bbf89;
L_008bbed8:; BB(0x008bbed8);
    /* 008bbed8: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008bbedc: je 0x8bbf89 */ if (fZ) goto L_008bbf89;
L_008bbee2:; BB(0x008bbee2);
    /* 008bbee2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bbee4: mov ax, word ptr [esi + 0x40] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0x40u))) & 0xffffu);
    /* 008bbee8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008bbeea: mov dx, word ptr [esi + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi+0x20u))) & 0xffffu);
    /* 008bbeee: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008bbef0: mov edx, eax */ r_edx = r_eax;
    /* 008bbef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bbef4: mov ax, word ptr [esi - 0x20] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0xffffffe0u))) & 0xffffu);
    /* 008bbef8: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008bbefa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008bbefc: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008bbeff: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008bbf01: movsx eax, word ptr [ecx - 0x30] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xffffffd0u));
    /* 008bbf05: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008bbf08: movsx edx, word ptr [esi - 0x30] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xffffffd0u));
    /* 008bbf0c: jne 0x8bbf18 */ if (!fZ) goto L_008bbf18;
L_008bbf0e:; BB(0x008bbf0e);
    /* 008bbf0e: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf11: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bbf14: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008bbf16: jmp 0x8bbf86 */ goto L_008bbf86;
L_008bbf18:; BB(0x008bbf18);
    /* 008bbf18: mov di, word ptr [ecx + 0x40] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ecx+0x40u))) & 0xffffu);
    /* 008bbf1c: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf1f: imul di, word ptr [esi + 0x40] */ { i32 t = (i32)(i16)(u16)r_edi * (i32)(i16)R16((u32)(r_esi+0x40u)); r_edi = (r_edi & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbf24: mov dx, word ptr [ecx + 0x20] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ecx+0x20u))) & 0xffffu);
    /* 008bbf28: imul dx, word ptr [esi + 0x20] */ { i32 t = (i32)(i16)(u16)r_edx * (i32)(i16)R16((u32)(r_esi+0x20u)); r_edx = (r_edx & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbf2d: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 008bbf30: imul edi, edi, 0x1712 */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x1712u; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf36: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 008bbf39: imul edx, edx, 0x1b37 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0x1b37u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf3f: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbf41: mov di, word ptr [ecx - 0x20] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ecx+0xffffffe0u))) & 0xffffu);
    /* 008bbf45: imul di, word ptr [esi - 0x20] */ { i32 t = (i32)(i16)(u16)r_edi * (i32)(i16)R16((u32)(r_esi+0xffffffe0u)); r_edi = (r_edi & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbf4a: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 008bbf4d: imul edi, edi, 0x73fc */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x73fcu; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf53: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008bbf55: mov di, word ptr [ecx] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008bbf58: imul di, word ptr [esi] */ { i32 t = (i32)(i16)(u16)r_edi * (i32)(i16)R16((u32)(r_esi)); r_edi = (r_edi & 0xffff0000u) | (((u32)t) & 0xffffu); fC = fO = (t != (i32)(i16)t); }
    /* 008bbf5c: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 008bbf5f: imul edi, edi, 0x28ba */ { i64 t = (i64)(i32)r_edi * (i64)(i32)0x28bau; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbf65: shl eax, 0xf */ { u32 c = (15u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008bbf68: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008bbf6a: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008bbf6d: lea ebx, [edx + eax + 0x1000] */ r_ebx = (u32)(r_edx+r_eax+0x1000u);
    /* 008bbf74: sar ebx, 0xd */ { u32 c = (13u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bbf77: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008bbf79: add eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bbf7e: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 008bbf80: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bbf83: sar eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
L_008bbf86:; BB(0x008bbf86);
    /* 008bbf86: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_008bbf89:; BB(0x008bbf89);
    /* 008bbf89: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbf8a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbf8b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbf8c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbf8f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbf90: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008bbf93: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008bbf97: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008bbf9a: jg 0x8bbec4 */ if ((!fZ&&fS==fO)) goto L_008bbec4;
L_008bbfa0:; BB(0x008bbfa0);
    /* 008bbfa0: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008bbfa4: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 008bbfa7: mov edx, 0x3ff */ r_edx = 0x3ffu;
L_008bbfac:; BB(0x008bbfac);
    /* 008bbfac: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008bbfaf: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008bbfb2: mov edi, dword ptr [ecx + esi*4] */ r_edi = R32((u32)(r_ecx+r_esi*4));
    /* 008bbfb5: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 008bbfb8: or ecx, dword ptr [eax + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0xcu)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbfbb: add edi, dword ptr [ebp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008bbfbe: or ecx, dword ptr [eax + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x4u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbfc1: or ecx, dword ptr [eax + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x14u)); u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008bbfc4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008bbfc6: jne 0x8bbfd7 */ if (!fZ) goto L_008bbfd7;
L_008bbfc8:; BB(0x008bbfc8);
    /* 008bbfc8: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbfcb: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bbfce: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bbfd0: mov cl, byte ptr [ecx + ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx))) & 0xffu);
    /* 008bbfd3: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
    /* 008bbfd5: jmp 0x8bc033 */ goto L_008bc033;
L_008bbfd7:; BB(0x008bbfd7);
    /* 008bbfd7: movsx ebx, word ptr [eax + 0x1c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x1cu));
    /* 008bbfdb: movsx esi, word ptr [eax + 0xc] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 008bbfdf: imul ebx, ebx, 0x1712 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1712u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbfe5: imul esi, esi, 0xffffd746 */ { i64 t = (i64)(i32)r_esi * (i64)(i32)0xffffd746u; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbfeb: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008bbfed: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 008bbff1: imul ebx, ebx, 0x73fc */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x73fcu; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bbff7: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bbff9: movsx ebx, word ptr [eax + 0x14] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x14u));
    /* 008bbffd: imul ebx, ebx, 0x1b37 */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)0x1b37u; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008bc003: shl ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008bc006: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008bc008: lea ebx, [esi + ecx + 0x80000] */ r_ebx = (u32)(r_esi+r_ecx+0x80000u);
    /* 008bc00f: sar ebx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008bc012: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008bc014: mov edx, ebx */ r_edx = r_ebx;
    /* 008bc016: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008bc019: mov dl, byte ptr [edx + ebx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx))) & 0xffu);
    /* 008bc01c: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc01e: add ecx, 0x80000 */ {  u32 a = r_ecx; u32 b = 0x80000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc024: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 008bc026: sar ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008bc029: mov edx, 0x3ff */ r_edx = 0x3ffu;
    /* 008bc02e: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008bc030: mov cl, byte ptr [ecx + ebx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx+r_ebx))) & 0xffu);
L_008bc033:; BB(0x008bc033);
    /* 008bc033: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008bc036: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008bc039: cmp dword ptr [ebp + 8], 2 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008bc03d: mov byte ptr [edi + 1], cl */ W8((u32)(r_edi+0x1u), (u8)r_ecx);
    /* 008bc040: jl 0x8bbfac */ if ((fS!=fO)) goto L_008bbfac;
L_008bc046:; BB(0x008bc046);
    /* 008bc046: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008bc047: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008bc048: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008bc049: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008bc04a: ret  */ FN_RET(0x008bbe8d); r_esp += 4; return;
}

