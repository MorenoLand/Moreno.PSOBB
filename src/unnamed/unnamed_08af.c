#include "protos.h"

void f_008afab2(void) /* sub_8AFAB2 */
{
    FN_ENTER(0x008afab2);
    /* 008afab2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008afab3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008afab4: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afab6: movd mm0, dword ptr [esp + 0x10] */ { u64 v = R32((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)v; }
    /* 008afabb: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8afac0u); f_008bb660();
    /* 008afac0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008afac4: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afac7: pxor mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008afaca: movq mm2, qword ptr [0x99dce8] */ { MM64 r; r.q = R64((u32)(0x99dce8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008afad1: movq mm3, qword ptr [0x99dce0] */ { MM64 r; r.q = R64((u32)(0x99dce0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008afad8: psrlq mm4, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008afadc: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008afadf: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afae3: movd dword ptr [eax + 0x10], mm1 */ W32((u32)(r_eax+0x10u), (u32)(u64)(i64)fpr[1]);
    /* 008afae7: movd dword ptr [eax + 0x14], mm0 */ W32((u32)(r_eax+0x14u), (u32)(u64)(i64)fpr[0]);
    /* 008afaeb: movq qword ptr [eax + 0x18], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afaef: pxor mm4, qword ptr [0x99dc98] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99dc98u)); MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008afaf6: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afafa: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afafe: movd dword ptr [eax + 0x20], mm1 */ W32((u32)(r_eax+0x20u), (u32)(u64)(i64)fpr[1]);
    /* 008afb02: movd dword ptr [eax + 0x24], mm4 */ W32((u32)(r_eax+0x24u), (u32)(u64)(i64)fpr[4]);
    /* 008afb06: movd dword ptr [eax + 0x28], mm0 */ W32((u32)(r_eax+0x28u), (u32)(u64)(i64)fpr[0]);
    /* 008afb0a: movd dword ptr [eax + 0x2c], mm1 */ W32((u32)(r_eax+0x2cu), (u32)(u64)(i64)fpr[1]);
    /* 008afb0e: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afb10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008afb11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008afb12: ret 8 */ FN_RET(0x008afab2); r_esp += 12; return;
}

void f_008afb15(void) /* sub_8AFB15 */
{
    FN_ENTER(0x008afb15);
    /* 008afb15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008afb16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008afb17: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afb19: movd mm0, dword ptr [esp + 0x10] */ { u64 v = R32((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)v; }
    /* 008afb1e: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8afb23u); f_008bb660();
    /* 008afb23: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008afb27: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afb2a: pand mm0, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008afb31: pxor mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008afb34: movq mm2, qword ptr [0x99dce8] */ { MM64 r; r.q = R64((u32)(0x99dce8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008afb3b: movq mm3, qword ptr [0x99dce0] */ { MM64 r; r.q = R64((u32)(0x99dce0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008afb42: psrlq mm4, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 008afb46: movq qword ptr [eax + 0x10], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afb4a: movq qword ptr [eax + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afb4e: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afb52: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afb56: movq qword ptr [eax + 0x20], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afb5a: pxor mm4, qword ptr [0x99dc98] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99dc98u)); MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008afb61: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008afb64: movq qword ptr [eax + 0x28], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afb68: movq qword ptr [eax + 8], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afb6c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afb6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008afb6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008afb70: ret 8 */ FN_RET(0x008afb15); r_esp += 12; return;
}

void f_008afb73(void) /* sub_8AFB73 */
{
    FN_ENTER(0x008afb73);
    /* 008afb73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008afb74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008afb75: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afb77: movd mm0, dword ptr [esp + 0x10] */ { u64 v = R32((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)v; }
    /* 008afb7c: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8afb81u); f_008bb660();
    /* 008afb81: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008afb85: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afb88: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afb8b: pxor mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008afb8e: movq mm2, qword ptr [0x99dce8] */ { MM64 r; r.q = R64((u32)(0x99dce8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008afb95: movq mm3, qword ptr [0x99dce0] */ { MM64 r; r.q = R64((u32)(0x99dce0u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008afb9c: punpckldq mm4, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afb9f: pxor mm4, qword ptr [0x99dc98] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x99dc98u)); MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008afba6: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008afba9: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008afbad: movq qword ptr [eax + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008afbb1: movq qword ptr [eax + 0x20], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008afbb5: movq qword ptr [eax + 0x28], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008afbb9: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008afbbd: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008afbc1: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008afbc5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008afbc7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008afbc8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008afbc9: ret 8 */ FN_RET(0x008afb73); r_esp += 12; return;
}

void f_008afe42(void) /* sub_8AFE42 */
{
    FN_ENTER(0x008afe42);
    /* 008afe42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008afe43: mov ebp, esp */ r_ebp = r_esp;
    /* 008afe45: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008afe4b: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008afe4e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008afe51: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008afe54: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008afe56: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008afe59: je 0x8b0aa7 */ if (fZ) goto L_008b0aa7;
L_008afe5f:; BB(0x008afe5f);
    /* 008afe5f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008afe61: je 0x8b0a69 */ if (fZ) goto L_008b0a69;
L_008afe67:; BB(0x008afe67);
    /* 008afe67: movq mm1, qword ptr [0x99dc00] */ { MM64 r; r.q = R64((u32)(0x99dc00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afe6e: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008afe71: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008afe75: pxor mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008afe78: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afe7b: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afe7e: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afe81: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afe84: movq qword ptr [esp], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp), r.q); }
    /* 008afe88: movq qword ptr [esp + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008afe8d: movq qword ptr [esp + 0x10], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008afe92: movq qword ptr [esp + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008afe97: movq qword ptr [esp + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008afe9c: movq qword ptr [esp + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008afea1: movq qword ptr [esp + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008afea6: movq qword ptr [esp + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008afeab: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008afeaf: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008afeb2: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008afeb6: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afeb9: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008afebc: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008afec0: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afec3: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afec6: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008afeca: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afecd: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008afed0: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008afed3: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008afed7: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afeda: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afedd: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008afee1: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afee4: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008afee8: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008afeec: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008afeef: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008afef3: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afef6: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008afef9: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008afefc: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008afeff: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008aff03: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008aff07: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008aff0b: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aff0e: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aff11: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008aff19: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008aff21: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aff24: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008aff28: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008aff2c: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008aff30: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aff33: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008aff37: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008aff3b: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aff3e: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aff41: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aff44: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008aff47: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aff4a: movq qword ptr [eax + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008aff4e: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aff51: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aff58: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008aff5c: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aff5f: movq qword ptr [eax + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008aff63: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008aff66: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008aff69: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008aff6c: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008aff70: movq qword ptr [eax + 0x38], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008aff74: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008aff77: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aff79: je 0x8b0651 */ if (fZ) goto L_008b0651;
L_008aff7f:; BB(0x008aff7f);
    /* 008aff7f: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aff84: movq mm1, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aff89: movq mm3, qword ptr [esp + 0x68] */ { MM64 r; r.q = R64((u32)(r_esp+0x68u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008aff8e: movq mm4, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008aff93: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aff96: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aff99: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aff9c: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008aff9f: movq qword ptr [esp + 0x80], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008affa7: movq qword ptr [esp + 0x90], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x90u), r.q); }
    /* 008affaf: movq mm6, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008affb4: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008affb7: movq mm7, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008affbc: movq mm0, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008affc1: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008affc4: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008affc7: movq qword ptr [esp + 0xa8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0xa8u), r.q); }
    /* 008affcf: movq qword ptr [esp + 0xb8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0xb8u), r.q); }
    /* 008affd7: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008affda: movq mm4, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008affdf: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008affe2: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008affe5: movq qword ptr [esp + 0xa0], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0xa0u), r.q); }
    /* 008affed: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008afff0: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008afff3: movq qword ptr [esp + 0xb0], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0xb0u), r.q); }
    /* 008afffb: movq qword ptr [esp + 0x98], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x98u), r.q); }
    /* 008b0003: movq qword ptr [esp + 0x88], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008b000b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b000e: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b0011: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b0015: movd mm1, dword ptr [0x99dc10] */ { u64 v = R32((u32)(0x99dc10u)); fpr[1] = (long double)(i64)v; }
    /* 008b001c: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b001f: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0022: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0025: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0028: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b002b: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b002f: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0033: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0037: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b003b: movq qword ptr [eax + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b003f: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b0043: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b0047: movq qword ptr [eax + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b004b: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b004f: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0052: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0056: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b005e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0061: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0069: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b006c: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0074: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0077: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b007a: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b007e: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0081: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
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
L_008b0651:; BB(0x008b0651);
    /* 008b0651: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b0654: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0659: movq mm1, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b065e: movq mm3, qword ptr [esp + 0x68] */ { MM64 r; r.q = R64((u32)(r_esp+0x68u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b0663: movq mm4, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0668: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b066b: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b066e: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0671: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0674: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b0677: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b067b: movq mm6, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0680: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0683: movq mm7, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0688: movq mm0, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b068d: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0690: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0693: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0697: movq qword ptr [eax + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b069b: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b069e: movq mm4, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b06a3: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b06a6: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b06a9: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b06ad: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b06b0: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b06b3: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b06b7: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b06bb: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b06bf: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b06c2: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b06c6: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b06ca: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b06cd: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b06d2: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b06d5: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b06da: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b06dd: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b06e0: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b06e4: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b06e7: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b06ed: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b06f2: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b06f6: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b06f9: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b06ff: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0703: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0707: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b070b: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0711: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0715: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0719: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b071d: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0723: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0727: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b072b: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b072f: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0733: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0736: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b073a: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b073e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0741: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0746: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0749: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b074e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0751: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0754: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0758: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b075b: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0761: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0766: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b076a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b076d: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0773: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0777: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b077b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b077f: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0785: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0789: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b078d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0791: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0797: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b079b: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b079f: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b07a3: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b07a7: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b07ab: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b07af: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b07b3: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b07b6: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b07bb: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b07be: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b07c3: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b07c6: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b07c9: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b07cd: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b07d0: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b07d6: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b07db: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b07df: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b07e2: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b07e8: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b07ec: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b07f0: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b07f4: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b07fa: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b07fe: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0802: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0806: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b080c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0810: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0814: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0818: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b081c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0820: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0824: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0828: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b082b: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0830: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0833: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0838: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b083b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b083e: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0842: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0845: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b084b: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0850: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0854: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0857: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b085d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0861: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0865: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0869: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b086f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0873: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0877: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b087b: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0881: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0885: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0889: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b088d: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0891: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0894: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0898: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b089d: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b08a0: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b08a5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b08a8: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b08ad: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b08b0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b08b3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b08b7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b08ba: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b08c0: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b08c5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b08c9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b08cc: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b08d2: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b08d6: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b08da: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b08de: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b08e4: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b08e8: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b08ec: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b08f0: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b08f6: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b08fa: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b08fe: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0902: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0906: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b0909: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b090e: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0912: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0915: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b091a: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b091d: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0922: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0925: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0928: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b092c: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b092f: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0935: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b093a: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b093e: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0941: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0947: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b094b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b094f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0953: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0959: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b095d: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0961: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0965: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b096b: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b096f: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b0973: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0977: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b097b: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b097f: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b0984: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0988: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b098b: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0990: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0993: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0998: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b099b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b099e: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b09a2: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b09a5: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b09ab: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b09b0: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b09b4: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b09b7: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b09bd: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b09c1: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b09c5: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b09c9: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b09cf: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b09d3: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b09d7: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b09db: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b09e1: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b09e5: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b09e9: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b09ed: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b09f1: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b09f5: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b09fa: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b09fe: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0a01: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b0a06: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0a09: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b0a0e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0a11: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b0a14: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b0a18: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0a1b: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b0a21: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b0a26: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b0a2a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0a2d: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b0a33: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b0a37: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b0a3b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b0a3f: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b0a45: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b0a49: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b0a4d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b0a51: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b0a57: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b0a5b: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b0a5f: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0a63: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0a67: jmp 0x8b0ad9 */ goto L_008b0ad9;
L_008b0a69:; BB(0x008b0a69);
    /* 008b0a69: movq mm1, qword ptr [0x99dc00] */ { MM64 r; r.q = R64((u32)(0x99dc00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b0a70: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b0a73: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b0a77: pxor mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0a7a: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b0a7d: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0a80: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0a83: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b0a86: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b0a89: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0a8d: movq qword ptr [eax + 0x10], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0a91: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0a95: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0a99: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0a9d: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0aa1: movq qword ptr [eax + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b0aa5: jmp 0x8b0ad9 */ goto L_008b0ad9;
L_008b0aa7:; BB(0x008b0aa7);
    /* 008b0aa7: movd mm1, dword ptr [0x99dc10] */ { u64 v = R32((u32)(0x99dc10u)); fpr[1] = (long double)(i64)v; }
    /* 008b0aae: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b0ab1: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0ab4: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0ab7: punpckldq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b0aba: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b0abd: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b0ac1: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b0ac5: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b0ac9: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b0acd: movq qword ptr [eax + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b0ad1: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b0ad5: movq qword ptr [eax + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x38u), r.q); }
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
    /* 008b0fd7: ret 0x1c */ FN_RET(0x008afe42); r_esp += 32; return;
}

