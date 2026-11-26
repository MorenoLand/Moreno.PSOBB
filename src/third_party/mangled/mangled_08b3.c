#include "protos.h"

void f_008b3422(void) /* ?x3d_D3DXVec3Normalize@@YGPAUD3DXVECTOR3@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008b3422);
    /* 008b3422: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3424: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b3428: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b342b: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b342e: movd mm2, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b3432: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3435: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b3439: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b343d: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b3441: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b3445: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3448: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b344c: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008b3454: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3457: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b345b: pfrsqit1 mm0, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b345f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3463: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3466: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3469: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b346d: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b3471: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b3475: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b3478: movd dword ptr [eax + 8], mm3 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[3]);
    /* 008b347c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b347e: ret 8 */ FN_RET(0x008b3422); r_esp += 12; return;
}

void f_008b3481(void) /* ?x3d_D3DXVec3BaryCentric@@YGPAUD3DXVECTOR3@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008b3481);
    /* 008b3481: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3485: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b3489: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b348d: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3490: movq mm4, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3493: movd mm6, dword ptr [esp + 0x14] */ { u64 v = R32((u32)(r_esp+0x14u)); fpr[6] = (long double)(i64)v; }
    /* 008b3498: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b349c: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b349f: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b34a3: movd mm5, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[5] = (long double)(i64)v; }
    /* 008b34a7: pfsub mm0, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b34ab: movd mm7, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[7] = (long double)(i64)v; }
    /* 008b34b0: pfsub mm1, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b34b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b34b8: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b34bc: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b34bf: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b34c3: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008b34c7: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b34ca: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b34ce: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b34d2: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b34d6: pfadd mm1, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b34da: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b34de: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b34e2: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b34e6: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b34e9: movd dword ptr [eax + 8], mm1 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[1]);
    /* 008b34ed: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b34ef: ret 0x18 */ FN_RET(0x008b3481); r_esp += 28; return;
}

void f_008b34f2(void) /* ?x3d_D3DXVec3Hermite@@YGPAUD3DXVECTOR3@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b34f2);
    /* 008b34f2: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b34f4: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b34f9: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b34fc: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b3500: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3503: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b3507: movq mm3, qword ptr [0x99dcb8] */ { MM64 r; r.q = R64((u32)(0x99dcb8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b350e: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3511: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3514: pfsub mm7, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b3518: pfmul mm4, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008b351c: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b351f: pfmul mm1, qword ptr [0x99dcc0] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99dcc0u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3527: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b352b: pfsub mm6, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b352f: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3532: pfsub mm1, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b3536: pfadd mm6, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b353a: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b353e: pfadd mm2, qword ptr [0x99dca8] */ { u64 r = rt_pf_add((u64)(i64)fpr[2], R64((u32)(0x99dca8u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3546: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008b354a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b354e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3552: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3555: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3558: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b355b: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b355e: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3561: pfmul mm7, qword ptr [eax] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_eax))); fpr[7] = (long double)(i64)(r); }
    /* 008b3565: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3568: pfmul mm1, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx))); fpr[1] = (long double)(i64)(r); }
    /* 008b356c: movd mm4, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b3570: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3574: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b3578: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b357c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b3580: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3584: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3587: pfmul mm6, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx))); fpr[6] = (long double)(i64)(r); }
    /* 008b358b: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b358e: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008b3592: pfadd mm0, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b3596: pfmul mm2, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx))); fpr[2] = (long double)(i64)(r); }
    /* 008b359a: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008b359e: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b35a2: movd mm5, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[5] = (long double)(i64)v; }
    /* 008b35a6: pfmul mm3, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b35aa: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b35ae: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b35b2: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b35b6: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b35ba: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b35bd: movd dword ptr [eax + 8], mm0 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[0]);
    /* 008b35c1: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b35c3: ret 0x18 */ FN_RET(0x008b34f2); r_esp += 28; return;
}

void f_008b35c6(void) /* ?x3d_D3DXVec3CatmullRom@@YGPAUD3DXVECTOR3@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b35c6);
    /* 008b35c6: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b35cb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b35cf: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b35d2: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b35d5: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b35d9: punpckldq mm1, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b35e0: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b35e4: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b35e7: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b35eb: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b35ee: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b35f2: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b35f5: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b35f8: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b35fb: pfmul mm0, qword ptr [0x99dc30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3603: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3606: punpckldq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3609: pxor mm3, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3610: punpckhdq mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3613: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b3617: pfsub mm1, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b361b: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b361f: pfsub mm0, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b3623: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3626: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3629: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b362c: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b362f: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008b3633: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3636: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008b363a: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b363d: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008b3641: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3644: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3647: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b364b: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b364e: pfmul mm2, qword ptr [eax] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_eax))); fpr[2] = (long double)(i64)(r); }
    /* 008b3652: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b3656: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008b365a: movd mm7, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008b365e: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b3662: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3666: movd mm7, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008b366a: pfmul mm6, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b366e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3672: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b3676: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3679: movd mm5, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[5] = (long double)(i64)v; }
    /* 008b367d: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b3681: pfmul mm3, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx))); fpr[3] = (long double)(i64)(r); }
    /* 008b3685: movq mm1, qword ptr [0x99dc88] */ { MM64 r; r.q = R64((u32)(0x99dc88u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b368c: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3690: pfmul mm7, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008b3694: pfadd mm4, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b3698: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b369c: pfadd mm4, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b36a0: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b36a3: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008b36a7: movd dword ptr [eax + 8], mm4 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[4]);
    /* 008b36ab: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b36ad: ret 0x18 */ FN_RET(0x008b35c6); r_esp += 28; return;
}

void f_008b3efa(void) /* ?x3d_D3DXVec2Hermite@@YGPAUD3DXVECTOR2@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b3efa);
    /* 008b3efa: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3efc: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b3f01: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3f04: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b3f08: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3f0b: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b3f0f: movq mm3, qword ptr [0x99dcb8] */ { MM64 r; r.q = R64((u32)(0x99dcb8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b3f16: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3f19: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3f1c: pfsub mm7, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b3f20: pfmul mm4, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008b3f24: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3f27: pfmul mm1, qword ptr [0x99dcc0] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99dcc0u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3f2f: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b3f33: pfsub mm6, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b3f37: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3f3a: pfsub mm1, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b3f3e: pfadd mm6, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b3f42: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3f46: pfadd mm2, qword ptr [0x99dca8] */ { u64 r = rt_pf_add((u64)(i64)fpr[2], R64((u32)(0x99dca8u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3f4e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3f52: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b3f56: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3f59: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3f5d: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3f60: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3f63: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3f66: pfmul mm2, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx))); fpr[2] = (long double)(i64)(r); }
    /* 008b3f6a: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b3f6e: pfmul mm6, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx))); fpr[6] = (long double)(i64)(r); }
    /* 008b3f72: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008b3f76: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b3f7a: pfmul mm1, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx))); fpr[1] = (long double)(i64)(r); }
    /* 008b3f7e: pfmul mm7, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_edx))); fpr[7] = (long double)(i64)(r); }
    /* 008b3f82: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008b3f86: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b3f8a: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b3f8d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3f8f: ret 0x18 */ FN_RET(0x008b3efa); r_esp += 28; return;
}

void f_008b3f92(void) /* ?x3d_D3DXVec2BaryCentric@@YGPAUD3DXVECTOR2@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008b3f92);
    /* 008b3f92: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3f96: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b3f9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b3f9e: movd mm6, dword ptr [esp + 0x14] */ { u64 v = R32((u32)(r_esp+0x14u)); fpr[6] = (long double)(i64)v; }
    /* 008b3fa3: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3fa6: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b3fa9: movq mm4, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3fac: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b3faf: movd mm7, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[7] = (long double)(i64)v; }
    /* 008b3fb4: pfsub mm0, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b3fb8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3fbc: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b3fbf: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008b3fc3: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b3fc7: pfadd mm4, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b3fcb: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b3fcf: pfadd mm4, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008b3fd3: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008b3fd6: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3fd8: ret 0x18 */ FN_RET(0x008b3f92); r_esp += 28; return;
}

void f_008b3fdb(void) /* ?x3d_D3DXVec2Normalize@@YGPAUD3DXVECTOR2@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008b3fdb);
    /* 008b3fdb: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b3fdf: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3fe2: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3fe5: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b3fe9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3fed: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b3ff1: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3ff4: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b3ff8: pfcmpgt mm2, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[2], R64((u32)(0x99dc90u))); fpr[2] = (long double)(i64)(r); }
    /* 008b4000: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4003: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b4007: pfrsqit1 mm4, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b400b: pand mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008b400e: pfrcpit2 mm4, mm5 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b4012: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b4016: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b4019: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b401b: ret 8 */ FN_RET(0x008b3fdb); r_esp += 12; return;
}

