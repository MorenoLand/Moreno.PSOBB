#include "protos.h"

void f_008b332e(void) /* sub_8B332E */
{
    FN_ENTER(0x008b332e);
    /* 008b332e: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3330: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3334: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3338: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b333c: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3341u); f_008b2ffa();
    /* 008b3341: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3343: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3347: ret 0xc */ FN_RET(0x008b332e); r_esp += 16; return;
}

void f_008b334a(void)
{
    FN_ENTER(0x008b334a);
    /* 008b334a: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b334c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b3350: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3354: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b3358: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b335b: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b335e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3361: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3364: movd mm2, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b3368: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b336b: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b336e: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b3372: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3375: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b337a: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b337d: pfmul mm2, qword ptr [edx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x20u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3382: pfadd mm0, qword ptr [edx + 0x30] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_edx+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3387: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b338c: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b3390: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b3395: pfmul mm5, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b339a: pfadd mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b339f: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b33a3: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b33a7: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b33ab: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b33ae: movq qword ptr [ecx + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ecx+0x8u), r.q); }
    /* 008b33b2: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b33b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b33b8: ret 0xc */ FN_RET(0x008b334a); r_esp += 16; return;
}

void f_008b33bb(void)
{
    FN_ENTER(0x008b33bb);
    /* 008b33bb: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b33bd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b33c1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b33c5: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b33c9: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b33cc: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b33cf: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b33d2: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b33d5: movd mm2, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b33d9: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b33dc: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b33df: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b33e3: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b33e6: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b33eb: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b33ee: pfmul mm2, qword ptr [edx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x20u))); fpr[2] = (long double)(i64)(r); }
    /* 008b33f3: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b33f8: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b33fc: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b3401: pfmul mm5, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b3406: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b340a: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b340e: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3412: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b3415: movd dword ptr [ecx + 8], mm3 */ W32((u32)(r_ecx+0x8u), (u32)(u64)(i64)fpr[3]);
    /* 008b3419: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b341b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b341f: ret 0xc */ FN_RET(0x008b33bb); r_esp += 16; return;
}

void f_008b36b0(void) /* sub_8B36B0 */
{
    FN_ENTER(0x008b36b0);
    /* 008b36b0: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b36b2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b36b6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b36ba: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b36be: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b36c1: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b36c4: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b36c7: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b36ca: movd mm2, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b36ce: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b36d1: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b36d4: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b36d8: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b36db: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b36e0: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b36e3: pfmul mm2, qword ptr [edx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x20u))); fpr[2] = (long double)(i64)(r); }
    /* 008b36e8: pfadd mm0, qword ptr [edx + 0x30] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_edx+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b36ed: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b36f2: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b36f6: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b36fb: pfmul mm5, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008b3700: pfadd mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3705: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3709: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b370d: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3711: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3714: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3717: pfrcp mm4, mm5 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b371b: pfrcpit1 mm5, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b371f: pfrcpit2 mm5, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3723: pfmul mm0, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008b3727: pfmul mm3, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b372b: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b372e: movd dword ptr [ecx + 8], mm3 */ W32((u32)(r_ecx+0x8u), (u32)(u64)(i64)fpr[3]);
    /* 008b3732: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3734: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3738: ret 0xc */ FN_RET(0x008b36b0); r_esp += 16; return;
}

void f_008b373b(void) /* sub_8B373B */
{
    FN_ENTER(0x008b373b);
    /* 008b373b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b373f: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3743: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3747: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b374a: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b374e: movq mm4, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3751: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3754: movq mm5, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b3758: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b375b: movq mm6, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b375f: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3762: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3765: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b3769: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b376c: pfmul mm0, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3771: movq mm7, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b3775: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b3779: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b377c: pfmul mm2, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3781: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3785: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b3789: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b378d: pfmul mm1, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3792: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b3796: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b379a: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b379e: pfmul mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b37a3: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b37a7: movq mm0, qword ptr [ecx + 0x10] */ { MM64 r; r.q = R64((u32)(r_ecx+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b37ab: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b37af: movq mm1, qword ptr [ecx + 0x18] */ { MM64 r; r.q = R64((u32)(r_ecx+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b37b3: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b37b6: movq mm4, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b37b9: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b37bd: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b37c0: movq mm5, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b37c4: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b37c7: movq mm6, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b37cb: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b37ce: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b37d1: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b37d5: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b37d8: pfmul mm0, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b37dd: movq mm7, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b37e1: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b37e5: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b37e8: pfmul mm2, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b37ed: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b37f1: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b37f5: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b37f9: pfmul mm1, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b37fe: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b3802: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b3806: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b380a: pfmul mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b380f: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b3813: movq mm0, qword ptr [ecx + 0x20] */ { MM64 r; r.q = R64((u32)(r_ecx+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3817: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b381b: movq mm1, qword ptr [ecx + 0x28] */ { MM64 r; r.q = R64((u32)(r_ecx+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b381f: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b3823: movq mm4, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3826: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b382a: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b382d: movq mm5, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b3831: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3834: movq mm6, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b3838: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b383b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b383e: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b3842: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b3845: pfmul mm0, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b384a: movq mm7, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b384e: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b3852: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3855: pfmul mm2, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b385a: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b385e: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b3862: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b3866: pfmul mm1, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b386b: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b386f: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b3873: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b3877: pfmul mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b387c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b3880: movq mm0, qword ptr [ecx + 0x30] */ { MM64 r; r.q = R64((u32)(r_ecx+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3884: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b3888: movq mm1, qword ptr [ecx + 0x38] */ { MM64 r; r.q = R64((u32)(r_ecx+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b388c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b3890: movq mm4, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3893: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b3897: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b389a: movq mm5, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b389e: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b38a1: movq mm6, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b38a5: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b38a8: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b38ab: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b38af: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b38b2: pfmul mm0, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b38b7: movq mm7, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b38bb: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b38bf: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b38c2: pfmul mm2, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b38c7: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b38cb: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b38cf: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b38d3: pfmul mm1, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b38d8: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b38dc: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b38e0: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b38e4: pfmul mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b38e9: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b38ed: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b38f1: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b38f5: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b38f9: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b38fb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b38ff: ret 0xc */ FN_RET(0x008b373b); r_esp += 16; return;
}

void f_008b3907(void) /* sub_8B3907 */
{
    FN_ENTER(0x008b3907);
    /* 008b3907: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b3908: mov ebp, esp */ r_ebp = r_esp;
    /* 008b390a: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b390d: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b3910: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b3912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3914: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3917: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3918: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b391b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b391d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b391e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b391f: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008b3922: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3924: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3926: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3929: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 008b392c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b392e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b3930: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3932: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3934: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3937: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b3939: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b393c: ja 0x8b39f7 */ if ((!fC&&!fZ)) goto L_008b39f7;
L_008b3942:; BB(0x008b3942);
    /* 008b3942: jmp dword ptr [eax*4 + 0x8b3a6f] */ { u32 t = R32((u32)(r_eax*4+0x8b3a6fu)); switch (t) { case 0x8b3949u: goto L_008b3949; case 0x8b399bu: goto L_008b399b; case 0x8b399fu: goto L_008b399f; case 0x8b39a3u: goto L_008b39a3; case 0x8b39b4u: goto L_008b39b4; case 0x8b39b8u: goto L_008b39b8; case 0x8b39c9u: goto L_008b39c9; case 0x8b39dau: goto L_008b39da; default: UNSUP(0x008b3942, "jump table entry is not a known target"); } }
L_008b3949:; BB(0x008b3949);
    /* 008b3949: fldz  */ FPUSH(0.0);
    /* 008b394b: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008b394e: fldz  */ FPUSH(0.0);
    /* 008b3950: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008b3953: fldz  */ FPUSH(0.0);
    /* 008b3955: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008b3958: fldz  */ FPUSH(0.0);
    /* 008b395a: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008b395d: fldz  */ FPUSH(0.0);
    /* 008b395f: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 008b3962: fldz  */ FPUSH(0.0);
    /* 008b3964: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008b3967: fldz  */ FPUSH(0.0);
    /* 008b3969: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 008b396c: fldz  */ FPUSH(0.0);
    /* 008b396e: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 008b3971: fldz  */ FPUSH(0.0);
    /* 008b3973: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008b3976: fldz  */ FPUSH(0.0);
    /* 008b3978: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 008b397b: fldz  */ FPUSH(0.0);
    /* 008b397d: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008b3980: fldz  */ FPUSH(0.0);
    /* 008b3982: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 008b3985: fld1  */ FPUSH(1.0);
    /* 008b3987: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008b398a: fld1  */ FPUSH(1.0);
    /* 008b398c: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008b398f: fld1  */ FPUSH(1.0);
    /* 008b3991: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008b3994: fld1  */ FPUSH(1.0);
    /* 008b3996: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008b3999: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b399b:; BB(0x008b399b);
    /* 008b399b: mov esi, ebx */ r_esi = r_ebx;
    /* 008b399d: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b399f:; BB(0x008b399f);
    /* 008b399f: mov esi, edi */ r_esi = r_edi;
    /* 008b39a1: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b39a3:; BB(0x008b39a3);
    /* 008b39a3: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39a5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b39a7: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39ab: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b39b0u); f_008b373b();
    /* 008b39b0: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39b2: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b39b4:; BB(0x008b39b4);
    /* 008b39b4: mov esi, ecx */ r_esi = r_ecx;
    /* 008b39b6: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b39b8:; BB(0x008b39b8);
    /* 008b39b8: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39bc: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39c0: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b39c5u); f_008b373b();
    /* 008b39c5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39c7: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b39c9:; BB(0x008b39c9);
    /* 008b39c9: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b39cc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39cd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39d1: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b39d6u); f_008b373b();
    /* 008b39d6: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39d8: jmp 0x8b39f7 */ goto L_008b39f7;
L_008b39da:; BB(0x008b39da);
    /* 008b39da: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b39dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b39dd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39de: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39e2: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b39e7u); f_008b373b();
    /* 008b39e7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b39e8: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39ec: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b39ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b39f0: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b39f5u); f_008b373b();
    /* 008b39f5: femms  */ ; /* the MMX tag state is not modelled */
L_008b39f7:; BB(0x008b39f7);
    /* 008b39f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b39f8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b39fb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b39fe: call 0x8b36b0 */ r_esp -= 4; W32(r_esp, 0x8b3a03u); f_008b36b0();
    /* 008b3a03: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b3a07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b3a08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b3a09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b3a0a: je 0x8b3a68 */ if (fZ) goto L_008b3a68;
L_008b3a0c:; BB(0x008b3a0c);
    /* 008b3a0c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3a0e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b3a11: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b3a14: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3a17: movd mm1, dword ptr [eax + 8] */ { u64 v = R32((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b3a1b: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b3a1e: pxor mm0, qword ptr [0x99dca0] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dca0u)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3a25: movq mm3, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b3a29: movq mm4, qword ptr [ecx + 0x10] */ { MM64 r; r.q = R64((u32)(r_ecx+0x10u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3a2d: pi2fd mm2, mm2 */ { u64 r = rt_pi2fd((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b3a31: pi2fd mm3, mm3 */ { u64 r = rt_pi2fd((u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b3a35: pfadd mm0, qword ptr [0x99dca8] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(0x99dca8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3a3d: pfmul mm3, qword ptr [0x99dcb0] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(0x99dcb0u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3a45: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3a48: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3a4b: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3a4f: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3a53: pfmul mm1, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008b3a57: pfadd mm1, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b3a5b: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b3a5f: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b3a62: movd dword ptr [eax + 8], mm1 */ W32((u32)(r_eax+0x8u), (u32)(u64)(i64)fpr[1]);
    /* 008b3a66: femms  */ ; /* the MMX tag state is not modelled */
L_008b3a68:; BB(0x008b3a68);
    /* 008b3a68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b3a6b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b3a6c: ret 0x18 */ FN_RET(0x008b3907); r_esp += 28; return;
}

void f_008b3a8f(void) /* sub_8B3A8F */
{
    FN_ENTER(0x008b3a8f);
    /* 008b3a8f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b3a90: mov ebp, esp */ r_ebp = r_esp;
    /* 008b3a92: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b3a95: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b3a98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b3a9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3a9b: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b3a9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3a9f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b3aa1: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3aa3: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3aa6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b3aa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3aa9: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008b3aac: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3aae: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3ab0: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3ab3: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b3ab5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b3ab7: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3ab9: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3abb: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3abe: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b3ac0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b3ac3: ja 0x8b3be6 */ if ((!fC&&!fZ)) goto L_008b3be6;
L_008b3ac9:; BB(0x008b3ac9);
    /* 008b3ac9: jmp dword ptr [eax*4 + 0x8b3c95] */ { u32 t = R32((u32)(r_eax*4+0x8b3c95u)); switch (t) { case 0x8b3ad0u: goto L_008b3ad0; case 0x8b3b25u: goto L_008b3b25; case 0x8b3b39u: goto L_008b3b39; case 0x8b3b4du: goto L_008b3b4d; case 0x8b3b6cu: goto L_008b3b6c; case 0x8b3b7du: goto L_008b3b7d; case 0x8b3b9cu: goto L_008b3b9c; case 0x8b3bbbu: goto L_008b3bbb; default: UNSUP(0x008b3ac9, "jump table entry is not a known target"); } }
L_008b3ad0:; BB(0x008b3ad0);
    /* 008b3ad0: fldz  */ FPUSH(0.0);
    /* 008b3ad2: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 008b3ad5: fldz  */ FPUSH(0.0);
    /* 008b3ad7: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 008b3ada: fldz  */ FPUSH(0.0);
    /* 008b3adc: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008b3adf: fldz  */ FPUSH(0.0);
    /* 008b3ae1: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 008b3ae4: fldz  */ FPUSH(0.0);
    /* 008b3ae6: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 008b3ae9: fldz  */ FPUSH(0.0);
    /* 008b3aeb: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 008b3aee: fldz  */ FPUSH(0.0);
    /* 008b3af0: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 008b3af3: fldz  */ FPUSH(0.0);
    /* 008b3af5: fstp dword ptr [ebp - 0x28] */ W_F32((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 008b3af8: fldz  */ FPUSH(0.0);
    /* 008b3afa: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 008b3afd: fldz  */ FPUSH(0.0);
    /* 008b3aff: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 008b3b02: fldz  */ FPUSH(0.0);
    /* 008b3b04: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 008b3b07: fldz  */ FPUSH(0.0);
    /* 008b3b09: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 008b3b0c: fld1  */ FPUSH(1.0);
    /* 008b3b0e: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 008b3b11: fld1  */ FPUSH(1.0);
    /* 008b3b13: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 008b3b16: fld1  */ FPUSH(1.0);
    /* 008b3b18: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 008b3b1b: fld1  */ FPUSH(1.0);
    /* 008b3b1d: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 008b3b20: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b25:; BB(0x008b3b25);
    /* 008b3b25: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b29: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b2d: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3b32u); f_008b2ffa();
    /* 008b3b32: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b34: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b39:; BB(0x008b3b39);
    /* 008b3b39: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b3d: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b41: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3b46u); f_008b2ffa();
    /* 008b3b46: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b48: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b4d:; BB(0x008b3b4d);
    /* 008b3b4d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b4f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b51: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b55: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3b5au); f_008b373b();
    /* 008b3b5a: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b5f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b63: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3b68u); f_008b2ffa();
    /* 008b3b68: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b6a: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b6c:; BB(0x008b3b6c);
    /* 008b3b6c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b6f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b70: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b74: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3b79u); f_008b2ffa();
    /* 008b3b79: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b7b: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b7d:; BB(0x008b3b7d);
    /* 008b3b7d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b80: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b81: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b85: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3b8au); f_008b373b();
    /* 008b3b8a: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b8e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b8f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3b92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b93: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3b98u); f_008b2ffa();
    /* 008b3b98: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b9a: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3b9c:; BB(0x008b3b9c);
    /* 008b3b9c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3b9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3b9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3ba0: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3ba3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3ba4: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3ba9u); f_008b373b();
    /* 008b3ba9: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bae: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bb2: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3bb7u); f_008b2ffa();
    /* 008b3bb7: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3bb9: jmp 0x8b3be6 */ goto L_008b3be6;
L_008b3bbb:; BB(0x008b3bbb);
    /* 008b3bbb: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3bbd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bbe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bbf: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bc3: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3bc8u); f_008b373b();
    /* 008b3bc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bc9: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bcd: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bd1: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3bd6u); f_008b373b();
    /* 008b3bd6: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bdb: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3bdf: call 0x8b2ffa */ r_esp -= 4; W32(r_esp, 0x8b3be4u); f_008b2ffa();
    /* 008b3be4: femms  */ ; /* the MMX tag state is not modelled */
L_008b3be6:; BB(0x008b3be6);
    /* 008b3be6: cmp dword ptr [ebp + 0x10], esi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3be9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b3bea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b3beb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b3bec: je 0x8b3c7f */ if (fZ) goto L_008b3c7f;
L_008b3bf2:; BB(0x008b3bf2);
    /* 008b3bf2: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3bf4: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b3bf7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b3bfa: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b3bfd: movq mm1, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b3c00: movq mm2, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b3c04: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3c07: pi2fd mm1, mm1 */ { u64 r = rt_pi2fd((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b3c0b: movq mm4, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3c0f: pi2fd mm2, mm2 */ { u64 r = rt_pi2fd((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b3c13: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3c16: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3c19: pfrcp mm5, mm2 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008b3c1d: pfrcp mm3, mm3 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b3c21: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3c25: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3c28: pfrcpit1 mm2, mm5 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3c2c: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b3c30: pfrcpit2 mm2, mm5 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3c34: pfmul mm2, qword ptr [0x99dcb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(0x99dcb8u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3c3c: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3c3f: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b3c43: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3c46: pfsub mm0, qword ptr [0x99dca8] */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], R64((u32)(0x99dca8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3c4e: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3c52: pfrcp mm6, mm5 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b3c56: pxor mm0, qword ptr [0x99dca0] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dca0u)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3c5d: pfrcpit1 mm5, mm6 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b3c61: pfrcpit2 mm5, mm6 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b3c65: pfsub mm3, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3c69: pfmul mm3, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b3c6d: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 008b3c70: movd dword ptr [edx + 8], mm3 */ W32((u32)(r_edx+0x8u), (u32)(u64)(i64)fpr[3]);
    /* 008b3c74: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3c76: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3c79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3c7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3c7d: jmp 0x8b3c86 */ goto L_008b3c86;
L_008b3c7f:; BB(0x008b3c7f);
    /* 008b3c7f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3c82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3c83: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
L_008b3c86:; BB(0x008b3c86);
    /* 008b3c86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3c89: call 0x8b36b0 */ r_esp -= 4; W32(r_esp, 0x8b3c8eu); f_008b36b0();
    /* 008b3c8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b3c91: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b3c92: ret 0x18 */ FN_RET(0x008b3a8f); r_esp += 28; return;
}

void f_008b3cb5(void) /* sub_8B3CB5 */
{
    FN_ENTER(0x008b3cb5);
    /* 008b3cb5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b3cb6: mov ebp, esp */ r_ebp = r_esp;
    /* 008b3cb8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b3cbb: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b3cbe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b3cc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3cc1: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008b3cc4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3cc5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008b3cc7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3cc9: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3ccc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b3cce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3ccf: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008b3cd2: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3cd4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3cd6: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3cd9: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b3cdb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b3cdd: shl eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b3cdf: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3ce1: setne dl */ r_edx = (r_edx & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 008b3ce4: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008b3ce6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b3ce9: ja 0x8b3d39 */ if ((!fC&&!fZ)) goto L_008b3d39;
L_008b3ceb:; BB(0x008b3ceb);
    /* 008b3ceb: jmp dword ptr [eax*4 + 0x8b3de8] */ { u32 t = R32((u32)(r_eax*4+0x8b3de8u)); switch (t) { case 0x8b3cf2u: goto L_008b3cf2; case 0x8b3cfeu: goto L_008b3cfe; case 0x8b3d01u: goto L_008b3d01; case 0x8b3d04u: goto L_008b3d04; case 0x8b3d08u: goto L_008b3d08; case 0x8b3d0bu: goto L_008b3d0b; case 0x8b3d0eu: goto L_008b3d0e; case 0x8b3d12u: goto L_008b3d12; default: UNSUP(0x008b3ceb, "jump table entry is not a known target"); } }
L_008b3cf2:; BB(0x008b3cf2);
    /* 008b3cf2: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3cf6: call 0x8afc82 */ r_esp -= 4; W32(r_esp, 0x8b3cfbu); f_008afc82();
    /* 008b3cfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b3cfc: jmp 0x8b3d39 */ goto L_008b3d39;
L_008b3cfe:; BB(0x008b3cfe);
    /* 008b3cfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3cff: jmp 0x8b3d2f */ goto L_008b3d2f;
L_008b3d01:; BB(0x008b3d01);
    /* 008b3d01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d02: jmp 0x8b3d2f */ goto L_008b3d2f;
L_008b3d04:; BB(0x008b3d04);
    /* 008b3d04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d05: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d06: jmp 0x8b3d22 */ goto L_008b3d22;
L_008b3d08:; BB(0x008b3d08);
    /* 008b3d08: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d09: jmp 0x8b3d2f */ goto L_008b3d2f;
L_008b3d0b:; BB(0x008b3d0b);
    /* 008b3d0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d0c: jmp 0x8b3d0f */ goto L_008b3d0f;
L_008b3d0e:; BB(0x008b3d0e);
    /* 008b3d0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008b3d0f:; BB(0x008b3d0f);
    /* 008b3d0f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d10: jmp 0x8b3d22 */ goto L_008b3d22;
L_008b3d12:; BB(0x008b3d12);
    /* 008b3d12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d13: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d14: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3d17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d18: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3d1du); f_008b373b();
    /* 008b3d1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d1e: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3d21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008b3d22:; BB(0x008b3d22);
    /* 008b3d22: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3d25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d26: call 0x8b373b */ r_esp -= 4; W32(r_esp, 0x8b3d2bu); f_008b373b();
    /* 008b3d2b: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3d2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
L_008b3d2f:; BB(0x008b3d2f);
    /* 008b3d2f: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3d32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3d34: call 0x8b2920 */ r_esp -= 4; W32(r_esp, 0x8b3d39u); f_008b2920();
L_008b3d39:; BB(0x008b3d39);
    /* 008b3d39: cmp dword ptr [ebp + 0x10], esi */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b3d3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b3d3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b3d3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b3d3f: je 0x8b3dd2 */ if (fZ) goto L_008b3dd2;
L_008b3d45:; BB(0x008b3d45);
    /* 008b3d45: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3d47: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008b3d4a: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 008b3d4d: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008b3d50: movq mm1, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b3d53: movq mm2, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b3d57: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3d5a: pi2fd mm1, mm1 */ { u64 r = rt_pi2fd((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b3d5e: movq mm4, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b3d62: pi2fd mm2, mm2 */ { u64 r = rt_pi2fd((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b3d66: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3d69: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3d6c: pfrcp mm5, mm2 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008b3d70: pfrcp mm3, mm3 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b3d74: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3d78: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3d7b: pfrcpit1 mm2, mm5 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3d7f: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b3d83: pfrcpit2 mm2, mm5 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b3d87: pfmul mm2, qword ptr [0x99dcb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(0x99dcb8u))); fpr[2] = (long double)(i64)(r); }
    /* 008b3d8f: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3d92: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b3d96: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b3d99: pfsub mm0, qword ptr [0x99dca8] */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], R64((u32)(0x99dca8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3da1: pfsub mm5, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b3da5: pfrcp mm6, mm5 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b3da9: pxor mm0, qword ptr [0x99dca0] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dca0u)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3db0: pfrcpit1 mm5, mm6 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b3db4: pfrcpit2 mm5, mm6 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b3db8: pfsub mm3, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3dbc: pfmul mm3, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b3dc0: movq qword ptr [edx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_edx), r.q); }
    /* 008b3dc3: movd dword ptr [edx + 8], mm3 */ W32((u32)(r_edx+0x8u), (u32)(u64)(i64)fpr[3]);
    /* 008b3dc7: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3dc9: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3dcd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3dd0: jmp 0x8b3dd9 */ goto L_008b3dd9;
L_008b3dd2:; BB(0x008b3dd2);
    /* 008b3dd2: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 008b3dd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b3dd6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
L_008b3dd9:; BB(0x008b3dd9);
    /* 008b3dd9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b3ddc: call 0x8b36b0 */ r_esp -= 4; W32(r_esp, 0x8b3de1u); f_008b36b0();
    /* 008b3de1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b3de4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b3de5: ret 0x18 */ FN_RET(0x008b3cb5); r_esp += 28; return;
}

void f_008b3e08(void)
{
    FN_ENTER(0x008b3e08);
    /* 008b3e08: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3e0a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b3e0e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3e12: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b3e16: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3e19: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3e1c: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3e1f: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3e22: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3e25: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b3e29: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3e2c: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3e31: pfadd mm0, qword ptr [edx + 0x30] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_edx+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3e36: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3e3b: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b3e40: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3e44: pfadd mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3e49: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3e4d: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b3e50: movq qword ptr [ecx + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_ecx+0x8u), r.q); }
    /* 008b3e54: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3e56: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3e5a: ret 0xc */ FN_RET(0x008b3e08); r_esp += 16; return;
}

void f_008b3e5d(void)
{
    FN_ENTER(0x008b3e5d);
    /* 008b3e5d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3e5f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b3e63: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3e67: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b3e6b: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3e6e: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3e71: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3e74: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3e77: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3e7a: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b3e7e: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3e81: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3e86: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3e8a: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b3e8d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3e8f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3e93: ret 0xc */ FN_RET(0x008b3e5d); r_esp += 16; return;
}

void f_008b3e96(void)
{
    FN_ENTER(0x008b3e96);
    /* 008b3e96: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3e98: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b3e9c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b3ea0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b3ea4: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b3ea7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3eaa: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b3ead: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b3eb0: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3eb3: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b3eb7: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b3eba: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b3ebf: pfadd mm0, qword ptr [edx + 0x30] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(r_edx+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008b3ec4: pfmul mm3, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3ec9: pfmul mm4, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x18u))); fpr[4] = (long double)(i64)(r); }
    /* 008b3ece: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b3ed2: pfadd mm3, qword ptr [edx + 0x38] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(r_edx+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b3ed7: pfadd mm3, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3edb: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b3ede: pfrcp mm4, mm3 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b3ee2: pfrcpit1 mm3, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3ee6: pfrcpit2 mm3, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b3eea: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b3eee: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 008b3ef1: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b3ef3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b3ef7: ret 0xc */ FN_RET(0x008b3e96); r_esp += 16; return;
}

