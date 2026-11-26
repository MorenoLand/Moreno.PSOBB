#include "protos.h"

void f_005470a4(void) /* sub_5470A4 */
{
    FN_ENTER(0x005470a4);
    /* 005470a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005470a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005470a6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005470a8: mov eax, dword ptr [ebx + 0x340] */ r_eax = R32((u32)(r_ebx+0x340u));
    /* 005470ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005470b0: jne 0x5470b5 */ if (!fZ) goto L_005470b5;
L_005470b2:; BB(0x005470b2);
    /* 005470b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005470b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005470b4: ret  */ FN_RET(0x005470a4); r_esp += 4; return;
L_005470b5:; BB(0x005470b5);
    /* 005470b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005470b7: call 0x546c7c */ r_esp -= 4; W32(r_esp, 0x5470bcu); f_00546c7c();
    /* 005470bc: mov eax, dword ptr [ebx + 0x330] */ r_eax = R32((u32)(r_ebx+0x330u));
    /* 005470c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005470c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005470c6: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005470c9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005470cb: mov eax, dword ptr [0xa73860] */ r_eax = R32((u32)(0xa73860u));
    /* 005470d0: mov eax, dword ptr [edx + eax + 8] */ r_eax = R32((u32)(r_edx+r_eax+0x8u));
    /* 005470d4: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005470d7: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005470d9: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005470dc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005470de: mov dword ptr [0xa7385c], eax */ W32((u32)(0xa7385cu), r_eax);
    /* 005470e3: mov eax, 0 */ r_eax = 0x0u;
    /* 005470e8: jle 0x54712c */ if ((fZ||fS!=fO)) goto L_0054712c;
L_005470ea:; BB(0x005470ea);
    /* 005470ea: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005470ed: mov esi, eax */ r_esi = r_eax;
L_005470ef:; BB(0x005470ef);
    /* 005470ef: mov edx, dword ptr [ebx + 0x328] */ r_edx = R32((u32)(r_ebx+0x328u));
    /* 005470f5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005470f8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005470fa: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005470fc: shl ecx, 0xb */ { u32 c = (11u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 005470ff: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x547104u); f_0082dcbc();
    /* 00547104: fld dword ptr [0x923cf4] */ FPUSH(R_F32((u32)(0x923cf4u)));
    /* 0054710a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054710c: fadd dword ptr [0x923cf8] */ ST(0) = ST(0) + R_F32((u32)(0x923cf8u));
    /* 00547112: fmul dword ptr [0x923cfc] */ ST(0) = ST(0) * R_F32((u32)(0x923cfcu));
    /* 00547118: fstp dword ptr [ebx + esi*4 + 0x2e4] */ W_F32((u32)(r_ebx+r_esi*4+0x2e4u), ST(0)); FPOP();
    /* 0054711f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00547122: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 00547125: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00547127: jl 0x5470ef */ if ((fS!=fO)) goto L_005470ef;
L_00547129:; BB(0x00547129);
    /* 00547129: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0054712c:; BB(0x0054712c);
    /* 0054712c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054712e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00547130: jle 0x54718c */ if ((fZ||fS!=fO)) goto L_0054718c;
L_00547132:; BB(0x00547132);
    /* 00547132: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00547135: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00547137: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0054713a: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054713c: lea edx, [ebx + ecx + 0x3c] */ r_edx = (u32)(r_ebx+r_ecx+0x3cu);
L_00547140:; BB(0x00547140);
    /* 00547140: fld dword ptr [ebx + eax*4 + 0x2e4] */ FPUSH(R_F32((u32)(r_ebx+r_eax*4+0x2e4u)));
    /* 00547147: fld dword ptr [edx + 0x198] */ FPUSH(R_F32((u32)(r_edx+0x198u)));
    /* 0054714d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0054714f: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 00547151: fld dword ptr [edx + 0x19c] */ FPUSH(R_F32((u32)(r_edx+0x19cu)));
    /* 00547157: fld dword ptr [edx + 0x1a0] */ FPUSH(R_F32((u32)(r_edx+0x1a0u)));
    /* 0054715d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054715f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00547161: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 00547164: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547166: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00547168: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0054716b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054716d: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 00547173: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547175: fstp dword ptr [edx + 0xd0] */ W_F32((u32)(r_edx+0xd0u), ST(0)); FPOP();
    /* 0054717b: fstp dword ptr [edx + 0xd4] */ W_F32((u32)(r_edx+0xd4u), ST(0)); FPOP();
    /* 00547181: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00547184: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547187: cmp eax, dword ptr [ebx + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x38u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054718a: jl 0x547140 */ if ((fS!=fO)) goto L_00547140;
L_0054718c:; BB(0x0054718c);
    /* 0054718c: add dword ptr [ebx + 0x328], 1 */ { u32 ad = (u32)(r_ebx+0x328u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00547193: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547194: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00547195: ret  */ FN_RET(0x005470a4); r_esp += 4; return;
}

void f_00547198(void) /* sub_547198 */
{
    FN_ENTER(0x00547198);
    /* 00547198: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00547199: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054719a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054719b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054719c: sub esp, 0x4b8 */ {  u32 a = r_esp; u32 b = 0x4b8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005471a2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005471a4: mov eax, dword ptr [ebx + 0x340] */ r_eax = R32((u32)(r_ebx+0x340u));
    /* 005471aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005471ac: je 0x5474f8 */ if (fZ) goto L_005474f8;
L_005471b2:; BB(0x005471b2);
    /* 005471b2: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 005471b7: fld dword ptr [0xaf02d8] */ FPUSH(R_F32((u32)(0xaf02d8u)));
    /* 005471bd: fld dword ptr [0x923cf0] */ FPUSH(R_F32((u32)(0x923cf0u)));
    /* 005471c3: fld dword ptr [0xaf02dc] */ FPUSH(R_F32((u32)(0xaf02dcu)));
    /* 005471c9: mov esi, dword ptr [ebx + 0x32c] */ r_esi = R32((u32)(r_ebx+0x32cu));
    /* 005471cf: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 005471d2: fld dword ptr [0xaf02cc] */ FPUSH(R_F32((u32)(0xaf02ccu)));
    /* 005471d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005471da: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005471dc: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005471de: fld dword ptr [0xaf02c8] */ FPUSH(R_F32((u32)(0xaf02c8u)));
    /* 005471e4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005471e6: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005471e8: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 005471ed: or esi, 0xffffff */ {  u32 a = r_esi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005471f3: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005471f6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005471f8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005471fd: mov eax, 0 */ r_eax = 0x0u;
    /* 00547202: jle 0x54751c */ if ((fZ||fS!=fO)) goto L_0054751c;
L_00547208:; BB(0x00547208);
    /* 00547208: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054720a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0054720e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547210: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00547214: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00547218: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0054721c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0054721f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00547222: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00547224: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00547227: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00547229: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0054722c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054722e: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00547231: lea edi, [edi + edx + 0x108] */ r_edi = (u32)(r_edi+r_edx+0x108u);
    /* 00547238: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054723a: mov esi, eax */ r_esi = r_eax;
L_0054723c:; BB(0x0054723c);
    /* 0054723c: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00547240: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00547241: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00547243: mov edx, edi */ r_edx = r_edi;
    /* 00547245: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x54724au); f_00830aa0();
    /* 0054724a: fld dword ptr [0x923cec] */ FPUSH(R_F32((u32)(0x923cecu)));
    /* 00547250: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00547254: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00547256: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547258: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0054725b: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054725e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00547262: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00547266: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0054726a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0054726e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054726f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00547271: jb 0x547275 */ if (fC) goto L_00547275;
L_00547273:; BB(0x00547273);
    /* 00547273: fst st(4) */ ST(4) = ST(0);
L_00547275:; BB(0x00547275);
    /* 00547275: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00547277: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0054727b: fchs  */ ST(0) = -ST(0);
    /* 0054727d: fdivp st(4) */ ST(4) = ST(4) / ST(0); FPOP();
    /* 0054727f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547281: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00547283: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00547285: fmul dword ptr [0x923ce4] */ ST(0) = ST(0) * R_F32((u32)(0x923ce4u));
    /* 0054728b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054728d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00547291: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547293: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00547295: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547297: fstp dword ptr [esp + ebp + 0x3c] */ W_F32((u32)(r_esp+r_ebp+0x3cu), ST(0)); FPOP();
    /* 0054729b: fstp dword ptr [esp + ebp + 0x34] */ W_F32((u32)(r_esp+r_ebp+0x34u), ST(0)); FPOP();
    /* 0054729f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005472a1: fstp dword ptr [esp + esi*4 + 0x100] */ W_F32((u32)(r_esp+r_esi*4+0x100u), ST(0)); FPOP();
    /* 005472a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005472aa: fchs  */ ST(0) = -ST(0);
    /* 005472ac: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 005472b0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005472b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005472b4: fmul dword ptr [0x923ce0] */ ST(0) = ST(0) * R_F32((u32)(0x923ce0u));
    /* 005472ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005472bc: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 005472c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005472c2: fstp dword ptr [esp + esi*4 + 0x144] */ W_F32((u32)(r_esp+r_esi*4+0x144u), ST(0)); FPOP();
    /* 005472c9: fstp dword ptr [esp + ebp + 0x38] */ W_F32((u32)(r_esp+r_ebp+0x38u), ST(0)); FPOP();
    /* 005472cd: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005472d0: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005472d3: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005472d5: jl 0x54723c */ if ((fS!=fO)) goto L_0054723c;
L_005472db:; BB(0x005472db);
    /* 005472db: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_005472de:; BB(0x005472de);
    /* 005472de: fld dword ptr [0x923ce8] */ FPUSH(R_F32((u32)(0x923ce8u)));
    /* 005472e4: fld dword ptr [0x923ce8] */ FPUSH(R_F32((u32)(0x923ce8u)));
    /* 005472ea: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 005472ee: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005472f2: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 005472f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005472f8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005472fc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00547300: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00547304: fldz  */ FPUSH(0.0);
    /* 00547306: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00547308: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 0054730b: lea ebp, [esp + 0x188] */ r_ebp = (u32)(r_esp+0x188u);
    /* 00547312: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00547316: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00547318: jle 0x547503 */ if ((fZ||fS!=fO)) goto L_00547503;
L_0054731e:; BB(0x0054731e);
    /* 0054731e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00547320: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00547322: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00547326: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0054732a: mov ebx, eax */ r_ebx = r_eax;
L_0054732c:; BB(0x0054732c);
    /* 0054732c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00547330: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00547334: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00547336: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00547339: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054733b: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0054733f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547341: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00547345: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547347: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00547349: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054734b: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0054734f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547351: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00547353: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00547357: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547359: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054735b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054735d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0054735f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00547361: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00547362: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00547365: call 0x82f9f8 */ r_esp -= 4; W32(r_esp, 0x54736au); f_0082f9f8();
    /* 0054736a: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0054736e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00547370: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00547374: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00547376: fld dword ptr [0x923cec] */ FPUSH(R_F32((u32)(0x923cecu)));
    /* 0054737c: fld dword ptr [esp + edi*4 + 0x100] */ FPUSH(R_F32((u32)(r_esp+r_edi*4+0x100u)));
    /* 00547383: fld dword ptr [esp + edi*4 + 0x144] */ FPUSH(R_F32((u32)(r_esp+r_edi*4+0x144u)));
    /* 0054738a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054738e: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00547392: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00547396: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0054739a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054739c: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0054739e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 005473a0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005473a2: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 005473a5: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 005473a7: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005473ab: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 005473ad: fst dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0));
    /* 005473b0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005473b4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005473b6: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 005473b8: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 005473bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005473bd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005473bf: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 005473c2: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 005473c6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005473c8: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 005473ca: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 005473ce: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005473d0: fchs  */ ST(0) = -ST(0);
    /* 005473d2: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005473d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005473d6: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 005473d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005473da: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005473de: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005473e2: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 005473e5: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 005473e8: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 005473ec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005473f0: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005473f4: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005473f8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 005473fa: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 005473fd: fld dword ptr [0x923ce8] */ FPUSH(R_F32((u32)(0x923ce8u)));
    /* 00547403: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547405: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00547407: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547409: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 0054740c: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 0054740f: mov dword ptr [ebp + 0x2c], esi */ W32((u32)(r_ebp+0x2cu), r_esi);
    /* 00547412: mov dword ptr [ebp + 0xc], 0 */ W32((u32)(r_ebp+0xcu), 0x0u);
    /* 00547419: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0054741c: mov dword ptr [ebp + 0x24], 0x3f800000 */ W32((u32)(r_ebp+0x24u), 0x3f800000u);
    /* 00547423: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00547426: mov edx, dword ptr [edx + 0x38] */ r_edx = R32((u32)(r_edx+0x38u));
    /* 00547429: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054742d: add ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00547430: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00547433: lea ecx, [edx - 1] */ r_ecx = (u32)(r_edx+0xffffffffu);
    /* 00547436: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00547438: jge 0x547443 */ if ((fS==fO)) goto L_00547443;
L_0054743a:; BB(0x0054743a);
    /* 0054743a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0054743c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054743e: jmp 0x54732c */ goto L_0054732c;
L_00547443:; BB(0x00547443);
    /* 00547443: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00547447: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0054744b: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0054744f: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
L_00547453:; BB(0x00547453);
    /* 00547453: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547455: fmul dword ptr [esp + edx*4 + 0xfc] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4+0xfcu));
    /* 0054745c: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0054745e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547460: fmul dword ptr [esp + edx*4 + 0x140] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4+0x140u));
    /* 00547467: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054746b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0054746f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547471: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00547473: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00547475: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00547478: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054747a: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 0054747d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0054747f: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 00547482: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00547484: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 00547487: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0054748b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054748d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0054748f: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 00547492: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00547494: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 00547497: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0054749b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054749d: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0054749f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005474a1: fstp dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0)); FPOP();
    /* 005474a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005474a6: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 005474a9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005474ad: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 005474b0: fstp dword ptr [ebp + 0x20] */ W_F32((u32)(r_ebp+0x20u), ST(0)); FPOP();
    /* 005474b3: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
    /* 005474b6: mov dword ptr [ebp + 0x2c], esi */ W32((u32)(r_ebp+0x2cu), r_esi);
    /* 005474b9: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x5474beu); f_007a902c();
    /* 005474be: lea eax, [esp + 0x188] */ r_eax = (u32)(r_esp+0x188u);
    /* 005474c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005474c7: mov ebx, dword ptr [ebx + 0x38] */ r_ebx = R32((u32)(r_ebx+0x38u));
    /* 005474ca: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005474cc: push dword ptr [0xa7385c] */ { u32 v = R32((u32)(0xa7385cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005474d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005474d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005474d4: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x5474d9u); f_0082b158();
    /* 005474d9: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005474de: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5474e3u); f_0082d710();
    /* 005474e3: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005474e8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005474ed: add esp, 0x4cc */ {  u32 a = r_esp; u32 b = 0x4ccu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005474f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005474f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005474f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005474f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005474f7: ret  */ FN_RET(0x00547198); r_esp += 4; return;
L_005474f8:; BB(0x005474f8);
    /* 005474f8: add esp, 0x4b8 */ {  u32 a = r_esp; u32 b = 0x4b8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005474fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005474ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547500: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547501: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00547502: ret  */ FN_RET(0x00547198); r_esp += 4; return;
L_00547503:; BB(0x00547503);
    /* 00547503: fld dword ptr [0x923cec] */ FPUSH(R_F32((u32)(0x923cecu)));
    /* 00547509: fld dword ptr [0x923ce8] */ FPUSH(R_F32((u32)(0x923ce8u)));
    /* 0054750f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547511: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547513: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00547515: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547517: jmp 0x547453 */ goto L_00547453;
L_0054751c:; BB(0x0054751c);
    /* 0054751c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0054751e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00547520: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00547522: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547524: jmp 0x5472de */ goto L_005472de;
}

void f_0054752c(void) /* sub_54752C */
{
    FN_ENTER(0x0054752c);
    /* 0054752c: mov dword ptr [0xa73864], 0x10 */ W32((u32)(0xa73864u), 0x10u);
    /* 00547536: mov eax, 0x9cf8c0 */ r_eax = 0x9cf8c0u;
    /* 0054753b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0054753e: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00547541: mov dword ptr [0xa73860], eax */ W32((u32)(0xa73860u), r_eax);
    /* 00547546: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00547548: mov dword ptr [0xa7385c], eax */ W32((u32)(0xa7385cu), r_eax);
    /* 0054754d: ret  */ FN_RET(0x0054752c); r_esp += 4; return;
}

void f_00547550(void) /* sub_547550 */
{
    FN_ENTER(0x00547550);
    /* 00547550: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00547551: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00547553: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00547555: call 0x547574 */ r_esp -= 4; W32(r_esp, 0x54755au); f_00547574();
    /* 0054755a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054755e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00547560: jne 0x547566 */ if (!fZ) goto L_00547566;
L_00547562:; BB(0x00547562);
    /* 00547562: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00547563: ret 4 */ FN_RET(0x00547550); r_esp += 8; return;
L_00547566:; BB(0x00547566);
    /* 00547566: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00547567: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54756cu); f_005c2f74();
    /* 0054756c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054756d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054756e: ret 4 */ FN_RET(0x00547550); r_esp += 8; return;
}

void f_00547574(void) /* sub_547574 */
{
    FN_ENTER(0x00547574);
    /* 00547574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547575: mov ebp, esp */ r_ebp = r_esp;
    /* 00547577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00547579: push 0x8d5a1c */ { u32 v = 0x8d5a1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054757e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00547584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054758c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054758f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00547592: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00547595: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00547598: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054759b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054759e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005475a5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005475a8: mov dword ptr [ecx], 0xb037a0 */ W32((u32)(r_ecx), 0xb037a0u);
    /* 005475ae: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5475b3u); f_007b9c8c();
    /* 005475b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005475b6: mov ecx, dword ptr [eax + 0x384] */ r_ecx = R32((u32)(r_eax+0x384u));
    /* 005475bc: mov dword ptr [eax + 0x388], 0 */ W32((u32)(r_eax+0x388u), 0x0u);
    /* 005475c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005475c8: je 0x5475d4 */ if (fZ) goto L_005475d4;
L_005475ca:; BB(0x005475ca);
    /* 005475ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005475cc: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x5475d1u); f_00721474();
    /* 005475d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_005475d4:; BB(0x005475d4);
    /* 005475d4: mov dword ptr [eax + 0x384], 0 */ W32((u32)(r_eax+0x384u), 0x0u);
    /* 005475de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005475e5: mov ecx, eax */ r_ecx = r_eax;
    /* 005475e7: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5475ecu); f_0078638c();
    /* 005475ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005475ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005475f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005475f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005475f9: ret  */ FN_RET(0x00547574); r_esp += 4; return;
}

void f_005475fc(void) /* sub_5475FC */
{
    FN_ENTER(0x005475fc);
    /* 005475fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005475fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005475ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00547601: call 0x547620 */ r_esp -= 4; W32(r_esp, 0x547606u); f_00547620();
    /* 00547606: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054760a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054760c: jne 0x547612 */ if (!fZ) goto L_00547612;
L_0054760e:; BB(0x0054760e);
    /* 0054760e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054760f: ret 4 */ FN_RET(0x005475fc); r_esp += 8; return;
L_00547612:; BB(0x00547612);
    /* 00547612: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00547613: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x547618u); f_005c2f74();
    /* 00547618: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547619: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054761a: ret 4 */ FN_RET(0x005475fc); r_esp += 8; return;
}

void f_00547620(void) /* sub_547620 */
{
    FN_ENTER(0x00547620);
    /* 00547620: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547621: mov ebp, esp */ r_ebp = r_esp;
    /* 00547623: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00547625: push 0x8d5a38 */ { u32 v = 0x8d5a38u; r_esp -= 4; W32(r_esp, v); }
    /* 0054762a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00547630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547631: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00547638: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054763b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054763e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00547641: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00547644: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00547647: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054764a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054764d: mov dword ptr [ecx], 0xb03900 */ W32((u32)(r_ecx), 0xb03900u);
    /* 00547653: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054765a: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x54765fu); f_00770660();
    /* 0054765f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00547662: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00547669: mov esp, ebp */ r_esp = r_ebp;
    /* 0054766b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054766c: ret  */ FN_RET(0x00547620); r_esp += 4; return;
}

void f_00547670(void) /* sub_547670 */
{
    FN_ENTER(0x00547670);
    /* 00547670: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547671: mov esi, ecx */ r_esi = r_ecx;
    /* 00547673: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x547678u); f_004f7c84();
    /* 00547678: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054767a: je 0x547685 */ if (fZ) goto L_00547685;
L_0054767c:; BB(0x0054767c);
    /* 0054767c: mov ecx, esi */ r_ecx = r_esi;
    /* 0054767e: call 0x5477f8 */ r_esp -= 4; W32(r_esp, 0x547683u); f_005477f8();
    /* 00547683: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547684: ret  */ FN_RET(0x00547670); r_esp += 4; return;
L_00547685:; BB(0x00547685);
    /* 00547685: mov ecx, esi */ r_ecx = r_esi;
    /* 00547687: call 0x5476fc */ r_esp -= 4; W32(r_esp, 0x54768cu); f_005476fc();
    /* 0054768c: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 00547692: mov ecx, esi */ r_ecx = r_esi;
    /* 00547694: call dword ptr [eax*8 + 0x9bd164] */ { u32 t = R32((u32)(r_eax*8+0x9bd164u)); r_esp -= 4; W32(r_esp, 0x54769bu); call_ind(t); }
    /* 0054769b: mov ecx, esi */ r_ecx = r_esi;
    /* 0054769d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5476a2u); f_0078730c();
    /* 005476a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005476a4: call 0x7b6880 */ r_esp -= 4; W32(r_esp, 0x5476a9u); f_007b6880();
    /* 005476a9: mov eax, dword ptr [esi + 0x3f8] */ r_eax = R32((u32)(r_esi+0x3f8u));
    /* 005476af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005476b1: je 0x5476be */ if (fZ) goto L_005476be;
L_005476b3:; BB(0x005476b3);
    /* 005476b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005476b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005476b6: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5476bbu); f_006946a8();
    /* 005476bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005476be:; BB(0x005476be);
    /* 005476be: mov ecx, dword ptr [esi + 0x384] */ r_ecx = R32((u32)(r_esi+0x384u));
    /* 005476c4: call 0x54a310 */ r_esp -= 4; W32(r_esp, 0x5476c9u); f_0054a310();
    /* 005476c9: mov ecx, esi */ r_ecx = r_esi;
    /* 005476cb: call 0x54770c */ r_esp -= 4; W32(r_esp, 0x5476d0u); f_0054770c();
    /* 005476d0: mov eax, dword ptr [esi + 0x37c] */ r_eax = R32((u32)(r_esi+0x37cu));
    /* 005476d6: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005476d9: je 0x5476f3 */ if (fZ) goto L_005476f3;
L_005476db:; BB(0x005476db);
    /* 005476db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005476dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005476df: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 005476e5: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005476ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005476eb: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5476f0u); f_00805608();
    /* 005476f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005476f3:; BB(0x005476f3);
    /* 005476f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005476f5: call 0x547728 */ r_esp -= 4; W32(r_esp, 0x5476fau); f_00547728();
    /* 005476fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005476fb: ret  */ FN_RET(0x00547670); r_esp += 4; return;
}

void f_005476fc(void) /* sub_5476FC */
{
    FN_ENTER(0x005476fc);
    /* 005476fc: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 00547702: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00547705: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00547708: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0054770b: ret  */ FN_RET(0x005476fc); r_esp += 4; return;
}

void f_0054770c(void) /* sub_54770C */
{
    FN_ENTER(0x0054770c);
    /* 0054770c: mov eax, dword ptr [ecx + 0x3f8] */ r_eax = R32((u32)(r_ecx+0x3f8u));
    /* 00547712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00547714: jne 0x547725 */ if (!fZ) goto L_00547725;
L_00547716:; BB(0x00547716);
    /* 00547716: mov edx, dword ptr [ecx + 0x388] */ r_edx = R32((u32)(r_ecx+0x388u));
    /* 0054771c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0054771f: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00547722: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
L_00547725:; BB(0x00547725);
    /* 00547725: ret  */ FN_RET(0x0054770c); r_esp += 4; return;
}

void f_00547728(void) /* sub_547728 */
{
    FN_ENTER(0x00547728);
    /* 00547728: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00547729: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054772c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054772e: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 00547734: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00547739: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0054773b: mov eax, ecx */ r_eax = r_ecx;
    /* 0054773d: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00547740: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00547742: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00547744: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00547747: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547749: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054774b: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0054774d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054774f: je 0x547759 */ if (fZ) goto L_00547759;
L_00547751:; BB(0x00547751);
    /* 00547751: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 00547757: jmp 0x5477c0 */ goto L_005477c0;
L_00547759:; BB(0x00547759);
    /* 00547759: fld dword ptr [0x923f1c] */ FPUSH(R_F32((u32)(0x923f1cu)));
    /* 0054775f: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00547762: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00547765: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00547768: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0054776b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054776f: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00547773: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00547777: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054777b: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 00547781: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00547784: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 00547789: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054778a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054778b: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x547790u); f_007806dc();
    /* 00547790: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547793: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547795: je 0x5477d4 */ if (fZ) goto L_005477d4;
L_00547797:; BB(0x00547797);
    /* 00547797: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054779a: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 0054779d: mov dword ptr [ebx + 0x3e8], edx */ W32((u32)(r_ebx+0x3e8u), r_edx);
    /* 005477a3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005477a6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005477a8: mov dword ptr [ebx + 0x3ec], ecx */ W32((u32)(r_ebx+0x3ecu), r_ecx);
    /* 005477ae: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005477b1: mov dword ptr [ebx + 0x3f0], ecx */ W32((u32)(r_ebx+0x3f0u), r_ecx);
    /* 005477b7: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005477ba: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
L_005477c0:; BB(0x005477c0);
    /* 005477c0: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005477c6: je 0x5477cf */ if (fZ) goto L_005477cf;
L_005477c8:; BB(0x005477c8);
    /* 005477c8: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_005477cf:; BB(0x005477cf);
    /* 005477cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005477d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005477d3: ret  */ FN_RET(0x00547728); r_esp += 4; return;
L_005477d4:; BB(0x005477d4);
    /* 005477d4: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005477d7: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 005477da: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 005477e0: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005477e3: mov dword ptr [ebx + 0x3f0], edx */ W32((u32)(r_ebx+0x3f0u), r_edx);
    /* 005477e9: mov edx, dword ptr [ebx + 0x3e8] */ r_edx = R32((u32)(r_ebx+0x3e8u));
    /* 005477ef: mov dword ptr [ebx + 0x3f4], eax */ W32((u32)(r_ebx+0x3f4u), r_eax);
    /* 005477f5: jmp 0x5477c0 */ goto L_005477c0;
}

void f_005477f8(void) /* sub_5477F8 */
{
    FN_ENTER(0x005477f8);
    /* 005477f8: fld dword ptr [0x923f14] */ FPUSH(R_F32((u32)(0x923f14u)));
    /* 005477fe: fadd dword ptr [ecx + 0x35c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x35cu));
    /* 00547804: fld dword ptr [0x923f18] */ FPUSH(R_F32((u32)(0x923f18u)));
    /* 0054780a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054780c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054780e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054780f: jb 0x547813 */ if (fC) goto L_00547813;
L_00547811:; BB(0x00547811);
    /* 00547811: fst st(1) */ ST(1) = ST(0);
L_00547813:; BB(0x00547813);
    /* 00547813: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547815: fstp dword ptr [ecx + 0x398] */ W_F32((u32)(r_ecx+0x398u), ST(0)); FPOP();
    /* 0054781b: ret  */ FN_RET(0x005477f8); r_esp += 4; return;
}

void f_0054781c(void) /* sub_54781C */
{
    FN_ENTER(0x0054781c);
    /* 0054781c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054781d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547820: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00547822: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x547827u); f_004f7c84();
    /* 00547827: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547829: jne 0x547935 */ if (!fZ) goto L_00547935;
L_0054782f:; BB(0x0054782f);
    /* 0054782f: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 00547835: fcomp dword ptr [0x923f10] */ fx_compare(ST(0), R_F32((u32)(0x923f10u))); FPOP();
    /* 0054783b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054783d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054783e: ja 0x547845 */ if ((!fC&&!fZ)) goto L_00547845;
L_00547840:; BB(0x00547840);
    /* 00547840: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00547843: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547844: ret  */ FN_RET(0x0054781c); r_esp += 4; return;
L_00547845:; BB(0x00547845);
    /* 00547845: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054784a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054784c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054784f: push dword ptr [0xa738a4] */ { u32 v = R32((u32)(0xa738a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00547855: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x547858u); call_ind(t); }
    /* 00547858: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054785a: jne 0x547861 */ if (!fZ) goto L_00547861;
L_0054785c:; BB(0x0054785c);
    /* 0054785c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054785f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547860: ret  */ FN_RET(0x0054781c); r_esp += 4; return;
L_00547861:; BB(0x00547861);
    /* 00547861: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547863: call 0x54793c */ r_esp -= 4; W32(r_esp, 0x547868u); f_0054793c();
    /* 00547868: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054786a: jne 0x547935 */ if (!fZ) goto L_00547935;
L_00547870:; BB(0x00547870);
    /* 00547870: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 00547876: fcom dword ptr [0x923f08] */ fx_compare(ST(0), R_F32((u32)(0x923f08u))); 
    /* 0054787c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054787e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054787f: jb 0x547885 */ if (fC) goto L_00547885;
L_00547881:; BB(0x00547881);
    /* 00547881: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547883: jmp 0x54788a */ goto L_0054788a;
L_00547885:; BB(0x00547885);
    /* 00547885: call 0x5479cc */ r_esp -= 4; W32(r_esp, 0x54788au); f_005479cc();
L_0054788a:; BB(0x0054788a);
    /* 0054788a: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x54788fu); f_00578b38();
    /* 0054788f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x547894u); f_0082d7b0();
    /* 00547894: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00547898: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0054789b: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0054789e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005478a2: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 005478a5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005478a9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005478ad: fadd dword ptr [ebp + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3a4u));
    /* 005478b3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005478b7: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005478bb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5478c0u); f_0082d838();
    /* 005478c0: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005478c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005478c5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5478cau); f_0082d8bc();
    /* 005478ca: lea edx, [ebp + 0x3a8] */ r_edx = (u32)(r_ebp+0x3a8u);
    /* 005478d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005478d2: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x5478d7u); f_0083c0a0();
    /* 005478d7: mov ecx, dword ptr [ebp + 0x384] */ r_ecx = R32((u32)(r_ebp+0x384u));
    /* 005478dd: call 0x54a38c */ r_esp -= 4; W32(r_esp, 0x5478e2u); f_0054a38c();
    /* 005478e2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5478e7u); f_0082da80();
    /* 005478e7: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5478ecu); f_0082dab0();
    /* 005478ec: fld dword ptr [ebp + 0x3a0] */ FPUSH(R_F32((u32)(r_ebp+0x3a0u)));
    /* 005478f2: fcomp dword ptr [0x923f08] */ fx_compare(ST(0), R_F32((u32)(0x923f08u))); FPOP();
    /* 005478f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005478fa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005478fb: jae 0x547902 */ if (!fC) goto L_00547902;
L_005478fd:; BB(0x005478fd);
    /* 005478fd: call 0x547a54 */ r_esp -= 4; W32(r_esp, 0x547902u); f_00547a54();
L_00547902:; BB(0x00547902);
    /* 00547902: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 00547908: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054790d: jne 0x547935 */ if (!fZ) goto L_00547935;
L_0054790f:; BB(0x0054790f);
    /* 0054790f: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 00547917: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0054791b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054791d: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 00547925: mov dword ptr [esp + 0x18], 0x40000000 */ W32((u32)(r_esp+0x18u), 0x40000000u);
    /* 0054792d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054792f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547930: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x547935u); f_00779d4c();
L_00547935:; BB(0x00547935);
    /* 00547935: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00547938: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547939: ret  */ FN_RET(0x0054781c); r_esp += 4; return;
}

void f_0054793c(void) /* sub_54793C */
{
    FN_ENTER(0x0054793c);
    /* 0054793c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054793d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547940: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00547942: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00547947: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00547949: je 0x5479c4 */ if (fZ) goto L_005479c4;
L_0054794b:; BB(0x0054794b);
    /* 0054794b: lea eax, [ebx + 0x3ec] */ r_eax = (u32)(r_ebx+0x3ecu);
    /* 00547951: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547952: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x547957u); f_00505a3c();
    /* 00547957: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054795a: je 0x5479ba */ if (fZ) goto L_005479ba;
L_0054795c:; BB(0x0054795c);
    /* 0054795c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x547961u); f_0082d7b0();
    /* 00547961: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00547964: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00547967: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0054796a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054796d: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00547970: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00547974: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00547978: fadd dword ptr [ebx + 0x3a4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3a4u));
    /* 0054797e: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00547982: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00547986: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54798bu); f_0082d838();
    /* 0054798b: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0054798e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00547990: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x547995u); f_0082d8bc();
    /* 00547995: lea edx, [ebx + 0x3a8] */ r_edx = (u32)(r_ebx+0x3a8u);
    /* 0054799b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054799d: call 0x83c0a0 */ r_esp -= 4; W32(r_esp, 0x5479a2u); f_0083c0a0();
    /* 005479a2: mov ecx, dword ptr [ebx + 0x384] */ r_ecx = R32((u32)(r_ebx+0x384u));
    /* 005479a8: call 0x54a38c */ r_esp -= 4; W32(r_esp, 0x5479adu); f_0054a38c();
    /* 005479ad: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5479b2u); f_0082da80();
    /* 005479b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005479b4: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x5479b9u); f_00505bf8();
    /* 005479b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005479ba:; BB(0x005479ba);
    /* 005479ba: mov eax, 1 */ r_eax = 0x1u;
    /* 005479bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005479c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005479c3: ret  */ FN_RET(0x0054793c); r_esp += 4; return;
L_005479c4:; BB(0x005479c4);
    /* 005479c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005479c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005479c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005479ca: ret  */ FN_RET(0x0054793c); r_esp += 4; return;
}

void f_005479cc(void) /* sub_5479CC */
{
    FN_ENTER(0x005479cc);
    /* 005479cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005479cf: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 005479d5: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 005479da: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 005479e0: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 005479e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005479e6: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 005479ec: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 005479f1: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 005479f7: or ecx, 0x8820 */ {  u32 a = r_ecx; u32 b = 0x8820u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 005479fd: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00547a03: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00547a08: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00547a0d: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x547a12u); f_0082d6fc();
    /* 00547a12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547a15: mov ecx, 0x2100 */ r_ecx = 0x2100u;
    /* 00547a1a: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x547a1fu); f_0082e1c4();
    /* 00547a1f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00547a23: fadd dword ptr [0x923f04] */ ST(0) = ST(0) + R_F32((u32)(0x923f04u));
    /* 00547a29: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00547a2c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00547a34: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00547a37: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00547a3f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00547a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547a48: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x547a4du); f_0082d710();
    /* 00547a4d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00547a50: ret  */ FN_RET(0x005479cc); r_esp += 4; return;
}

void f_00547a54(void) /* sub_547A54 */
{
    FN_ENTER(0x00547a54);
    /* 00547a54: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00547a59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547a5b: and eax, 0xffff77df */ {  u32 a = r_eax; u32 b = 0xffff77dfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00547a60: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00547a65: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 00547a6a: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x547a6fu); f_0082d6fc();
    /* 00547a6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00547a72: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 00547a77: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x547a7cu); f_0082e1c4();
    /* 00547a7c: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 00547a81: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x547a86u); f_0082e1c4();
    /* 00547a86: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 00547a8b: mov edx, dword ptr [0xaab500] */ r_edx = R32((u32)(0xaab500u));
    /* 00547a91: mov ecx, dword ptr [0xaab518] */ r_ecx = R32((u32)(0xaab518u));
    /* 00547a97: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 00547a9c: mov dword ptr [0xaf0364], edx */ W32((u32)(0xaf0364u), r_edx);
    /* 00547aa2: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00547aa8: ret  */ FN_RET(0x00547a54); r_esp += 4; return;
}

void f_00547aac(void) /* sub_547AAC */
{
    FN_ENTER(0x00547aac);
    /* 00547aac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547aad: mov esi, ecx */ r_esi = r_ecx;
    /* 00547aaf: mov eax, dword ptr [esi + 0x38c] */ r_eax = R32((u32)(r_esi+0x38cu));
    /* 00547ab5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547ab8: mov dword ptr [esi + 0x38c], eax */ W32((u32)(r_esi+0x38cu), r_eax);
    /* 00547abe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00547ac0: jle 0x547ac4 */ if ((fZ||fS!=fO)) goto L_00547ac4;
L_00547ac2:; BB(0x00547ac2);
    /* 00547ac2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547ac3: ret  */ FN_RET(0x00547aac); r_esp += 4; return;
L_00547ac4:; BB(0x00547ac4);
    /* 00547ac4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ac6: push dword ptr [0xa738a8] */ { u32 v = R32((u32)(0xa738a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00547acc: mov ecx, esi */ r_ecx = r_esi;
    /* 00547ace: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x547ad3u); f_007714cc();
    /* 00547ad3: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00547ad6: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547adb: jne 0x547b12 */ if (!fZ) goto L_00547b12;
L_00547add:; BB(0x00547add);
    /* 00547add: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 00547ae3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547ae6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00547ae9: jl 0x547b03 */ if ((fS!=fO)) goto L_00547b03;
L_00547aeb:; BB(0x00547aeb);
    /* 00547aeb: mov eax, dword ptr [esi + 0x50] */ r_eax = R32((u32)(r_esi+0x50u));
    /* 00547aee: mov edx, dword ptr [esi + 0x58] */ r_edx = R32((u32)(r_esi+0x58u));
    /* 00547af1: mov dword ptr [esi + 0x3c8], 5 */ W32((u32)(r_esi+0x3c8u), 0x5u);
    /* 00547afb: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00547afe: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00547b01: jmp 0x547b09 */ goto L_00547b09;
L_00547b03:; BB(0x00547b03);
    /* 00547b03: mov dword ptr [esi + 0x3c8], eax */ W32((u32)(r_esi+0x3c8u), r_eax);
L_00547b09:; BB(0x00547b09);
    /* 00547b09: mov ecx, esi */ r_ecx = r_esi;
    /* 00547b0b: call 0x547b30 */ r_esp -= 4; W32(r_esp, 0x547b10u); f_00547b30();
    /* 00547b10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547b11: ret  */ FN_RET(0x00547aac); r_esp += 4; return;
L_00547b12:; BB(0x00547b12);
    /* 00547b12: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00547b15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547b16: call 0x578a20 */ r_esp -= 4; W32(r_esp, 0x547b1bu); f_00578a20();
    /* 00547b1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547b1c: mov dword ptr [esi + 0x37c], 1 */ W32((u32)(r_esi+0x37cu), 0x1u);
    /* 00547b26: mov ecx, esi */ r_ecx = r_esi;
    /* 00547b28: call dword ptr [0x9bd168] */ { u32 t = R32((u32)(0x9bd168u)); r_esp -= 4; W32(r_esp, 0x547b2eu); call_ind(t); }
    /* 00547b2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00547b2f: ret  */ FN_RET(0x00547aac); r_esp += 4; return;
}

void f_00547b30(void) /* sub_547B30 */
{
    FN_ENTER(0x00547b30);
    /* 00547b30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547b31: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547b34: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00547b36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547b38: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x547b3du); f_007751b0();
    /* 00547b3d: fmul dword ptr [0x923efc] */ ST(0) = ST(0) * R_F32((u32)(0x923efcu));
    /* 00547b43: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00547b46: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00547b4a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00547b4f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00547b53: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00547b57: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00547b5b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00547b5e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00547b62: add eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547b65: mov dword ptr [ebp + 0x38c], eax */ W32((u32)(r_ebp+0x38cu), r_eax);
    /* 00547b6b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00547b6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547b6f: ret  */ FN_RET(0x00547b30); r_esp += 4; return;
}

void f_00547b70(void) /* sub_547B70 */
{
    FN_ENTER(0x00547b70);
    /* 00547b70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547b71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547b72: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00547b74: movzx eax, byte ptr [0xa7386c] */ r_eax = (u32)R8((u32)(0xa7386cu));
    /* 00547b7b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00547b7d: jne 0x547b93 */ if (!fZ) goto L_00547b93;
L_00547b7f:; BB(0x00547b7f);
    /* 00547b7f: mov dword ptr [0xa73870], 0x3d088889 */ W32((u32)(0xa73870u), 0x3d088889u);
    /* 00547b89: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00547b8e: mov byte ptr [0xa7386c], al */ W8((u32)(0xa7386cu), (u8)r_eax);
L_00547b93:; BB(0x00547b93);
    /* 00547b93: fld dword ptr [0x923ef4] */ FPUSH(R_F32((u32)(0x923ef4u)));
    /* 00547b99: fld dword ptr [0x923ee4] */ FPUSH(R_F32((u32)(0x923ee4u)));
    /* 00547b9f: fld dword ptr [0x923ef0] */ FPUSH(R_F32((u32)(0x923ef0u)));
    /* 00547ba5: fld dword ptr [0x923ed8] */ FPUSH(R_F32((u32)(0x923ed8u)));
    /* 00547bab: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 00547bb1: fcom dword ptr [0x923d2c] */ fx_compare(ST(0), R_F32((u32)(0x923d2cu))); 
    /* 00547bb7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547bb9: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00547bbb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00547bbd: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00547bc0: fld dword ptr [0x923ef4] */ FPUSH(R_F32((u32)(0x923ef4u)));
    /* 00547bc6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547bc8: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00547bca: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547bcc: fadd dword ptr [0x923ee0] */ ST(0) = ST(0) + R_F32((u32)(0x923ee0u));
    /* 00547bd2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547bd4: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 00547bda: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547bdc: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00547be2: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00547be4: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00547be6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547be8: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 00547bee: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00547bf0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547bf2: fadd dword ptr [0x923edc] */ ST(0) = ST(0) + R_F32((u32)(0x923edcu));
    /* 00547bf8: fstp dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0)); FPOP();
    /* 00547bfe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547bff: jbe 0x547c0c */ if ((fC||fZ)) goto L_00547c0c;
L_00547c01:; BB(0x00547c01);
    /* 00547c01: fld dword ptr [0x923eec] */ FPUSH(R_F32((u32)(0x923eecu)));
    /* 00547c07: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00547c09: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00547c0c:; BB(0x00547c0c);
    /* 00547c0c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547c0e: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 00547c14: shl ecx, 0xc */ { u32 c = (12u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00547c17: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x547c1cu); f_0082dcbc();
    /* 00547c1c: fmul dword ptr [0x923d28] */ ST(0) = ST(0) * R_F32((u32)(0x923d28u));
    /* 00547c22: fld dword ptr [0x923ef4] */ FPUSH(R_F32((u32)(0x923ef4u)));
    /* 00547c28: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00547c2b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00547c2e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00547c30: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00547c32: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 00547c38: add dword ptr [ebp + 0x38c], 1 */ { u32 ad = (u32)(r_ebp+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00547c3f: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 00547c45: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 00547c4b: fcom dword ptr [0x923d24] */ fx_compare(ST(0), R_F32((u32)(0x923d24u))); 
    /* 00547c51: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547c53: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547c55: fchs  */ ST(0) = -ST(0);
    /* 00547c57: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00547c59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547c5b: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00547c5d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547c5f: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 00547c65: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547c66: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00547c6c: jb 0x547c7b */ if (fC) goto L_00547c7b;
L_00547c6e:; BB(0x00547c6e);
    /* 00547c6e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00547c73: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00547c79: jmp 0x547c89 */ goto L_00547c89;
L_00547c7b:; BB(0x00547c7b);
    /* 00547c7b: fld dword ptr [0x923ee8] */ FPUSH(R_F32((u32)(0x923ee8u)));
    /* 00547c81: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00547c83: fstp dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0)); FPOP();
L_00547c89:; BB(0x00547c89);
    /* 00547c89: fld dword ptr [0xa73870] */ FPUSH(R_F32((u32)(0xa73870u)));
    /* 00547c8f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00547c91: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00547c93: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547c95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547c97: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547c99: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 00547c9f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547ca0: jbe 0x547ce2 */ if ((fC||fZ)) goto L_00547ce2;
L_00547ca2:; BB(0x00547ca2);
    /* 00547ca2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ca4: push dword ptr [0xa738a8] */ { u32 v = R32((u32)(0xa738a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00547caa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547cac: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x547cb1u); f_007714cc();
    /* 00547cb1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00547cb4: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547cb9: je 0x547ce5 */ if (fZ) goto L_00547ce5;
L_00547cbb:; BB(0x00547cbb);
    /* 00547cbb: mov dword ptr [ebp + 0x37c], 3 */ W32((u32)(r_ebp+0x37cu), 0x3u);
    /* 00547cc5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547cc7: call dword ptr [0x9bd178] */ { u32 t = R32((u32)(0x9bd178u)); r_esp -= 4; W32(r_esp, 0x547ccdu); call_ind(t); }
    /* 00547ccd: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00547cd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00547cd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00547cd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547cd5: push 0x277 */ { u32 v = 0x277u; r_esp -= 4; W32(r_esp, v); }
    /* 00547cda: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x547cdfu); f_00814298();
    /* 00547cdf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00547ce2:; BB(0x00547ce2);
    /* 00547ce2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547ce3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547ce4: ret  */ FN_RET(0x00547b70); r_esp += 4; return;
L_00547ce5:; BB(0x00547ce5);
    /* 00547ce5: mov dword ptr [ebp + 0x37c], 2 */ W32((u32)(r_ebp+0x37cu), 0x2u);
    /* 00547cef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547cf1: call dword ptr [0x9bd170] */ { u32 t = R32((u32)(0x9bd170u)); r_esp -= 4; W32(r_esp, 0x547cf7u); call_ind(t); }
    /* 00547cf7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547cf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547cf9: ret  */ FN_RET(0x00547b70); r_esp += 4; return;
}

void f_00547cfc(void) /* sub_547CFC */
{
    FN_ENTER(0x00547cfc);
    /* 00547cfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00547cfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547cfe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00547d00: movzx eax, byte ptr [0xa73874] */ r_eax = (u32)R8((u32)(0xa73874u));
    /* 00547d07: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00547d09: jne 0x547d1f */ if (!fZ) goto L_00547d1f;
L_00547d0b:; BB(0x00547d0b);
    /* 00547d0b: mov dword ptr [0xa73878], 0xbc360b61 */ W32((u32)(0xa73878u), 0xbc360b61u);
    /* 00547d15: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00547d1a: mov byte ptr [0xa73874], al */ W8((u32)(0xa73874u), (u8)r_eax);
L_00547d1f:; BB(0x00547d1f);
    /* 00547d1f: fld dword ptr [0x923ed0] */ FPUSH(R_F32((u32)(0x923ed0u)));
    /* 00547d25: fld dword ptr [0x923ee4] */ FPUSH(R_F32((u32)(0x923ee4u)));
    /* 00547d2b: fld dword ptr [0x923ecc] */ FPUSH(R_F32((u32)(0x923eccu)));
    /* 00547d31: fld dword ptr [0x923ed8] */ FPUSH(R_F32((u32)(0x923ed8u)));
    /* 00547d37: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 00547d3d: fcom dword ptr [0x923d38] */ fx_compare(ST(0), R_F32((u32)(0x923d38u))); 
    /* 00547d43: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547d45: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00547d47: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00547d49: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00547d4c: fld dword ptr [0x923ed0] */ FPUSH(R_F32((u32)(0x923ed0u)));
    /* 00547d52: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547d54: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00547d56: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547d58: fadd dword ptr [0x923ee0] */ ST(0) = ST(0) + R_F32((u32)(0x923ee0u));
    /* 00547d5e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547d60: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 00547d66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547d68: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00547d6e: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 00547d70: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00547d72: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547d74: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 00547d7a: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00547d7c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547d7e: fadd dword ptr [0x923edc] */ ST(0) = ST(0) + R_F32((u32)(0x923edcu));
    /* 00547d84: fstp dword ptr [ebp + 0x3ac] */ W_F32((u32)(r_ebp+0x3acu), ST(0)); FPOP();
    /* 00547d8a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547d8b: jbe 0x547d98 */ if ((fC||fZ)) goto L_00547d98;
L_00547d8d:; BB(0x00547d8d);
    /* 00547d8d: fld dword ptr [0x923ec8] */ FPUSH(R_F32((u32)(0x923ec8u)));
    /* 00547d93: fdivr st(1) */ ST(0) = ST(1) / ST(0);
    /* 00547d95: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00547d98:; BB(0x00547d98);
    /* 00547d98: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547d9a: mov ecx, dword ptr [ebp + 0x38c] */ r_ecx = R32((u32)(r_ebp+0x38cu));
    /* 00547da0: shl ecx, 0xa */ { u32 c = (10u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00547da3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x547da8u); f_0082dcbc();
    /* 00547da8: fmul dword ptr [0x923d34] */ ST(0) = ST(0) * R_F32((u32)(0x923d34u));
    /* 00547dae: fld dword ptr [0x923ed0] */ FPUSH(R_F32((u32)(0x923ed0u)));
    /* 00547db4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00547db7: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00547dba: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00547dbc: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00547dbe: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 00547dc4: add dword ptr [ebp + 0x38c], 1 */ { u32 ad = (u32)(r_ebp+0x38cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00547dcb: fstp dword ptr [ebp + 0x3a8] */ W_F32((u32)(r_ebp+0x3a8u), ST(0)); FPOP();
    /* 00547dd1: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 00547dd7: fcom dword ptr [0x923d30] */ fx_compare(ST(0), R_F32((u32)(0x923d30u))); 
    /* 00547ddd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547ddf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547de1: fchs  */ ST(0) = -ST(0);
    /* 00547de3: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00547de5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547de7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00547de9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547deb: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 00547df1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547df2: fstp dword ptr [ebp + 0x3b0] */ W_F32((u32)(r_ebp+0x3b0u), ST(0)); FPOP();
    /* 00547df8: jb 0x547e07 */ if (fC) goto L_00547e07;
L_00547dfa:; BB(0x00547dfa);
    /* 00547dfa: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00547dff: mov dword ptr [ebp + 0x3a0], eax */ W32((u32)(r_ebp+0x3a0u), r_eax);
    /* 00547e05: jmp 0x547e15 */ goto L_00547e15;
L_00547e07:; BB(0x00547e07);
    /* 00547e07: fld dword ptr [0x923ec4] */ FPUSH(R_F32((u32)(0x923ec4u)));
    /* 00547e0d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00547e0f: fstp dword ptr [ebp + 0x3a0] */ W_F32((u32)(r_ebp+0x3a0u), ST(0)); FPOP();
L_00547e15:; BB(0x00547e15);
    /* 00547e15: fld dword ptr [0xa73878] */ FPUSH(R_F32((u32)(0xa73878u)));
    /* 00547e1b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00547e1d: fcom dword ptr [0x923ec0] */ fx_compare(ST(0), R_F32((u32)(0x923ec0u))); 
    /* 00547e23: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547e25: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 00547e2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547e2c: jae 0x547e40 */ if (!fC) goto L_00547e40;
L_00547e2e:; BB(0x00547e2e);
    /* 00547e2e: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 00547e38: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00547e3a: call dword ptr [0x9bd160] */ { u32 t = R32((u32)(0x9bd160u)); r_esp -= 4; W32(r_esp, 0x547e40u); call_ind(t); }
L_00547e40:; BB(0x00547e40);
    /* 00547e40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547e41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00547e42: ret  */ FN_RET(0x00547cfc); r_esp += 4; return;
}

void f_00547e44(void) /* sub_547E44 */
{
    FN_ENTER(0x00547e44);
    /* 00547e44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00547e45: mov ebx, esp */ r_ebx = r_esp;
    /* 00547e47: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00547e4a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547e4b: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00547e4e: mov esi, ecx */ r_esi = r_ecx;
    /* 00547e50: mov ecx, dword ptr [0xa9c4ec] */ r_ecx = R32((u32)(0xa9c4ecu));
    /* 00547e56: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00547e5b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00547e5d: mov eax, ecx */ r_eax = r_ecx;
    /* 00547e5f: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00547e62: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00547e64: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00547e66: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00547e69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547e6b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00547e6d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00547e6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547e71: jne 0x547eed */ if (!fZ) goto L_00547eed;
L_00547e73:; BB(0x00547e73);
    /* 00547e73: call 0x7b51c4 */ r_esp -= 4; W32(r_esp, 0x547e78u); f_007b51c4();
    /* 00547e78: mov ecx, esi */ r_ecx = r_esi;
    /* 00547e7a: call 0x7b6894 */ r_esp -= 4; W32(r_esp, 0x547e7fu); f_007b6894();
    /* 00547e7f: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00547e83: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00547e87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00547e89: mov ebp, eax */ r_ebp = r_eax;
L_00547e8b:; BB(0x00547e8b);
    /* 00547e8b: mov edi, dword ptr [ebp + 0xaad6e0] */ r_edi = R32((u32)(r_ebp+0xaad6e0u));
    /* 00547e91: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00547e94: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547e96: je 0x5483a2 */ if (fZ) goto L_005483a2;
L_00547e9c:; BB(0x00547e9c);
    /* 00547e9c: movzx edx, word ptr [edi + 0x96] */ r_edx = (u32)R16((u32)(r_edi+0x96u));
    /* 00547ea3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547ea6: jne 0x547ee0 */ if (!fZ) goto L_00547ee0;
L_00547ea8:; BB(0x00547ea8);
    /* 00547ea8: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00547eac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00547ead: call 0x51f8d8 */ r_esp -= 4; W32(r_esp, 0x547eb2u); f_0051f8d8();
    /* 00547eb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00547eb3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00547eb5: je 0x547ee0 */ if (fZ) goto L_00547ee0;
L_00547eb7:; BB(0x00547eb7);
    /* 00547eb7: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ebc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547ebd: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00547ebf: mov ecx, edi */ r_ecx = r_edi;
    /* 00547ec1: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x547ec4u); call_ind(t); }
    /* 00547ec4: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ec9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547eca: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00547ecc: mov ecx, edi */ r_ecx = r_edi;
    /* 00547ece: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x547ed1u); call_ind(t); }
    /* 00547ed1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547ed3: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00547ed8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00547ed9: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00547edb: mov ecx, edi */ r_ecx = r_edi;
    /* 00547edd: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x547ee0u); call_ind(t); }
L_00547ee0:; BB(0x00547ee0);
    /* 00547ee0: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00547ee3: jl 0x547e8b */ if ((fS!=fO)) goto L_00547e8b;
L_00547ee5:; BB(0x00547ee5);
    /* 00547ee5: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00547ee9: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
L_00547eed:; BB(0x00547eed);
    /* 00547eed: fld dword ptr [0x923eb4] */ FPUSH(R_F32((u32)(0x923eb4u)));
    /* 00547ef3: fcom dword ptr [esi + 0x394] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x394u))); 
    /* 00547ef9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547efb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547efc: jb 0x547f31 */ if (fC) goto L_00547f31;
L_00547efe:; BB(0x00547efe);
    /* 00547efe: mov edx, dword ptr [0xa738cc] */ r_edx = R32((u32)(0xa738ccu));
    /* 00547f04: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00547f0a: fsub dword ptr [edx] */ ST(0) = ST(0) - R_F32((u32)(r_edx));
    /* 00547f0c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00547f0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547f10: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547f12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547f14: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547f15: jae 0x547f29 */ if (!fC) goto L_00547f29;
L_00547f17:; BB(0x00547f17);
    /* 00547f17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547f19: fld dword ptr [0x923eb4] */ FPUSH(R_F32((u32)(0x923eb4u)));
    /* 00547f1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00547f21: mov dword ptr [esi + 0x3b4], eax */ W32((u32)(r_esi+0x3b4u), r_eax);
    /* 00547f27: jmp 0x547f81 */ goto L_00547f81;
L_00547f29:; BB(0x00547f29);
    /* 00547f29: fst dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0));
    /* 00547f2f: jmp 0x547f81 */ goto L_00547f81;
L_00547f31:; BB(0x00547f31);
    /* 00547f31: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00547f33: mov ecx, dword ptr [esi + 0x39c] */ r_ecx = R32((u32)(r_esi+0x39cu));
    /* 00547f39: add ecx, 0xc00 */ {  u32 a = r_ecx; u32 b = 0xc00u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00547f3f: mov dword ptr [esi + 0x39c], ecx */ W32((u32)(r_esi+0x39cu), r_ecx);
    /* 00547f45: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x547f4au); f_0082dcbc();
    /* 00547f4a: mov edx, dword ptr [0xa738cc] */ r_edx = R32((u32)(0xa738ccu));
    /* 00547f50: fld dword ptr [0x923eb0] */ FPUSH(R_F32((u32)(0x923eb0u)));
    /* 00547f56: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00547f58: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00547f5a: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00547f5c: fadd dword ptr [esi + 0x3b4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3b4u));
    /* 00547f62: fst dword ptr [esi + 0x3b4] */ W_F32((u32)(r_esi+0x3b4u), ST(0));
    /* 00547f68: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00547f6b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00547f6d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00547f6f: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00547f72: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00547f73: jae 0x5483af */ if (!fC) goto L_005483af;
L_00547f79:; BB(0x00547f79);
    /* 00547f79: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00547f7b: mov dword ptr [esi + 0x3b4], edx */ W32((u32)(r_esi+0x3b4u), r_edx);
L_00547f81:; BB(0x00547f81);
    /* 00547f81: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00547f82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00547f85: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x547f8au); f_0082e900();
    /* 00547f8a: fld dword ptr [esi + 0x394] */ FPUSH(R_F32((u32)(r_esi+0x394u)));
    /* 00547f90: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 00547f93: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00547f96: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00547f99: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00547f9c: fld dword ptr [esi + 0x3c0] */ FPUSH(R_F32((u32)(r_esi+0x3c0u)));
    /* 00547fa2: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00547fa6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00547fa8: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00547faa: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 00547fad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00547faf: fstp dword ptr [esi + 0x394] */ W_F32((u32)(r_esi+0x394u), ST(0)); FPOP();
    /* 00547fb5: fld dword ptr [esi + 0x3b8] */ FPUSH(R_F32((u32)(r_esi+0x3b8u)));
    /* 00547fbb: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00547fbf: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00547fc3: mov dword ptr [esp + 0x4c], ebp */ W32((u32)(r_esp+0x4cu), r_ebp);
    /* 00547fc7: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00547fca: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00547fcd: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 00547fd0: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00547fd3: mov eax, 1 */ r_eax = 0x1u;
    /* 00547fd8: mov edi, eax */ r_edi = r_eax;
    /* 00547fda: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00547fdc:; BB(0x00547fdc);
    /* 00547fdc: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00547fe0: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00547fe4: fld dword ptr [esi + 0x3b4] */ FPUSH(R_F32((u32)(r_esi+0x3b4u)));
    /* 00547fea: mov edx, dword ptr [esi + 0x3bc] */ r_edx = R32((u32)(r_esi+0x3bcu));
    /* 00547ff0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00547ff2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00547ff6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547ff8: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00547ffc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00547ffe: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 00548002: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548004: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00548006: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548008: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0054800a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0054800c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054800e: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00548011: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 00548014: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548016: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0054801a: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 0054801d: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00548021: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00548025: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x54802au); f_0082df08();
    /* 0054802a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054802c: fld dword ptr [0x923eac] */ FPUSH(R_F32((u32)(0x923eacu)));
    /* 00548032: fmul dword ptr [0x9bd2fc] */ ST(0) = ST(0) * R_F32((u32)(0x9bd2fcu));
    /* 00548038: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0054803c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0054803e: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00548041: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00548045: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00548048: mov ebp, dword ptr [esi + 0x3c] */ r_ebp = R32((u32)(r_esi+0x3cu));
    /* 0054804b: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0054804e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00548050: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548052: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 00548056: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548058: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0054805b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0054805f: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00548063: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00548066: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0054806a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0054806e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x548073u); f_0082ddd8();
    /* 00548073: fld dword ptr [0x923ea8] */ FPUSH(R_F32((u32)(0x923ea8u)));
    /* 00548079: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0054807b: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0054807f: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00548082: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00548086: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0054808a: fadd dword ptr [0x923eb8] */ ST(0) = ST(0) + R_F32((u32)(0x923eb8u));
    /* 00548090: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00548094: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x548099u); f_0082dcbc();
    /* 00548099: fld dword ptr [0x923ea8] */ FPUSH(R_F32((u32)(0x923ea8u)));
    /* 0054809f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005480a1: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 005480a5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 005480a9: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005480ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005480af: mov ecx, esi */ r_ecx = r_esi;
    /* 005480b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005480b2: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x5480b7u); f_007b4c58();
    /* 005480b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005480b9: je 0x548218 */ if (fZ) goto L_00548218;
L_005480bf:; BB(0x005480bf);
    /* 005480bf: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005480c3: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005480c6: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005480cb: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005480ce: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 005480d0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005480d2: fmul dword ptr [0x923d3c] */ ST(0) = ST(0) * R_F32((u32)(0x923d3cu));
    /* 005480d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005480da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005480db: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 005480de: lea ebp, [esi + 0x44] */ r_ebp = (u32)(r_esi+0x44u);
    /* 005480e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005480e2: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5480e7u); f_0077fffc();
    /* 005480e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005480ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005480ec: je 0x5481dc */ if (fZ) goto L_005481dc;
L_005480f2:; BB(0x005480f2);
    /* 005480f2: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005480f5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005480f8: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005480fb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005480ff: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00548102: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00548106: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00548109: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 0054810c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00548110: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00548113: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00548116: fchs  */ ST(0) = -ST(0);
    /* 00548118: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0054811c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00548120: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00548121: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x548126u); f_007828e4();
    /* 00548126: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548128: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054812b: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0054812f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00548133: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00548137: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0054813b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0054813f: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00548141: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00548145: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00548147: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548149: fcomp dword ptr [0x923eb4] */ fx_compare(ST(0), R_F32((u32)(0x923eb4u))); FPOP();
    /* 0054814f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548151: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548152: jb 0x54815e */ if (fC) goto L_0054815e;
L_00548154:; BB(0x00548154);
    /* 00548154: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00548158: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 0054815c: jmp 0x54816e */ goto L_0054816e;
L_0054815e:; BB(0x0054815e);
    /* 0054815e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548160: fchs  */ ST(0) = -ST(0);
    /* 00548162: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 00548166: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548168: fchs  */ ST(0) = -ST(0);
    /* 0054816a: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
L_0054816e:; BB(0x0054816e);
    /* 0054816e: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00548170: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00548172: fld dword ptr [0x923ea4] */ FPUSH(R_F32((u32)(0x923ea4u)));
    /* 00548178: fmul dword ptr [0x9bd2fc] */ ST(0) = ST(0) * R_F32((u32)(0x9bd2fcu));
    /* 0054817e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00548180: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00548182: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548184: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00548187: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00548189: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 0054818d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0054818f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00548192: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548194: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00548198: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054819a: fmul qword ptr [0x923dd8] */ ST(0) = ST(0) * R_F64((u32)(0x923dd8u));
    /* 005481a0: fdiv qword ptr [0x923dd0] */ ST(0) = ST(0) / R_F64((u32)(0x923dd0u));
    /* 005481a6: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005481aa: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005481af: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005481b4: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005481b8: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005481bc: fistp dword ptr [esi + 0x39c] */ W32((u32)(r_esi+0x39cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005481c2: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005481c6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005481c9: push 0x88e0 */ { u32 v = 0x88e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005481ce: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005481cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005481d0: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x5481d5u); f_0077fffc();
    /* 005481d5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005481d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005481da: jne 0x548218 */ if (!fZ) goto L_00548218;
L_005481dc:; BB(0x005481dc);
    /* 005481dc: fld dword ptr [0x923ea0] */ FPUSH(R_F32((u32)(0x923ea0u)));
    /* 005481e2: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005481e6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005481ea: lea ebp, [esp] */ r_ebp = (u32)(r_esp);
    /* 005481ed: push 0x16ef */ { u32 v = 0x16efu; r_esp -= 4; W32(r_esp, v); }
    /* 005481f2: lea edx, [esi + 0x128] */ r_edx = (u32)(r_esi+0x128u);
    /* 005481f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005481f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005481fa: call 0x7806dc */ r_esp -= 4; W32(r_esp, 0x5481ffu); f_007806dc();
    /* 005481ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00548202: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548204: je 0x548218 */ if (fZ) goto L_00548218;
L_00548206:; BB(0x00548206);
    /* 00548206: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00548209: mov ebp, dword ptr [edx + 0x18] */ r_ebp = R32((u32)(r_edx+0x18u));
    /* 0054820c: test ebp, 0xe0 */ {  u32 a = r_ebp; u32 b = 0xe0u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548212: je 0x548320 */ if (fZ) goto L_00548320;
L_00548218:; BB(0x00548218);
    /* 00548218: mov ebp, edi */ r_ebp = r_edi;
    /* 0054821a: shl ebp, 0xc */ { u32 c = (12u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 0054821d: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548223: je 0x548227 */ if (fZ) goto L_00548227;
L_00548225:; BB(0x00548225);
    /* 00548225: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
L_00548227:; BB(0x00548227);
    /* 00548227: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548229: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x54822eu); f_0082dcbc();
    /* 0054822e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00548232: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00548234: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x548239u); f_0082ddd8();
    /* 00548239: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0054823d: fld dword ptr [esi + 0x3c0] */ FPUSH(R_F32((u32)(r_esi+0x3c0u)));
    /* 00548243: fld dword ptr [esi + 0x3b8] */ FPUSH(R_F32((u32)(r_esi+0x3b8u)));
    /* 00548249: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0054824b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054824d: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0054824f: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00548253: mov dword ptr [esi + 0x3bc], 0 */ W32((u32)(r_esi+0x3bcu), 0x0u);
    /* 0054825d: lea ecx, [esi + 0x3b8] */ r_ecx = (u32)(r_esi+0x3b8u);
    /* 00548263: fchs  */ ST(0) = -ST(0);
    /* 00548265: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00548267: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548269: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0054826b: fstp dword ptr [esi + 0x3b8] */ W_F32((u32)(r_esi+0x3b8u), ST(0)); FPOP();
    /* 00548271: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00548273: fstp dword ptr [esi + 0x3c0] */ W_F32((u32)(r_esi+0x3c0u), ST(0)); FPOP();
    /* 00548279: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x54827eu); f_0082df08();
    /* 0054827e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548280: fld dword ptr [esi + 0x3b8] */ FPUSH(R_F32((u32)(r_esi+0x3b8u)));
    /* 00548286: fld dword ptr [esi + 0x3c0] */ FPUSH(R_F32((u32)(r_esi+0x3c0u)));
    /* 0054828c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054828e: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 00548292: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00548294: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 00548298: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0054829a: fmul qword ptr [0x923dd8] */ ST(0) = ST(0) * R_F64((u32)(0x923dd8u));
    /* 005482a0: fdiv qword ptr [0x923dd0] */ ST(0) = ST(0) / R_F64((u32)(0x923dd0u));
    /* 005482a6: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 005482a9: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 005482ac: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 005482af: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005482b1: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 005482b5: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 005482ba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005482bf: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 005482c3: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 005482c7: fistp dword ptr [esi + 0x60] */ W32((u32)(r_esi+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 005482ca: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 005482ce: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 005482d1: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 005482d4: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 005482d7: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 005482da: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005482dd: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005482e0: jl 0x547fdc */ if ((fS!=fO)) goto L_00547fdc;
L_005482e6:; BB(0x005482e6);
    /* 005482e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005482e8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005482ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005482ec: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 005482f0: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005482f4: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005482f7: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
L_005482fa:; BB(0x005482fa);
    /* 005482fa: fld dword ptr [0x923eb4] */ FPUSH(R_F32((u32)(0x923eb4u)));
    /* 00548300: fcom dword ptr [esi + 0x394] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x394u))); 
    /* 00548306: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548308: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548309: jb 0x548316 */ if (fC) goto L_00548316;
L_0054830b:; BB(0x0054830b);
    /* 0054830b: fcom dword ptr [esi + 0x3b4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x3b4u))); 
    /* 00548311: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548313: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00548314: je 0x54832a */ if (fZ) goto L_0054832a;
L_00548316:; BB(0x00548316);
    /* 00548316: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00548318: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054831b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054831c: mov esp, ebx */ r_esp = r_ebx;
    /* 0054831e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054831f: ret  */ FN_RET(0x00547e44); r_esp += 4; return;
L_00548320:; BB(0x00548320);
    /* 00548320: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 00548324: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00548328: jmp 0x5482fa */ goto L_005482fa;
L_0054832a:; BB(0x0054832a);
    /* 0054832a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054832c: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00548330: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00548331: mov ecx, esi */ r_ecx = r_esi;
    /* 00548333: push dword ptr [0xa738ac] */ { u32 v = R32((u32)(0xa738acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00548339: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x54833eu); f_007714cc();
    /* 0054833e: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00548341: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00548346: je 0x548376 */ if (fZ) goto L_00548376;
L_00548348:; BB(0x00548348);
    /* 00548348: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 0054834c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x548351u); f_0083173c();
    /* 00548351: fcomp dword ptr [0xa738b0] */ fx_compare(ST(0), R_F32((u32)(0xa738b0u))); FPOP();
    /* 00548357: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00548359: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054835a: jbe 0x548376 */ if ((fC||fZ)) goto L_00548376;
L_0054835c:; BB(0x0054835c);
    /* 0054835c: mov dword ptr [esi + 0x37c], 4 */ W32((u32)(r_esi+0x37cu), 0x4u);
    /* 00548366: mov ecx, esi */ r_ecx = r_esi;
    /* 00548368: call dword ptr [0x9bd180] */ { u32 t = R32((u32)(0x9bd180u)); r_esp -= 4; W32(r_esp, 0x54836eu); call_ind(t); }
    /* 0054836e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00548371: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00548372: mov esp, ebx */ r_esp = r_ebx;
    /* 00548374: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00548375: ret  */ FN_RET(0x00547e44); r_esp += 4; return;
L_00548376:; BB(0x00548376);
    /* 00548376: mov dword ptr [esi + 0x37c], 3 */ W32((u32)(r_esi+0x37cu), 0x3u);
    /* 00548380: mov ecx, esi */ r_ecx = r_esi;
    /* 00548382: call dword ptr [0x9bd178] */ { u32 t = R32((u32)(0x9bd178u)); r_esp -= 4; W32(r_esp, 0x548388u); call_ind(t); }
    /* 00548388: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0054838b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054838d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054838e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054838f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00548390: push 0x277 */ { u32 v = 0x277u; r_esp -= 4; W32(r_esp, v); }
    /* 00548395: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54839au); f_00814298();
    /* 0054839a: add esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054839d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054839e: mov esp, ebx */ r_esp = r_ebx;
    /* 005483a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005483a1: ret  */ FN_RET(0x00547e44); r_esp += 4; return;
L_005483a2:; BB(0x005483a2);
    /* 005483a2: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 005483a6: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 005483aa: jmp 0x547eed */ goto L_00547eed;
L_005483af:; BB(0x005483af);
    /* 005483af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005483b1: jmp 0x547f81 */ goto L_00547f81;
}

