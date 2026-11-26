#include "protos.h"

void f_008b117f(void) /* ?x3d_D3DXMatrixAffineTransformation@@YGPAUD3DXMATRIX@@PAU1@MPBUD3DXVECTOR3@@PBUD3DXQUATERNION@@1@Z */
{
    FN_ENTER(0x008b117f);
    /* 008b117f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008b1183: movd mm6, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[6] = (long double)(i64)v; }
    /* 008b1188: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008b118b: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008b118f: movq mm5, qword ptr [0x99dc00] */ { MM64 r; r.q = R64((u32)(0x99dc00u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1196: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008b119a: movq qword ptr [eax], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax), r.q); }
    /* 008b119d: movq qword ptr [eax + 8], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b11a1: movd dword ptr [eax + 0x10], mm7 */ W32((u32)(r_eax+0x10u), (u32)(u64)(i64)fpr[7]);
    /* 008b11a5: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008b11a8: movd dword ptr [eax + 0x14], mm6 */ W32((u32)(r_eax+0x14u), (u32)(u64)(i64)fpr[6]);
    /* 008b11ac: movq qword ptr [eax + 0x18], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b11b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b11b2: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b11b6: movq qword ptr [eax + 0x28], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b11ba: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b11be: movq qword ptr [eax + 0x38], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b11c2: je 0x8b1684 */ if (fZ) goto L_008b1684;
L_008b11c8:; BB(0x008b11c8);
    /* 008b11c8: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b11cb: movq mm1, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b11cf: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b11d2: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b11d5: pfadd mm0, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008b11d9: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b11dc: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b11df: pfadd mm1, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008b11e3: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b11e6: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b11e9: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b11ec: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008b11f0: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b11f3: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b11f6: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b11fa: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b11fd: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008b1201: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008b1205: pxor mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1208: pfmul mm6, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[4]); fpr[6] = (long double)(i64)(r); }
    /* 008b120c: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b120f: punpckhdq mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1212: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1215: punpckldq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1218: movq qword ptr [esp + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x30u), r.q); }
    /* 008b121d: pfadd mm7, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1221: pfacc mm3, mm3 */ { u64 r = rt_pf_acc((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008b1225: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1228: punpckhdq mm6, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b122b: pfsubr mm3, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dc20u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1233: pfsubr mm7, qword ptr [0x99dc20] */ { u64 r = rt_pf_subr((u64)(i64)fpr[7], R64((u32)(0x99dc20u))); fpr[7] = (long double)(i64)(r); }
    /* 008b123b: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b123e: pfadd mm1, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008b1242: movq qword ptr [esp + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_esp+0x28u), r.q); }
    /* 008b1247: pfsub mm4, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[6]); fpr[4] = (long double)(i64)(r); }
    /* 008b124b: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b124e: pfadd mm2, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008b1252: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008b1256: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b1259: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b125c: movq mm6, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b125f: punpckldq mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008b1262: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1265: movq qword ptr [esp + 0x18], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_esp+0x18u), r.q); }
    /* 008b126a: punpckhdq mm5, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008b126d: punpckldq mm0, dword ptr [0x99dc20] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc20u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1274: movq qword ptr [esp + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008b1279: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b127c: movq qword ptr [esp + 0x10], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008b1281: punpckhdq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008b1284: punpckldq mm6, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008b1287: movq qword ptr [esp], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_esp), r.q); }
    /* 008b128b: movq qword ptr [esp + 0x20], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_esp+0x20u), r.q); }
    /* 008b1290: movq qword ptr [esp + 0x38], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x38u), r.q); }
    /* 008b1295: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b1297: je 0x8b14b2 */ if (fZ) goto L_008b14b2;
L_008b129d:; BB(0x008b129d);
    /* 008b129d: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b12a1: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b12a5: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b12a8: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b12ac: pfsub mm0, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b12b0: pfsub mm1, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b12b4: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b12b8: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b12bc: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b12bf: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b12c3: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b12c7: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b12ca: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b12cf: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b12d2: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b12d7: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b12da: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b12dd: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b12e1: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b12e4: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b12ea: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b12ef: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b12f3: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b12f6: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b12fc: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1300: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1304: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1308: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b130e: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1312: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1316: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b131a: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1320: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1324: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1328: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b132c: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1330: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b1333: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1337: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b133b: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b133e: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1343: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1346: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b134b: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b134e: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1351: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1355: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1358: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b135e: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1363: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1367: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b136a: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1370: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1374: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1378: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b137c: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1382: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1386: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b138a: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b138e: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1394: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1398: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b139c: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b13a0: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b13a4: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b13a8: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b13ac: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b13b0: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b13b3: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b13b8: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b13bb: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b13c0: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b13c3: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b13c6: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b13ca: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b13cd: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b13d3: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b13d8: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b13dc: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b13df: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b13e5: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b13e9: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b13ed: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b13f1: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b13f7: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b13fb: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b13ff: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1403: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1409: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b140d: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1411: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1415: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1419: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b141d: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1421: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b1425: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1428: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b142d: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1430: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1435: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1438: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b143b: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b143f: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1442: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1448: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b144d: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1451: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1454: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b145a: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b145e: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1462: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1466: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b146c: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1470: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1474: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1478: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b147e: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1482: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1486: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b148a: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
    /* 008b148e: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1492: movd mm1, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)v; }
    /* 008b1496: movq mm2, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b1499: movd mm3, dword ptr [ecx + 8] */ { u64 v = R32((u32)(r_ecx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008b149d: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b14a1: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b14a5: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b14a9: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
    /* 008b14ad: jmp 0x8b1684 */ goto L_008b1684;
L_008b14b2:; BB(0x008b14b2);
    /* 008b14b2: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b14b5: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b14b9: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b14bd: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b14c0: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b14c5: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b14c8: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b14cd: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b14d0: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b14d3: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b14d7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b14da: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b14e0: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b14e5: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b14e9: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b14ec: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b14f2: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b14f6: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b14fa: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b14fe: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1504: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1508: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b150c: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1510: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1516: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b151a: movq mm0, qword ptr [eax + 0x10] */ { MM64 r; r.q = R64((u32)(r_eax+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b151e: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1522: movq mm1, qword ptr [eax + 0x18] */ { MM64 r; r.q = R64((u32)(r_eax+0x18u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b1526: movq qword ptr [eax], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax), r.q); }
    /* 008b1529: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b152d: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008b1531: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1534: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1539: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b153c: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b1541: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b1544: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1547: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b154b: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b154e: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b1554: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1559: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b155d: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1560: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1566: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b156a: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b156e: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b1572: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1578: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b157c: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b1580: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b1584: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b158a: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b158e: movq mm0, qword ptr [eax + 0x20] */ { MM64 r; r.q = R64((u32)(r_eax+0x20u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1592: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b1596: movq mm1, qword ptr [eax + 0x28] */ { MM64 r; r.q = R64((u32)(r_eax+0x28u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b159a: movq qword ptr [eax + 0x10], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x10u), r.q); }
    /* 008b159e: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b15a2: movq qword ptr [eax + 0x18], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x18u), r.q); }
    /* 008b15a6: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b15a9: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b15ae: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b15b1: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b15b6: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b15b9: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b15bc: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b15c0: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b15c3: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b15c9: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b15ce: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b15d2: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b15d5: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b15db: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b15df: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b15e3: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b15e7: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b15ed: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b15f1: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b15f5: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b15f9: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b15ff: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1603: movq mm0, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b1607: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b160b: movq mm1, qword ptr [eax + 0x38] */ { MM64 r; r.q = R64((u32)(r_eax+0x38u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008b160f: movq qword ptr [eax + 0x20], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x20u), r.q); }
    /* 008b1613: movq mm4, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[4] = (long double)(i64)(r.q); }
    /* 008b1617: movq qword ptr [eax + 0x28], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x28u), r.q); }
    /* 008b161b: punpckhdq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b161e: movq mm5, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008b1623: punpckhdq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b1626: movq mm6, qword ptr [esp + 0x20] */ { MM64 r; r.q = R64((u32)(r_esp+0x20u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008b162b: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008b162e: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008b1631: pfmul mm4, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008b1635: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008b1638: pfmul mm0, qword ptr [esp + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x8u))); fpr[0] = (long double)(i64)(r); }
    /* 008b163e: movq mm7, qword ptr [esp + 0x30] */ { MM64 r; r.q = R64((u32)(r_esp+0x30u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008b1643: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008b1647: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008b164a: pfmul mm2, qword ptr [esp + 0x18] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_esp+0x18u))); fpr[2] = (long double)(i64)(r); }
    /* 008b1650: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008b1654: pfmul mm6, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008b1658: pfadd mm2, mm0 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008b165c: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008b1662: pfadd mm6, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008b1666: pfmul mm7, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008b166a: pfadd mm2, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008b166e: pfmul mm3, qword ptr [esp + 0x38] */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], R64((u32)(r_esp+0x38u))); fpr[3] = (long double)(i64)(r); }
    /* 008b1674: pfadd mm7, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[7], (u64)(i64)fpr[6]); fpr[7] = (long double)(i64)(r); }
    /* 008b1678: pfadd mm3, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008b167c: movq qword ptr [eax + 0x30], mm7 */ { MM64 r; r.q = (u64)(i64)fpr[7]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b1680: movq qword ptr [eax + 0x38], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x38u), r.q); }
L_008b1684:; BB(0x008b1684);
    /* 008b1684: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008b1688: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008b168a: je 0x8b16ab */ if (fZ) goto L_008b16ab;
L_008b168c:; BB(0x008b168c);
    /* 008b168c: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008b168f: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008b1693: movq mm2, qword ptr [eax + 0x30] */ { MM64 r; r.q = R64((u32)(r_eax+0x30u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008b1697: movd mm3, dword ptr [eax + 0x38] */ { u64 v = R32((u32)(r_eax+0x38u)); fpr[3] = (long double)(i64)v; }
    /* 008b169b: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008b169f: pfadd mm1, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008b16a3: movq qword ptr [eax + 0x30], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax+0x30u), r.q); }
    /* 008b16a7: movd dword ptr [eax + 0x38], mm1 */ W32((u32)(r_eax+0x38u), (u32)(u64)(i64)fpr[1]);
L_008b16ab:; BB(0x008b16ab);
    /* 008b16ab: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008b16ae: femms  */ ; /* the MMX tag state is not modelled */
    /* 008b16b0: ret 0x14 */ FN_RET(0x008b117f); r_esp += 24; return;
}

