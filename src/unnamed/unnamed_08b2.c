#include "protos.h"

void f_008b2ffa(void) /* sub_8B2FFA */
{
    FN_ENTER(0x008b2ffa);
    /* 008b2ffa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b2ffb: mov ebp, esp */ r_ebp = r_esp;
    /* 008b2ffd: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b3000: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 008b3003: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3006: movq mm1, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b300a: movq mm2, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b300e: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3011: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3014: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3017: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b301a: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b301d: punpckldq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3020: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3023: punpckhdq mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3026: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b302a: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b302e: movq mm3, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b3032: movq mm7, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3035: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3039: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b303c: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b303f: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3042: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3045: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3048: punpckhdq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b304b: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b304e: punpckhdq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3051: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b3055: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3058: pfmul mm7, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008b305c: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b305f: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3063: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b3067: pfsub mm6, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b306b: pfsubr mm1, mm0 */ { u64 r = rt_pf_subr((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b306f: movq mm0, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3073: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3076: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3079: movq mm7, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b307d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3080: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3083: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3086: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b308a: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b308d: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b3092: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b3096: pfadd mm2, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b309a: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b309d: pfsub mm2, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b30a1: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b30a4: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b30a7: movq qword ptr [ebp - 0x3c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffc4u), r.q); }
    /* 008b30ab: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b30ae: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b30b1: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b30b4: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b30b9: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b30bd: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b30c1: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b30c5: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b30c9: movq qword ptr [ebp - 0x2c], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffd4u), r.q); }
    /* 008b30cd: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b30d0: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b30d3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b30d6: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b30d9: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b30dc: pfmul mm1, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b30e1: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b30e5: pfmul mm3, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008b30ea: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b30ee: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b30f2: movq qword ptr [ebp - 0x1c], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffffe4u), r.q); }
    /* 008b30f6: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b30f9: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b30fc: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b3100: pfmul mm5, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x18u))); fpr[5] = (long double)(i64)(r); }
    /* 008b3105: pfmul mm6, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx+0x8u))); fpr[6] = (long double)(i64)(r); }
    /* 008b310a: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b310e: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b3112: movq qword ptr [ebp - 0xc], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xfffffff4u), r.q); }
    /* 008b3116: movq mm0, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b311a: movq mm1, qword ptr [edx + 0x18] */ { MM64 r; r.q = R64((u32)(r_edx+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b311e: movq mm2, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b3122: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3125: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3128: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b312b: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b312e: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3131: punpckldq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3134: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3137: punpckhdq mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b313a: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b313e: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b3142: movq mm3, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b3146: movq mm7, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3149: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b314d: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3150: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3153: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3156: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3159: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b315c: punpckhdq mm6, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b315f: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3162: punpckhdq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3165: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b3169: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b316c: pfmul mm7, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008b3170: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3173: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3177: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b317b: pfsub mm6, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b317f: pfsubr mm1, mm0 */ { u64 r = rt_pf_subr((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b3183: movq mm0, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3187: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b318a: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b318d: movq mm7, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b3191: movq mm2, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3194: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3197: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b319a: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b319d: pfmul mm4, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x10u))); fpr[4] = (long double)(i64)(r); }
    /* 008b31a2: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b31a6: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b31aa: pfadd mm2, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b31ae: pfsub mm2, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b31b2: movq qword ptr [ebp - 0x44], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffbcu), r.q); }
    /* 008b31b6: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b31b9: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b31bc: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b31bf: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b31c2: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b31c5: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b31c8: pfmul mm3, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx))); fpr[3] = (long double)(i64)(r); }
    /* 008b31cc: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b31d0: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b31d4: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b31d8: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b31dc: movq qword ptr [ebp - 0x34], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffccu), r.q); }
    /* 008b31e0: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b31e3: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b31e6: movq mm3, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b31e9: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b31ec: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b31ef: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b31f2: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008b31f6: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b31fa: pfmul mm3, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x10u))); fpr[3] = (long double)(i64)(r); }
    /* 008b31ff: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3203: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3207: movq qword ptr [ebp - 0x24], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ebp+0xffffffdcu), r.q); }
    /* 008b320b: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b320e: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3211: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b3215: pfmul mm5, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x10u))); fpr[5] = (long double)(i64)(r); }
    /* 008b321a: pfmul mm6, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx))); fpr[6] = (long double)(i64)(r); }
    /* 008b321e: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3222: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b3226: movq qword ptr [ebp - 0x14], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_ebp+0xffffffecu), r.q); }
    /* 008b322a: punpckldq mm7, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b322d: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b3230: punpckhdq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3233: pfmul mm7, qword ptr [0x99dc10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(0x99dc10u))); fpr[7] = (long double)(i64)(r); }
    /* 008b323b: movq mm1, qword ptr [ebp - 0x44] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffbcu)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b323f: punpckldq mm3, dword ptr [edx + 0x10] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_edx+0x10u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3243: punpckhdq mm1, qword ptr [ebp - 0x34] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffccu)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3247: pfmul mm3, qword ptr [0x99dc10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(0x99dc10u))); fpr[3] = (long double)(i64)(r); }
    /* 008b324f: pfmul mm0, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[7]); fpr[0] = (long double)(i64)(r); }
    /* 008b3253: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b3257: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b325b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008b325e: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b3262: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3264: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3267: je 0x8b326c */ if (fZ) goto L_008b326c;
L_008b3269:; BB(0x008b3269);
    /* 008b3269: movd dword ptr [eax], mm0 */ W32((u32)(r_eax), (u32)(u64)(i64)fpr[0]);
L_008b326c:; BB(0x008b326c);
    /* 008b326c: pfrcp mm1, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b3270: pxor mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3273: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3276: pfcmpeq mm3, mm4 */ { u64 r = rt_pf_cmpeq((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b327a: pfrcpit1 mm0, mm1 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b327e: pfrcpit2 mm0, mm1 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3282: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008b3285: pfmul mm0, qword ptr [0x99dc10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc10u))); fpr[0] = (long double)(i64)(r); }
    /* 008b328d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b328f: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3292: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3295: punpckhdq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3298: jne 0x8b3324 */ if (!fZ) goto L_008b3324;
L_008b329e:; BB(0x008b329e);
    /* 008b329e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b32a1: movq mm2, qword ptr [ebp - 0x44] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffbcu)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b32a5: movq mm5, qword ptr [ebp - 0x3c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffc4u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b32a9: movq mm3, qword ptr [ebp - 0x34] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffccu)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b32ad: movq mm6, qword ptr [ebp - 0x2c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffd4u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b32b1: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b32b5: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b32b9: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b32bd: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b32c1: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b32c4: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b32c7: punpckhdq mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b32ca: punpckldq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b32cd: punpckhdq mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b32d0: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b32d3: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b32d6: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b32da: movq qword ptr [eax + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b32de: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b32e2: movq mm2, qword ptr [ebp - 0x24] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffdcu)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b32e6: movq mm5, qword ptr [ebp - 0x1c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffe4u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b32ea: movq mm3, qword ptr [ebp - 0x14] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffecu)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b32ee: movq mm6, qword ptr [ebp - 0xc] */ { MM64 r; r.q = R64((u32)(r_ebp+0xfffffff4u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b32f2: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b32f6: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b32fa: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b32fe: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b3302: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3305: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3308: punpckhdq mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b330b: punpckldq mm4, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b330e: punpckhdq mm5, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3311: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3314: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b3318: movq qword ptr [eax + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b331c: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b3320: movq qword ptr [eax + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x38u), r.q); }
L_008b3324:; BB(0x008b3324);
    /* 008b3324: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b3327: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b332a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b332b: ret 0xc */ FN_RET(0x008b2ffa); r_esp += 16; return;
}

