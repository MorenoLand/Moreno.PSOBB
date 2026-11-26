#include "protos.h"

void f_008b40c9(void)
{
    FN_ENTER(0x008b40c9);
    /* 008b40c9: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b40cb: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b40cf: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008b40d3: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008b40d7: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b40da: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b40dd: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b40e0: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b40e3: movq mm2, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b40e7: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b40ea: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b40ed: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b40f0: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b40f3: pfmul mm0, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_edx))); fpr[0] = (long double)(i64)(r); }
    /* 008b40f7: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b40fa: pfmul mm1, qword ptr [edx + 0x10] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx+0x10u))); fpr[1] = (long double)(i64)(r); }
    /* 008b40ff: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4102: pfmul mm2, qword ptr [edx + 0x20] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x20u))); fpr[2] = (long double)(i64)(r); }
    /* 008b4107: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b410a: pfmul mm3, qword ptr [edx + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_edx+0x30u))); fpr[3] = (long double)(i64)(r); }
    /* 008b410f: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b4113: pfmul mm4, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx+0x8u))); fpr[4] = (long double)(i64)(r); }
    /* 008b4118: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b411c: pfmul mm5, qword ptr [edx + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_edx+0x18u))); fpr[5] = (long double)(i64)(r); }
    /* 008b4121: pfmul mm6, qword ptr [edx + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx+0x28u))); fpr[6] = (long double)(i64)(r); }
    /* 008b4126: pfmul mm7, qword ptr [edx + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], R64((u32)(r_edx+0x38u))); fpr[7] = (long double)(i64)(r); }
    /* 008b412b: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b412f: pfadd mm4, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b4133: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b4137: pfadd mm4, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b413b: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b413e: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b4142: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b4144: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b4148: ret 0xc */ FN_RET(0x008b40c9); r_esp += 16; return;
}

void f_008b41aa(void) /* sub_8B41AA */
{
    FN_ENTER(0x008b41aa);
    /* 008b41aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b41ab: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b41ad: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 008b41b1: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 008b41b5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008b41b9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b41bd: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b41c0: movq mm1, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b41c3: movq mm2, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b41c7: movq mm3, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b41cb: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b41ce: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b41d1: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b41d4: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b41d7: movq mm5, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b41da: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b41dd: punpckldq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b41e0: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b41e3: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b41e6: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b41e9: pfmul mm4, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008b41ed: pfmul mm6, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b41f1: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b41f5: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b41f8: punpckhdq mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b41fb: movq mm6, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b41fe: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4201: pfmul mm5, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b4205: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b4208: punpckhdq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b420b: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b420e: punpckldq mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4211: pfmul mm6, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008b4215: pfsub mm5, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008b4219: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b421c: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b421f: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4222: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4225: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4228: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b422b: pfmul mm6, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[2]); fpr[6] = (long double)(i64)(r); }
    /* 008b422f: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4232: pfmul mm0, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b4236: pfsub mm6, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008b423a: movq mm0, qword ptr [ebx] */ { MM64 r; r.q = R64((u32)(r_ebx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b423d: movq mm1, qword ptr [ebx + 8] */ { MM64 r; r.q = R64((u32)(r_ebx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b4241: movq mm7, qword ptr [0x99dca0] */ { MM64 r; r.q = R64((u32)(0x99dca0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b4248: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b424b: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b424e: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4251: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4254: pxor mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b4257: punpckhdq mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b425a: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b425e: movq mm0, mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b4261: movq mm3, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4264: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4267: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b426a: punpckhdq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b426d: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b4270: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4273: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b4277: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b427b: pxor mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008b427e: pxor mm7, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4281: pfacc mm3, mm7 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008b4285: movq mm7, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b4288: movq mm0, qword ptr [ebx] */ { MM64 r; r.q = R64((u32)(r_ebx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b428b: pfsub mm2, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b428f: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b4292: punpckhdq mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4295: pxor mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008b4298: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b429b: psrlq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008b429f: punpckldq mm2, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b42a2: pxor mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b42a5: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b42a8: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b42ab: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b42ae: pxor mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008b42b1: punpckhdq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b42b4: psllq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q << c); fpr[7] = (long double)(i64)(r.q); }
    /* 008b42b8: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b42bc: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b42c0: pfmul mm1, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b42c4: pxor mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008b42c7: pxor mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008b42ca: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008b42ce: pfadd mm1, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b42d2: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b42d6: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b42d8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b42d9: ret 0x10 */ FN_RET(0x008b41aa); r_esp += 20; return;
}

void f_008b47ba(void) /* sub_8B47BA */
{
    FN_ENTER(0x008b47ba);
    /* 008b47ba: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b47be: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8b47c3u); f_00858882();
    /* 008b47c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b47c4: ret  */ FN_RET(0x008b47ba); r_esp += 4; return;
}

void f_008b47c5(void) /* sub_8B47C5 */
{
    FN_ENTER(0x008b47c5);
    /* 008b47c5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b47c9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8b47ceu); f_00859c55();
    /* 008b47ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b47cf: ret  */ FN_RET(0x008b47c5); r_esp += 4; return;
}

void f_008b47d0(void) /* sub_8B47D0 */
{
    FN_ENTER(0x008b47d0);
    /* 008b47d0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008b47d4: ret  */ FN_RET(0x008b47d0); r_esp += 4; return;
}

void f_008b47d5(void) /* sub_8B47D5 */
{
    FN_ENTER(0x008b47d5);
    /* 008b47d5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b47d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b47db: mov dword ptr [ecx + 0x14], 0x30 */ W32((u32)(r_ecx+0x14u), 0x30u);
    /* 008b47e2: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b47e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b47e5: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8b47e7u); call_ind(t); }
    /* 008b47e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b47e8: ret  */ FN_RET(0x008b47d5); r_esp += 4; return;
}

void f_008b47e9(void) /* sub_8B47E9 */
{
    FN_ENTER(0x008b47e9);
    /* 008b47e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b47eb: ret  */ FN_RET(0x008b47e9); r_esp += 4; return;
}

void f_008b47ec(void) /* sub_8B47EC */
{
    FN_ENTER(0x008b47ec);
    /* 008b47ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b47ed: mov ebp, esp */ r_ebp = r_esp;
    /* 008b47ef: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b47f2: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008b47f5: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b47f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b47f9: mov ebx, dword ptr [esi + 0x180] */ r_ebx = R32((u32)(r_esi+0x180u));
    /* 008b47ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4800: mov edi, dword ptr [esi + 0x114] */ r_edi = R32((u32)(r_esi+0x114u));
    /* 008b4806: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b4809: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b480a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b480c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b480d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b480fu); call_ind(t); }
    /* 008b480f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4813: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 008b4816: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 008b4819: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 008b481c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 008b481f: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008b4825: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4828: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b482c: jle 0x8b4890 */ if ((fZ||fS!=fO)) goto L_008b4890;
L_008b482e:; BB(0x008b482e);
    /* 008b482e: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b4831: lea ecx, [eax + 0xc] */ r_ecx = (u32)(r_eax+0xcu);
    /* 008b4834: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008b4837: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b483a: jmp 0x8b483f */ goto L_008b483f;
L_008b483c:; BB(0x008b483c);
    /* 008b483c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
L_008b483f:; BB(0x008b483f);
    /* 008b483f: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008b4842: imul eax, dword ptr [ecx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4845: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b4846: idiv dword ptr [esi + 0x114] */ { i32 d = (i32)R32((u32)(r_esi+0x114u)); if (!d) UNSUP(0x008b4846, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b4846, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b484c: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b484f: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4852: mov ecx, edi */ r_ecx = r_edi;
    /* 008b4854: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b4857: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4858: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008b485b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b485e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b4860: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4861: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b4863u); call_ind(t); }
    /* 008b4863: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b4866: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 008b4869: add dword ptr [ebp - 8], 0x54 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b486d: lea eax, [eax + ecx*4] */ r_eax = (u32)(r_eax+r_ecx*4);
    /* 008b4870: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4873: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b4876: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
    /* 008b4879: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 008b487c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b487f: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4882: lea eax, [eax + edi*4] */ r_eax = (u32)(r_eax+r_edi*4);
    /* 008b4885: mov dword ptr [ecx + edx], eax */ W32((u32)(r_ecx+r_edx), r_eax);
    /* 008b4888: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b488b: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b488e: jl 0x8b483c */ if ((fS!=fO)) goto L_008b483c;
L_008b4890:; BB(0x008b4890);
    /* 008b4890: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b4891: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b4892: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b4893: ret  */ FN_RET(0x008b47ec); r_esp += 4; return;
}

void f_008b4894(void) /* sub_8B4894 */
{
    FN_ENTER(0x008b4894);
    /* 008b4894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4895: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4897: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b489a: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 008b48a0: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b48a4: cmp dword ptr [edi + 0x20], 0 */ {  u32 a = R32((u32)(r_edi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b48a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b48a9: mov ebx, dword ptr [edi + 0x180] */ r_ebx = R32((u32)(r_edi+0x180u));
    /* 008b48af: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008b48b2: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 008b48b8: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 008b48bb: jle 0x8b49c2 */ if ((fZ||fS!=fO)) goto L_008b49c2;
L_008b48c1:; BB(0x008b48c1);
    /* 008b48c1: lea ecx, [eax + 0xc] */ r_ecx = (u32)(r_eax+0xcu);
    /* 008b48c4: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 008b48c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b48c8: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008b48cb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b48ce: jmp 0x8b48d3 */ goto L_008b48d3;
L_008b48d0:; BB(0x008b48d0);
    /* 008b48d0: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
L_008b48d3:; BB(0x008b48d3);
    /* 008b48d3: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 008b48d6: imul eax, dword ptr [ecx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ecx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b48d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b48da: idiv dword ptr [edi + 0x114] */ { i32 d = (i32)R32((u32)(r_edi+0x114u)); if (!d) UNSUP(0x008b48da, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b48da, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b48e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b48e3: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 008b48e6: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b48e9: mov edx, dword ptr [ecx + edx] */ r_edx = R32((u32)(r_ecx+r_edx));
    /* 008b48ec: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008b48ef: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 008b48f2: mov edx, dword ptr [ecx + edx] */ r_edx = R32((u32)(r_ecx+r_edx));
    /* 008b48f5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008b48f8: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008b48fa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b48fd: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4900: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4903: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4905: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008b4908: jle 0x8b4933 */ if ((fZ||fS!=fO)) goto L_008b4933;
L_008b490a:; BB(0x008b490a);
    /* 008b490a: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b490d: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008b4910: sub dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4913: mov eax, edx */ r_eax = r_edx;
    /* 008b4915: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4917: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_008b491a:; BB(0x008b491a);
    /* 008b491a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b491d: mov ecx, dword ptr [ecx + eax] */ r_ecx = R32((u32)(r_ecx+r_eax));
    /* 008b4920: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008b4922: mov dword ptr [ebx + eax], ecx */ W32((u32)(r_ebx+r_eax), r_ecx);
    /* 008b4925: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b4928: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b492b: jne 0x8b491a */ if (!fZ) goto L_008b491a;
L_008b492d:; BB(0x008b492d);
    /* 008b492d: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b4930: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_008b4933:; BB(0x008b4933);
    /* 008b4933: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008b4936: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4938: jle 0x8b498e */ if ((fZ||fS!=fO)) goto L_008b498e;
L_008b493a:; BB(0x008b493a);
    /* 008b493a: mov ecx, eax */ r_ecx = r_eax;
    /* 008b493c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b493f: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4942: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b4945: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 008b4948: lea ecx, [eax - 2] */ r_ecx = (u32)(r_eax+0xfffffffeu);
    /* 008b494b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b494e: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4951: lea ecx, [esi + ecx*4] */ r_ecx = (u32)(r_esi+r_ecx*4);
    /* 008b4954: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008b4957: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008b495a: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 008b495d: sub dword ptr [ebp - 4], edx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4960: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008b4963: sub dword ptr [ebp - 0x10], esi */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4966: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008b4969: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
L_008b496c:; BB(0x008b496c);
    /* 008b496c: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b496f: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4972: mov edx, dword ptr [esi + edx] */ r_edx = R32((u32)(r_esi+r_edx));
    /* 008b4975: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008b4978: mov dword ptr [esi + ecx], edx */ W32((u32)(r_esi+r_ecx), r_edx);
    /* 008b497b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008b497d: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4980: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4984: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4987: dec dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b498a: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 008b498c: jne 0x8b496c */ if (!fZ) goto L_008b496c;
L_008b498e:; BB(0x008b498e);
    /* 008b498e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4990: jle 0x8b49aa */ if ((fZ||fS!=fO)) goto L_008b49aa;
L_008b4992:; BB(0x008b4992);
    /* 008b4992: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b4995: mov ecx, eax */ r_ecx = r_eax;
    /* 008b4997: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008b499a: mov esi, ecx */ r_esi = r_ecx;
    /* 008b499c: mov ecx, edx */ r_ecx = r_edx;
    /* 008b499e: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_008b49a0:; BB(0x008b49a0);
    /* 008b49a0: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 008b49a2: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 008b49a4: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b49a7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b49a8: jne 0x8b49a0 */ if (!fZ) goto L_008b49a0;
L_008b49aa:; BB(0x008b49aa);
    /* 008b49aa: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b49ad: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b49b0: add dword ptr [ebp - 0x14], 4 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b49b4: add dword ptr [ebp - 0x18], 0x54 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b49b8: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b49bb: jl 0x8b48d0 */ if ((fS!=fO)) goto L_008b48d0;
L_008b49c1:; BB(0x008b49c1);
    /* 008b49c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b49c2:; BB(0x008b49c2);
    /* 008b49c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b49c3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b49c4: ret  */ FN_RET(0x008b4894); r_esp += 4; return;
}

void f_008b49c5(void) /* sub_8B49C5 */
{
    FN_ENTER(0x008b49c5);
    /* 008b49c5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b49c6: mov ebp, esp */ r_ebp = r_esp;
    /* 008b49c8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b49cb: mov ecx, dword ptr [edi + 0x180] */ r_ecx = R32((u32)(r_edi+0x180u));
    /* 008b49d1: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b49d5: cmp dword ptr [edi + 0x20], 0 */ {  u32 a = R32((u32)(r_edi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b49d9: mov eax, dword ptr [edi + 0xc4] */ r_eax = R32((u32)(r_edi+0xc4u));
    /* 008b49df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b49e0: mov esi, dword ptr [edi + 0x114] */ r_esi = R32((u32)(r_edi+0x114u));
    /* 008b49e6: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b49e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008b49ec: jle 0x8b4a96 */ if ((fZ||fS!=fO)) goto L_008b4a96;
L_008b49f2:; BB(0x008b49f2);
    /* 008b49f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b49f3: lea ebx, [eax + 0xc] */ r_ebx = (u32)(r_eax+0xcu);
    /* 008b49f6: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_008b49f9:; BB(0x008b49f9);
    /* 008b49f9: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 008b49fc: imul eax, dword ptr [ebx] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b49ff: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b4a00: idiv dword ptr [edi + 0x114] */ { i32 d = (i32)R32((u32)(r_edi+0x114u)); if (!d) UNSUP(0x008b4a00, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b4a00, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b4a06: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 008b4a09: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b4a0c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4a0f: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b4a12: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 008b4a15: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 008b4a18: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 008b4a1b: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 008b4a1e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b4a21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4a23: jle 0x8b4a80 */ if ((fZ||fS!=fO)) goto L_008b4a80;
L_008b4a25:; BB(0x008b4a25);
    /* 008b4a25: lea ecx, [esi + 2] */ r_ecx = (u32)(r_esi+0x2u);
    /* 008b4a28: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4a2b: lea ebx, [edx + ecx*4] */ r_ebx = (u32)(r_edx+r_ecx*4);
    /* 008b4a2e: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b4a31: mov ecx, edx */ r_ecx = r_edx;
    /* 008b4a33: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4a35: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008b4a36: imul esi, dword ptr [ebp - 0xc] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebp+0xfffffff4u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4a3a: lea eax, [edx + esi*4] */ r_eax = (u32)(r_edx+r_esi*4);
    /* 008b4a3d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008b4a40: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 008b4a43: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b4a45: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b4a48: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
L_008b4a4b:; BB(0x008b4a4b);
    /* 008b4a4b: mov edx, dword ptr [esi + eax] */ r_edx = R32((u32)(r_esi+r_eax));
    /* 008b4a4e: mov dword ptr [esi + ecx], edx */ W32((u32)(r_esi+r_ecx), r_edx);
    /* 008b4a51: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008b4a53: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008b4a55: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4a58: mov edx, dword ptr [esi + edx] */ r_edx = R32((u32)(r_esi+r_edx));
    /* 008b4a5b: mov dword ptr [esi + ebx], edx */ W32((u32)(r_esi+r_ebx), r_edx);
    /* 008b4a5e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4a61: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 008b4a63: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4a67: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 008b4a69: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b4a6c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4a6f: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4a72: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b4a75: jne 0x8b4a4b */ if (!fZ) goto L_008b4a4b;
L_008b4a77:; BB(0x008b4a77);
    /* 008b4a77: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008b4a7a: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b4a7d: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
L_008b4a80:; BB(0x008b4a80);
    /* 008b4a80: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4a83: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4a86: add ebx, 0x54 */ {  u32 a = r_ebx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4a89: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4a8c: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b4a8f: jl 0x8b49f9 */ if ((fS!=fO)) goto L_008b49f9;
L_008b4a95:; BB(0x008b4a95);
    /* 008b4a95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b4a96:; BB(0x008b4a96);
    /* 008b4a96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b4a97: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b4a98: ret  */ FN_RET(0x008b49c5); r_esp += 4; return;
}

void f_008b4a99(void) /* sub_8B4A99 */
{
    FN_ENTER(0x008b4a99);
    /* 008b4a99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4a9a: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4a9c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b4a9f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4aa3: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4aa7: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008b4aad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4aae: mov ebx, dword ptr [esi + 0x180] */ r_ebx = R32((u32)(r_esi+0x180u));
    /* 008b4ab4: jle 0x8b4b2c */ if ((fZ||fS!=fO)) goto L_008b4b2c;
L_008b4ab6:; BB(0x008b4ab6);
    /* 008b4ab6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ab7: lea edi, [eax + 0xc] */ r_edi = (u32)(r_eax+0xcu);
L_008b4aba:; BB(0x008b4aba);
    /* 008b4aba: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 008b4abd: imul ecx, dword ptr [edi] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edi)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4ac0: mov eax, ecx */ r_eax = r_ecx;
    /* 008b4ac2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b4ac3: idiv dword ptr [esi + 0x114] */ { i32 d = (i32)R32((u32)(r_esi+0x114u)); if (!d) UNSUP(0x008b4ac3, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b4ac3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b4ac9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008b4acb: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b4ace: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008b4ad1: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008b4ad1, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008b4ad1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b4ad3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b4ad5: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 008b4ad8: jne 0x8b4add */ if (!fZ) goto L_008b4add;
L_008b4ada:; BB(0x008b4ada);
    /* 008b4ada: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_008b4add:; BB(0x008b4add);
    /* 008b4add: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b4ae1: jne 0x8b4aef */ if (!fZ) goto L_008b4aef;
L_008b4ae3:; BB(0x008b4ae3);
    /* 008b4ae3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4ae6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b4ae7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b4ae8: idiv dword ptr [ebp - 0xc] */ { i32 d = (i32)R32((u32)(r_ebp+0xfffffff4u)); if (!d) UNSUP(0x008b4ae8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b4ae8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b4aeb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b4aec: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
L_008b4aef:; BB(0x008b4aef);
    /* 008b4aef: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 008b4af2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4af5: mov eax, dword ptr [ebx + eax*4 + 0x38] */ r_eax = R32((u32)(r_ebx+r_eax*4+0x38u));
    /* 008b4af9: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 008b4afc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b4aff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4b03: jle 0x8b4b1d */ if ((fZ||fS!=fO)) goto L_008b4b1d;
L_008b4b05:; BB(0x008b4b05);
    /* 008b4b05: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4b08: lea eax, [eax + edx*4] */ r_eax = (u32)(r_eax+r_edx*4);
    /* 008b4b0b: mov edx, eax */ r_edx = r_eax;
    /* 008b4b0d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
L_008b4b10:; BB(0x008b4b10);
    /* 008b4b10: mov ecx, dword ptr [eax - 4] */ r_ecx = R32((u32)(r_eax+0xfffffffcu));
    /* 008b4b13: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008b4b15: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b4b18: dec dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b4b1b: jne 0x8b4b10 */ if (!fZ) goto L_008b4b10;
L_008b4b1d:; BB(0x008b4b1d);
    /* 008b4b1d: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4b20: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4b23: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b4b26: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4b29: jl 0x8b4aba */ if ((fS!=fO)) goto L_008b4aba;
L_008b4b2b:; BB(0x008b4b2b);
    /* 008b4b2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008b4b2c:; BB(0x008b4b2c);
    /* 008b4b2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b4b2d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b4b2e: ret  */ FN_RET(0x008b4a99); r_esp += 4; return;
}

void f_008b4b2f(void) /* sub_8B4B2F */
{
    FN_ENTER(0x008b4b2f);
    /* 008b4b2f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b30: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4b32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b33: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b34: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b4b37: mov esi, dword ptr [edi + 0x180] */ r_esi = R32((u32)(r_edi+0x180u));
    /* 008b4b3d: cmp byte ptr [esi + 0x30], 0 */ {  u32 a = R8((u32)(r_esi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b4b41: jne 0x8b4b5b */ if (!fZ) goto L_008b4b5b;
L_008b4b43:; BB(0x008b4b43);
    /* 008b4b43: mov eax, dword ptr [edi + 0x184] */ r_eax = R32((u32)(r_edi+0x184u));
    /* 008b4b49: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 008b4b4c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b4e: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8b4b51u); call_ind(t); }
    /* 008b4b51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b4b53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b4b54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b4b55: je 0x8b4b93 */ if (fZ) goto L_008b4b93;
L_008b4b57:; BB(0x008b4b57);
    /* 008b4b57: mov byte ptr [esi + 0x30], 1 */ W8((u32)(r_esi+0x30u), 0x1u);
L_008b4b5b:; BB(0x008b4b5b);
    /* 008b4b5b: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 008b4b61: mov ecx, dword ptr [edi + 0x188] */ r_ecx = R32((u32)(r_edi+0x188u));
    /* 008b4b67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b68: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4b6b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008b4b6e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4b71: lea ebx, [esi + 0x34] */ r_ebx = (u32)(r_esi+0x34u);
    /* 008b4b74: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4b77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b78: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b79: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 008b4b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b7e: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b4b81u); call_ind(t); }
    /* 008b4b81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b4b84: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4b87: cmp dword ptr [ebx], eax */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4b89: jb 0x8b4b92 */ if (fC) goto L_008b4b92;
L_008b4b8b:; BB(0x008b4b8b);
    /* 008b4b8b: and byte ptr [esi + 0x30], 0 */ { u32 ad = (u32)(r_esi+0x30u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b4b8f: and dword ptr [ebx], 0 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008b4b92:; BB(0x008b4b92);
    /* 008b4b92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008b4b93:; BB(0x008b4b93);
    /* 008b4b93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b4b94: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b4b95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b4b96: ret  */ FN_RET(0x008b4b2f); r_esp += 4; return;
}

void f_008b4b97(void) /* sub_8B4B97 */
{
    FN_ENTER(0x008b4b97);
    /* 008b4b97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b98: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4b9a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b9b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4b9c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b4b9f: mov ebx, dword ptr [edi + 0x180] */ r_ebx = R32((u32)(r_edi+0x180u));
    /* 008b4ba5: cmp byte ptr [ebx + 0x30], 0 */ {  u32 a = R8((u32)(r_ebx+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b4ba9: jne 0x8b4bcd */ if (!fZ) goto L_008b4bcd;
L_008b4bab:; BB(0x008b4bab);
    /* 008b4bab: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 008b4bae: push dword ptr [ebx + ecx*4 + 0x38] */ { u32 v = R32((u32)(r_ebx+r_ecx*4+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4bb2: mov eax, dword ptr [edi + 0x184] */ r_eax = R32((u32)(r_edi+0x184u));
    /* 008b4bb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4bb9: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8b4bbcu); call_ind(t); }
    /* 008b4bbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b4bbe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b4bbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b4bc0: je 0x8b4c9b */ if (fZ) goto L_008b4c9b;
L_008b4bc6:; BB(0x008b4bc6);
    /* 008b4bc6: inc dword ptr [ebx + 0x4c] */ { u32 ad = (u32)(r_ebx+0x4cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4bc9: mov byte ptr [ebx + 0x30], 1 */ W8((u32)(r_ebx+0x30u), 0x1u);
L_008b4bcd:; BB(0x008b4bcd);
    /* 008b4bcd: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 008b4bd0: sub eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = (a < b); }
    /* 008b4bd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4bd4: je 0x8b4c1d */ if (fZ) goto L_008b4c1d;
L_008b4bd6:; BB(0x008b4bd6);
    /* 008b4bd6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008b4bd7: je 0x8b4c44 */ if (fZ) goto L_008b4c44;
L_008b4bd9:; BB(0x008b4bd9);
    /* 008b4bd9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4bda: jne 0x8b4c9a */ if (!fZ) goto L_008b4c9a;
L_008b4be0:; BB(0x008b4be0);
    /* 008b4be0: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4be3: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 008b4be6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4be9: mov eax, dword ptr [edi + 0x188] */ r_eax = R32((u32)(r_edi+0x188u));
    /* 008b4bef: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4bf2: lea esi, [ebx + 0x34] */ r_esi = (u32)(r_ebx+0x34u);
    /* 008b4bf5: push dword ptr [ebx + 0x48] */ { u32 v = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4bf8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4bf9: push dword ptr [ebx + ecx*4 + 0x38] */ { u32 v = R32((u32)(r_ebx+r_ecx*4+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4bfd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4bfe: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b4c01u); call_ind(t); }
    /* 008b4c01: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4c03: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4c06: cmp eax, dword ptr [ebx + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4c09: jb 0x8b4c9a */ if (fC) goto L_008b4c9a;
L_008b4c0f:; BB(0x008b4c0f);
    /* 008b4c0f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008b4c12: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b4c15: and dword ptr [ebx + 0x44], 0 */ { u32 ad = (u32)(r_ebx+0x44u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4c19: cmp dword ptr [ecx], eax */ {  u32 a = R32((u32)(r_ecx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4c1b: jae 0x8b4c9a */ if (!fC) goto L_008b4c9a;
L_008b4c1d:; BB(0x008b4c1d);
    /* 008b4c1d: and dword ptr [ebx + 0x34], 0 */ { u32 ad = (u32)(r_ebx+0x34u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4c21: mov eax, dword ptr [edi + 0x114] */ r_eax = R32((u32)(r_edi+0x114u));
    /* 008b4c27: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b4c28: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 008b4c2b: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 008b4c2e: cmp eax, dword ptr [edi + 0x118] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x118u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b4c34: jne 0x8b4c3d */ if (!fZ) goto L_008b4c3d;
L_008b4c36:; BB(0x008b4c36);
    /* 008b4c36: mov esi, edi */ r_esi = r_edi;
    /* 008b4c38: call 0x8b4a99 */ r_esp -= 4; W32(r_esp, 0x8b4c3du); f_008b4a99();
L_008b4c3d:; BB(0x008b4c3d);
    /* 008b4c3d: mov dword ptr [ebx + 0x44], 1 */ W32((u32)(r_ebx+0x44u), 0x1u);
L_008b4c44:; BB(0x008b4c44);
    /* 008b4c44: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4c47: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 008b4c4a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4c4d: mov eax, dword ptr [edi + 0x188] */ r_eax = R32((u32)(r_edi+0x188u));
    /* 008b4c53: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4c56: lea esi, [ebx + 0x34] */ r_esi = (u32)(r_ebx+0x34u);
    /* 008b4c59: push dword ptr [ebx + 0x48] */ { u32 v = R32((u32)(r_ebx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4c5c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4c5d: push dword ptr [ebx + ecx*4 + 0x38] */ { u32 v = R32((u32)(r_ebx+r_ecx*4+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4c61: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4c62: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8b4c65u); call_ind(t); }
    /* 008b4c65: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4c67: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4c6a: cmp eax, dword ptr [ebx + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x48u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4c6d: jb 0x8b4c9a */ if (fC) goto L_008b4c9a;
L_008b4c6f:; BB(0x008b4c6f);
    /* 008b4c6f: cmp dword ptr [ebx + 0x4c], 1 */ {  u32 a = R32((u32)(r_ebx+0x4cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b4c73: jne 0x8b4c7a */ if (!fZ) goto L_008b4c7a;
L_008b4c75:; BB(0x008b4c75);
    /* 008b4c75: call 0x8b49c5 */ r_esp -= 4; W32(r_esp, 0x8b4c7au); f_008b49c5();
L_008b4c7a:; BB(0x008b4c7a);
    /* 008b4c7a: xor dword ptr [ebx + 0x40], 1 */ { u32 ad = (u32)(r_ebx+0x40u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4c7e: and byte ptr [ebx + 0x30], 0 */ { u32 ad = (u32)(r_ebx+0x30u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008b4c82: lea eax, [edi + 0x114] */ r_eax = (u32)(r_edi+0x114u);
    /* 008b4c88: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b4c8a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4c8b: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008b4c8d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008b4c8f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008b4c91: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008b4c92: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b4c94: mov dword ptr [ebx + 0x48], ecx */ W32((u32)(r_ebx+0x48u), r_ecx);
    /* 008b4c97: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
L_008b4c9a:; BB(0x008b4c9a);
    /* 008b4c9a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008b4c9b:; BB(0x008b4c9b);
    /* 008b4c9b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b4c9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b4c9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b4c9e: ret  */ FN_RET(0x008b4b97); r_esp += 4; return;
}

void f_008b4c9f(void) /* sub_8B4C9F */
{
    FN_ENTER(0x008b4c9f);
    /* 008b4c9f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4ca3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b4ca7: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4cab: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 008b4cb1: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4cb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4cb7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cb8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cbb: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b4cbeu); call_ind(t); }
    /* 008b4cbe: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b4cc1: ret  */ FN_RET(0x008b4c9f); r_esp += 4; return;
}

void f_008b4cc2(void) /* sub_8B4CC2 */
{
    FN_ENTER(0x008b4cc2);
    /* 008b4cc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008b4cc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4cc9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008b4ccd: mov esi, dword ptr [edi + 0x180] */ r_esi = R32((u32)(r_edi+0x180u));
    /* 008b4cd3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4cd5: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = (a < b); }
    /* 008b4cd7: je 0x8b4cf7 */ if (fZ) goto L_008b4cf7;
L_008b4cd9:; BB(0x008b4cd9);
    /* 008b4cd9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b4cda: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4cdb: je 0x8b4cee */ if (fZ) goto L_008b4cee;
L_008b4cdd:; BB(0x008b4cdd);
    /* 008b4cdd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b4cdf: mov dword ptr [eax + 0x14], 4 */ W32((u32)(r_eax+0x14u), 0x4u);
    /* 008b4ce6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008b4ce8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ce9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b4cebu); call_ind(t); }
    /* 008b4ceb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b4cec: jmp 0x8b4d26 */ goto L_008b4d26;
L_008b4cee:; BB(0x008b4cee);
    /* 008b4cee: mov dword ptr [esi + 4], 0x8b4c9f */ W32((u32)(r_esi+0x4u), 0x8b4c9fu);
    /* 008b4cf5: jmp 0x8b4d26 */ goto L_008b4d26;
L_008b4cf7:; BB(0x008b4cf7);
    /* 008b4cf7: mov eax, dword ptr [edi + 0x19c] */ r_eax = R32((u32)(r_edi+0x19cu));
    /* 008b4cfd: cmp byte ptr [eax + 8], bl */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008b4d00: je 0x8b4d19 */ if (fZ) goto L_008b4d19;
L_008b4d02:; BB(0x008b4d02);
    /* 008b4d02: mov dword ptr [esi + 4], 0x8b4b97 */ W32((u32)(r_esi+0x4u), 0x8b4b97u);
    /* 008b4d09: call 0x8b4894 */ r_esp -= 4; W32(r_esp, 0x8b4d0eu); f_008b4894();
    /* 008b4d0e: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 008b4d11: mov dword ptr [esi + 0x44], ebx */ W32((u32)(r_esi+0x44u), r_ebx);
    /* 008b4d14: mov dword ptr [esi + 0x4c], ebx */ W32((u32)(r_esi+0x4cu), r_ebx);
    /* 008b4d17: jmp 0x8b4d20 */ goto L_008b4d20;
L_008b4d19:; BB(0x008b4d19);
    /* 008b4d19: mov dword ptr [esi + 4], 0x8b4b2f */ W32((u32)(r_esi+0x4u), 0x8b4b2fu);
L_008b4d20:; BB(0x008b4d20);
    /* 008b4d20: mov byte ptr [esi + 0x30], bl */ W8((u32)(r_esi+0x30u), (u8)r_ebx);
    /* 008b4d23: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
L_008b4d26:; BB(0x008b4d26);
    /* 008b4d26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b4d27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b4d28: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b4d29: ret  */ FN_RET(0x008b4cc2); r_esp += 4; return;
}

void f_008b4d2a(void) /* sub_8B4D2A */
{
    FN_ENTER(0x008b4d2a);
    /* 008b4d2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d2b: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4d2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d2f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008b4d32: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008b4d35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d36: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d3b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b4d3du); call_ind(t); }
    /* 008b4d3d: mov ebx, eax */ r_ebx = r_eax;
    /* 008b4d3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4d42: cmp byte ptr [ebp + 0xc], 0 */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b4d46: mov dword ptr [esi + 0x180], ebx */ W32((u32)(r_esi+0x180u), r_ebx);
    /* 008b4d4c: mov dword ptr [ebx], 0x8b4cc2 */ W32((u32)(r_ebx), 0x8b4cc2u);
    /* 008b4d52: je 0x8b4d63 */ if (fZ) goto L_008b4d63;
L_008b4d54:; BB(0x008b4d54);
    /* 008b4d54: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4d56: mov dword ptr [eax + 0x14], 4 */ W32((u32)(r_eax+0x14u), 0x4u);
    /* 008b4d5d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4d5f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d60: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b4d62u); call_ind(t); }
    /* 008b4d62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b4d63:; BB(0x008b4d63);
    /* 008b4d63: mov eax, dword ptr [esi + 0x19c] */ r_eax = R32((u32)(r_esi+0x19cu));
    /* 008b4d69: cmp byte ptr [eax + 8], 0 */ {  u32 a = R8((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b4d6d: je 0x8b4d99 */ if (fZ) goto L_008b4d99;
L_008b4d6f:; BB(0x008b4d6f);
    /* 008b4d6f: cmp dword ptr [esi + 0x114], 2 */ {  u32 a = R32((u32)(r_esi+0x114u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4d76: jge 0x8b4d87 */ if ((fS==fO)) goto L_008b4d87;
L_008b4d78:; BB(0x008b4d78);
    /* 008b4d78: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4d7a: mov dword ptr [eax + 0x14], 0x2e */ W32((u32)(r_eax+0x14u), 0x2eu);
    /* 008b4d81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008b4d83: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4d84: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8b4d86u); call_ind(t); }
    /* 008b4d86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008b4d87:; BB(0x008b4d87);
    /* 008b4d87: call 0x8b47ec */ r_esp -= 4; W32(r_esp, 0x8b4d8cu); f_008b47ec();
    /* 008b4d8c: mov ecx, dword ptr [esi + 0x114] */ r_ecx = R32((u32)(r_esi+0x114u));
    /* 008b4d92: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4d93: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008b4d94: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008b4d97: jmp 0x8b4da4 */ goto L_008b4da4;
L_008b4d99:; BB(0x008b4d99);
    /* 008b4d99: mov eax, dword ptr [esi + 0x114] */ r_eax = R32((u32)(r_esi+0x114u));
    /* 008b4d9f: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008b4da2: mov ecx, eax */ r_ecx = r_eax;
L_008b4da4:; BB(0x008b4da4);
    /* 008b4da4: and dword ptr [ebp + 8], 0 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4da8: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4dac: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 008b4db2: jle 0x8b4df8 */ if ((fZ||fS!=fO)) goto L_008b4df8;
L_008b4db4:; BB(0x008b4db4);
    /* 008b4db4: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b4db7: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4dba: jmp 0x8b4dbf */ goto L_008b4dbf;
L_008b4dbc:; BB(0x008b4dbc);
    /* 008b4dbc: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_008b4dbf:; BB(0x008b4dbf);
    /* 008b4dbf: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008b4dc1: mov eax, dword ptr [edi - 0x18] */ r_eax = R32((u32)(r_edi+0xffffffe8u));
    /* 008b4dc4: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4dc7: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008b4dc8: idiv dword ptr [esi + 0x114] */ { i32 d = (i32)R32((u32)(r_esi+0x114u)); if (!d) UNSUP(0x008b4dc8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008b4dc8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008b4dce: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008b4dd1: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4dd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4dd5: mov eax, dword ptr [edi - 8] */ r_eax = R32((u32)(r_edi+0xfffffff8u));
    /* 008b4dd8: imul eax, dword ptr [edi] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ddc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008b4dde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ddf: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x8b4de2u); call_ind(t); }
    /* 008b4de2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4de5: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4de8: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008b4dea: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b4ded: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008b4df0: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008b4df3: cmp eax, dword ptr [esi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008b4df6: jl 0x8b4dbc */ if ((fS!=fO)) goto L_008b4dbc;
L_008b4df8:; BB(0x008b4df8);
    /* 008b4df8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b4df9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b4dfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b4dfb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b4dfc: ret  */ FN_RET(0x008b4d2a); r_esp += 4; return;
}

void f_008b4e3c(void) /* sub_8B4E3C */
{
    FN_ENTER(0x008b4e3c);
    /* 008b4e3c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008b4e40: and dword ptr [ecx + 0x80], 0 */ { u32 ad = (u32)(r_ecx+0x80u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4e47: jmp 0x8b4dfd */ f_008b4dfd(); return;
}

void f_008b4e4c(void) /* sub_8B4E4C */
{
    FN_ENTER(0x008b4e4c);
    /* 008b4e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b4e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 008b4e4f: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b4e52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008b4e53: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4e54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4e55: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008b4e58: mov esi, dword ptr [edi + 0x134] */ r_esi = R32((u32)(r_edi+0x134u));
    /* 008b4e5e: mov eax, dword ptr [edi + 0x118] */ r_eax = R32((u32)(r_edi+0x118u));
    /* 008b4e64: mov ebx, dword ptr [edi + 0x184] */ r_ebx = R32((u32)(r_edi+0x184u));
    /* 008b4e6a: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008b4e6b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008b4e6c: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008b4e6f: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 008b4e72: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 008b4e75: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 008b4e78: jmp 0x8b4fd4 */ goto L_008b4fd4;
L_008b4e7d:; BB(0x008b4e7d);
    /* 008b4e7d: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 008b4e80: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b4e82: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008b4e85: ja 0x8b4fcf */ if ((!fC&&!fZ)) goto L_008b4fcf;
L_008b4e8b:; BB(0x008b4e8b);
    /* 008b4e8b: mov eax, dword ptr [edi + 0x13c] */ r_eax = R32((u32)(r_edi+0x13cu));
    /* 008b4e91: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008b4e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4e95: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4e98: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8b4e9du); f_008a8d72();
    /* 008b4e9d: mov ecx, dword ptr [edi + 0x194] */ r_ecx = R32((u32)(r_edi+0x194u));
    /* 008b4ea3: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 008b4ea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ea7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4ea8: call dword ptr [ecx + 4] */ { u32 t = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, 0x8b4eabu); call_ind(t); }
    /* 008b4eab: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4eae: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008b4eb0: je 0x8b5003 */ if (fZ) goto L_008b5003;
L_008b4eb6:; BB(0x008b4eb6);
    /* 008b4eb6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008b4eb8: cmp dword ptr [edi + 0x120], eax */ {  u32 a = R32((u32)(r_edi+0x120u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4ebe: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b4ec1: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008b4ec4: jle 0x8b4fc0 */ if ((fZ||fS!=fO)) goto L_008b4fc0;
L_008b4eca:; BB(0x008b4eca);
    /* 008b4eca: lea ecx, [edi + 0x124] */ r_ecx = (u32)(r_edi+0x124u);
    /* 008b4ed0: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
L_008b4ed3:; BB(0x008b4ed3);
    /* 008b4ed3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008b4ed6: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008b4ed8: cmp byte ptr [esi + 0x30], 0 */ {  u32 a = R8((u32)(r_esi+0x30u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008b4edc: jne 0x8b4ee9 */ if (!fZ) goto L_008b4ee9;
L_008b4ede:; BB(0x008b4ede);
    /* 008b4ede: add eax, dword ptr [esi + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b4ee1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b4ee4: jmp 0x8b4fa7 */ goto L_008b4fa7;
L_008b4ee9:; BB(0x008b4ee9);
    /* 008b4ee9: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008b4eec: mov edx, dword ptr [edi + 0x198] */ r_edx = R32((u32)(r_edi+0x198u));
    /* 008b4ef2: mov ecx, dword ptr [edx + ecx*4 + 4] */ r_ecx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 008b4ef6: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 008b4ef9: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 008b4efc: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b4eff: jae 0x8b4f06 */ if (!fC) goto L_008b4f06;
L_008b4f01:; BB(0x008b4f01);
    /* 008b4f01: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 008b4f04: jmp 0x8b4f09 */ goto L_008b4f09;
L_008b4f06:; BB(0x008b4f06);
    /* 008b4f06: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
L_008b4f09:; BB(0x008b4f09);
    /* 008b4f09: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b4f0c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b4f0f: mov edx, dword ptr [edx + ebx*4] */ r_edx = R32((u32)(r_edx+r_ebx*4));
    /* 008b4f12: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 008b4f15: imul ebx, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4f19: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4f1d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008b4f20: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 008b4f23: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008b4f27: cmp dword ptr [esi + 0x38], 0 */ {  u32 a = R32((u32)(r_esi+0x38u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4f2b: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b4f2e: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b4f31: jle 0x8b4fa4 */ if ((fZ||fS!=fO)) goto L_008b4fa4;
L_008b4f33:; BB(0x008b4f33);
    /* 008b4f33: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 008b4f36: cmp dword ptr [edi + 0x80], ecx */ {  u32 a = R32((u32)(r_edi+0x80u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b4f3c: jb 0x8b4f4b */ if (fC) goto L_008b4f4b;
L_008b4f3e:; BB(0x008b4f3e);
    /* 008b4f3e: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b4f41: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4f44: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008b4f46: cmp edx, dword ptr [esi + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x48u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4f49: jge 0x8b4f87 */ if ((fS==fO)) goto L_008b4f87;
L_008b4f4b:; BB(0x008b4f4b);
    /* 008b4f4b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 008b4f4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008b4f50: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008b4f53: jle 0x8b4f87 */ if ((fZ||fS!=fO)) goto L_008b4f87;
L_008b4f55:; BB(0x008b4f55);
    /* 008b4f55: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008b4f58: lea eax, [edx + eax*4 + 0x20] */ r_eax = (u32)(r_edx+r_eax*4+0x20u);
    /* 008b4f5c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008b4f5f: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
L_008b4f62:; BB(0x008b4f62);
    /* 008b4f62: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4f65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008b4f68: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4f6b: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008b4f6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4f6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b4f6f: call dword ptr [ebp - 0x38] */ { u32 t = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, 0x8b4f72u); call_ind(t); }
    /* 008b4f72: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 008b4f75: add dword ptr [ebp - 0x10], eax */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4f78: add dword ptr [ebp - 0x14], 4 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4f7c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008b4f7f: dec dword ptr [ebp - 0x2c] */ { u32 ad = (u32)(r_ebp+0xffffffd4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008b4f82: jne 0x8b4f62 */ if (!fZ) goto L_008b4f62;
L_008b4f84:; BB(0x008b4f84);
    /* 008b4f84: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_008b4f87:; BB(0x008b4f87);
    /* 008b4f87: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008b4f8a: add eax, dword ptr [esi + 0x34] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x34u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008b4f8d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 008b4f90: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4f93: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008b4f96: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008b4f99: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008b4f9c: cmp ecx, dword ptr [esi + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4f9f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008b4fa2: jl 0x8b4f33 */ if ((fS!=fO)) goto L_008b4f33;
L_008b4fa4:; BB(0x008b4fa4);
    /* 008b4fa4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_008b4fa7:; BB(0x008b4fa7);
    /* 008b4fa7: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4faa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008b4fad: add dword ptr [ebp - 0x24], 4 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4fb1: cmp ecx, dword ptr [edi + 0x120] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x120u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4fb7: jl 0x8b4ed3 */ if ((fS!=fO)) goto L_008b4ed3;
L_008b4fbd:; BB(0x008b4fbd);
    /* 008b4fbd: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
L_008b4fc0:; BB(0x008b4fc0);
    /* 008b4fc0: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4fc3: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008b4fc6: jbe 0x8b4e8b */ if ((fC||fZ)) goto L_008b4e8b;
L_008b4fcc:; BB(0x008b4fcc);
    /* 008b4fcc: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
L_008b4fcf:; BB(0x008b4fcf);
    /* 008b4fcf: and dword ptr [ebx + 0x14], 0 */ { u32 ad = (u32)(r_ebx+0x14u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4fd3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008b4fd4:; BB(0x008b4fd4);
    /* 008b4fd4: cmp eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008b4fd7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008b4fda: jl 0x8b4e7d */ if ((fS!=fO)) goto L_008b4e7d;
L_008b4fe0:; BB(0x008b4fe0);
    /* 008b4fe0: inc dword ptr [edi + 0x88] */ { u32 ad = (u32)(r_edi+0x88u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4fe6: lea eax, [edi + 0x80] */ r_eax = (u32)(r_edi+0x80u);
    /* 008b4fec: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008b4fee: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008b4ff0: cmp eax, dword ptr [edi + 0x118] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x118u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008b4ff6: jae 0x8b5013 */ if (!fC) goto L_008b5013;
L_008b4ff8:; BB(0x008b4ff8);
    /* 008b4ff8: mov ecx, edi */ r_ecx = r_edi;
    /* 008b4ffa: call 0x8b4dfd */ r_esp -= 4; W32(r_esp, 0x8b4fffu); f_008b4dfd();
    /* 008b4fff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008b5001: jmp 0x8b5020 */ goto L_008b5020;
L_008b5003:; BB(0x008b5003);
    /* 008b5003: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008b5006: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 008b5009: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b500c: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 008b500f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b5011: jmp 0x8b5021 */ goto L_008b5021;
L_008b5013:; BB(0x008b5013);
    /* 008b5013: mov eax, dword ptr [edi + 0x18c] */ r_eax = R32((u32)(r_edi+0x18cu));
    /* 008b5019: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008b501a: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x8b501du); call_ind(t); }
    /* 008b501d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008b501e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
L_008b5020:; BB(0x008b5020);
    /* 008b5020: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
L_008b5021:; BB(0x008b5021);
    /* 008b5021: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008b5022: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008b5023: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008b5024: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008b5025: ret  */ FN_RET(0x008b4e4c); r_esp += 4; return;
}

