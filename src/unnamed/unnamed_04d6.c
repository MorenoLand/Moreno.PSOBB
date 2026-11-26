#include "protos.h"

void f_004d6074(void) /* sub_4D6074 */
{
    FN_ENTER(0x004d6074);
    /* 004d6074: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6075: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6077: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6079: push 0x8d1f64 */ { u32 v = 0x8d1f64u; r_esp -= 4; W32(r_esp, v); }
    /* 004d607e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d6084: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6085: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d608c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d608f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d6092: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004d6095: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004d6098: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004d609b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004d609e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d60a1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004d60a4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d60a7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d60acu); f_008193cc();
    /* 004d60ac: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d60b3: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d60b6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d60b9: mov dword ptr [edx], 0xafc7d8 */ W32((u32)(r_edx), 0xafc7d8u);
    /* 004d60bf: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 004d60c2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004d60c4: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x4d60c9u); f_004d31f4();
    /* 004d60c9: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d60cc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d60d1: mov edx, dword ptr [eax + 0x178] */ r_edx = R32((u32)(r_eax+0x178u));
    /* 004d60d7: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 004d60da: mov ecx, dword ptr [eax + 0x17c] */ r_ecx = R32((u32)(r_eax+0x17cu));
    /* 004d60e0: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 004d60e3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d60e6: mov ebx, dword ptr [eax + 0x180] */ r_ebx = R32((u32)(r_eax+0x180u));
    /* 004d60ec: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 004d60ef: mov edi, dword ptr [eax + 0x184] */ r_edi = R32((u32)(r_eax+0x184u));
    /* 004d60f5: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 004d60f8: mov edx, dword ptr [eax + 0x188] */ r_edx = R32((u32)(r_eax+0x188u));
    /* 004d60fe: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 004d6101: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 004d6107: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004d610a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d610d: lea edx, [eax + 0x1c] */ r_edx = (u32)(r_eax+0x1cu);
    /* 004d6110: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d6113: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6114: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6115: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x4d611au); f_004d33c0();
    /* 004d611a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d611d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d6120: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6123: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d6126: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d6129: mov dword ptr [0xa48a9c], 0 */ W32((u32)(0xa48a9cu), 0x0u);
    /* 004d6133: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6136: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d613d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d613f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6140: ret 0xc */ FN_RET(0x004d6074); r_esp += 16; return;
}

void f_004d6144(void) /* sub_4D6144 */
{
    FN_ENTER(0x004d6144);
    /* 004d6144: mov dword ptr [0xa48a90], 0x3f800000 */ W32((u32)(0xa48a90u), 0x3f800000u);
    /* 004d614e: mov dword ptr [0xa48a94], 0x41000000 */ W32((u32)(0xa48a94u), 0x41000000u);
    /* 004d6158: mov dword ptr [0xa48a98], 0x3fc00000 */ W32((u32)(0xa48a98u), 0x3fc00000u);
    /* 004d6162: ret  */ FN_RET(0x004d6144); r_esp += 4; return;
}

void f_004d6164(void) /* sub_4D6164 */
{
    FN_ENTER(0x004d6164);
    /* 004d6164: mov dword ptr [0xa48aa0], 0x3f800000 */ W32((u32)(0xa48aa0u), 0x3f800000u);
    /* 004d616e: mov dword ptr [0xa48aa4], 0x41000000 */ W32((u32)(0xa48aa4u), 0x41000000u);
    /* 004d6178: mov dword ptr [0xa48aa8], 0x3fc00000 */ W32((u32)(0xa48aa8u), 0x3fc00000u);
    /* 004d6182: ret  */ FN_RET(0x004d6164); r_esp += 4; return;
}

void f_004d6184(void) /* sub_4D6184 */
{
    FN_ENTER(0x004d6184);
    /* 004d6184: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6185: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d6187: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d6189: call 0x4d61a8 */ r_esp -= 4; W32(r_esp, 0x4d618eu); f_004d61a8();
    /* 004d618e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d6192: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6194: jne 0x4d619a */ if (!fZ) goto L_004d619a;
L_004d6196:; BB(0x004d6196);
    /* 004d6196: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6197: ret 4 */ FN_RET(0x004d6184); r_esp += 8; return;
L_004d619a:; BB(0x004d619a);
    /* 004d619a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d619b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d61a0u); f_005c2f74();
    /* 004d61a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d61a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d61a2: ret 4 */ FN_RET(0x004d6184); r_esp += 8; return;
}

void f_004d61a8(void) /* sub_4D61A8 */
{
    FN_ENTER(0x004d61a8);
    /* 004d61a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d61a9: mov ebp, esp */ r_ebp = r_esp;
    /* 004d61ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d61ad: push 0x8d1f80 */ { u32 v = 0x8d1f80u; r_esp -= 4; W32(r_esp, v); }
    /* 004d61b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d61b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d61b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d61c0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d61c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d61c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d61c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d61cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d61cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d61d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d61d5: mov dword ptr [ecx], 0xafc880 */ W32((u32)(r_ecx), 0xafc880u);
    /* 004d61db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d61e2: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d61e7u); f_004d1f18();
    /* 004d61e7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d61ea: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d61f1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d61f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d61f4: ret  */ FN_RET(0x004d61a8); r_esp += 4; return;
}

void f_004d61f8(void) /* sub_4D61F8 */
{
    FN_ENTER(0x004d61f8);
    /* 004d61f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d61f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d61fa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d61fc: movsx ecx, word ptr [0xaae7c0] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xaae7c0u));
    /* 004d6203: movsx edx, word ptr [0xaae7c2] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaae7c2u));
    /* 004d620a: mov eax, dword ptr [0xaae7ac] */ r_eax = R32((u32)(0xaae7acu));
    /* 004d620f: test dword ptr [0xa0f684], eax */ {  u32 a = R32((u32)(0xa0f684u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6215: je 0x4d6222 */ if (fZ) goto L_004d6222;
L_004d6217:; BB(0x004d6217);
    /* 004d6217: fld dword ptr [0x9094f4] */ FPUSH(R_F32((u32)(0x9094f4u)));
    /* 004d621d: fadd dword ptr [ebp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x6cu));
    /* 004d6220: jmp 0x4d6238 */ goto L_004d6238;
L_004d6222:; BB(0x004d6222);
    /* 004d6222: test dword ptr [0xa0f688], eax */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6228: je 0x4d6235 */ if (fZ) goto L_004d6235;
L_004d622a:; BB(0x004d622a);
    /* 004d622a: fld dword ptr [0x9094f8] */ FPUSH(R_F32((u32)(0x9094f8u)));
    /* 004d6230: fadd dword ptr [ebp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x6cu));
    /* 004d6233: jmp 0x4d6238 */ goto L_004d6238;
L_004d6235:; BB(0x004d6235);
    /* 004d6235: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
L_004d6238:; BB(0x004d6238);
    /* 004d6238: fld dword ptr [0x9094f0] */ FPUSH(R_F32((u32)(0x9094f0u)));
    /* 004d623e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d6240: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6242: fld dword ptr [0x9094ec] */ FPUSH(R_F32((u32)(0x9094ecu)));
    /* 004d6248: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d624b: jb 0x4d624f */ if (fC) goto L_004d624f;
L_004d624d:; BB(0x004d624d);
    /* 004d624d: fst st(2) */ ST(2) = ST(0);
L_004d624f:; BB(0x004d624f);
    /* 004d624f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6251: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d6253: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6255: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6256: ja 0x4d625a */ if ((!fC&&!fZ)) goto L_004d625a;
L_004d6258:; BB(0x004d6258);
    /* 004d6258: fst st(1) */ ST(1) = ST(0);
L_004d625a:; BB(0x004d625a);
    /* 004d625a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d625c: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004d625f: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d6262: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d6264: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004d6267: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6269: add ecx, dword ptr [ebp + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d626c: add dword ptr [ebp + 0x30], eax */ { u32 ad = (u32)(r_ebp+0x30u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d626f: mov dword ptr [ebp + 0x2c], ecx */ W32((u32)(r_ebp+0x2cu), r_ecx);
    /* 004d6272: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d6277u); f_0082ddd8();
    /* 004d6277: fld dword ptr [ebp + 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0x6cu)));
    /* 004d627a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d627c: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004d627f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d6282: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d6287u); f_0082dcbc();
    /* 004d6287: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 004d628a: fadd dword ptr [ebp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x48u));
    /* 004d628d: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004d6290: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004d6293: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d6298u); f_0082dcbc();
    /* 004d6298: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004d629b: fchs  */ ST(0) = -ST(0);
    /* 004d629d: fmul dword ptr [ebp + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x6cu));
    /* 004d62a0: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 004d62a3: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004d62a6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d62abu); f_0082ddd8();
    /* 004d62ab: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d62ae: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d62b0: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 004d62b3: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 004d62b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d62b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d62b8: ret  */ FN_RET(0x004d61f8); r_esp += 4; return;
}

void f_004d62bc(void) /* sub_4D62BC */
{
    FN_ENTER(0x004d62bc);
    /* 004d62bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d62bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d62bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d62c1: push 0x8d1fa8 */ { u32 v = 0x8d1fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d62c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d62cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d62cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d62d4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d62d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d62da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d62dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d62e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d62e3: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 004d62e5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d62ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d62f1u); f_005caba4();
    /* 004d62f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d62f2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d62f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d62f7: je 0x4d6327 */ if (fZ) goto L_004d6327;
L_004d62f9:; BB(0x004d62f9);
    /* 004d62f9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d6300: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d6307: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d630a: call 0x4d632c */ r_esp -= 4; W32(r_esp, 0x4d630fu); f_004d632c();
    /* 004d630f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6312: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d6319:; BB(0x004d6319);
    /* 004d6319: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d631c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d6323: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6325: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6326: ret  */ FN_RET(0x004d62bc); r_esp += 4; return;
L_004d6327:; BB(0x004d6327);
    /* 004d6327: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6329: jmp 0x4d6319 */ goto L_004d6319;
}

void f_004d632c(void) /* sub_4D632C */
{
    FN_ENTER(0x004d632c);
    /* 004d632c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d632d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d632f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d6331: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d6336u); f_004d1f68();
    /* 004d6336: mov dword ptr [ebp], 0xafc880 */ W32((u32)(r_ebp), 0xafc880u);
    /* 004d633d: mov eax, ebp */ r_eax = r_ebp;
    /* 004d633f: mov dword ptr [ebp + 0x6c], 0x41200000 */ W32((u32)(r_ebp+0x6cu), 0x41200000u);
    /* 004d6346: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 004d634d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d634e: ret  */ FN_RET(0x004d632c); r_esp += 4; return;
}

void f_004d6350(void) /* sub_4D6350 */
{
    FN_ENTER(0x004d6350);
    /* 004d6350: mov dword ptr [0xa48aac], 0x3f800000 */ W32((u32)(0xa48aacu), 0x3f800000u);
    /* 004d635a: mov dword ptr [0xa48ab0], 0x41000000 */ W32((u32)(0xa48ab0u), 0x41000000u);
    /* 004d6364: mov dword ptr [0xa48ab4], 0x3fc00000 */ W32((u32)(0xa48ab4u), 0x3fc00000u);
    /* 004d636e: ret  */ FN_RET(0x004d6350); r_esp += 4; return;
}

void f_004d6370(void) /* sub_4D6370 */
{
    FN_ENTER(0x004d6370);
    /* 004d6370: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6371: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6372: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004d6376: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004d637a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d637b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d637c: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x4d6381u); f_007a9018();
    /* 004d6381: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d6384: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 004d6388: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004d638b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d638d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d638f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6391: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6393: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6395: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6397: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6399: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d639b: jl 0x4d63aa */ if ((fS!=fO)) goto L_004d63aa;
L_004d639d:; BB(0x004d639d);
    /* 004d639d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d639e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d639f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d63a0: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4d63a5u); f_007a8c74();
    /* 004d63a5: mov ebp, eax */ r_ebp = r_eax;
    /* 004d63a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004d63aa:; BB(0x004d63aa);
    /* 004d63aa: mov eax, ebp */ r_eax = r_ebp;
    /* 004d63ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d63ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d63ae: ret  */ FN_RET(0x004d6370); r_esp += 4; return;
}

void f_004d63b0(void) /* sub_4D63B0 */
{
    FN_ENTER(0x004d63b0);
    /* 004d63b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d63b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d63b2: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d63b5: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 004d63b9: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 004d63bd: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 004d63c1: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004d63c3: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 004d63c5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004d63c9: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004d63cc: fsub dword ptr [edi + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4u));
    /* 004d63cf: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004d63d3: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004d63d6: fsub dword ptr [edi + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x8u));
    /* 004d63d9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d63dd: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d63e2u); f_0083173c();
    /* 004d63e2: fld dword ptr [0x909524] */ FPUSH(R_F32((u32)(0x909524u)));
    /* 004d63e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d63ea: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 004d63ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d63f0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004d63f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d63f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d63f5: jbe 0x4d6428 */ if ((fC||fZ)) goto L_004d6428;
L_004d63f7:; BB(0x004d63f7);
    /* 004d63f7: fcom qword ptr [0x909510] */ fx_compare(ST(0), R_F64((u32)(0x909510u))); 
    /* 004d63fd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d63ff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6400: jb 0x4d640a */ if (fC) goto L_004d640a;
L_004d6402:; BB(0x004d6402);
    /* 004d6402: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6404: fld dword ptr [0x909520] */ FPUSH(R_F32((u32)(0x909520u)));
L_004d640a:; BB(0x004d640a);
    /* 004d640a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d640e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004d6411: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004d6415: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004d6419: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x4d641eu); f_007a8f28();
    /* 004d641e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6420: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d6422: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6425: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6426: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d6427: ret  */ FN_RET(0x004d63b0); r_esp += 4; return;
L_004d6428:; BB(0x004d6428);
    /* 004d6428: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d642a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 004d642c: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004d642e: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 004d6431: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 004d6434: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 004d6437: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 004d643a: mov eax, 1 */ r_eax = 0x1u;
    /* 004d643f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6443: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d6444: ret  */ FN_RET(0x004d63b0); r_esp += 4; return;
}

void f_004d6448(void) /* sub_4D6448 */
{
    FN_ENTER(0x004d6448);
    /* 004d6448: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6449: mov ebx, esp */ r_ebx = r_esp;
    /* 004d644b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 004d644e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d644f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6452: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 004d6455: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004d6457: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004d645a: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 004d645d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d645f: fchs  */ ST(0) = -ST(0);
    /* 004d6461: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d6463: fchs  */ ST(0) = -ST(0);
    /* 004d6465: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004d6467: fmul qword ptr [0x909508] */ ST(0) = ST(0) * R_F64((u32)(0x909508u));
    /* 004d646d: fdiv qword ptr [0x909500] */ ST(0) = ST(0) / R_F64((u32)(0x909500u));
    /* 004d6473: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d6476: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d647a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d647f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d6483: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d6487: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 004d6489: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d648c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d648d: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 004d648f: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004d6491: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 004d6494: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004d6496: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6498: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d649b: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4d64a0u); f_0082dc9c();
    /* 004d64a0: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 004d64a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d64a5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004d64a7: fmul qword ptr [0x909508] */ ST(0) = ST(0) * R_F64((u32)(0x909508u));
    /* 004d64ad: fdiv qword ptr [0x909500] */ ST(0) = ST(0) / R_F64((u32)(0x909500u));
    /* 004d64b3: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 004d64b6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d64b9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d64bd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d64c2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d64c6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d64ca: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 004d64cc: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d64cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d64d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d64d3: mov esp, ebx */ r_esp = r_ebx;
    /* 004d64d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d64d6: ret  */ FN_RET(0x004d6448); r_esp += 4; return;
}

void f_004d64d8(void) /* sub_4D64D8 */
{
    FN_ENTER(0x004d64d8);
    /* 004d64d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d64d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d64da: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d64dd: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 004d64e1: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 004d64e5: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 004d64e7: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 004d64ea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d64eb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d64ee: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4d64f3u); f_0082e900();
    /* 004d64f3: fld dword ptr [0x90951c] */ FPUSH(R_F32((u32)(0x90951cu)));
    /* 004d64f9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d64fb: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004d64ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d6501: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004d6503: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6505: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6506: jbe 0x4d651b */ if ((fC||fZ)) goto L_004d651b;
L_004d6508:; BB(0x004d6508);
    /* 004d6508: mov eax, ebx */ r_eax = r_ebx;
    /* 004d650a: mov edx, ebp */ r_edx = r_ebp;
    /* 004d650c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d650e: call 0x4d6540 */ r_esp -= 4; W32(r_esp, 0x4d6513u); f_004d6540();
    /* 004d6513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d6515: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6518: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d651a: ret  */ FN_RET(0x004d64d8); r_esp += 4; return;
L_004d651b:; BB(0x004d651b);
    /* 004d651b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d651d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004d6520: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004d6522: mov eax, 1 */ r_eax = 0x1u;
    /* 004d6527: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d652a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d652b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d652c: ret  */ FN_RET(0x004d64d8); r_esp += 4; return;
}

void f_004d6540(void) /* sub_4D6540 */
{
    FN_ENTER(0x004d6540);
    /* 004d6540: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6541: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6542: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6543: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6544: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d6546: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004d6549: mov esi, edx */ r_esi = r_edx;
    /* 004d654b: mov ebp, eax */ r_ebp = r_eax;
    /* 004d654d: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 004d6550: fsub dword ptr [esi] */ ST(0) = ST(0) - R_F32((u32)(r_esi));
    /* 004d6552: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6553: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d6556: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6558: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4d655du); f_0082e900();
    /* 004d655d: fcom dword ptr [0x909518] */ fx_compare(ST(0), R_F32((u32)(0x909518u))); 
    /* 004d6563: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6565: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6566: je 0x4d6570 */ if (fZ) goto L_004d6570;
L_004d6568:; BB(0x004d6568);
    /* 004d6568: fcom dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); 
    /* 004d656b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d656d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d656e: ja 0x4d657b */ if ((!fC&&!fZ)) goto L_004d657b;
L_004d6570:; BB(0x004d6570);
    /* 004d6570: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6572: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004d6574: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 004d6576: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6577: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6578: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6579: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d657a: ret  */ FN_RET(0x004d6540); r_esp += 4; return;
L_004d657b:; BB(0x004d657b);
    /* 004d657b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d657d: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 004d6580: fcom dword ptr [esi] */ fx_compare(ST(0), R_F32((u32)(r_esi))); 
    /* 004d6582: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6584: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6585: jae 0x4d6591 */ if (!fC) goto L_004d6591;
L_004d6587:; BB(0x004d6587);
    /* 004d6587: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 004d658a: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 004d658c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d658d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d658e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d658f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6590: ret  */ FN_RET(0x004d6540); r_esp += 4; return;
L_004d6591:; BB(0x004d6591);
    /* 004d6591: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 004d6594: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 004d6596: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6597: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6598: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6599: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d659a: ret  */ FN_RET(0x004d6540); r_esp += 4; return;
}

void f_004d659c(void) /* sub_4D659C */
{
    FN_ENTER(0x004d659c);
    /* 004d659c: mov dword ptr [0xa48ab8], 0x3f800000 */ W32((u32)(0xa48ab8u), 0x3f800000u);
    /* 004d65a6: mov dword ptr [0xa48abc], 0x41000000 */ W32((u32)(0xa48abcu), 0x41000000u);
    /* 004d65b0: mov dword ptr [0xa48ac0], 0x3fc00000 */ W32((u32)(0xa48ac0u), 0x3fc00000u);
    /* 004d65ba: ret  */ FN_RET(0x004d659c); r_esp += 4; return;
}

void f_004d65bc(void) /* sub_4D65BC */
{
    FN_ENTER(0x004d65bc);
    /* 004d65bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d65bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d65bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d65c1: call 0x4d65e0 */ r_esp -= 4; W32(r_esp, 0x4d65c6u); f_004d65e0();
    /* 004d65c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d65ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d65cc: jne 0x4d65d2 */ if (!fZ) goto L_004d65d2;
L_004d65ce:; BB(0x004d65ce);
    /* 004d65ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d65cf: ret 4 */ FN_RET(0x004d65bc); r_esp += 8; return;
L_004d65d2:; BB(0x004d65d2);
    /* 004d65d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d65d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d65d8u); f_005c2f74();
    /* 004d65d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d65d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d65da: ret 4 */ FN_RET(0x004d65bc); r_esp += 8; return;
}

void f_004d65e0(void) /* sub_4D65E0 */
{
    FN_ENTER(0x004d65e0);
    /* 004d65e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d65e1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d65e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d65e5: push 0x8d1fc4 */ { u32 v = 0x8d1fc4u; r_esp -= 4; W32(r_esp, v); }
    /* 004d65ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d65f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d65f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d65f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d65fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d65fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d6601: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d6604: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d6607: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d660a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d660d: mov dword ptr [ecx], 0xafc8f8 */ W32((u32)(r_ecx), 0xafc8f8u);
    /* 004d6613: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d661a: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d661fu); f_004d1f18();
    /* 004d661f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6622: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d6629: mov esp, ebp */ r_esp = r_ebp;
    /* 004d662b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d662c: ret  */ FN_RET(0x004d65e0); r_esp += 4; return;
}

void f_004d6630(void) /* sub_4D6630 */
{
    FN_ENTER(0x004d6630);
    /* 004d6630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d6633: mov ebx, eax */ r_ebx = r_eax;
L_004d6635:; BB(0x004d6635);
    /* 004d6635: mov edx, dword ptr [ebx + 0xa48ae4] */ r_edx = R32((u32)(r_ebx+0xa48ae4u));
    /* 004d663b: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004d663e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6640: je 0x4d6653 */ if (fZ) goto L_004d6653;
L_004d6642:; BB(0x004d6642);
    /* 004d6642: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6643: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x4d6648u); f_0082e960();
    /* 004d6648: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6649: mov dword ptr [ebx + 0xa48adc], 0 */ W32((u32)(r_ebx+0xa48adcu), 0x0u);
L_004d6653:; BB(0x004d6653);
    /* 004d6653: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d6656: jl 0x4d6635 */ if ((fS!=fO)) goto L_004d6635;
L_004d6658:; BB(0x004d6658);
    /* 004d6658: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6659: ret  */ FN_RET(0x004d6630); r_esp += 4; return;
}

void f_004d665c(void) /* sub_4D665C */
{
    FN_ENTER(0x004d665c);
    /* 004d665c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d665d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d665f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6661: push 0x8d1fec */ { u32 v = 0x8d1fecu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6666: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d666c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d666d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d6674: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6677: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d667a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d667d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d6680: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d6683: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d6688: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d668f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d6694u); f_005caba4();
    /* 004d6694: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6695: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d6698: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d669a: je 0x4d66ca */ if (fZ) goto L_004d66ca;
L_004d669c:; BB(0x004d669c);
    /* 004d669c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d66a3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d66aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d66ad: call 0x4d66d0 */ r_esp -= 4; W32(r_esp, 0x4d66b2u); f_004d66d0();
    /* 004d66b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d66b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d66bc:; BB(0x004d66bc);
    /* 004d66bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d66bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d66c6: mov esp, ebp */ r_esp = r_ebp;
    /* 004d66c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d66c9: ret  */ FN_RET(0x004d665c); r_esp += 4; return;
L_004d66ca:; BB(0x004d66ca);
    /* 004d66ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d66cc: jmp 0x4d66bc */ goto L_004d66bc;
}

void f_004d66d0(void) /* sub_4D66D0 */
{
    FN_ENTER(0x004d66d0);
    /* 004d66d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d66d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d66d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d66d5: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d66dau); f_004d1f68();
    /* 004d66da: mov dword ptr [ebx], 0xafc8f8 */ W32((u32)(r_ebx), 0xafc8f8u);
    /* 004d66e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d66e2: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004d66e5: mov byte ptr [ebx + 0x9d], dl */ W8((u32)(r_ebx+0x9du), (u8)r_edx);
    /* 004d66eb: mov dword ptr [ebx + 0xa0], 0 */ W32((u32)(r_ebx+0xa0u), 0x0u);
    /* 004d66f5: mov dword ptr [0xa48b20], edx */ W32((u32)(0xa48b20u), r_edx);
    /* 004d66fb: mov eax, ebx */ r_eax = r_ebx;
    /* 004d66fd: mov byte ptr [ebx + 0x9c], dl */ W8((u32)(r_ebx+0x9cu), (u8)r_edx);
    /* 004d6703: mov dword ptr [ebx + 0xa4], 0 */ W32((u32)(r_ebx+0xa4u), 0x0u);
    /* 004d670d: mov dword ptr [0xa48b24], edx */ W32((u32)(0xa48b24u), r_edx);
    /* 004d6713: mov word ptr [ebx + 0x9e], dx */ W16((u32)(r_ebx+0x9eu), (u16)r_edx);
    /* 004d671a: mov dword ptr [ebx + 0x6c], 0 */ W32((u32)(r_ebx+0x6cu), 0x0u);
    /* 004d6721: mov dword ptr [ebx + 0x84], edx */ W32((u32)(r_ebx+0x84u), r_edx);
    /* 004d6727: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 004d672d: mov dword ptr [ebx + 0x8c], edx */ W32((u32)(r_ebx+0x8cu), r_edx);
    /* 004d6733: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
    /* 004d673a: mov dword ptr [ebx + 0x90], edx */ W32((u32)(r_ebx+0x90u), r_edx);
    /* 004d6740: mov dword ptr [ebx + 0x94], edx */ W32((u32)(r_ebx+0x94u), r_edx);
    /* 004d6746: mov dword ptr [ebx + 0x98], edx */ W32((u32)(r_ebx+0x98u), r_edx);
    /* 004d674c: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
    /* 004d6753: mov dword ptr [ebx + 0x78], 0 */ W32((u32)(r_ebx+0x78u), 0x0u);
    /* 004d675a: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
    /* 004d6761: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
    /* 004d676b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d676c: ret  */ FN_RET(0x004d66d0); r_esp += 4; return;
}

void f_004d6770(void) /* sub_4D6770 */
{
    FN_ENTER(0x004d6770);
    /* 004d6770: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6771: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d6776: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6778: je 0x4d678f */ if (fZ) goto L_004d678f;
L_004d677a:; BB(0x004d677a);
    /* 004d677a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004d677e: mov eax, dword ptr [eax + 0x19c] */ r_eax = R32((u32)(r_eax+0x19cu));
    /* 004d6784: mov dword ptr [0xa48b24], eax */ W32((u32)(0xa48b24u), r_eax);
    /* 004d6789: mov dword ptr [0xa48b20], edx */ W32((u32)(0xa48b20u), r_edx);
L_004d678f:; BB(0x004d678f);
    /* 004d678f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d6793: call 0x4d67a0 */ r_esp -= 4; W32(r_esp, 0x4d6798u); f_004d67a0();
    /* 004d6798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6799: ret  */ FN_RET(0x004d6770); r_esp += 4; return;
}

void f_004d67a0(void) /* sub_4D67A0 */
{
    FN_ENTER(0x004d67a0);
    /* 004d67a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d67a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d67a2: mov edi, eax */ r_edi = r_eax;
    /* 004d67a4: mov esi, dword ptr [0xa48a14] */ r_esi = R32((u32)(0xa48a14u));
    /* 004d67aa: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d67ac: je 0x4d6819 */ if (fZ) goto L_004d6819;
L_004d67ae:; BB(0x004d67ae);
    /* 004d67ae: movzx edx, byte ptr [edi + 1] */ r_edx = (u32)R8((u32)(r_edi+0x1u));
    /* 004d67b2: mov byte ptr [esi + 0x9d], dl */ W8((u32)(r_esi+0x9du), (u8)r_edx);
    /* 004d67b8: movzx ecx, byte ptr [edi] */ r_ecx = (u32)R8((u32)(r_edi));
    /* 004d67bb: mov byte ptr [esi + 0x9c], cl */ W8((u32)(r_esi+0x9cu), (u8)r_ecx);
    /* 004d67c1: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 004d67c5: mov word ptr [esi + 0x9e], dx */ W16((u32)(r_esi+0x9eu), (u16)r_edx);
    /* 004d67cc: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 004d67cf: mov dword ptr [esi + 0xa0], edx */ W32((u32)(r_esi+0xa0u), r_edx);
    /* 004d67d5: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 004d67d8: mov dword ptr [esi + 0xa4], edx */ W32((u32)(r_esi+0xa4u), r_edx);
    /* 004d67de: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d67e3u); f_00807ac0();
    /* 004d67e3: movzx edx, byte ptr [esi + 0x9c] */ r_edx = (u32)R8((u32)(r_esi+0x9cu));
    /* 004d67ea: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d67ec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d67ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d67f0: add edx, dword ptr [eax*8 + 0x9acc20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0x9acc20u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d67f7: mov dword ptr [esi + 0x98], edx */ W32((u32)(r_esi+0x98u), r_edx);
    /* 004d67fd: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 004d6800: movzx edx, byte ptr [esi + 0x9d] */ r_edx = (u32)R8((u32)(r_esi+0x9du));
    /* 004d6807: mov ecx, dword ptr [eax*8 + 0xa48ae0] */ r_ecx = R32((u32)(r_eax*8+0xa48ae0u));
    /* 004d680e: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 004d6810: mov eax, dword ptr [edi + edx*4] */ r_eax = R32((u32)(r_edi+r_edx*4));
    /* 004d6813: mov dword ptr [esi + 0x94], eax */ W32((u32)(r_esi+0x94u), r_eax);
L_004d6819:; BB(0x004d6819);
    /* 004d6819: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d681a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d681b: ret  */ FN_RET(0x004d67a0); r_esp += 4; return;
}

void f_004d681c(void) /* sub_4D681C */
{
    FN_ENTER(0x004d681c);
    /* 004d681c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d681d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d6821: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004d6825: mov ecx, dword ptr [0xa48a14] */ r_ecx = R32((u32)(0xa48a14u));
    /* 004d682b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d682d: je 0x4d6861 */ if (fZ) goto L_004d6861;
L_004d682f:; BB(0x004d682f);
    /* 004d682f: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004d6831: mov dword ptr [ecx + 0x6c], esi */ W32((u32)(r_ecx+0x6cu), r_esi);
    /* 004d6834: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 004d6837: mov dword ptr [ecx + 0x70], esi */ W32((u32)(r_ecx+0x70u), r_esi);
    /* 004d683a: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004d683d: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 004d6840: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004d6842: mov dword ptr [ecx + 0x78], eax */ W32((u32)(r_ecx+0x78u), r_eax);
    /* 004d6845: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004d6848: mov dword ptr [ecx + 0x7c], eax */ W32((u32)(r_ecx+0x7cu), r_eax);
    /* 004d684b: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 004d684e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004d6852: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 004d6858: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004d685b: mov dword ptr [ecx + 0x88], eax */ W32((u32)(r_ecx+0x88u), r_eax);
L_004d6861:; BB(0x004d6861);
    /* 004d6861: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6862: ret  */ FN_RET(0x004d681c); r_esp += 4; return;
}

void f_004d6864(void) /* sub_4D6864 */
{
    FN_ENTER(0x004d6864);
    /* 004d6864: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6866: mov edi, dword ptr [0xa48a14] */ r_edi = R32((u32)(0xa48a14u));
    /* 004d686c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d686e: je 0x4d689b */ if (fZ) goto L_004d689b;
L_004d6870:; BB(0x004d6870);
    /* 004d6870: lea esi, [edi + 0x9c] */ r_esi = (u32)(r_edi+0x9cu);
    /* 004d6876: call 0x4d30f4 */ r_esp -= 4; W32(r_esp, 0x4d687bu); f_004d30f4();
    /* 004d687b: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004d687e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d6881: je 0x4d6896 */ if (fZ) goto L_004d6896;
L_004d6883:; BB(0x004d6883);
    /* 004d6883: movzx eax, word ptr [edi + 0x9e] */ r_eax = (u32)R16((u32)(r_edi+0x9eu));
    /* 004d688a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d688f: mov word ptr [edi + 0x9e], ax */ W16((u32)(r_edi+0x9eu), (u16)r_eax);
L_004d6896:; BB(0x004d6896);
    /* 004d6896: mov eax, esi */ r_eax = r_esi;
    /* 004d6898: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6899: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d689a: ret  */ FN_RET(0x004d6864); r_esp += 4; return;
L_004d689b:; BB(0x004d689b);
    /* 004d689b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d689d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d689e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d689f: ret  */ FN_RET(0x004d6864); r_esp += 4; return;
}

void f_004d68a0(void) /* sub_4D68A0 */
{
    FN_ENTER(0x004d68a0);
    /* 004d68a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d68a1: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d68a7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d68a9: mov edx, dword ptr [ebp + 0x94] */ r_edx = R32((u32)(r_ebp+0x94u));
    /* 004d68af: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004d68b3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d68b7: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 004d68bb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004d68bf: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004d68c3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d68c7: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 004d68cb: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004d68cf: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 004d68d3: push dword ptr [ebp + 0xa0] */ { u32 v = R32((u32)(r_ebp+0xa0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d68d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d68da: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 004d68de: call 0x830848 */ r_esp -= 4; W32(r_esp, 0x4d68e3u); f_00830848();
    /* 004d68e3: mov eax, dword ptr [0xa48b20] */ r_eax = R32((u32)(0xa48b20u));
    /* 004d68e8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d68eb: je 0x4d6ba7 */ if (fZ) goto L_004d6ba7;
L_004d68f1:; BB(0x004d68f1);
    /* 004d68f1: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
L_004d68f4:; BB(0x004d68f4);
    /* 004d68f4: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004d68f8: movzx edx, byte ptr [0xa72ae4] */ r_edx = (u32)R8((u32)(0xa72ae4u));
    /* 004d68ff: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 004d6906: mov dword ptr [ebp + 0x90], eax */ W32((u32)(r_ebp+0x90u), r_eax);
    /* 004d690c: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 004d6912: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004d6915: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004d691b: mov byte ptr [0xa72ae4], dl */ W8((u32)(0xa72ae4u), (u8)r_edx);
    /* 004d6921: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d6923: je 0x4d6a15 */ if (fZ) goto L_004d6a15;
L_004d6929:; BB(0x004d6929);
    /* 004d6929: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d692e: jne 0x4d696d */ if (!fZ) goto L_004d696d;
L_004d6930:; BB(0x004d6930);
    /* 004d6930: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004d6934: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004d6938: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004d693c: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 004d6940: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004d6944: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 004d6948: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d694c: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 004d6950: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d6952: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004d6955: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004d6958: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 004d695b: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004d695e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d6962: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 004d6965: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004d6968: jmp 0x4d6b1e */ goto L_004d6b1e;
L_004d696d:; BB(0x004d696d);
    /* 004d696d: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004d6971: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 004d6975: mov dword ptr [ebp + 0x54], 0x36c1 */ W32((u32)(r_ebp+0x54u), 0x36c1u);
    /* 004d697c: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 004d6983: mov dword ptr [esp + 0xb4], 0 */ W32((u32)(r_esp+0xb4u), 0x0u);
    /* 004d698e: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 004d6995: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 004d699c: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d69a1u); f_0082def4();
    /* 004d69a1: fcomp dword ptr [0x909578] */ fx_compare(ST(0), R_F32((u32)(0x909578u))); FPOP();
    /* 004d69a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d69a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d69aa: je 0x4d69ba */ if (fZ) goto L_004d69ba;
L_004d69ac:; BB(0x004d69ac);
    /* 004d69ac: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 004d69b3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d69b8u); f_0082df08();
    /* 004d69b8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d69ba:; BB(0x004d69ba);
    /* 004d69ba: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004d69be: fld dword ptr [0x909574] */ FPUSH(R_F32((u32)(0x909574u)));
    /* 004d69c4: fld dword ptr [esp + 0xb0] */ FPUSH(R_F32((u32)(r_esp+0xb0u)));
    /* 004d69cb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d69cd: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 004d69cf: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004d69d3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004d69d7: fld dword ptr [esp + 0xb8] */ FPUSH(R_F32((u32)(r_esp+0xb8u)));
    /* 004d69de: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004d69e2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004d69e6: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 004d69ea: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004d69ee: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 004d69f0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004d69f2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004d69f4: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004d69f7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d69f9: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004d69fc: fsubr st(1) */ ST(0) = ST(1) - ST(0);
    /* 004d69fe: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 004d6a01: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d6a03: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6a05: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004d6a08: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6a0a: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
    /* 004d6a0d: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 004d6a10: jmp 0x4d6b1e */ goto L_004d6b1e;
L_004d6a15:; BB(0x004d6a15);
    /* 004d6a15: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004d6a19: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 004d6a1d: mov dword ptr [esp + 0x98], eax */ W32((u32)(r_esp+0x98u), r_eax);
    /* 004d6a24: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 004d6a28: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 004d6a2f: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 004d6a36: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 004d6a3a: mov dword ptr [esp + 0xa4], eax */ W32((u32)(r_esp+0xa4u), r_eax);
    /* 004d6a41: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 004d6a45: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004d6a4c: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 004d6a50: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 004d6a57: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 004d6a5e: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x4d6a63u); f_0082def4();
    /* 004d6a63: fcomp dword ptr [0x909578] */ fx_compare(ST(0), R_F32((u32)(0x909578u))); FPOP();
    /* 004d6a69: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6a6b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6a6c: je 0x4d6a7c */ if (fZ) goto L_004d6a7c;
L_004d6a6e:; BB(0x004d6a6e);
    /* 004d6a6e: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 004d6a75: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d6a7au); f_0082df08();
    /* 004d6a7a: fstp st(0) */ ST(0) = ST(0); FPOP();
L_004d6a7c:; BB(0x004d6a7c);
    /* 004d6a7c: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d6a81: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d6a86u); f_0082d990();
    /* 004d6a86: mov edx, dword ptr [ebp + 0x88] */ r_edx = R32((u32)(r_ebp+0x88u));
    /* 004d6a8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6a8e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d6a93u); f_0082d8bc();
    /* 004d6a93: lea eax, [esp + 0x98] */ r_eax = (u32)(r_esp+0x98u);
    /* 004d6a9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6a9b: lea edx, [esp + 0x9c] */ r_edx = (u32)(r_esp+0x9cu);
    /* 004d6aa2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6aa4: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d6aa9u); f_00830aa0();
    /* 004d6aa9: lea eax, [esp + 0xa4] */ r_eax = (u32)(r_esp+0xa4u);
    /* 004d6ab0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6ab1: lea edx, [esp + 0xa8] */ r_edx = (u32)(r_esp+0xa8u);
    /* 004d6ab8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6aba: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d6abfu); f_00830aa0();
    /* 004d6abf: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d6ac4: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d6ac9u); f_0082eb80();
    /* 004d6ac9: fld dword ptr [esp + 0x98] */ FPUSH(R_F32((u32)(r_esp+0x98u)));
    /* 004d6ad0: fadd dword ptr [ebp + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x6cu));
    /* 004d6ad3: fld dword ptr [esp + 0x9c] */ FPUSH(R_F32((u32)(r_esp+0x9cu)));
    /* 004d6ada: fadd dword ptr [ebp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x70u));
    /* 004d6add: fld dword ptr [esp + 0xa0] */ FPUSH(R_F32((u32)(r_esp+0xa0u)));
    /* 004d6ae4: fadd dword ptr [ebp + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x74u));
    /* 004d6ae7: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 004d6aee: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 004d6af5: fld dword ptr [esp + 0xac] */ FPUSH(R_F32((u32)(r_esp+0xacu)));
    /* 004d6afc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004d6afe: fst dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0));
    /* 004d6b01: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004d6b03: fst dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0));
    /* 004d6b06: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d6b08: fst dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0));
    /* 004d6b0b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004d6b0d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004d6b0f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d6b11: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004d6b14: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6b16: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004d6b19: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6b1b: fstp dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0)); FPOP();
L_004d6b1e:; BB(0x004d6b1e);
    /* 004d6b1e: fld dword ptr [ebp + 0xa0] */ FPUSH(R_F32((u32)(r_ebp+0xa0u)));
    /* 004d6b24: fadd dword ptr [ebp + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xa4u));
    /* 004d6b2a: mov edx, dword ptr [ebp + 0x94] */ r_edx = R32((u32)(r_ebp+0x94u));
    /* 004d6b30: fst dword ptr [ebp + 0xa0] */ W_F32((u32)(r_ebp+0xa0u), ST(0));
    /* 004d6b36: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004d6b39: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d6b3c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d6b3f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d6b42: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004d6b45: fadd dword ptr [eax*4 + 0x909568] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x909568u));
    /* 004d6b4c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d6b4e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6b50: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6b51: jb 0x4d6b62 */ if (fC) goto L_004d6b62;
L_004d6b53:; BB(0x004d6b53);
    /* 004d6b53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d6b55: fcom dword ptr [0x909570] */ fx_compare(ST(0), R_F32((u32)(0x909570u))); 
    /* 004d6b5b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d6b5d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d6b5e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d6b60: jb 0x4d6bb3 */ if (fC) goto L_004d6bb3;
L_004d6b62:; BB(0x004d6b62);
    /* 004d6b62: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004d6b64: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 004d6b6a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d6b6d: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d6b70: je 0x4d6b86 */ if (fZ) goto L_004d6b86;
L_004d6b72:; BB(0x004d6b72);
    /* 004d6b72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6b74: mov dword ptr [ebp + 0xa0], 0 */ W32((u32)(r_ebp+0xa0u), 0x0u);
    /* 004d6b7e: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6b84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6b85: ret  */ FN_RET(0x004d68a0); r_esp += 4; return;
L_004d6b86:; BB(0x004d6b86);
    /* 004d6b86: movzx eax, word ptr [ebp + 0x9e] */ r_eax = (u32)R16((u32)(r_ebp+0x9eu));
    /* 004d6b8d: fstp dword ptr [ebp + 0xa0] */ W_F32((u32)(r_ebp+0xa0u), ST(0)); FPOP();
    /* 004d6b93: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d6b98: mov word ptr [ebp + 0x9e], ax */ W16((u32)(r_ebp+0x9eu), (u16)r_eax);
    /* 004d6b9f: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6ba5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6ba6: ret  */ FN_RET(0x004d68a0); r_esp += 4; return;
L_004d6ba7:; BB(0x004d6ba7);
    /* 004d6ba7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004d6bab: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
    /* 004d6bae: jmp 0x4d68f4 */ goto L_004d68f4;
L_004d6bb3:; BB(0x004d6bb3);
    /* 004d6bb3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004d6bb5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6bb7: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6bbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6bbe: ret  */ FN_RET(0x004d68a0); r_esp += 4; return;
}

void f_004d6bc0(void) /* sub_4D6BC0 */
{
    FN_ENTER(0x004d6bc0);
    /* 004d6bc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6bc1: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6bc4: mov esi, ecx */ r_esi = r_ecx;
    /* 004d6bc6: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 004d6bc9: fsub dword ptr [esi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3cu));
    /* 004d6bcc: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d6bd1: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 004d6bd4: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 004d6bd7: fld dword ptr [esi + 0x50] */ FPUSH(R_F32((u32)(r_esi+0x50u)));
    /* 004d6bda: fsub dword ptr [esi + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x44u));
    /* 004d6bdd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d6bdf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d6be2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d6be6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d6bea: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d6bed: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004d6bf5: lea edx, [eax + 0x190] */ r_edx = (u32)(r_eax+0x190u);
    /* 004d6bfb: add eax, 0x194 */ {  u32 a = r_eax; u32 b = 0x194u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d6c00: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 004d6c08: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 004d6c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c12: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c13: call 0x4d6448 */ r_esp -= 4; W32(r_esp, 0x4d6c18u); f_004d6448();
    /* 004d6c18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d6c1b: mov eax, dword ptr [esi + 0x90] */ r_eax = R32((u32)(r_esi+0x90u));
    /* 004d6c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6c23: je 0x4d6cb0 */ if (fZ) goto L_004d6cb0;
L_004d6c29:; BB(0x004d6c29);
    /* 004d6c29: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d6c2e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d6c33u); f_0082d990();
    /* 004d6c33: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d6c36: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004d6c38: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d6c3c: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004d6c3e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d6c40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c41: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d6c44: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4d6c49u); f_0082dc9c();
    /* 004d6c49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d6c4b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d6c4e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d6c52: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004d6c54: fmul qword ptr [0x909560] */ ST(0) = ST(0) * R_F64((u32)(0x909560u));
    /* 004d6c5a: fdiv qword ptr [0x909558] */ ST(0) = ST(0) / R_F64((u32)(0x909558u));
    /* 004d6c60: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004d6c64: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004d6c69: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d6c6e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d6c72: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004d6c76: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d6c7a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004d6c7e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6c80: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 004d6c84: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d6c89u); f_0082d8bc();
    /* 004d6c89: mov edx, dword ptr [esi + 0x90] */ r_edx = R32((u32)(r_esi+0x90u));
    /* 004d6c8f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6c91: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x4d6c96u); f_00830c04();
    /* 004d6c96: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d6c9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6c9b: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 004d6c9f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d6ca1: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x4d6ca6u); f_0082eab8();
    /* 004d6ca6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 004d6cab: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x4d6cb0u); f_0082eb80();
L_004d6cb0:; BB(0x004d6cb0);
    /* 004d6cb0: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 004d6cb6: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004d6cba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6cbb: lea ecx, [edx + 0x178] */ r_ecx = (u32)(r_edx+0x178u);
    /* 004d6cc1: add edx, 0x184 */ {  u32 a = r_edx; u32 b = 0x184u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d6cc7: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x4d6cccu); f_0082f108();
    /* 004d6ccc: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d6cd2: mov eax, dword ptr [ecx + 0x178] */ r_eax = R32((u32)(r_ecx+0x178u));
    /* 004d6cd8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 004d6cde: mov esi, dword ptr [ecx + 0x180] */ r_esi = R32((u32)(r_ecx+0x180u));
    /* 004d6ce4: mov dword ptr [0xa48780], eax */ W32((u32)(0xa48780u), r_eax);
    /* 004d6ce9: mov dword ptr [0xa48784], edx */ W32((u32)(0xa48784u), r_edx);
    /* 004d6cef: mov dword ptr [0xa48788], esi */ W32((u32)(0xa48788u), r_esi);
    /* 004d6cf5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6cf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6cf9: ret  */ FN_RET(0x004d6bc0); r_esp += 4; return;
}

void f_004d6cc0(void)
{
    FN_ENTER(0x004d6cc0);
    /* 004d6cc0: add byte ptr [ecx + 0x184c2], al */ { u32 ad = (u32)(r_ecx+0x184c2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d6cc6: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004d6cc8: cmp al, 0x84 */ {  u32 a = (u8)r_eax; u32 b = 0x84u; u32 r = (a - b) & 0xffu;   }
    /* 004d6cca: xor eax, 0x540d8b00 */ {  u32 a = r_eax; u32 b = 0x540d8b00u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d6ccf: mov ah, byte ptr [eax + eax + 0x178818b] */ r_eax = (r_eax & 0xffff00ffu) | (((R8((u32)(r_eax+r_eax+0x178818bu))) & 0xffu) << 8);
    /* 004d6cd6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004d6cd8: mov edx, dword ptr [ecx + 0x17c] */ r_edx = R32((u32)(r_ecx+0x17cu));
    /* 004d6cde: mov esi, dword ptr [ecx + 0x180] */ r_esi = R32((u32)(r_ecx+0x180u));
    /* 004d6ce4: mov dword ptr [0xa48780], eax */ W32((u32)(0xa48780u), r_eax);
    /* 004d6ce9: mov dword ptr [0xa48784], edx */ W32((u32)(0xa48784u), r_edx);
    /* 004d6cef: mov dword ptr [0xa48788], esi */ W32((u32)(0xa48788u), r_esi);
    /* 004d6cf5: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d6cf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6cf9: ret  */ FN_RET(0x004d6cc0); r_esp += 4; return;
}

void f_004d6cfc(void) /* sub_4D6CFC */
{
    FN_ENTER(0x004d6cfc);
    /* 004d6cfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6cfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6cff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d6d01: mov dword ptr [0xa48ae4], eax */ W32((u32)(0xa48ae4u), r_eax);
    /* 004d6d06: mov dword ptr [0xa48aec], eax */ W32((u32)(0xa48aecu), r_eax);
    /* 004d6d0b: mov dword ptr [0xa48af4], eax */ W32((u32)(0xa48af4u), r_eax);
    /* 004d6d10: mov dword ptr [0xa48afc], eax */ W32((u32)(0xa48afcu), r_eax);
    /* 004d6d15: mov dword ptr [0xa48b04], eax */ W32((u32)(0xa48b04u), r_eax);
    /* 004d6d1a: mov dword ptr [0xa48b0c], eax */ W32((u32)(0xa48b0cu), r_eax);
    /* 004d6d1f: mov dword ptr [0xa48b14], eax */ W32((u32)(0xa48b14u), r_eax);
    /* 004d6d24: mov dword ptr [0xa48b1c], eax */ W32((u32)(0xa48b1cu), r_eax);
    /* 004d6d29: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4d6d2eu); f_00807ac0();
    /* 004d6d2e: mov ecx, eax */ r_ecx = r_eax;
    /* 004d6d30: mov eax, dword ptr [ecx*8 + 0x9acc20] */ r_eax = R32((u32)(r_ecx*8+0x9acc20u));
    /* 004d6d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6d39: je 0x4d6db1 */ if (fZ) goto L_004d6db1;
L_004d6d3b:; BB(0x004d6d3b);
    /* 004d6d3b: mov edx, dword ptr [ecx*8 + 0x9acc24] */ r_edx = R32((u32)(r_ecx*8+0x9acc24u));
    /* 004d6d42: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d6d45: jae 0x4d6db1 */ if (!fC) goto L_004d6db1;
L_004d6d47:; BB(0x004d6d47);
    /* 004d6d47: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d6d49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 004d6d4b: jbe 0x4d6d80 */ if ((fC||fZ)) goto L_004d6d80;
L_004d6d4d:; BB(0x004d6d4d);
    /* 004d6d4d: mov ebx, edx */ r_ebx = r_edx;
    /* 004d6d4f: mov edi, ecx */ r_edi = r_ecx;
    /* 004d6d51: jmp 0x4d6d5a */ goto L_004d6d5a;
L_004d6d53:; BB(0x004d6d53);
    /* 004d6d53: mov eax, dword ptr [edi*8 + 0x9acc20] */ r_eax = R32((u32)(r_edi*8+0x9acc20u));
L_004d6d5a:; BB(0x004d6d5a);
    /* 004d6d5a: push dword ptr [eax + esi*8] */ { u32 v = R32((u32)(r_eax+r_esi*8)); r_esp -= 4; W32(r_esp, v); }
    /* 004d6d5d: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x4d6d62u); f_005b9328();
    /* 004d6d62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6d65: jl 0x4d6db5 */ if ((fS!=fO)) goto L_004d6db5;
L_004d6d67:; BB(0x004d6d67);
    /* 004d6d67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6d68: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x4d6d6du); f_0082e940();
    /* 004d6d6d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6d6e: mov dword ptr [esi*8 + 0xa48ae4], eax */ W32((u32)(r_esi*8+0xa48ae4u), r_eax);
    /* 004d6d75: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d6d78: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004d6d7a: jb 0x4d6d53 */ if (fC) goto L_004d6d53;
L_004d6d7c:; BB(0x004d6d7c);
    /* 004d6d7c: mov edx, ebx */ r_edx = r_ebx;
    /* 004d6d7e: mov ecx, edi */ r_ecx = r_edi;
L_004d6d80:; BB(0x004d6d80);
    /* 004d6d80: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 004d6d82: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6d84: jbe 0x4d6db1 */ if ((fC||fZ)) goto L_004d6db1;
L_004d6d86:; BB(0x004d6d86);
    /* 004d6d86: mov ebx, edx */ r_ebx = r_edx;
    /* 004d6d88: mov edi, ecx */ r_edi = r_ecx;
L_004d6d8a:; BB(0x004d6d8a);
    /* 004d6d8a: push dword ptr [esi*8 + 0xa48ae4] */ { u32 v = R32((u32)(r_esi*8+0xa48ae4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d6d91: mov eax, dword ptr [edi*8 + 0x9acc20] */ r_eax = R32((u32)(r_edi*8+0x9acc20u));
    /* 004d6d98: push dword ptr [eax + esi*8] */ { u32 v = R32((u32)(r_eax+r_esi*8)); r_esp -= 4; W32(r_esp, v); }
    /* 004d6d9b: call 0x5b9bf4 */ r_esp -= 4; W32(r_esp, 0x4d6da0u); f_005b9bf4();
    /* 004d6da0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d6da3: mov dword ptr [esi*8 + 0xa48ae0], eax */ W32((u32)(r_esi*8+0xa48ae0u), r_eax);
    /* 004d6daa: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004d6dad: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d6daf: jb 0x4d6d8a */ if (fC) goto L_004d6d8a;
L_004d6db1:; BB(0x004d6db1);
    /* 004d6db1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6db2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6db3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d6db4: ret  */ FN_RET(0x004d6cfc); r_esp += 4; return;
L_004d6db5:; BB(0x004d6db5);
    /* 004d6db5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6db6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d6db7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d6db8: ret  */ FN_RET(0x004d6cfc); r_esp += 4; return;
}

void f_004d6dbc(void) /* sub_4D6DBC */
{
    FN_ENTER(0x004d6dbc);
    /* 004d6dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6dbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d6dbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d6dc1: call 0x4d6de0 */ r_esp -= 4; W32(r_esp, 0x4d6dc6u); f_004d6de0();
    /* 004d6dc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d6dca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6dcc: jne 0x4d6dd2 */ if (!fZ) goto L_004d6dd2;
L_004d6dce:; BB(0x004d6dce);
    /* 004d6dce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6dcf: ret 4 */ FN_RET(0x004d6dbc); r_esp += 8; return;
L_004d6dd2:; BB(0x004d6dd2);
    /* 004d6dd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6dd3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d6dd8u); f_005c2f74();
    /* 004d6dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6dd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6dda: ret 4 */ FN_RET(0x004d6dbc); r_esp += 8; return;
}

void f_004d6de0(void) /* sub_4D6DE0 */
{
    FN_ENTER(0x004d6de0);
    /* 004d6de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6de1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6de3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6de5: push 0x8d2008 */ { u32 v = 0x8d2008u; r_esp -= 4; W32(r_esp, v); }
    /* 004d6dea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d6df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6df1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d6df8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6dfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d6dfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d6e01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d6e04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d6e07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d6e0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6e0d: mov dword ptr [ecx], 0xafc970 */ W32((u32)(r_ecx), 0xafc970u);
    /* 004d6e13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d6e1a: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d6e1fu); f_004d1f18();
    /* 004d6e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d6e29: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6e2c: ret  */ FN_RET(0x004d6de0); r_esp += 4; return;
}

void f_004d6e30(void) /* sub_4D6E30 */
{
    FN_ENTER(0x004d6e30);
    /* 004d6e30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e32: mov edi, ecx */ r_edi = r_ecx;
    /* 004d6e34: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 004d6e3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6e3c: je 0x4d6e81 */ if (fZ) goto L_004d6e81;
L_004d6e3e:; BB(0x004d6e3e);
    /* 004d6e3e: call 0x4d4344 */ r_esp -= 4; W32(r_esp, 0x4d6e43u); f_004d4344();
    /* 004d6e43: mov ebp, eax */ r_ebp = r_eax;
    /* 004d6e45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e47: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d6e4cu); f_0068d5a8();
    /* 004d6e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6e4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6e4f: je 0x4d6e81 */ if (fZ) goto L_004d6e81;
L_004d6e51:; BB(0x004d6e51);
    /* 004d6e51: fld dword ptr [0x909690] */ FPUSH(R_F32((u32)(0x909690u)));
    /* 004d6e57: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d6e5a: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004d6e5d: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d6e60: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 004d6e63: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004d6e66: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 004d6e69: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 004d6e6c: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004d6e6f: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004d6e72: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 004d6e75: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 004d6e78: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 004d6e7b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 004d6e7e: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
L_004d6e81:; BB(0x004d6e81);
    /* 004d6e81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6e82: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d6e83: ret 4 */ FN_RET(0x004d6e30); r_esp += 8; return;
}

void f_004d6e88(void) /* sub_4D6E88 */
{
    FN_ENTER(0x004d6e88);
    /* 004d6e88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e89: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6e8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e8d: push 0x8d2030 */ { u32 v = 0x8d2030u; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d6e98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6e99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d6ea0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6ea3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d6ea6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d6ea9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d6eac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d6eaf: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6eb1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d6eb8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d6ebdu); f_005caba4();
    /* 004d6ebd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6ebe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d6ec1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6ec3: je 0x4d6ef3 */ if (fZ) goto L_004d6ef3;
L_004d6ec5:; BB(0x004d6ec5);
    /* 004d6ec5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d6ecc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d6ed3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6ed6: call 0x4d6ef8 */ r_esp -= 4; W32(r_esp, 0x4d6edbu); f_004d6ef8();
    /* 004d6edb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6ede: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d6ee5:; BB(0x004d6ee5);
    /* 004d6ee5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6ee8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d6eef: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6ef1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6ef2: ret  */ FN_RET(0x004d6e88); r_esp += 4; return;
L_004d6ef3:; BB(0x004d6ef3);
    /* 004d6ef3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6ef5: jmp 0x4d6ee5 */ goto L_004d6ee5;
}

void f_004d6ef8(void) /* sub_4D6EF8 */
{
    FN_ENTER(0x004d6ef8);
    /* 004d6ef8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6ef9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d6efb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004d6efd: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d6f02u); f_004d1f68();
    /* 004d6f02: mov dword ptr [ebp], 0xafc970 */ W32((u32)(r_ebp), 0xafc970u);
    /* 004d6f09: mov eax, ebp */ r_eax = r_ebp;
    /* 004d6f0b: mov dword ptr [ebp + 0x38], 4 */ W32((u32)(r_ebp+0x38u), 0x4u);
    /* 004d6f12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6f13: ret  */ FN_RET(0x004d6ef8); r_esp += 4; return;
}

void f_004d6f14(void) /* sub_4D6F14 */
{
    FN_ENTER(0x004d6f14);
    /* 004d6f14: mov dword ptr [0xa48b40], 0x3f800000 */ W32((u32)(0xa48b40u), 0x3f800000u);
    /* 004d6f1e: mov dword ptr [0xa48b44], 0x41000000 */ W32((u32)(0xa48b44u), 0x41000000u);
    /* 004d6f28: mov dword ptr [0xa48b48], 0x3fc00000 */ W32((u32)(0xa48b48u), 0x3fc00000u);
    /* 004d6f32: ret  */ FN_RET(0x004d6f14); r_esp += 4; return;
}

void f_004d6f34(void) /* sub_4D6F34 */
{
    FN_ENTER(0x004d6f34);
    /* 004d6f34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d6f37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d6f39: call 0x4d6f58 */ r_esp -= 4; W32(r_esp, 0x4d6f3eu); f_004d6f58();
    /* 004d6f3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d6f42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d6f44: jne 0x4d6f4a */ if (!fZ) goto L_004d6f4a;
L_004d6f46:; BB(0x004d6f46);
    /* 004d6f46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6f47: ret 4 */ FN_RET(0x004d6f34); r_esp += 8; return;
L_004d6f4a:; BB(0x004d6f4a);
    /* 004d6f4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d6f50u); f_005c2f74();
    /* 004d6f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d6f51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d6f52: ret 4 */ FN_RET(0x004d6f34); r_esp += 8; return;
}

void f_004d6f58(void) /* sub_4D6F58 */
{
    FN_ENTER(0x004d6f58);
    /* 004d6f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f59: mov ebp, esp */ r_ebp = r_esp;
    /* 004d6f5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f5d: push 0x8d204c */ { u32 v = 0x8d204cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d6f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d6f69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d6f70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6f73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d6f76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d6f79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d6f7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d6f7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d6f82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d6f85: mov dword ptr [ecx], 0xafc9e8 */ W32((u32)(r_ecx), 0xafc9e8u);
    /* 004d6f8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d6f92: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d6f97u); f_004d1f18();
    /* 004d6f97: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d6f9a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d6fa1: mov esp, ebp */ r_esp = r_ebp;
    /* 004d6fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d6fa4: ret  */ FN_RET(0x004d6f58); r_esp += 4; return;
}

void f_004d6fa8(void) /* sub_4D6FA8 */
{
    FN_ENTER(0x004d6fa8);
    /* 004d6fa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6fa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d6faa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d6fab: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d6fae: mov edi, ecx */ r_edi = r_ecx;
    /* 004d6fb0: call 0x7c0424 */ r_esp -= 4; W32(r_esp, 0x4d6fb5u); f_007c0424();
    /* 004d6fb5: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x4d6fbau); f_007becd4();
    /* 004d6fba: push dword ptr [0xa0f68c] */ { u32 v = R32((u32)(0xa0f68cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d6fc0: movsx esi, word ptr [0xaae770] */ r_esi = (u32)(i32)(i16)R16((u32)(0xaae770u));
    /* 004d6fc7: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d6fcc: movsx ebx, word ptr [0xaae772] */ r_ebx = (u32)(i32)(i16)R16((u32)(0xaae772u));
    /* 004d6fd3: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d6fd8u); f_007c1100();
    /* 004d6fd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d6fda: je 0x4d7065 */ if (fZ) goto L_004d7065;
L_004d6fe0:; BB(0x004d6fe0);
    /* 004d6fe0: fild dword ptr [edi + 0x54] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x54u)));
    /* 004d6fe3: fmul dword ptr [0x9096b0] */ ST(0) = ST(0) * R_F32((u32)(0x9096b0u));
    /* 004d6fe9: fdiv dword ptr [0x9096ac] */ ST(0) = ST(0) / R_F32((u32)(0x9096acu));
    /* 004d6fef: fadd dword ptr [0x9096b4] */ ST(0) = ST(0) + R_F32((u32)(0x9096b4u));
    /* 004d6ff5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004d6ff8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004d6ffc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d7001: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004d7005: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d7009: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d700d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004d7010: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004d7014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d7015: push 0x9096b8 */ { u32 v = 0x9096b8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d701a: push 0xc0014 */ { u32 v = 0xc0014u; r_esp -= 4; W32(r_esp, v); }
    /* 004d701f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4d7024u); f_0061cdb0();
    /* 004d7024: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d7027: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d702d: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d7032: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d7037u); f_007c1160();
    /* 004d7037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7039: je 0x4d7046 */ if (fZ) goto L_004d7046;
L_004d703b:; BB(0x004d703b);
    /* 004d703b: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004d703e: add eax, 0xb6 */ {  u32 a = r_eax; u32 b = 0xb6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d7043: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
L_004d7046:; BB(0x004d7046);
    /* 004d7046: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d704c: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d7051: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4d7056u); f_007c1160();
    /* 004d7056: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7058: je 0x4d7065 */ if (fZ) goto L_004d7065;
L_004d705a:; BB(0x004d705a);
    /* 004d705a: mov eax, dword ptr [edi + 0x54] */ r_eax = R32((u32)(r_edi+0x54u));
    /* 004d705d: add eax, 0xffffff4a */ {  u32 a = r_eax; u32 b = 0xffffff4au; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d7062: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
L_004d7065:; BB(0x004d7065);
    /* 004d7065: movzx eax, word ptr [0xa72768] */ r_eax = (u32)R16((u32)(0xa72768u));
    /* 004d706c: mov eax, dword ptr [eax*4 + 0xa72720] */ r_eax = R32((u32)(r_eax*4+0xa72720u));
    /* 004d7073: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7075: je 0x4d71ad */ if (fZ) goto L_004d71ad;
L_004d707b:; BB(0x004d707b);
    /* 004d707b: fld dword ptr [eax + 0x1c] */ FPUSH(R_F32((u32)(r_eax+0x1cu)));
    /* 004d707e: fld dword ptr [eax + 0x20] */ FPUSH(R_F32((u32)(r_eax+0x20u)));
    /* 004d7081: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 004d7084: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d7086: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004d7088:; BB(0x004d7088);
    /* 004d7088: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d708e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d7090: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 004d7093: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 004d7096: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 004d7099: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d709e: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d70a3u); f_007c1100();
    /* 004d70a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d70a5: je 0x4d7110 */ if (fZ) goto L_004d7110;
L_004d70a7:; BB(0x004d70a7);
    /* 004d70a7: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d70ad: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d70b2: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d70b7u); f_007c1100();
    /* 004d70b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d70b9: je 0x4d70c7 */ if (fZ) goto L_004d70c7;
L_004d70bb:; BB(0x004d70bb);
    /* 004d70bb: fld dword ptr [0x9096a4] */ FPUSH(R_F32((u32)(0x9096a4u)));
    /* 004d70c1: fadd dword ptr [edi + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x6cu));
    /* 004d70c4: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
L_004d70c7:; BB(0x004d70c7);
    /* 004d70c7: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d70cd: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d70d2: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d70d7u); f_007c1100();
    /* 004d70d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d70d9: je 0x4d70e6 */ if (fZ) goto L_004d70e6;
L_004d70db:; BB(0x004d70db);
    /* 004d70db: fld dword ptr [0x9096a0] */ FPUSH(R_F32((u32)(0x9096a0u)));
    /* 004d70e1: fadd dword ptr [edi + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x6cu));
    /* 004d70e4: jmp 0x4d70e9 */ goto L_004d70e9;
L_004d70e6:; BB(0x004d70e6);
    /* 004d70e6: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
L_004d70e9:; BB(0x004d70e9);
    /* 004d70e9: fld dword ptr [0x90969c] */ FPUSH(R_F32((u32)(0x90969cu)));
    /* 004d70ef: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d70f1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d70f3: fld dword ptr [0x909698] */ FPUSH(R_F32((u32)(0x909698u)));
    /* 004d70f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d70fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d70fc: jb 0x4d7100 */ if (fC) goto L_004d7100;
L_004d70fe:; BB(0x004d70fe);
    /* 004d70fe: fst st(2) */ ST(2) = ST(0);
L_004d7100:; BB(0x004d7100);
    /* 004d7100: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d7102: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d7104: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d7106: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d7107: ja 0x4d710b */ if ((!fC&&!fZ)) goto L_004d710b;
L_004d7109:; BB(0x004d7109);
    /* 004d7109: fst st(1) */ ST(1) = ST(0);
L_004d710b:; BB(0x004d710b);
    /* 004d710b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d710d: fstp dword ptr [edi + 0x6c] */ W_F32((u32)(r_edi+0x6cu), ST(0)); FPOP();
L_004d7110:; BB(0x004d7110);
    /* 004d7110: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004d7116: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d711b: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d7120u); f_007c1100();
    /* 004d7120: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d7122: je 0x4d7136 */ if (fZ) goto L_004d7136;
L_004d7124:; BB(0x004d7124);
    /* 004d7124: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004d7127: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d7129: add dword ptr [edi + 0x30], eax */ { u32 ad = (u32)(r_edi+0x30u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d712c: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 004d712f: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7131: add ecx, dword ptr [edi + 0x2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d7134: jmp 0x4d7139 */ goto L_004d7139;
L_004d7136:; BB(0x004d7136);
    /* 004d7136: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
L_004d7139:; BB(0x004d7139);
    /* 004d7139: mov eax, 0x3800 */ r_eax = 0x3800u;
    /* 004d713e: cmp ecx, 0x3800 */ {  u32 a = r_ecx; u32 b = 0x3800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d7144: mov edx, 0xffffc800 */ r_edx = 0xffffc800u;
    /* 004d7149: jl 0x4d714d */ if ((fS!=fO)) goto L_004d714d;
L_004d714b:; BB(0x004d714b);
    /* 004d714b: mov ecx, eax */ r_ecx = r_eax;
L_004d714d:; BB(0x004d714d);
    /* 004d714d: cmp ecx, 0xffffc800 */ {  u32 a = r_ecx; u32 b = 0xffffc800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004d7153: jg 0x4d7157 */ if ((!fZ&&fS==fO)) goto L_004d7157;
L_004d7155:; BB(0x004d7155);
    /* 004d7155: mov ecx, edx */ r_ecx = r_edx;
L_004d7157:; BB(0x004d7157);
    /* 004d7157: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 004d715a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d715fu); f_0082ddd8();
    /* 004d715f: fld dword ptr [edi + 0x6c] */ FPUSH(R_F32((u32)(r_edi+0x6cu)));
    /* 004d7162: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d7164: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 004d7167: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 004d716b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d7170u); f_0082dcbc();
    /* 004d7170: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 004d7174: fadd dword ptr [edi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x48u));
    /* 004d7177: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 004d717a: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d717d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d7182u); f_0082dcbc();
    /* 004d7182: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 004d7185: fchs  */ ST(0) = -ST(0);
    /* 004d7187: fmul dword ptr [edi + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6cu));
    /* 004d718a: fadd dword ptr [edi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4cu));
    /* 004d718d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004d7190: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d7195u); f_0082ddd8();
    /* 004d7195: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 004d7199: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d719b: fadd dword ptr [edi + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x50u));
    /* 004d719e: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 004d71a1: call 0x7c0368 */ r_esp -= 4; W32(r_esp, 0x4d71a6u); f_007c0368();
    /* 004d71a6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d71a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d71aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d71ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d71ac: ret  */ FN_RET(0x004d6fa8); r_esp += 4; return;
L_004d71ad:; BB(0x004d71ad);
    /* 004d71ad: fld dword ptr [0x9096a8] */ FPUSH(R_F32((u32)(0x9096a8u)));
    /* 004d71b3: fld dword ptr [0x9096a8] */ FPUSH(R_F32((u32)(0x9096a8u)));
    /* 004d71b9: fld dword ptr [0x9096a8] */ FPUSH(R_F32((u32)(0x9096a8u)));
    /* 004d71bf: jmp 0x4d7088 */ goto L_004d7088;
}

