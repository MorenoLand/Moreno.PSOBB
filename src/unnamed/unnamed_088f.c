#include "protos.h"

void f_0088f198(void) /* sub_88F198 */
{
    FN_ENTER(0x0088f198);
    /* 0088f198: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f199: mov ebx, esp */ r_ebx = r_esp;
    /* 0088f19b: and esp, 0xffffffe0 */ {  u32 a = r_esp; u32 b = 0xffffffe0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0088f19e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f19f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f1a0: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0088f1a3: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0088f1a7: mov ebp, esp */ r_ebp = r_esp;
    /* 0088f1a9: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f1ac: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0088f1af: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0088f1b2: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0088f1b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f1b7: fild dword ptr [ebx + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x14u)));
    /* 0088f1ba: fdivr dword ptr [0x99b0f4] */ ST(0) = R_F32((u32)(0x99b0f4u)) / ST(0);
    /* 0088f1c0: jle 0x88f215 */ if ((fZ||fS!=fO)) goto L_0088f215;
L_0088f1c2:; BB(0x0088f1c2);
    /* 0088f1c2: mov edx, dword ptr [ebx + 0x18] */ r_edx = R32((u32)(r_ebx+0x18u));
    /* 0088f1c5: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0088f1c8: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 0088f1cb: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
L_0088f1ce:; BB(0x0088f1ce);
    /* 0088f1ce: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0088f1d0: fmul qword ptr [0x99b0b0] */ ST(0) = ST(0) * R_F64((u32)(0x99b0b0u));
    /* 0088f1d6: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0088f1d9: fld qword ptr [0x99b0a8] */ FPUSH(R_F64((u32)(0x99b0a8u)));
    /* 0088f1df: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f1e1: fstp qword ptr [ebp - 0x78] */ W_F64((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 0088f1e4: fld qword ptr [ebp - 0x78] */ FPUSH(R_F64((u32)(r_ebp+0xffffff88u)));
    /* 0088f1e7: fistp dword ptr [ebp - 0x58] */ W32((u32)(r_ebp+0xffffffa8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088f1ea: mov ecx, dword ptr [ebp - 0x58] */ r_ecx = R32((u32)(r_ebp+0xffffffa8u));
    /* 0088f1ed: fld dword ptr [ecx*4 + 0xa33d60] */ FPUSH(R_F32((u32)(r_ecx*4+0xa33d60u)));
    /* 0088f1f4: fild dword ptr [ebp - 0x58] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffa8u)));
    /* 0088f1f7: fld qword ptr [ebp - 0x28] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd8u)));
    /* 0088f1fa: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0088f1fc: fld dword ptr [ecx*4 + 0xa33d64] */ FPUSH(R_F32((u32)(r_ecx*4+0xa33d64u)));
    /* 0088f203: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0088f205: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f207: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f209: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 0088f20b: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f20e: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088f210: jb 0x88f1ce */ if (fC) goto L_0088f1ce;
L_0088f212:; BB(0x0088f212);
    /* 0088f212: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
L_0088f215:; BB(0x0088f215);
    /* 0088f215: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088f217: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 0088f21a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088f21c: jle 0x88f409 */ if ((fZ||fS!=fO)) goto L_0088f409;
L_0088f222:; BB(0x0088f222);
    /* 0088f222: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f224: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0088f227: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0088f229: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 0088f22c: mov edx, esi */ r_edx = r_esi;
    /* 0088f22e: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0088f230: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0088f233: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0088f236: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0088f239: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0088f23c: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
L_0088f23f:; BB(0x0088f23f);
    /* 0088f23f: mov esi, eax */ r_esi = r_eax;
    /* 0088f241: fld dword ptr [0x99b0f0] */ FPUSH(R_F32((u32)(0x99b0f0u)));
    /* 0088f247: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0088f24a: fld dword ptr [0x99b0f0] */ FPUSH(R_F32((u32)(0x99b0f0u)));
    /* 0088f250: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0088f253: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0088f256: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0088f259: fmul dword ptr [ebp - 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffc8u));
    /* 0088f25c: fmul qword ptr [0x99b0b0] */ ST(0) = ST(0) * R_F64((u32)(0x99b0b0u));
    /* 0088f262: fst qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0));
    /* 0088f265: fld qword ptr [0x99b0a8] */ FPUSH(R_F64((u32)(0x99b0a8u)));
    /* 0088f26b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f26d: fstp qword ptr [ebp - 0x70] */ W_F64((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 0088f270: fld qword ptr [ebp - 0x70] */ FPUSH(R_F64((u32)(r_ebp+0xffffff90u)));
    /* 0088f273: fistp dword ptr [ebp - 0x54] */ W32((u32)(r_ebp+0xffffffacu), (u32)fx_int32(ST(0))); FPOP();
    /* 0088f276: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 0088f279: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0088f27c: fld dword ptr [eax*4 + 0xa33d60] */ FPUSH(R_F32((u32)(r_eax*4+0xa33d60u)));
    /* 0088f283: fild dword ptr [ebp - 0x54] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffacu)));
    /* 0088f286: fld qword ptr [ebp - 0x28] */ FPUSH(R_F64((u32)(r_ebp+0xffffffd8u)));
    /* 0088f289: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0088f28b: fld dword ptr [eax*4 + 0xa33d64] */ FPUSH(R_F32((u32)(r_eax*4+0xa33d64u)));
    /* 0088f292: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0088f294: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f296: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f298: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 0088f29b: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088f29e: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
L_0088f2a1:; BB(0x0088f2a1);
    /* 0088f2a1: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0088f2a3: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0088f2a5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f2a7: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0088f2aa: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0088f2ac: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0088f2ae: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f2b1: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088f2b2: jne 0x88f2a1 */ if (!fZ) goto L_0088f2a1;
L_0088f2b4:; BB(0x0088f2b4);
    /* 0088f2b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088f2b6: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0088f2b9: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0088f2bc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f2be: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0088f2c1: fld dword ptr [0x99b0ec] */ FPUSH(R_F32((u32)(0x99b0ecu)));
    /* 0088f2c7: je 0x88f2eb */ if (fZ) goto L_0088f2eb;
L_0088f2c9:; BB(0x0088f2c9);
    /* 0088f2c9: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0088f2cb: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0088f2cd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088f2cf: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088f2d1: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0088f2d4: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0088f2d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0088f2d8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0088f2da: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0088f2dd: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0088f2df: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088f2e2: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0088f2e4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f2e6: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0088f2e9: jmp 0x88f307 */ goto L_0088f307;
L_0088f2eb:; BB(0x0088f2eb);
    /* 0088f2eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088f2ed: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0088f2ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0088f2f1: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0088f2f3: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0088f2f6: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0088f2f8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f2fa: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0088f2fd: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088f300: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0088f302: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f304: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_0088f307:; BB(0x0088f307);
    /* 0088f307: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f30a: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0088f30d: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0088f310: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0088f313: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 0088f316: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0088f31a: call 0x8c9bc8 */ r_esp -= 4; W32(r_esp, 0x88f31fu); f_008c9bc8();
    /* 0088f31f: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0088f322: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f325: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0088f328: fmul dword ptr [0x99b0e4] */ ST(0) = ST(0) * R_F32((u32)(0x99b0e4u));
    /* 0088f32e: fsub dword ptr [0x99b0e8] */ ST(0) = ST(0) - R_F32((u32)(0x99b0e8u));
    /* 0088f334: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0088f337: fld qword ptr [0x99b0a8] */ FPUSH(R_F64((u32)(0x99b0a8u)));
    /* 0088f33d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f33f: fstp qword ptr [ebp - 0x68] */ W_F64((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0088f342: fld qword ptr [ebp - 0x68] */ FPUSH(R_F64((u32)(r_ebp+0xffffff98u)));
    /* 0088f345: fistp dword ptr [ebp - 0x4c] */ W32((u32)(r_ebp+0xffffffb4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088f348: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088f34b: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088f34e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f350: fld dword ptr [eax*4 + 0xa33cc0] */ FPUSH(R_F32((u32)(r_eax*4+0xa33cc0u)));
    /* 0088f357: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f359: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 0088f35c: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0088f35f: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0088f362: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0088f364: fld dword ptr [eax*4 + 0xa33cc4] */ FPUSH(R_F32((u32)(r_eax*4+0xa33cc4u)));
    /* 0088f36b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0088f36d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0088f36f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0088f371: fmul dword ptr [ebx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x20u));
    /* 0088f374: fmul dword ptr [edx + ecx*4 + 0xa33c20] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_ecx*4+0xa33c20u));
    /* 0088f37b: fsub dword ptr [ebx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x24u));
    /* 0088f37e: fmul dword ptr [0x99b0dc] */ ST(0) = ST(0) * R_F32((u32)(0x99b0dcu));
    /* 0088f384: fadd dword ptr [0x99b0e0] */ ST(0) = ST(0) + R_F32((u32)(0x99b0e0u));
    /* 0088f38a: fstp qword ptr [ebp - 0x60] */ W_F64((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0088f38d: fld qword ptr [ebp - 0x60] */ FPUSH(R_F64((u32)(r_ebp+0xffffffa0u)));
    /* 0088f390: fistp dword ptr [ebp - 0x48] */ W32((u32)(r_ebp+0xffffffb8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0088f393: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0088f396: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f398: jl 0x88f401 */ if ((fS!=fO)) goto L_0088f401;
L_0088f39a:; BB(0x0088f39a);
    /* 0088f39a: cmp edx, 0x460 */ {  u32 a = r_edx; u32 b = 0x460u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f3a0: jl 0x88f3aa */ if ((fS!=fO)) goto L_0088f3aa;
L_0088f3a2:; BB(0x0088f3a2);
    /* 0088f3a2: fld dword ptr [0x99b0d8] */ FPUSH(R_F32((u32)(0x99b0d8u)));
    /* 0088f3a8: jmp 0x88f3c0 */ goto L_0088f3c0;
L_0088f3aa:; BB(0x0088f3aa);
    /* 0088f3aa: mov eax, edx */ r_eax = r_edx;
    /* 0088f3ac: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088f3af: and edx, 0x1f */ {  u32 a = r_edx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088f3b2: fld dword ptr [eax*4 + 0xa33b00] */ FPUSH(R_F32((u32)(r_eax*4+0xa33b00u)));
    /* 0088f3b9: fmul dword ptr [edx*4 + 0xa33a80] */ ST(0) = ST(0) * R_F32((u32)(r_edx*4+0xa33a80u));
L_0088f3c0:; BB(0x0088f3c0);
    /* 0088f3c0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088f3c3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0088f3c6: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
L_0088f3c9:; BB(0x0088f3c9);
    /* 0088f3c9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0088f3cb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088f3cc: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0088f3cf: fmul dword ptr [ecx + edx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_edx));
    /* 0088f3d2: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088f3d5: fstp dword ptr [ecx + edx] */ W_F32((u32)(r_ecx+r_edx), ST(0)); FPOP();
    /* 0088f3d8: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0088f3db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f3dd: mov eax, dword ptr [eax + edx] */ r_eax = R32((u32)(r_eax+r_edx));
    /* 0088f3e0: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f3e2: je 0x88f3c9 */ if (fZ) goto L_0088f3c9;
L_0088f3e4:; BB(0x0088f3e4);
    /* 0088f3e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088f3e6: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0088f3e9: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0088f3ec: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f3ee: jl 0x88f23f */ if ((fS!=fO)) goto L_0088f23f;
L_0088f3f4:; BB(0x0088f3f4);
    /* 0088f3f4: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 0088f3f7: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0088f3fa: mov esp, ebp */ r_esp = r_ebp;
    /* 0088f3fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0088f3fd: mov esp, ebx */ r_esp = r_ebx;
    /* 0088f3ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f400: ret  */ FN_RET(0x0088f198); r_esp += 4; return;
L_0088f401:; BB(0x0088f401);
    /* 0088f401: fld dword ptr [0x99b0ec] */ FPUSH(R_F32((u32)(0x99b0ecu)));
    /* 0088f407: jmp 0x88f3c0 */ goto L_0088f3c0;
L_0088f409:; BB(0x0088f409);
    /* 0088f409: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0088f40b: jmp 0x88f3f4 */ goto L_0088f3f4;
}

void f_0088f410(void) /* sub_88F410 */
{
    FN_ENTER(0x0088f410);
    /* 0088f410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f411: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0088f415: mov eax, ebx */ r_eax = r_ebx;
    /* 0088f417: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f418: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0088f41b: jmp 0x88f420 */ goto L_0088f420;
L_0088f420:; BB(0x0088f420);
    /* 0088f420: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0088f422: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f423: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088f425: jne 0x88f420 */ if (!fZ) goto L_0088f420;
L_0088f427:; BB(0x0088f427);
    /* 0088f427: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088f42b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088f42d: mov edi, eax */ r_edi = r_eax;
    /* 0088f42f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0088f430: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088f432: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088f434: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f436: jle 0x88f43e */ if ((fZ||fS!=fO)) goto L_0088f43e;
L_0088f438:; BB(0x0088f438);
    /* 0088f438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f439: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088f43c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f43d: ret  */ FN_RET(0x0088f410); r_esp += 4; return;
L_0088f43e:; BB(0x0088f43e);
    /* 0088f43e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088f440: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f442: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f443: jle 0x88f494 */ if ((fZ||fS!=fO)) goto L_0088f494;
L_0088f445:; BB(0x0088f445);
    /* 0088f445: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 0088f449: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_0088f450:; BB(0x0088f450);
    /* 0088f450: mov al, byte ptr [edx + ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx))) & 0xffu);
    /* 0088f453: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0088f455: jb 0x88f45f */ if (fC) goto L_0088f45f;
L_0088f457:; BB(0x0088f457);
    /* 0088f457: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088f459: ja 0x88f45f */ if ((!fC&&!fZ)) goto L_0088f45f;
L_0088f45b:; BB(0x0088f45b);
    /* 0088f45b: sub al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0088f45d: jmp 0x88f469 */ goto L_0088f469;
L_0088f45f:; BB(0x0088f45f);
    /* 0088f45f: cmp al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0088f461: jb 0x88f49a */ if (fC) goto L_0088f49a;
L_0088f463:; BB(0x0088f463);
    /* 0088f463: cmp al, 0x46 */ {  u32 a = (u8)r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0088f465: ja 0x88f49a */ if ((!fC&&!fZ)) goto L_0088f49a;
L_0088f467:; BB(0x0088f467);
    /* 0088f467: sub al, 0x37 */ {  u32 a = (u8)r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0088f469:; BB(0x0088f469);
    /* 0088f469: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0088f46b: mov al, byte ptr [edx + ebx + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+r_ebx+0x1u))) & 0xffu);
    /* 0088f46f: shl cl, 4 */ { u32 c = (4u) & 31; u32 a = (u8)r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0088f472: cmp al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0088f474: jb 0x88f47e */ if (fC) goto L_0088f47e;
L_0088f476:; BB(0x0088f476);
    /* 0088f476: cmp al, 0x39 */ {  u32 a = (u8)r_eax; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088f478: ja 0x88f47e */ if ((!fC&&!fZ)) goto L_0088f47e;
L_0088f47a:; BB(0x0088f47a);
    /* 0088f47a: sub al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0088f47c: jmp 0x88f488 */ goto L_0088f488;
L_0088f47e:; BB(0x0088f47e);
    /* 0088f47e: cmp al, 0x41 */ {  u32 a = (u8)r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0088f480: jb 0x88f49a */ if (fC) goto L_0088f49a;
L_0088f482:; BB(0x0088f482);
    /* 0088f482: cmp al, 0x46 */ {  u32 a = (u8)r_eax; u32 b = 0x46u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0088f484: ja 0x88f49a */ if ((!fC&&!fZ)) goto L_0088f49a;
L_0088f486:; BB(0x0088f486);
    /* 0088f486: sub al, 0x37 */ {  u32 a = (u8)r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0088f488:; BB(0x0088f488);
    /* 0088f488: or cl, al */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0088f48a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088f48d: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0088f48f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f490: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f492: jl 0x88f450 */ if ((fS!=fO)) goto L_0088f450;
L_0088f494:; BB(0x0088f494);
    /* 0088f494: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f495: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f496: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088f498: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f499: ret  */ FN_RET(0x0088f410); r_esp += 4; return;
L_0088f49a:; BB(0x0088f49a);
    /* 0088f49a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f49b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f49c: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0088f4a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f4a2: ret  */ FN_RET(0x0088f410); r_esp += 4; return;
}

void f_0088f4b0(void) /* sub_88F4B0 */
{
    FN_ENTER(0x0088f4b0);
    /* 0088f4b0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0088f4b4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f4b6: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0088f4ba: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0088f4bf: je 0x88f4de */ if (fZ) goto L_0088f4de;
L_0088f4c1:; BB(0x0088f4c1);
    /* 0088f4c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f4c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0088f4c3:; BB(0x0088f4c3);
    /* 0088f4c3: movzx esi, byte ptr [ecx] */ r_esi = (u32)R8((u32)(r_ecx));
    /* 0088f4c6: movzx edi, al */ r_edi = (u32)(u8)r_eax;
    /* 0088f4c9: xor esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088f4cb: movzx esi, word ptr [esi*2 + 0x99b110] */ r_esi = (u32)R16((u32)(r_esi*2+0x99b110u));
    /* 0088f4d3: sar eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0088f4d6: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088f4d8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f4d9: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0088f4da: jne 0x88f4c3 */ if (!fZ) goto L_0088f4c3;
L_0088f4dc:; BB(0x0088f4dc);
    /* 0088f4dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f4dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0088f4de:; BB(0x0088f4de);
    /* 0088f4de: xor eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088f4e3: ret  */ FN_RET(0x0088f4b0); r_esp += 4; return;
}

void f_0088f4f0(void) /* sub_88F4F0 */
{
    FN_ENTER(0x0088f4f0);
    /* 0088f4f0: sub esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f4f6: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0088f4fb: xor eax, esp */ {  u32 a = r_eax; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088f4fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f4fe: mov ebx, dword ptr [esp + 0x418] */ r_ebx = R32((u32)(r_esp+0x418u));
    /* 0088f505: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f506: mov esi, dword ptr [esp + 0x418] */ r_esi = R32((u32)(r_esp+0x418u));
    /* 0088f50d: mov dword ptr [esp + 0x410], eax */ W32((u32)(r_esp+0x410u), r_eax);
    /* 0088f514: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f519: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 0088f51d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f51e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f51f: call 0x88f410 */ r_esp -= 4; W32(r_esp, 0x88f524u); f_0088f410();
    /* 0088f524: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f527: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f529: jge 0x88f547 */ if ((fS==fO)) goto L_0088f547;
L_0088f52b:; BB(0x0088f52b);
    /* 0088f52b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f52c: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0088f531: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f532: mov ecx, dword ptr [esp + 0x408] */ r_ecx = R32((u32)(r_esp+0x408u));
    /* 0088f539: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f53b: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x88f540u); f_0085e419();
    /* 0088f540: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f546: ret  */ FN_RET(0x0088f4f0); r_esp += 4; return;
L_0088f547:; BB(0x0088f547);
    /* 0088f547: mov eax, esi */ r_eax = r_esi;
    /* 0088f549: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 0088f54c: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_0088f550:; BB(0x0088f550);
    /* 0088f550: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0088f552: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f553: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088f555: jne 0x88f550 */ if (!fZ) goto L_0088f550;
L_0088f557:; BB(0x0088f557);
    /* 0088f557: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088f559: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f55a: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 0088f55e: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088f560: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f561: mov edi, eax */ r_edi = r_eax;
    /* 0088f563: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x88f568u); f_00859d2d();
    /* 0088f568: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0088f56c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0088f570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f572: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0088f576: call 0x859c67 */ r_esp -= 4; W32(r_esp, 0x88f57bu); f_00859c67();
    /* 0088f57b: fcom qword ptr [0x998168] */ fx_compare(ST(0), R_F64((u32)(0x998168u))); 
    /* 0088f581: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088f586: test ah, 5 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x5u; u32 r = (a & b) & 0xffu;  fP = !__builtin_parity(r & 0xffu); }
    /* 0088f589: jp 0x88f5aa */ if (fP) goto L_0088f5aa;
L_0088f58b:; BB(0x0088f58b);
    /* 0088f58b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0088f58d:; BB(0x0088f58d);
    /* 0088f58d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f58e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f58f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0088f594: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f595: mov ecx, dword ptr [esp + 0x408] */ r_ecx = R32((u32)(r_esp+0x408u));
    /* 0088f59c: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f59e: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x88f5a3u); f_0085e419();
    /* 0088f5a3: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f5a9: ret  */ FN_RET(0x0088f4f0); r_esp += 4; return;
L_0088f5aa:; BB(0x0088f5aa);
    /* 0088f5aa: fcomp qword ptr [0x99b310] */ fx_compare(ST(0), R_F64((u32)(0x99b310u))); FPOP();
    /* 0088f5b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0088f5b2: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088f5b5: je 0x88f58d */ if (fZ) goto L_0088f58d;
L_0088f5b7:; BB(0x0088f5b7);
    /* 0088f5b7: lea esi, [edi - 4] */ r_esi = (u32)(r_edi+0xfffffffcu);
    /* 0088f5ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f5bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f5be: jle 0x88f5da */ if ((fZ||fS!=fO)) goto L_0088f5da;
L_0088f5c0:; BB(0x0088f5c0);
    /* 0088f5c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
L_0088f5c1:; BB(0x0088f5c1);
    /* 0088f5c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088f5c3: mov eax, ecx */ r_eax = r_ecx;
    /* 0088f5c5: mov ebp, 3 */ r_ebp = 0x3u;
    /* 0088f5ca: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x0088f5ca, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0088f5ca, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0088f5cc: mov al, byte ptr [esp + edx + 0x10] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esp+r_edx+0x10u))) & 0xffu);
    /* 0088f5d0: xor byte ptr [esp + ecx + 0x1c], al */ { u32 ad = (u32)(r_esp+r_ecx+0x1cu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 0088f5d4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f5d5: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f5d7: jl 0x88f5c1 */ if ((fS!=fO)) goto L_0088f5c1;
L_0088f5d9:; BB(0x0088f5d9);
    /* 0088f5d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_0088f5da:; BB(0x0088f5da);
    /* 0088f5da: mov cx, word ptr [esp + 0x18] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x18u))) & 0xffffu);
    /* 0088f5df: add edi, -6 */ {  u32 a = r_edi; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088f5e2: lea edx, [esp + 0x1a] */ r_edx = (u32)(r_esp+0x1au);
    /* 0088f5e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f5e7: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0088f5ef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f5f0: mov word ptr [esp + 0x14], cx */ W16((u32)(r_esp+0x14u), (u16)r_ecx);
    /* 0088f5f5: call 0x88f4b0 */ r_esp -= 4; W32(r_esp, 0x88f5fau); f_0088f4b0();
    /* 0088f5fa: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0088f5fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f601: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f603: je 0x88f622 */ if (fZ) goto L_0088f622;
L_0088f605:; BB(0x0088f605);
    /* 0088f605: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f606: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f607: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 0088f60c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f60d: mov ecx, dword ptr [esp + 0x408] */ r_ecx = R32((u32)(r_esp+0x408u));
    /* 0088f614: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f616: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x88f61bu); f_0085e419();
    /* 0088f61b: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f621: ret  */ FN_RET(0x0088f4f0); r_esp += 4; return;
L_0088f622:; BB(0x0088f622);
    /* 0088f622: movzx esi, byte ptr [esp + 0x1b] */ r_esi = (u32)R8((u32)(r_esp+0x1bu));
    /* 0088f627: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088f629: mov ecx, 0x30 */ r_ecx = 0x30u;
    /* 0088f62e: mov edi, ebx */ r_edi = r_ebx;
    /* 0088f630: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0088f632: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f633: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0088f637: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f639: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x88f63eu); f_00858900();
    /* 0088f63e: movzx edi, byte ptr [esp + esi + 0x28] */ r_edi = (u32)R8((u32)(r_esp+r_esi+0x28u));
    /* 0088f643: lea esi, [esp + esi + 0x28] */ r_esi = (u32)(r_esp+r_esi+0x28u);
    /* 0088f647: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f648: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f649: lea ecx, [ebx + 0x40] */ r_ecx = (u32)(r_ebx+0x40u);
    /* 0088f64c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f64d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f64e: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x88f653u); f_00858900();
    /* 0088f653: movzx edx, byte ptr [esi + edi] */ r_edx = (u32)R8((u32)(r_esi+r_edi));
    /* 0088f657: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f659: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f65a: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f65b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f65c: add ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088f662: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f663: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x88f668u); f_00858900();
    /* 0088f668: mov ecx, dword ptr [esp + 0x438] */ r_ecx = R32((u32)(r_esp+0x438u));
    /* 0088f66f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088f672: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f673: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f674: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f675: xor ecx, esp */ {  u32 a = r_ecx; u32 b = r_esp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f677: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088f679: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x88f67eu); f_0085e419();
    /* 0088f67e: add esp, 0x40c */ {  u32 a = r_esp; u32 b = 0x40cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f684: ret  */ FN_RET(0x0088f4f0); r_esp += 4; return;
}

void f_0088f68c(void) /* sub_88F68C */
{
    FN_ENTER(0x0088f68c);
    /* 0088f68c: mov ecx, dword ptr [0xa33f80] */ r_ecx = R32((u32)(0xa33f80u));
    /* 0088f692: mov eax, 0x99b340 */ r_eax = 0x99b340u;
    /* 0088f697: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f699: jbe 0x88f6aa */ if ((fC||fZ)) goto L_0088f6aa;
L_0088f69b:; BB(0x0088f69b);
    /* 0088f69b: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0088f69f: cmp edx, dword ptr [eax] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f6a1: je 0x88f6af */ if (fZ) goto L_0088f6af;
L_0088f6a3:; BB(0x0088f6a3);
    /* 0088f6a3: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f6a6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f6a8: jb 0x88f69b */ if (fC) goto L_0088f69b;
L_0088f6aa:; BB(0x0088f6aa);
    /* 0088f6aa: mov eax, 0x99b318 */ r_eax = 0x99b318u;
L_0088f6af:; BB(0x0088f6af);
    /* 0088f6af: ret  */ FN_RET(0x0088f68c); r_esp += 4; return;
}

void f_0088f6b0(void) /* sub_88F6B0 */
{
    FN_ENTER(0x0088f6b0);
    /* 0088f6b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6b1: mov ebp, esp */ r_ebp = r_esp;
    /* 0088f6b3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6b4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0088f6b7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6b8: lea esi, [eax + eax*4] */ r_esi = (u32)(r_eax+r_eax*4);
    /* 0088f6bb: add esi, dword ptr [edx + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f6be: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088f6c0: cmp dword ptr [esi*4 + 0x99b950], eax */ {  u32 a = R32((u32)(r_esi*4+0x99b950u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f6c7: je 0x88f71f */ if (fZ) goto L_0088f71f;
L_0088f6c9:; BB(0x0088f6c9);
    /* 0088f6c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6cb: mov edi, edx */ r_edi = r_edx;
    /* 0088f6cd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f6cf: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0088f6d2: lea esi, [ecx + 0xc] */ r_esi = (u32)(r_ecx+0xcu);
    /* 0088f6d5: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0088f6d7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0088f6d8:; BB(0x0088f6d8);
    /* 0088f6d8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0088f6da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0088f6dc: jbe 0x88f6e1 */ if ((fC||fZ)) goto L_0088f6e1;
L_0088f6de:; BB(0x0088f6de);
    /* 0088f6de: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0088f6e1:; BB(0x0088f6e1);
    /* 0088f6e1: mov edx, dword ptr [edi + esi] */ r_edx = R32((u32)(r_edi+r_esi));
    /* 0088f6e4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088f6e6: jae 0x88f6f9 */ if (!fC) goto L_0088f6f9;
L_0088f6e8:; BB(0x0088f6e8);
    /* 0088f6e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f6ea: jne 0x88f6f3 */ if (!fZ) goto L_0088f6f3;
L_0088f6ec:; BB(0x0088f6ec);
    /* 0088f6ec: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f6f1: jmp 0x88f70d */ goto L_0088f70d;
L_0088f6f3:; BB(0x0088f6f3);
    /* 0088f6f3: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088f6f5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f6f7: jmp 0x88f70d */ goto L_0088f70d;
L_0088f6f9:; BB(0x0088f6f9);
    /* 0088f6f9: jbe 0x88f70d */ if ((fC||fZ)) goto L_0088f70d;
L_0088f6fb:; BB(0x0088f6fb);
    /* 0088f6fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f6fd: jne 0x88f706 */ if (!fZ) goto L_0088f706;
L_0088f6ff:; BB(0x0088f6ff);
    /* 0088f6ff: add eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088f704: jmp 0x88f70d */ goto L_0088f70d;
L_0088f706:; BB(0x0088f706);
    /* 0088f706: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088f708: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0088f70b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0088f70d:; BB(0x0088f70d);
    /* 0088f70d: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f710: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0088f711: jne 0x88f6d8 */ if (!fZ) goto L_0088f6d8;
L_0088f713:; BB(0x0088f713);
    /* 0088f713: mov ecx, eax */ r_ecx = r_eax;
    /* 0088f715: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0088f718: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f71b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f71c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f71d: jne 0x88f722 */ if (!fZ) goto L_0088f722;
L_0088f71f:; BB(0x0088f71f);
    /* 0088f71f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0088f722:; BB(0x0088f722);
    /* 0088f722: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f723: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088f724: ret  */ FN_RET(0x0088f6b0); r_esp += 4; return;
}

void f_0088f725(void) /* sub_88F725 */
{
    FN_ENTER(0x0088f725);
    /* 0088f725: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f726: mov ebp, esp */ r_ebp = r_esp;
    /* 0088f728: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f72e: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088f732: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f733: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f734: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f735: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f737: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88f73cu); f_0089414b();
    /* 0088f73c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0088f73f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f741: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088f742: je 0x88f765 */ if (fZ) goto L_0088f765;
L_0088f744:; BB(0x0088f744);
    /* 0088f744: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088f746: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0088f749: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f74a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f74b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x88f74eu); call_ind(t); }
    /* 0088f74e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088f750: lea ecx, [ebp - 0xe8] */ r_ecx = (u32)(r_ebp+0xffffff18u);
    /* 0088f756: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f757: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f758: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x88f75bu); call_ind(t); }
    /* 0088f75b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088f75d: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 0088f760: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f761: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f762: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x88f765u); call_ind(t); }
L_0088f765:; BB(0x0088f765);
    /* 0088f765: mov eax, 0x99b340 */ r_eax = 0x99b340u;
    /* 0088f76a: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0088f76d: cmp dword ptr [0xa33f80], eax */ {  u32 a = R32((u32)(0xa33f80u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088f773: mov edi, 0x99b318 */ r_edi = 0x99b318u;
    /* 0088f778: mov esi, eax */ r_esi = r_eax;
    /* 0088f77a: jbe 0x88f7e7 */ if ((fC||fZ)) goto L_0088f7e7;
L_0088f77c:; BB(0x0088f77c);
    /* 0088f77c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0088f77e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f780: je 0x88f7d8 */ if (fZ) goto L_0088f7d8;
L_0088f782:; BB(0x0088f782);
    /* 0088f782: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f786: je 0x88f7ab */ if (fZ) goto L_0088f7ab;
L_0088f788:; BB(0x0088f788);
    /* 0088f788: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088f78b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0088f78d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f78e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f791: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f794: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f797: push dword ptr [ebp - 0xe8] */ { u32 v = R32((u32)(r_ebp+0xffffff18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f79d: push dword ptr [ebp - 0xe4] */ { u32 v = R32((u32)(r_ebp+0xffffff1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f7a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f7a4: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x88f7a7u); call_ind(t); }
    /* 0088f7a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f7a9: jl 0x88f7d8 */ if ((fS!=fO)) goto L_0088f7d8;
L_0088f7ab:; BB(0x0088f7ab);
    /* 0088f7ab: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0088f7ae: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0088f7b0: cmp eax, dword ptr [esi] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f7b2: je 0x88f7e5 */ if (fZ) goto L_0088f7e5;
L_0088f7b4:; BB(0x0088f7b4);
    /* 0088f7b4: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f7b8: je 0x88f7d8 */ if (fZ) goto L_0088f7d8;
L_0088f7ba:; BB(0x0088f7ba);
    /* 0088f7ba: mov edx, esi */ r_edx = r_esi;
    /* 0088f7bc: call 0x88f6b0 */ r_esp -= 4; W32(r_esp, 0x88f7c1u); f_0088f6b0();
    /* 0088f7c1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f7c4: je 0x88f7d8 */ if (fZ) goto L_0088f7d8;
L_0088f7c6:; BB(0x0088f7c6);
    /* 0088f7c6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088f7c8: ja 0x88f7d8 */ if ((!fC&&!fZ)) goto L_0088f7d8;
L_0088f7ca:; BB(0x0088f7ca);
    /* 0088f7ca: jne 0x88f7d4 */ if (!fZ) goto L_0088f7d4;
L_0088f7cc:; BB(0x0088f7cc);
    /* 0088f7cc: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0088f7cf: cmp ecx, dword ptr [edi + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088f7d2: jae 0x88f7d8 */ if (!fC) goto L_0088f7d8;
L_0088f7d4:; BB(0x0088f7d4);
    /* 0088f7d4: mov ebx, eax */ r_ebx = r_eax;
    /* 0088f7d6: mov edi, esi */ r_edi = r_esi;
L_0088f7d8:; BB(0x0088f7d8);
    /* 0088f7d8: add esi, 0x24 */ {  u32 a = r_esi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0088f7db: cmp esi, dword ptr [0xa33f80] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa33f80u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088f7e1: jb 0x88f77c */ if (fC) goto L_0088f77c;
L_0088f7e3:; BB(0x0088f7e3);
    /* 0088f7e3: jmp 0x88f7e7 */ goto L_0088f7e7;
L_0088f7e5:; BB(0x0088f7e5);
    /* 0088f7e5: mov edi, esi */ r_edi = r_esi;
L_0088f7e7:; BB(0x0088f7e7);
    /* 0088f7e7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088f7ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f7ec: je 0x88f7f8 */ if (fZ) goto L_0088f7f8;
L_0088f7ee:; BB(0x0088f7ee);
    /* 0088f7ee: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088f7f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f7f1: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x88f7f4u); call_ind(t); }
    /* 0088f7f4: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0088f7f8:; BB(0x0088f7f8);
    /* 0088f7f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f7fa: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88f7ffu); f_0089414b();
    /* 0088f7ff: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088f801: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088f802: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f803: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f804: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f805: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088f806: ret  */ FN_RET(0x0088f725); r_esp += 4; return;
}

void f_0088f807(void) /* sub_88F807 */
{
    FN_ENTER(0x0088f807);
    /* 0088f807: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088f80b: sub eax, 0x36314c20 */ {  u32 a = r_eax; u32 b = 0x36314c20u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f810: je 0x88f834 */ if (fZ) goto L_0088f834;
L_0088f812:; BB(0x0088f812);
    /* 0088f812: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f815: je 0x88f830 */ if (fZ) goto L_0088f830;
L_0088f817:; BB(0x0088f817);
    /* 0088f817: sub eax, 0x5df */ {  u32 a = r_eax; u32 b = 0x5dfu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f81c: je 0x88f82c */ if (fZ) goto L_0088f82c;
L_0088f81e:; BB(0x0088f81e);
    /* 0088f81e: sub eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088f821: je 0x88f828 */ if (fZ) goto L_0088f828;
L_0088f823:; BB(0x0088f823);
    /* 0088f823: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0088f827: ret  */ FN_RET(0x0088f807); r_esp += 4; return;
L_0088f828:; BB(0x0088f828);
    /* 0088f828: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f82a: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0088f82b: ret  */ FN_RET(0x0088f807); r_esp += 4; return;
L_0088f82c:; BB(0x0088f82c);
    /* 0088f82c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f82e: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0088f82f: ret  */ FN_RET(0x0088f807); r_esp += 4; return;
L_0088f830:; BB(0x0088f830);
    /* 0088f830: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f832: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0088f833: ret  */ FN_RET(0x0088f807); r_esp += 4; return;
L_0088f834:; BB(0x0088f834);
    /* 0088f834: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f836: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0088f837: ret  */ FN_RET(0x0088f807); r_esp += 4; return;
}

void f_0088f838(void) /* sub_88F838 */
{
    FN_ENTER(0x0088f838);
    /* 0088f838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f839: lea ebp, [esp - 0x50] */ r_ebp = (u32)(r_esp+0xffffffb0u);
    /* 0088f83d: sub esp, 0xb4 */ {  u32 a = r_esp; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f843: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f844: lea ecx, [ebp + 0x44] */ r_ecx = (u32)(r_ebp+0x44u);
    /* 0088f847: call 0x895e89 */ r_esp -= 4; W32(r_esp, 0x88f84cu); f_00895e89();
    /* 0088f84c: lea ecx, [ebp + 0x34] */ r_ecx = (u32)(r_ebp+0x34u);
    /* 0088f84f: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x88f854u); f_0089975e();
    /* 0088f854: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088f856: cmp dword ptr [ebp + 0x58], ebx */ {  u32 a = R32((u32)(r_ebp+0x58u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f859: jne 0x88f865 */ if (!fZ) goto L_0088f865;
L_0088f85b:; BB(0x0088f85b);
    /* 0088f85b: mov ebx, 0x8876086c */ r_ebx = 0x8876086cu;
    /* 0088f860: jmp 0x88f8fd */ goto L_0088f8fd;
L_0088f865:; BB(0x0088f865);
    /* 0088f865: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f866: mov esi, dword ptr [ebp + 0x64] */ r_esi = R32((u32)(r_ebp+0x64u));
    /* 0088f869: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f86b: jne 0x88f877 */ if (!fZ) goto L_0088f877;
L_0088f86d:; BB(0x0088f86d);
    /* 0088f86d: mov ebx, 0x8876086c */ r_ebx = 0x8876086cu;
    /* 0088f872: jmp 0x88f8fc */ goto L_0088f8fc;
L_0088f877:; BB(0x0088f877);
    /* 0088f877: cmp dword ptr [ebp + 0x74], ebx */ {  u32 a = R32((u32)(r_ebp+0x74u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f87a: je 0x88f86d */ if (fZ) goto L_0088f86d;
L_0088f87c:; BB(0x0088f87c);
    /* 0088f87c: cmp dword ptr [ebp + 0x78], -1 */ {  u32 a = R32((u32)(r_ebp+0x78u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f880: jne 0x88f889 */ if (!fZ) goto L_0088f889;
L_0088f882:; BB(0x0088f882);
    /* 0088f882: mov dword ptr [ebp + 0x78], 0x80004 */ W32((u32)(r_ebp+0x78u), 0x80004u);
L_0088f889:; BB(0x0088f889);
    /* 0088f889: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f88a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f88b: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f88e: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0088f891: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f894: lea ecx, [ebp + 0x34] */ r_ecx = (u32)(r_ebp+0x34u);
    /* 0088f897: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f89a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f89b: call 0x8997f8 */ r_esp -= 4; W32(r_esp, 0x88f8a0u); f_008997f8();
    /* 0088f8a0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f8a2: jl 0x88f8fa */ if ((fS!=fO)) goto L_0088f8fa;
L_0088f8a4:; BB(0x0088f8a4);
    /* 0088f8a4: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 0088f8a7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f8a8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0088f8ab: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088f8ae: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088f8b1: mov esi, dword ptr [ebp + 0x74] */ r_esi = R32((u32)(r_ebp+0x74u));
    /* 0088f8b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0088f8b7: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 0088f8ba: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 0088f8bd: lea edi, [ebp - 8] */ r_edi = (u32)(r_ebp+0xfffffff8u);
    /* 0088f8c0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088f8c1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088f8c2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088f8c3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088f8c4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f8c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088f8c7: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f8ca: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0088f8cd: mov dword ptr [ebp + 0xc], 1 */ W32((u32)(r_ebp+0xcu), 0x1u);
    /* 0088f8d4: lea esi, [ebp - 8] */ r_esi = (u32)(r_ebp+0xfffffff8u);
    /* 0088f8d7: lea edi, [ebp + 0x10] */ r_edi = (u32)(r_ebp+0x10u);
    /* 0088f8da: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0088f8dc: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 0088f8df: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 0088f8e2: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0088f8e5: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 0088f8e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f8e9: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 0088f8ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f8ed: lea ecx, [ebp + 0x44] */ r_ecx = (u32)(r_ebp+0x44u);
    /* 0088f8f0: call 0x899644 */ r_esp -= 4; W32(r_esp, 0x88f8f5u); f_00899644();
    /* 0088f8f5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088f8f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f8f8: jge 0x88f8fc */ if ((fS==fO)) goto L_0088f8fc;
L_0088f8fa:; BB(0x0088f8fa);
    /* 0088f8fa: mov ebx, eax */ r_ebx = r_eax;
L_0088f8fc:; BB(0x0088f8fc);
    /* 0088f8fc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0088f8fd:; BB(0x0088f8fd);
    /* 0088f8fd: lea ecx, [ebp + 0x34] */ r_ecx = (u32)(r_ebp+0x34u);
    /* 0088f900: call 0x8997f3 */ r_esp -= 4; W32(r_esp, 0x88f905u); f_008997f3();
    /* 0088f905: lea ecx, [ebp + 0x44] */ r_ecx = (u32)(r_ebp+0x44u);
    /* 0088f908: call 0x895e93 */ r_esp -= 4; W32(r_esp, 0x88f90du); f_00895e93();
    /* 0088f90d: mov eax, ebx */ r_eax = r_ebx;
    /* 0088f90f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088f910: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f913: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088f914: ret 0x28 */ FN_RET(0x0088f838); r_esp += 44; return;
}

void f_0088f917(void) /* sub_88F917 */
{
    FN_ENTER(0x0088f917);
    /* 0088f917: mov eax, ecx */ r_eax = r_ecx;
    /* 0088f919: ret  */ FN_RET(0x0088f917); r_esp += 4; return;
}

void f_0088f91a(void) /* sub_88F91A */
{
    FN_ENTER(0x0088f91a);
    /* 0088f91a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f91b: lea ebp, [esp - 0x4c] */ r_ebp = (u32)(r_esp+0xffffffb4u);
    /* 0088f91f: sub esp, 0xa8 */ {  u32 a = r_esp; u32 b = 0xa8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f925: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f926: lea ecx, [ebp + 0x3c] */ r_ecx = (u32)(r_ebp+0x3cu);
    /* 0088f929: call 0x895e89 */ r_esp -= 4; W32(r_esp, 0x88f92eu); f_00895e89();
    /* 0088f92e: lea ecx, [ebp + 0x48] */ r_ecx = (u32)(r_ebp+0x48u);
    /* 0088f931: call 0x8997d7 */ r_esp -= 4; W32(r_esp, 0x88f936u); f_008997d7();
    /* 0088f936: cmp dword ptr [ebp + 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0x54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f93a: jne 0x88f946 */ if (!fZ) goto L_0088f946;
L_0088f93c:; BB(0x0088f93c);
    /* 0088f93c: mov esi, 0x8876086c */ r_esi = 0x8876086cu;
    /* 0088f941: jmp 0x88f9d3 */ goto L_0088f9d3;
L_0088f946:; BB(0x0088f946);
    /* 0088f946: mov esi, dword ptr [ebp + 0x60] */ r_esi = R32((u32)(r_ebp+0x60u));
    /* 0088f949: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f94b: je 0x88f93c */ if (fZ) goto L_0088f93c;
L_0088f94d:; BB(0x0088f94d);
    /* 0088f94d: cmp dword ptr [ebp + 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0x74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f951: je 0x88f93c */ if (fZ) goto L_0088f93c;
L_0088f953:; BB(0x0088f953);
    /* 0088f953: cmp dword ptr [ebp + 0x78], -1 */ {  u32 a = R32((u32)(r_ebp+0x78u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088f957: jne 0x88f960 */ if (!fZ) goto L_0088f960;
L_0088f959:; BB(0x0088f959);
    /* 0088f959: mov dword ptr [ebp + 0x78], 0x80004 */ W32((u32)(r_ebp+0x78u), 0x80004u);
L_0088f960:; BB(0x0088f960);
    /* 0088f960: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f962: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f964: push dword ptr [ebp + 0x5c] */ { u32 v = R32((u32)(r_ebp+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f967: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0088f96a: push dword ptr [ebp + 0x58] */ { u32 v = R32((u32)(r_ebp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f96d: lea ecx, [ebp + 0x48] */ r_ecx = (u32)(r_ebp+0x48u);
    /* 0088f970: push dword ptr [ebp + 0x54] */ { u32 v = R32((u32)(r_ebp+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f973: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f974: call 0x899c10 */ r_esp -= 4; W32(r_esp, 0x88f979u); f_00899c10();
    /* 0088f979: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f97b: jge 0x88f981 */ if ((fS==fO)) goto L_0088f981;
L_0088f97d:; BB(0x0088f97d);
    /* 0088f97d: mov esi, eax */ r_esi = r_eax;
    /* 0088f97f: jmp 0x88f9d3 */ goto L_0088f9d3;
L_0088f981:; BB(0x0088f981);
    /* 0088f981: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0088f984: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088f985: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0088f988: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 0088f98b: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0088f98e: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088f991: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f993: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088f994: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0088f997: mov esi, dword ptr [ebp + 0x74] */ r_esi = R32((u32)(r_ebp+0x74u));
    /* 0088f99a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0088f99d: mov eax, dword ptr [ebp + 0x7c] */ r_eax = R32((u32)(r_ebp+0x7cu));
    /* 0088f9a0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0088f9a2: lea edi, [ebp] */ r_edi = (u32)(r_ebp);
    /* 0088f9a5: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0088f9a7: mov esi, dword ptr [ebp + 0x74] */ r_esi = R32((u32)(r_ebp+0x74u));
    /* 0088f9aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088f9ab: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088f9ae: lea edi, [ebp + 0x18] */ r_edi = (u32)(r_ebp+0x18u);
    /* 0088f9b1: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0088f9b3: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0088f9b6: mov eax, dword ptr [ebp + 0x70] */ r_eax = R32((u32)(r_ebp+0x70u));
    /* 0088f9b9: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 0088f9bc: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0088f9bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f9c0: lea eax, [ebp - 0x5c] */ r_eax = (u32)(r_ebp+0xffffffa4u);
    /* 0088f9c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088f9c4: lea ecx, [ebp + 0x3c] */ r_ecx = (u32)(r_ebp+0x3cu);
    /* 0088f9c7: call 0x899644 */ r_esp -= 4; W32(r_esp, 0x88f9ccu); f_00899644();
    /* 0088f9cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088f9ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088f9cf: jl 0x88f97d */ if ((fS!=fO)) goto L_0088f97d;
L_0088f9d1:; BB(0x0088f9d1);
    /* 0088f9d1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0088f9d3:; BB(0x0088f9d3);
    /* 0088f9d3: lea ecx, [ebp + 0x48] */ r_ecx = (u32)(r_ebp+0x48u);
    /* 0088f9d6: call 0x899c0b */ r_esp -= 4; W32(r_esp, 0x88f9dbu); f_00899c0b();
    /* 0088f9db: lea ecx, [ebp + 0x3c] */ r_ecx = (u32)(r_ebp+0x3cu);
    /* 0088f9de: call 0x895e93 */ r_esp -= 4; W32(r_esp, 0x88f9e3u); f_00895e93();
    /* 0088f9e3: mov eax, esi */ r_eax = r_esi;
    /* 0088f9e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088f9e6: add ebp, 0x4c */ {  u32 a = r_ebp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088f9e9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088f9ea: ret 0x2c */ FN_RET(0x0088f91a); r_esp += 48; return;
}

void f_0088f9ed(void) /* sub_88F9ED */
{
    FN_ENTER(0x0088f9ed);
    /* 0088f9ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088f9ee: mov ebp, esp */ r_ebp = r_esp;
    /* 0088f9f0: sub esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088f9f6: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0088f9f9: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 0088f9fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088f9fd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0088fa00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fa01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fa02: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0088fa05: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088fa07: mov esi, edx */ r_esi = r_edx;
    /* 0088fa09: je 0x88fa31 */ if (fZ) goto L_0088fa31;
L_0088fa0b:; BB(0x0088fa0b);
    /* 0088fa0b: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa0e: jne 0x88fa12 */ if (!fZ) goto L_0088fa12;
L_0088fa10:; BB(0x0088fa10);
    /* 0088fa10: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0088fa12:; BB(0x0088fa12);
    /* 0088fa12: mov edx, esi */ r_edx = r_esi;
    /* 0088fa14: and edx, 0x20b */ {  u32 a = r_edx; u32 b = 0x20bu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088fa1a: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088fa1c: jne 0x88fa31 */ if (!fZ) goto L_0088fa31;
L_0088fa1e:; BB(0x0088fa1e);
    /* 0088fa1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa20: je 0x88fa3b */ if (fZ) goto L_0088fa3b;
L_0088fa22:; BB(0x0088fa22);
    /* 0088fa22: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa25: je 0x88fa3b */ if (fZ) goto L_0088fa3b;
L_0088fa27:; BB(0x0088fa27);
    /* 0088fa27: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa2a: je 0x88fa3b */ if (fZ) goto L_0088fa3b;
L_0088fa2c:; BB(0x0088fa2c);
    /* 0088fa2c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088fa2f: je 0x88fa3b */ if (fZ) goto L_0088fa3b;
L_0088fa31:; BB(0x0088fa31);
    /* 0088fa31: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 0088fa36: jmp 0x88fd12 */ goto L_0088fd12;
L_0088fa3b:; BB(0x0088fa3b);
    /* 0088fa3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa3d: je 0x88fa46 */ if (fZ) goto L_0088fa46;
L_0088fa3f:; BB(0x0088fa3f);
    /* 0088fa3f: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0088fa41: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0088fa44: jmp 0x88fa4a */ goto L_0088fa4a;
L_0088fa46:; BB(0x0088fa46);
    /* 0088fa46: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0088fa4a:; BB(0x0088fa4a);
    /* 0088fa4a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa4d: je 0x88fa76 */ if (fZ) goto L_0088fa76;
L_0088fa4f:; BB(0x0088fa4f);
    /* 0088fa4f: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fa52: call 0x88f68c */ r_esp -= 4; W32(r_esp, 0x88fa57u); f_0088f68c();
    /* 0088fa57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fa58: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fa5b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fa5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fa5d: call 0x88f725 */ r_esp -= 4; W32(r_esp, 0x88fa62u); f_0088f725();
    /* 0088fa62: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0088fa65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088fa67: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0088fa6a: jne 0x88fa83 */ if (!fZ) goto L_0088fa83;
L_0088fa6c:; BB(0x0088fa6c);
    /* 0088fa6c: mov eax, 0x8876086a */ r_eax = 0x8876086au;
    /* 0088fa71: jmp 0x88fd12 */ goto L_0088fd12;
L_0088fa76:; BB(0x0088fa76);
    /* 0088fa76: cmp dword ptr [ebp - 8], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa7a: jne 0x88fa83 */ if (!fZ) goto L_0088fa83;
L_0088fa7c:; BB(0x0088fa7c);
    /* 0088fa7c: mov dword ptr [ebp - 8], 0x15 */ W32((u32)(r_ebp+0xfffffff8u), 0x15u);
L_0088fa83:; BB(0x0088fa83);
    /* 0088fa83: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa85: je 0x88fa8e */ if (fZ) goto L_0088fa8e;
L_0088fa87:; BB(0x0088fa87);
    /* 0088fa87: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0088fa89: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0088fa8c: jmp 0x88fa92 */ goto L_0088fa92;
L_0088fa8e:; BB(0x0088fa8e);
    /* 0088fa8e: or dword ptr [ebp + 8], 0xffffffff */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0088fa92:; BB(0x0088fa92);
    /* 0088fa92: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fa96: je 0x88fa9f */ if (fZ) goto L_0088fa9f;
L_0088fa98:; BB(0x0088fa98);
    /* 0088fa98: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0088fa9b: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 0088fa9d: jmp 0x88faa2 */ goto L_0088faa2;
L_0088fa9f:; BB(0x0088fa9f);
    /* 0088fa9f: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0088faa2:; BB(0x0088faa2);
    /* 0088faa2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0088faa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088faa7: je 0x88fab0 */ if (fZ) goto L_0088fab0;
L_0088faa9:; BB(0x0088faa9);
    /* 0088faa9: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0088faab: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0088faae: jmp 0x88fab4 */ goto L_0088fab4;
L_0088fab0:; BB(0x0088fab0);
    /* 0088fab0: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0088fab4:; BB(0x0088fab4);
    /* 0088fab4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fab7: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088faba: mov eax, 0x100 */ r_eax = 0x100u;
    /* 0088fabf: jne 0x88fad1 */ if (!fZ) goto L_0088fad1;
L_0088fac1:; BB(0x0088fac1);
    /* 0088fac1: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fac3: jne 0x88facc */ if (!fZ) goto L_0088facc;
L_0088fac5:; BB(0x0088fac5);
    /* 0088fac5: mov ebx, eax */ r_ebx = r_eax;
    /* 0088fac7: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0088faca: jmp 0x88faea */ goto L_0088faea;
L_0088facc:; BB(0x0088facc);
    /* 0088facc: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0088facf: jmp 0x88fad8 */ goto L_0088fad8;
L_0088fad1:; BB(0x0088fad1);
    /* 0088fad1: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fad3: jne 0x88fad8 */ if (!fZ) goto L_0088fad8;
L_0088fad5:; BB(0x0088fad5);
    /* 0088fad5: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0088fad8:; BB(0x0088fad8);
    /* 0088fad8: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fadc: jne 0x88fae5 */ if (!fZ) goto L_0088fae5;
L_0088fade:; BB(0x0088fade);
    /* 0088fade: mov dword ptr [ebp + 8], 1 */ W32((u32)(r_ebp+0x8u), 0x1u);
L_0088fae5:; BB(0x0088fae5);
    /* 0088fae5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fae7: jne 0x88faea */ if (!fZ) goto L_0088faea;
L_0088fae9:; BB(0x0088fae9);
    /* 0088fae9: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0088faea:; BB(0x0088faea);
    /* 0088faea: mov esi, dword ptr [ebp + 0x24] */ r_esi = R32((u32)(r_ebp+0x24u));
    /* 0088faed: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088faf0: jne 0x88fafd */ if (!fZ) goto L_0088fafd;
L_0088faf2:; BB(0x0088faf2);
    /* 0088faf2: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088faf5: jbe 0x88fafa */ if ((fC||fZ)) goto L_0088fafa;
L_0088faf7:; BB(0x0088faf7);
    /* 0088faf7: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
L_0088fafa:; BB(0x0088fafa);
    /* 0088fafa: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_0088fafd:; BB(0x0088fafd);
    /* 0088fafd: cmp dword ptr [ebp - 4], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb00: je 0x88fb08 */ if (fZ) goto L_0088fb08;
L_0088fb02:; BB(0x0088fb02);
    /* 0088fb02: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb06: jne 0x88fb0f */ if (!fZ) goto L_0088fb0f;
L_0088fb08:; BB(0x0088fb08);
    /* 0088fb08: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_0088fb0f:; BB(0x0088fb0f);
    /* 0088fb0f: cmp dword ptr [ebp + 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb13: je 0x88fbe9 */ if (fZ) goto L_0088fbe9;
L_0088fb19:; BB(0x0088fb19);
    /* 0088fb19: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0088fb1b: lea ecx, [ebp - 0xdc] */ r_ecx = (u32)(r_ebp+0xffffff24u);
    /* 0088fb21: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fb22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fb23: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x88fb26u); call_ind(t); }
    /* 0088fb26: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb29: jne 0x88fb40 */ if (!fZ) goto L_0088fb40;
L_0088fb2b:; BB(0x0088fb2b);
    /* 0088fb2b: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0088fb2e: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb31: jbe 0x88fb36 */ if ((fC||fZ)) goto L_0088fb36;
L_0088fb33:; BB(0x0088fb33);
    /* 0088fb33: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0088fb36:; BB(0x0088fb36);
    /* 0088fb36: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb39: jbe 0x88fb81 */ if ((fC||fZ)) goto L_0088fb81;
L_0088fb3b:; BB(0x0088fb3b);
    /* 0088fb3b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0088fb3e: jmp 0x88fb81 */ goto L_0088fb81;
L_0088fb40:; BB(0x0088fb40);
    /* 0088fb40: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0088fb46: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb49: jbe 0x88fb4e */ if ((fC||fZ)) goto L_0088fb4e;
L_0088fb4b:; BB(0x0088fb4b);
    /* 0088fb4b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0088fb4e:; BB(0x0088fb4e);
    /* 0088fb4e: cmp ebx, dword ptr [ebp - 0x80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffff80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb51: jbe 0x88fb56 */ if ((fC||fZ)) goto L_0088fb56;
L_0088fb53:; BB(0x0088fb53);
    /* 0088fb53: mov ebx, dword ptr [ebp - 0x80] */ r_ebx = R32((u32)(r_ebp+0xffffff80u));
L_0088fb56:; BB(0x0088fb56);
    /* 0088fb56: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb59: jne 0x88fb87 */ if (!fZ) goto L_0088fb87;
L_0088fb5b:; BB(0x0088fb5b);
    /* 0088fb5b: test byte ptr [ebp - 0xa0], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffff60u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088fb62: je 0x88fb69 */ if (fZ) goto L_0088fb69;
L_0088fb64:; BB(0x0088fb64);
    /* 0088fb64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088fb66: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088fb67: jmp 0x88fb6c */ goto L_0088fb6c;
L_0088fb69:; BB(0x0088fb69);
    /* 0088fb69: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
L_0088fb6c:; BB(0x0088fb6c);
    /* 0088fb6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fb6e: je 0x88fb87 */ if (fZ) goto L_0088fb87;
L_0088fb70:; BB(0x0088fb70);
    /* 0088fb70: mov ecx, eax */ r_ecx = r_eax;
    /* 0088fb72: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0088fb75: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb78: jbe 0x88fb7d */ if ((fC||fZ)) goto L_0088fb7d;
L_0088fb7a:; BB(0x0088fb7a);
    /* 0088fb7a: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
L_0088fb7d:; BB(0x0088fb7d);
    /* 0088fb7d: imul eax, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_0088fb81:; BB(0x0088fb81);
    /* 0088fb81: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fb83: jbe 0x88fb87 */ if ((fC||fZ)) goto L_0088fb87;
L_0088fb85:; BB(0x0088fb85);
    /* 0088fb85: mov ebx, eax */ r_ebx = r_eax;
L_0088fb87:; BB(0x0088fb87);
    /* 0088fb87: mov eax, esi */ r_eax = r_esi;
    /* 0088fb89: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fb8c: je 0x88fba2 */ if (fZ) goto L_0088fba2;
L_0088fb8e:; BB(0x0088fb8e);
    /* 0088fb8e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fb8f: je 0x88fb9b */ if (fZ) goto L_0088fb9b;
L_0088fb91:; BB(0x0088fb91);
    /* 0088fb91: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fb92: jne 0x88fba7 */ if (!fZ) goto L_0088fba7;
L_0088fb94:; BB(0x0088fb94);
    /* 0088fb94: mov eax, 0x20000 */ r_eax = 0x20000u;
    /* 0088fb99: jmp 0x88fbaa */ goto L_0088fbaa;
L_0088fb9b:; BB(0x0088fb9b);
    /* 0088fb9b: mov eax, 0x40000 */ r_eax = 0x40000u;
    /* 0088fba0: jmp 0x88fbaa */ goto L_0088fbaa;
L_0088fba2:; BB(0x0088fba2);
    /* 0088fba2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fba4: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0088fba5: jmp 0x88fbaa */ goto L_0088fbaa;
L_0088fba7:; BB(0x0088fba7);
    /* 0088fba7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0088fbaa:; BB(0x0088fbaa);
    /* 0088fbaa: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0088fbb0: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fbb2: je 0x88fbe9 */ if (fZ) goto L_0088fbe9;
L_0088fbb4:; BB(0x0088fbb4);
    /* 0088fbb4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088fbb7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fbb9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fbba: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fbbc: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 0088fbbf: jbe 0x88fbc9 */ if ((fC||fZ)) goto L_0088fbc9;
L_0088fbc1:; BB(0x0088fbc1);
    /* 0088fbc1: shl dword ptr [ebp + 8], 1 */ { u32 ad = (u32)(r_ebp+0x8u); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0088fbc4: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088fbc7: jb 0x88fbc1 */ if (fC) goto L_0088fbc1;
L_0088fbc9:; BB(0x0088fbc9);
    /* 0088fbc9: mov eax, ebx */ r_eax = r_ebx;
    /* 0088fbcb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fbcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0088fbcf: jbe 0x88fbd7 */ if ((fC||fZ)) goto L_0088fbd7;
L_0088fbd1:; BB(0x0088fbd1);
    /* 0088fbd1: shl ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 0088fbd3: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088fbd5: jb 0x88fbd1 */ if (fC) goto L_0088fbd1;
L_0088fbd7:; BB(0x0088fbd7);
    /* 0088fbd7: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088fbda: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fbdc: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0088fbdf: jbe 0x88fbe9 */ if ((fC||fZ)) goto L_0088fbe9;
L_0088fbe1:; BB(0x0088fbe1);
    /* 0088fbe1: shl dword ptr [ebp - 4], 1 */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 c = (1u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (a << c) & 0xffffffffu; W32(ad, r);  } }
    /* 0088fbe4: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0088fbe7: jb 0x88fbe1 */ if (fC) goto L_0088fbe1;
L_0088fbe9:; BB(0x0088fbe9);
    /* 0088fbe9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088fbec: cmp eax, 0x31545844 */ {  u32 a = r_eax; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fbf1: je 0x88fc0f */ if (fZ) goto L_0088fc0f;
L_0088fbf3:; BB(0x0088fbf3);
    /* 0088fbf3: cmp eax, 0x32545844 */ {  u32 a = r_eax; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fbf8: je 0x88fc0f */ if (fZ) goto L_0088fc0f;
L_0088fbfa:; BB(0x0088fbfa);
    /* 0088fbfa: cmp eax, 0x33545844 */ {  u32 a = r_eax; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fbff: je 0x88fc0f */ if (fZ) goto L_0088fc0f;
L_0088fc01:; BB(0x0088fc01);
    /* 0088fc01: cmp eax, 0x34545844 */ {  u32 a = r_eax; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc06: je 0x88fc0f */ if (fZ) goto L_0088fc0f;
L_0088fc08:; BB(0x0088fc08);
    /* 0088fc08: cmp eax, 0x35545844 */ {  u32 a = r_eax; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc0d: jne 0x88fc23 */ if (!fZ) goto L_0088fc23;
L_0088fc0f:; BB(0x0088fc0f);
    /* 0088fc0f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088fc12: lea edx, [eax + 3] */ r_edx = (u32)(r_eax+0x3u);
    /* 0088fc15: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0088fc18: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0088fc1b: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0088fc1e: and ebx, 0xfffffffc */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0088fc21: jmp 0x88fc26 */ goto L_0088fc26;
L_0088fc23:; BB(0x0088fc23);
    /* 0088fc23: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_0088fc26:; BB(0x0088fc26);
    /* 0088fc26: mov eax, esi */ r_eax = r_esi;
    /* 0088fc28: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fc2b: je 0x88fc41 */ if (fZ) goto L_0088fc41;
L_0088fc2d:; BB(0x0088fc2d);
    /* 0088fc2d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fc2e: je 0x88fc3a */ if (fZ) goto L_0088fc3a;
L_0088fc30:; BB(0x0088fc30);
    /* 0088fc30: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088fc31: jne 0x88fc48 */ if (!fZ) goto L_0088fc48;
L_0088fc33:; BB(0x0088fc33);
    /* 0088fc33: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 0088fc38: jmp 0x88fc4b */ goto L_0088fc4b;
L_0088fc3a:; BB(0x0088fc3a);
    /* 0088fc3a: mov eax, 0x8000 */ r_eax = 0x8000u;
    /* 0088fc3f: jmp 0x88fc4b */ goto L_0088fc4b;
L_0088fc41:; BB(0x0088fc41);
    /* 0088fc41: mov eax, 0x4000 */ r_eax = 0x4000u;
    /* 0088fc46: jmp 0x88fc4b */ goto L_0088fc4b;
L_0088fc48:; BB(0x0088fc48);
    /* 0088fc48: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0088fc4b:; BB(0x0088fc4b);
    /* 0088fc4b: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0088fc4e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc50: je 0x88fc56 */ if (fZ) goto L_0088fc56;
L_0088fc52:; BB(0x0088fc52);
    /* 0088fc52: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0088fc54: jmp 0x88fc59 */ goto L_0088fc59;
L_0088fc56:; BB(0x0088fc56);
    /* 0088fc56: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_0088fc59:; BB(0x0088fc59);
    /* 0088fc59: cmp dword ptr [ebp + 0x20], 3 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc5d: je 0x88fc8f */ if (fZ) goto L_0088fc8f;
L_0088fc5f:; BB(0x0088fc5f);
    /* 0088fc5f: mov ecx, dword ptr [ebp - 0xa0] */ r_ecx = R32((u32)(r_ebp+0xffffff60u));
    /* 0088fc65: test ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc67: je 0x88fc8a */ if (fZ) goto L_0088fc8a;
L_0088fc69:; BB(0x0088fc69);
    /* 0088fc69: test byte ptr [ebp - 0x9f], 1 */ {  u32 a = R8((u32)(r_ebp+0xffffff61u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0088fc70: je 0x88fc8f */ if (fZ) goto L_0088fc8f;
L_0088fc72:; BB(0x0088fc72);
    /* 0088fc72: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 0088fc75: test edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc77: jne 0x88fc8a */ if (!fZ) goto L_0088fc8a;
L_0088fc79:; BB(0x0088fc79);
    /* 0088fc79: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 0088fc7c: test ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc7e: jne 0x88fc8a */ if (!fZ) goto L_0088fc8a;
L_0088fc80:; BB(0x0088fc80);
    /* 0088fc80: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088fc83: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088fc86: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc88: je 0x88fc8f */ if (fZ) goto L_0088fc8f;
L_0088fc8a:; BB(0x0088fc8a);
    /* 0088fc8a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0088fc8c: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0088fc8d: jmp 0x88fcda */ goto L_0088fcda;
L_0088fc8f:; BB(0x0088fc8f);
    /* 0088fc8f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0088fc92: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088fc94: jmp 0x88fc99 */ goto L_0088fc99;
L_0088fc96:; BB(0x0088fc96);
    /* 0088fc96: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088fc98: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0088fc99:; BB(0x0088fc99);
    /* 0088fc99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fc9b: jne 0x88fc96 */ if (!fZ) goto L_0088fc96;
L_0088fc9d:; BB(0x0088fc9d);
    /* 0088fc9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fc9f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fca1: mov eax, ebx */ r_eax = r_ebx;
    /* 0088fca3: je 0x88fcac */ if (fZ) goto L_0088fcac;
L_0088fca5:; BB(0x0088fca5);
    /* 0088fca5: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088fca7: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcaa: jne 0x88fca5 */ if (!fZ) goto L_0088fca5;
L_0088fcac:; BB(0x0088fcac);
    /* 0088fcac: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088fcaf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0088fcb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcb3: je 0x88fcbc */ if (fZ) goto L_0088fcbc;
L_0088fcb5:; BB(0x0088fcb5);
    /* 0088fcb5: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0088fcb7: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0088fcb8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcba: jne 0x88fcb5 */ if (!fZ) goto L_0088fcb5;
L_0088fcbc:; BB(0x0088fcbc);
    /* 0088fcbc: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fcbe: mov eax, esi */ r_eax = r_esi;
    /* 0088fcc0: ja 0x88fcc4 */ if ((!fC&&!fZ)) goto L_0088fcc4;
L_0088fcc2:; BB(0x0088fcc2);
    /* 0088fcc2: mov eax, ecx */ r_eax = r_ecx;
L_0088fcc4:; BB(0x0088fcc4);
    /* 0088fcc4: cmp dword ptr [ebp + 0x24], 4 */ {  u32 a = R32((u32)(r_ebp+0x24u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcc8: jne 0x88fcd0 */ if (!fZ) goto L_0088fcd0;
L_0088fcca:; BB(0x0088fcca);
    /* 0088fcca: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fccc: jbe 0x88fcd0 */ if ((fC||fZ)) goto L_0088fcd0;
L_0088fcce:; BB(0x0088fcce);
    /* 0088fcce: mov eax, edx */ r_eax = r_edx;
L_0088fcd0:; BB(0x0088fcd0);
    /* 0088fcd0: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0088fcd2: ja 0x88fcd8 */ if ((!fC&&!fZ)) goto L_0088fcd8;
L_0088fcd4:; BB(0x0088fcd4);
    /* 0088fcd4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcd6: jne 0x88fcda */ if (!fZ) goto L_0088fcda;
L_0088fcd8:; BB(0x0088fcd8);
    /* 0088fcd8: mov edi, eax */ r_edi = r_eax;
L_0088fcda:; BB(0x0088fcda);
    /* 0088fcda: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0088fcdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcdf: je 0x88fce6 */ if (fZ) goto L_0088fce6;
L_0088fce1:; BB(0x0088fce1);
    /* 0088fce1: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0088fce4: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0088fce6:; BB(0x0088fce6);
    /* 0088fce6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0088fce9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fceb: je 0x88fcef */ if (fZ) goto L_0088fcef;
L_0088fced:; BB(0x0088fced);
    /* 0088fced: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
L_0088fcef:; BB(0x0088fcef);
    /* 0088fcef: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0088fcf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fcf4: je 0x88fcfb */ if (fZ) goto L_0088fcfb;
L_0088fcf6:; BB(0x0088fcf6);
    /* 0088fcf6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0088fcf9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0088fcfb:; BB(0x0088fcfb);
    /* 0088fcfb: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0088fcfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd00: je 0x88fd04 */ if (fZ) goto L_0088fd04;
L_0088fd02:; BB(0x0088fd02);
    /* 0088fd02: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
L_0088fd04:; BB(0x0088fd04);
    /* 0088fd04: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0088fd07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd09: je 0x88fd10 */ if (fZ) goto L_0088fd10;
L_0088fd0b:; BB(0x0088fd0b);
    /* 0088fd0b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0088fd0e: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0088fd10:; BB(0x0088fd10);
    /* 0088fd10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0088fd12:; BB(0x0088fd12);
    /* 0088fd12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088fd13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088fd14: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088fd15: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088fd16: ret  */ FN_RET(0x0088f9ed); r_esp += 4; return;
}

void f_0088fb55(void)
{
    FN_ENTER(0x0088fb55);
    /* 0088fb55: add byte ptr [ebx + 0x2c7503fe], 0xf6 */ { u32 ad = (u32)(r_ebx+0x2c7503feu);  u32 a = R8(ad); u32 b = 0xf6u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0088fb5c: test dword ptr [eax - 1], esp */ {  u32 a = R32((u32)(r_eax+0xffffffffu)); u32 b = r_esp; u32 r = (a & b) & 0xffffffffu;   }
    UNSUP(0x0088fb5f, "falls out of decoded code");
}

void f_0088fd39(void) /* sub_88FD39 */
{
    FN_ENTER(0x0088fd39);
    /* 0088fd39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd3a: lea ebp, [esp - 0x58] */ r_ebp = (u32)(r_esp+0xffffffa8u);
    /* 0088fd3e: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088fd44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd45: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 0088fd48: call 0x89975e */ r_esp -= 4; W32(r_esp, 0x88fd4du); f_0089975e();
    /* 0088fd4d: cmp dword ptr [ebp + 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0x60u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd51: jne 0x88fd5d */ if (!fZ) goto L_0088fd5d;
L_0088fd53:; BB(0x0088fd53);
    /* 0088fd53: mov esi, 0x8876086c */ r_esi = 0x8876086cu;
    /* 0088fd58: jmp 0x88fecd */ goto L_0088fecd;
L_0088fd5d:; BB(0x0088fd5d);
    /* 0088fd5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd5e: mov ebx, dword ptr [ebp + 0x6c] */ r_ebx = R32((u32)(r_ebp+0x6cu));
    /* 0088fd61: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd63: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fd64: jne 0x88fd70 */ if (!fZ) goto L_0088fd70;
L_0088fd66:; BB(0x0088fd66);
    /* 0088fd66: mov esi, 0x8876086c */ r_esi = 0x8876086cu;
    /* 0088fd6b: jmp 0x88fecb */ goto L_0088fecb;
L_0088fd70:; BB(0x0088fd70);
    /* 0088fd70: mov eax, dword ptr [ebp + 0x78] */ r_eax = R32((u32)(r_ebp+0x78u));
    /* 0088fd73: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0088fd78: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd7b: je 0x88fe76 */ if (fZ) goto L_0088fe76;
L_0088fd81:; BB(0x0088fd81);
    /* 0088fd81: cmp dword ptr [ebp + 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0x7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd85: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fd8b:; BB(0x0088fd8b);
    /* 0088fd8b: mov esi, dword ptr [ebp + 0x64] */ r_esi = R32((u32)(r_ebp+0x64u));
    /* 0088fd8e: mov edi, dword ptr [ebp + 0x70] */ r_edi = R32((u32)(r_ebp+0x70u));
    /* 0088fd91: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd93: je 0x88fdb4 */ if (fZ) goto L_0088fdb4;
L_0088fd95:; BB(0x0088fd95);
    /* 0088fd95: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd97: je 0x88fe76 */ if (fZ) goto L_0088fe76;
L_0088fd9d:; BB(0x0088fd9d);
    /* 0088fd9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fd9f: je 0x88fe76 */ if (fZ) goto L_0088fe76;
L_0088fda5:; BB(0x0088fda5);
    /* 0088fda5: mov ecx, 0x100 */ r_ecx = 0x100u;
    /* 0088fdaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0088fdac: repe cmpsd dword ptr [esi], dword ptr es:[edi] */ while (r_ecx) { { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 0088fdae: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fdb4:; BB(0x0088fdb4);
    /* 0088fdb4: mov esi, dword ptr [ebp + 0x68] */ r_esi = R32((u32)(r_ebp+0x68u));
    /* 0088fdb7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fdb9: je 0x88fdc7 */ if (fZ) goto L_0088fdc7;
L_0088fdbb:; BB(0x0088fdbb);
    /* 0088fdbb: lea edi, [ebp + 0x48] */ r_edi = (u32)(r_ebp+0x48u);
    /* 0088fdbe: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdbf: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdc0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdc1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdc2: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 0088fdc5: jmp 0x88fde8 */ goto L_0088fde8;
L_0088fdc7:; BB(0x0088fdc7);
    /* 0088fdc7: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 0088fdca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088fdcc: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 0088fdcf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fdd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fdd1: call dword ptr [ecx + 0x20] */ { u32 t = R32((u32)(r_ecx+0x20u)); r_esp -= 4; W32(r_esp, 0x88fdd4u); call_ind(t); }
    /* 0088fdd4: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0088fdd7: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 0088fdda: and dword ptr [ebp + 0x48], 0 */ { u32 ad = (u32)(r_ebp+0x48u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fdde: and dword ptr [ebp + 0x4c], 0 */ { u32 ad = (u32)(r_ebp+0x4cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fde2: mov dword ptr [ebp + 0x50], edx */ W32((u32)(r_ebp+0x50u), r_edx);
    /* 0088fde5: mov dword ptr [ebp + 0x54], eax */ W32((u32)(r_ebp+0x54u), r_eax);
L_0088fde8:; BB(0x0088fde8);
    /* 0088fde8: mov esi, dword ptr [ebp + 0x74] */ r_esi = R32((u32)(r_ebp+0x74u));
    /* 0088fdeb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fded: je 0x88fdfe */ if (fZ) goto L_0088fdfe;
L_0088fdef:; BB(0x0088fdef);
    /* 0088fdef: lea edi, [ebp + 0x38] */ r_edi = (u32)(r_ebp+0x38u);
    /* 0088fdf2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdf3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdf4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdf5: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0088fdf6: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 0088fdf9: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0088fdfc: jmp 0x88fe1f */ goto L_0088fe1f;
L_0088fdfe:; BB(0x0088fdfe);
    /* 0088fdfe: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0088fe00: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0088fe03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe05: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x88fe08u); call_ind(t); }
    /* 0088fe08: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0088fe0b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0088fe0e: and dword ptr [ebp + 0x38], 0 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fe12: and dword ptr [ebp + 0x3c], 0 */ { u32 ad = (u32)(r_ebp+0x3cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fe16: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 0088fe19: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0088fe1c: mov dword ptr [ebp + 0x44], ecx */ W32((u32)(r_ebp+0x44u), r_ecx);
L_0088fe1f:; BB(0x0088fe1f);
    /* 0088fe1f: sub eax, dword ptr [ebp + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe22: sub edx, dword ptr [ebp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088fe25: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe27: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fe29:; BB(0x0088fe29);
    /* 0088fe29: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 0088fe2c: sub ecx, dword ptr [ebp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fe2f: sub eax, dword ptr [ebp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe32: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe34: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fe36:; BB(0x0088fe36);
    /* 0088fe36: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0088fe38: lea ecx, [ebp + 0x6c] */ r_ecx = (u32)(r_ebp+0x6cu);
    /* 0088fe3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe3d: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x88fe40u); call_ind(t); }
    /* 0088fe40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe42: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88fe47u); f_0089414b();
    /* 0088fe47: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088fe4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088fe4b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088fe4d: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 0088fe50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe51: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe54: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0088fe57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5c: call dword ptr [ecx + 0x70] */ { u32 t = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, 0x88fe5fu); call_ind(t); }
    /* 0088fe5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe61: mov esi, eax */ r_esi = r_eax;
    /* 0088fe63: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88fe68u); f_0089414b();
    /* 0088fe68: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088fe6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088fe6c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088fe6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe6f: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x88fe72u); call_ind(t); }
    /* 0088fe72: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fe74: jge 0x88fec9 */ if ((fS==fO)) goto L_0088fec9;
L_0088fe76:; BB(0x0088fe76);
    /* 0088fe76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe78: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe79: cmp dword ptr [ebp + 0x60], ebx */ {  u32 a = R32((u32)(r_ebp+0x60u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe7c: jne 0x88fe83 */ if (!fZ) goto L_0088fe83;
L_0088fe7e:; BB(0x0088fe7e);
    /* 0088fe7e: mov eax, 0x10001 */ r_eax = 0x10001u;
L_0088fe83:; BB(0x0088fe83);
    /* 0088fe83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe86: push dword ptr [ebp + 0x74] */ { u32 v = R32((u32)(r_ebp+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe89: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0088fe8c: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe8f: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 0088fe92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe94: call 0x8997f8 */ r_esp -= 4; W32(r_esp, 0x88fe99u); f_008997f8();
    /* 0088fe99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fe9b: jge 0x88fea1 */ if ((fS==fO)) goto L_0088fea1;
L_0088fe9d:; BB(0x0088fe9d);
    /* 0088fe9d: mov esi, eax */ r_esi = r_eax;
    /* 0088fe9f: jmp 0x88fecb */ goto L_0088fecb;
L_0088fea1:; BB(0x0088fea1);
    /* 0088fea1: push dword ptr [ebp + 0x7c] */ { u32 v = R32((u32)(r_ebp+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fea4: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0088fea7: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088feab: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feae: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb1: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb4: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb7: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feba: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088febd: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fec0: call 0x88f838 */ r_esp -= 4; W32(r_esp, 0x88fec5u); f_0088f838();
    /* 0088fec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fec7: jl 0x88fe9d */ if ((fS!=fO)) goto L_0088fe9d;
L_0088fec9:; BB(0x0088fec9);
    /* 0088fec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0088fecb:; BB(0x0088fecb);
    /* 0088fecb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088fecc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0088fecd:; BB(0x0088fecd);
    /* 0088fecd: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 0088fed0: call 0x8997f3 */ r_esp -= 4; W32(r_esp, 0x88fed5u); f_008997f3();
    /* 0088fed5: mov eax, esi */ r_eax = r_esi;
    /* 0088fed7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088fed8: add ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088fedb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088fedc: ret 0x20 */ FN_RET(0x0088fd39); r_esp += 36; return;
}

void f_0088fe00(void)
{
    FN_ENTER(0x0088fe00);
    /* 0088fe00: lea ecx, [ebp + 8] */ r_ecx = (u32)(r_ebp+0x8u);
    /* 0088fe03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe05: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x88fe08u); call_ind(t); }
    /* 0088fe08: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0088fe0b: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0088fe0e: and dword ptr [ebp + 0x38], 0 */ { u32 ad = (u32)(r_ebp+0x38u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fe12: and dword ptr [ebp + 0x3c], 0 */ { u32 ad = (u32)(r_ebp+0x3cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0088fe16: mov edx, dword ptr [ebp + 0x50] */ r_edx = R32((u32)(r_ebp+0x50u));
    /* 0088fe19: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 0088fe1c: mov dword ptr [ebp + 0x44], ecx */ W32((u32)(r_ebp+0x44u), r_ecx);
    /* 0088fe1f: sub eax, dword ptr [ebp + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe22: sub edx, dword ptr [ebp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0088fe25: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe27: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fe29:; BB(0x0088fe29);
    /* 0088fe29: mov eax, dword ptr [ebp + 0x54] */ r_eax = R32((u32)(r_ebp+0x54u));
    /* 0088fe2c: sub ecx, dword ptr [ebp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0088fe2f: sub eax, dword ptr [ebp + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe32: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe34: jne 0x88fe76 */ if (!fZ) goto L_0088fe76;
L_0088fe36:; BB(0x0088fe36);
    /* 0088fe36: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0088fe38: lea ecx, [ebp + 0x6c] */ r_ecx = (u32)(r_ebp+0x6cu);
    /* 0088fe3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe3d: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x88fe40u); call_ind(t); }
    /* 0088fe40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe42: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88fe47u); f_0089414b();
    /* 0088fe47: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088fe4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088fe4b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088fe4d: lea edx, [ebp + 0x48] */ r_edx = (u32)(r_ebp+0x48u);
    /* 0088fe50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe51: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe54: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 0088fe57: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe5c: call dword ptr [ecx + 0x70] */ { u32 t = R32((u32)(r_ecx+0x70u)); r_esp -= 4; W32(r_esp, 0x88fe5fu); call_ind(t); }
    /* 0088fe5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe61: mov esi, eax */ r_esi = r_eax;
    /* 0088fe63: call 0x89414b */ r_esp -= 4; W32(r_esp, 0x88fe68u); f_0089414b();
    /* 0088fe68: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0088fe6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0088fe6c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088fe6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe6f: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x88fe72u); call_ind(t); }
    /* 0088fe72: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fe74: jge 0x88fec9 */ if ((fS==fO)) goto L_0088fec9;
L_0088fe76:; BB(0x0088fe76);
    /* 0088fe76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe78: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088fe79: cmp dword ptr [ebp + 0x60], ebx */ {  u32 a = R32((u32)(r_ebp+0x60u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fe7c: jne 0x88fe83 */ if (!fZ) goto L_0088fe83;
L_0088fe7e:; BB(0x0088fe7e);
    /* 0088fe7e: mov eax, 0x10001 */ r_eax = 0x10001u;
L_0088fe83:; BB(0x0088fe83);
    /* 0088fe83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe86: push dword ptr [ebp + 0x74] */ { u32 v = R32((u32)(r_ebp+0x74u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe89: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 0088fe8c: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fe8f: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 0088fe92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088fe94: call 0x8997f8 */ r_esp -= 4; W32(r_esp, 0x88fe99u); f_008997f8();
    /* 0088fe99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fe9b: jge 0x88fea1 */ if ((fS==fO)) goto L_0088fea1;
L_0088fe9d:; BB(0x0088fe9d);
    /* 0088fe9d: mov esi, eax */ r_esi = r_eax;
    /* 0088fe9f: jmp 0x88fecb */ goto L_0088fecb;
L_0088fea1:; BB(0x0088fea1);
    /* 0088fea1: push dword ptr [ebp + 0x7c] */ { u32 v = R32((u32)(r_ebp+0x7cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fea4: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0088fea7: push dword ptr [ebp + 0x78] */ { u32 v = R32((u32)(r_ebp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feaa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088feab: push dword ptr [ebp + 0x70] */ { u32 v = R32((u32)(r_ebp+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feae: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb1: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb4: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feb7: push dword ptr [ebp + 0x68] */ { u32 v = R32((u32)(r_ebp+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088feba: push dword ptr [ebp + 0x64] */ { u32 v = R32((u32)(r_ebp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088febd: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088fec0: call 0x88f838 */ r_esp -= 4; W32(r_esp, 0x88fec5u); f_0088f838();
    /* 0088fec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0088fec7: jl 0x88fe9d */ if ((fS!=fO)) goto L_0088fe9d;
L_0088fec9:; BB(0x0088fec9);
    /* 0088fec9: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0088fecb:; BB(0x0088fecb);
    /* 0088fecb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088fecc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0088fecd: lea ecx, [ebp + 0x28] */ r_ecx = (u32)(r_ebp+0x28u);
    /* 0088fed0: call 0x8997f3 */ r_esp -= 4; W32(r_esp, 0x88fed5u); f_008997f3();
    /* 0088fed5: mov eax, esi */ r_eax = r_esi;
    /* 0088fed7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088fed8: add ebp, 0x58 */ {  u32 a = r_ebp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0088fedb: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088fedc: ret 0x20 */ FN_RET(0x0088fe00); r_esp += 36; return;
}

void f_0088fedf(void) /* sub_88FEDF */
{
    FN_ENTER(0x0088fedf);
    /* 0088fedf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088fee0: mov ebp, esp */ r_ebp = r_esp;
    /* 0088fee2: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088fee5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088fee6: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0088fee9: call 0x8997d7 */ r_esp -= 4; W32(r_esp, 0x88feeeu); f_008997d7();
    /* 0088feee: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0088fef0: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fef3: jne 0x88fefc */ if (!fZ) goto L_0088fefc;
L_0088fef5:; BB(0x0088fef5);
    /* 0088fef5: mov esi, 0x8876086c */ r_esi = 0x8876086cu;
    /* 0088fefa: jmp 0x88ff56 */ goto L_0088ff56;
L_0088fefc:; BB(0x0088fefc);
    /* 0088fefc: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0088feff: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ff01: je 0x88fef5 */ if (fZ) goto L_0088fef5;
L_0088ff03:; BB(0x0088ff03);
    /* 0088ff03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0088ff05: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0088ff06: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ff09: jne 0x88ff10 */ if (!fZ) goto L_0088ff10;
L_0088ff0b:; BB(0x0088ff0b);
    /* 0088ff0b: mov eax, 0x10001 */ r_eax = 0x10001u;
L_0088ff10:; BB(0x0088ff10);
    /* 0088ff10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff12: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff15: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 0088ff18: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff1b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff1d: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0088ff20: call 0x899c10 */ r_esp -= 4; W32(r_esp, 0x88ff25u); f_00899c10();
    /* 0088ff25: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ff27: jl 0x88ff54 */ if ((fS!=fO)) goto L_0088ff54;
L_0088ff29:; BB(0x0088ff29);
    /* 0088ff29: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff2c: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 0088ff2f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff33: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff36: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff39: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff3c: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff3f: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff42: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff45: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff48: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0088ff4b: call 0x88f91a */ r_esp -= 4; W32(r_esp, 0x88ff50u); f_0088f91a();
    /* 0088ff50: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ff52: jge 0x88ff56 */ if ((fS==fO)) goto L_0088ff56;
L_0088ff54:; BB(0x0088ff54);
    /* 0088ff54: mov esi, eax */ r_esi = r_eax;
L_0088ff56:; BB(0x0088ff56);
    /* 0088ff56: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0088ff59: call 0x899c0b */ r_esp -= 4; W32(r_esp, 0x88ff5eu); f_00899c0b();
    /* 0088ff5e: mov eax, esi */ r_eax = r_esi;
    /* 0088ff60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0088ff61: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0088ff62: ret 0x20 */ FN_RET(0x0088fedf); r_esp += 36; return;
}

void f_0088ff65(void) /* sub_88FF65 */
{
    FN_ENTER(0x0088ff65);
    /* 0088ff65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff66: mov ebp, esp */ r_ebp = r_esp;
    /* 0088ff68: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0088ff6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff6d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0088ff70: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0088ff72: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0088ff74: je 0x88ff8a */ if (fZ) goto L_0088ff8a;
L_0088ff76:; BB(0x0088ff76);
    /* 0088ff76: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0088ff78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff79: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x88ff7cu); call_ind(t); }
    /* 0088ff7c: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0088ff7f: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = (a < b); }
    /* 0088ff82: je 0x88ff94 */ if (fZ) goto L_0088ff94;
L_0088ff84:; BB(0x0088ff84);
    /* 0088ff84: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088ff85: je 0x88ff94 */ if (fZ) goto L_0088ff94;
L_0088ff87:; BB(0x0088ff87);
    /* 0088ff87: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0088ff88: je 0x88ff94 */ if (fZ) goto L_0088ff94;
L_0088ff8a:; BB(0x0088ff8a);
    /* 0088ff8a: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 0088ff8f: jmp 0x890243 */ goto L_00890243;
L_0088ff94:; BB(0x0088ff94);
    /* 0088ff94: cmp dword ptr [ebp + 0x14], -1 */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ff98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff99: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0088ff9b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0088ff9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0088ff9f: jne 0x890007 */ if (!fZ) goto L_00890007;
L_0088ffa1:; BB(0x0088ffa1);
    /* 0088ffa1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0088ffa4: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088ffa7: je 0x890031 */ if (fZ) goto L_00890031;
L_0088ffad:; BB(0x0088ffad);
    /* 0088ffad: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088ffae: je 0x88ffd4 */ if (fZ) goto L_0088ffd4;
L_0088ffb0:; BB(0x0088ffb0);
    /* 0088ffb0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0088ffb1: jne 0x890056 */ if (!fZ) goto L_00890056;
L_0088ffb7:; BB(0x0088ffb7);
    /* 0088ffb7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ffba: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088ffbc: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 0088ffbf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffc2: call dword ptr [ecx + 0x38] */ { u32 t = R32((u32)(r_ecx+0x38u)); r_esp -= 4; W32(r_esp, 0x88ffc5u); call_ind(t); }
    /* 0088ffc5: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0088ffc8: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088ffcb: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ffcd: jne 0x890000 */ if (!fZ) goto L_00890000;
L_0088ffcf:; BB(0x0088ffcf);
    /* 0088ffcf: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0088ffd2: jmp 0x88fff9 */ goto L_0088fff9;
L_0088ffd4:; BB(0x0088ffd4);
    /* 0088ffd4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0088ffd7: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0088ffd9: lea edx, [ebp - 0x64] */ r_edx = (u32)(r_ebp+0xffffff9cu);
    /* 0088ffdc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0088ffdf: call dword ptr [ecx + 0x38] */ { u32 t = R32((u32)(r_ecx+0x38u)); r_esp -= 4; W32(r_esp, 0x88ffe2u); call_ind(t); }
    /* 0088ffe2: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0088ffe5: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088ffe8: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088ffea: jne 0x890000 */ if (!fZ) goto L_00890000;
L_0088ffec:; BB(0x0088ffec);
    /* 0088ffec: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 0088ffef: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088fff2: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fff4: jne 0x890000 */ if (!fZ) goto L_00890000;
L_0088fff6:; BB(0x0088fff6);
    /* 0088fff6: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
L_0088fff9:; BB(0x0088fff9);
    /* 0088fff9: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0088fffc: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0088fffe: je 0x89005b */ if (fZ) goto L_0089005b;
L_00890000:; BB(0x00890000);
    /* 00890000: mov dword ptr [ebp + 0x14], 0x80004 */ W32((u32)(r_ebp+0x14u), 0x80004u);
L_00890007:; BB(0x00890007);
    /* 00890007: cmp dword ptr [ebp - 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089000a: jne 0x890010 */ if (!fZ) goto L_00890010;
L_0089000c:; BB(0x0089000c);
    /* 0089000c: or byte ptr [ebp + 0x16], 7 */ { u32 ad = (u32)(r_ebp+0x16u);  u32 a = R8(ad); u32 b = 0x7u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00890010:; BB(0x00890010);
    /* 00890010: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00890012: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890013: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x890016u); call_ind(t); }
    /* 00890016: cmp dword ptr [ebp + 0x10], -1 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089001a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0089001d: jne 0x890022 */ if (!fZ) goto L_00890022;
L_0089001f:; BB(0x0089001f);
    /* 0089001f: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
L_00890022:; BB(0x00890022);
    /* 00890022: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890025: jb 0x890060 */ if (fC) goto L_00890060;
L_00890027:; BB(0x00890027);
    /* 00890027: mov eax, 0x8876086c */ r_eax = 0x8876086cu;
    /* 0089002c: jmp 0x890242 */ goto L_00890242;
L_00890031:; BB(0x00890031);
    /* 00890031: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00890034: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890036: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 00890039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089003a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089003b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089003c: call dword ptr [ecx + 0x38] */ { u32 t = R32((u32)(r_ecx+0x38u)); r_esp -= 4; W32(r_esp, 0x89003fu); call_ind(t); }
    /* 0089003f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00890042: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 00890045: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890047: jne 0x890053 */ if (!fZ) goto L_00890053;
L_00890049:; BB(0x00890049);
    /* 00890049: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089004c: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 0089004f: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890051: je 0x89005b */ if (fZ) goto L_0089005b;
L_00890053:; BB(0x00890053);
    /* 00890053: mov dword ptr [ebp + 0x14], ebx */ W32((u32)(r_ebp+0x14u), r_ebx);
L_00890056:; BB(0x00890056);
    /* 00890056: cmp dword ptr [ebp + 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890059: je 0x890000 */ if (fZ) goto L_00890000;
L_0089005b:; BB(0x0089005b);
    /* 0089005b: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 0089005e: jmp 0x890007 */ goto L_00890007;
L_00890060:; BB(0x00890060);
    /* 00890060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00890062: cmp dword ptr [ebp - 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890065: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00890068: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0089006b: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 0089006e: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00890071: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
    /* 00890074: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00890075: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00890077: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00890078: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0089007b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0089007e: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00890083: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890086: je 0x89008f */ if (fZ) goto L_0089008f;
L_00890088:; BB(0x00890088);
    /* 00890088: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089008a: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089008d: jne 0x890096 */ if (!fZ) goto L_00890096;
L_0089008f:; BB(0x0089008f);
    /* 0089008f: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
L_00890096:; BB(0x00890096);
    /* 00890096: cmp dword ptr [ebp - 0x24], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00890099: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0089009c: jbe 0x890201 */ if ((fC||fZ)) goto L_00890201;
L_008900a2:; BB(0x008900a2);
    /* 008900a2: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_008900a5:; BB(0x008900a5);
    /* 008900a5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008900a8: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900ab: je 0x8900cd */ if (fZ) goto L_008900cd;
L_008900ad:; BB(0x008900ad);
    /* 008900ad: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900ae: je 0x8900c8 */ if (fZ) goto L_008900c8;
L_008900b0:; BB(0x008900b0);
    /* 008900b0: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900b1: jne 0x8900df */ if (!fZ) goto L_008900df;
L_008900b3:; BB(0x008900b3);
    /* 008900b3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008900b6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008900b8: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008900bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008900bc: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008900bf: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 008900c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008900c3: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8900c6u); call_ind(t); }
    /* 008900c6: jmp 0x8900dd */ goto L_008900dd;
L_008900c8:; BB(0x008900c8);
    /* 008900c8: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 008900cb: jmp 0x8900d0 */ goto L_008900d0;
L_008900cd:; BB(0x008900cd);
    /* 008900cd: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
L_008900d0:; BB(0x008900d0);
    /* 008900d0: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008900d3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008900d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008900d6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008900d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008900da: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x8900ddu); call_ind(t); }
L_008900dd:; BB(0x008900dd);
    /* 008900dd: mov esi, eax */ r_esi = r_eax;
L_008900df:; BB(0x008900df);
    /* 008900df: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008900e1: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_008900e7:; BB(0x008900e7);
    /* 008900e7: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008900ea: jmp 0x8901c8 */ goto L_008901c8;
L_008900ef:; BB(0x008900ef);
    /* 008900ef: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008900f2: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900f5: je 0x890115 */ if (fZ) goto L_00890115;
L_008900f7:; BB(0x008900f7);
    /* 008900f7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900f8: je 0x890110 */ if (fZ) goto L_00890110;
L_008900fa:; BB(0x008900fa);
    /* 008900fa: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008900fb: jne 0x890125 */ if (!fZ) goto L_00890125;
L_008900fd:; BB(0x008900fd);
    /* 008900fd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00890100: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890102: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
    /* 00890105: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00890106: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00890107: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089010a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089010b: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x89010eu); call_ind(t); }
    /* 0089010e: jmp 0x890123 */ goto L_00890123;
L_00890110:; BB(0x00890110);
    /* 00890110: lea edx, [ebp - 0xc] */ r_edx = (u32)(r_ebp+0xfffffff4u);
    /* 00890113: jmp 0x890118 */ goto L_00890118;
L_00890115:; BB(0x00890115);
    /* 00890115: lea edx, [ebp - 4] */ r_edx = (u32)(r_ebp+0xfffffffcu);
L_00890118:; BB(0x00890118);
    /* 00890118: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089011b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089011d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089011e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890120: call dword ptr [ecx + 0x3c] */ { u32 t = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, 0x890123u); call_ind(t); }
L_00890123:; BB(0x00890123);
    /* 00890123: mov esi, eax */ r_esi = r_eax;
L_00890125:; BB(0x00890125);
    /* 00890125: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00890127: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_0089012d:; BB(0x0089012d);
    /* 0089012d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00890130: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890133: je 0x89013b */ if (fZ) goto L_0089013b;
L_00890135:; BB(0x00890135);
    /* 00890135: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890136: je 0x89018f */ if (fZ) goto L_0089018f;
L_00890138:; BB(0x00890138);
    /* 00890138: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890139: jne 0x890154 */ if (!fZ) goto L_00890154;
L_0089013b:; BB(0x0089013b);
    /* 0089013b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089013c: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089013f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890140: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890143: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890147: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089014a: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089014d: call 0x88fd39 */ r_esp -= 4; W32(r_esp, 0x890152u); f_0088fd39();
L_00890152:; BB(0x00890152);
    /* 00890152: mov esi, eax */ r_esi = r_eax;
L_00890154:; BB(0x00890154);
    /* 00890154: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00890156: jl 0x890203 */ if ((fS!=fO)) goto L_00890203;
L_0089015c:; BB(0x0089015c);
    /* 0089015c: cmp dword ptr [ebp - 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089015f: je 0x8901a8 */ if (fZ) goto L_008901a8;
L_00890161:; BB(0x00890161);
    /* 00890161: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890164: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890166: je 0x890171 */ if (fZ) goto L_00890171;
L_00890168:; BB(0x00890168);
    /* 00890168: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089016a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089016b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89016eu); call_ind(t); }
    /* 0089016e: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_00890171:; BB(0x00890171);
    /* 00890171: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00890174: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890176: je 0x89017e */ if (fZ) goto L_0089017e;
L_00890178:; BB(0x00890178);
    /* 00890178: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089017a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089017b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89017eu); call_ind(t); }
L_0089017e:; BB(0x0089017e);
    /* 0089017e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00890181: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00890184: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00890187: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0089018a: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0089018d: jmp 0x8901c5 */ goto L_008901c5;
L_0089018f:; BB(0x0089018f);
    /* 0089018f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890190: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890193: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890194: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890197: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089019a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089019b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089019e: push dword ptr [ebp - 0xc] */ { u32 v = R32((u32)(r_ebp+0xfffffff4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008901a1: call 0x88fedf */ r_esp -= 4; W32(r_esp, 0x8901a6u); f_0088fedf();
    /* 008901a6: jmp 0x890152 */ goto L_00890152;
L_008901a8:; BB(0x008901a8);
    /* 008901a8: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008901ab: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901ad: je 0x8901b8 */ if (fZ) goto L_008901b8;
L_008901af:; BB(0x008901af);
    /* 008901af: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901b2: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901b5u); call_ind(t); }
    /* 008901b5: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_008901b8:; BB(0x008901b8);
    /* 008901b8: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008901bb: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901bd: je 0x8901c8 */ if (fZ) goto L_008901c8;
L_008901bf:; BB(0x008901bf);
    /* 008901bf: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901c2: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901c5u); call_ind(t); }
L_008901c5:; BB(0x008901c5);
    /* 008901c5: mov dword ptr [ebp - 0xc], ebx */ W32((u32)(r_ebp+0xfffffff4u), r_ebx);
L_008901c8:; BB(0x008901c8);
    /* 008901c8: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008901c9: cmp edi, dword ptr [ebp - 0x20] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008901cc: jb 0x8900ef */ if (fC) goto L_008900ef;
L_008901d2:; BB(0x008901d2);
    /* 008901d2: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008901d5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901d7: je 0x8901e2 */ if (fZ) goto L_008901e2;
L_008901d9:; BB(0x008901d9);
    /* 008901d9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901dc: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901dfu); call_ind(t); }
    /* 008901df: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_008901e2:; BB(0x008901e2);
    /* 008901e2: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008901e5: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008901e7: je 0x8901f2 */ if (fZ) goto L_008901f2;
L_008901e9:; BB(0x008901e9);
    /* 008901e9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008901eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008901ec: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8901efu); call_ind(t); }
    /* 008901ef: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_008901f2:; BB(0x008901f2);
    /* 008901f2: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008901f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008901f8: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008901fb: jb 0x8900a5 */ if (fC) goto L_008900a5;
L_00890201:; BB(0x00890201);
    /* 00890201: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00890203:; BB(0x00890203);
    /* 00890203: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890206: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890208: je 0x890213 */ if (fZ) goto L_00890213;
L_0089020a:; BB(0x0089020a);
    /* 0089020a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089020c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089020d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890210u); call_ind(t); }
    /* 00890210: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
L_00890213:; BB(0x00890213);
    /* 00890213: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00890216: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890218: je 0x890223 */ if (fZ) goto L_00890223;
L_0089021a:; BB(0x0089021a);
    /* 0089021a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089021c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089021d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890220u); call_ind(t); }
    /* 00890220: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_00890223:; BB(0x00890223);
    /* 00890223: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00890226: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890228: je 0x890233 */ if (fZ) goto L_00890233;
L_0089022a:; BB(0x0089022a);
    /* 0089022a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089022c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089022d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890230u); call_ind(t); }
    /* 00890230: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_00890233:; BB(0x00890233);
    /* 00890233: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00890236: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00890238: je 0x890240 */ if (fZ) goto L_00890240;
L_0089023a:; BB(0x0089023a);
    /* 0089023a: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089023c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089023d: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x890240u); call_ind(t); }
L_00890240:; BB(0x00890240);
    /* 00890240: mov eax, esi */ r_eax = r_esi;
L_00890242:; BB(0x00890242);
    /* 00890242: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00890243:; BB(0x00890243);
    /* 00890243: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890244: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00890245: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00890246: ret 0x10 */ FN_RET(0x0088ff65); r_esp += 20; return;
}

