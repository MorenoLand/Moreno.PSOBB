#include "protos.h"

void f_0045b400(void)
{
    FN_ENTER(0x0045b400);
    /* 0045b400: sti  */ UNSUP(0x0045b400, "sti ");
    UNSUP(0x0045b401, "falls out of decoded code");
}

void f_0045b4b4(void) /* sub_45B4B4 */
{
    FN_ENTER(0x0045b4b4);
    /* 0045b4b4: movzx eax, byte ptr [0xa45814] */ r_eax = (u32)R8((u32)(0xa45814u));
    /* 0045b4bb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b4bd: jne 0x45b4d3 */ if (!fZ) goto L_0045b4d3;
L_0045b4bf:; BB(0x0045b4bf);
    /* 0045b4bf: mov dword ptr [0xa45818], 0x41e80000 */ W32((u32)(0xa45818u), 0x41e80000u);
    /* 0045b4c9: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045b4ce: mov byte ptr [0xa45814], al */ W8((u32)(0xa45814u), (u8)r_eax);
L_0045b4d3:; BB(0x0045b4d3);
    /* 0045b4d3: fld dword ptr [ecx + 0x3fc] */ FPUSH(R_F32((u32)(r_ecx+0x3fcu)));
    /* 0045b4d9: fadd dword ptr [ecx + 0x400] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x400u));
    /* 0045b4df: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0045b4e1: mov eax, dword ptr [ecx + 0x408] */ r_eax = R32((u32)(r_ecx+0x408u));
    /* 0045b4e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 0045b4e9: je 0x45b5c1 */ if (fZ) goto L_0045b5c1;
L_0045b4ef:; BB(0x0045b4ef);
    /* 0045b4ef: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b4f2: jne 0x45b539 */ if (!fZ) goto L_0045b539;
L_0045b4f4:; BB(0x0045b4f4);
    /* 0045b4f4: fld dword ptr [0xa45818] */ FPUSH(R_F32((u32)(0xa45818u)));
    /* 0045b4fa: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0045b4fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b4fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b4ff: ja 0x45b522 */ if ((!fC&&!fZ)) goto L_0045b522;
L_0045b501:; BB(0x0045b501);
    /* 0045b501: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0045b503: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b505: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0045b507: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b50d: mov dword ptr [ecx + 0x404], 1 */ W32((u32)(r_ecx+0x404u), 0x1u);
    /* 0045b517: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b519: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045b51b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b51d: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b522:; BB(0x0045b522);
    /* 0045b522: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b524: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b52a: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
    /* 0045b534: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b539:; BB(0x0045b539);
    /* 0045b539: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b53c: jne 0x45b5af */ if (!fZ) goto L_0045b5af;
L_0045b53e:; BB(0x0045b53e);
    /* 0045b53e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b540: fcom dword ptr [0xa45818] */ fx_compare(ST(0), R_F32((u32)(0xa45818u))); 
    /* 0045b546: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b548: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b549: jb 0x45b597 */ if (fC) goto L_0045b597;
L_0045b54b:; BB(0x0045b54b);
    /* 0045b54b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b54d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b54f: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b555: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b55b: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b561: mov eax, dword ptr [ecx + 0x3f8] */ r_eax = R32((u32)(r_ecx+0x3f8u));
    /* 0045b567: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0045b56a: mov eax, dword ptr [edx*4 + 0x9a6444] */ r_eax = R32((u32)(r_edx*4+0x9a6444u));
    /* 0045b571: mov dword ptr [ecx + 0x404], 1 */ W32((u32)(r_ecx+0x404u), 0x1u);
    /* 0045b57b: mov dword ptr [ecx + 0x3f8], eax */ W32((u32)(r_ecx+0x3f8u), r_eax);
    /* 0045b581: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0045b584: mov eax, dword ptr [eax*4 + 0x9a6440] */ r_eax = R32((u32)(r_eax*4+0x9a6440u));
    /* 0045b58b: mov dword ptr [ecx + 0x408], eax */ W32((u32)(r_ecx+0x408u), r_eax);
    /* 0045b591: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b593: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045b595: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b597:; BB(0x0045b597);
    /* 0045b597: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b59d: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
    /* 0045b5a7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b5a9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045b5ab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b5ad: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b5af:; BB(0x0045b5af);
    /* 0045b5af: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b5b5: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
    /* 0045b5bf: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b5c1:; BB(0x0045b5c1);
    /* 0045b5c1: fld dword ptr [0x900480] */ FPUSH(R_F32((u32)(0x900480u)));
    /* 0045b5c7: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0045b5c9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b5cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b5cc: ja 0x45b5e8 */ if ((!fC&&!fZ)) goto L_0045b5e8;
L_0045b5ce:; BB(0x0045b5ce);
    /* 0045b5ce: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045b5d0: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0045b5d2: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b5d8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0045b5da: mov dword ptr [ecx + 0x404], 1 */ W32((u32)(r_ecx+0x404u), 0x1u);
    /* 0045b5e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045b5e6: jmp 0x45b5fa */ goto L_0045b5fa;
L_0045b5e8:; BB(0x0045b5e8);
    /* 0045b5e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b5ea: fld dword ptr [0x900484] */ FPUSH(R_F32((u32)(0x900484u)));
    /* 0045b5f0: mov dword ptr [ecx + 0x404], 0 */ W32((u32)(r_ecx+0x404u), 0x0u);
L_0045b5fa:; BB(0x0045b5fa);
    /* 0045b5fa: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0045b5fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b5fe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b5ff: ja 0x45b610 */ if ((!fC&&!fZ)) goto L_0045b610;
L_0045b601:; BB(0x0045b601);
    /* 0045b601: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045b603: fcom dword ptr [0x900480] */ fx_compare(ST(0), R_F32((u32)(0x900480u))); 
    /* 0045b609: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b60b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b60c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0045b60e: jb 0x45b61b */ if (fC) goto L_0045b61b;
L_0045b610:; BB(0x0045b610);
    /* 0045b610: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045b612: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045b614: fstp dword ptr [ecx + 0x3fc] */ W_F32((u32)(r_ecx+0x3fcu), ST(0)); FPOP();
    /* 0045b61a: ret  */ FN_RET(0x0045b4b4); r_esp += 4; return;
L_0045b61b:; BB(0x0045b61b);
    /* 0045b61b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b61d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045b61f: fstp dword ptr [ecx + 0x3fc] */ W_F32((u32)(r_ecx+0x3fcu), ST(0)); FPOP();
    /* 0045b625: ret  */ FN_RET(0x0045b4b4); r_esp += 4; return;
}

void f_0045b628(void) /* sub_45B628 */
{
    FN_ENTER(0x0045b628);
    /* 0045b628: fld dword ptr [0x90047c] */ FPUSH(R_F32((u32)(0x90047cu)));
    /* 0045b62e: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0045b631: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0045b634: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0045b637: fstp dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0)); FPOP();
    /* 0045b63d: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0045b643: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0045b649: ret  */ FN_RET(0x0045b628); r_esp += 4; return;
}

void f_0045b64c(void) /* sub_45B64C */
{
    FN_ENTER(0x0045b64c);
    /* 0045b64c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b64d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b64e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b64f: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045b652: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045b654: movzx eax, word ptr [ebx + 0x3c2] */ r_eax = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045b65b: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b660: mov ecx, 0xffffa24c */ r_ecx = 0xffffa24cu;
    /* 0045b665: je 0x45b677 */ if (fZ) goto L_0045b677;
L_0045b667:; BB(0x0045b667);
    /* 0045b667: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b66a: jge 0x45b8fc */ if ((fS==fO)) goto L_0045b8fc;
L_0045b670:; BB(0x0045b670);
    /* 0045b670: mov ecx, dword ptr [eax*4 + 0x9a6428] */ r_ecx = R32((u32)(r_eax*4+0x9a6428u));
L_0045b677:; BB(0x0045b677);
    /* 0045b677: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 0045b67d: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 0045b680: movzx edi, dl */ r_edi = (u32)(u8)r_edx;
    /* 0045b683: mov eax, esi */ r_eax = r_esi;
    /* 0045b685: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045b687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b689: jle 0x45b997 */ if ((fZ||fS!=fO)) goto L_0045b997;
L_0045b68f:; BB(0x0045b68f);
    /* 0045b68f: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045b692: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b694: jle 0x45b69b */ if ((fZ||fS!=fO)) goto L_0045b69b;
L_0045b696:; BB(0x0045b696);
    /* 0045b696: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045b699: jmp 0x45b69e */ goto L_0045b69e;
L_0045b69b:; BB(0x0045b69b);
    /* 0045b69b: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0045b69e:; BB(0x0045b69e);
    /* 0045b69e: mov eax, ecx */ r_eax = r_ecx;
    /* 0045b6a0: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0045b6a3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0045b6a6: mov esi, edx */ r_esi = r_edx;
    /* 0045b6a8: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0045b6ab: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0045b6b1: mov edi, eax */ r_edi = r_eax;
    /* 0045b6b3: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0045b6b5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b6b7: jle 0x45b973 */ if ((fZ||fS!=fO)) goto L_0045b973;
L_0045b6bd:; BB(0x0045b6bd);
    /* 0045b6bd: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045b6c0: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b6c2: jle 0x45b6ca */ if ((fZ||fS!=fO)) goto L_0045b6ca;
L_0045b6c4:; BB(0x0045b6c4);
    /* 0045b6c4: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045b6c8: jmp 0x45b6ce */ goto L_0045b6ce;
L_0045b6ca:; BB(0x0045b6ca);
    /* 0045b6ca: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_0045b6ce:; BB(0x0045b6ce);
    /* 0045b6ce: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0045b6d1: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0045b6d4: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0045b6d7: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0045b6da: mov eax, ecx */ r_eax = r_ecx;
    /* 0045b6dc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045b6de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b6e0: jle 0x45b94f */ if ((fZ||fS!=fO)) goto L_0045b94f;
L_0045b6e6:; BB(0x0045b6e6);
    /* 0045b6e6: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b6e9: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b6eb: jle 0x45b6f3 */ if ((fZ||fS!=fO)) goto L_0045b6f3;
L_0045b6ed:; BB(0x0045b6ed);
    /* 0045b6ed: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0045b6f1: jmp 0x45b6f7 */ goto L_0045b6f7;
L_0045b6f3:; BB(0x0045b6f3);
    /* 0045b6f3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
L_0045b6f7:; BB(0x0045b6f7);
    /* 0045b6f7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0045b6fb: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0045b6ff: fld dword ptr [ebx + 0x3b8] */ FPUSH(R_F32((u32)(r_ebx+0x3b8u)));
    /* 0045b705: fcomp dword ptr [0x900478] */ fx_compare(ST(0), R_F32((u32)(0x900478u))); FPOP();
    /* 0045b70b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b70d: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0045b710: or edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b716: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0045b719: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b71b: or edx, dword ptr [esp] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b71e: mov dword ptr [ebx + 0x3cc], edx */ W32((u32)(r_ebx+0x3ccu), r_edx);
    /* 0045b724: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b725: je 0x45b91f */ if (fZ) goto L_0045b91f;
L_0045b72b:; BB(0x0045b72b);
    /* 0045b72b: lea esi, [ebx + 0x300] */ r_esi = (u32)(r_ebx+0x300u);
    /* 0045b731: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b738: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b73d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b73e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b73f: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x45b744u); f_0080575c();
    /* 0045b744: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045b747:; BB(0x0045b747);
    /* 0045b747: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0045b74d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b750: jne 0x45b8ec */ if (!fZ) goto L_0045b8ec;
L_0045b756:; BB(0x0045b756);
    /* 0045b756: movzx eax, word ptr [ebx + 0x3c2] */ r_eax = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045b75d: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b762: je 0x45b8ec */ if (fZ) goto L_0045b8ec;
L_0045b768:; BB(0x0045b768);
    /* 0045b768: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b769: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x45b76eu); f_0068d5a8();
    /* 0045b76e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045b76f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045b771: je 0x45b90b */ if (fZ) goto L_0045b90b;
L_0045b777:; BB(0x0045b777);
    /* 0045b777: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0045b77b: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0045b77e: mov edi, dword ptr [eax + 0x3c] */ r_edi = R32((u32)(r_eax+0x3cu));
    /* 0045b781: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 0045b784: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 0045b787: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0045b78b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 0045b78f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0045b793: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x45b798u); f_0082f9c4();
    /* 0045b798: movzx edx, byte ptr [0xa4581c] */ r_edx = (u32)R8((u32)(0xa4581cu));
    /* 0045b79f: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0045b7a7: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b7aa: jne 0x45b7bf */ if (!fZ) goto L_0045b7bf;
L_0045b7ac:; BB(0x0045b7ac);
    /* 0045b7ac: mov dword ptr [0xa45820], 0x43b40000 */ W32((u32)(0xa45820u), 0x43b40000u);
    /* 0045b7b6: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b7b9: mov byte ptr [0xa4581c], dl */ W8((u32)(0xa4581cu), (u8)r_edx);
L_0045b7bf:; BB(0x0045b7bf);
    /* 0045b7bf: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b7c2: jne 0x45b7d7 */ if (!fZ) goto L_0045b7d7;
L_0045b7c4:; BB(0x0045b7c4);
    /* 0045b7c4: mov dword ptr [0xa45824], 0x41c80000 */ W32((u32)(0xa45824u), 0x41c80000u);
    /* 0045b7ce: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b7d1: mov byte ptr [0xa4581c], dl */ W8((u32)(0xa4581cu), (u8)r_edx);
L_0045b7d7:; BB(0x0045b7d7);
    /* 0045b7d7: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b7da: jne 0x45b814 */ if (!fZ) goto L_0045b814;
L_0045b7dc:; BB(0x0045b7dc);
    /* 0045b7dc: fld dword ptr [0xa45820] */ FPUSH(R_F32((u32)(0xa45820u)));
    /* 0045b7e2: fdiv dword ptr [0xa45824] */ ST(0) = ST(0) / R_F32((u32)(0xa45824u));
    /* 0045b7e8: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0045b7ec: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0045b7f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045b7f6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045b7fa: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0045b7fe: fistp dword ptr [0xa45828] */ W32((u32)(0xa45828u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045b804: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0045b808: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0045b80e: mov byte ptr [0xa4581c], dl */ W8((u32)(0xa4581cu), (u8)r_edx);
L_0045b814:; BB(0x0045b814);
    /* 0045b814: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0045b818: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x45b81du); f_0083173c();
    /* 0045b81d: fld dword ptr [0xa45824] */ FPUSH(R_F32((u32)(0xa45824u)));
    /* 0045b823: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045b825: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045b827: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045b828: ja 0x45b913 */ if ((!fC&&!fZ)) goto L_0045b913;
L_0045b82e:; BB(0x0045b82e);
    /* 0045b82e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0045b830: mov edi, dword ptr [0xa45828] */ r_edi = R32((u32)(0xa45828u));
    /* 0045b836: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0045b83a: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 0045b83f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045b844: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0045b848: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0045b84c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045b850: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0045b854: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0045b858: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0045b85c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b85e: jl 0x45b862 */ if ((fS!=fO)) goto L_0045b862;
L_0045b860:; BB(0x0045b860);
    /* 0045b860: mov edi, edx */ r_edi = r_edx;
L_0045b862:; BB(0x0045b862);
    /* 0045b862: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45b867u); f_0082df08();
    /* 0045b867: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b869: fld dword ptr [0xa45824] */ FPUSH(R_F32((u32)(0xa45824u)));
    /* 0045b86f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0045b873: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045b875: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0045b879: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045b87c: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0045b87f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045b881: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045b885: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0045b889: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0045b88d: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0045b890: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0045b894: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0045b898: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b89c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045b8a0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b8a5u); f_0082ebac();
    /* 0045b8a5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0045b8a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b8a9: jle 0x45b903 */ if ((fZ||fS!=fO)) goto L_0045b903;
L_0045b8ab:; BB(0x0045b8ab);
    /* 0045b8ab: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b8af: movzx edx, word ptr [ebx + 0x3c2] */ r_edx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045b8b6: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b8bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8bd: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8c2: push dword ptr [edx*4 + 0x9a6428] */ { u32 v = R32((u32)(r_edx*4+0x9a6428u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b8c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8ca: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x45b8cfu); f_0080575c();
    /* 0045b8cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8d2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b8d6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045b8da: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b8dfu); f_0082ebac();
    /* 0045b8df: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045b8e2: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b8e4: jl 0x45b8ab */ if ((fS!=fO)) goto L_0045b8ab;
L_0045b8e6:; BB(0x0045b8e6);
    /* 0045b8e6: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
L_0045b8ec:; BB(0x0045b8ec);
    /* 0045b8ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b8ef: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0045b8f5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045b8f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045b8f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045b8fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045b8fb: ret  */ FN_RET(0x0045b64c); r_esp += 4; return;
L_0045b8fc:; BB(0x0045b8fc);
    /* 0045b8fc: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045b8ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045b900: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045b901: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045b902: ret  */ FN_RET(0x0045b64c); r_esp += 4; return;
L_0045b903:; BB(0x0045b903);
    /* 0045b903: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0045b909: jmp 0x45b8ec */ goto L_0045b8ec;
L_0045b90b:; BB(0x0045b90b);
    /* 0045b90b: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0045b911: jmp 0x45b8ec */ goto L_0045b8ec;
L_0045b913:; BB(0x0045b913);
    /* 0045b913: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045b915: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b917: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0045b91d: jmp 0x45b8ec */ goto L_0045b8ec;
L_0045b91f:; BB(0x0045b91f);
    /* 0045b91f: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0045b925: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045b927: je 0x45b72b */ if (fZ) goto L_0045b72b;
L_0045b92d:; BB(0x0045b92d);
    /* 0045b92d: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0045b933: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b939: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b93a: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b93f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045b941: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b942: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x45b947u); f_0080575c();
    /* 0045b947: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b94a: jmp 0x45b747 */ goto L_0045b747;
L_0045b94f:; BB(0x0045b94f);
    /* 0045b94f: jl 0x45b95a */ if ((fS!=fO)) goto L_0045b95a;
L_0045b951:; BB(0x0045b951);
    /* 0045b951: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045b955: jmp 0x45b6f7 */ goto L_0045b6f7;
L_0045b95a:; BB(0x0045b95a);
    /* 0045b95a: add edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b95d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b95f: jge 0x45b96a */ if ((fS==fO)) goto L_0045b96a;
L_0045b961:; BB(0x0045b961);
    /* 0045b961: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 0045b965: jmp 0x45b6f7 */ goto L_0045b6f7;
L_0045b96a:; BB(0x0045b96a);
    /* 0045b96a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0045b96e: jmp 0x45b6f7 */ goto L_0045b6f7;
L_0045b973:; BB(0x0045b973);
    /* 0045b973: jl 0x45b97e */ if ((fS!=fO)) goto L_0045b97e;
L_0045b975:; BB(0x0045b975);
    /* 0045b975: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0045b979: jmp 0x45b6ce */ goto L_0045b6ce;
L_0045b97e:; BB(0x0045b97e);
    /* 0045b97e: add esi, -0x10 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045b981: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b983: jge 0x45b98e */ if ((fS==fO)) goto L_0045b98e;
L_0045b985:; BB(0x0045b985);
    /* 0045b985: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0045b989: jmp 0x45b6ce */ goto L_0045b6ce;
L_0045b98e:; BB(0x0045b98e);
    /* 0045b98e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0045b992: jmp 0x45b6ce */ goto L_0045b6ce;
L_0045b997:; BB(0x0045b997);
    /* 0045b997: jl 0x45b9a1 */ if ((fS!=fO)) goto L_0045b9a1;
L_0045b999:; BB(0x0045b999);
    /* 0045b999: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045b99c: jmp 0x45b69e */ goto L_0045b69e;
L_0045b9a1:; BB(0x0045b9a1);
    /* 0045b9a1: add edi, -0x10 */ {  u32 a = r_edi; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045b9a4: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b9a6: jge 0x45b9b0 */ if ((fS==fO)) goto L_0045b9b0;
L_0045b9a8:; BB(0x0045b9a8);
    /* 0045b9a8: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0045b9ab: jmp 0x45b69e */ goto L_0045b69e;
L_0045b9b0:; BB(0x0045b9b0);
    /* 0045b9b0: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0045b9b3: jmp 0x45b69e */ goto L_0045b69e;
}

void f_0045b840(void)
{
    FN_ENTER(0x0045b840);
    /* 0045b840: add byte ptr [eax + eax], cl */ { u32 ad = (u32)(r_eax+r_eax);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045b843: add byte ptr [ecx - 0x26d3dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd92c2444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0045b849: insb byte ptr es:[edi], dx */ UNSUP(0x0045b849, "insb byte ptr es:[edi], dx");
    /* 0045b84a: and al, 0x2c */ {  u32 a = (u8)r_eax; u32 b = 0x2cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0045b84c: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 0045b850: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 0045b854: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 0045b858: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 0045b85c: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b85e: jl 0x45b862 */ if ((fS!=fO)) goto L_0045b862;
L_0045b860:; BB(0x0045b860);
    /* 0045b860: mov edi, edx */ r_edi = r_edx;
L_0045b862:; BB(0x0045b862);
    /* 0045b862: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x45b867u); f_0082df08();
    /* 0045b867: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045b869: fld dword ptr [0xa45824] */ FPUSH(R_F32((u32)(0xa45824u)));
    /* 0045b86f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0045b873: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0045b875: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0045b879: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0045b87c: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0045b87f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0045b881: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0045b885: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0045b889: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0045b88d: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0045b890: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 0045b894: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0045b898: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b89c: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045b8a0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b8a5u); f_0082ebac();
    /* 0045b8a5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0045b8a7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0045b8a9: jle 0x45b903 */ if ((fZ||fS!=fO)) goto L_0045b903;
L_0045b8ab:; BB(0x0045b8ab);
    /* 0045b8ab: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b8af: movzx edx, word ptr [ebx + 0x3c2] */ r_edx = (u32)R16((u32)(r_ebx+0x3c2u));
    /* 0045b8b6: mov eax, 1 */ r_eax = 0x1u;
    /* 0045b8bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8bd: push 0x40200000 */ { u32 v = 0x40200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8c2: push dword ptr [edx*4 + 0x9a6428] */ { u32 v = R32((u32)(r_edx*4+0x9a6428u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045b8c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0045b8ca: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x45b8cfu); f_0080575c();
    /* 0045b8cf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045b8d2: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0045b8d6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045b8da: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x45b8dfu); f_0082ebac();
    /* 0045b8df: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0045b8e2: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b8e4: jl 0x45b8ab */ if ((fS!=fO)) goto L_0045b8ab;
L_0045b8e6:; BB(0x0045b8e6);
    /* 0045b8e6: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
L_0045b8ec:; BB(0x0045b8ec);
    /* 0045b8ec: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045b8ef: mov dword ptr [ebx + 0x3c8], edx */ W32((u32)(r_ebx+0x3c8u), r_edx);
    /* 0045b8f5: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045b8f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045b8f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045b8fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045b8fb: ret  */ FN_RET(0x0045b840); r_esp += 4; return;
L_0045b903:; BB(0x0045b903);
    /* 0045b903: mov edx, dword ptr [ebx + 0x3c8] */ r_edx = R32((u32)(r_ebx+0x3c8u));
    /* 0045b909: jmp 0x45b8ec */ goto L_0045b8ec;
}

void f_0045b9b8(void) /* sub_45B9B8 */
{
    FN_ENTER(0x0045b9b8);
    /* 0045b9b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045b9ba: mov edi, ecx */ r_edi = r_ecx;
    /* 0045b9bc: fld dword ptr [edi + 0x3b8] */ FPUSH(R_F32((u32)(r_edi+0x3b8u)));
    /* 0045b9c2: mov eax, dword ptr [edi + 0x37c] */ r_eax = R32((u32)(r_edi+0x37cu));
    /* 0045b9c8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045b9cb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b9ce: je 0x45bb73 */ if (fZ) goto L_0045bb73;
L_0045b9d4:; BB(0x0045b9d4);
    /* 0045b9d4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b9d7: je 0x45bb73 */ if (fZ) goto L_0045bb73;
L_0045b9dd:; BB(0x0045b9dd);
    /* 0045b9dd: mov eax, dword ptr [edi + 0x3bc] */ r_eax = R32((u32)(r_edi+0x3bcu));
    /* 0045b9e3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045b9e6: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045b9e9: jge 0x45ba0c */ if ((fS==fO)) goto L_0045ba0c;
L_0045b9eb:; BB(0x0045b9eb);
    /* 0045b9eb: fld dword ptr [0x900464] */ FPUSH(R_F32((u32)(0x900464u)));
    /* 0045b9f1: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045b9f7: mov dword ptr [edi + 0x3b8], 0x3f800000 */ W32((u32)(r_edi+0x3b8u), 0x3f800000u);
    /* 0045ba01: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 0045ba07: jmp 0x45baea */ goto L_0045baea;
L_0045ba0c:; BB(0x0045ba0c);
    /* 0045ba0c: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ba11: jge 0x45ba55 */ if ((fS==fO)) goto L_0045ba55;
L_0045ba13:; BB(0x0045ba13);
    /* 0045ba13: fld dword ptr [0x9002c0] */ FPUSH(R_F32((u32)(0x9002c0u)));
    /* 0045ba19: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0045ba1c: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045ba22: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 0045ba28: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045ba2a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045ba2c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045ba2d: jbe 0x45ba46 */ if ((fC||fZ)) goto L_0045ba46;
L_0045ba2f:; BB(0x0045ba2f);
    /* 0045ba2f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045ba31: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045ba37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0045ba39: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 0045ba3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ba41: jmp 0x45baea */ goto L_0045baea;
L_0045ba46:; BB(0x0045ba46);
    /* 0045ba46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ba48: fst dword ptr [edi + 0x3b8] */ W_F32((u32)(r_edi+0x3b8u), ST(0));
    /* 0045ba4e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ba50: jmp 0x45baea */ goto L_0045baea;
L_0045ba55:; BB(0x0045ba55);
    /* 0045ba55: cmp eax, 0x10e */ {  u32 a = r_eax; u32 b = 0x10eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ba5a: jge 0x45ba7c */ if ((fS==fO)) goto L_0045ba7c;
L_0045ba5c:; BB(0x0045ba5c);
    /* 0045ba5c: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045ba62: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045ba68: mov dword ptr [edi + 0x3b8], 0 */ W32((u32)(r_edi+0x3b8u), 0x0u);
    /* 0045ba72: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 0045ba78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045ba7a: jmp 0x45baea */ goto L_0045baea;
L_0045ba7c:; BB(0x0045ba7c);
    /* 0045ba7c: cmp eax, 0x12c */ {  u32 a = r_eax; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045ba81: jge 0x45baca */ if ((fS==fO)) goto L_0045baca;
L_0045ba83:; BB(0x0045ba83);
    /* 0045ba83: fld dword ptr [0x9002c4] */ FPUSH(R_F32((u32)(0x9002c4u)));
    /* 0045ba89: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0045ba8c: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 0045ba92: fcom dword ptr [0x900464] */ fx_compare(ST(0), R_F32((u32)(0x900464u))); 
    /* 0045ba98: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045ba9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045ba9b: jbe 0x45bab8 */ if ((fC||fZ)) goto L_0045bab8;
L_0045ba9d:; BB(0x0045ba9d);
    /* 0045ba9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045ba9f: fld dword ptr [0x900464] */ FPUSH(R_F32((u32)(0x900464u)));
    /* 0045baa5: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045baab: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045bab0: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 0045bab6: jmp 0x45baea */ goto L_0045baea;
L_0045bab8:; BB(0x0045bab8);
    /* 0045bab8: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045babe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045bac0: fst dword ptr [edi + 0x3b8] */ W_F32((u32)(r_edi+0x3b8u), ST(0));
    /* 0045bac6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045bac8: jmp 0x45baea */ goto L_0045baea;
L_0045baca:; BB(0x0045baca);
    /* 0045baca: fld dword ptr [0x900464] */ FPUSH(R_F32((u32)(0x900464u)));
    /* 0045bad0: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045bad6: mov dword ptr [edi + 0x3b8], 0x3f800000 */ W32((u32)(r_edi+0x3b8u), 0x3f800000u);
    /* 0045bae0: mov dword ptr [edi + 0x3bc], 0 */ W32((u32)(r_edi+0x3bcu), 0x0u);
L_0045baea:; BB(0x0045baea);
    /* 0045baea: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045baed: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045baef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045baf1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045baf2: je 0x45bb68 */ if (fZ) goto L_0045bb68;
L_0045baf4:; BB(0x0045baf4);
    /* 0045baf4: fld dword ptr [0x900464] */ FPUSH(R_F32((u32)(0x900464u)));
    /* 0045bafa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045bafd: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045baff: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb01: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb02: je 0x45bb3e */ if (fZ) goto L_0045bb3e;
L_0045bb04:; BB(0x0045bb04);
    /* 0045bb04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bb06: fstp st(1) */ ST(1) = ST(0); FPOP();
L_0045bb08:; BB(0x0045bb08);
    /* 0045bb08: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045bb0b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045bb0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb10: jbe 0x45bba4 */ if ((fC||fZ)) goto L_0045bba4;
L_0045bb16:; BB(0x0045bb16);
    /* 0045bb16: fld dword ptr [edi + 0x3b8] */ FPUSH(R_F32((u32)(r_edi+0x3b8u)));
L_0045bb1c:; BB(0x0045bb1c);
    /* 0045bb1c: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0045bb1e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb21: je 0x45bb26 */ if (fZ) goto L_0045bb26;
L_0045bb23:; BB(0x0045bb23);
    /* 0045bb23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bb24: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bb25: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
L_0045bb26:; BB(0x0045bb26);
    /* 0045bb26: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb2a: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045bb2d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb2e: push 0x38d */ { u32 v = 0x38du; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb33: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45bb38u); f_00814298();
    /* 0045bb38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045bb3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bb3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bb3d: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
L_0045bb3e:; BB(0x0045bb3e);
    /* 0045bb3e: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0045bb40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb42: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045bb45: jbe 0x45bb1c */ if ((fC||fZ)) goto L_0045bb1c;
L_0045bb47:; BB(0x0045bb47);
    /* 0045bb47: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0045bb49: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bb4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb4f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0045bb52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb53: push 0x38c */ { u32 v = 0x38cu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bb58: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45bb5du); f_00814298();
    /* 0045bb5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0045bb60: fld dword ptr [0x900460] */ FPUSH(R_F32((u32)(0x900460u)));
    /* 0045bb66: jmp 0x45bb08 */ goto L_0045bb08;
L_0045bb68:; BB(0x0045bb68);
    /* 0045bb68: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045bb6a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb6c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045bb6f: jb 0x45bb47 */ if (fC) goto L_0045bb47;
L_0045bb71:; BB(0x0045bb71);
    /* 0045bb71: jmp 0x45bba9 */ goto L_0045bba9;
L_0045bb73:; BB(0x0045bb73);
    /* 0045bb73: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045bb76: fadd dword ptr [0x9002bc] */ ST(0) = ST(0) + R_F32((u32)(0x9002bcu));
    /* 0045bb7c: fcom dword ptr [0x900464] */ fx_compare(ST(0), R_F32((u32)(0x900464u))); 
    /* 0045bb82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bb84: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045bb87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bb88: jbe 0x45bb98 */ if ((fC||fZ)) goto L_0045bb98;
L_0045bb8a:; BB(0x0045bb8a);
    /* 0045bb8a: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 0045bb8f: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 0045bb95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bb96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bb97: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
L_0045bb98:; BB(0x0045bb98);
    /* 0045bb98: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0045bb9b: fstp dword ptr [edi + 0x3b8] */ W_F32((u32)(r_edi+0x3b8u), ST(0)); FPOP();
    /* 0045bba1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bba2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bba3: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
L_0045bba4:; BB(0x0045bba4);
    /* 0045bba4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bba6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bba7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bba8: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
L_0045bba9:; BB(0x0045bba9);
    /* 0045bba9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bbab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bbad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0045bbae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bbaf: ret  */ FN_RET(0x0045b9b8); r_esp += 4; return;
}

void f_0045bbb0(void) /* sub_45BBB0 */
{
    FN_ENTER(0x0045bbb0);
    /* 0045bbb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bbb1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bbb2: mov esi, ecx */ r_esi = r_ecx;
    /* 0045bbb4: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 0045bbba: mov edx, 1 */ r_edx = 0x1u;
    /* 0045bbbf: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bbc2: jne 0x45bbc6 */ if (!fZ) goto L_0045bbc6;
L_0045bbc4:; BB(0x0045bbc4);
    /* 0045bbc4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0045bbc6:; BB(0x0045bbc6);
    /* 0045bbc6: movzx ecx, word ptr [esi + 0x3c2] */ r_ecx = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045bbcd: cmp ecx, dword ptr [0xa9c4f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0045bbd3: jne 0x45bbd9 */ if (!fZ) goto L_0045bbd9;
L_0045bbd5:; BB(0x0045bbd5);
    /* 0045bbd5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0045bbd7: jne 0x45bbe6 */ if (!fZ) goto L_0045bbe6;
L_0045bbd9:; BB(0x0045bbd9);
    /* 0045bbd9: mov dword ptr [esi + 0x3e0], 0 */ W32((u32)(r_esi+0x3e0u), 0x0u);
    /* 0045bbe3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045bbe4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bbe5: ret  */ FN_RET(0x0045bbb0); r_esp += 4; return;
L_0045bbe6:; BB(0x0045bbe6);
    /* 0045bbe6: mov edi, dword ptr [esi + 0x3e0] */ r_edi = R32((u32)(r_esi+0x3e0u));
    /* 0045bbec: mov eax, 0xd20d20d3 */ r_eax = 0xd20d20d3u;
    /* 0045bbf1: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0045bbf3: mov eax, edi */ r_eax = r_edi;
    /* 0045bbf5: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0045bbf8: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bbfa: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0045bbfd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0045bbff: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0045bc02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc04: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc06: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc08: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc0a: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0045bc0c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc0e: jne 0x45bc20 */ if (!fZ) goto L_0045bc20;
L_0045bc10:; BB(0x0045bc10);
    /* 0045bc10: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 0045bc13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc14: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc16: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc18: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x45bc1du); f_006ff4ac();
    /* 0045bc1d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045bc20:; BB(0x0045bc20);
    /* 0045bc20: cmp edi, dword ptr [0x9a6438] */ {  u32 a = r_edi; u32 b = R32((u32)(0x9a6438u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc26: jne 0x45bc3a */ if (!fZ) goto L_0045bc3a;
L_0045bc28:; BB(0x0045bc28);
    /* 0045bc28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc2d: push 0x390 */ { u32 v = 0x390u; r_esp -= 4; W32(r_esp, v); }
    /* 0045bc32: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x45bc37u); f_00814298();
    /* 0045bc37: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0045bc3a:; BB(0x0045bc3a);
    /* 0045bc3a: add dword ptr [esi + 0x3e0], 1 */ { u32 ad = (u32)(r_esi+0x3e0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045bc41: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045bc42: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045bc43: ret  */ FN_RET(0x0045bbb0); r_esp += 4; return;
}

void f_0045bc44(void) /* sub_45BC44 */
{
    FN_ENTER(0x0045bc44);
    /* 0045bc44: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045bc47: mov eax, dword ptr [ecx + 0x534] */ r_eax = R32((u32)(r_ecx+0x534u));
    /* 0045bc4d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bc50: jne 0x45bcf1 */ if (!fZ) goto L_0045bcf1;
L_0045bc56:; BB(0x0045bc56);
    /* 0045bc56: movzx eax, byte ptr [0xa4582c] */ r_eax = (u32)R8((u32)(0xa4582cu));
    /* 0045bc5d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045bc5f: jne 0x45bc73 */ if (!fZ) goto L_0045bc73;
L_0045bc61:; BB(0x0045bc61);
    /* 0045bc61: mov dword ptr [0xa45830], 0x40400000 */ W32((u32)(0xa45830u), 0x40400000u);
    /* 0045bc6b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc6e: mov byte ptr [0xa4582c], al */ W8((u32)(0xa4582cu), (u8)r_eax);
L_0045bc73:; BB(0x0045bc73);
    /* 0045bc73: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045bc75: jne 0x45bc89 */ if (!fZ) goto L_0045bc89;
L_0045bc77:; BB(0x0045bc77);
    /* 0045bc77: mov dword ptr [0xa45834], 0x42000000 */ W32((u32)(0xa45834u), 0x42000000u);
    /* 0045bc81: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc84: mov byte ptr [0xa4582c], al */ W8((u32)(0xa4582cu), (u8)r_eax);
L_0045bc89:; BB(0x0045bc89);
    /* 0045bc89: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0045bc8b: jne 0x45bca1 */ if (!fZ) goto L_0045bca1;
L_0045bc8d:; BB(0x0045bc8d);
    /* 0045bc8d: mov dword ptr [0xa45838], 0x41e66666 */ W32((u32)(0xa45838u), 0x41e66666u);
    /* 0045bc97: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045bc9c: mov byte ptr [0xa4582c], al */ W8((u32)(0xa4582cu), (u8)r_eax);
L_0045bca1:; BB(0x0045bca1);
    /* 0045bca1: mov eax, dword ptr [0xa45830] */ r_eax = R32((u32)(0xa45830u));
    /* 0045bca6: mov edx, dword ptr [0xa45834] */ r_edx = R32((u32)(0xa45834u));
    /* 0045bcac: mov ecx, dword ptr [0xa45838] */ r_ecx = R32((u32)(0xa45838u));
    /* 0045bcb2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0045bcb6: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0045bcba: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0045bcc2: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 0045bcca: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 0045bcce: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0045bcd2: mov dword ptr [esp + 0x2c], 0xc0a00000 */ W32((u32)(r_esp+0x2cu), 0xc0a00000u);
    /* 0045bcda: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0045bcde: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bce3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bce4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bce5: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x45bceau); f_004d85bc();
    /* 0045bcea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bced: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045bcf0: ret  */ FN_RET(0x0045bc44); r_esp += 4; return;
L_0045bcf1:; BB(0x0045bcf1);
    /* 0045bcf1: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0045bcf8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0045bcfc: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0045bcff: mov dword ptr [esp + 4], 0x41cb70a4 */ W32((u32)(r_esp+0x4u), 0x41cb70a4u);
    /* 0045bd07: mov dword ptr [esp + 8], 0x4235ae14 */ W32((u32)(r_esp+0x8u), 0x4235ae14u);
    /* 0045bd0f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0045bd17: mov dword ptr [esp + 0x10], 0x419e6666 */ W32((u32)(r_esp+0x10u), 0x419e6666u);
    /* 0045bd1f: mov dword ptr [esp + 0x14], 0xc0a00000 */ W32((u32)(r_esp+0x14u), 0xc0a00000u);
    /* 0045bd27: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd2d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd2e: call 0x4d85bc */ r_esp -= 4; W32(r_esp, 0x45bd33u); f_004d85bc();
    /* 0045bd33: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bd36: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045bd39: ret  */ FN_RET(0x0045bc44); r_esp += 4; return;
}

void f_0045bd3c(void) /* sub_45BD3C */
{
    FN_ENTER(0x0045bd3c);
    /* 0045bd3c: call 0x45bd44 */ r_esp -= 4; W32(r_esp, 0x45bd41u); f_0045bd44();
    /* 0045bd41: ret  */ FN_RET(0x0045bd3c); r_esp += 4; return;
}

void f_0045bd44(void) /* sub_45BD44 */
{
    FN_ENTER(0x0045bd44);
    /* 0045bd44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd45: mov esi, ecx */ r_esi = r_ecx;
    /* 0045bd47: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x45bd4cu); f_00578b38();
    /* 0045bd4c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45bd51u); f_0082d7b0();
    /* 0045bd51: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0045bd54: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45bd59u); f_0082d838();
    /* 0045bd59: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0045bd5c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bd5e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45bd63u); f_0082d8bc();
    /* 0045bd63: mov ecx, esi */ r_ecx = r_esi;
    /* 0045bd65: call 0x45bdac */ r_esp -= 4; W32(r_esp, 0x45bd6au); f_0045bdac();
    /* 0045bd6a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45bd6fu); f_0082da80();
    /* 0045bd6f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x45bd74u); f_0082d7b0();
    /* 0045bd74: lea ecx, [esi + 0x488] */ r_ecx = (u32)(r_esi+0x488u);
    /* 0045bd7a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x45bd7fu); f_0082d838();
    /* 0045bd7f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0045bd82: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0045bd84: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x45bd89u); f_0082d8bc();
    /* 0045bd89: push dword ptr [esi + 0x3d0] */ { u32 v = R32((u32)(r_esi+0x3d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045bd8f: movzx eax, word ptr [esi + 0x3c2] */ r_eax = (u32)R16((u32)(r_esi+0x3c2u));
    /* 0045bd96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bd97: call 0x45345c */ r_esp -= 4; W32(r_esp, 0x45bd9cu); f_0045345c();
    /* 0045bd9c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bd9f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x45bda4u); f_0082da80();
    /* 0045bda4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x45bda9u); f_0082dab0();
    /* 0045bda9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045bdaa: ret  */ FN_RET(0x0045bd44); r_esp += 4; return;
}

void f_0045bdac(void) /* sub_45BDAC */
{
    FN_ENTER(0x0045bdac);
    /* 0045bdac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0045bdaf: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0045bdb2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0045bdb4: fld dword ptr [0x900450] */ FPUSH(R_F32((u32)(0x900450u)));
    /* 0045bdba: fld dword ptr [ebx + 0x3b8] */ FPUSH(R_F32((u32)(r_ebx+0x3b8u)));
    /* 0045bdc0: fcom dword ptr [0x90044c] */ fx_compare(ST(0), R_F32((u32)(0x90044cu))); 
    /* 0045bdc6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bdc8: fst dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0));
    /* 0045bdcc: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0045bdce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0045bdd0: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0045bdd4: mov edi, 0x9a6754 */ r_edi = 0x9a6754u;
    /* 0045bdd9: mov esi, 0x9a6760 */ r_esi = 0x9a6760u;
    /* 0045bdde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bddf: jae 0x45bdf3 */ if (!fC) goto L_0045bdf3;
L_0045bde1:; BB(0x0045bde1);
    /* 0045bde1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045bde5: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0045bde9: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0045bded: mov eax, edi */ r_eax = r_edi;
    /* 0045bdef: mov edi, esi */ r_edi = r_esi;
    /* 0045bdf1: mov esi, eax */ r_esi = r_eax;
L_0045bdf3:; BB(0x0045bdf3);
    /* 0045bdf3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bdf5: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0045bdfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045bdfd: jl 0x45bf6f */ if ((fS!=fO)) goto L_0045bf6f;
L_0045be03:; BB(0x0045be03);
    /* 0045be03: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045be06: jge 0x45bf6f */ if ((fS==fO)) goto L_0045bf6f;
L_0045be0c:; BB(0x0045be0c);
    /* 0045be0c: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
    /* 0045be12: fld dword ptr [ebx + 0x3fc] */ FPUSH(R_F32((u32)(r_ebx+0x3fcu)));
    /* 0045be18: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045be1a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045be1c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045be1d: jae 0x45be28 */ if (!fC) goto L_0045be28;
L_0045be1f:; BB(0x0045be1f);
    /* 0045be1f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045be21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045be23: jmp 0x45bf6f */ goto L_0045bf6f;
L_0045be28:; BB(0x0045be28);
    /* 0045be28: fcomp dword ptr [0x900480] */ fx_compare(ST(0), R_F32((u32)(0x900480u))); FPOP();
    /* 0045be2e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045be30: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045be31: jae 0x45c129 */ if (!fC) goto L_0045c129;
L_0045be37:; BB(0x0045be37);
    /* 0045be37: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045be3b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045be3d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045be3f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045be40: je 0x45c130 */ if (fZ) goto L_0045c130;
L_0045be46:; BB(0x0045be46);
    /* 0045be46: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045be4a: fcomp dword ptr [0x900450] */ fx_compare(ST(0), R_F32((u32)(0x900450u))); FPOP();
    /* 0045be50: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045be52: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045be53: jb 0x45be64 */ if (fC) goto L_0045be64;
L_0045be55:; BB(0x0045be55);
    /* 0045be55: mov eax, 0x9a6754 */ r_eax = 0x9a6754u;
    /* 0045be5a: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045be5c: je 0x45c0d0 */ if (fZ) goto L_0045c0d0;
L_0045be62:; BB(0x0045be62);
    /* 0045be62: jmp 0x45be78 */ goto L_0045be78;
L_0045be64:; BB(0x0045be64);
    /* 0045be64: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045be66: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045be6a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045be6d: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x45be72u); f_00453af4();
    /* 0045be72: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
L_0045be78:; BB(0x0045be78);
    /* 0045be78: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0045be7d: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045be82: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 0045be88: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045be8b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045be8e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0045be93: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0045be97: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x45be9cu); f_00618a44();
    /* 0045be9c: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45bea1u); f_0082fa9c();
    /* 0045bea1: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0045bea5: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0045bea9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0045beab: mov ebp, eax */ r_ebp = r_eax;
L_0045bead:; BB(0x0045bead);
    /* 0045bead: push dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0045beb0: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045beb6: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45bebbu); f_005b8624();
    /* 0045bebb: mov ecx, eax */ r_ecx = r_eax;
    /* 0045bebd: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x45bec2u); f_00829cc8();
    /* 0045bec2: mov ecx, dword ptr [ebx + ebp*4 + 0x440] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x440u));
    /* 0045bec9: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x45beceu); f_00588428();
    /* 0045bece: push dword ptr [edi + ebp*4] */ { u32 v = R32((u32)(r_edi+r_ebp*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0045bed1: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045bed7: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45bedcu); f_005b8610();
    /* 0045bedc: mov esi, eax */ r_esi = r_eax;
    /* 0045bede: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0045bee4: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045beea: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045beed: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045beef: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045bef1: push dword ptr [edx + ebp*4 + 0x9a6448] */ { u32 v = R32((u32)(r_edx+r_ebp*4+0x9a6448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045bef8: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45befdu); f_005b8638();
    /* 0045befd: push dword ptr [ebx + 0x3fc] */ { u32 v = R32((u32)(r_ebx+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045bf03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0045bf05: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45bf0au); f_0083046c();
    /* 0045bf0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bf0d: mov ecx, dword ptr [ebx + ebp*4 + 0x440] */ r_ecx = R32((u32)(r_ebx+r_ebp*4+0x440u));
    /* 0045bf14: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45bf19u); f_00452050();
    /* 0045bf19: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0045bf1c: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bf1f: jl 0x45bead */ if ((fS!=fO)) goto L_0045bead;
L_0045bf21:; BB(0x0045bf21);
    /* 0045bf21: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0045bf25: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0045bf29: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45bf2eu); f_0082faac();
    /* 0045bf2e: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0045bf34: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0045bf38: fcomp dword ptr [0x900450] */ fx_compare(ST(0), R_F32((u32)(0x900450u))); FPOP();
    /* 0045bf3e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bf40: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045bf46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bf47: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0045bf4d: jb 0x45bf64 */ if (fC) goto L_0045bf64;
L_0045bf4f:; BB(0x0045bf4f);
    /* 0045bf4f: mov eax, 0x9a6754 */ r_eax = 0x9a6754u;
    /* 0045bf54: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bf56: je 0x45c0f1 */ if (fZ) goto L_0045c0f1;
L_0045bf5c:; BB(0x0045bf5c);
    /* 0045bf5c: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0045bf62: jmp 0x45bf6f */ goto L_0045bf6f;
L_0045bf64:; BB(0x0045bf64);
    /* 0045bf64: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x45bf69u); f_005963d0();
    /* 0045bf69: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
L_0045bf6f:; BB(0x0045bf6f);
    /* 0045bf6f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0045bf71: jl 0x45c0c9 */ if ((fS!=fO)) goto L_0045c0c9;
L_0045bf77:; BB(0x0045bf77);
    /* 0045bf77: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045bf7a: jge 0x45c0c9 */ if ((fS==fO)) goto L_0045c0c9;
L_0045bf80:; BB(0x0045bf80);
    /* 0045bf80: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
    /* 0045bf86: fld dword ptr [ebx + 0x3fc] */ FPUSH(R_F32((u32)(r_ebx+0x3fcu)));
    /* 0045bf8c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0045bf8e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bf90: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bf91: jae 0x45bf9c */ if (!fC) goto L_0045bf9c;
L_0045bf93:; BB(0x0045bf93);
    /* 0045bf93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bf95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bf97: jmp 0x45c0c9 */ goto L_0045c0c9;
L_0045bf9c:; BB(0x0045bf9c);
    /* 0045bf9c: fcomp dword ptr [0x900480] */ fx_compare(ST(0), R_F32((u32)(0x900480u))); FPOP();
    /* 0045bfa2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bfa4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bfa5: jae 0x45c137 */ if (!fC) goto L_0045c137;
L_0045bfab:; BB(0x0045bfab);
    /* 0045bfab: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045bfaf: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0045bfb1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bfb3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bfb4: je 0x45c13b */ if (fZ) goto L_0045c13b;
L_0045bfba:; BB(0x0045bfba);
    /* 0045bfba: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045bfbe: fcomp dword ptr [0x900450] */ fx_compare(ST(0), R_F32((u32)(0x900450u))); FPOP();
    /* 0045bfc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045bfc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045bfc7: jb 0x45bfd8 */ if (fC) goto L_0045bfd8;
L_0045bfc9:; BB(0x0045bfc9);
    /* 0045bfc9: mov eax, 0x9a6754 */ r_eax = 0x9a6754u;
    /* 0045bfce: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045bfd0: je 0x45c108 */ if (fZ) goto L_0045c108;
L_0045bfd6:; BB(0x0045bfd6);
    /* 0045bfd6: jmp 0x45bfec */ goto L_0045bfec;
L_0045bfd8:; BB(0x0045bfd8);
    /* 0045bfd8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045bfda: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045bfde: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045bfe1: call 0x453af4 */ r_esp -= 4; W32(r_esp, 0x45bfe6u); f_00453af4();
    /* 0045bfe6: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
L_0045bfec:; BB(0x0045bfec);
    /* 0045bfec: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0045bff1: or eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0045bff6: mov edx, dword ptr [ebx + 0x3e4] */ r_edx = R32((u32)(r_ebx+0x3e4u));
    /* 0045bffc: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045bfff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0045c002: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0045c007: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0045c00b: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x45c010u); f_00618a44();
    /* 0045c010: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x45c015u); f_0082fa9c();
    /* 0045c015: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 0045c019: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0045c01b:; BB(0x0045c01b);
    /* 0045c01b: push dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c01e: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045c024: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x45c029u); f_005b8624();
    /* 0045c029: mov ecx, eax */ r_ecx = r_eax;
    /* 0045c02b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x45c030u); f_00829cc8();
    /* 0045c030: mov ecx, dword ptr [ebx + edi*4 + 0x440] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0x440u));
    /* 0045c037: call 0x588428 */ r_esp -= 4; W32(r_esp, 0x45c03cu); f_00588428();
    /* 0045c03c: push dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c03f: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045c045: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x45c04au); f_005b8610();
    /* 0045c04a: mov ebp, eax */ r_ebp = r_eax;
    /* 0045c04c: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0045c052: mov ecx, dword ptr [ebx + 0x398] */ r_ecx = R32((u32)(r_ebx+0x398u));
    /* 0045c058: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0045c05b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c05d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0045c05f: push dword ptr [edx + edi*4 + 0x9a6448] */ { u32 v = R32((u32)(r_edx+r_edi*4+0x9a6448u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c066: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x45c06bu); f_005b8638();
    /* 0045c06b: push dword ptr [ebx + 0x3fc] */ { u32 v = R32((u32)(r_ebx+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0045c072: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0045c073: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x45c078u); f_0083046c();
    /* 0045c078: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c07b: mov ecx, dword ptr [ebx + edi*4 + 0x440] */ r_ecx = R32((u32)(r_ebx+r_edi*4+0x440u));
    /* 0045c082: call 0x452050 */ r_esp -= 4; W32(r_esp, 0x45c087u); f_00452050();
    /* 0045c087: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0045c08a: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0045c08d: jl 0x45c01b */ if ((fS!=fO)) goto L_0045c01b;
L_0045c08f:; BB(0x0045c08f);
    /* 0045c08f: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0045c093: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x45c098u); f_0082faac();
    /* 0045c098: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0045c09e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0045c0a2: fcomp dword ptr [0x900450] */ fx_compare(ST(0), R_F32((u32)(0x900450u))); FPOP();
    /* 0045c0a8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0045c0aa: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0045c0b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0045c0b1: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 0045c0b7: jb 0x45c0c4 */ if (fC) goto L_0045c0c4;
L_0045c0b9:; BB(0x0045c0b9);
    /* 0045c0b9: mov eax, 0x9a6754 */ r_eax = 0x9a6754u;
    /* 0045c0be: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0045c0c0: jne 0x45c0c9 */ if (!fZ) goto L_0045c0c9;
L_0045c0c2:; BB(0x0045c0c2);
    /* 0045c0c2: jmp 0x45c101 */ goto L_0045c101;
L_0045c0c4:; BB(0x0045c0c4);
    /* 0045c0c4: call 0x5963d0 */ r_esp -= 4; W32(r_esp, 0x45c0c9u); f_005963d0();
L_0045c0c9:; BB(0x0045c0c9);
    /* 0045c0c9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0045c0cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0045c0cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0045c0ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0045c0cf: ret  */ FN_RET(0x0045bdac); r_esp += 4; return;
L_0045c0d0:; BB(0x0045c0d0);
    /* 0045c0d0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c0d2: push dword ptr [ebx + 0x3f4] */ { u32 v = R32((u32)(r_ebx+0x3f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c0d8: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c0de: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x45c0e3u); f_0048e148();
    /* 0045c0e3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c0e6: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
    /* 0045c0ec: jmp 0x45be78 */ goto L_0045be78;
L_0045c0f1:; BB(0x0045c0f1);
    /* 0045c0f1: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45c0f6u); f_0048e364();
    /* 0045c0f6: mov edx, dword ptr [ebx + 0x3f8] */ r_edx = R32((u32)(r_ebx+0x3f8u));
    /* 0045c0fc: jmp 0x45bf6f */ goto L_0045bf6f;
L_0045c101:; BB(0x0045c101);
    /* 0045c101: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x45c106u); f_0048e364();
    /* 0045c106: jmp 0x45c0c9 */ goto L_0045c0c9;
L_0045c108:; BB(0x0045c108);
    /* 0045c108: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c10a: push dword ptr [ebx + 0x3f4] */ { u32 v = R32((u32)(r_ebx+0x3f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c110: push dword ptr [ebx + 0x3f0] */ { u32 v = R32((u32)(r_ebx+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0045c116: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x45c11bu); f_0048e148();
    /* 0045c11b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0045c11e: fld dword ptr [0x900448] */ FPUSH(R_F32((u32)(0x900448u)));
    /* 0045c124: jmp 0x45bfec */ goto L_0045bfec;
L_0045c129:; BB(0x0045c129);
    /* 0045c129: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c12b: jmp 0x45bf6f */ goto L_0045bf6f;
L_0045c130:; BB(0x0045c130);
    /* 0045c130: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c132: jmp 0x45bf6f */ goto L_0045bf6f;
L_0045c137:; BB(0x0045c137);
    /* 0045c137: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c139: jmp 0x45c0c9 */ goto L_0045c0c9;
L_0045c13b:; BB(0x0045c13b);
    /* 0045c13b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0045c13d: jmp 0x45c0c9 */ goto L_0045c0c9;
}

