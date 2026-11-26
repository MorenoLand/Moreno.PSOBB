#include "protos.h"

void f_00576194(void) /* sub_576194 */
{
    FN_ENTER(0x00576194);
    /* 00576194: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576197: fld dword ptr [0x926f78] */ FPUSH(R_F32((u32)(0x926f78u)));
    /* 0057619d: fld dword ptr [0x926f74] */ FPUSH(R_F32((u32)(0x926f74u)));
    /* 005761a3: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 005761a9: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 005761af: fld dword ptr [0x926f6c] */ FPUSH(R_F32((u32)(0x926f6cu)));
    /* 005761b5: fadd dword ptr [ecx + 0x36c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x36cu));
    /* 005761bb: fld dword ptr [0x926f70] */ FPUSH(R_F32((u32)(0x926f70u)));
    /* 005761c1: fld dword ptr [ecx + 0x364] */ FPUSH(R_F32((u32)(r_ecx+0x364u)));
    /* 005761c7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005761c9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005761cc: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005761d0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005761d5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005761d9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005761dd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005761e1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005761e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005761e6: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 005761e8: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 005761ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005761ec: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 005761ee: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 005761f0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005761f1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005761f3: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 005761f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005761f7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005761f9: ja 0x5761fd */ if ((!fC&&!fZ)) goto L_005761fd;
L_005761fb:; BB(0x005761fb);
    /* 005761fb: fst st(4) */ ST(4) = ST(0);
L_005761fd:; BB(0x005761fd);
    /* 005761fd: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00576201: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00576203: fstp dword ptr [ecx + 0x3cc] */ W_F32((u32)(r_ecx+0x3ccu), ST(0)); FPOP();
    /* 00576209: add edx, 0x12c */ {  u32 a = r_edx; u32 b = 0x12cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0057620f: mov word ptr [ecx + 0x3e0], dx */ W16((u32)(r_ecx+0x3e0u), (u16)r_edx);
    /* 00576216: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576217: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00576219: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0057621b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0057621d: ja 0x576221 */ if ((!fC&&!fZ)) goto L_00576221;
L_0057621f:; BB(0x0057621f);
    /* 0057621f: fst st(2) */ ST(2) = ST(0);
L_00576221:; BB(0x00576221);
    /* 00576221: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576223: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00576225: fstp dword ptr [ecx + 0x3d0] */ W_F32((u32)(r_ecx+0x3d0u), ST(0)); FPOP();
    /* 0057622b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0057622c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0057622e: jb 0x576232 */ if (fC) goto L_00576232;
L_00576230:; BB(0x00576230);
    /* 00576230: fst st(1) */ ST(1) = ST(0);
L_00576232:; BB(0x00576232);
    /* 00576232: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576234: fstp dword ptr [ecx + 0x3d8] */ W_F32((u32)(r_ecx+0x3d8u), ST(0)); FPOP();
    /* 0057623a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057623d: ret  */ FN_RET(0x00576194); r_esp += 4; return;
}

void f_00576240(void) /* sub_576240 */
{
    FN_ENTER(0x00576240);
    /* 00576240: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00576246: mov edx, 1 */ r_edx = 0x1u;
    /* 0057624b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057624e: jl 0x576252 */ if ((fS!=fO)) goto L_00576252;
L_00576250:; BB(0x00576250);
    /* 00576250: mov eax, edx */ r_eax = r_edx;
L_00576252:; BB(0x00576252);
    /* 00576252: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00576254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00576256: jg 0x57625a */ if ((!fZ&&fS==fO)) goto L_0057625a;
L_00576258:; BB(0x00576258);
    /* 00576258: mov eax, edx */ r_eax = r_edx;
L_0057625a:; BB(0x0057625a);
    /* 0057625a: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00576260: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576263: jne 0x576277 */ if (!fZ) goto L_00576277;
L_00576265:; BB(0x00576265);
    /* 00576265: mov dword ptr [ecx + 0x370], 1 */ W32((u32)(r_ecx+0x370u), 0x1u);
    /* 0057626f: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00576271: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x576276u); f_00787550();
    /* 00576276: ret  */ FN_RET(0x00576240); r_esp += 4; return;
L_00576277:; BB(0x00576277);
    /* 00576277: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 00576281: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 00576283: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x576288u); f_00787550();
    /* 00576288: ret  */ FN_RET(0x00576240); r_esp += 4; return;
}

void f_005762cc(void)
{
    FN_ENTER(0x005762cc);
    /* 005762cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005762cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005762cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005762d1: push 0x8d72e2 */ { u32 v = 0x8d72e2u; r_esp -= 4; W32(r_esp, v); }
    /* 005762d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005762dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005762dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005762e4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005762e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005762ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005762ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005762f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005762f3: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x5762f8u); f_00482a20();
    /* 005762f8: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005762fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005762fd: jne 0x576356 */ if (!fZ) goto L_00576356;
L_005762ff:; BB(0x005762ff);
    /* 005762ff: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00576306: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0057630b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x576310u); f_008581c5();
    /* 00576310: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576311: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00576314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576316: je 0x576525 */ if (fZ) goto L_00576525;
L_0057631c:; BB(0x0057631c);
    /* 0057631c: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00576323: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0057632a: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0057632d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057632f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576331: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576332: push 0x9bed70 */ { u32 v = 0x9bed70u; r_esp -= 4; W32(r_esp, v); }
    /* 00576337: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576339: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x57633eu); f_005b7a84();
    /* 0057633e: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00576341: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00576348: mov dword ptr [0xa7403c], eax */ W32((u32)(0xa7403cu), r_eax);
    /* 0057634d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576354: jmp 0x5763ab */ goto L_005763ab;
L_00576356:; BB(0x00576356);
    /* 00576356: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 0057635d: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00576362: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x576367u); f_008581c5();
    /* 00576367: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576368: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0057636b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057636d: je 0x57652c */ if (fZ) goto L_0057652c;
L_00576373:; BB(0x00576373);
    /* 00576373: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 0057637a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576381: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00576384: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00576386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576389: push 0x9bed20 */ { u32 v = 0x9bed20u; r_esp -= 4; W32(r_esp, v); }
    /* 0057638e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576390: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x576395u); f_005b7a84();
    /* 00576395: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00576398: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_0057639f:; BB(0x0057639f);
    /* 0057639f: mov dword ptr [0xa7403c], eax */ W32((u32)(0xa7403cu), r_eax);
    /* 005763a4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005763ab:; BB(0x005763ab);
    /* 005763ab: mov dword ptr [0x9beb6c], 0x40e00000 */ W32((u32)(0x9beb6cu), 0x40e00000u);
    /* 005763b5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763b7: mov dword ptr [0x9beb98], 0x40e00000 */ W32((u32)(0x9beb98u), 0x40e00000u);
    /* 005763c1: mov dword ptr [0x9bebc4], 0x41000000 */ W32((u32)(0x9bebc4u), 0x41000000u);
    /* 005763cb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763d0u); f_008581c5();
    /* 005763d0: mov dword ptr [0xa74038], eax */ W32((u32)(0xa74038u), r_eax);
    /* 005763d5: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763d7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763dcu); f_008581c5();
    /* 005763dc: mov dword ptr [0xa74034], eax */ W32((u32)(0xa74034u), r_eax);
    /* 005763e1: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763e3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763e8u); f_008581c5();
    /* 005763e8: mov dword ptr [0xa74030], eax */ W32((u32)(0xa74030u), r_eax);
    /* 005763ed: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005763ef: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5763f4u); f_008581c5();
    /* 005763f4: mov dword ptr [0xa7402c], eax */ W32((u32)(0xa7402cu), r_eax);
    /* 005763f9: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 005763fb: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x576400u); f_0077a684();
    /* 00576400: mov edx, dword ptr [0xa74038] */ r_edx = R32((u32)(0xa74038u));
    /* 00576406: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00576408: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0057640a: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x57640fu); f_0077a684();
    /* 0057640f: mov edx, dword ptr [0xa74038] */ r_edx = R32((u32)(0xa74038u));
    /* 00576415: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 00576417: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057641a: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57641fu); f_0077a698();
    /* 0057641f: mov edx, dword ptr [0xa74034] */ r_edx = R32((u32)(0xa74034u));
    /* 00576425: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00576427: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576429: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x57642eu); f_0077a698();
    /* 0057642e: mov edx, dword ptr [0xa74034] */ r_edx = R32((u32)(0xa74034u));
    /* 00576434: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00576436: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00576439: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57643eu); f_0077a6b4();
    /* 0057643e: mov edx, dword ptr [0xa74030] */ r_edx = R32((u32)(0xa74030u));
    /* 00576444: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00576446: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576448: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x57644du); f_0077a6b4();
    /* 0057644d: mov edx, dword ptr [0xa74030] */ r_edx = R32((u32)(0xa74030u));
    /* 00576453: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00576455: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00576458: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57645du); f_0077a6cc();
    /* 0057645d: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 00576463: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00576465: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00576467: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x57646cu); f_0077a6cc();
    /* 0057646c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0057646f: mov edx, dword ptr [0xa7402c] */ r_edx = R32((u32)(0xa7402cu));
    /* 00576475: mov ebx, dword ptr [0x926f20] */ r_ebx = R32((u32)(0x926f20u));
    /* 0057647b: movzx esi, word ptr [0x926f24] */ r_esi = (u32)R16((u32)(0x926f24u));
    /* 00576482: movzx edi, word ptr [0x926f26] */ r_edi = (u32)R16((u32)(0x926f26u));
    /* 00576489: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0057648c: mov edx, dword ptr [0xa7403c] */ r_edx = R32((u32)(0xa7403cu));
    /* 00576492: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00576495: mov word ptr [ebp - 0x24], si */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_esi);
    /* 00576499: mov eax, 0x2c */ r_eax = 0x2cu;
    /* 0057649e: mov word ptr [ebp - 0x30], ax */ W16((u32)(r_ebp+0xffffffd0u), (u16)r_eax);
    /* 005764a2: movzx eax, word ptr [0x926f28] */ r_eax = (u32)R16((u32)(0x926f28u));
    /* 005764a9: mov word ptr [ebp - 0x22], di */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_edi);
    /* 005764ad: mov ecx, 0x2e */ r_ecx = 0x2eu;
    /* 005764b2: mov word ptr [ebp - 0x2e], cx */ W16((u32)(r_ebp+0xffffffd2u), (u16)r_ecx);
    /* 005764b6: mov word ptr [ebp - 0x20], ax */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_eax);
    /* 005764ba: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 005764c0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005764c2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_005764c5:; BB(0x005764c5);
    /* 005764c5: movsx edi, word ptr [ebp + ebx*2 - 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*2+0xffffffd0u));
    /* 005764ca: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 005764cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005764ce: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 005764d4: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 005764d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005764d9: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 005764dc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764de: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005764e0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764e2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005764e4: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005764e6: push dword ptr [edx*4 + 0x9beb6c] */ { u32 v = R32((u32)(r_edx*4+0x9beb6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005764ed: push dword ptr [ecx + esi*8 + 0xc] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005764f1: push dword ptr [ecx + esi*8 + 8] */ { u32 v = R32((u32)(r_ecx+r_esi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005764f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005764f6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x5764fbu); f_00608470();
    /* 005764fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005764fe: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00576501: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00576504: jge 0x57650e */ if ((fS==fO)) goto L_0057650e;
L_00576506:; BB(0x00576506);
    /* 00576506: mov edx, dword ptr [0xa7403c] */ r_edx = R32((u32)(0xa7403cu));
    /* 0057650c: jmp 0x5764c5 */ goto L_005764c5;
L_0057650e:; BB(0x0057650e);
    /* 0057650e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576511: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00576514: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576517: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057651a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576521: mov esp, ebp */ r_esp = r_ebp;
    /* 00576523: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576524: ret  */ FN_RET(0x005762cc); r_esp += 4; return;
L_00576525:; BB(0x00576525);
    /* 00576525: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00576527: jmp 0x576348 */ f_00576348(); return;
L_0057652c:; BB(0x0057652c);
    /* 0057652c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0057652e: jmp 0x57639f */ goto L_0057639f;
}

void f_00576534(void) /* sub_576534 */
{
    FN_ENTER(0x00576534);
    /* 00576534: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00576535: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00576537: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00576539: call 0x576558 */ r_esp -= 4; W32(r_esp, 0x57653eu); f_00576558();
    /* 0057653e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00576542: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576544: jne 0x57654a */ if (!fZ) goto L_0057654a;
L_00576546:; BB(0x00576546);
    /* 00576546: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00576547: ret 4 */ FN_RET(0x00576534); r_esp += 8; return;
L_0057654a:; BB(0x0057654a);
    /* 0057654a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057654b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x576550u); f_005c2f74();
    /* 00576550: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576551: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00576552: ret 4 */ FN_RET(0x00576534); r_esp += 8; return;
}

void f_00576558(void) /* sub_576558 */
{
    FN_ENTER(0x00576558);
    /* 00576558: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576559: mov ebp, esp */ r_ebp = r_esp;
    /* 0057655b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057655d: push 0x8d72fc */ { u32 v = 0x8d72fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00576562: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576568: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576569: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00576570: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576573: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576576: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00576579: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057657c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057657f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00576582: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576585: mov dword ptr [ecx], 0xb06968 */ W32((u32)(r_ecx), 0xb06968u);
    /* 0057658b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576592: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x576597u); f_006de56c();
    /* 00576597: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057659a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005765a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005765a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005765a4: ret  */ FN_RET(0x00576558); r_esp += 4; return;
}

void f_0057656c(void)
{
    FN_ENTER(0x0057656c);
    /* 0057656c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0057656e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00576570: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576573: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576576: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00576579: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0057657c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057657f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00576582: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576585: mov dword ptr [ecx], 0xb06968 */ W32((u32)(r_ecx), 0xb06968u);
    /* 0057658b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576592: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x576597u); f_006de56c();
    /* 00576597: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057659a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005765a1: mov esp, ebp */ r_esp = r_ebp;
    /* 005765a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005765a4: ret  */ FN_RET(0x0057656c); r_esp += 4; return;
}

void f_005765a8(void) /* sub_5765A8 */
{
    FN_ENTER(0x005765a8);
    /* 005765a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005765a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005765ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005765ad: push 0x8d7324 */ { u32 v = 0x8d7324u; r_esp -= 4; W32(r_esp, v); }
    /* 005765b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005765b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005765b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005765c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005765c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005765c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005765c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005765cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005765cf: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 005765d4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005765db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5765e0u); f_005caba4();
    /* 005765e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005765e1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005765e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005765e6: je 0x57661a */ if (fZ) goto L_0057661a;
L_005765e8:; BB(0x005765e8);
    /* 005765e8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005765ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005765f6: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005765f9: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005765fc: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005765ff: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576602: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576605: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576608: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057660b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057660e: call 0x576628 */ r_esp -= 4; W32(r_esp, 0x576613u); f_00576628();
    /* 00576613: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0057661a:; BB(0x0057661a);
    /* 0057661a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057661d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576624: mov esp, ebp */ r_esp = r_ebp;
    /* 00576626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576627: ret  */ FN_RET(0x005765a8); r_esp += 4; return;
}

void f_00576628(void) /* sub_576628 */
{
    FN_ENTER(0x00576628);
    /* 00576628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576629: mov ebp, esp */ r_ebp = r_esp;
    /* 0057662b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057662d: push 0x8d7340 */ { u32 v = 0x8d7340u; r_esp -= 4; W32(r_esp, v); }
    /* 00576632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00576640: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576646: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00576649: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0057664c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0057664f: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00576652: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00576655: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00576658: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0057665b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0057665e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057665f: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00576662: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00576665: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00576668: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00576669: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057666c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0057666f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00576672: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00576675: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x57667au); f_006de5f0();
    /* 0057667a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576681: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00576684: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576687: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0057668a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0057668d: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 00576693: mov dword ptr [eax + 0xf8], ebx */ W32((u32)(r_eax+0xf8u), r_ebx);
    /* 00576699: mov dword ptr [eax], 0xb06968 */ W32((u32)(r_eax), 0xb06968u);
    /* 0057669f: mov edx, dword ptr [0x9beda0] */ r_edx = R32((u32)(0x9beda0u));
    /* 005766a5: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005766a8: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 005766ae: mov dword ptr [eax + 0xfc], 0 */ W32((u32)(r_eax+0xfcu), 0x0u);
    /* 005766b8: mov dword ptr [eax + 0xf0], esi */ W32((u32)(r_eax+0xf0u), r_esi);
    /* 005766be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005766c0: je 0x5766d1 */ if (fZ) goto L_005766d1;
L_005766c2:; BB(0x005766c2);
    /* 005766c2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005766c5: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005766cb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005766ce: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
L_005766d1:; BB(0x005766d1);
    /* 005766d1: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005766d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005766d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005766d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005766d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005766d9: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 005766de: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5766e3u); f_00814298();
    /* 005766e3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005766e6: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005766e9: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 005766ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005766ee: je 0x5766fb */ if (fZ) goto L_005766fb;
L_005766f0:; BB(0x005766f0);
    /* 005766f0: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 005766f4: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_005766fb:; BB(0x005766fb);
    /* 005766fb: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005766fe: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00576701: mov eax, edx */ r_eax = r_edx;
    /* 00576703: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576706: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057670d: mov esp, ebp */ r_esp = r_ebp;
    /* 0057670f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576710: ret 0x1c */ FN_RET(0x00576628); r_esp += 32; return;
}

void f_00576714(void) /* sub_576714 */
{
    FN_ENTER(0x00576714);
    /* 00576714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576715: mov ebp, esp */ r_ebp = r_esp;
    /* 00576717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576719: push 0x8d7368 */ { u32 v = 0x8d7368u; r_esp -= 4; W32(r_esp, v); }
    /* 0057671e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576725: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0057672c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0057672f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576732: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00576735: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00576738: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0057673b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00576740: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00576747: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x57674cu); f_005caba4();
    /* 0057674c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0057674d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00576750: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576752: je 0x576789 */ if (fZ) goto L_00576789;
L_00576754:; BB(0x00576754);
    /* 00576754: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0057675b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00576762: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576765: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576768: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057676b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0057676e: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576771: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576774: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576777: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057677a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057677d: call 0x576798 */ r_esp -= 4; W32(r_esp, 0x576782u); f_00576798();
    /* 00576782: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00576789:; BB(0x00576789);
    /* 00576789: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0057678c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576793: mov esp, ebp */ r_esp = r_ebp;
    /* 00576795: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576796: ret  */ FN_RET(0x00576714); r_esp += 4; return;
}

void f_00576798(void) /* sub_576798 */
{
    FN_ENTER(0x00576798);
    /* 00576798: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576799: mov ebp, esp */ r_ebp = r_esp;
    /* 0057679b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0057679d: push 0x8d7384 */ { u32 v = 0x8d7384u; r_esp -= 4; W32(r_esp, v); }
    /* 005767a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005767a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005767a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005767b0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005767b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005767b6: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005767b9: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 005767bc: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 005767bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005767c2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005767c5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005767c8: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 005767cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005767cc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005767cf: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005767d2: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005767d5: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 005767d8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 005767db: mov edx, dword ptr [ebp + 0x1c] */ r_edx = R32((u32)(r_ebp+0x1cu));
    /* 005767de: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005767e1: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005767e4: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 005767e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005767e8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005767eb: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x5767f0u); f_006de5f0();
    /* 005767f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005767f7: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 005767fa: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005767fd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00576800: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576803: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00576806: mov dword ptr [eax], 0xb06968 */ W32((u32)(r_eax), 0xb06968u);
    /* 0057680c: mov edx, dword ptr [0x9beda0] */ r_edx = R32((u32)(0x9beda0u));
    /* 00576812: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00576815: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 0057681b: mov dword ptr [eax + 0xfc], 1 */ W32((u32)(r_eax+0xfcu), 0x1u);
    /* 00576825: mov dword ptr [eax + 0xec], ecx */ W32((u32)(r_eax+0xecu), r_ecx);
    /* 0057682b: mov dword ptr [eax + 0xf8], ebx */ W32((u32)(r_eax+0xf8u), r_ebx);
    /* 00576831: mov dword ptr [eax + 0xf0], esi */ W32((u32)(r_eax+0xf0u), r_esi);
    /* 00576837: mov dword ptr [eax + 0xf4], edi */ W32((u32)(r_eax+0xf4u), r_edi);
    /* 0057683d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0057683f: je 0x576850 */ if (fZ) goto L_00576850;
L_00576841:; BB(0x00576841);
    /* 00576841: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00576844: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 0057684a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0057684d: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00576850:; BB(0x00576850);
    /* 00576850: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00576853: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00576855: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576856: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576858: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0057685d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x576862u); f_00814298();
    /* 00576862: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576865: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00576868: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 0057686b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0057686d: je 0x57687a */ if (fZ) goto L_0057687a;
L_0057686f:; BB(0x0057686f);
    /* 0057686f: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00576873: mov word ptr [edx + 0xb4], ax */ W16((u32)(r_edx+0xb4u), (u16)r_eax);
L_0057687a:; BB(0x0057687a);
    /* 0057687a: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057687d: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00576880: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00576883: mov eax, edx */ r_eax = r_edx;
    /* 00576885: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576888: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057688f: mov esp, ebp */ r_esp = r_ebp;
    /* 00576891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576892: ret 0x20 */ FN_RET(0x00576798); r_esp += 36; return;
}

void f_00576898(void) /* sub_576898 */
{
    FN_ENTER(0x00576898);
    /* 00576898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576899: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0057689a: mov edi, ecx */ r_edi = r_ecx;
    /* 0057689c: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 005768a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005768a4: je 0x576900 */ if (fZ) goto L_00576900;
L_005768a6:; BB(0x005768a6);
    /* 005768a6: movzx eax, word ptr [edi + 0xb4] */ r_eax = (u32)R16((u32)(r_edi+0xb4u));
    /* 005768ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005768ae: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5768b3u); f_007b4d18();
    /* 005768b3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005768b4: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005768b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005768b9: je 0x576910 */ if (fZ) goto L_00576910;
L_005768bb:; BB(0x005768bb);
    /* 005768bb: push dword ptr [edi + 0xf0] */ { u32 v = R32((u32)(r_edi+0xf0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005768c1: lea ebx, [edi + 0x20] */ r_ebx = (u32)(r_edi+0x20u);
    /* 005768c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005768c5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5768cau); f_0050b510();
    /* 005768ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005768cd: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 005768d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005768d6: je 0x5768ef */ if (fZ) goto L_005768ef;
L_005768d8:; BB(0x005768d8);
    /* 005768d8: mov ecx, edi */ r_ecx = r_edi;
    /* 005768da: call 0x6deadc */ r_esp -= 4; W32(r_esp, 0x5768dfu); f_006deadc();
    /* 005768df: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005768e3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005768e8: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005768ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005768ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005768ee: ret  */ FN_RET(0x00576898); r_esp += 4; return;
L_005768ef:; BB(0x005768ef);
    /* 005768ef: push dword ptr [edi + 0xf4] */ { u32 v = R32((u32)(r_edi+0xf4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005768f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005768f6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5768fbu); f_0050b510();
    /* 005768fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005768fe: jmp 0x5768d8 */ goto L_005768d8;
L_00576900:; BB(0x00576900);
    /* 00576900: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00576904: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576909: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057690d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057690e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057690f: ret  */ FN_RET(0x00576898); r_esp += 4; return;
L_00576910:; BB(0x00576910);
    /* 00576910: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00576914: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576919: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0057691d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0057691e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0057691f: ret  */ FN_RET(0x00576898); r_esp += 4; return;
}

void f_00576920(void) /* sub_576920 */
{
    FN_ENTER(0x00576920);
    /* 00576920: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00576921: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576922: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576925: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576927: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0057692b: mov eax, dword ptr [ebp + 0xec] */ r_eax = R32((u32)(r_ebp+0xecu));
    /* 00576931: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 00576937: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0057693b: cmp ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0057693e: jl 0x57698f */ if ((fS!=fO)) goto L_0057698f;
L_00576940:; BB(0x00576940);
    /* 00576940: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576943: jg 0x57698f */ if ((!fZ&&fS==fO)) goto L_0057698f;
L_00576945:; BB(0x00576945);
    /* 00576945: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00576947: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00576949: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0057694c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00576951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576953: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00576954: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576958: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057695a: mov ecx, esi */ r_ecx = r_esi;
    /* 0057695c: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0057695f: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x576962u); call_ind(t); }
    /* 00576962: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576964: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 0057696a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0057696c: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0057696f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00576974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576975: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576976: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576978: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0057697c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0057697d: mov ecx, esi */ r_ecx = r_esi;
    /* 0057697f: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00576982: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x576985u); call_ind(t); }
    /* 00576985: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576987: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0057698a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0057698b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0057698c: ret 4 */ FN_RET(0x00576920); r_esp += 8; return;
L_0057698f:; BB(0x0057698f);
    /* 0057698f: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00576991: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00576994: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00576999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057699a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0057699b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0057699d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005769a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005769a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005769a4: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005769a7: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5769aau); call_ind(t); }
    /* 005769aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005769ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005769af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005769b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005769b1: ret 4 */ FN_RET(0x00576920); r_esp += 8; return;
}

void f_005769b4(void) /* sub_5769B4 */
{
    FN_ENTER(0x005769b4);
    /* 005769b4: mov dword ptr [0xa74044], 0x3f800000 */ W32((u32)(0xa74044u), 0x3f800000u);
    /* 005769be: mov dword ptr [0xa74048], 0x41000000 */ W32((u32)(0xa74048u), 0x41000000u);
    /* 005769c8: mov dword ptr [0xa7404c], 0x3fc00000 */ W32((u32)(0xa7404cu), 0x3fc00000u);
    /* 005769d2: ret  */ FN_RET(0x005769b4); r_esp += 4; return;
}

void f_005769d4(void) /* sub_5769D4 */
{
    FN_ENTER(0x005769d4);
    /* 005769d4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005769d5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005769d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005769d9: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x5769deu); f_005769f8();
    /* 005769de: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005769e2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005769e4: jne 0x5769ea */ if (!fZ) goto L_005769ea;
L_005769e6:; BB(0x005769e6);
    /* 005769e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005769e7: ret 4 */ FN_RET(0x005769d4); r_esp += 8; return;
L_005769ea:; BB(0x005769ea);
    /* 005769ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005769eb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5769f0u); f_00857e98();
    /* 005769f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005769f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005769f2: ret 4 */ FN_RET(0x005769d4); r_esp += 8; return;
}

void f_005769f8(void) /* sub_5769F8 */
{
    FN_ENTER(0x005769f8);
    /* 005769f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005769f9: mov ebp, esp */ r_ebp = r_esp;
    /* 005769fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005769fd: push 0x8d73a0 */ { u32 v = 0x8d73a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00576a02: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576a09: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00576a10: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576a13: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576a16: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00576a19: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00576a1c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00576a1f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00576a22: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576a25: mov dword ptr [ecx], 0xb069b0 */ W32((u32)(r_ecx), 0xb069b0u);
    /* 00576a2b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576a32: call 0x579464 */ r_esp -= 4; W32(r_esp, 0x576a37u); f_00579464();
    /* 00576a37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576a3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576a41: mov esp, ebp */ r_esp = r_ebp;
    /* 00576a43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576a44: ret  */ FN_RET(0x005769f8); r_esp += 4; return;
}

void f_00576a48(void) /* sub_576A48 */
{
    FN_ENTER(0x00576a48);
    /* 00576a48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576a49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576a4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00576a4d: call 0x57946c */ r_esp -= 4; W32(r_esp, 0x576a52u); f_0057946c();
    /* 00576a52: mov dword ptr [ebp], 0xb069b0 */ W32((u32)(r_ebp), 0xb069b0u);
    /* 00576a59: mov eax, ebp */ r_eax = r_ebp;
    /* 00576a5b: mov dword ptr [ebp + 0x18], 0 */ W32((u32)(r_ebp+0x18u), 0x0u);
    /* 00576a62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576a63: ret  */ FN_RET(0x00576a48); r_esp += 4; return;
}

void f_00576a64(void) /* sub_576A64 */
{
    FN_ENTER(0x00576a64);
    /* 00576a64: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 00576a68: fdivr dword ptr [0x927260] */ ST(0) = R_F32((u32)(0x927260u)) / ST(0);
    /* 00576a6e: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 00576a71: ret 4 */ FN_RET(0x00576a64); r_esp += 8; return;
}

void f_00576a74(void) /* sub_576A74 */
{
    FN_ENTER(0x00576a74);
    /* 00576a74: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 00576a7b: mov dword ptr [ecx + 4], 0xbf800000 */ W32((u32)(r_ecx+0x4u), 0xbf800000u);
    /* 00576a82: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 00576a89: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 00576a90: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 00576a97: ret  */ FN_RET(0x00576a74); r_esp += 4; return;
}

void f_00576a98(void) /* sub_576A98 */
{
    FN_ENTER(0x00576a98);
    /* 00576a98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576a99: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576a9b: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576a9e: fsub dword ptr [ebp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x14u));
    /* 00576aa1: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00576aa4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00576aa6: call 0x576ac4 */ r_esp -= 4; W32(r_esp, 0x576aabu); f_00576ac4();
    /* 00576aab: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576aae: fcomp dword ptr [0x92724c] */ fx_compare(ST(0), R_F32((u32)(0x92724cu))); FPOP();
    /* 00576ab4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576ab6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00576ab8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576ab9: mov eax, 1 */ r_eax = 0x1u;
    /* 00576abe: jbe 0x576ac2 */ if ((fC||fZ)) goto L_00576ac2;
L_00576ac0:; BB(0x00576ac0);
    /* 00576ac0: mov eax, edx */ r_eax = r_edx;
L_00576ac2:; BB(0x00576ac2);
    /* 00576ac2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576ac3: ret  */ FN_RET(0x00576a98); r_esp += 4; return;
}

void f_00576ac4(void) /* sub_576AC4 */
{
    FN_ENTER(0x00576ac4);
    /* 00576ac4: fld dword ptr [0x927248] */ FPUSH(R_F32((u32)(0x927248u)));
    /* 00576aca: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00576acd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00576acf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576ad1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576ad2: ja 0x576ae0 */ if ((!fC&&!fZ)) goto L_00576ae0;
L_00576ad4:; BB(0x00576ad4);
    /* 00576ad4: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00576ad6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576ad8: mov dword ptr [ecx + 4], 0xbf800000 */ W32((u32)(r_ecx+0x4u), 0xbf800000u);
    /* 00576adf: ret  */ FN_RET(0x00576ac4); r_esp += 4; return;
L_00576ae0:; BB(0x00576ae0);
    /* 00576ae0: fcom dword ptr [0x927244] */ fx_compare(ST(0), R_F32((u32)(0x927244u))); 
    /* 00576ae6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576ae8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576ae9: jae 0x576b02 */ if (!fC) goto L_00576b02;
L_00576aeb:; BB(0x00576aeb);
    /* 00576aeb: fld dword ptr [0x92723c] */ FPUSH(R_F32((u32)(0x92723cu)));
    /* 00576af1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00576af3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00576af5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00576af7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576af9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576afb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576afc: je 0x576b0e */ if (fZ) goto L_00576b0e;
L_00576afe:; BB(0x00576afe);
    /* 00576afe: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00576b01: ret  */ FN_RET(0x00576ac4); r_esp += 4; return;
L_00576b02:; BB(0x00576b02);
    /* 00576b02: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00576b04: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576b06: mov dword ptr [ecx + 4], 0x3f800000 */ W32((u32)(r_ecx+0x4u), 0x3f800000u);
    /* 00576b0d: ret  */ FN_RET(0x00576ac4); r_esp += 4; return;
L_00576b0e:; BB(0x00576b0e);
    /* 00576b0e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576b10: mov dword ptr [ecx + 4], 0x3c23d70a */ W32((u32)(r_ecx+0x4u), 0x3c23d70au);
    /* 00576b17: ret  */ FN_RET(0x00576ac4); r_esp += 4; return;
}

void f_00576b18(void) /* sub_576B18 */
{
    FN_ENTER(0x00576b18);
    /* 00576b18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576b19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576b1b: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576b1e: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00576b21: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00576b24: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00576b26: call 0x576ac4 */ r_esp -= 4; W32(r_esp, 0x576b2bu); f_00576ac4();
    /* 00576b2b: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576b2e: fcomp dword ptr [0x927234] */ fx_compare(ST(0), R_F32((u32)(0x927234u))); FPOP();
    /* 00576b34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576b36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00576b38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576b39: mov eax, 1 */ r_eax = 0x1u;
    /* 00576b3e: jae 0x576b42 */ if (!fC) goto L_00576b42;
L_00576b40:; BB(0x00576b40);
    /* 00576b40: mov eax, edx */ r_eax = r_edx;
L_00576b42:; BB(0x00576b42);
    /* 00576b42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576b43: ret  */ FN_RET(0x00576b18); r_esp += 4; return;
}

void f_00576b44(void) /* sub_576B44 */
{
    FN_ENTER(0x00576b44);
    /* 00576b44: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00576b47: fcomp dword ptr [0x927230] */ fx_compare(ST(0), R_F32((u32)(0x927230u))); FPOP();
    /* 00576b4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576b4f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576b50: jb 0x576b53 */ if (fC) goto L_00576b53;
L_00576b52:; BB(0x00576b52);
    /* 00576b52: ret  */ FN_RET(0x00576b44); r_esp += 4; return;
L_00576b53:; BB(0x00576b53);
    /* 00576b53: call 0x579530 */ r_esp -= 4; W32(r_esp, 0x576b58u); f_00579530();
    /* 00576b58: mov ecx, 0x2100 */ r_ecx = 0x2100u;
    /* 00576b5d: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x576b62u); f_0082e1c4();
    /* 00576b62: ret  */ FN_RET(0x00576b44); r_esp += 4; return;
}

void f_00576b64(void) /* sub_576B64 */
{
    FN_ENTER(0x00576b64);
    /* 00576b64: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00576b67: fcomp dword ptr [0x92722c] */ fx_compare(ST(0), R_F32((u32)(0x92722cu))); FPOP();
    /* 00576b6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576b6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576b70: jb 0x576b73 */ if (fC) goto L_00576b73;
L_00576b72:; BB(0x00576b72);
    /* 00576b72: ret  */ FN_RET(0x00576b64); r_esp += 4; return;
L_00576b73:; BB(0x00576b73);
    /* 00576b73: call 0x57955c */ r_esp -= 4; W32(r_esp, 0x576b78u); f_0057955c();
    /* 00576b78: ret  */ FN_RET(0x00576b64); r_esp += 4; return;
}

void f_00576b7c(void) /* sub_576B7C */
{
    FN_ENTER(0x00576b7c);
    /* 00576b7c: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00576b7f: fcomp dword ptr [0x927228] */ fx_compare(ST(0), R_F32((u32)(0x927228u))); FPOP();
    /* 00576b85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576b87: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00576b89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576b8a: mov eax, 1 */ r_eax = 0x1u;
    /* 00576b8f: ja 0x576b93 */ if ((!fC&&!fZ)) goto L_00576b93;
L_00576b91:; BB(0x00576b91);
    /* 00576b91: mov eax, edx */ r_eax = r_edx;
L_00576b93:; BB(0x00576b93);
    /* 00576b93: ret  */ FN_RET(0x00576b7c); r_esp += 4; return;
}

void f_00576b94(void) /* sub_576B94 */
{
    FN_ENTER(0x00576b94);
    /* 00576b94: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00576b98: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00576b9c: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00576b9f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00576ba2: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00576ba6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00576ba9: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00576bac: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00576bb0: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 00576bb3: ret 0x10 */ FN_RET(0x00576b94); r_esp += 20; return;
}

void f_00576bb8(void) /* sub_576BB8 */
{
    FN_ENTER(0x00576bb8);
    /* 00576bb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576bb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576bbb: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576bbe: fadd dword ptr [ebp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x14u));
    /* 00576bc1: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00576bc4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00576bc6: call 0x576ac4 */ r_esp -= 4; W32(r_esp, 0x576bcbu); f_00576ac4();
    /* 00576bcb: fld dword ptr [ebp + 0x18] */ FPUSH(R_F32((u32)(r_ebp+0x18u)));
    /* 00576bce: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00576bd2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576bd4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 00576bd6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576bd7: mov eax, 1 */ r_eax = 0x1u;
    /* 00576bdc: jae 0x576be0 */ if (!fC) goto L_00576be0;
L_00576bde:; BB(0x00576bde);
    /* 00576bde: mov eax, edx */ r_eax = r_edx;
L_00576be0:; BB(0x00576be0);
    /* 00576be0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576be1: ret 4 */ FN_RET(0x00576bb8); r_esp += 8; return;
}

void f_00576be4(void) /* sub_576BE4 */
{
    FN_ENTER(0x00576be4);
    /* 00576be4: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 00576be7: fcom dword ptr [0x927224] */ fx_compare(ST(0), R_F32((u32)(0x927224u))); 
    /* 00576bed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576bef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576bf0: jbe 0x576c05 */ if ((fC||fZ)) goto L_00576c05;
L_00576bf2:; BB(0x00576bf2);
    /* 00576bf2: fcom dword ptr [0x927220] */ fx_compare(ST(0), R_F32((u32)(0x927220u))); 
    /* 00576bf8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00576bfa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00576bfb: jae 0x576c05 */ if (!fC) goto L_00576c05;
L_00576bfd:; BB(0x00576bfd);
    /* 00576bfd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576bff: mov eax, 1 */ r_eax = 0x1u;
    /* 00576c04: ret  */ FN_RET(0x00576be4); r_esp += 4; return;
L_00576c05:; BB(0x00576c05);
    /* 00576c05: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00576c07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576c09: ret  */ FN_RET(0x00576be4); r_esp += 4; return;
}

void f_00576c0c(void) /* sub_576C0C */
{
    FN_ENTER(0x00576c0c);
    /* 00576c0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576c0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00576c0f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00576c11: mov ecx, edi */ r_ecx = r_edi;
    /* 00576c13: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00576c15: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x576c18u); call_ind(t); }
    /* 00576c18: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 00576c1b: fmul dword ptr [0x927218] */ ST(0) = ST(0) * R_F32((u32)(0x927218u));
    /* 00576c21: fadd dword ptr [0x92721c] */ ST(0) = ST(0) + R_F32((u32)(0x92721cu));
    /* 00576c27: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00576c2a: mov dword ptr [edi + 4], 0x3f800000 */ W32((u32)(r_edi+0x4u), 0x3f800000u);
    /* 00576c31: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 00576c38: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 00576c3f: mov dword ptr [edi + 0x10], 0 */ W32((u32)(r_edi+0x10u), 0x0u);
    /* 00576c46: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00576c47: ret  */ FN_RET(0x00576c0c); r_esp += 4; return;
}

void f_00576c48(void) /* sub_576C48 */
{
    FN_ENTER(0x00576c48);
    /* 00576c48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576c49: mov edi, ecx */ r_edi = r_ecx;
    /* 00576c4b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00576c4d: mov ecx, edi */ r_ecx = r_edi;
    /* 00576c4f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00576c51: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x576c54u); call_ind(t); }
    /* 00576c54: fld dword ptr [edi + 0x14] */ FPUSH(R_F32((u32)(r_edi+0x14u)));
    /* 00576c57: fmul dword ptr [0x92720c] */ ST(0) = ST(0) * R_F32((u32)(0x92720cu));
    /* 00576c5d: fstp dword ptr [edi + 0x18] */ W_F32((u32)(r_edi+0x18u), ST(0)); FPOP();
    /* 00576c60: mov dword ptr [edi + 4], 0xbf800000 */ W32((u32)(r_edi+0x4u), 0xbf800000u);
    /* 00576c67: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 00576c6e: mov dword ptr [edi + 0xc], 0 */ W32((u32)(r_edi+0xcu), 0x0u);
    /* 00576c75: mov dword ptr [edi + 0x10], 0 */ W32((u32)(r_edi+0x10u), 0x0u);
    /* 00576c7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00576c7d: ret  */ FN_RET(0x00576c48); r_esp += 4; return;
}

void f_00576c80(void) /* sub_576C80 */
{
    FN_ENTER(0x00576c80);
    /* 00576c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576c81: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00576c83: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00576c85: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x576c8au); f_008173d0();
    /* 00576c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00576c8c: jne 0x576caf */ if (!fZ) goto L_00576caf;
L_00576c8e:; BB(0x00576c8e);
    /* 00576c8e: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00576c91: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00576c94: jle 0x576caf */ if ((fZ||fS!=fO)) goto L_00576caf;
L_00576c96:; BB(0x00576c96);
    /* 00576c96: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x576c9bu); f_007a902c();
    /* 00576c9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00576c9d: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 00576ca0: mov ebp, dword ptr [ebp + 0x1c] */ r_ebp = R32((u32)(r_ebp+0x1cu));
    /* 00576ca3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00576ca5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576ca6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576ca7: call 0x82b1c8 */ r_esp -= 4; W32(r_esp, 0x576cacu); f_0082b1c8();
    /* 00576cac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00576caf:; BB(0x00576caf);
    /* 00576caf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576cb0: ret  */ FN_RET(0x00576c80); r_esp += 4; return;
}

void f_00576cb4(void) /* sub_576CB4 */
{
    FN_ENTER(0x00576cb4);
    /* 00576cb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00576cb5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00576cb6: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576cb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00576cbb: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00576cbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00576cc0: jle 0x576d88 */ if ((fZ||fS!=fO)) goto L_00576d88;
L_00576cc6:; BB(0x00576cc6);
    /* 00576cc6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00576cc9: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00576ccc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00576ccf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00576cd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576cd2: call 0x782ca4 */ r_esp -= 4; W32(r_esp, 0x576cd7u); f_00782ca4();
    /* 00576cd7: mov esi, eax */ r_esi = r_eax;
    /* 00576cd9: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00576cdc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00576ce0: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00576ce4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00576ce6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00576ce7: call 0x782ca4 */ r_esp -= 4; W32(r_esp, 0x576cecu); f_00782ca4();
    /* 00576cec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00576cef: test eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00576cf1: je 0x576d3e */ if (fZ) goto L_00576d3e;
L_00576cf3:; BB(0x00576cf3);
    /* 00576cf3: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00576cf6: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00576cf9: lea edx, [ebx + 0x40] */ r_edx = (u32)(r_ebx+0x40u);
    /* 00576cfc: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00576cff: mov dword ptr [ebx + 0x1c], esi */ W32((u32)(r_ebx+0x1cu), r_esi);
    /* 00576d02: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00576d04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00576d06: jle 0x576d88 */ if ((fZ||fS!=fO)) goto L_00576d88;
L_00576d0c:; BB(0x00576d0c);
    /* 00576d0c: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00576d0e: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00576d10: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00576d13: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00576d16: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 00576d19: mov dword ptr [ecx + 8], esi */ W32((u32)(r_ecx+0x8u), r_esi);
    /* 00576d1c: mov esi, dword ptr [edx + 0x10] */ r_esi = R32((u32)(r_edx+0x10u));
    /* 00576d1f: mov dword ptr [ecx + 0x10], esi */ W32((u32)(r_ecx+0x10u), r_esi);
    /* 00576d22: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 00576d25: mov dword ptr [ecx + 0x14], esi */ W32((u32)(r_ecx+0x14u), r_esi);
    /* 00576d28: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00576d2b: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 00576d2e: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00576d31: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d34: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00576d37: cmp eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576d3a: jl 0x576d0c */ if ((fS!=fO)) goto L_00576d0c;
L_00576d3c:; BB(0x00576d3c);
    /* 00576d3c: jmp 0x576d88 */ goto L_00576d88;
L_00576d3e:; BB(0x00576d3e);
    /* 00576d3e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00576d41: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576d44: jle 0x576d7b */ if ((fZ||fS!=fO)) goto L_00576d7b;
L_00576d46:; BB(0x00576d46);
    /* 00576d46: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00576d49: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d4b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d4d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d4f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d51: lea esi, [ebx + edx] */ r_esi = (u32)(r_ebx+r_edx);
    /* 00576d54: lea ecx, [esi - 0x20] */ r_ecx = (u32)(r_esi+0xffffffe0u);
    /* 00576d57: mov edx, 1 */ r_edx = 0x1u;
    /* 00576d5c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576d5f: jle 0x576d7b */ if ((fZ||fS!=fO)) goto L_00576d7b;
L_00576d61:; BB(0x00576d61);
    /* 00576d61: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 00576d64: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00576d67: mov eax, dword ptr [ecx - 4] */ r_eax = R32((u32)(r_ecx+0xfffffffcu));
    /* 00576d6a: mov dword ptr [esi - 4], eax */ W32((u32)(r_esi+0xfffffffcu), r_eax);
    /* 00576d6d: add esi, -0x20 */ {  u32 a = r_esi; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00576d70: add ecx, -0x20 */ {  u32 a = r_ecx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00576d73: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576d76: cmp edx, dword ptr [ebx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576d79: jl 0x576d61 */ if ((fS!=fO)) goto L_00576d61;
L_00576d7b:; BB(0x00576d7b);
    /* 00576d7b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00576d7e: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00576d82: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00576d85: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
L_00576d88:; BB(0x00576d88);
    /* 00576d88: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00576d8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00576d8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00576d8d: ret  */ FN_RET(0x00576cb4); r_esp += 4; return;
}

void f_00576d90(void) /* sub_576D90 */
{
    FN_ENTER(0x00576d90);
    /* 00576d90: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00576d94: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00576d98: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 00576d9e: mov dword ptr [ecx + 0x124], edx */ W32((u32)(r_ecx+0x124u), r_edx);
    /* 00576da4: ret 8 */ FN_RET(0x00576d90); r_esp += 12; return;
}

void f_00576da8(void) /* sub_576DA8 */
{
    FN_ENTER(0x00576da8);
    /* 00576da8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576da9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00576daa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00576dab: mov edi, ecx */ r_edi = r_ecx;
    /* 00576dad: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00576db1: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00576db5: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00576db8: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576dbb: jl 0x576dc7 */ if ((fS!=fO)) goto L_00576dc7;
L_00576dbd:; BB(0x00576dbd);
    /* 00576dbd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00576dbf: mov ecx, edi */ r_ecx = r_edi;
    /* 00576dc1: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x576dc4u); call_ind(t); }
    /* 00576dc4: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
L_00576dc7:; BB(0x00576dc7);
    /* 00576dc7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00576dc9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00576dcb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00576dcd: mov dword ptr [edi + eax*8 + 0x20], edx */ W32((u32)(r_edi+r_eax*8+0x20u), r_edx);
    /* 00576dd1: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00576dd4: mov dword ptr [edi + eax*8 + 0x24], edx */ W32((u32)(r_edi+r_eax*8+0x24u), r_edx);
    /* 00576dd8: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00576ddb: mov dword ptr [edi + eax*8 + 0x28], ebx */ W32((u32)(r_edi+r_eax*8+0x28u), r_ebx);
    /* 00576ddf: mov edx, dword ptr [edi + 0x120] */ r_edx = R32((u32)(r_edi+0x120u));
    /* 00576de5: mov dword ptr [edi + eax*8 + 0x2c], edx */ W32((u32)(r_edi+r_eax*8+0x2cu), r_edx);
    /* 00576de9: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00576deb: mov dword ptr [edi + eax*8 + 0x30], edx */ W32((u32)(r_edi+r_eax*8+0x30u), r_edx);
    /* 00576def: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00576df2: mov dword ptr [edi + eax*8 + 0x34], edx */ W32((u32)(r_edi+r_eax*8+0x34u), r_edx);
    /* 00576df6: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00576df9: mov dword ptr [edi + eax*8 + 0x38], esi */ W32((u32)(r_edi+r_eax*8+0x38u), r_esi);
    /* 00576dfd: mov edx, dword ptr [edi + 0x124] */ r_edx = R32((u32)(r_edi+0x124u));
    /* 00576e03: mov dword ptr [edi + eax*8 + 0x3c], edx */ W32((u32)(r_edi+r_eax*8+0x3cu), r_edx);
    /* 00576e07: add dword ptr [edi + 0x1c], 1 */ { u32 ad = (u32)(r_edi+0x1cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00576e0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00576e0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00576e0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00576e0e: ret 8 */ FN_RET(0x00576da8); r_esp += 12; return;
}

void f_00576e14(void) /* sub_576E14 */
{
    FN_ENTER(0x00576e14);
    /* 00576e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576e15: mov ebp, esp */ r_ebp = r_esp;
    /* 00576e17: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00576e19: push 0x8d73bc */ { u32 v = 0x8d73bcu; r_esp -= 4; W32(r_esp, v); }
    /* 00576e1e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00576e24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00576e25: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00576e2c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00576e2f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00576e32: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00576e35: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00576e38: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00576e3b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00576e3e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00576e41: mov dword ptr [ecx], 0xb06a3c */ W32((u32)(r_ecx), 0xb06a3cu);
    /* 00576e47: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00576e4e: call 0x577004 */ r_esp -= 4; W32(r_esp, 0x576e53u); f_00577004();
    /* 00576e53: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00576e56: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00576e5d: mov esp, ebp */ r_esp = r_ebp;
    /* 00576e5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576e60: ret  */ FN_RET(0x00576e14); r_esp += 4; return;
}

void f_00576e64(void) /* sub_576E64 */
{
    FN_ENTER(0x00576e64);
    /* 00576e64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576e65: mov edi, ecx */ r_edi = r_ecx;
    /* 00576e67: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576e6b: mov ecx, edi */ r_ecx = r_edi;
    /* 00576e6d: call 0x577054 */ r_esp -= 4; W32(r_esp, 0x576e72u); f_00577054();
    /* 00576e72: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576e76: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00576e7a: mov dword ptr [edi], 0xb06a3c */ W32((u32)(r_edi), 0xb06a3cu);
    /* 00576e80: mov ecx, edi */ r_ecx = r_edi;
    /* 00576e82: call 0x576d90 */ r_esp -= 4; W32(r_esp, 0x576e87u); f_00576d90();
    /* 00576e87: mov edx, dword ptr [edi + 0x120] */ r_edx = R32((u32)(r_edi+0x120u));
    /* 00576e8d: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576e93: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 00576e96: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 00576e99: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576e9f: mov dword ptr [edi + 0x4c], eax */ W32((u32)(r_edi+0x4cu), r_eax);
    /* 00576ea2: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576ea8: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00576eab: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576eb1: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 00576eb4: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576eba: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 00576ebd: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576ec3: mov dword ptr [edi + 0x8c], eax */ W32((u32)(r_edi+0x8cu), r_eax);
    /* 00576ec9: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576ecf: mov dword ptr [edi + 0x9c], eax */ W32((u32)(r_edi+0x9cu), r_eax);
    /* 00576ed5: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576edb: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 00576ee1: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576ee7: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00576eed: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576ef3: mov dword ptr [edi + 0xcc], eax */ W32((u32)(r_edi+0xccu), r_eax);
    /* 00576ef9: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576eff: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 00576f05: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576f0b: mov dword ptr [edi + 0xec], eax */ W32((u32)(r_edi+0xecu), r_eax);
    /* 00576f11: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576f17: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
    /* 00576f1d: mov eax, dword ptr [edi + 0x120] */ r_eax = R32((u32)(r_edi+0x120u));
    /* 00576f23: mov dword ptr [edi + 0x10c], eax */ W32((u32)(r_edi+0x10cu), r_eax);
    /* 00576f29: mov eax, dword ptr [edi + 0x124] */ r_eax = R32((u32)(r_edi+0x124u));
    /* 00576f2f: mov dword ptr [edi + 0x11c], eax */ W32((u32)(r_edi+0x11cu), r_eax);
    /* 00576f35: mov eax, edi */ r_eax = r_edi;
    /* 00576f37: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00576f38: ret 0xc */ FN_RET(0x00576e64); r_esp += 16; return;
}

void f_00576f3c(void) /* sub_576F3C */
{
    FN_ENTER(0x00576f3c);
    /* 00576f3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00576f3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00576f3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00576f3f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00576f40: mov edi, ecx */ r_edi = r_ecx;
    /* 00576f42: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00576f45: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00576f48: jle 0x576ff6 */ if ((fZ||fS!=fO)) goto L_00576ff6;
L_00576f4e:; BB(0x00576f4e);
    /* 00576f4e: lea esi, [edi + 0x20] */ r_esi = (u32)(r_edi+0x20u);
    /* 00576f51: lea ebp, [edi + 0x40] */ r_ebp = (u32)(r_edi+0x40u);
    /* 00576f54: lea ecx, [eax + eax - 2] */ r_ecx = (u32)(r_eax+r_eax+0xfffffffeu);
    /* 00576f58: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00576f5a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00576f5c: jle 0x576feb */ if ((fZ||fS!=fO)) goto L_00576feb;
L_00576f62:; BB(0x00576f62);
    /* 00576f62: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576f65: jl 0x576fc4 */ if ((fS!=fO)) goto L_00576fc4;
L_00576f67:; BB(0x00576f67);
    /* 00576f67: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00576f6a: lea eax, [ecx - 4] */ r_eax = (u32)(r_ecx+0xfffffffcu);
L_00576f6d:; BB(0x00576f6d);
    /* 00576f6d: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 00576f70: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00576f72: mov ebx, dword ptr [ebp + 4] */ r_ebx = R32((u32)(r_ebp+0x4u));
    /* 00576f75: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00576f78: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00576f7b: mov dword ptr [esi + 8], ebx */ W32((u32)(r_esi+0x8u), r_ebx);
    /* 00576f7e: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00576f81: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 00576f84: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00576f87: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 00576f8a: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00576f8d: mov dword ptr [esi + 0x14], ebx */ W32((u32)(r_esi+0x14u), r_ebx);
    /* 00576f90: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 00576f93: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 00576f96: mov ebx, dword ptr [ebp + 0x1c] */ r_ebx = R32((u32)(r_ebp+0x1cu));
    /* 00576f99: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
    /* 00576f9c: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 00576f9f: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 00576fa2: mov ebx, dword ptr [ebp + 0x24] */ r_ebx = R32((u32)(r_ebp+0x24u));
    /* 00576fa5: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 00576fa8: mov ebx, dword ptr [ebp + 0x28] */ r_ebx = R32((u32)(r_ebp+0x28u));
    /* 00576fab: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 00576fae: mov ebx, dword ptr [ebp + 0x2c] */ r_ebx = R32((u32)(r_ebp+0x2cu));
    /* 00576fb1: mov dword ptr [esi + 0x2c], ebx */ W32((u32)(r_esi+0x2cu), r_ebx);
    /* 00576fb4: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576fb7: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00576fba: add esi, 0x30 */ {  u32 a = r_esi; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00576fbd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576fbf: jle 0x576f6d */ if ((fZ||fS!=fO)) goto L_00576f6d;
L_00576fc1:; BB(0x00576fc1);
    /* 00576fc1: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_00576fc4:; BB(0x00576fc4);
    /* 00576fc4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00576fc7: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00576fc9: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00576fcc: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00576fcf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00576fd2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00576fd5: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00576fd8: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00576fdb: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00576fde: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00576fe1: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00576fe4: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00576fe6: jl 0x576fc4 */ if ((fS!=fO)) goto L_00576fc4;
L_00576fe8:; BB(0x00576fe8);
    /* 00576fe8: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
L_00576feb:; BB(0x00576feb);
    /* 00576feb: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00576fee: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00576ff1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576ff3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00576ff4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00576ff5: ret  */ FN_RET(0x00576f3c); r_esp += 4; return;
L_00576ff6:; BB(0x00576ff6);
    /* 00576ff6: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 00576ffd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00576ffe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00576fff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00577000: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00577001: ret  */ FN_RET(0x00576f3c); r_esp += 4; return;
}

