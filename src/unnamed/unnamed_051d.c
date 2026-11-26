#include "protos.h"

void f_0051d3c4(void) /* sub_51D3C4 */
{
    FN_ENTER(0x0051d3c4);
    /* 0051d3c4: fld dword ptr [ecx + 0x40c] */ FPUSH(R_F32((u32)(r_ecx+0x40cu)));
    /* 0051d3ca: fld dword ptr [ecx + 0x408] */ FPUSH(R_F32((u32)(r_ecx+0x408u)));
    /* 0051d3d0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051d3d2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d3d4: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 0051d3da: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d3db: je 0x51d426 */ if (fZ) goto L_0051d426;
L_0051d3dd:; BB(0x0051d3dd);
    /* 0051d3dd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0051d3df: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d3e1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d3e2: jae 0x51d405 */ if (!fC) goto L_0051d405;
L_0051d3e4:; BB(0x0051d3e4);
    /* 0051d3e4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051d3e8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0051d3ea: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0051d3ec: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d3ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d3ef: jbe 0x51d3fc */ if ((fC||fZ)) goto L_0051d3fc;
L_0051d3f1:; BB(0x0051d3f1);
    /* 0051d3f1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d3f3: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
    /* 0051d3f9: ret 4 */ FN_RET(0x0051d3c4); r_esp += 8; return;
L_0051d3fc:; BB(0x0051d3fc);
    /* 0051d3fc: fstp dword ptr [ecx + 0x40c] */ W_F32((u32)(r_ecx+0x40cu), ST(0)); FPOP();
    /* 0051d402: ret 4 */ FN_RET(0x0051d3c4); r_esp += 8; return;
L_0051d405:; BB(0x0051d405);
    /* 0051d405: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0051d409: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0051d40b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0051d40d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d40f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d410: jae 0x51d41d */ if (!fC) goto L_0051d41d;
L_0051d412:; BB(0x0051d412);
    /* 0051d412: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d414: mov dword ptr [ecx + 0x40c], edx */ W32((u32)(r_ecx+0x40cu), r_edx);
    /* 0051d41a: ret 4 */ FN_RET(0x0051d3c4); r_esp += 8; return;
L_0051d41d:; BB(0x0051d41d);
    /* 0051d41d: fstp dword ptr [ecx + 0x40c] */ W_F32((u32)(r_ecx+0x40cu), ST(0)); FPOP();
    /* 0051d423: ret 4 */ FN_RET(0x0051d3c4); r_esp += 8; return;
L_0051d426:; BB(0x0051d426);
    /* 0051d426: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d428: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051d42a: ret 4 */ FN_RET(0x0051d3c4); r_esp += 8; return;
}

void f_0051d430(void) /* sub_51D430 */
{
    FN_ENTER(0x0051d430);
    /* 0051d430: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d431: mov esi, ecx */ r_esi = r_ecx;
    /* 0051d433: mov ecx, esi */ r_ecx = r_esi;
    /* 0051d435: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51d43au); f_007751b0();
    /* 0051d43a: fcomp dword ptr [0x9212a8] */ fx_compare(ST(0), R_F32((u32)(0x9212a8u))); FPOP();
    /* 0051d440: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d442: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d443: jae 0x51d450 */ if (!fC) goto L_0051d450;
L_0051d445:; BB(0x0051d445);
    /* 0051d445: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d447: mov ecx, esi */ r_ecx = r_esi;
    /* 0051d449: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d44eu); f_0051f62c();
    /* 0051d44e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d44f: ret  */ FN_RET(0x0051d430); r_esp += 4; return;
L_0051d450:; BB(0x0051d450);
    /* 0051d450: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d452: mov ecx, esi */ r_ecx = r_esi;
    /* 0051d454: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d459u); f_0051f62c();
    /* 0051d459: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d45a: ret  */ FN_RET(0x0051d430); r_esp += 4; return;
}

void f_0051d45c(void) /* sub_51D45C */
{
    FN_ENTER(0x0051d45c);
    /* 0051d45c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d45d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d45e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d45f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051d461: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051d465: lea esi, [ebx + 0x434] */ r_esi = (u32)(r_ebx+0x434u);
    /* 0051d46b: lea edi, [ebx + 0x458] */ r_edi = (u32)(r_ebx+0x458u);
    /* 0051d471: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d474: je 0x51d68e */ if (fZ) goto L_0051d68e;
L_0051d47a:; BB(0x0051d47a);
    /* 0051d47a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051d47d: je 0x51d679 */ if (fZ) goto L_0051d679;
L_0051d483:; BB(0x0051d483);
    /* 0051d483: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d486: je 0x51d63a */ if (fZ) goto L_0051d63a;
L_0051d48c:; BB(0x0051d48c);
    /* 0051d48c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051d48e: jne 0x51d679 */ if (!fZ) goto L_0051d679;
L_0051d494:; BB(0x0051d494);
    /* 0051d494: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d496: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51d49bu); f_007aa094();
    /* 0051d49b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d49d: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x51d4a2u); f_00521238();
    /* 0051d4a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051d4a4: je 0x51d679 */ if (fZ) goto L_0051d679;
L_0051d4aa:; BB(0x0051d4aa);
    /* 0051d4aa: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d4b1: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d4b6u); f_007aaa30();
    /* 0051d4b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d4b8: je 0x51d4cb */ if (fZ) goto L_0051d4cb;
L_0051d4ba:; BB(0x0051d4ba);
    /* 0051d4ba: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4bf: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 0051d4c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4c3: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51d4c8u); f_0050b510();
    /* 0051d4c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051d4cb:; BB(0x0051d4cb);
    /* 0051d4cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d4cd: call 0x51c570 */ r_esp -= 4; W32(r_esp, 0x51d4d2u); f_0051c570();
    /* 0051d4d2: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d4d9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d4deu); f_007aaa30();
    /* 0051d4de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d4e0: je 0x51d52c */ if (fZ) goto L_0051d52c;
L_0051d4e2:; BB(0x0051d4e2);
    /* 0051d4e2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d4e4: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x51d4e9u); f_005213d8();
    /* 0051d4e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d4eb: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51d4f0u); f_00521410();
    /* 0051d4f0: mov eax, dword ptr [ebx + 0x428] */ r_eax = R32((u32)(r_ebx+0x428u));
    /* 0051d4f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d4f8: jne 0x51d514 */ if (!fZ) goto L_0051d514;
L_0051d4fa:; BB(0x0051d4fa);
    /* 0051d4fa: mov dword ptr [ebx + 0x428], 1 */ W32((u32)(r_ebx+0x428u), 0x1u);
    /* 0051d504: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d505: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d507: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d508: push 0xffffe38f */ { u32 v = 0xffffe38fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d50d: call 0x51d70c */ r_esp -= 4; W32(r_esp, 0x51d512u); f_0051d70c();
    /* 0051d512: jmp 0x51d52c */ goto L_0051d52c;
L_0051d514:; BB(0x0051d514);
    /* 0051d514: mov dword ptr [ebx + 0x428], 0 */ W32((u32)(r_ebx+0x428u), 0x0u);
    /* 0051d51e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d51f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d521: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d522: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d527: call 0x51d70c */ r_esp -= 4; W32(r_esp, 0x51d52cu); f_0051d70c();
L_0051d52c:; BB(0x0051d52c);
    /* 0051d52c: fld dword ptr [0x92129c] */ FPUSH(R_F32((u32)(0x92129cu)));
    /* 0051d532: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 0051d538: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d539: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051d53c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d53e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d543u); f_007aaa30();
    /* 0051d543: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d545: je 0x51d579 */ if (fZ) goto L_0051d579;
L_0051d547:; BB(0x0051d547);
    /* 0051d547: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
    /* 0051d54d: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 0051d553: mov esi, dword ptr [ebx + 0x460] */ r_esi = R32((u32)(r_ebx+0x460u));
    /* 0051d559: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 0051d55f: mov eax, dword ptr [ebx + 0x434] */ r_eax = R32((u32)(r_ebx+0x434u));
    /* 0051d565: mov dword ptr [ebx + 0x450], edx */ W32((u32)(r_ebx+0x450u), r_edx);
    /* 0051d56b: mov dword ptr [ebx + 0x454], esi */ W32((u32)(r_ebx+0x454u), r_esi);
    /* 0051d571: mov dword ptr [ebx + 0x438], eax */ W32((u32)(r_ebx+0x438u), r_eax);
    /* 0051d577: jmp 0x51d57f */ goto L_0051d57f;
L_0051d579:; BB(0x0051d579);
    /* 0051d579: mov eax, dword ptr [ebx + 0x438] */ r_eax = R32((u32)(r_ebx+0x438u));
L_0051d57f:; BB(0x0051d57f);
    /* 0051d57f: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d585: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d588: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x51d58du); f_007a8c74();
    /* 0051d58d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d590: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 0051d596: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0051d599: fcomp dword ptr [0x921290] */ fx_compare(ST(0), R_F32((u32)(0x921290u))); FPOP();
    /* 0051d59f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d5a1: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 0051d5a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d5a5: jb 0x51d5ec */ if (fC) goto L_0051d5ec;
L_0051d5a7:; BB(0x0051d5a7);
    /* 0051d5a7: fld dword ptr [0x92128c] */ FPUSH(R_F32((u32)(0x92128cu)));
    /* 0051d5ad: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0051d5b3: fmul dword ptr [0x921294] */ ST(0) = ST(0) * R_F32((u32)(0x921294u));
    /* 0051d5b9: mov eax, dword ptr [ebx + 0x44c] */ r_eax = R32((u32)(r_ebx+0x44cu));
    /* 0051d5bf: mov edx, dword ptr [ebx + 0x454] */ r_edx = R32((u32)(r_ebx+0x454u));
    /* 0051d5c5: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0051d5c7: fst dword ptr [ebx + 0x40c] */ W_F32((u32)(r_ebx+0x40cu), ST(0));
    /* 0051d5cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d5cf: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 0051d5d5: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d5d8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051d5dc: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0051d5df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d5e1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0051d5e5: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51d5eau); f_005207c4();
    /* 0051d5ea: jmp 0x51d623 */ goto L_0051d623;
L_0051d5ec:; BB(0x0051d5ec);
    /* 0051d5ec: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5f1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d5f3: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51d5f8u); f_0051d3c4();
    /* 0051d5f8: fld dword ptr [0x92128c] */ FPUSH(R_F32((u32)(0x92128cu)));
    /* 0051d5fe: fmul dword ptr [ebx + 0x40c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x40cu));
    /* 0051d604: push dword ptr [ebx + 0x40c] */ { u32 v = R32((u32)(r_ebx+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d60a: push dword ptr [ebx + 0x454] */ { u32 v = R32((u32)(r_ebx+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d610: push dword ptr [ebx + 0x44c] */ { u32 v = R32((u32)(r_ebx+0x44cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d616: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 0051d61c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d61e: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x51d623u); f_005207c4();
L_0051d623:; BB(0x0051d623);
    /* 0051d623: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d625: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51d62au); f_0051b1cc();
    /* 0051d62a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051d62c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d62e: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51d634u); call_ind(t); }
    /* 0051d634: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051d635: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d636: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d637: ret 4 */ FN_RET(0x0051d45c); r_esp += 8; return;
L_0051d63a:; BB(0x0051d63a);
    /* 0051d63a: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 0051d640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d642: je 0x51d67f */ if (fZ) goto L_0051d67f;
L_0051d644:; BB(0x0051d644);
    /* 0051d644: fld dword ptr [0x92129c] */ FPUSH(R_F32((u32)(0x92129cu)));
    /* 0051d64a: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 0051d650: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d651: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051d654: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d656: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d65bu); f_007aaa30();
    /* 0051d65b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051d65d: je 0x51d679 */ if (fZ) goto L_0051d679;
L_0051d65f:; BB(0x0051d65f);
    /* 0051d65f: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 0051d665: fcomp dword ptr [0x921288] */ fx_compare(ST(0), R_F32((u32)(0x921288u))); FPOP();
    /* 0051d66b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d66d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d66e: jae 0x51d679 */ if (!fC) goto L_0051d679;
L_0051d670:; BB(0x0051d670);
    /* 0051d670: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d672: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d674: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d679u); f_0051f62c();
L_0051d679:; BB(0x0051d679);
    /* 0051d679: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051d67a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d67b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d67c: ret 4 */ FN_RET(0x0051d45c); r_esp += 8; return;
L_0051d67f:; BB(0x0051d67f);
    /* 0051d67f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d681: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d683: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d688u); f_0051f62c();
    /* 0051d688: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051d689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d68a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d68b: ret 4 */ FN_RET(0x0051d45c); r_esp += 8; return;
L_0051d68e:; BB(0x0051d68e);
    /* 0051d68e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d690: mov eax, 3 */ r_eax = 0x3u;
    /* 0051d695: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051d69c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d69e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51d6a3u); f_0051f664();
    /* 0051d6a3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051d6a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d6a7: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51d6adu); call_ind(t); }
    /* 0051d6ad: mov dword ptr [ebx + 0x408], 0x40000000 */ W32((u32)(r_ebx+0x408u), 0x40000000u);
    /* 0051d6b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051d6ba: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6bb: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6c0: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0051d6c6: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 0051d6cc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d6ce: call 0x51d70c */ r_esp -= 4; W32(r_esp, 0x51d6d3u); f_0051d70c();
    /* 0051d6d3: mov eax, dword ptr [ebx + 0x458] */ r_eax = R32((u32)(r_ebx+0x458u));
    /* 0051d6d9: mov edx, dword ptr [ebx + 0x45c] */ r_edx = R32((u32)(r_ebx+0x45cu));
    /* 0051d6df: mov esi, dword ptr [ebx + 0x460] */ r_esi = R32((u32)(r_ebx+0x460u));
    /* 0051d6e5: mov edi, dword ptr [ebx + 0x434] */ r_edi = R32((u32)(r_ebx+0x434u));
    /* 0051d6eb: mov dword ptr [ebx + 0x44c], eax */ W32((u32)(r_ebx+0x44cu), r_eax);
    /* 0051d6f1: mov dword ptr [ebx + 0x450], edx */ W32((u32)(r_ebx+0x450u), r_edx);
    /* 0051d6f7: mov dword ptr [ebx + 0x454], esi */ W32((u32)(r_ebx+0x454u), r_esi);
    /* 0051d6fd: mov dword ptr [ebx + 0x438], edi */ W32((u32)(r_ebx+0x438u), r_edi);
    /* 0051d703: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051d704: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d705: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0051d706: ret 4 */ FN_RET(0x0051d45c); r_esp += 8; return;
}

void f_0051d70c(void) /* sub_51D70C */
{
    FN_ENTER(0x0051d70c);
    /* 0051d70c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d70d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051d70e: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051d711: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051d713: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0051d717: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0051d71b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51d720u); f_0082dcbc();
    /* 0051d720: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0051d724: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 0051d728: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51d72du); f_0082ddd8();
    /* 0051d72d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0051d731: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 0051d737: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 0051d73d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0051d73f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d741: fchs  */ ST(0) = -ST(0);
    /* 0051d743: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0051d745: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051d747: fst dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0));
    /* 0051d74a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d74c: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 0051d752: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051d754: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 0051d75a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0051d75c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d75e: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 0051d760: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d762: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0051d764: fmul qword ptr [0x921108] */ ST(0) = ST(0) * R_F64((u32)(0x921108u));
    /* 0051d76a: fdiv qword ptr [0x921100] */ ST(0) = ST(0) / R_F64((u32)(0x921100u));
    /* 0051d770: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0051d774: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051d777: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051d77b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d780: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051d784: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051d788: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d78a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051d78d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d790: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051d792: ret 0xc */ FN_RET(0x0051d70c); r_esp += 16; return;
}

void f_0051d798(void) /* sub_51D798 */
{
    FN_ENTER(0x0051d798);
    /* 0051d798: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051d799: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051d79c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051d79e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0051d7a2: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7a5: je 0x51d97b */ if (fZ) goto L_0051d97b;
L_0051d7ab:; BB(0x0051d7ab);
    /* 0051d7ab: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7ae: je 0x51d958 */ if (fZ) goto L_0051d958;
L_0051d7b4:; BB(0x0051d7b4);
    /* 0051d7b4: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7b7: je 0x51d8f2 */ if (fZ) goto L_0051d8f2;
L_0051d7bd:; BB(0x0051d7bd);
    /* 0051d7bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7bf: jne 0x51d958 */ if (!fZ) goto L_0051d958;
L_0051d7c5:; BB(0x0051d7c5);
    /* 0051d7c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d7c7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51d7ccu); f_007aa094();
    /* 0051d7cc: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d7d3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d7d8u); f_007aaa30();
    /* 0051d7d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7da: je 0x51d7ed */ if (fZ) goto L_0051d7ed;
L_0051d7dc:; BB(0x0051d7dc);
    /* 0051d7dc: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7e1: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0051d7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7e5: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x51d7eau); f_0050b510();
    /* 0051d7ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0051d7ed:; BB(0x0051d7ed);
    /* 0051d7ed: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 0051d7f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d7f7: je 0x51d95f */ if (fZ) goto L_0051d95f;
L_0051d7fd:; BB(0x0051d7fd);
    /* 0051d7fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d7ff: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x51d804u); f_00521238();
    /* 0051d804: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d806: je 0x51d958 */ if (fZ) goto L_0051d958;
L_0051d80c:; BB(0x0051d80c);
    /* 0051d80c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d80e: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x51d813u); f_005213d8();
    /* 0051d813: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d815: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51d81au); f_00521410();
    /* 0051d81a: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 0051d820: fcomp dword ptr [0x921290] */ fx_compare(ST(0), R_F32((u32)(0x921290u))); FPOP();
    /* 0051d826: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d828: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d829: jb 0x51d882 */ if (fC) goto L_0051d882;
L_0051d82b:; BB(0x0051d82b);
    /* 0051d82b: fld dword ptr [0x92126c] */ FPUSH(R_F32((u32)(0x92126cu)));
    /* 0051d831: fld dword ptr [0x921278] */ FPUSH(R_F32((u32)(0x921278u)));
    /* 0051d837: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051d83d: fmul dword ptr [0x921274] */ ST(0) = ST(0) * R_F32((u32)(0x921274u));
    /* 0051d843: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051d845: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0051d847: fst dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0));
    /* 0051d84d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051d84f: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0051d855: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d858: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051d85c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051d861: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d866: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051d86a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051d86e: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d871: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051d875: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051d879: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d87b: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51d880u); f_00521528();
    /* 0051d880: jmp 0x51d8d9 */ goto L_0051d8d9;
L_0051d882:; BB(0x0051d882);
    /* 0051d882: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d887: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d889: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51d88eu); f_0051d3c4();
    /* 0051d88e: fld dword ptr [0x92126c] */ FPUSH(R_F32((u32)(0x92126cu)));
    /* 0051d894: fld dword ptr [0x921278] */ FPUSH(R_F32((u32)(0x921278u)));
    /* 0051d89a: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051d8a0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051d8a2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051d8a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d8a6: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0051d8ac: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051d8af: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051d8b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d8b8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051d8bc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051d8c0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d8c4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051d8c7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051d8cb: push dword ptr [ebp + 0x40c] */ { u32 v = R32((u32)(r_ebp+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d4: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51d8d9u); f_00521528();
L_0051d8d9:; BB(0x0051d8d9);
    /* 0051d8d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8db: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51d8e0u); f_0051b1cc();
    /* 0051d8e0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051d8e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8e5: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51d8ebu); call_ind(t); }
    /* 0051d8eb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d8ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d8ef: ret 4 */ FN_RET(0x0051d798); r_esp += 8; return;
L_0051d8f2:; BB(0x0051d8f2);
    /* 0051d8f2: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 0051d8f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d8fa: je 0x51d96b */ if (fZ) goto L_0051d96b;
L_0051d8fc:; BB(0x0051d8fc);
    /* 0051d8fc: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d900: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x51d905u); f_00520bb8();
    /* 0051d905: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d907: jne 0x51d94f */ if (!fZ) goto L_0051d94f;
L_0051d909:; BB(0x0051d909);
    /* 0051d909: mov eax, dword ptr [ebp + 0x424] */ r_eax = R32((u32)(r_ebp+0x424u));
    /* 0051d90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d911: jne 0x51d958 */ if (!fZ) goto L_0051d958;
L_0051d913:; BB(0x0051d913);
    /* 0051d913: fld dword ptr [0x921270] */ FPUSH(R_F32((u32)(0x921270u)));
    /* 0051d919: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 0051d91f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0051d920: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051d923: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d925: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51d92au); f_007aaa30();
    /* 0051d92a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d92c: je 0x51d958 */ if (fZ) goto L_0051d958;
L_0051d92e:; BB(0x0051d92e);
    /* 0051d92e: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 0051d934: fcomp dword ptr [0x921288] */ fx_compare(ST(0), R_F32((u32)(0x921288u))); FPOP();
    /* 0051d93a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d93c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d93d: jae 0x51d958 */ if (!fC) goto L_0051d958;
L_0051d93f:; BB(0x0051d93f);
    /* 0051d93f: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d941: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d943: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d948u); f_0051f62c();
    /* 0051d948: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d94b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d94c: ret 4 */ FN_RET(0x0051d798); r_esp += 8; return;
L_0051d94f:; BB(0x0051d94f);
    /* 0051d94f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d951: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d953: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d958u); f_0051f62c();
L_0051d958:; BB(0x0051d958);
    /* 0051d958: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d95b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d95c: ret 4 */ FN_RET(0x0051d798); r_esp += 8; return;
L_0051d95f:; BB(0x0051d95f);
    /* 0051d95f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d961: call 0x51c570 */ r_esp -= 4; W32(r_esp, 0x51d966u); f_0051c570();
    /* 0051d966: jmp 0x51d7fd */ goto L_0051d7fd;
L_0051d96b:; BB(0x0051d96b);
    /* 0051d96b: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d96d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d96f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51d974u); f_0051f62c();
    /* 0051d974: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d977: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d978: ret 4 */ FN_RET(0x0051d798); r_esp += 8; return;
L_0051d97b:; BB(0x0051d97b);
    /* 0051d97b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d97d: mov eax, 2 */ r_eax = 0x2u;
    /* 0051d982: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0051d989: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d98b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51d990u); f_0051f664();
    /* 0051d990: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051d993: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d995: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51d99bu); call_ind(t); }
    /* 0051d99b: mov dword ptr [ebp + 0x408], 0x3fcccccd */ W32((u32)(r_ebp+0x408u), 0x3fcccccdu);
    /* 0051d9a5: mov dword ptr [ebp + 0x424], 0 */ W32((u32)(r_ebp+0x424u), 0x0u);
    /* 0051d9af: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d9b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d9b3: ret 4 */ FN_RET(0x0051d798); r_esp += 8; return;
}

void f_0051d820(void)
{
    FN_ENTER(0x0051d820);
    /* 0051d820: fcomp dword ptr [0x921290] */ fx_compare(ST(0), R_F32((u32)(0x921290u))); FPOP();
    /* 0051d826: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051d828: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051d829: jb 0x51d882 */ if (fC) goto L_0051d882;
L_0051d82b:; BB(0x0051d82b);
    /* 0051d82b: fld dword ptr [0x92126c] */ FPUSH(R_F32((u32)(0x92126cu)));
    /* 0051d831: fld dword ptr [0x921278] */ FPUSH(R_F32((u32)(0x921278u)));
    /* 0051d837: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051d83d: fmul dword ptr [0x921274] */ ST(0) = ST(0) * R_F32((u32)(0x921274u));
    /* 0051d843: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051d845: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0051d847: fst dword ptr [ebp + 0x40c] */ W_F32((u32)(r_ebp+0x40cu), ST(0));
    /* 0051d84d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0051d84f: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0051d855: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d858: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051d85c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051d861: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d866: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051d86a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051d86e: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d871: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051d875: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051d879: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d87b: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51d880u); f_00521528();
    /* 0051d880: jmp 0x51d8d9 */ goto L_0051d8d9;
L_0051d882:; BB(0x0051d882);
    /* 0051d882: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d887: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d889: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51d88eu); f_0051d3c4();
    /* 0051d88e: fld dword ptr [0x92126c] */ FPUSH(R_F32((u32)(0x92126cu)));
    /* 0051d894: fld dword ptr [0x921278] */ FPUSH(R_F32((u32)(0x921278u)));
    /* 0051d89a: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 0051d8a0: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051d8a2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051d8a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051d8a6: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 0051d8ac: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0051d8af: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0051d8b3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051d8b8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0051d8bc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051d8c0: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051d8c4: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0051d8c7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0051d8cb: push dword ptr [ebp + 0x40c] */ { u32 v = R32((u32)(r_ebp+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d4: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51d8d9u); f_00521528();
L_0051d8d9:; BB(0x0051d8d9);
    /* 0051d8d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8db: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51d8e0u); f_0051b1cc();
    /* 0051d8e0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0051d8e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051d8e5: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51d8ebu); call_ind(t); }
    /* 0051d8eb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051d8ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051d8ef: ret 4 */ FN_RET(0x0051d820); r_esp += 8; return;
}

void f_0051d9b8(void) /* sub_51D9B8 */
{
    FN_ENTER(0x0051d9b8);
    /* 0051d9b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9ba: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051d9bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051d9bf: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 0051d9c3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d9c6: je 0x51dcc1 */ if (fZ) goto L_0051dcc1;
L_0051d9cc:; BB(0x0051d9cc);
    /* 0051d9cc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d9cf: je 0x51dc47 */ if (fZ) goto L_0051dc47;
L_0051d9d5:; BB(0x0051d9d5);
    /* 0051d9d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d9d7: jne 0x51dc58 */ if (!fZ) goto L_0051dc58;
L_0051d9dd:; BB(0x0051d9dd);
    /* 0051d9dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d9df: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51d9e4u); f_007aa094();
    /* 0051d9e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051d9e6: call 0x51b1ac */ r_esp -= 4; W32(r_esp, 0x51d9ebu); f_0051b1ac();
    /* 0051d9eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051d9ed: je 0x51da25 */ if (fZ) goto L_0051da25;
L_0051d9ef:; BB(0x0051d9ef);
    /* 0051d9ef: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0051d9f5: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 0051d9f8: fsub dword ptr [ebx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x38u));
    /* 0051d9fb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051d9fd: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 0051da00: fsub dword ptr [ebx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x40u));
    /* 0051da03: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0051da05: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051da07: fcomp dword ptr [0xa72e08] */ fx_compare(ST(0), R_F32((u32)(0xa72e08u))); FPOP();
    /* 0051da0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051da0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051da10: jae 0x51da1c */ if (!fC) goto L_0051da1c;
L_0051da12:; BB(0x0051da12);
    /* 0051da12: mov dword ptr [ebx + 0x470], 1 */ W32((u32)(r_ebx+0x470u), 0x1u);
L_0051da1c:; BB(0x0051da1c);
    /* 0051da1c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da1e: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51da23u); f_0051b1cc();
    /* 0051da23: jmp 0x51da2f */ goto L_0051da2f;
L_0051da25:; BB(0x0051da25);
    /* 0051da25: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0051da28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da2a: call 0x51cc28 */ r_esp -= 4; W32(r_esp, 0x51da2fu); f_0051cc28();
L_0051da2f:; BB(0x0051da2f);
    /* 0051da2f: mov eax, dword ptr [ebx + 0x424] */ r_eax = R32((u32)(r_ebx+0x424u));
    /* 0051da35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051da37: je 0x51db3f */ if (fZ) goto L_0051db3f;
L_0051da3d:; BB(0x0051da3d);
    /* 0051da3d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051da40: jne 0x51db07 */ if (!fZ) goto L_0051db07;
L_0051da46:; BB(0x0051da46);
    /* 0051da46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da48: call 0x51ddf4 */ r_esp -= 4; W32(r_esp, 0x51da4du); f_0051ddf4();
    /* 0051da4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da4f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51da54u); f_00521410();
    /* 0051da54: push 0x3ca3d70b */ { u32 v = 0x3ca3d70bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da5b: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51da60u); f_0051d3c4();
    /* 0051da60: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0051da66: fcom dword ptr [0x921250] */ fx_compare(ST(0), R_F32((u32)(0x921250u))); 
    /* 0051da6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051da6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051da6f: ja 0x51dabf */ if ((!fC&&!fZ)) goto L_0051dabf;
L_0051da71:; BB(0x0051da71);
    /* 0051da71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051da73: push 0x43b40000 */ { u32 v = 0x43b40000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051da7a: mov dword ptr [ebx + 0x424], 2 */ W32((u32)(r_ebx+0x424u), 0x2u);
    /* 0051da84: push 0x43700000 */ { u32 v = 0x43700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da89: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x51da8eu); f_00520c08();
    /* 0051da8e: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0051da94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051da96: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051da9a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051da9f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051daa4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051daa8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051daac: fistp dword ptr [ebx + 0x428] */ W32((u32)(r_ebx+0x428u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051dab2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051dab6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051dab8: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_0051dabf:; BB(0x0051dabf);
    /* 0051dabf: fld dword ptr [0x921328] */ FPUSH(R_F32((u32)(0x921328u)));
    /* 0051dac5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051dac7: fld dword ptr [0x921244] */ FPUSH(R_F32((u32)(0x921244u)));
    /* 0051dacd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0051dacf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051dad1: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 0051dad7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051dada: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0051dade: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0051dae3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051dae8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0051daec: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0051daf0: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 0051daf3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051daf7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051dafb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dafd: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51db02u); f_00521528();
    /* 0051db02: jmp 0x51dc35 */ goto L_0051dc35;
L_0051db07:; BB(0x0051db07);
    /* 0051db07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051db0a: jne 0x51dc35 */ if (!fZ) goto L_0051dc35;
L_0051db10:; BB(0x0051db10);
    /* 0051db10: mov edx, dword ptr [ebx + 0x428] */ r_edx = R32((u32)(r_ebx+0x428u));
    /* 0051db16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051db18: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051db1f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051db22: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 0051db28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0051db2a: jle 0x51dc60 */ if ((fZ||fS!=fO)) goto L_0051dc60;
L_0051db30:; BB(0x0051db30);
    /* 0051db30: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051db32: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051db34: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51db3au); call_ind(t); }
    /* 0051db3a: jmp 0x51dc35 */ goto L_0051dc35;
L_0051db3f:; BB(0x0051db3f);
    /* 0051db3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051db41: call 0x51ddf4 */ r_esp -= 4; W32(r_esp, 0x51db46u); f_0051ddf4();
    /* 0051db46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051db48: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51db4du); f_00521410();
    /* 0051db4d: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051db54: call 0x51d3c4 */ r_esp -= 4; W32(r_esp, 0x51db59u); f_0051d3c4();
    /* 0051db59: mov edx, dword ptr [ebx + 0x428] */ r_edx = R32((u32)(r_ebx+0x428u));
    /* 0051db5f: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 0051db65: fcomp dword ptr [ebx + 0x43c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x43cu))); FPOP();
    /* 0051db6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0051db6d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051db70: mov dword ptr [ebx + 0x428], edx */ W32((u32)(r_ebx+0x428u), r_edx);
    /* 0051db76: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0051db77: jb 0x51db7e */ if (fC) goto L_0051db7e;
L_0051db79:; BB(0x0051db79);
    /* 0051db79: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0051db7c: jle 0x51db94 */ if ((fZ||fS!=fO)) goto L_0051db94;
L_0051db7e:; BB(0x0051db7e);
    /* 0051db7e: mov dword ptr [ebx + 0x424], 1 */ W32((u32)(r_ebx+0x424u), 0x1u);
    /* 0051db88: mov dword ptr [ebx + 0x408], 0 */ W32((u32)(r_ebx+0x408u), 0x0u);
    /* 0051db92: jmp 0x51dbe7 */ goto L_0051dbe7;
L_0051db94:; BB(0x0051db94);
    /* 0051db94: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051db98: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x51db9du); f_00520bb8();
    /* 0051db9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051db9f: je 0x51dbe7 */ if (fZ) goto L_0051dbe7;
L_0051dba1:; BB(0x0051dba1);
    /* 0051dba1: mov dword ptr [ebx + 0x428], 0 */ W32((u32)(r_ebx+0x428u), 0x0u);
    /* 0051dbab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dbad: call 0x51de40 */ r_esp -= 4; W32(r_esp, 0x51dbb2u); f_0051de40();
    /* 0051dbb2: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dbb9: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbbe: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x51dbc3u); f_00520c08();
    /* 0051dbc3: fst dword ptr [ebx + 0x408] */ W_F32((u32)(r_ebx+0x408u), ST(0));
    /* 0051dbc9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051dbcd: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 0051dbd4: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x51dbd9u); f_00782a34();
    /* 0051dbd9: fld dword ptr [0x921258] */ FPUSH(R_F32((u32)(0x921258u)));
    /* 0051dbdf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051dbe1: fstp dword ptr [ebx + 0x43c] */ W_F32((u32)(r_ebx+0x43cu), ST(0)); FPOP();
L_0051dbe7:; BB(0x0051dbe7);
    /* 0051dbe7: fld dword ptr [0x921328] */ FPUSH(R_F32((u32)(0x921328u)));
    /* 0051dbed: fld dword ptr [0x921244] */ FPUSH(R_F32((u32)(0x921244u)));
    /* 0051dbf3: fld dword ptr [ebx + 0x40c] */ FPUSH(R_F32((u32)(r_ebx+0x40cu)));
    /* 0051dbf9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0051dbfb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051dbfd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051dbff: fstp dword ptr [ebx + 0xc8] */ W_F32((u32)(r_ebx+0xc8u), ST(0)); FPOP();
    /* 0051dc05: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051dc09: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051dc0e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051dc13: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051dc17: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051dc1b: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051dc1f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051dc23: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0051dc27: push dword ptr [ebx + 0x40c] */ { u32 v = R32((u32)(r_ebx+0x40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0051dc2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dc2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc30: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x51dc35u); f_00521528();
L_0051dc35:; BB(0x0051dc35);
    /* 0051dc35: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051dc37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dc39: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x51dc3fu); call_ind(t); }
    /* 0051dc3f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051dc42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051dc43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051dc44: ret 4 */ FN_RET(0x0051d9b8); r_esp += 8; return;
L_0051dc47:; BB(0x0051dc47);
    /* 0051dc47: mov eax, dword ptr [ebx + 0x470] */ r_eax = R32((u32)(r_ebx+0x470u));
    /* 0051dc4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051dc4f: je 0x51dc58 */ if (fZ) goto L_0051dc58;
L_0051dc51:; BB(0x0051dc51);
    /* 0051dc51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dc53: call 0x51d430 */ r_esp -= 4; W32(r_esp, 0x51dc58u); f_0051d430();
L_0051dc58:; BB(0x0051dc58);
    /* 0051dc58: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051dc5b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051dc5c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051dc5d: ret 4 */ FN_RET(0x0051d9b8); r_esp += 8; return;
L_0051dc60:; BB(0x0051dc60);
    /* 0051dc60: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dc62: call 0x51de40 */ r_esp -= 4; W32(r_esp, 0x51dc67u); f_0051de40();
    /* 0051dc67: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc6c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dc6e: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc73: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x51dc78u); f_00520c08();
    /* 0051dc78: fst dword ptr [ebx + 0x408] */ W_F32((u32)(r_ebx+0x408u), ST(0));
    /* 0051dc7e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051dc82: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 0051dc8c: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 0051dc93: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x51dc98u); f_00782a34();
    /* 0051dc98: fld dword ptr [0x921258] */ FPUSH(R_F32((u32)(0x921258u)));
    /* 0051dc9e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051dca0: fstp dword ptr [ebx + 0x43c] */ W_F32((u32)(r_ebx+0x43cu), ST(0)); FPOP();
    /* 0051dca6: mov eax, 1 */ r_eax = 0x1u;
    /* 0051dcab: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051dcb2: mov dword ptr [ebx + 0x424], 0 */ W32((u32)(r_ebx+0x424u), 0x0u);
    /* 0051dcbc: jmp 0x51db30 */ goto L_0051db30;
L_0051dcc1:; BB(0x0051dcc1);
    /* 0051dcc1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcc3: mov eax, 1 */ r_eax = 0x1u;
    /* 0051dcc8: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051dccf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dcd1: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51dcd6u); f_0051f664();
    /* 0051dcd6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051dcd8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dcda: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x51dce0u); call_ind(t); }
    /* 0051dce0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051dce2: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 0051dce8: mov dword ptr [ebx + 0x424], eax */ W32((u32)(r_ebx+0x424u), r_eax);
    /* 0051dcee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dcf0: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51dcf5u); f_007751b0();
    /* 0051dcf5: fld dword ptr [0x92123c] */ FPUSH(R_F32((u32)(0x92123cu)));
    /* 0051dcfb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051dcfd: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051dd01: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051dd06: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051dd0b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051dd0f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051dd13: fistp dword ptr [ebx + 0x42c] */ W32((u32)(r_ebx+0x42cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0051dd19: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051dd1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dd1f: mov dword ptr [ebx + 0x470], 0 */ W32((u32)(r_ebx+0x470u), 0x0u);
    /* 0051dd29: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51dd2eu); f_007751b0();
    /* 0051dd2e: fld dword ptr [0x921238] */ FPUSH(R_F32((u32)(0x921238u)));
    /* 0051dd34: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051dd36: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0051dd3a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0051dd3f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051dd44: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0051dd48: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0051dd4c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0051dd50: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0051dd54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dd56: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 0051dd5a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51dd5fu); f_007751b0();
    /* 0051dd5f: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0051dd63: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0051dd67: fmul dword ptr [0x921230] */ ST(0) = ST(0) * R_F32((u32)(0x921230u));
    /* 0051dd6d: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0051dd71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051dd73: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x51dd78u); f_0082dcbc();
    /* 0051dd78: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0051dd7c: fadd dword ptr [ebx + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3fcu));
    /* 0051dd82: fstp dword ptr [ebx + 0x39c] */ W_F32((u32)(r_ebx+0x39cu), ST(0)); FPOP();
    /* 0051dd88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051dd8a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x51dd8fu); f_0082ddd8();
    /* 0051dd8f: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0051dd93: fadd dword ptr [ebx + 0x404] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x404u));
    /* 0051dd99: fstp dword ptr [ebx + 0x3a4] */ W_F32((u32)(r_ebx+0x3a4u), ST(0)); FPOP();
    /* 0051dd9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dda1: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51dda6u); f_007751b0();
    /* 0051dda6: fld dword ptr [0x921234] */ FPUSH(R_F32((u32)(0x921234u)));
    /* 0051ddac: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051ddae: fadd dword ptr [0x92122c] */ ST(0) = ST(0) + R_F32((u32)(0x92122cu));
    /* 0051ddb4: fst dword ptr [ebx + 0x408] */ W_F32((u32)(r_ebx+0x408u), ST(0));
    /* 0051ddba: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 0051ddc4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0051ddc8: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 0051ddcf: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x51ddd4u); f_00782a34();
    /* 0051ddd4: fld dword ptr [0x921258] */ FPUSH(R_F32((u32)(0x921258u)));
    /* 0051ddda: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051dddc: fstp dword ptr [ebx + 0x43c] */ W_F32((u32)(r_ebx+0x43cu), ST(0)); FPOP();
    /* 0051dde2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dde4: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51dde9u); f_00521410();
    /* 0051dde9: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051ddec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051dded: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ddee: ret 4 */ FN_RET(0x0051d9b8); r_esp += 8; return;
}

void f_0051ddf4(void) /* sub_51DDF4 */
{
    FN_ENTER(0x0051ddf4);
    /* 0051ddf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddf5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0051ddf7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051ddf9: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddfe: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51de03u); f_007aaa30();
    /* 0051de03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051de05: jne 0x51de17 */ if (!fZ) goto L_0051de17;
L_0051de07:; BB(0x0051de07);
    /* 0051de07: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de0c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051de0e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51de13u); f_007aaa30();
    /* 0051de13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051de15: je 0x51de3e */ if (fZ) goto L_0051de3e;
L_0051de17:; BB(0x0051de17);
    /* 0051de17: push 0xd1 */ { u32 v = 0xd1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0051de1e: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x51de23u); f_007879b8();
    /* 0051de23: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0051de26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0051de28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051de2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051de2c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x51de31u); f_00814298();
    /* 0051de31: push 0xfffff000 */ { u32 v = 0xfffff000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de36: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x51de3bu); f_00814680();
    /* 0051de3b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0051de3e:; BB(0x0051de3e);
    /* 0051de3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051de3f: ret  */ FN_RET(0x0051ddf4); r_esp += 4; return;
}

void f_0051de40(void) /* sub_51DE40 */
{
    FN_ENTER(0x0051de40);
    /* 0051de40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0051de41: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051de44: mov esi, ecx */ r_esi = r_ecx;
    /* 0051de46: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0051de49: fsub dword ptr [esi + 0x3fc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x3fcu));
    /* 0051de4f: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 0051de52: fsub dword ptr [esi + 0x404] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x404u));
    /* 0051de58: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051de5a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051de5d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051de61: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0051de69: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0051de6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de6d: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51de72u); f_007828e4();
    /* 0051de72: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0051de74: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051de77: mov ecx, esi */ r_ecx = r_esi;
    /* 0051de79: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x51de7eu); f_007751b0();
    /* 0051de7e: fld dword ptr [0x92121c] */ FPUSH(R_F32((u32)(0x92121cu)));
    /* 0051de84: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051de86: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 0051de8a: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0051de8f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0051de94: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0051de98: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 0051de9c: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 0051dea0: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0051dea4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0051dea7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0051deab: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0051deaf: add eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051deb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb7: call 0x782b64 */ r_esp -= 4; W32(r_esp, 0x51debcu); f_00782b64();
    /* 0051debc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051debf: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dec4: mov ecx, esi */ r_ecx = r_esi;
    /* 0051dec6: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 0051decb: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x51ded0u); f_00520c08();
    /* 0051ded0: fld dword ptr [0x921230] */ FPUSH(R_F32((u32)(0x921230u)));
    /* 0051ded6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0051ded8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051dedb: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051dedd: fadd dword ptr [esi + 0x3fc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3fcu));
    /* 0051dee3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0051dee7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051dee9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051deeb: fadd dword ptr [esi + 0x404] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x404u));
    /* 0051def1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051def3: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0051def9: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
    /* 0051deff: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df04: lea edx, [esi + 0x300] */ r_edx = (u32)(r_esi+0x300u);
    /* 0051df0a: lea eax, [esi + 0x39c] */ r_eax = (u32)(r_esi+0x39cu);
    /* 0051df10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051df11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051df12: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x51df17u); f_0077fffc();
    /* 0051df17: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051df1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051df1c: je 0x51df69 */ if (fZ) goto L_0051df69;
L_0051df1e:; BB(0x0051df1e);
    /* 0051df1e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0051df21: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0051df23: fsub dword ptr [esi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x38u));
    /* 0051df26: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051df29: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0051df2c: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 0051df2f: fsub dword ptr [esi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x40u));
    /* 0051df32: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0051df35: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0051df39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051df3a: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x51df3fu); f_007828e4();
    /* 0051df3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0051df40: fld dword ptr [0x921210] */ FPUSH(R_F32((u32)(0x921210u)));
    /* 0051df46: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0051df48: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0051df4b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0051df4d: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 0051df50: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0051df54: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0051df56: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051df58: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 0051df5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0051df5d: fstp dword ptr [esi + 0x39c] */ W_F32((u32)(r_esi+0x39cu), ST(0)); FPOP();
    /* 0051df63: fstp dword ptr [esi + 0x3a4] */ W_F32((u32)(r_esi+0x3a4u), ST(0)); FPOP();
L_0051df69:; BB(0x0051df69);
    /* 0051df69: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0051df6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0051df6d: ret  */ FN_RET(0x0051de40); r_esp += 4; return;
}

void f_0051df70(void) /* sub_51DF70 */
{
    FN_ENTER(0x0051df70);
    /* 0051df70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0051df71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0051df73: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0051df77: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051df7a: je 0x51dff8 */ if (fZ) goto L_0051dff8;
L_0051df7c:; BB(0x0051df7c);
    /* 0051df7c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051df7f: je 0x51dfe0 */ if (fZ) goto L_0051dfe0;
L_0051df81:; BB(0x0051df81);
    /* 0051df81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0051df83: jne 0x51dff4 */ if (!fZ) goto L_0051dff4;
L_0051df85:; BB(0x0051df85);
    /* 0051df85: add dword ptr [ebx + 0x424], 1 */ { u32 ad = (u32)(r_ebx+0x424u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0051df8c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051df8e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x51df93u); f_007aa094();
    /* 0051df93: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df98: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051df9a: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x51df9fu); f_007aaa30();
    /* 0051df9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfa1: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x51dfa6u); f_0052126c();
    /* 0051dfa6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051dfa8: je 0x51dfc1 */ if (fZ) goto L_0051dfc1;
L_0051dfaa:; BB(0x0051dfaa);
    /* 0051dfaa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfac: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x51dfb1u); f_005213d8();
    /* 0051dfb1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfb3: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x51dfb8u); f_00521410();
    /* 0051dfb8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfba: call 0x51b1cc */ r_esp -= 4; W32(r_esp, 0x51dfbfu); f_0051b1cc();
    /* 0051dfbf: jmp 0x51dfc8 */ goto L_0051dfc8;
L_0051dfc1:; BB(0x0051dfc1);
    /* 0051dfc1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfc3: call 0x51b1ac */ r_esp -= 4; W32(r_esp, 0x51dfc8u); f_0051b1ac();
L_0051dfc8:; BB(0x0051dfc8);
    /* 0051dfc8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051dfca: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfcc: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x51dfd2u); call_ind(t); }
    /* 0051dfd2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051dfd4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfd6: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x51dfdcu); call_ind(t); }
    /* 0051dfdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051dfdd: ret 4 */ FN_RET(0x0051df70); r_esp += 8; return;
L_0051dfe0:; BB(0x0051dfe0);
    /* 0051dfe0: mov eax, dword ptr [ebx + 0x424] */ r_eax = R32((u32)(r_ebx+0x424u));
    /* 0051dfe6: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0051dfe9: jle 0x51dff4 */ if ((fZ||fS!=fO)) goto L_0051dff4;
L_0051dfeb:; BB(0x0051dfeb);
    /* 0051dfeb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dfed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051dfef: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x51dff4u); f_0051f62c();
L_0051dff4:; BB(0x0051dff4);
    /* 0051dff4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051dff5: ret 4 */ FN_RET(0x0051df70); r_esp += 8; return;
L_0051dff8:; BB(0x0051dff8);
    /* 0051dff8: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dffa: mov eax, 5 */ r_eax = 0x5u;
    /* 0051dfff: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0051e006: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051e008: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x51e00du); f_0051f664();
    /* 0051e00d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0051e00f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0051e011: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x51e017u); call_ind(t); }
    /* 0051e017: mov dword ptr [ebx + 0x424], 0 */ W32((u32)(r_ebx+0x424u), 0x0u);
    /* 0051e021: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0051e022: ret 4 */ FN_RET(0x0051df70); r_esp += 8; return;
}

