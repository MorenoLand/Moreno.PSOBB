#include "protos.h"

void f_008b401e(void) /* ?x3d_D3DXVec2CatmullRom@@YGPAUD3DXVECTOR2@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b401e);
    /* 008b401e: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b4023: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4026: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4029: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b402d: punpckldq mm1, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4034: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4038: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b403b: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b403f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b4043: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4046: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b404a: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b404d: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4050: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4053: pfmul mm0, qword ptr [0x99dc30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b405b: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b405e: punpckldq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4061: pxor mm3, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4068: punpckhdq mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b406b: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b406f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b4073: pfsub mm1, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b4077: pfsub mm0, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b407b: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b407e: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4081: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4084: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4087: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008b408b: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b408e: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008b4092: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4095: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b4099: pfmul mm2, qword ptr [eax] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_eax))); fpr[2] = (long double)(i64)(r); }
    /* 008b409d: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b40a1: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008b40a5: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b40a9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b40ad: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b40b1: pfmul mm3, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx))); fpr[3] = (long double)(i64)(r); }
    /* 008b40b5: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b40b9: pfmul mm0, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b40c1: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b40c4: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b40c6: ret 0x18 */ FN_RET(0x008b401e); r_esp += 28; return;
}

void f_008b414b(void) /* ?x3d_D3DXVec4Normalize@@YGPAUD3DXVECTOR4@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008b414b);
    /* 008b414b: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b414d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b4151: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b4154: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4157: movq mm2, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b415b: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b415e: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b4162: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b4166: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b416a: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b416e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b4172: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4175: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b4179: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008b4181: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4184: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b4188: pfrsqit1 mm0, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b418c: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008b418f: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4192: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b4196: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b419a: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b419e: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b41a1: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b41a5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b41a7: ret 8 */ FN_RET(0x008b414b); r_esp += 12; return;
}

void f_008b42dc(void) /* ?x3d_D3DXVec4BaryCentric@@YGPAUD3DXVECTOR4@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008b42dc);
    /* 008b42dc: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b42e0: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b42e4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b42e8: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b42eb: movq mm1, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b42ef: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b42f2: movq mm3, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b42f6: movq mm4, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b42f9: movq mm5, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b42fd: movd mm6, dword ptr [esp + 0x14] */ { u64 v = R32((u32)(r_esp+0x14u)); fpr[6] = (long double)(i64)v; }
    /* 008b4302: movd mm7, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[7] = (long double)(i64)v; }
    /* 008b4307: pfsub mm0, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b430b: pfsub mm1, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b430f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b4313: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b4317: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b431b: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b431e: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4321: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008b4325: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b4329: pfmul mm2, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b432d: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b4331: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b4335: pfadd mm1, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b4339: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b433d: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b4341: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b4344: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b4348: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b434a: ret 0x18 */ FN_RET(0x008b42dc); r_esp += 28; return;
}

void f_008b434d(void) /* ?x3d_D3DXVec4Hermite@@YGPAUD3DXVECTOR4@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b434d);
    /* 008b434d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b434f: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b4354: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4357: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b435b: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b435e: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b4362: movq mm3, qword ptr [0x99dcb8] */ { MM64 r; r.q = R64((u32)(0x99dcb8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b4369: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b436c: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b436f: pfsub mm7, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b4373: pfmul mm4, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008b4377: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b437a: pfmul mm1, qword ptr [0x99dcc0] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99dcc0u))); fpr[1] = (long double)(i64)(r); }
    /* 008b4382: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b4386: pfsub mm6, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b438a: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b438d: pfsub mm1, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b4391: pfadd mm6, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b4395: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b4399: pfadd mm2, qword ptr [0x99dca8] */ { u64 r = rt_pf_add((u64)(i64)fpr[2], R64((u32)(0x99dca8u))); fpr[2] = (long double)(i64)(r); }
    /* 008b43a1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008b43a5: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b43a9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b43ad: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b43b0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b43b3: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b43b6: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b43b9: movq mm5, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b43bc: pfmul mm7, qword ptr [eax] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_eax))); fpr[7] = (long double)(i64)(r); }
    /* 008b43c0: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b43c3: pfmul mm1, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_ecx))); fpr[1] = (long double)(i64)(r); }
    /* 008b43c7: pfmul mm5, qword ptr [eax + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_eax+0x8u))); fpr[5] = (long double)(i64)(r); }
    /* 008b43cc: pfmul mm0, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b43d1: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b43d5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b43d9: movq mm4, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b43dc: pfmul mm6, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx))); fpr[6] = (long double)(i64)(r); }
    /* 008b43e0: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b43e3: pfmul mm2, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_ecx))); fpr[2] = (long double)(i64)(r); }
    /* 008b43e7: pfmul mm4, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x8u))); fpr[4] = (long double)(i64)(r); }
    /* 008b43ec: pfmul mm3, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_ecx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b43f1: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008b43f5: pfadd mm0, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b43f9: pfadd mm2, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b43fd: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b4401: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b4405: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b4409: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b440c: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b4410: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4412: ret 0x18 */ FN_RET(0x008b434d); r_esp += 28; return;
}

void f_008b4415(void) /* ?x3d_D3DXVec4CatmullRom@@YGPAUD3DXVECTOR4@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008b4415);
    /* 008b4415: movd mm0, dword ptr [esp + 0x18] */ { u64 v = R32((u32)(r_esp+0x18u)); fpr[0] = (long double)(i64)v; }
    /* 008b441a: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b441e: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4421: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4424: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b4428: punpckldq mm1, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b442f: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4433: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4436: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b443a: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b443d: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4441: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4444: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4447: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b444a: pfmul mm0, qword ptr [0x99dc30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b4452: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4455: punpckldq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4458: pxor mm3, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b445f: punpckhdq mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4462: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b4466: pfsub mm1, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b446a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b446e: pfsub mm0, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b4472: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4475: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4478: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b447b: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b447e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008b4482: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4485: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4488: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008b448c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b448f: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4492: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008b4496: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4499: pfmul mm2, qword ptr [eax] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_eax))); fpr[2] = (long double)(i64)(r); }
    /* 008b449d: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b44a0: pfmul mm4, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x8u))); fpr[4] = (long double)(i64)(r); }
    /* 008b44a5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008b44a9: pfmul mm5, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x8u))); fpr[5] = (long double)(i64)(r); }
    /* 008b44ae: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b44b2: pfmul mm6, qword ptr [eax + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_eax+0x8u))); fpr[6] = (long double)(i64)(r); }
    /* 008b44b7: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b44bb: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b44bf: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b44c3: pfmul mm3, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx))); fpr[3] = (long double)(i64)(r); }
    /* 008b44c7: movq mm1, qword ptr [0x99dc88] */ { MM64 r; r.q = R64((u32)(0x99dc88u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b44ce: pfadd mm0, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b44d2: pfmul mm7, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_edx+0x8u))); fpr[7] = (long double)(i64)(r); }
    /* 008b44d7: pfadd mm4, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b44db: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b44df: pfadd mm4, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008b44e3: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b44e6: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008b44ea: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b44ee: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b44f0: ret 0x18 */ FN_RET(0x008b4415); r_esp += 28; return;
}

void f_008b44f3(void) /* ?x3d_D3DXPlaneFromPointNormal@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@1@Z */
{
    FN_ENTER(0x008b44f3);
    /* 008b44f3: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b44f5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b44f9: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b44fd: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b4501: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b4504: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b4508: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b450b: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b450f: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b4513: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b4517: pfacc mm2, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b451b: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b451f: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b4522: pxor mm2, qword ptr [0x99dc98] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc98u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4529: movd dword ptr [eax + 8], mm1 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[1]);
    /* 008b452d: movd dword ptr [eax + 0xc], mm2 */ W32((u32)(r_eax+0xcu), (u32)(u64)(i64)fpr[2]);
    /* 008b4531: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4533: ret 0xc */ FN_RET(0x008b44f3); r_esp += 16; return;
}

void f_008b4536(void) /* ?x3d_D3DXPlaneFromPoints@@YGPAUD3DXPLANE@@PAU1@PBUD3DXVECTOR3@@11@Z */
{
    FN_ENTER(0x008b4536);
    /* 008b4536: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4538: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008b453c: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b4540: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b4544: movq mm3, qword ptr [0x99dca0] */ { MM64 r; r.q = R64((u32)(0x99dca0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b454b: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b454e: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b4552: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4555: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4558: movd mm6, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[6] = (long double)(i64)v; }
    /* 008b455c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b455f: punpckldq mm6, dword ptr [eax + 8] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_eax+0x8u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4563: pfsub mm0, qword ptr [eax] */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], R64((u32)(r_eax))); fpr[0] = (long double)(i64)(r); }
    /* 008b4567: pfsub mm1, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b456b: pfsub mm4, qword ptr [ecx] */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], R64((u32)(r_ecx))); fpr[4] = (long double)(i64)(r); }
    /* 008b456f: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4572: pfsub mm7, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008b4576: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4579: punpckhdq mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b457c: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4580: movq mm6, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4583: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4586: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4589: punpckldq mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b458c: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b4590: pfacc mm0, mm1 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4594: pxor mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4597: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b459a: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b459d: punpckhdq mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b45a0: pfmul mm1, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b45a4: pfacc mm1, mm1 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b45a8: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b45ab: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b45ae: psllq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); fpr[7] = (long double)(i64)(r.q); }
    /* 008b45b2: pfmul mm6, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b45b6: pfmul mm7, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[7]); fpr[7] = (long double)(i64)(r); }
    /* 008b45ba: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b45be: pfacc mm6, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b45c2: movq mm5, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b45c5: pfrsqrt mm4, mm6 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b45c9: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008b45d1: movq mm7, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b45d4: pfmul mm7, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[4]); fpr[7] = (long double)(i64)(r); }
    /* 008b45d8: pfrsqit1 mm6, mm7 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b45dc: pand mm0, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b45df: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008b45e2: pfrcpit2 mm6, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b45e6: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008b45ea: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b45ee: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b45f2: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b45f5: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b45f8: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b45fc: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b4600: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b4604: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4608: punpckldq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b460b: pxor mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008b460e: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008b4611: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b4615: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4617: ret 0x10 */ FN_RET(0x008b4536); r_esp += 20; return;
}

void f_008b461a(void) /* ?x3d_D3DXPlaneIntersectLine@@YGPAUD3DXVECTOR3@@PAU1@PBUD3DXPLANE@@PBU1@2@Z */
{
    FN_ENTER(0x008b461a);
    /* 008b461a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b461e: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008b4622: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b4625: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b4629: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b462d: movq mm4, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b4630: movd mm5, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[5] = (long double)(i64)v; }
    /* 008b4634: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4637: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b463a: movq mm6, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b463d: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b4641: pfmul mm3, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b4645: movd mm7, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008b4649: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b464c: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b4650: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4653: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b4657: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b465b: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b465f: pxor mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4662: pfsub mm4, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008b4666: punpckldq mm7, dword ptr [0x99dc10] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc10u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b466d: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4670: pfacc mm4, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b4674: pfcmpeq mm3, mm4 */ { u64 r = rt_pf_cmpeq((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b4678: movd eax, mm3 */ r_eax = (u32)(u64)(i64)fpr[3];
    /* 008b467b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b467d: pfrcp mm5, mm4 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008b4681: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b4685: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4688: pfmul mm2, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[6]); fpr[2] = (long double)(i64)(r); }
    /* 008b468c: je 0x8b4695 */ if (fZ) goto L_008b4695;
L_008b468e:; BB(0x008b468e);
    /* 008b468e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b4690: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4692: ret 0x10 */ FN_RET(0x008b461a); r_esp += 20; return;
L_008b4695:; BB(0x008b4695);
    /* 008b4695: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b4699: pfrcpit1 mm4, mm5 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b469d: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b46a1: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b46a4: pfrcpit2 mm4, mm5 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b46a8: pfacc mm2, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b46ac: movd mm5, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[5] = (long double)(i64)v; }
    /* 008b46b0: pfsub mm3, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008b46b4: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b46b8: pfsub mm5, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b46bc: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b46c0: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b46c4: pfadd mm3, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008b46c8: pfadd mm5, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008b46cc: movq qword ptr [eax], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax), r.q); }
    /* 008b46cf: movd dword ptr [eax + 8], mm5 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[5]);
    /* 008b46d3: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b46d5: ret 0x10 */ FN_RET(0x008b461a); r_esp += 20; return;
}

void f_008b46d8(void) /* ?x3d_D3DXPlaneNormalize@@YGPAUD3DXPLANE@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008b46d8);
    /* 008b46d8: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008b46dc: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b46df: movq mm2, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b46e3: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b46e6: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b46e9: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b46f0: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b46f4: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b46f8: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b46fc: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b4700: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4703: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b4707: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008b470f: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4712: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b4716: pfrsqit1 mm0, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b471a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b471e: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4721: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4724: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008b4728: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008b472c: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b4730: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b4733: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b4737: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4739: ret 8 */ FN_RET(0x008b46d8); r_esp += 12; return;
}

void f_008b473c(void) /* ?x3d_D3DXPlaneTransform@@YGPAUD3DXPLANE@@PAU1@PBU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008b473c);
    /* 008b473c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b473e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b4742: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b4746: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b4749: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b474c: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b474f: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b4752: movq mm2, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b4756: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4759: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b475c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b475f: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4762: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b4766: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b4769: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b476e: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4771: pfmul mm2, qword ptr [edx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x20u))); fpr[2] = (long double)(i64)(r); }
    /* 008b4776: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4779: pfmul mm3, qword ptr [edx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x30u))); fpr[3] = (long double)(i64)(r); }
    /* 008b477e: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4782: pfmul mm4, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x8u))); fpr[4] = (long double)(i64)(r); }
    /* 008b4787: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b478b: pfmul mm5, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x18u))); fpr[5] = (long double)(i64)(r); }
    /* 008b4790: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b4794: pfmul mm6, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx+0x28u))); fpr[6] = (long double)(i64)(r); }
    /* 008b4799: pfmul mm7, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_edx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b479e: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b47a2: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b47a6: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b47aa: pfadd mm4, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b47ae: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b47b1: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b47b5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b47b7: ret 0xc */ FN_RET(0x008b473c); r_esp += 16; return;
}

void f_008b4dfd(void) /* ?start_iMCU_row@D3DX@@YAXPAUjpeg_decompress_struct@1@@Z */
{
    FN_ENTER(0x008b4dfd);
    /* 008b4dfd: mov eax, dword ptr [ecx + 0x184] */ r_eax = R32((u32)(r_ecx+0x184u));
    /* 008b4e03: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b4e05: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b4e06: cmp dword ptr [ecx + 0x120], edx */ {  u32 a = R32((u32)(r_ecx+0x120u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4e0c: jle 0x8b4e13 */ if ((fZ||fS!=fO)) goto L_008b4e13;
L_008b4e0e:; BB(0x008b4e0e);
    /* 008b4e0e: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 008b4e11: jmp 0x8b4e33 */ goto L_008b4e33;
L_008b4e13:; BB(0x008b4e13);
    /* 008b4e13: mov edx, dword ptr [ecx + 0x118] */ r_edx = R32((u32)(r_ecx+0x118u));
    /* 008b4e19: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008b4e1a: cmp dword ptr [ecx + 0x80], edx */ {  u32 a = R32((u32)(r_ecx+0x80u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b4e20: mov ecx, dword ptr [ecx + 0x124] */ r_ecx = R32((u32)(r_ecx+0x124u));
    /* 008b4e26: jae 0x8b4e2d */ if (!fC) goto L_008b4e2d;
L_008b4e28:; BB(0x008b4e28);
    /* 008b4e28: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 008b4e2b: jmp 0x8b4e30 */ goto L_008b4e30;
L_008b4e2d:; BB(0x008b4e2d);
    /* 008b4e2d: mov ecx, dword ptr [ecx + 0x48] */ r_ecx = R32((u32)(r_ecx+0x48u));
L_008b4e30:; BB(0x008b4e30);
    /* 008b4e30: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
L_008b4e33:; BB(0x008b4e33);
    /* 008b4e33: and dword ptr [eax + 0x14], 0 */ { u32 ad = (u32)(r_eax+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4e37: and dword ptr [eax + 0x18], 0 */ { u32 ad = (u32)(r_eax+0x18u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b4e3b: ret  */ FN_RET(0x008b4dfd); r_esp += 4; return;
}

