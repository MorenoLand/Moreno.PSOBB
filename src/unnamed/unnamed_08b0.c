#include "protos.h"

void f_008b008a(void)
{
    FN_ENTER(0x008b008a);
    /* 008b008a: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0092: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0096: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0099: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b00a2: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b00a6: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b00aa: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b00ae: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b00b7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b00bb: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b00bf: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b00c3: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b00cc: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b00d0: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b00d4: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b00d8: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b00dc: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b00df: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b00e7: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b00eb: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b00ee: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b00f6: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b00f9: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0101: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0104: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0107: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b010b: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b010e: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0117: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b011f: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0123: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0126: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b012f: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0133: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0137: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b013b: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0144: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0148: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b014c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0150: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0159: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b015d: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0161: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0165: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0169: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b016d: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0175: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0179: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b017c: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0184: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0187: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b018f: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0192: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0195: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0199: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b019c: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b01a5: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b01ad: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b01b1: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b01b4: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b01bd: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b01c1: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b01c5: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b01c9: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b01d2: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b01d6: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b01da: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b01de: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b01e7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b01eb: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b01ef: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b01f3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b01f7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b01fb: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0203: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0207: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b020a: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0212: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0215: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b021d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0220: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0223: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0227: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b022a: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0233: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b023b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b023f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0242: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b024b: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b024f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0253: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0257: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0260: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0264: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0268: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b026c: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0275: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0279: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b027d: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0281: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0285: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0288: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b028c: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0290: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0293: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0298: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b029b: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b02a0: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b02a3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b02a6: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b02aa: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b02ad: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b02b3: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b02b8: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b02bc: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b02bf: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b02c5: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b02c9: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b02cd: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b02d1: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b02d7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b02db: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b02df: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b02e3: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b02e9: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b02ed: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b02f1: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b02f5: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b02f9: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b02fc: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0300: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0304: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0307: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b030c: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b030f: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0314: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0317: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b031a: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b031e: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0321: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0327: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b032c: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0330: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0333: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0339: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b033d: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0341: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0345: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b034b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b034f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0353: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0357: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b035d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0361: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0365: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0369: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b036d: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0371: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0375: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0379: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b037c: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0381: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0384: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0389: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b038c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b038f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0393: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0396: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b039c: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b03a1: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b03a5: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03a8: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b03ae: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b03b2: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b03b6: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b03ba: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b03c0: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b03c4: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b03c8: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b03cc: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b03d2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b03d6: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b03da: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b03de: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b03e2: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b03e6: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b03ea: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b03ee: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b03f1: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b03f6: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03f9: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b03fe: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0401: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0404: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0408: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b040b: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0411: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0416: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b041a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b041d: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0423: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0427: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b042b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b042f: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0435: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0439: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b043d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0441: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0447: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b044b: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b044f: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0453: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0457: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b045a: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b045e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0463: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0466: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b046b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b046e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0473: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0476: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0479: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b047d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0480: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0486: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b048b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b048f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0492: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0498: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b049c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b04a0: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b04a4: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b04aa: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b04ae: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b04b2: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b04b6: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b04bc: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b04c0: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b04c4: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b04c8: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b04cc: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b04cf: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b04d4: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b04d8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04db: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b04e0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b04e3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b04e8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b04eb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b04ee: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b04f2: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04f5: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b04fb: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0500: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0504: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0507: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b050d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0511: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0515: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0519: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b051f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0523: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0527: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b052b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0531: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0535: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0539: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b053d: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0541: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0545: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b054a: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b054e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0551: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0556: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0559: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b055e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0561: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0564: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0568: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b056b: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0571: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0576: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b057a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b057d: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0583: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0587: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b058b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b058f: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0595: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0599: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b059d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b05a1: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b05a7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b05ab: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b05af: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b05b3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b05b7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b05bb: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b05c0: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b05c4: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05c7: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b05cc: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05cf: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b05d4: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b05d7: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b05da: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b05de: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05e1: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b05e7: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b05ec: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b05f0: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05f3: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b05f9: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b05fd: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0601: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0605: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b060b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b060f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0613: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0617: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b061d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0621: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0625: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0629: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b062d: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0630: movq mm1, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0634: movd mm2, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b0638: movd mm3, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[3] = (long double)(i64)v; }
    /* 008b063c: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b0640: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b0644: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0648: movd dword ptr [eax + 0x38], mm2 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[2]);
    /* 008b064c: jmp 0x8b0ad9 */ goto L_008b0ad9;
L_008b0ad9:; BB(0x008b0ad9);
    /* 008b0ad9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b0adc: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b0adf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0ae1: je 0x8b0fac */ if (fZ) goto L_008b0fac;
L_008b0ae7:; BB(0x008b0ae7);
    /* 008b0ae7: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0aea: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0aee: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0af1: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0af4: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b0af8: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0afb: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0afe: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b05: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b08: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b0b: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b0f: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b12: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b15: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0b19: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b1c: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b20: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b24: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b27: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b0b2b: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b2e: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b31: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b34: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b37: movq qword ptr [esp + 0x70], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x70u), r.q); }
    /* 008b0b3c: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b40: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b44: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b47: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b4a: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0b52: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008b0b5a: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b5d: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b61: movq qword ptr [esp + 0x68], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x68u), r.q); }
    /* 008b0b66: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b0b6a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b6d: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b0b71: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b75: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b78: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b7b: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b7e: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b81: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b84: movq qword ptr [esp + 0x58], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x58u), r.q); }
    /* 008b0b89: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b8c: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b93: movq qword ptr [esp + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008b0b98: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b9b: movq qword ptr [esp + 0x50], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x50u), r.q); }
    /* 008b0ba0: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ba3: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ba6: movq qword ptr [esp + 0x40], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008b0bab: movq qword ptr [esp + 0x60], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x60u), r.q); }
    /* 008b0bb0: movq qword ptr [esp + 0x78], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x78u), r.q); }
    /* 008b0bb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0bb7: je 0x8b0dd6 */ if (fZ) goto L_008b0dd6;
L_008b0bbd:; BB(0x008b0bbd);
    /* 008b0bbd: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bc1: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0bc5: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0bc8: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0bcc: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0bd0: pfsub mm1, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0bd4: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0bd8: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0bdc: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bdf: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0be3: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0be8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0beb: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0bf0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0bf3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0bf8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bfb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0bfe: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c05: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c0b: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c10: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c14: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c17: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c1d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c21: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c25: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c29: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0c2f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c33: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c37: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c3b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0c41: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c45: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c49: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0c4d: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c51: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0c54: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0c59: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0c5d: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c60: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0c65: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c68: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0c6d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c70: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c73: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c77: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c7a: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c80: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c85: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c89: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c8c: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c92: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c96: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c9a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c9e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0ca4: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ca8: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cac: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0cb0: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0cb6: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cba: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0cbe: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0cc2: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0cc6: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0cca: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ccf: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0cd3: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cd6: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0cdb: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0cde: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ce3: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ce6: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ce9: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ced: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cf0: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0cf6: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0cfb: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0cff: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d02: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d08: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d0c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d10: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d14: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d1a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d1e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d22: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d26: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0d2c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d30: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d34: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0d38: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d3c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0d40: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0d45: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0d49: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d4c: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0d51: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d54: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0d59: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d5c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d5f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0d63: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d66: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0d6c: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0d71: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d75: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d78: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d7e: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d82: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d86: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d8a: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d90: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d94: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d98: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d9c: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0da2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0da6: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0daa: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dae: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0db2: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0db6: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0dba: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dbd: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0dc1: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0dc5: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0dc9: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dcd: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0dd1: jmp 0x8b0fac */ goto L_008b0fac;
L_008b0dd6:; BB(0x008b0dd6);
    /* 008b0dd6: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0dd9: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ddd: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0de2: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0de5: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0dea: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ded: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0df2: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0df5: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0df8: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0dfc: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dff: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e05: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e0a: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e0e: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e11: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e17: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e1b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e1f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e23: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e29: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e2d: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e31: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e35: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0e3b: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e3f: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e43: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0e47: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e4b: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0e4e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0e53: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0e57: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e5a: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0e5f: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e62: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0e67: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e6a: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e6d: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0e71: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e74: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e7a: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e7f: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e83: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e86: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e8c: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e90: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e94: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e98: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e9e: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ea2: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0ea6: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0eaa: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0eb0: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0eb4: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0eb8: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0ebc: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ec0: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0ec4: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ec9: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0ecd: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0ed0: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0ed5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ed8: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0edd: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ee0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ee3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ee7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0eea: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0ef0: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ef5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0ef9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0efc: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f02: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f06: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f0a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f0e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f14: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f18: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f1c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f20: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f26: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f2a: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f2e: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0f32: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f36: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0f3a: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0f3f: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0f43: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f46: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0f4b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f4e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0f53: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f56: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f59: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0f5d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f60: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0f66: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0f6b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f6f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f72: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f78: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f7c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f80: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f84: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f8a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f8e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f92: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f96: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f9c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0fa0: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0fa4: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fa8: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
L_008b0fac:; BB(0x008b0fac);
    /* 008b0fac: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008b0faf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b0fb1: je 0x8b0fd2 */ if (fZ) goto L_008b0fd2;
L_008b0fb3:; BB(0x008b0fb3);
    /* 008b0fb3: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0fb7: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0fbb: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0fbe: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0fc2: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0fc6: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0fca: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fce: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
L_008b0fd2:; BB(0x008b0fd2);
    /* 008b0fd2: mov esp, ebp */ r_esp = r_ebp;
    /* 008b0fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b0fd5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b0fd7: ret 0x1c */ FN_RET(0x008b008a); r_esp += 32; return;
}

void f_008b00ea(void)
{
    FN_ENTER(0x008b00ea);
    /* 008b00ea: or byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008b00ec: push -0x30 */ { u32 v = 0xffffffd0u; r_esp -= 4; W32(r_esp, v); }
    /* 008b00ee: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b00f6: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b00f9: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0101: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0104: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0107: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b010b: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b010e: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0117: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b011f: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0123: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0126: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b012f: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0133: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0137: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b013b: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0144: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0148: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b014c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0150: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0159: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b015d: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0161: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0165: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0169: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b016d: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0175: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0179: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b017c: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0184: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0187: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b018f: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0192: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0195: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0199: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b019c: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b01a5: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b01ad: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b01b1: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b01b4: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b01bd: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b01c1: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b01c5: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b01c9: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b01d2: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b01d6: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b01da: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b01de: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b01e7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b01eb: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b01ef: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b01f3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b01f7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b01fb: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0203: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0207: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b020a: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0212: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0215: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b021d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0220: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0223: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0227: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b022a: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0233: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b023b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b023f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0242: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b024b: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b024f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0253: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0257: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0260: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0264: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0268: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b026c: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0275: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0279: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b027d: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0281: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0285: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0288: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b028c: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0290: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0293: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0298: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b029b: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b02a0: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b02a3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b02a6: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b02aa: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b02ad: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b02b3: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b02b8: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b02bc: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b02bf: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b02c5: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b02c9: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b02cd: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b02d1: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b02d7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b02db: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b02df: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b02e3: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b02e9: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b02ed: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b02f1: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b02f5: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b02f9: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b02fc: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0300: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0304: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0307: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b030c: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b030f: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0314: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0317: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b031a: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b031e: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0321: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0327: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b032c: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0330: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0333: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0339: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b033d: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0341: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0345: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b034b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b034f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0353: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0357: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b035d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0361: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0365: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0369: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b036d: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0371: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0375: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0379: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b037c: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0381: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0384: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0389: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b038c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b038f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0393: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0396: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b039c: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b03a1: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b03a5: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03a8: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b03ae: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b03b2: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b03b6: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b03ba: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b03c0: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b03c4: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b03c8: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b03cc: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b03d2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b03d6: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b03da: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b03de: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b03e2: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b03e6: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b03ea: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b03ee: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b03f1: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b03f6: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03f9: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b03fe: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0401: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0404: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0408: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b040b: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0411: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0416: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b041a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b041d: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0423: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0427: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b042b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b042f: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0435: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0439: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b043d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0441: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0447: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b044b: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b044f: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0453: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0457: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b045a: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b045e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0463: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0466: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b046b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b046e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0473: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0476: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0479: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b047d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0480: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0486: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b048b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b048f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0492: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0498: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b049c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b04a0: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b04a4: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b04aa: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b04ae: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b04b2: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b04b6: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b04bc: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b04c0: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b04c4: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b04c8: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b04cc: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b04cf: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b04d4: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b04d8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04db: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b04e0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b04e3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b04e8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b04eb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b04ee: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b04f2: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04f5: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b04fb: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0500: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0504: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0507: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b050d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0511: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0515: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0519: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b051f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0523: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0527: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b052b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0531: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0535: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0539: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b053d: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0541: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0545: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b054a: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b054e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0551: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0556: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0559: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b055e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0561: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0564: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0568: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b056b: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0571: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0576: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b057a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b057d: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0583: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0587: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b058b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b058f: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0595: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0599: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b059d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b05a1: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b05a7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b05ab: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b05af: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b05b3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b05b7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b05bb: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b05c0: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b05c4: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05c7: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b05cc: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05cf: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b05d4: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b05d7: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b05da: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b05de: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05e1: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b05e7: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b05ec: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b05f0: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05f3: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b05f9: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b05fd: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0601: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0605: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b060b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b060f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0613: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0617: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b061d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0621: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0625: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0629: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b062d: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0630: movq mm1, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0634: movd mm2, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b0638: movd mm3, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[3] = (long double)(i64)v; }
    /* 008b063c: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b0640: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b0644: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0648: movd dword ptr [eax + 0x38], mm2 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[2]);
    /* 008b064c: jmp 0x8b0ad9 */ goto L_008b0ad9;
L_008b0ad9:; BB(0x008b0ad9);
    /* 008b0ad9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b0adc: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b0adf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0ae1: je 0x8b0fac */ if (fZ) goto L_008b0fac;
L_008b0ae7:; BB(0x008b0ae7);
    /* 008b0ae7: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0aea: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0aee: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0af1: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0af4: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b0af8: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0afb: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0afe: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b05: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b08: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b0b: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b0f: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b12: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b15: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0b19: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b1c: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b20: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b24: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b27: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b0b2b: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b2e: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b31: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b34: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b37: movq qword ptr [esp + 0x70], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x70u), r.q); }
    /* 008b0b3c: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b40: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b44: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b47: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b4a: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0b52: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008b0b5a: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b5d: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b61: movq qword ptr [esp + 0x68], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x68u), r.q); }
    /* 008b0b66: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b0b6a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b6d: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b0b71: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b75: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b78: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b7b: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b7e: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b81: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b84: movq qword ptr [esp + 0x58], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x58u), r.q); }
    /* 008b0b89: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b8c: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b93: movq qword ptr [esp + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008b0b98: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b9b: movq qword ptr [esp + 0x50], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x50u), r.q); }
    /* 008b0ba0: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ba3: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ba6: movq qword ptr [esp + 0x40], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008b0bab: movq qword ptr [esp + 0x60], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x60u), r.q); }
    /* 008b0bb0: movq qword ptr [esp + 0x78], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x78u), r.q); }
    /* 008b0bb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0bb7: je 0x8b0dd6 */ if (fZ) goto L_008b0dd6;
L_008b0bbd:; BB(0x008b0bbd);
    /* 008b0bbd: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bc1: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0bc5: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0bc8: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0bcc: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0bd0: pfsub mm1, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0bd4: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0bd8: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0bdc: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bdf: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0be3: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0be8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0beb: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0bf0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0bf3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0bf8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bfb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0bfe: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c05: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c0b: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c10: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c14: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c17: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c1d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c21: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c25: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c29: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0c2f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c33: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c37: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c3b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0c41: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c45: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c49: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0c4d: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c51: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0c54: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0c59: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0c5d: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c60: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0c65: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c68: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0c6d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c70: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c73: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c77: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c7a: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c80: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c85: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c89: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c8c: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c92: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c96: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c9a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c9e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0ca4: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ca8: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cac: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0cb0: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0cb6: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cba: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0cbe: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0cc2: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0cc6: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0cca: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ccf: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0cd3: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cd6: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0cdb: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0cde: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ce3: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ce6: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ce9: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ced: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cf0: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0cf6: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0cfb: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0cff: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d02: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d08: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d0c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d10: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d14: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d1a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d1e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d22: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d26: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0d2c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d30: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d34: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0d38: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d3c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0d40: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0d45: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0d49: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d4c: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0d51: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d54: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0d59: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d5c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d5f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0d63: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d66: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0d6c: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0d71: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d75: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d78: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d7e: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d82: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d86: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d8a: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d90: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d94: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d98: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d9c: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0da2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0da6: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0daa: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dae: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0db2: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0db6: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0dba: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dbd: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0dc1: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0dc5: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0dc9: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dcd: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0dd1: jmp 0x8b0fac */ goto L_008b0fac;
L_008b0dd6:; BB(0x008b0dd6);
    /* 008b0dd6: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0dd9: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ddd: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0de2: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0de5: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0dea: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ded: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0df2: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0df5: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0df8: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0dfc: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dff: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e05: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e0a: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e0e: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e11: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e17: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e1b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e1f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e23: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e29: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e2d: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e31: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e35: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0e3b: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e3f: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e43: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0e47: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e4b: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0e4e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0e53: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0e57: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e5a: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0e5f: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e62: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0e67: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e6a: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e6d: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0e71: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e74: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e7a: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e7f: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e83: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e86: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e8c: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e90: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e94: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e98: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e9e: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ea2: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0ea6: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0eaa: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0eb0: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0eb4: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0eb8: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0ebc: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ec0: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0ec4: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ec9: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0ecd: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0ed0: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0ed5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ed8: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0edd: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ee0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ee3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ee7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0eea: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0ef0: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ef5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0ef9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0efc: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f02: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f06: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f0a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f0e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f14: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f18: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f1c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f20: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f26: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f2a: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f2e: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0f32: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f36: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0f3a: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0f3f: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0f43: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f46: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0f4b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f4e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0f53: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f56: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f59: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0f5d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f60: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0f66: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0f6b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f6f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f72: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f78: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f7c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f80: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f84: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f8a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f8e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f92: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f96: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f9c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0fa0: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0fa4: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fa8: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
L_008b0fac:; BB(0x008b0fac);
    /* 008b0fac: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008b0faf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b0fb1: je 0x8b0fd2 */ if (fZ) goto L_008b0fd2;
L_008b0fb3:; BB(0x008b0fb3);
    /* 008b0fb3: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0fb7: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0fbb: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0fbe: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0fc2: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0fc6: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0fca: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fce: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
L_008b0fd2:; BB(0x008b0fd2);
    /* 008b0fd2: mov esp, ebp */ r_esp = r_ebp;
    /* 008b0fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b0fd5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b0fd7: ret 0x1c */ FN_RET(0x008b00ea); r_esp += 32; return;
}

void f_008b0108(void)
{
    FN_ENTER(0x008b0108);
    /* 008b0108: pavgb mm6, qword ptr [edi + ecx + 0xf0fd26a] */ UNSUP(0x008b0108, "pavgb mm6, qword ptr [edi + ecx + 0xf0fd26a]");
    /* 008b0110: test byte ptr [eax + ecx*4], ah */ {  u32 a = R8((u32)(r_eax+r_ecx*4)); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;   }
    /* 008b0113: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b0115: add byte ptr [edi + ecx - 0x4fdb4391], dh */ { u32 ad = (u32)(r_edi+r_ecx+0xb024bc6fu);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b011c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b011e: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b0120: pminsw mm6, qword ptr [edi + ecx + 0xf0fdb6a] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_edi+r_ecx+0xf0fdb6au)); MM64 r; r.w[0] = ((i16)a.w[0] < (i16)b.w[0]) ? a.w[0] : b.w[0]; r.w[1] = ((i16)a.w[1] < (i16)b.w[1]) ? a.w[1] : b.w[1]; r.w[2] = ((i16)a.w[2] < (i16)b.w[2]) ? a.w[2] : b.w[2]; r.w[3] = ((i16)a.w[3] < (i16)b.w[3]) ? a.w[3] : b.w[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0128: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 008b0129: and al, 0x98 */ {  u32 a = (u8)r_eax; u32 b = 0x98u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008b012b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b012d: add byte ptr [edi + ecx + 0xf9eec0f], dh */ { u32 ad = (u32)(r_edi+r_ecx+0xf9eec0fu);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 008b0134: psllw mm6, qword ptr [edi + ecx + 0xf9ed00f] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_edi+r_ecx+0xf9ed00fu)); MM64 r; u32 c = (u32)(0xffu & R64((u32)(r_edi+r_ecx+0xf9ed00fu))); r.w[0] = c >= 16 ? 0 : (a.w[0] << c); r.w[1] = c >= 16 ? 0 : (a.w[1] << c); r.w[2] = c >= 16 ? 0 : (a.w[2] << c); r.w[3] = c >= 16 ? 0 : (a.w[3] << c); fpr[6] = (long double)(i64)(r.q); }
    /* 008b013c: jl 0x8ba966 */ if ((fS!=fO)) goto L_008ba966;
L_008b0142:; BB(0x008b0142);
    /* 008b0142: add byte ptr [edi + ecx + 0xf9ef50f], dh */ { u32 ad = (u32)(r_edi+r_ecx+0xf9ef50fu);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r); fS = ((r >> 7) & 1); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; }
    /* 008b0149: psubq mm6, qword ptr [edi + ecx + 0xf9ed10f] */ UNSUP(0x008b0149, "psubq mm6, qword ptr [edi + ecx + 0xf9ed10f]");
    /* 008b0151: setl byte ptr [eax + edi*4] */ W8((u32)(r_eax+r_edi*4), ((fS!=fO)) ? 1 : 0);
    /* 008b0155: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b0157: add byte ptr [edi + ecx + 0xf9efe0f], dh */ { u32 ad = (u32)(r_edi+r_ecx+0xf9efe0fu);  u32 a = R8(ad); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008b015e: outsd dx, dword ptr [esi] */ UNSUP(0x008b015e, "outsd dx, dword ptr [esi]");
    /* 008b015f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b0160: and byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b0162: pminub mm3, qword ptr [esi + 0x28486f0f] */ UNSUP(0x008b0162, "pminub mm3, qword ptr [esi + 0x28486f0f]");
    /* 008b0169: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b016d: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0175: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0179: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b017c: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0184: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0187: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b018f: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0192: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0195: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0199: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b019c: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b01a5: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b01ad: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b01b1: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b01b4: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b01bd: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b01c1: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b01c5: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b01c9: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b01d2: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b01d6: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b01da: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b01de: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b01e7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b01eb: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b01ef: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b01f3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b01f7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b01fb: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0203: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0207: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b020a: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0212: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0215: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b021d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0220: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0223: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0227: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b022a: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0233: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b023b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b023f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0242: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b024b: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b024f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0253: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0257: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0260: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0264: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0268: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b026c: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0275: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0279: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b027d: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0281: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0285: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0288: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b028c: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0290: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0293: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0298: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b029b: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b02a0: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b02a3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b02a6: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b02aa: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b02ad: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b02b3: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b02b8: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b02bc: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b02bf: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b02c5: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b02c9: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b02cd: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b02d1: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b02d7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b02db: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b02df: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b02e3: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b02e9: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b02ed: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b02f1: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b02f5: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b02f9: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b02fc: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0300: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0304: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0307: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b030c: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b030f: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0314: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0317: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b031a: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b031e: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0321: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0327: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b032c: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0330: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0333: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0339: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b033d: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0341: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0345: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b034b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b034f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0353: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0357: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b035d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0361: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0365: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0369: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b036d: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0371: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0375: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0379: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b037c: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0381: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0384: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0389: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b038c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b038f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0393: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0396: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b039c: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b03a1: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b03a5: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03a8: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b03ae: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b03b2: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b03b6: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b03ba: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b03c0: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b03c4: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b03c8: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b03cc: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b03d2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b03d6: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b03da: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b03de: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b03e2: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b03e6: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b03ea: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b03ee: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b03f1: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b03f6: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b03f9: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b03fe: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0401: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0404: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0408: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b040b: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0411: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0416: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b041a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b041d: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0423: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0427: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b042b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b042f: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0435: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0439: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b043d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0441: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0447: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b044b: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b044f: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0453: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0457: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b045a: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b045e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0463: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0466: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b046b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b046e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0473: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0476: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0479: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b047d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0480: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0486: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b048b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b048f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0492: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0498: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b049c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b04a0: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b04a4: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b04aa: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b04ae: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b04b2: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b04b6: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b04bc: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b04c0: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b04c4: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b04c8: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b04cc: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b04cf: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b04d4: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b04d8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04db: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b04e0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b04e3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b04e8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b04eb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b04ee: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b04f2: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b04f5: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b04fb: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0500: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0504: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0507: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b050d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0511: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0515: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0519: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b051f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0523: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0527: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b052b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0531: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0535: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0539: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b053d: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0541: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0545: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b054a: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b054e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0551: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0556: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0559: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b055e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0561: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0564: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0568: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b056b: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0571: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0576: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b057a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b057d: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0583: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0587: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b058b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b058f: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0595: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0599: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b059d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b05a1: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b05a7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b05ab: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b05af: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b05b3: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b05b7: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b05bb: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b05c0: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b05c4: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05c7: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b05cc: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05cf: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b05d4: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b05d7: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b05da: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b05de: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b05e1: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b05e7: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b05ec: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b05f0: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b05f3: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b05f9: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b05fd: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0601: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0605: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b060b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b060f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0613: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0617: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b061d: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0621: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0625: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0629: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b062d: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0630: movq mm1, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0634: movd mm2, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b0638: movd mm3, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[3] = (long double)(i64)v; }
    /* 008b063c: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b0640: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b0644: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0648: movd dword ptr [eax + 0x38], mm2 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[2]);
    /* 008b064c: jmp 0x8b0ad9 */ goto L_008b0ad9;
L_008b0ad9:; BB(0x008b0ad9);
    /* 008b0ad9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b0adc: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b0adf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0ae1: je 0x8b0fac */ if (fZ) goto L_008b0fac;
L_008b0ae7:; BB(0x008b0ae7);
    /* 008b0ae7: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0aea: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0aee: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0af1: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0af4: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b0af8: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0afb: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0afe: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b05: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b08: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b0b: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b0f: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b12: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b15: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0b19: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b1c: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b20: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b24: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b27: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b0b2b: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b2e: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b31: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0b34: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b37: movq qword ptr [esp + 0x70], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x70u), r.q); }
    /* 008b0b3c: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0b40: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b44: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b47: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b4a: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0b52: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008b0b5a: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b5d: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b0b61: movq qword ptr [esp + 0x68], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x68u), r.q); }
    /* 008b0b66: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b0b6a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0b6d: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b0b71: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b0b75: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b78: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0b7b: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b7e: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b0b81: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0b84: movq qword ptr [esp + 0x58], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x58u), r.q); }
    /* 008b0b89: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0b8c: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0b93: movq qword ptr [esp + 0x48], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008b0b98: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0b9b: movq qword ptr [esp + 0x50], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x50u), r.q); }
    /* 008b0ba0: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ba3: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ba6: movq qword ptr [esp + 0x40], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008b0bab: movq qword ptr [esp + 0x60], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x60u), r.q); }
    /* 008b0bb0: movq qword ptr [esp + 0x78], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x78u), r.q); }
    /* 008b0bb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b0bb7: je 0x8b0dd6 */ if (fZ) goto L_008b0dd6;
L_008b0bbd:; BB(0x008b0bbd);
    /* 008b0bbd: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bc1: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0bc5: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0bc8: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0bcc: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0bd0: pfsub mm1, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0bd4: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0bd8: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0bdc: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bdf: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0be3: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0be8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0beb: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0bf0: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0bf3: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0bf8: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0bfb: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0bfe: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c02: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c05: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c0b: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c10: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c14: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c17: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c1d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c21: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c25: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c29: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0c2f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c33: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c37: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c3b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0c41: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0c45: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c49: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0c4d: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c51: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0c54: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0c59: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0c5d: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c60: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0c65: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c68: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0c6d: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0c70: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0c73: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0c77: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0c7a: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0c80: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0c85: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c89: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0c8c: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0c92: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0c96: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0c9a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0c9e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0ca4: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ca8: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cac: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0cb0: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0cb6: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0cba: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0cbe: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0cc2: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0cc6: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0cca: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ccf: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0cd3: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cd6: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0cdb: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0cde: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0ce3: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ce6: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ce9: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ced: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0cf0: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0cf6: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0cfb: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0cff: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d02: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d08: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d0c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d10: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d14: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d1a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d1e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d22: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d26: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0d2c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d30: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d34: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0d38: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d3c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0d40: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0d45: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0d49: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d4c: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0d51: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d54: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0d59: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0d5c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0d5f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0d63: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0d66: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0d6c: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0d71: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d75: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0d78: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0d7e: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0d82: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d86: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d8a: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0d90: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0d94: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0d98: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0d9c: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0da2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0da6: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0daa: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dae: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0db2: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0db6: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0dba: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dbd: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0dc1: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0dc5: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0dc9: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0dcd: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b0dd1: jmp 0x8b0fac */ goto L_008b0fac;
L_008b0dd6:; BB(0x008b0dd6);
    /* 008b0dd6: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0dd9: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ddd: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0de2: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0de5: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0dea: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ded: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0df2: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0df5: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0df8: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0dfc: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0dff: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e05: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e0a: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e0e: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e11: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e17: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e1b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e1f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e23: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e29: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e2d: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e31: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e35: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0e3b: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0e3f: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e43: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0e47: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e4b: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0e4e: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0e53: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0e57: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e5a: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0e5f: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e62: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0e67: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0e6a: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0e6d: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0e71: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0e74: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0e7a: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0e7f: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e83: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0e86: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0e8c: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0e90: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0e94: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0e98: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0e9e: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0ea2: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0ea6: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0eaa: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0eb0: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0eb4: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0eb8: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0ebc: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ec0: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0ec4: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0ec9: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0ecd: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0ed0: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0ed5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0ed8: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0edd: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ee0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0ee3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0ee7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0eea: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0ef0: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0ef5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0ef9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0efc: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f02: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f06: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f0a: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f0e: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f14: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f18: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f1c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f20: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f26: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f2a: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f2e: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0f32: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f36: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0f3a: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0f3f: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0f43: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f46: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0f4b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f4e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0f53: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0f56: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0f59: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0f5d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0f60: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0f66: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0f6b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f6f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0f72: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0f78: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0f7c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f80: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f84: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0f8a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0f8e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0f92: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0f96: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0f9c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0fa0: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0fa4: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fa8: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
L_008b0fac:; BB(0x008b0fac);
    /* 008b0fac: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008b0faf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b0fb1: je 0x8b0fd2 */ if (fZ) goto L_008b0fd2;
L_008b0fb3:; BB(0x008b0fb3);
    /* 008b0fb3: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0fb7: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b0fbb: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0fbe: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b0fc2: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b0fc6: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b0fca: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0fce: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
L_008b0fd2:; BB(0x008b0fd2);
    /* 008b0fd2: mov esp, ebp */ r_esp = r_ebp;
    /* 008b0fd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b0fd5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b0fd7: ret 0x1c */ FN_RET(0x008b0108); r_esp += 32; return;
L_008ba95c:; BB(0x008ba95c);
    /* 008ba95c: mov edx, 0x15b0 */ r_edx = 0x15b0u;
    /* 008ba961: cmp dword ptr [ebp + 0x10], edx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008ba964: jae 0x8ba969 */ if (!fC) goto L_008ba969;
L_008ba966:; BB(0x008ba966);
    /* 008ba966: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
L_008ba969:; BB(0x008ba969);
    /* 008ba969: sub dword ptr [ebp + 0x10], edx */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008ba96c: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008ba96f: jl 0x8baa0c */ if ((fS!=fO)) goto L_008baa0c;
L_008ba975:; BB(0x008ba975);
    /* 008ba975: mov eax, edx */ r_eax = r_edx;
    /* 008ba977: shr eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008ba97a: mov ebx, eax */ r_ebx = r_eax;
    /* 008ba97c: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008ba97e: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008ba981: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008ba983:; BB(0x008ba983);
    /* 008ba983: movzx ebx, byte ptr [ecx] */ r_ebx = (u32)R8((u32)(r_ecx));
    /* 008ba986: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba988: movzx ebx, byte ptr [ecx + 1] */ r_ebx = (u32)R8((u32)(r_ecx+0x1u));
    /* 008ba98c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba98e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba990: movzx ebx, byte ptr [ecx + 2] */ r_ebx = (u32)R8((u32)(r_ecx+0x2u));
    /* 008ba994: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba996: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba998: movzx ebx, byte ptr [ecx + 3] */ r_ebx = (u32)R8((u32)(r_ecx+0x3u));
    /* 008ba99c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba99e: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9a0: movzx ebx, byte ptr [ecx + 4] */ r_ebx = (u32)R8((u32)(r_ecx+0x4u));
    /* 008ba9a4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9a6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9a8: movzx ebx, byte ptr [ecx + 5] */ r_ebx = (u32)R8((u32)(r_ecx+0x5u));
    /* 008ba9ac: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ae: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9b0: movzx ebx, byte ptr [ecx + 6] */ r_ebx = (u32)R8((u32)(r_ecx+0x6u));
    /* 008ba9b4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9b6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9b8: movzx ebx, byte ptr [ecx + 7] */ r_ebx = (u32)R8((u32)(r_ecx+0x7u));
    /* 008ba9bc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9be: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9c0: movzx ebx, byte ptr [ecx + 8] */ r_ebx = (u32)R8((u32)(r_ecx+0x8u));
    /* 008ba9c4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9c6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9c8: movzx ebx, byte ptr [ecx + 9] */ r_ebx = (u32)R8((u32)(r_ecx+0x9u));
    /* 008ba9cc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ce: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9d0: movzx ebx, byte ptr [ecx + 0xa] */ r_ebx = (u32)R8((u32)(r_ecx+0xau));
    /* 008ba9d4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9d6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9d8: movzx ebx, byte ptr [ecx + 0xb] */ r_ebx = (u32)R8((u32)(r_ecx+0xbu));
    /* 008ba9dc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9de: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9e0: movzx ebx, byte ptr [ecx + 0xc] */ r_ebx = (u32)R8((u32)(r_ecx+0xcu));
    /* 008ba9e4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9e6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9e8: movzx ebx, byte ptr [ecx + 0xd] */ r_ebx = (u32)R8((u32)(r_ecx+0xdu));
    /* 008ba9ec: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9ee: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9f0: movzx ebx, byte ptr [ecx + 0xe] */ r_ebx = (u32)R8((u32)(r_ecx+0xeu));
    /* 008ba9f4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9f6: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008ba9f8: movzx ebx, byte ptr [ecx + 0xf] */ r_ebx = (u32)R8((u32)(r_ecx+0xfu));
    /* 008ba9fc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008ba9fe: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008baa00: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008baa02: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008baa05: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008baa06: jne 0x8ba983 */ if (!fZ) goto L_008ba983;
L_008baa0c:; BB(0x008baa0c);
    /* 008baa0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008baa0e: je 0x8baa1b */ if (fZ) goto L_008baa1b;
L_008baa10:; BB(0x008baa10);
    /* 008baa10: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008baa13: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008baa15: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008baa16: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008baa18: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008baa19: jne 0x8baa10 */ if (!fZ) goto L_008baa10;
L_008baa1b:; BB(0x008baa1b);
    /* 008baa1b: mov eax, esi */ r_eax = r_esi;
    /* 008baa1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008baa1f: mov ebx, 0xfff1 */ r_ebx = 0xfff1u;
    /* 008baa24: mov esi, ebx */ r_esi = r_ebx;
    /* 008baa26: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x008baa26, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008baa26, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008baa28: mov eax, edi */ r_eax = r_edi;
    /* 008baa2a: mov esi, edx */ r_esi = r_edx;
    /* 008baa2c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008baa2e: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x008baa2e, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008baa2e, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008baa30: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008baa34: mov edi, edx */ r_edi = r_edx;
    /* 008baa36: ja 0x8ba95c */ if ((!fC&&!fZ)) goto L_008ba95c;
L_008baa3c:; BB(0x008baa3c);
    /* 008baa3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008baa3d: mov eax, edi */ r_eax = r_edi;
    /* 008baa3f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008baa42: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008baa44: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008baa45: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008baa46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008baa47: ret  */ FN_RET(0x008b0108); r_esp += 4; return;
}

