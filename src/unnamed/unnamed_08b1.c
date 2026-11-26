#include "protos.h"

void f_008b16b3(void) /* sub_8B16B3 */
{
    FN_ENTER(0x008b16b3);
    /* 008b16b3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b16b4: mov ebp, esp */ r_ebp = r_esp;
    /* 008b16b6: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b16b9: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b16bc: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008b16bf: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008b16c2: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b16c5: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b16c9: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008b16cd: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008b16d1: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008b16d5: movd dword ptr [esp + 8], mm1 */ W32((u32)(r_esp+0x8u), (u32)(u64)(i64)fpr[1]);
    /* 008b16da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b16db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008b16dc: call 0x8b3422 */ r_esp -= 4; W32(r_esp, 0x8b16e1u); f_008b3422();
    /* 008b16e1: movd mm0, dword ptr [ebp + 0x10] */ { u64 v = R32((u32)(r_ebp+0x10u)); fpr[0] = (long double)(i64)v; }
    /* 008b16e5: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8b16eau); f_008bb660();
    /* 008b16ea: movq mm7, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b16ed: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b16f0: pfsubr mm0, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[0], R64((u32)(0x99dc20u))); fpr[0] = (long double)(i64)(r); }
    /* 008b16f8: punpckhdq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b16fb: movq mm2, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b16ff: movd mm3, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b1704: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1707: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b170a: movd dword ptr [esp + 0xc], mm7 */ W32((u32)(r_esp+0xcu), (u32)(u64)(i64)fpr[7]);
    /* 008b170f: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1712: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1715: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1718: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008b171c: punpckhdq mm2, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b171f: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008b1723: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1726: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b172a: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b172d: pfmul mm2, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1731: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b1734: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b1738: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b173c: pfmul mm5, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008b1740: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1744: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008b1748: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008b174c: pfadd mm4, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008b1750: pfadd mm5, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008b1754: movd mm1, dword ptr [esp + 0xc] */ { u64 v = R32((u32)(r_esp+0xcu)); fpr[1] = (long double)(i64)v; }
    /* 008b1759: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b175c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b175f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1763: punpckldq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1766: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b176a: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b176e: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1771: movq mm1, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1774: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1777: movq qword ptr [eax + 0x28], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b177b: pfsub mm2, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[7]); fpr[2] = (long double)(i64)(r); }
    /* 008b177f: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008b1783: movq mm7, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1786: pfsub mm3, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008b178a: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b178d: punpckldq mm4, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1790: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1793: punpckhdq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1796: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008b1799: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b179c: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b17a0: punpckhdq mm0, qword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b17a7: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b17ab: movq qword ptr [eax + 0x18], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b17af: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b17b2: movq qword ptr [eax + 0x38], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b17b6: punpckhdq mm7, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b17b9: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b17bc: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b17c0: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b17c4: mov esp, ebp */ r_esp = r_ebp;
    /* 008b17c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b17c7: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b17c9: ret 0xc */ FN_RET(0x008b16b3); r_esp += 16; return;
}

void f_008b17cc(void) /* sub_8B17CC */
{
    FN_ENTER(0x008b17cc);
    /* 008b17cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008b17cd: mov ebp, esp */ r_ebp = r_esp;
    /* 008b17cf: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b17d5: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008b17d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008b17db: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008b17de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b17e0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b17e3: je 0x8b240f */ if (fZ) goto L_008b240f;
L_008b17e9:; BB(0x008b17e9);
    /* 008b17e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b17eb: je 0x8b23d1 */ if (fZ) goto L_008b23d1;
L_008b17f1:; BB(0x008b17f1);
    /* 008b17f1: movq mm1, qword ptr [0x99dc00] */ { MM64 r; r.q = R64((u32)(0x99dc00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b17f8: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b17fb: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b17ff: pxor mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1802: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1805: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1808: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b180b: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b180e: movq qword ptr [esp], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp), r.q); }
    /* 008b1812: movq qword ptr [esp + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b1817: movq qword ptr [esp + 0x10], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b181c: movq qword ptr [esp + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b1821: movq qword ptr [esp + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008b1826: movq qword ptr [esp + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008b182b: movq qword ptr [esp + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008b1830: movq qword ptr [esp + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008b1835: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 008b1839: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b183c: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1840: pswapd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1844: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1847: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b184a: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b184e: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1851: punpckhdq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1854: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b1858: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b185b: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b185f: punpckldq mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1862: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1866: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b186a: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b186e: pfmul mm6, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1872: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1875: pfsubr mm0, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[0], R64((u32)(0x99dc20u))); fpr[0] = (long double)(i64)(r); }
    /* 008b187d: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1880: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1883: pfpnacc mm3, mm3 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b1887: pfacc mm4, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b188b: pfpnacc mm6, mm6 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b188f: pfpnacc mm2, mm2 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b1893: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b1897: pswapd mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b189b: pfsubr mm4, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[4], R64((u32)(0x99dc20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b18a3: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b18a6: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b18a9: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b18ad: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b18b0: punpckldq mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b18b3: punpckhdq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b18b6: punpckhdq mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b18b9: movq qword ptr [eax + 0x20], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b18bd: punpckhdq mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b18c0: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b18c4: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b18c7: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b18cb: punpckldq mm7, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b18d2: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b18d5: movq qword ptr [eax + 0x10], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b18d9: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b18dd: movq qword ptr [eax + 0x38], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b18e1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008b18e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b18e6: je 0x8b1fb9 */ if (fZ) goto L_008b1fb9;
L_008b18ec:; BB(0x008b18ec);
    /* 008b18ec: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b18f1: movq mm1, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b18f6: movq mm3, qword ptr [esp + 0x68] */ { MM64 r; r.q = R64((u32)(r_esp+0x68u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b18fb: movq mm4, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1900: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1903: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1906: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1909: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b190c: movq qword ptr [esp + 0x80], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x80u), r.q); }
    /* 008b1914: movq qword ptr [esp + 0x90], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x90u), r.q); }
    /* 008b191c: movq mm6, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1921: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1924: movq mm7, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1929: movq mm0, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b192e: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1931: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1934: movq qword ptr [esp + 0xa8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0xa8u), r.q); }
    /* 008b193c: movq qword ptr [esp + 0xb8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0xb8u), r.q); }
    /* 008b1944: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1947: movq mm4, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b194c: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b194f: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1952: movq qword ptr [esp + 0xa0], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0xa0u), r.q); }
    /* 008b195a: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b195d: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1960: movq qword ptr [esp + 0xb0], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0xb0u), r.q); }
    /* 008b1968: movq qword ptr [esp + 0x98], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x98u), r.q); }
    /* 008b1970: movq qword ptr [esp + 0x88], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x88u), r.q); }
    /* 008b1978: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b197b: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b197e: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b1982: movd mm1, dword ptr [0x99dc10] */ { u64 v = R32((u32)(0x99dc10u)); fpr[1] = (long double)(i64)v; }
    /* 008b1989: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b198c: pswapd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1990: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b1993: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b1997: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b199b: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b199f: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b19a3: movq qword ptr [eax + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b19a7: pfsub mm2, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008b19ab: pfsub mm0, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[3]); fpr[0] = (long double)(i64)(r); }
    /* 008b19af: movq qword ptr [eax + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b19b3: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b19b7: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b19ba: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b19be: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b19c6: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b19c9: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b19d1: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b19d4: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b19dc: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b19df: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b19e2: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b19e6: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b19e9: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b19f2: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b19fa: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b19fe: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1a01: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1a0a: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1a0e: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1a12: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1a16: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1a1f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1a23: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1a27: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1a2b: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1a34: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1a38: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1a3c: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1a40: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1a44: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b1a47: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1a4f: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b1a53: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1a56: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1a5e: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1a61: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1a69: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1a6c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1a6f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1a73: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1a76: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1a7f: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1a87: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1a8b: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1a8e: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1a97: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1a9b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1a9f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1aa3: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1aac: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1ab0: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1ab4: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1ab8: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1ac1: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1ac5: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1ac9: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1acd: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1ad1: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b1ad5: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1add: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b1ae1: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1ae4: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1aec: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1aef: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1af7: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1afa: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1afd: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1b01: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1b04: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1b0d: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1b15: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1b19: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1b1c: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1b25: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1b29: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1b2d: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1b31: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1b3a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1b3e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1b42: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1b46: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1b4f: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1b53: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1b57: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1b5b: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1b5f: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b1b63: movq mm4, qword ptr [esp + 0x80] */ { MM64 r; r.q = R64((u32)(r_esp+0x80u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1b6b: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b1b6f: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1b72: movq mm5, qword ptr [esp + 0x90] */ { MM64 r; r.q = R64((u32)(r_esp+0x90u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1b7a: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1b7d: movq mm6, qword ptr [esp + 0xa0] */ { MM64 r; r.q = R64((u32)(r_esp+0xa0u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1b85: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1b88: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1b8b: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1b8f: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1b92: pfmul mm0, qword ptr [esp + 0x88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x88u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1b9b: movq mm7, qword ptr [esp + 0xb0] */ { MM64 r; r.q = R64((u32)(r_esp+0xb0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1ba3: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1ba7: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1baa: pfmul mm2, qword ptr [esp + 0x98] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x98u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1bb3: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1bb7: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1bbb: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1bbf: pfmul mm1, qword ptr [esp + 0xa8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0xa8u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1bc8: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1bcc: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1bd0: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1bd4: pfmul mm3, qword ptr [esp + 0xb8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0xb8u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1bdd: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1be1: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1be5: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1be9: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b1bed: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1bf0: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1bf4: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1bf8: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1bfb: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1c00: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1c03: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1c08: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1c0b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1c0e: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1c12: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1c15: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1c1b: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1c20: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1c24: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1c27: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1c2d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1c31: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1c35: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1c39: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1c3f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1c43: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1c47: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1c4b: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1c51: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1c55: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1c59: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1c5d: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1c61: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b1c64: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1c68: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b1c6c: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1c6f: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1c74: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1c77: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1c7c: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1c7f: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1c82: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1c86: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1c89: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1c8f: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1c94: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1c98: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1c9b: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1ca1: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1ca5: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1ca9: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1cad: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1cb3: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1cb7: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1cbb: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1cbf: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1cc5: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1cc9: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1ccd: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1cd1: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1cd5: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b1cd9: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1cdd: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b1ce1: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1ce4: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1ce9: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1cec: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1cf1: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1cf4: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1cf7: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1cfb: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1cfe: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1d04: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1d09: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1d0d: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1d10: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1d16: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1d1a: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1d1e: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1d22: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1d28: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1d2c: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1d30: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1d34: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1d3a: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1d3e: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1d42: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1d46: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1d4a: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b1d4e: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1d52: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b1d56: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1d59: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1d5e: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1d61: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1d66: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1d69: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1d6c: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1d70: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1d73: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1d79: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1d7e: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1d82: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1d85: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1d8b: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1d8f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1d93: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1d97: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1d9d: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1da1: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1da5: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1da9: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1daf: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1db3: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1db7: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1dbb: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b1dbf: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1dc2: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1dc6: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1dcb: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1dce: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1dd3: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1dd6: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1ddb: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1dde: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1de1: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1de5: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1de8: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1dee: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1df3: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1df7: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1dfa: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1e00: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1e04: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1e08: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1e0c: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1e12: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1e16: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1e1a: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1e1e: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1e24: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1e28: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1e2c: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1e30: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1e34: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b1e37: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1e3c: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b1e40: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1e43: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1e48: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1e4b: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1e50: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1e53: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1e56: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1e5a: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1e5d: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1e63: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1e68: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1e6c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1e6f: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1e75: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1e79: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1e7d: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1e81: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1e87: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1e8b: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1e8f: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1e93: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1e99: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1e9d: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1ea1: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1ea5: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1ea9: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b1ead: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1eb2: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b1eb6: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1eb9: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1ebe: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1ec1: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1ec6: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1ec9: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1ecc: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1ed0: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1ed3: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1ed9: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1ede: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1ee2: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1ee5: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1eeb: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1eef: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1ef3: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1ef7: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1efd: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1f01: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1f05: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1f09: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1f0f: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1f13: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1f17: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1f1b: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1f1f: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b1f23: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1f28: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b1f2c: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1f2f: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1f34: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1f37: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1f3c: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1f3f: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1f42: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1f46: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1f49: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1f4f: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1f54: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1f58: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1f5b: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1f61: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1f65: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1f69: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1f6d: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1f73: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1f77: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1f7b: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1f7f: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1f85: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1f89: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1f8d: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1f91: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b1f95: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1f98: movq mm1, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1f9c: movd mm2, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008b1fa0: movd mm3, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[3] = (long double)(i64)v; }
    /* 008b1fa4: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b1fa8: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008b1fac: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1fb0: movd dword ptr [eax + 0x38], mm2 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[2]);
    /* 008b1fb4: jmp 0x8b243c */ goto L_008b243c;
L_008b1fb9:; BB(0x008b1fb9);
    /* 008b1fb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008b1fbc: movq mm0, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1fc1: movq mm1, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1fc6: movq mm3, qword ptr [esp + 0x68] */ { MM64 r; r.q = R64((u32)(r_esp+0x68u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008b1fcb: movq mm4, qword ptr [esp + 0x78] */ { MM64 r; r.q = R64((u32)(r_esp+0x78u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1fd0: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1fd3: punpckldq mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1fd6: punpckhdq mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1fd9: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1fdc: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008b1fdf: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b1fe3: movq mm6, qword ptr [esp + 0x48] */ { MM64 r; r.q = R64((u32)(r_esp+0x48u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1fe8: punpckldq mm3, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1feb: movq mm7, qword ptr [esp + 0x58] */ { MM64 r; r.q = R64((u32)(r_esp+0x58u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1ff0: movq mm0, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1ff5: punpckhdq mm5, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1ff8: movq mm1, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1ffb: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b1fff: movq qword ptr [eax + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b2003: punpckldq mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2006: movq mm4, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b200b: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b200e: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2011: movq qword ptr [eax + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2015: punpckhdq mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2018: punpckldq mm2, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b201b: movq qword ptr [eax + 0x30], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b201f: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2023: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b2027: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b202a: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b202e: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2032: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2035: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b203a: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b203d: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2042: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2045: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2048: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b204c: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b204f: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2055: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b205a: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b205e: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2061: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2067: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b206b: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b206f: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2073: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2079: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b207d: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b2081: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2085: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b208b: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b208f: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2093: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2097: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b209b: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b209e: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b20a2: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b20a6: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b20a9: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b20ae: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b20b1: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b20b6: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b20b9: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b20bc: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b20c0: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b20c3: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b20c9: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b20ce: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b20d2: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b20d5: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b20db: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b20df: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b20e3: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b20e7: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b20ed: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b20f1: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b20f5: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b20f9: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b20ff: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2103: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2107: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b210b: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b210f: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2113: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2117: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b211b: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b211e: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2123: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2126: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b212b: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b212e: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2131: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2135: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2138: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b213e: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2143: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b2147: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b214a: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2150: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2154: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b2158: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b215c: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2162: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2166: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b216a: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b216e: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2174: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2178: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b217c: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2180: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2184: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2188: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b218c: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2190: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2193: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2198: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b219b: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b21a0: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b21a3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b21a6: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b21aa: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b21ad: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b21b3: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b21b8: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b21bc: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b21bf: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b21c5: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b21c9: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b21cd: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b21d1: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b21d7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b21db: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b21df: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b21e3: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b21e9: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b21ed: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b21f1: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b21f5: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b21f9: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b21fc: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2200: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2205: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2208: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b220d: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2210: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2215: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2218: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b221b: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b221f: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2222: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2228: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b222d: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b2231: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2234: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b223a: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b223e: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b2242: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2246: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b224c: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2250: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b2254: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2258: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b225e: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2262: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2266: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b226a: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b226e: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b2271: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2276: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b227a: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b227d: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2282: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2285: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b228a: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b228d: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2290: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2294: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2297: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b229d: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b22a2: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b22a6: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b22a9: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b22af: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b22b3: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b22b7: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b22bb: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b22c1: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b22c5: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b22c9: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b22cd: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b22d3: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b22d7: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b22db: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b22df: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b22e3: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b22e7: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b22ec: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b22f0: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b22f3: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b22f8: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b22fb: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2300: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2303: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2306: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b230a: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b230d: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2313: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2318: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b231c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b231f: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2325: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2329: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b232d: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2331: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2337: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b233b: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b233f: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2343: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2349: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b234d: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2351: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2355: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2359: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b235d: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2362: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2366: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2369: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b236e: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2371: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2376: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2379: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b237c: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2380: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2383: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2389: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b238e: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b2392: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2395: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b239b: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b239f: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b23a3: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b23a7: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b23ad: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b23b1: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b23b5: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b23b9: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b23bf: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b23c3: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b23c7: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b23cb: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b23cf: jmp 0x8b243c */ goto L_008b243c;
L_008b23d1:; BB(0x008b23d1);
    /* 008b23d1: movq mm1, qword ptr [0x99dc00] */ { MM64 r; r.q = R64((u32)(0x99dc00u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b23d8: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b23db: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008b23df: pxor mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008b23e2: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b23e5: punpckldq mm2, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b23e8: movq mm0, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b23eb: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b23ee: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008b23f1: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b23f5: movq qword ptr [eax + 0x10], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b23f9: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b23fd: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2401: movq qword ptr [eax + 0x28], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2405: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2409: movq qword ptr [eax + 0x38], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b240d: jmp 0x8b243c */ goto L_008b243c;
L_008b240f:; BB(0x008b240f);
    /* 008b240f: movd mm1, dword ptr [0x99dc10] */ { u64 v = R32((u32)(0x99dc10u)); fpr[1] = (long double)(i64)v; }
    /* 008b2416: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2419: pswapd mm2, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b241d: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008b2420: movq qword ptr [eax + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b2424: movq qword ptr [eax + 0x10], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2428: movq qword ptr [eax + 0x18], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b242c: movq qword ptr [eax + 0x20], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2430: movq qword ptr [eax + 0x28], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2434: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2438: movq qword ptr [eax + 0x38], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x38u), r.q); }
L_008b243c:; BB(0x008b243c);
    /* 008b243c: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008b243f: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 008b2442: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b2444: je 0x8b28f2 */ if (fZ) goto L_008b28f2;
L_008b244a:; BB(0x008b244a);
    /* 008b244a: movq mm0, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b244d: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2451: pswapd mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2455: movq mm6, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2458: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b245b: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b245f: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2462: punpckhdq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b2465: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b2469: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b246c: pfmul mm0, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2470: punpckldq mm5, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2473: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2477: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008b247b: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008b247f: pfmul mm6, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2483: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b2486: pfsubr mm0, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[0], R64((u32)(0x99dc20u))); fpr[0] = (long double)(i64)(r); }
    /* 008b248e: movq mm5, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b2491: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2494: pfpnacc mm3, mm3 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b2498: pfacc mm4, mm4 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008b249c: pfpnacc mm6, mm6 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[6], (u64)(i64)fpr[6]); fpr[6] = (long double)(i64)(r); }
    /* 008b24a0: pfpnacc mm2, mm2 */ { u64 r = rt_pf_pnacc((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008b24a4: pfsub mm0, mm1 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008b24a8: pswapd mm5, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = a.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b24ac: pfsubr mm4, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[4], R64((u32)(0x99dc20u))); fpr[4] = (long double)(i64)(r); }
    /* 008b24b4: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b24b7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b24ba: movq qword ptr [esp + 0x70], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x70u), r.q); }
    /* 008b24bf: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b24c2: punpckldq mm2, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b24c5: punpckhdq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b24c8: punpckhdq mm0, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b24cb: movq qword ptr [esp + 0x60], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x60u), r.q); }
    /* 008b24d0: punpckhdq mm3, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b24d3: movq qword ptr [esp + 0x48], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x48u), r.q); }
    /* 008b24d8: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b24db: movq qword ptr [esp + 0x68], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x68u), r.q); }
    /* 008b24e0: punpckldq mm7, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b24e7: movq qword ptr [esp + 0x40], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x40u), r.q); }
    /* 008b24ec: movq qword ptr [esp + 0x50], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x50u), r.q); }
    /* 008b24f1: movq qword ptr [esp + 0x58], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x58u), r.q); }
    /* 008b24f6: movq qword ptr [esp + 0x78], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp+0x78u), r.q); }
    /* 008b24fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b24fd: je 0x8b271c */ if (fZ) goto L_008b271c;
L_008b2503:; BB(0x008b2503);
    /* 008b2503: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2507: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b250b: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b250e: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b2512: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b2516: pfsub mm1, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b251a: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b251e: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b2522: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2525: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2529: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b252e: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2531: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2536: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2539: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b253e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2541: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2544: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2548: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b254b: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2551: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2556: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b255a: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b255d: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2563: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2567: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b256b: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b256f: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2575: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2579: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b257d: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2581: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2587: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b258b: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b258f: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2593: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2597: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b259a: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b259f: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b25a3: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b25a6: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b25ab: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b25ae: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b25b3: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b25b6: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b25b9: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b25bd: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b25c0: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b25c6: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b25cb: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b25cf: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b25d2: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b25d8: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b25dc: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b25e0: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b25e4: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b25ea: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b25ee: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b25f2: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b25f6: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b25fc: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2600: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2604: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2608: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b260c: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b2610: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2615: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2619: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b261c: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2621: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2624: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2629: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b262c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b262f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2633: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2636: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b263c: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2641: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b2645: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2648: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b264e: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2652: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b2656: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b265a: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b2660: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2664: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b2668: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b266c: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2672: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2676: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b267a: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b267e: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2682: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2686: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b268b: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b268f: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2692: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2697: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b269a: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b269f: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b26a2: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b26a5: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b26a9: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b26ac: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b26b2: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b26b7: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b26bb: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b26be: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b26c4: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b26c8: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b26cc: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b26d0: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b26d6: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b26da: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b26de: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b26e2: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b26e8: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b26ec: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b26f0: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b26f4: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b26f8: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b26fc: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b2700: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2703: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b2707: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b270b: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b270f: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2713: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b2717: jmp 0x8b28f2 */ goto L_008b28f2;
L_008b271c:; BB(0x008b271c);
    /* 008b271c: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b271f: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2723: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2728: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b272b: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2730: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2733: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2738: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b273b: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b273e: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b2742: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2745: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b274b: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b2750: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b2754: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2757: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b275d: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b2761: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b2765: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2769: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b276f: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b2773: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b2777: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b277b: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b2781: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2785: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2789: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b278d: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2791: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b2794: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2799: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b279d: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b27a0: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b27a5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b27a8: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b27ad: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b27b0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b27b3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b27b7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b27ba: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b27c0: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b27c5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b27c9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b27cc: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b27d2: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b27d6: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b27da: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b27de: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b27e4: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b27e8: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b27ec: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b27f0: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b27f6: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b27fa: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b27fe: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2802: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b2806: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b280a: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b280f: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b2813: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2816: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b281b: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b281e: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2823: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b2826: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b2829: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b282d: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b2830: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b2836: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b283b: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b283f: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2842: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b2848: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b284c: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b2850: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b2854: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b285a: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b285e: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b2862: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b2866: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b286c: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b2870: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b2874: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b2878: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b287c: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b2880: movq mm4, qword ptr [esp + 0x40] */ { MM64 r; r.q = R64((u32)(r_esp+0x40u)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b2885: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b2889: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b288c: movq mm5, qword ptr [esp + 0x50] */ { MM64 r; r.q = R64((u32)(r_esp+0x50u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b2891: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b2894: movq mm6, qword ptr [esp + 0x60] */ { MM64 r; r.q = R64((u32)(r_esp+0x60u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b2899: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b289c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b289f: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b28a3: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b28a6: pfmul mm0, qword ptr [esp + 0x48] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x48u))); fpr[0] = (long double)(i64)(r); }
    /* 008b28ac: movq mm7, qword ptr [esp + 0x70] */ { MM64 r; r.q = R64((u32)(r_esp+0x70u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b28b1: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b28b5: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b28b8: pfmul mm2, qword ptr [esp + 0x58] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x58u))); fpr[2] = (long double)(i64)(r); }
    /* 008b28be: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b28c2: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b28c6: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b28ca: pfmul mm1, qword ptr [esp + 0x68] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x68u))); fpr[1] = (long double)(i64)(r); }
    /* 008b28d0: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b28d4: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b28d8: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b28dc: pfmul mm3, qword ptr [esp + 0x78] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x78u))); fpr[3] = (long double)(i64)(r); }
    /* 008b28e2: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b28e6: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b28ea: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b28ee: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
L_008b28f2:; BB(0x008b28f2);
    /* 008b28f2: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 008b28f5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008b28f7: je 0x8b2918 */ if (fZ) goto L_008b2918;
L_008b28f9:; BB(0x008b28f9);
    /* 008b28f9: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b28fd: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b2901: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b2904: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b2908: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b290c: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b2910: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b2914: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
L_008b2918:; BB(0x008b2918);
    /* 008b2918: mov esp, ebp */ r_esp = r_ebp;
    /* 008b291a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008b291b: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b291d: ret 0x1c */ FN_RET(0x008b17cc); r_esp += 32; return;
}

