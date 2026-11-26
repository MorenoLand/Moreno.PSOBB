#include "protos.h"

void f_008ae030(void) /* ?x3d_D3DXQuaternionMultiply@@YGPAUD3DXQUATERNION@@PAU1@PBU1@1@Z */
{
    FN_ENTER(0x008ae030);
    /* 008ae030: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 008ae034: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008ae038: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008ae03b: movq mm3, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)(r.q); }
    /* 008ae03f: movq mm4, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae042: movq mm5, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae045: movq mm0, qword ptr [eax] */ { MM64 r; r.q = R64((u32)(r_eax)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae048: punpckhdq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae04b: punpckhdq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae04e: movq mm1, qword ptr [eax + 8] */ { MM64 r; r.q = R64((u32)(r_eax+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008ae052: punpckldq mm4, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae055: punpckldq mm5, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae058: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae05c: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae05f: movq mm7, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae062: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008ae066: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae06d: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008ae071: pxor mm2, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae078: pfmul mm5, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[0]); fpr[5] = (long double)(i64)(r); }
    /* 008ae07c: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008ae080: pfadd mm2, mm3 */ { u64 r = rt_pf_add((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008ae084: movq mm3, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[3] = (long double)(i64)(r.q); }
    /* 008ae087: pfsub mm4, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[4], (u64)(i64)fpr[5]); fpr[4] = (long double)(i64)(r); }
    /* 008ae08b: movq mm5, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008ae08f: pfmul mm7, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008ae093: pxor mm6, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae09a: pfacc mm4, mm2 */ { u64 r = rt_pf_acc((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae09e: pfmul mm6, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008ae0a2: pxor mm5, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae0a9: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008ae0ad: movq qword ptr [eax], mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; W64((u32)(r_eax), r.q); }
    /* 008ae0b0: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008ae0b4: pfadd mm6, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[6], (u64)(i64)fpr[7]); fpr[6] = (long double)(i64)(r); }
    /* 008ae0b8: pfsub mm5, mm3 */ { u64 r = rt_pf_sub((u64)(i64)fpr[5], (u64)(i64)fpr[3]); fpr[5] = (long double)(i64)(r); }
    /* 008ae0bc: pfacc mm6, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[6], (u64)(i64)fpr[5]); fpr[6] = (long double)(i64)(r); }
    /* 008ae0c0: movq qword ptr [eax + 8], mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae0c4: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae0c6: ret 0xc */ FN_RET(0x008ae030); r_esp += 16; return;
}

void f_008ae0c9(void) /* ?x3d_D3DXQuaternionNormalize@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ae0c9);
    /* 008ae0c9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ae0cd: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae0d0: movq mm2, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008ae0d4: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae0d7: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008ae0db: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae0de: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae0e2: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008ae0e6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae0ea: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008ae0ee: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae0f1: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae0f5: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008ae0fd: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae100: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae104: pfrsqit1 mm0, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008ae108: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae10b: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae10e: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae112: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008ae116: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008ae11a: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae11d: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae121: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae123: ret 8 */ FN_RET(0x008ae0c9); r_esp += 12; return;
}

void f_008ae126(void) /* ?x3d_D3DXQuaternionToAxisAngle@@YGXPBUD3DXQUATERNION@@PAUD3DXVECTOR3@@PAM@Z */
{
    FN_ENTER(0x008ae126);
    /* 008ae126: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae129: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008ae12d: movq mm7, qword ptr [0x99dc90] */ { MM64 r; r.q = R64((u32)(0x99dc90u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008ae134: movq mm5, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[5] = (long double)(i64)(r.q); }
    /* 008ae137: movq mm1, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[1] = (long double)(i64)(r.q); }
    /* 008ae13b: movq mm2, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae13e: pfmul mm5, mm5 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008ae142: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae145: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 008ae149: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008ae14d: pfadd mm5, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008ae151: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008ae154: pfacc mm5, mm5 */ { u64 r = rt_pf_acc((u64)(i64)fpr[5], (u64)(i64)fpr[5]); fpr[5] = (long double)(i64)(r); }
    /* 008ae158: pfcmpge mm7, mm5 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[7], (u64)(i64)fpr[5]); fpr[7] = (long double)(i64)(r); }
    /* 008ae15c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008ae160: pfrsqrt mm1, mm5 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008ae164: movd eax, mm7 */ r_eax = (u32)(u64)(i64)fpr[7];
    /* 008ae167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae169: movq mm4, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae16c: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008ae170: jne 0x8ae1ae */ if (!fZ) goto L_008ae1ae;
L_008ae172:; BB(0x008ae172);
    /* 008ae172: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae174: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008ae178: je 0x8ae191 */ if (fZ) goto L_008ae191;
L_008ae17a:; BB(0x008ae17a);
    /* 008ae17a: pfrsqit1 mm1, mm5 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008ae17e: pfrcpit2 mm1, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae182: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
    /* 008ae186: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008ae18a: movq qword ptr [edx], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_edx), r.q); }
    /* 008ae18d: movd dword ptr [edx + 8], mm1 */ W32((u32)(r_edx+0x8u), (u32)(u64)(i64)fpr[1]);
L_008ae191:; BB(0x008ae191);
    /* 008ae191: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae193: je 0x8ae1ca */ if (fZ) goto L_008ae1ca;
L_008ae195:; BB(0x008ae195);
    /* 008ae195: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae198: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8ae19du); f_008bb080();
    /* 008ae19d: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 008ae1a1: pfmul mm0, qword ptr [0x99dc28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dc28u))); fpr[0] = (long double)(i64)(r); }
    /* 008ae1a9: movd dword ptr [ecx], mm0 */ W32((u32)(r_ecx), (u32)(u64)(i64)fpr[0]);
    /* 008ae1ac: jmp 0x8ae1ca */ goto L_008ae1ca;
L_008ae1ae:; BB(0x008ae1ae);
    /* 008ae1ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae1b0: pxor mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae1b3: je 0x8ae1c3 */ if (fZ) goto L_008ae1c3;
L_008ae1b5:; BB(0x008ae1b5);
    /* 008ae1b5: movq mm0, qword ptr [0x99dc10] */ { MM64 r; r.q = R64((u32)(0x99dc10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae1bc: movq qword ptr [edx + 4], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_edx+0x4u), r.q); }
    /* 008ae1c0: movd dword ptr [edx], mm0 */ W32((u32)(r_edx), (u32)(u64)(i64)fpr[0]);
L_008ae1c3:; BB(0x008ae1c3);
    /* 008ae1c3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae1c5: je 0x8ae1ca */ if (fZ) goto L_008ae1ca;
L_008ae1c7:; BB(0x008ae1c7);
    /* 008ae1c7: movd dword ptr [ecx], mm1 */ W32((u32)(r_ecx), (u32)(u64)(i64)fpr[1]);
L_008ae1ca:; BB(0x008ae1ca);
    /* 008ae1ca: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008ae1cd: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008ae1d1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae1d4: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae1d6: ret 0xc */ FN_RET(0x008ae126); r_esp += 16; return;
}

void f_008ae1d9(void) /* ?x3d_D3DXQuaternionRotationMatrix@@YGPAUD3DXQUATERNION@@PAU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ae1d9);
    /* 008ae1d9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ae1dd: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae1e0: pxor mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae1e3: movd mm4, dword ptr [edx + 0x14] */ { u64 v = R32((u32)(r_edx+0x14u)); fpr[4] = (long double)(i64)v; }
    /* 008ae1e7: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae1ea: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae1ed: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae1f0: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae1f4: movd mm5, dword ptr [edx + 0x28] */ { u64 v = R32((u32)(r_edx+0x28u)); fpr[5] = (long double)(i64)v; }
    /* 008ae1f8: pfsub mm1, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae1fc: pfsubr mm2, mm4 */ { u64 r = rt_pf_subr((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae200: pfsubr mm3, mm5 */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008ae204: pfadd mm0, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008ae208: pfsub mm1, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008ae20c: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008ae210: movq mm5, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008ae214: pfsub mm3, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae218: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae21b: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae21e: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae221: punpckldq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae224: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae227: pfcmpge mm6, mm0 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008ae22b: pfcmpge mm7, mm3 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008ae22f: packssdw mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[6] = (long double)(i64)(r.q); }
    /* 008ae232: packsswb mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.b[0] = (u8)rt_sat8((i32)(i16)a.w[0]); r.b[4] = (u8)rt_sat8((i32)(i16)b.w[0]); r.b[1] = (u8)rt_sat8((i32)(i16)a.w[1]); r.b[5] = (u8)rt_sat8((i32)(i16)b.w[1]); r.b[2] = (u8)rt_sat8((i32)(i16)a.w[2]); r.b[6] = (u8)rt_sat8((i32)(i16)b.w[2]); r.b[3] = (u8)rt_sat8((i32)(i16)a.w[3]); r.b[7] = (u8)rt_sat8((i32)(i16)b.w[3]); fpr[6] = (long double)(i64)(r.q); }
    /* 008ae235: movd ecx, mm6 */ r_ecx = (u32)(u64)(i64)fpr[6];
    /* 008ae238: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ae23e: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae241: mov eax, ecx */ r_eax = r_ecx;
    /* 008ae243: jne 0x8ae2aa */ if (!fZ) goto L_008ae2aa;
L_008ae245:; BB(0x008ae245);
    /* 008ae245: pfadd mm0, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(0x99dc10u))); fpr[0] = (long double)(i64)(r); }
    /* 008ae24d: movd mm3, dword ptr [edx + 0x18] */ { u64 v = R32((u32)(r_edx+0x18u)); fpr[3] = (long double)(i64)v; }
    /* 008ae251: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008ae255: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae259: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae25c: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae25f: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae262: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae265: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae269: punpckhdq mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae26c: movd mm6, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[6] = (long double)(i64)v; }
    /* 008ae270: pfrsqit1 mm4, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae274: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae277: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008ae27b: pfrcpit2 mm4, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae27f: pfsub mm1, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008ae283: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae28b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae28f: pfmul mm0, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae293: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae297: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae29b: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae29e: movq qword ptr [eax], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax), r.q); }
    /* 008ae2a1: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae2a5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae2a7: ret 8 */ FN_RET(0x008ae1d9); r_esp += 12; return;
L_008ae2aa:; BB(0x008ae2aa);
    /* 008ae2aa: and eax, 0xff00ff00 */ {  u32 a = r_eax; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ae2af: cmp eax, 0xff00ff00 */ {  u32 a = r_eax; u32 b = 0xff00ff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ae2b4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae2b8: jne 0x8ae323 */ if (!fZ) goto L_008ae323;
L_008ae2ba:; BB(0x008ae2ba);
    /* 008ae2ba: pfadd mm1, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[1], R64((u32)(0x99dc10u))); fpr[1] = (long double)(i64)(r); }
    /* 008ae2c2: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae2c5: pfrsqrt mm4, mm1 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae2c9: movd mm3, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[3] = (long double)(i64)v; }
    /* 008ae2cd: movq mm0, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae2d0: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae2d4: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae2d7: punpckldq mm5, dword ptr [edx + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edx+0x18u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae2db: pfsub mm3, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae2df: pfrsqit1 mm4, mm1 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008ae2e3: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008ae2e7: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae2ea: pfrcpit2 mm4, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae2ee: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae2f1: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae2f9: pxor mm7, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae300: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae304: pfadd mm5, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008ae308: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae30c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae310: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008ae314: punpckldq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae317: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae31b: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae31e: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae320: ret 8 */ FN_RET(0x008ae1d9); r_esp += 12; return;
L_008ae323:; BB(0x008ae323);
    /* 008ae323: test ecx, 0x10000 */ {  u32 a = r_ecx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ae329: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae32d: je 0x8ae397 */ if (fZ) goto L_008ae397;
L_008ae32f:; BB(0x008ae32f);
    /* 008ae32f: pfadd mm2, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[2], R64((u32)(0x99dc10u))); fpr[2] = (long double)(i64)(r); }
    /* 008ae337: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae33a: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae33d: pfrsqrt mm4, mm2 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae341: movd mm3, dword ptr [edx + 0x18] */ { u64 v = R32((u32)(r_edx+0x18u)); fpr[3] = (long double)(i64)v; }
    /* 008ae345: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae348: movq mm0, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae34b: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae34f: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae352: punpckldq mm6, dword ptr [edx + 8] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_edx+0x8u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae356: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae359: pfrsqit1 mm4, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae35d: movd mm7, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[7] = (long double)(i64)v; }
    /* 008ae361: pfrcpit2 mm4, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae365: pxor mm6, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae36c: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008ae370: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae378: pfadd mm3, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008ae37c: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae380: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae384: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae388: punpckldq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae38b: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae38f: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae392: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae394: ret 8 */ FN_RET(0x008ae1d9); r_esp += 12; return;
L_008ae397:; BB(0x008ae397);
    /* 008ae397: pfadd mm3, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(0x99dc10u))); fpr[3] = (long double)(i64)(r); }
    /* 008ae39f: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae3a2: pfrsqrt mm2, mm3 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae3a6: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008ae3aa: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae3ad: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae3b0: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae3b4: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae3b7: punpckldq mm5, dword ptr [edx + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edx+0x18u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae3bb: punpckldq mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae3be: pfrsqit1 mm2, mm3 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008ae3c2: movd mm7, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[7] = (long double)(i64)v; }
    /* 008ae3c6: pfrcpit2 mm2, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008ae3ca: pfsub mm1, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008ae3ce: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008ae3d2: pfmul mm2, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(0x99dc88u))); fpr[2] = (long double)(i64)(r); }
    /* 008ae3da: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae3de: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008ae3e2: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008ae3e6: punpckldq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae3e9: movq qword ptr [eax], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax), r.q); }
    /* 008ae3ec: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae3f0: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae3f2: ret 8 */ FN_RET(0x008ae1d9); r_esp += 12; return;
}

void f_008ae3f5(void) /* ?x3d_D3DXQuaternionRotationMatrix_K7@@YGPAUD3DXQUATERNION@@PAU1@PBUD3DXMATRIX@@@Z */
{
    FN_ENTER(0x008ae3f5);
    /* 008ae3f5: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ae3f9: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae3fc: pxor mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae3ff: movd mm4, dword ptr [edx + 0x14] */ { u64 v = R32((u32)(r_edx+0x14u)); fpr[4] = (long double)(i64)v; }
    /* 008ae403: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae406: movq mm2, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae409: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae40c: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae410: movd mm5, dword ptr [edx + 0x28] */ { u64 v = R32((u32)(r_edx+0x28u)); fpr[5] = (long double)(i64)v; }
    /* 008ae414: pfsub mm1, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae418: pfsubr mm2, mm4 */ { u64 r = rt_pf_subr((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae41c: pfsubr mm3, mm5 */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008ae420: pfadd mm0, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[5]); fpr[0] = (long double)(i64)(r); }
    /* 008ae424: pfsub mm1, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[5]); fpr[1] = (long double)(i64)(r); }
    /* 008ae428: pfsub mm2, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[2], (u64)(i64)fpr[5]); fpr[2] = (long double)(i64)(r); }
    /* 008ae42c: movq mm5, qword ptr [edx + 0x20] */ { MM64 r; r.q = R64((u32)(r_edx+0x20u)); fpr[5] = (long double)(i64)(r.q); }
    /* 008ae430: pfsub mm3, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae434: punpckldq mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae437: movq mm7, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae43a: punpckldq mm6, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae43d: punpckldq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae440: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae443: pfcmpge mm6, mm0 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[6], (u64)(i64)fpr[0]); fpr[6] = (long double)(i64)(r); }
    /* 008ae447: pfcmpge mm7, mm3 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[7], (u64)(i64)fpr[3]); fpr[7] = (long double)(i64)(r); }
    /* 008ae44b: packssdw mm6, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = (u16)rt_sat16((i32)a.d[0]); r.w[2] = (u16)rt_sat16((i32)b.d[0]); r.w[1] = (u16)rt_sat16((i32)a.d[1]); r.w[3] = (u16)rt_sat16((i32)b.d[1]); fpr[6] = (long double)(i64)(r.q); }
    /* 008ae44e: pmovmskb ecx, mm6 */ r_ecx = ((u32)((u8)(((u64)(i64)fpr[6]) >> (0*8)) >> 7) << 0) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (1*8)) >> 7) << 1) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (2*8)) >> 7) << 2) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (3*8)) >> 7) << 3) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (4*8)) >> 7) << 4) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (5*8)) >> 7) << 5) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (6*8)) >> 7) << 6) | ((u32)((u8)(((u64)(i64)fpr[6]) >> (7*8)) >> 7) << 7);
    /* 008ae451: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ae457: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae45a: mov eax, ecx */ r_eax = r_ecx;
    /* 008ae45c: jne 0x8ae4c3 */ if (!fZ) goto L_008ae4c3;
L_008ae45e:; BB(0x008ae45e);
    /* 008ae45e: pfadd mm0, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[0], R64((u32)(0x99dc10u))); fpr[0] = (long double)(i64)(r); }
    /* 008ae466: movd mm3, dword ptr [edx + 0x18] */ { u64 v = R32((u32)(r_edx+0x18u)); fpr[3] = (long double)(i64)v; }
    /* 008ae46a: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008ae46e: pfrsqrt mm4, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae472: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae475: punpckldq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae478: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae47b: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae47e: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae482: punpckhdq mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae485: movd mm6, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[6] = (long double)(i64)v; }
    /* 008ae489: pfrsqit1 mm4, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae48d: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae490: pfsub mm3, mm5 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008ae494: pfrcpit2 mm4, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae498: pfsub mm1, mm6 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[6]); fpr[1] = (long double)(i64)(r); }
    /* 008ae49c: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae4a4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae4a8: pfmul mm0, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae4ac: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae4b0: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae4b4: punpckldq mm1, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae4b7: movq qword ptr [eax], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax), r.q); }
    /* 008ae4ba: movq qword ptr [eax + 8], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae4be: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae4c0: ret 8 */ FN_RET(0x008ae3f5); r_esp += 12; return;
L_008ae4c3:; BB(0x008ae4c3);
    /* 008ae4c3: and eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008ae4c8: cmp eax, 0xcc */ {  u32 a = r_eax; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008ae4cd: jne 0x8ae538 */ if (!fZ) goto L_008ae538;
L_008ae4cf:; BB(0x008ae4cf);
    /* 008ae4cf: pfadd mm1, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[1], R64((u32)(0x99dc10u))); fpr[1] = (long double)(i64)(r); }
    /* 008ae4d7: punpckhdq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae4da: pfrsqrt mm4, mm1 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae4de: movd mm3, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[3] = (long double)(i64)v; }
    /* 008ae4e2: movq mm0, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae4e5: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae4e9: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae4ec: punpckldq mm5, dword ptr [edx + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edx+0x18u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae4f0: pfsub mm3, mm2 */ { u64 r = rt_pf_sub((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae4f4: pfrsqit1 mm4, mm1 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
    /* 008ae4f8: movd mm7, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[7] = (long double)(i64)v; }
    /* 008ae4fc: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae4ff: pfrcpit2 mm4, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae503: punpckldq mm7, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae506: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae50e: pxor mm7, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae515: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae519: pfadd mm5, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[7]); fpr[5] = (long double)(i64)(r); }
    /* 008ae51d: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae521: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae525: pfmul mm5, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008ae529: punpckldq mm1, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae52c: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae530: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae533: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae535: ret 8 */ FN_RET(0x008ae3f5); r_esp += 12; return;
L_008ae538:; BB(0x008ae538);
    /* 008ae538: test ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008ae53e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae542: je 0x8ae5ac */ if (fZ) goto L_008ae5ac;
L_008ae544:; BB(0x008ae544);
    /* 008ae544: pfadd mm2, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[2], R64((u32)(0x99dc10u))); fpr[2] = (long double)(i64)(r); }
    /* 008ae54c: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae54f: movq mm6, mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae552: pfrsqrt mm4, mm2 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae556: movd mm3, dword ptr [edx + 0x18] */ { u64 v = R32((u32)(r_edx+0x18u)); fpr[3] = (long double)(i64)v; }
    /* 008ae55a: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae55d: movq mm0, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae560: pfmul mm4, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae564: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae567: punpckldq mm6, dword ptr [edx + 8] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_edx+0x8u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae56b: punpckldq mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae56e: pfrsqit1 mm4, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae572: movd mm7, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[7] = (long double)(i64)v; }
    /* 008ae576: pfrcpit2 mm4, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[0]); fpr[4] = (long double)(i64)(r); }
    /* 008ae57a: pxor mm6, qword ptr [0x99dc40] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(0x99dc40u)); MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae581: pfadd mm1, mm7 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008ae585: pfmul mm4, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(0x99dc88u))); fpr[4] = (long double)(i64)(r); }
    /* 008ae58d: pfadd mm3, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[6]); fpr[3] = (long double)(i64)(r); }
    /* 008ae591: pfmul mm1, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[4]); fpr[1] = (long double)(i64)(r); }
    /* 008ae595: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae599: pfmul mm3, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae59d: punpckldq mm1, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae5a0: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae5a4: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae5a7: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae5a9: ret 8 */ FN_RET(0x008ae3f5); r_esp += 12; return;
L_008ae5ac:; BB(0x008ae5ac);
    /* 008ae5ac: pfadd mm3, qword ptr [0x99dc10] */ { u64 r = rt_pf_add((u64)(i64)fpr[3], R64((u32)(0x99dc10u))); fpr[3] = (long double)(i64)(r); }
    /* 008ae5b4: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae5b7: pfrsqrt mm2, mm3 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae5bb: movd mm4, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[4] = (long double)(i64)v; }
    /* 008ae5bf: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae5c2: movq mm0, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae5c5: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae5c9: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae5cc: punpckldq mm5, dword ptr [edx + 0x18] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_edx+0x18u)); MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae5d0: punpckldq mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae5d3: pfrsqit1 mm2, mm3 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008ae5d7: movd mm7, dword ptr [edx + 0x10] */ { u64 v = R32((u32)(r_edx+0x10u)); fpr[7] = (long double)(i64)v; }
    /* 008ae5db: pfrcpit2 mm2, mm0 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[2], (u64)(i64)fpr[0]); fpr[2] = (long double)(i64)(r); }
    /* 008ae5df: pfsub mm1, mm7 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[7]); fpr[1] = (long double)(i64)(r); }
    /* 008ae5e3: pfadd mm5, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[4]); fpr[5] = (long double)(i64)(r); }
    /* 008ae5e7: pfmul mm2, qword ptr [0x99dc88] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(0x99dc88u))); fpr[2] = (long double)(i64)(r); }
    /* 008ae5ef: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae5f3: pfmul mm1, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008ae5f7: pfmul mm5, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[2]); fpr[5] = (long double)(i64)(r); }
    /* 008ae5fb: punpckldq mm3, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae5fe: movq qword ptr [eax], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax), r.q); }
    /* 008ae601: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae605: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae607: ret 8 */ FN_RET(0x008ae3f5); r_esp += 12; return;
}

void f_008ae60a(void) /* ?x3d_D3DXQuaternionRotationYawPitchRoll@@YGPAUD3DXQUATERNION@@PAU1@MMM@Z */
{
    FN_ENTER(0x008ae60a);
    /* 008ae60a: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae60c: movq mm0, qword ptr [0x99dcb0] */ { MM64 r; r.q = R64((u32)(0x99dcb0u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae613: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008ae614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008ae615: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae618: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae61b: pfmul mm0, qword ptr [esp + 0x30] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_esp+0x30u))); fpr[0] = (long double)(i64)(r); }
    /* 008ae621: pfmul mm1, qword ptr [esp + 0x28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp+0x28u))); fpr[1] = (long double)(i64)(r); }
    /* 008ae627: movq qword ptr [esp + 0x10], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_esp+0x10u), r.q); }
    /* 008ae62c: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8ae631u); f_008bb660();
    /* 008ae631: movq qword ptr [esp], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp), r.q); }
    /* 008ae635: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae63a: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae63d: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8ae642u); f_008bb660();
    /* 008ae642: movq qword ptr [esp + 8], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_esp+0x8u), r.q); }
    /* 008ae647: movq mm0, qword ptr [esp + 0x10] */ { MM64 r; r.q = R64((u32)(r_esp+0x10u)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae64c: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8ae651u); f_008bb660();
    /* 008ae651: movq mm1, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[1] = (long double)(i64)(r.q); }
    /* 008ae655: movq mm2, qword ptr [esp + 8] */ { MM64 r; r.q = R64((u32)(r_esp+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008ae65a: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008ae65e: movq mm7, qword ptr [0x99dca0] */ { MM64 r; r.q = R64((u32)(0x99dca0u)); fpr[7] = (long double)(i64)(r.q); }
    /* 008ae665: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae668: movq mm4, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae66b: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae66e: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae671: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae674: punpckhdq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae677: punpckhdq mm5, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae67a: pxor mm0, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae67d: psrlq mm7, 0x20 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(TEB)); MM64 r; u32 c = 0x20u; r.q = c > 63 ? 0 : (a.q >> c); fpr[7] = (long double)(i64)(r.q); }
    /* 008ae681: movq mm6, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae684: punpckldq mm2, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae687: punpckhdq mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae68a: pxor mm5, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae68d: pfmul mm0, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[6]); fpr[0] = (long double)(i64)(r); }
    /* 008ae691: pfmul mm3, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae695: pfmul mm4, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae699: pfmul mm5, mm6 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008ae69d: movq mm7, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae6a0: punpckhdq mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae6a3: punpckldq mm7, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae6a6: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae6aa: pfmul mm3, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[7]); fpr[3] = (long double)(i64)(r); }
    /* 008ae6ae: pfmul mm4, mm7 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[7]); fpr[4] = (long double)(i64)(r); }
    /* 008ae6b2: pfmul mm5, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], (u64)(i64)fpr[1]); fpr[5] = (long double)(i64)(r); }
    /* 008ae6b6: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae6ba: pfadd mm3, mm5 */ { u64 r = rt_pf_add((u64)(i64)fpr[3], (u64)(i64)fpr[5]); fpr[3] = (long double)(i64)(r); }
    /* 008ae6be: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008ae6c1: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae6c5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae6c7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae6ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008ae6cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008ae6cc: ret 0x10 */ FN_RET(0x008ae60a); r_esp += 20; return;
}

void f_008ae6cf(void) /* ?x3d_D3DXQuaternionRotationAxis@@YGPAUD3DXQUATERNION@@PAU1@PBUD3DXVECTOR3@@M@Z */
{
    FN_ENTER(0x008ae6cf);
    /* 008ae6cf: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae6d2: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008ae6d6: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 008ae6da: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 008ae6de: mov ebp, esp */ r_ebp = r_esp;
    /* 008ae6e0: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ae6e3: mov edx, esp */ r_edx = r_esp;
    /* 008ae6e5: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae6e7: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae6ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ae6eb: call 0x8b3422 */ r_esp -= 4; W32(r_esp, 0x8ae6f0u); f_008b3422();
    /* 008ae6f0: movd mm0, dword ptr [ebp + 0x24] */ { u64 v = R32((u32)(r_ebp+0x24u)); fpr[0] = (long double)(i64)v; }
    /* 008ae6f4: pfmul mm0, qword ptr [0x99dcb0] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(0x99dcb0u))); fpr[0] = (long double)(i64)(r); }
    /* 008ae6fc: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8ae701u); f_008bb660();
    /* 008ae701: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 008ae704: movq mm1, qword ptr [esp] */ { MM64 r; r.q = R64((u32)(r_esp)); fpr[1] = (long double)(i64)(r.q); }
    /* 008ae708: movd mm2, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[2] = (long double)(i64)v; }
    /* 008ae70d: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae710: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae713: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008ae717: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
    /* 008ae71b: punpckldq mm2, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae71e: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae721: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae725: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae727: mov esp, ebp */ r_esp = r_ebp;
    /* 008ae729: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008ae72d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008ae731: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 008ae735: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae738: ret 0xc */ FN_RET(0x008ae6cf); r_esp += 16; return;
}

void f_008ae73b(void) /* ?x3d_D3DXQuaternionSlerp@@YGPAUD3DXQUATERNION@@PAU1@PBU1@1M@Z */
{
    FN_ENTER(0x008ae73b);
    /* 008ae73b: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae73d: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae740: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008ae744: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 008ae748: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008ae74c: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008ae750: movd mm0, dword ptr [0x99dca8] */ { u64 v = R32((u32)(0x99dca8u)); fpr[0] = (long double)(i64)v; }
    /* 008ae757: movq mm1, qword ptr [ecx] */ { MM64 r; r.q = R64((u32)(r_ecx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008ae75a: pfmul mm1, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_edx))); fpr[1] = (long double)(i64)(r); }
    /* 008ae75e: movq mm2, qword ptr [ecx + 8] */ { MM64 r; r.q = R64((u32)(r_ecx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008ae762: pfmul mm2, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], R64((u32)(r_edx+0x8u))); fpr[2] = (long double)(i64)(r); }
    /* 008ae767: pfadd mm1, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008ae76b: pxor mm7, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae76e: movd mm4, dword ptr [esp + 0x28] */ { u64 v = R32((u32)(r_esp+0x28u)); fpr[4] = (long double)(i64)v; }
    /* 008ae773: pfsub mm0, mm4 */ { u64 r = rt_pf_sub((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae777: pfacc mm1, mm1 */ { u64 r = rt_pf_acc((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008ae77b: pfcmpge mm7, mm1 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[7], (u64)(i64)fpr[1]); fpr[7] = (long double)(i64)(r); }
    /* 008ae77f: movq mm6, qword ptr [0x99dd08] */ { MM64 r; r.q = R64((u32)(0x99dd08u)); fpr[6] = (long double)(i64)(r.q); }
    /* 008ae786: pand mm7, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q & b.q; fpr[7] = (long double)(i64)(r.q); }
    /* 008ae78d: pxor mm1, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae790: pfcmpge mm6, mm1 */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[6], (u64)(i64)fpr[1]); fpr[6] = (long double)(i64)(r); }
    /* 008ae794: movd eax, mm6 */ r_eax = (u32)(u64)(i64)fpr[6];
    /* 008ae797: movq mm3, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae79a: pfmul mm3, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[3]); fpr[3] = (long double)(i64)(r); }
    /* 008ae79e: pfsubr mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_subr((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008ae7a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008ae7a8: je 0x8ae826 */ if (fZ) goto L_008ae826;
L_008ae7aa:; BB(0x008ae7aa);
    /* 008ae7aa: pfrsqrt mm4, mm3 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae7ae: movq mm2, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[2] = (long double)(i64)(r.q); }
    /* 008ae7b1: movd dword ptr [esp + 0xc], mm7 */ W32((u32)(r_esp+0xcu), (u32)(u64)(i64)fpr[7]);
    /* 008ae7b6: pfmul mm2, mm4 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[4]); fpr[2] = (long double)(i64)(r); }
    /* 008ae7ba: pfrsqit1 mm3, mm2 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[3], (u64)(i64)fpr[2]); fpr[3] = (long double)(i64)(r); }
    /* 008ae7be: pfrcpit2 mm3, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[3], (u64)(i64)fpr[4]); fpr[3] = (long double)(i64)(r); }
    /* 008ae7c2: pfrcp mm2, mm3 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae7c6: movq mm4, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae7c9: pfrcpit1 mm4, mm2 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae7cd: pfrcpit2 mm4, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[4], (u64)(i64)fpr[2]); fpr[4] = (long double)(i64)(r); }
    /* 008ae7d1: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008ae7d5: movd dword ptr [esp + 4], mm3 */ W32((u32)(r_esp+0x4u), (u32)(u64)(i64)fpr[3]);
    /* 008ae7da: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae7dd: movq mm1, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae7e0: call 0x8baf80 */ r_esp -= 4; W32(r_esp, 0x8ae7e5u); f_008baf80();
    /* 008ae7e5: movd mm1, dword ptr [esp + 0x28] */ { u64 v = R32((u32)(r_esp+0x28u)); fpr[1] = (long double)(i64)v; }
    /* 008ae7ea: movd dword ptr [esp + 8], mm0 */ W32((u32)(r_esp+0x8u), (u32)(u64)(i64)fpr[0]);
    /* 008ae7ef: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae7f3: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8ae7f8u); f_008bb780();
    /* 008ae7f8: movd dword ptr [esp + 0x28], mm0 */ W32((u32)(r_esp+0x28u), (u32)(u64)(i64)fpr[0]);
    /* 008ae7fd: movd mm1, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[1] = (long double)(i64)v; }
    /* 008ae801: movd mm0, dword ptr [esp + 8] */ { u64 v = R32((u32)(r_esp+0x8u)); fpr[0] = (long double)(i64)v; }
    /* 008ae806: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae80a: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8ae80fu); f_008bb780();
    /* 008ae80f: movd mm4, dword ptr [esp + 0x28] */ { u64 v = R32((u32)(r_esp+0x28u)); fpr[4] = (long double)(i64)v; }
    /* 008ae814: movd mm1, dword ptr [esp + 4] */ { u64 v = R32((u32)(r_esp+0x4u)); fpr[1] = (long double)(i64)v; }
    /* 008ae819: movd mm7, dword ptr [esp + 0xc] */ { u64 v = R32((u32)(r_esp+0xcu)); fpr[7] = (long double)(i64)v; }
    /* 008ae81e: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae822: pfmul mm4, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], (u64)(i64)fpr[1]); fpr[4] = (long double)(i64)(r); }
L_008ae826:; BB(0x008ae826);
    /* 008ae826: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008ae82a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 008ae82e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008ae832: pxor mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.q = a.q ^ b.q; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae835: punpckldq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[0] = (long double)(i64)(r.q); }
    /* 008ae838: punpckldq mm4, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[4] = (long double)(i64)(r.q); }
    /* 008ae83b: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae83e: movq mm6, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[6] = (long double)(i64)(r.q); }
    /* 008ae841: pfmul mm0, qword ptr [ecx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], R64((u32)(r_ecx))); fpr[0] = (long double)(i64)(r); }
    /* 008ae845: pfmul mm4, qword ptr [edx] */ { u64 r = rt_pf_mul((u64)(i64)fpr[4], R64((u32)(r_edx))); fpr[4] = (long double)(i64)(r); }
    /* 008ae849: pfmul mm5, qword ptr [ecx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[5], R64((u32)(r_ecx+0x8u))); fpr[5] = (long double)(i64)(r); }
    /* 008ae84e: pfmul mm6, qword ptr [edx + 8] */ { u64 r = rt_pf_mul((u64)(i64)fpr[6], R64((u32)(r_edx+0x8u))); fpr[6] = (long double)(i64)(r); }
    /* 008ae853: pfadd mm0, mm4 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae857: pfadd mm5, mm6 */ { u64 r = rt_pf_add((u64)(i64)fpr[5], (u64)(i64)fpr[6]); fpr[5] = (long double)(i64)(r); }
    /* 008ae85b: movq qword ptr [eax], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_eax), r.q); }
    /* 008ae85e: movq qword ptr [eax + 8], mm5 */ { MM64 r; r.q = (u64)(i64)fpr[5]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae862: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae864: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008ae868: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 008ae86c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae86f: ret 0x10 */ FN_RET(0x008ae73b); r_esp += 20; return;
}

void f_008ae872(void) /* ?x3d_D3DXQuaternionBaryCentric@@YGPAUD3DXQUATERNION@@PAU1@PBU1@11MM@Z */
{
    FN_ENTER(0x008ae872);
    /* 008ae872: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae875: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 008ae879: mov ebp, esp */ r_ebp = r_esp;
    /* 008ae87b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008ae87e: mov edx, esp */ r_edx = r_esp;
    /* 008ae880: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae882: movd mm0, dword ptr [ebp + 0x38] */ { u64 v = R32((u32)(r_ebp+0x38u)); fpr[0] = (long double)(i64)v; }
    /* 008ae886: movd mm1, dword ptr [ebp + 0x3c] */ { u64 v = R32((u32)(r_ebp+0x3cu)); fpr[1] = (long double)(i64)v; }
    /* 008ae88a: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae88e: movd dword ptr [ebp + 0x38], mm0 */ W32((u32)(r_ebp+0x38u), (u32)(u64)(i64)fpr[0]);
    /* 008ae892: sub esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae895: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008ae899: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae89c: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae89f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ae8a0: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae8a5u); f_008ae73b();
    /* 008ae8a5: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008ae8a9: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae8ac: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae8af: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae8b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008ae8b3: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae8b8u); f_008ae73b();
    /* 008ae8b8: movd mm0, dword ptr [ebp + 0x38] */ { u64 v = R32((u32)(r_ebp+0x38u)); fpr[0] = (long double)(i64)v; }
    /* 008ae8bc: movd mm1, dword ptr [ebp + 0x3c] */ { u64 v = R32((u32)(r_ebp+0x3cu)); fpr[1] = (long double)(i64)v; }
    /* 008ae8c0: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008ae8c4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 008ae8c7: pfrcp mm2, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae8cb: pfrcpit1 mm0, mm2 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008ae8cf: pfrcpit2 mm0, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008ae8d3: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008ae8d7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae8da: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008ae8de: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008ae8e1: movd dword ptr [esp + 8], mm0 */ W32((u32)(r_esp+0x8u), (u32)(u64)(i64)fpr[0]);
    /* 008ae8e6: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 008ae8e9: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae8eeu); f_008ae73b();
    /* 008ae8ee: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 008ae8f1: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae8f3: mov esp, ebp */ r_esp = r_ebp;
    /* 008ae8f5: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 008ae8f9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae8fc: ret 0x18 */ FN_RET(0x008ae872); r_esp += 28; return;
}

void f_008ae8ff(void) /* ?x3d_D3DXQuaternionSquad@@YGPAUD3DXQUATERNION@@PAU1@PBU1@111M@Z */
{
    FN_ENTER(0x008ae8ff);
    /* 008ae8ff: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae902: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008ae906: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 008ae90a: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 008ae90e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ae912: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008ae916: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008ae91a: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008ae91e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ae921: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae926u); f_008ae73b();
    /* 008ae926: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae929: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 008ae92d: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 008ae931: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 008ae935: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008ae939: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008ae93d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008ae941: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008ae945: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ae948: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae94du); f_008ae73b();
    /* 008ae94d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae950: movd mm0, dword ptr [esp + 0x48] */ { u64 v = R32((u32)(r_esp+0x48u)); fpr[0] = (long double)(i64)v; }
    /* 008ae955: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008ae959: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae95c: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 008ae960: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008ae964: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008ae968: pfsub mm1, mm0 */ { u64 r = rt_pf_sub((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008ae96c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 008ae96f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008ae973: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 008ae977: pfmul mm1, qword ptr [0x99dc28] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(0x99dc28u))); fpr[1] = (long double)(i64)(r); }
    /* 008ae97f: movd dword ptr [esp + 0xc], mm1 */ W32((u32)(r_esp+0xcu), (u32)(u64)(i64)fpr[1]);
    /* 008ae984: call 0x8ae73b */ r_esp -= 4; W32(r_esp, 0x8ae989u); f_008ae73b();
    /* 008ae989: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008ae98c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae98e: ret 0x18 */ FN_RET(0x008ae8ff); r_esp += 28; return;
}

void f_008ae991(void) /* ?x3d_D3DXQuaternionInverse@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ae991);
    /* 008ae991: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008ae995: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008ae998: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae99b: movq mm2, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008ae99f: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae9a2: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008ae9a6: pfmul mm2, mm2 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[2]); fpr[2] = (long double)(i64)(r); }
    /* 008ae9aa: pfadd mm0, mm2 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[2]); fpr[0] = (long double)(i64)(r); }
    /* 008ae9ae: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008ae9b2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008ae9b6: movq mm5, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[5] = (long double)(i64)(r.q); }
    /* 008ae9b9: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008ae9bd: pfcmpgt mm5, qword ptr [0x99dc90] */ { u64 r = rt_pf_cmpgt((u64)(i64)fpr[5], R64((u32)(0x99dc90u))); fpr[5] = (long double)(i64)(r); }
    /* 008ae9c5: pxor mm1, qword ptr [0x99dcf0] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(0x99dcf0u)); MM64 r; r.q = a.q ^ b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae9cc: pxor mm3, qword ptr [0x99dc38] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc38u)); MM64 r; r.q = a.q ^ b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae9d3: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae9d7: pand mm1, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[1] = (long double)(i64)(r.q); }
    /* 008ae9da: pand mm3, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008ae9dd: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008ae9e1: pfmul mm1, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008ae9e5: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008ae9e9: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008ae9ec: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008ae9f0: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae9f2: ret 8 */ FN_RET(0x008ae991); r_esp += 12; return;
}

void f_008ae9f5(void) /* ?x3d_D3DXQuaternionLn@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008ae9f5);
    /* 008ae9f5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008ae9f8: femms  */ ; /* the MMX tag state is not modelled */
    /* 008ae9fa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008ae9fe: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008aea02: movq mm1, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aea05: movq mm2, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aea09: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aea0c: punpckhdq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aea0f: movq mm0, mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aea12: pfcmpge mm3, qword ptr [0x99dca8] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dca8u))); fpr[3] = (long double)(i64)(r); }
    /* 008aea1a: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aea1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aea1f: jne 0x8aea86 */ if (!fZ) goto L_008aea86;
L_008aea21:; BB(0x008aea21);
    /* 008aea21: call 0x8bb080 */ r_esp -= 4; W32(r_esp, 0x8aea26u); f_008bb080();
    /* 008aea26: movd dword ptr [esp], mm0 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[0]);
    /* 008aea2a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008aea2e: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008aea32: call 0x8bb780 */ r_esp -= 4; W32(r_esp, 0x8aea37u); f_008bb780();
    /* 008aea37: movq mm3, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aea3a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008aea3e: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008aea42: pand mm3, qword ptr [0x99dc60] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(0x99dc60u)); MM64 r; r.q = a.q & b.q; fpr[3] = (long double)(i64)(r.q); }
    /* 008aea49: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008aea4d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008aea51: pfcmpge mm3, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[3], R64((u32)(0x99dc68u))); fpr[3] = (long double)(i64)(r); }
    /* 008aea59: movd ecx, mm3 */ r_ecx = (u32)(u64)(i64)fpr[3];
    /* 008aea5c: movq mm1, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[1] = (long double)(i64)(r.q); }
    /* 008aea5f: movq mm2, qword ptr [edx + 8] */ { MM64 r; r.q = R64((u32)(r_edx+0x8u)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aea63: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aea65: je 0x8aea86 */ if (fZ) goto L_008aea86;
L_008aea67:; BB(0x008aea67);
    /* 008aea67: movd mm3, dword ptr [esp] */ { u64 v = R32((u32)(r_esp)); fpr[3] = (long double)(i64)v; }
    /* 008aea6b: pfrcp mm4, mm0 */ { u64 r = rt_pf_rcp((u64)(i64)fpr[4]); fpr[4] = (long double)(i64)(r); }
    /* 008aea6f: punpckldq mm3, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aea72: pfrcpit1 mm0, mm4 */ { u64 r = rt_pf_rcpit1((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aea76: pfrcpit2 mm0, mm4 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[0], (u64)(i64)fpr[4]); fpr[0] = (long double)(i64)(r); }
    /* 008aea7a: pfmul mm3, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[0]); fpr[3] = (long double)(i64)(r); }
    /* 008aea7e: pfmul mm1, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[3]); fpr[1] = (long double)(i64)(r); }
    /* 008aea82: pfmul mm2, mm3 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[3]); fpr[2] = (long double)(i64)(r); }
L_008aea86:; BB(0x008aea86);
    /* 008aea86: pand mm2, qword ptr [0x99dc70] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(0x99dc70u)); MM64 r; r.q = a.q & b.q; fpr[2] = (long double)(i64)(r.q); }
    /* 008aea8d: movq qword ptr [eax], mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; W64((u32)(r_eax), r.q); }
    /* 008aea90: movq qword ptr [eax + 8], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008aea94: femms  */ ; /* the MMX tag state is not modelled */
    /* 008aea96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008aea99: ret 8 */ FN_RET(0x008ae9f5); r_esp += 12; return;
}

void f_008aea9c(void) /* ?x3d_D3DXQuaternionExp@@YGPAUD3DXQUATERNION@@PAU1@PBU1@@Z */
{
    FN_ENTER(0x008aea9c);
    /* 008aea9c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008aeaa0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008aeaa3: movq mm0, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[0] = (long double)(i64)(r.q); }
    /* 008aeaa6: movd mm1, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[1] = (long double)(i64)v; }
    /* 008aeaaa: pfmul mm0, mm0 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aeaae: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aeab2: pfadd mm0, mm1 */ { u64 r = rt_pf_add((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008aeab6: pfacc mm0, mm0 */ { u64 r = rt_pf_acc((u64)(i64)fpr[0], (u64)(i64)fpr[0]); fpr[0] = (long double)(i64)(r); }
    /* 008aeaba: pfrsqrt mm1, mm0 */ { u64 r = rt_pf_rsqrt((u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aeabe: movq mm2, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[2] = (long double)(i64)(r.q); }
    /* 008aeac1: pfmul mm1, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], (u64)(i64)fpr[1]); fpr[1] = (long double)(i64)(r); }
    /* 008aeac5: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008aeac9: pfrsqit1 mm1, mm0 */ { u64 r = rt_pf_rsqit1((u64)(i64)fpr[1], (u64)(i64)fpr[0]); fpr[1] = (long double)(i64)(r); }
    /* 008aeacd: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008aead1: pfrcpit2 mm1, mm2 */ { u64 r = rt_pf_rcpit2((u64)(i64)fpr[1], (u64)(i64)fpr[2]); fpr[1] = (long double)(i64)(r); }
    /* 008aead5: movd dword ptr [esp], mm1 */ W32((u32)(r_esp), (u32)(u64)(i64)fpr[1]);
    /* 008aead9: pfmul mm0, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[0], (u64)(i64)fpr[1]); fpr[0] = (long double)(i64)(r); }
    /* 008aeadd: call 0x8bb660 */ r_esp -= 4; W32(r_esp, 0x8aeae2u); f_008bb660();
    /* 008aeae2: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aeae5: pand mm0, qword ptr [0x99dc58] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x99dc58u)); MM64 r; r.q = a.q & b.q; fpr[0] = (long double)(i64)(r.q); }
    /* 008aeaec: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008aeaf0: pfcmpge mm0, qword ptr [0x99dc68] */ { u64 r = rt_pf_cmpge((u64)(i64)fpr[0], R64((u32)(0x99dc68u))); fpr[0] = (long double)(i64)(r); }
    /* 008aeaf8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008aeafc: punpckhdq mm0, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aeaff: movd ecx, mm0 */ r_ecx = (u32)(u64)(i64)fpr[0];
    /* 008aeb02: movq mm2, qword ptr [edx] */ { MM64 r; r.q = R64((u32)(r_edx)); fpr[2] = (long double)(i64)(r.q); }
    /* 008aeb05: movq mm0, mm1 */ { MM64 r; r.q = (u64)(i64)fpr[1]; fpr[0] = (long double)(i64)(r.q); }
    /* 008aeb08: punpckhdq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[1]; r.d[1] = b.d[1]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aeb0b: test ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008aeb11: pfmul mm1, qword ptr [esp] */ { u64 r = rt_pf_mul((u64)(i64)fpr[1], R64((u32)(r_esp))); fpr[1] = (long double)(i64)(r); }
    /* 008aeb16: movd mm3, dword ptr [edx + 8] */ { u64 v = R32((u32)(r_edx+0x8u)); fpr[3] = (long double)(i64)v; }
    /* 008aeb1a: je 0x8aeb27 */ if (fZ) goto L_008aeb27;
L_008aeb1c:; BB(0x008aeb1c);
    /* 008aeb1c: punpckldq mm1, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 008aeb1f: pfmul mm3, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[3], (u64)(i64)fpr[1]); fpr[3] = (long double)(i64)(r); }
    /* 008aeb23: pfmul mm2, mm1 */ { u64 r = rt_pf_mul((u64)(i64)fpr[2], (u64)(i64)fpr[1]); fpr[2] = (long double)(i64)(r); }
L_008aeb27:; BB(0x008aeb27);
    /* 008aeb27: punpckldq mm3, mm0 */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = (u64)(i64)fpr[0]; MM64 r; r.d[0] = a.d[0]; r.d[1] = b.d[0]; fpr[3] = (long double)(i64)(r.q); }
    /* 008aeb2a: movq qword ptr [eax], mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; W64((u32)(r_eax), r.q); }
    /* 008aeb2d: movq qword ptr [eax + 8], mm3 */ { MM64 r; r.q = (u64)(i64)fpr[3]; W64((u32)(r_eax+0x8u), r.q); }
    /* 008aeb31: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 008aeb35: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 008aeb39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008aeb3c: femms  */ ; /* the MMX tag state is not modelled */
    /* 008aeb3e: ret 8 */ FN_RET(0x008aea9c); r_esp += 12; return;
}

