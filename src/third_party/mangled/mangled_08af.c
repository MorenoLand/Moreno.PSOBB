#include "protos.h"

void f_008af59a(void) /* ?x3d_D3DXMatrixMultiply@@YGPAUD3DXMATRIX@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008af59a);
    /* 008af59a: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af59c: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af59f: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 008af5a3: mov dword ptr [esp + 0x40], ebp */ W32((u32)(r_esp+0x40u), r_ebp);
    /* 008af5a7: mov ebp, esp */ r_ebp = r_esp;
    /* 008af5a9: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008af5ac: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af5af: movq mm1, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af5b3: movq mm3, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af5b7: movq mm4, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008af5bb: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af5be: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af5c1: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af5c4: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af5c7: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008af5cb: movq qword ptr [esp + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008af5d0: movq mm6, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008af5d4: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af5d7: movq mm7, qword ptr [edx + 0x18] */ { MM64 r; r.q = R64((u32)(r_edx+0x18u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008af5db: movq mm0, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af5df: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af5e2: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af5e5: movq qword ptr [esp + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008af5ea: movq qword ptr [esp + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008af5ef: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 008af5f2: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af5f5: movq mm4, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008af5f9: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af5fc: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af5ff: movq qword ptr [esp + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008af604: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af607: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af60a: movq qword ptr [esp + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008af60f: movq qword ptr [esp + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008af614: movq qword ptr [esp + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008af619: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 008af61c: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af61f: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af623: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af626: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af629: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af62c: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af62f: pfmul mm0, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp))); fpr[0] = (long double)(i64)(r); }
    /* 008af634: pfmul mm1, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008af63a: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af63d: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af640: pfmul mm2, qword ptr [esp + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008af646: pfmul mm3, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008af64c: pfmul mm4, qword ptr [esp + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_esp+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008af652: pfmul mm5, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_esp+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008af658: pfmul mm6, qword ptr [esp + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_esp+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008af65e: pfmul mm7, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_esp+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008af664: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008af668: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af66c: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af670: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af674: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af678: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af67c: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008af67f: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af683: movq mm0, qword ptr [ecx + 0x10] */ { MM64 r; r.q = R64((u32)(r_ecx+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af687: movq mm1, qword ptr [ecx + 0x18] */ { MM64 r; r.q = R64((u32)(r_ecx+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af68b: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af68e: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af691: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af694: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af697: pfmul mm0, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp))); fpr[0] = (long double)(i64)(r); }
    /* 008af69c: pfmul mm1, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008af6a2: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af6a5: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af6a8: pfmul mm2, qword ptr [esp + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008af6ae: pfmul mm3, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008af6b4: pfmul mm4, qword ptr [esp + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_esp+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008af6ba: pfmul mm5, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_esp+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008af6c0: pfmul mm6, qword ptr [esp + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_esp+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008af6c6: pfmul mm7, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_esp+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008af6cc: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008af6d0: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af6d4: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af6d8: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af6dc: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af6e0: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af6e4: movq qword ptr [eax + 0x10], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008af6e8: movq qword ptr [eax + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008af6ec: movq mm0, qword ptr [ecx + 0x20] */ { MM64 r; r.q = R64((u32)(r_ecx+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af6f0: movq mm1, qword ptr [ecx + 0x28] */ { MM64 r; r.q = R64((u32)(r_ecx+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af6f4: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af6f7: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af6fa: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af6fd: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af700: pfmul mm0, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp))); fpr[0] = (long double)(i64)(r); }
    /* 008af705: pfmul mm1, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008af70b: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af70e: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af711: pfmul mm2, qword ptr [esp + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008af717: pfmul mm3, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008af71d: pfmul mm4, qword ptr [esp + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_esp+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008af723: pfmul mm5, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_esp+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008af729: pfmul mm6, qword ptr [esp + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_esp+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008af72f: pfmul mm7, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_esp+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008af735: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008af739: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af73d: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af741: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af745: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af749: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af74d: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008af751: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008af755: movq mm0, qword ptr [ecx + 0x30] */ { MM64 r; r.q = R64((u32)(r_ecx+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af759: movq mm1, qword ptr [ecx + 0x38] */ { MM64 r; r.q = R64((u32)(r_ecx+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af75d: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af760: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af763: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af766: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af769: pfmul mm0, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp))); fpr[0] = (long double)(i64)(r); }
    /* 008af76e: pfmul mm1, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x8u))); fpr[1] = (long double)(i64)(r); }
    /* 008af774: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af777: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af77a: pfmul mm2, qword ptr [esp + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x10u))); fpr[2] = (long double)(i64)(r); }
    /* 008af780: pfmul mm3, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x18u))); fpr[3] = (long double)(i64)(r); }
    /* 008af786: pfmul mm4, qword ptr [esp + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_esp+0x20u))); fpr[4] = (long double)(i64)(r); }
    /* 008af78c: pfmul mm5, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_esp+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008af792: pfmul mm6, qword ptr [esp + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_esp+0x30u))); fpr[6] = (long double)(i64)(r); }
    /* 008af798: pfmul mm7, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_esp+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008af79e: pfacc mm0, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008af7a2: pfacc mm1, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af7a6: pfacc mm4, mm6 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af7aa: pfacc mm5, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af7ae: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008af7b2: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008af7b6: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008af7ba: movq qword ptr [eax + 0x38], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008af7be: mov esp, ebp */ r_esp = r_ebp;
    /* 008af7c0: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 008af7c4: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008af7c7: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af7c9: ret 0xc */ FN_RET(0x008af59a); r_esp += 16; return;
}

void f_008af7cc(void) /* ?x3d_D3DXMatrixfDeterminant@@YGMPBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008af7cc);
    /* 008af7cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008af7d0: movq mm2, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af7d4: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af7d8: movq mm0, qword ptr [eax + 0x24] */ { MM64 r; r.q = R64((u32)(r_eax+0x24u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af7dc: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af7df: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af7e2: movq mm5, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008af7e6: movq mm4, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008af7ea: movq mm3, qword ptr [eax + 0x34] */ { MM64 r; r.q = R64((u32)(r_eax+0x34u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af7ee: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af7f1: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af7f4: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008af7f8: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af7fc: pfsub mm4, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af800: pfmul mm2, qword ptr [eax + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_eax+0x38u))); fpr[2] = (long double)(i64)(r); }
    /* 008af805: pfmul mm5, qword ptr [eax + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_eax+0x28u))); fpr[5] = (long double)(i64)(r); }
    /* 008af80a: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008af80e: pfmul mm3, qword ptr [eax + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_eax+0x20u))); fpr[3] = (long double)(i64)(r); }
    /* 008af813: pfmul mm0, qword ptr [eax + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_eax+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008af818: pfsub mm3, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008af81c: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af81f: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af822: punpckldq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af825: movq mm1, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af828: punpckhdq mm1, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008af82b: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af82e: punpckldq mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af831: movq mm6, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008af835: movq mm7, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af838: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af83b: pfmul mm4, qword ptr [eax + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_eax+0x10u))); fpr[4] = (long double)(i64)(r); }
    /* 008af840: pfmul mm3, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008af844: pfadd mm4, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008af848: movq mm3, qword ptr [eax + 0x14] */ { MM64 r; r.q = R64((u32)(r_eax+0x14u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af84c: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008af850: pfsub mm4, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008af854: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af858: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008af85b: movq mm6, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008af85f: punpckldq mm6, dword ptr [eax] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_eax)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af862: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af866: movq mm6, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008af86a: punpckhdq mm6, qword ptr [eax] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_eax)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af86d: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af871: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008af875: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008af879: pfadd mm1, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008af87d: pfsub mm1, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008af881: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008af885: pfsub mm4, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af889: pfacc mm4, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008af88d: movd dword ptr [esp + 4], mm4 */ W32((u32)(r_esp+0x4u), (u32)(u64)(i64)fpr[4]);
    /* 008af892: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af894: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 008af898: ret 4 */ FN_RET(0x008af7cc); r_esp += 8; return;
}

void f_008af89b(void) /* ?x3d_D3DXMatrixTranslation@@YGPAUD3DXMATRIX@@PAU1@MMM@Z */
{
    FN_ENTER(0x008af89b);
    /* 008af89b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008af89f: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af8a1: movd mm4, dword ptr [esp + 0x10] */ { u64 v = R32((u32)(r_esp+0x10u)); fpr[4] = (long double)(i64)v; }
    /* 008af8a6: movq mm1, qword ptr [0x99dce0] */ { MM64 r; r.q = R64((u32)(0x99dce0u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af8ad: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008af8b0: movq mm2, qword ptr [0x99dce8] */ { MM64 r; r.q = R64((u32)(0x99dce8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af8b7: movd mm3, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008af8bc: movd mm5, dword ptr [esp + 0xc] */ { u64 v = R32((u32)(r_esp+0xcu)); fpr[5] = (long double)(i64)v; }
    /* 008af8c1: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af8c4: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af8c7: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008af8ca: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af8ce: movq qword ptr [eax + 0x10], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008af8d2: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008af8d6: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008af8da: movq qword ptr [eax + 0x28], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008af8de: movq qword ptr [eax + 0x30], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008af8e2: movq qword ptr [eax + 0x38], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008af8e6: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af8e8: ret 0x10 */ FN_RET(0x008af89b); r_esp += 20; return;
}

void f_008af8eb(void) /* ?x3d_D3DXMatrixShadow@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXVECTOR4@@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008af8eb);
    /* 008af8eb: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af8ed: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af8f0: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008af8f4: mov ebp, esp */ r_ebp = r_esp;
    /* 008af8f6: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008af8f9: mov ecx, esp */ r_ecx = r_esp;
    /* 008af8fb: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008af8fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008af8ff: call 0x8b46d8 */ r_esp -= 4; W32(r_esp, 0x8af904u); f_008b46d8();
    /* 008af904: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008af907: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008af90a: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af90e: movq mm1, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af911: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008af914: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008af918: movq mm2, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008af91d: movq mm3, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008af921: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008af924: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008af928: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008af92c: pxor mm0, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008af933: pxor mm2, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008af93a: pfacc mm1, mm1 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008af93e: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af941: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af944: punpckldq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008af947: psllq mm1, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); fpr[1] = (long double)(i64)(r.q); }
    /* 008af94b: psrlq mm3, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[3] = (long double)(i64)(r.q); }
    /* 008af94f: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af952: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af955: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af959: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af95d: pfadd mm4, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[3]); fpr[4] = (long double)(i64)(r); }
    /* 008af961: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008af964: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008af968: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af96b: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af96e: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af971: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af974: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af978: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af97c: pfadd mm4, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008af980: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008af984: movq qword ptr [eax + 0x18], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008af988: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af98b: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af98e: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af991: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af994: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af998: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af99c: pfadd mm5, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008af9a0: movq qword ptr [eax + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008af9a4: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008af9a8: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af9ab: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af9ae: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008af9b1: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008af9b4: pfmul mm4, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008af9b8: pfmul mm5, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008af9bc: pfadd mm5, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008af9c0: movq qword ptr [eax + 0x30], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008af9c4: movq qword ptr [eax + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008af9c8: mov esp, ebp */ r_esp = r_ebp;
    /* 008af9ca: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008af9ce: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008af9d1: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af9d3: ret 0xc */ FN_RET(0x008af8eb); r_esp += 16; return;
}

void f_008af9d6(void) /* ?x3d_D3DXMatrixReflect@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXPLANE@@@Z */
{
    FN_ENTER(0x008af9d6);
    /* 008af9d6: femms  */ ; /* the MMX tag state is not modelled */
    /* 008af9d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008af9db: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008af9df: mov ebp, esp */ r_ebp = r_esp;
    /* 008af9e1: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008af9e4: mov ecx, esp */ r_ecx = r_esp;
    /* 008af9e6: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008af9e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008af9ea: call 0x8b46d8 */ r_esp -= 4; W32(r_esp, 0x8af9efu); f_008b46d8();
    /* 008af9ef: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008af9f2: movq mm0, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[0] = (long double)(i64)(r.q); }
    /* 008af9f6: movq mm1, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008af9fb: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008af9fe: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afa01: pfmul mm0, qword ptr [0x99dcf8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dcf8u))); fpr[0] = (long double)(i64)(r); }
    /* 008afa09: pfmul mm1, qword ptr [0x99dd00] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99dd00u))); fpr[1] = (long double)(i64)(r); }
    /* 008afa11: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afa14: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afa17: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afa1a: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afa1d: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afa20: movq mm7, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afa23: psrlq mm5, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008afa27: psrlq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008afa2b: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008afa2f: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008afa33: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008afa37: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008afa3b: pfadd mm4, qword ptr [0x99dce8] */ { u64 r = rt_pf_add((u64)(i64)fpr[4], R64((u32)(0x99dce8u))); fpr[4] = (long double)(i64)(r); }
    /* 008afa43: pfadd mm6, qword ptr [0x99dce0] */ { u64 r = rt_pf_add((u64)(i64)fpr[6], R64((u32)(0x99dce0u))); fpr[6] = (long double)(i64)(r); }
    /* 008afa4b: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008afa4e: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afa52: movq qword ptr [eax + 0x10], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afa56: movq qword ptr [eax + 0x18], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afa5a: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afa5d: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afa60: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afa63: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afa66: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afa69: movq mm7, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afa6c: psrlq mm5, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[5] = (long double)(i64)(r.q); }
    /* 008afa70: psrlq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008afa74: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008afa78: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008afa7c: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008afa80: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008afa84: pfadd mm5, qword ptr [0x99dce8] */ { u64 r = rt_pf_add((u64)(i64)fpr[5], R64((u32)(0x99dce8u))); fpr[5] = (long double)(i64)(r); }
    /* 008afa8c: pfadd mm7, qword ptr [0x99dce0] */ { u64 r = rt_pf_add((u64)(i64)fpr[7], R64((u32)(0x99dce0u))); fpr[7] = (long double)(i64)(r); }
    /* 008afa94: movq qword ptr [eax + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afa98: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afa9c: movq qword ptr [eax + 0x30], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afaa0: movq qword ptr [eax + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afaa4: mov esp, ebp */ r_esp = r_ebp;
    /* 008afaa6: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008afaaa: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008afaad: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afaaf: ret 8 */ FN_RET(0x008af9d6); r_esp += 12; return;
}

void f_008afbcc(void) /* ?x3d_D3DXMatrixScaling@@YGPAUD3DXMATRIX@@PAU1@MMM@Z */
{
    FN_ENTER(0x008afbcc);
    /* 008afbcc: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afbce: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008afbd2: movd mm3, dword ptr [esp + 0xc] */ { u64 v = R32((u32)(r_esp+0xcu)); fpr[3] = (long double)(i64)v; }
    /* 008afbd7: movq mm1, qword ptr [0x99dce0] */ { MM64 r; r.q = R64((u32)(0x99dce0u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afbde: movd mm2, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008afbe3: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008afbe6: psllq mm3, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); fpr[3] = (long double)(i64)(r.q); }
    /* 008afbea: movd mm4, dword ptr [esp + 0x10] */ { u64 v = R32((u32)(r_esp+0x10u)); fpr[4] = (long double)(i64)v; }
    /* 008afbef: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008afbf2: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afbf6: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afbfa: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afbfe: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afc02: movq qword ptr [eax + 0x10], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afc06: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afc0a: movq qword ptr [eax + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afc0e: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afc10: ret 0x10 */ FN_RET(0x008afbcc); r_esp += 20; return;
}

void f_008afc13(void) /* ?x3d_D3DXMatrixTranspose@@YGPAUD3DXMATRIX@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008afc13);
    /* 008afc13: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008afc17: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008afc1a: movq mm1, qword ptr [edx + 0x10] */ { MM64 r; r.q = R64((u32)(r_edx+0x10u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afc1e: movq mm3, qword ptr [edx + 0x28] */ { MM64 r; r.q = R64((u32)(r_edx+0x28u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008afc22: movq mm4, qword ptr [edx + 0x38] */ { MM64 r; r.q = R64((u32)(r_edx+0x38u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008afc26: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afc29: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008afc2d: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afc30: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afc33: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afc36: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008afc39: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afc3d: movq mm6, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008afc41: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afc44: movq mm7, qword ptr [edx + 0x18] */ { MM64 r; r.q = R64((u32)(r_edx+0x18u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008afc48: movq mm0, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008afc4c: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afc4f: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afc52: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afc56: movq qword ptr [eax + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afc5a: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afc5d: movq mm4, qword ptr [edx + 0x30] */ { MM64 r; r.q = R64((u32)(r_edx+0x30u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008afc61: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afc64: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afc67: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afc6b: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afc6e: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afc71: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afc75: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afc79: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afc7d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afc7f: ret 8 */ FN_RET(0x008afc13); r_esp += 12; return;
}

void f_008afc82(void) /* ?x3d_D3DXMatrixIdentity@@YAPAUD3DXMATRIX@@PAU1@@Z */
{
    FN_ENTER(0x008afc82);
    /* 008afc82: movd mm1, dword ptr [0x99dc10] */ { u64 v = R32((u32)(0x99dc10u)); fpr[1] = (long double)(i64)v; }
    /* 008afc89: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008afc8d: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008afc90: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afc93: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008afc96: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afc9a: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afc9e: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afca1: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afca5: movq qword ptr [eax + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afca9: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afcac: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afcb0: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afcb4: movq qword ptr [eax + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afcb8: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afcba: ret  */ FN_RET(0x008afc82); r_esp += 4; return;
}

void f_008afcbb(void) /* ?x3d_D3DXMatrixRotationQuaternion@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXQUATERNION@@@Z */
{
    FN_ENTER(0x008afcbb);
    /* 008afcbb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008afcbf: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008afcc3: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008afcc6: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afcca: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afccd: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afcd0: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008afcd4: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afcd7: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afcda: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008afcde: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afce1: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afce4: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afce7: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008afceb: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afcee: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afcf1: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008afcf5: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afcf8: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008afcfc: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008afd00: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008afd03: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008afd07: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afd0a: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afd0d: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afd10: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afd13: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afd17: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008afd1b: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008afd1f: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afd22: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afd25: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008afd2d: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008afd35: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afd38: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008afd3c: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afd40: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008afd44: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afd47: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008afd4b: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008afd4f: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afd52: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afd55: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afd58: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afd5b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afd5e: movq qword ptr [eax + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afd62: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afd65: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afd6c: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afd70: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afd73: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afd77: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afd7a: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afd7d: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008afd80: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afd84: movq qword ptr [eax + 0x38], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afd88: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afd8a: ret 8 */ FN_RET(0x008afcbb); r_esp += 12; return;
}

void f_008afd8d(void) /* ?x3d_D3DXMatrixRotationQuaternion_K7@@YGPAUD3DXMATRIX@@PAU1@PBUD3DXQUATERNION@@@Z */
{
    FN_ENTER(0x008afd8d);
    /* 008afd8d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008afd91: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008afd95: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008afd98: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afd9c: pswapd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afda0: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afda3: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afda6: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008afdaa: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afdad: punpckhdq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afdb0: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008afdb4: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afdb7: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008afdbb: punpckldq mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afdbe: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008afdc2: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008afdc6: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008afdca: pfmul mm6, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008afdce: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afdd1: pfsubr mm0, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[0], R64((u32)(0x99dc20u))); fpr[0] = (long double)(i64)(r); }
    /* 008afdd9: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afddc: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afddf: pfpnacc mm3, mm3 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008afde3: pfacc mm4, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008afde7: pfpnacc mm6, mm6 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008afdeb: pfpnacc mm2, mm2 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008afdef: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008afdf3: pswapd mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afdf7: pfsubr mm4, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[4], R64((u32)(0x99dc20u))); fpr[4] = (long double)(i64)(r); }
    /* 008afdff: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008afe02: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afe05: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afe09: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afe0c: punpckldq mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afe0f: punpckhdq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afe12: punpckhdq mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afe15: movq qword ptr [eax + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afe19: punpckhdq mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afe1c: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afe20: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afe23: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afe27: punpckldq mm7, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afe2e: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008afe31: movq qword ptr [eax + 0x10], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afe35: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afe39: movq qword ptr [eax + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afe3d: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afe3f: ret 8 */ FN_RET(0x008afd8d); r_esp += 12; return;
}

